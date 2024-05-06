#include <iostream>
#include <vector>


// CSC 134
// M6LAB2 - Vectots and linked lists
// carterL
// 4/22/24

using namespace std;

struct Node {
int num;   // the data
Node* next; // pointer to next node
};


int main () {

    cout << "M6LAB2" << endl;
    // part 1 vectors
    // create a vector of ints
vector <int> numbers;
// add numbers to the end
int num;
int how_many;
cout << "Enter how many numbers? ";
cin >> how_many;
for (int i=0; i < how_many; i++) {
cout << "Enter a number: ";
cin >> num;
numbers.push_back(num);
}
// print out the vector
cout << "Vector contents: ";
for (int i: numbers) {
    cout << i << ", ";
}
cout << endl;

// part 2 - linked list
// make some nodes, then link them together
Node* head = nullptr; // no head = empty list

Node first;
first.num = 1;
first.next = nullptr;

Node second;
second.num = 2;
second.next = nullptr;

// connect head to first
head = &first; // & = adress of or reference to
// connect first to second
first.next = &second;

// finally, loop through the list
Node* probe = head;
while (probe != nullptr) {

    cout << probe->num << ",";
    probe = probe->next;
}
cout << endl;


    return 0;
}