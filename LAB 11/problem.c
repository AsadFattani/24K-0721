// Tasks are as follows:
// * Take the following structures and create 
// functions that perform CRUD 
// (create, read, update delete) operations in 
// a file or multiple files depending on the 
// need based on your understanding. 
// Add a comment that exlpains your choice.

// struct player{
// char name[20];
// char team[20];
// };

// struct bowl{
// char type[10]; // seemer, pacer, spinner// N/A
// char arm[5]; //left or right
// struct player ply;
// };

// struct bat{
// char type[10]; // top order, middle order, lower order
// char handed[8]; //lefty or righty
// struct bowl ply2;
// };

// // suppose that you have to store data for 5 players with at least 3 bowlers. The rest will be N/A.
#include <stdio.h>
#include <string.h>

struct player{
char name[20];
char team[20];
};

struct bowl{
char type[10]; // seemer, pacer, spinner// N/A
char arm[5]; //left or right
struct player ply;
};

struct bat{
char type[10]; // top order, middle order, lower order
char handed[8]; //lefty or righty
struct bowl ply2;
};