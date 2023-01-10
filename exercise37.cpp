/*
37. Consider the declaration

    int collection[100][200];

Write the C++ code that prints all the elements in collection. 
All the elements in the same row should appear on the same line, and but 
each successive row should appear on its own line.

*/
#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
    int collection[100][200];


    for(int row = 0; row < 100; row++) {
        for(int col = 0; col < 200; col++) {
            cout << collection[row][col];
        }
        cout << '\n';
    }

}