#include <SFML/Graphics.hpp>
#include <vector>
#include <cstdlib>
#include <ctime>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int CELL_SIZE = 20;

struct Tile {
    sf::RectangleShape rect;
    bool isWall;
};

struct Entity {
    sf::CircleShape shape;
    float x, y;
    float dx, dy;
    int radius;
};

int main() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Pac-Man");
    window.setFramerateLimit(60);

    std::vector<std::vector<Tile>> tiles;
    std::vector<Entity> ghosts;
    Entity pacman;

    // Initialize the game board
    for (int y = 0; y < WINDOW_HEIGHT / CELL_SIZE; y++) {
        std::vector<Tile> row;
        for (int x = 0; x < WINDOW_WIDTH / CELL_SIZE; x++) {
            Tile tile;
            tile.rect.setSize(sf::Vector2f(CELL_SIZE, CELL_SIZE));
            tile.rect.setPosition(x * CELL_SIZE, y * CELL_SIZE);
            tile.isWall = (x == 0 || x == (WINDOW_WIDTH / CELL_SIZE) - 1 || y == 0 || y == (WINDOW_HEIGHT / CELL_SIZE) - 1);
            row.push_back(tile);
        }
        tiles.push_back(row);
    }

    // Initialize Pac-Man
    pacman.shape.setRadius(CELL_SIZE / 2);
    pacman.shape.setFillColor(sf::Color::Yellow);
    pacman.x = WINDOW_WIDTH / 2;
    pacman.y = WINDOW_HEIGHT / 2;
    pacman.dx = 0;
    pacman.dy = 0;
    pacman.radius = CELL_SIZE / 2;

    // Initialize ghosts
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        Entity ghost;
        ghost.shape.setRadius(CELL_SIZE / 2);
        ghost.shape.setFillColor(sf::Color::Red);
        ghost.x = rand() % (WINDOW_WIDTH - CELL_SIZE * 2) + CELL_SIZE;
        ghost.y = rand() % (WINDOW_HEIGHT - CELL_SIZE * 2) + CELL_SIZE;
        ghost.dx = (rand() % 3) - 1;
        ghost.dy = (rand() % 3) - 1;
        ghost.radius = CELL_SIZE / 2;
        ghosts.push_back(ghost);
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Handle input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            pacman.dx = -1;
            pacman.dy = 0;
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            pacman.dx = 1;
            pacman.dy = 0;
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            pacman.dx = 0;
            pacman.dy = -1;
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            pacman.dx = 0;
            pacman.dy = 1;
        }

        // Update Pac-Man position
        pacman.x += pacman.dx * CELL_SIZE;
        pacman.y += pacman.dy * CELL_SIZE;

        // Update ghost positions
        for (Entity& ghost : ghosts) {
            ghost.x += ghost.dx * CELL_SIZE;
            ghost.y += ghost.dy * CELL_SIZE;

            // Check collision with walls
            if (ghost.x < CELL_SIZE || ghost.x > WINDOW_WIDTH - CELL_SIZE ||
                ghost.y < CELL_SIZE || ghost.y > WINDOW_HEIGHT - CELL_SIZE) {
                ghost.dx = -ghost.dx;
                ghost.dy = -ghost.dy;
            }
        }

        window.clear();

        // Draw tiles
        for (const auto& row : tiles) {
            for (const Tile& tile : row) {
                if (tile.isWall) {
                    sf::RectangleShape wall(sf::Vector2f(CELL_SIZE, CELL_SIZE));
                    wall.setPosition(tile.rect.getPosition());
                    wall.setFillColor(sf::Color::Blue);
                    window.draw(wall);
                }
            }
        }

        // Draw Pac-Man
        pacman.shape.setPosition(pacman.x, pacman.y);
        window.draw(pacman.shape);

        // Draw ghosts
        for (const Entity& ghost : ghosts) {
            ghost.shape.setPosition(ghost.x, ghost.y);
            window.draw(ghost.shape);
        }

        window.display();
    }

    return 0;
}