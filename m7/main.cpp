#include <iostream>
#include<vector>
using namespace std;
int main () {
greet();

string codeword = "Codingcleverly";
string answer = "_______________";
int misses = 0;
vector<char> incorrect;
bool guess = false;
char letter;


while(answer!=codeword && misses < 7)
{
    display_misses(misses);
}


return 0;
}