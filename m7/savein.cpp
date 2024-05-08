#include "raylib.h"

#define GAME_WIDTH 800
#define GAME_HEIGHT 600
#define CELL_SIZE 40
#define BOARD_WIDTH (GAME_WIDTH / CELL_SIZE)
#define BOARD_HEIGHT (GAME_HEIGHT / CELL_SIZE)

int board[BOARD_HEIGHT][BOARD_WIDTH] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1},
    {1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1},
    {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

int pacmanX = 1, pacmanY = 1;
int ghostX = 1, ghostY = 8;
int score = 0;
bool gameOver = false;

Texture2D pacmanTexture, ghostTexture;

void LoadTextures() {
    // Replace with your texture file paths
    pacmanTexture = LoadTexture("pacman.png");
    ghostTexture = LoadTexture("ghost.png");
}

void UnloadTextures() {
    UnloadTexture(pacmanTexture);
    UnloadTexture(ghostTexture);
}
void DrawBoard() {
    BeginDrawing();
    ClearBackground(BLACK);

    for (int y = 0; y < BOARD_HEIGHT; y++) {
        for (int x = 0; x < BOARD_WIDTH; x++) {
            if (board[y][x] == 1) {
                DrawRectangle(x * CELL_SIZE, y * CELL_SIZE, CELL_SIZE, CELL_SIZE, BLUE);
            } else {
                DrawRectangle(x * CELL_SIZE, y * CELL_SIZE, CELL_SIZE, CELL_SIZE, DARKGRAY);
                DrawCircle(x * CELL_SIZE + CELL_SIZE / 2, y * CELL_SIZE + CELL_SIZE / 2, 2, YELLOW);
            }
        }
    }

    DrawTexture(pacmanTexture, pacmanX * CELL_SIZE, pacmanY * CELL_SIZE, WHITE);
    DrawTexture(ghostTexture, ghostX * CELL_SIZE, ghostY * CELL_SIZE, WHITE);

    DrawText(TextFormat("Score: %d", score), 10, 10, 20, WHITE);

    if (gameOver) {
        DrawText("Game Over!", GAME_WIDTH / 2 - 100, GAME_HEIGHT / 2, 40, RED);
    }

    EndDrawing();
}
void MoveGhost() {
    int dx = 0, dy = 0;
    switch (GetRandomValue(0, 3)) {
        case 0:
            dx = -1;
            break;
        case 1:
            dx = 1;
            break;
        case 2:
            dy = -1;
            break;
        case 3:
            dy = 1;
            break;
    }

    if (board[ghostY + dy][ghostX + dx] == 0) {
        ghostX += dx;
        ghostY += dy;
    }
}

int main() {
    InitWindow(GAME_WIDTH, GAME_HEIGHT, "Pacman");
    SetTargetFPS(10);

    LoadTextures();

    while (!WindowShouldClose() && !gameOver) {
        DrawBoard();
        MoveGhost();

        if (IsKeyPressed(KEY_W) && board[pacmanY - 1][pacmanX] == 0) {
            pacmanY--;
        }
        if (IsKeyPressed(KEY_S) && board[pacmanY + 1][pacmanX] == 0) {
            pacmanY++;
        }
        if (IsKeyPressed(KEY_A) && board[pacmanY][pacmanX - 1] == 0) {
            pacmanX--;
        }
        if (IsKeyPressed(KEY_D) && board[pacmanY][pacmanX + 1] == 0) {
            pacmanX++;
        }

        if (board[pacmanY][pacmanX] == 0) {
            score++;
            board[pacmanY][pacmanX] = 2; // Mark the cell as visited
        }

        if (pacmanX == ghostX && pacmanY == ghostY) {
            gameOver = true;
        }
    }

    UnloadTextures();
    CloseWindow();
    return 0;
}