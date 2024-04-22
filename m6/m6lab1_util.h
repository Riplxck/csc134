#ifndef M6LAB1_UTILITY_H
#define M6LAB1_UTILITY_H
// Header files lets you add more functions to your program
#include <iostream>
using namespace std;

// constants
const int MAX_SHELLS = 6;
const int EMPTY = 0;
const int BLANK = 1;
const int LIVE = 2;

// prototypes
// get the name of the shell
string shell_name (int shell);

// functions
string shell_name(int shell) {
// input: number of shell
// output: name ("empty", "blank", "live")
string name;
if(shell ==EMPTY) {
name = "EMPTY";

}
if (shell == BLANK) {
name = "BLANK";

}
if (shell == LIVE) {

name = "LIVE";


}
return name;
}









#endif // M6LAB1_UTILITY_H