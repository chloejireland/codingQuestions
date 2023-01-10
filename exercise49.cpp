/*
49. Complete the following function that counts the number of negative values in a 10 × 10 integer 10D array.

    int count_negatives(int a[10][10]) {
    	// Add your code...
    }
*/

#include <iostream>
using namespace std;

int count_negatives(int a[10][10]);


int main(int argc, char *argv[]) {
    int a[10][10]; // uninitialized 2D array will have random values 
    cout << count_negatives(a);
}

/**
 * @brief this function counts then number of negative values in a 10 x 10 int array
 * 
 * @param a the 2D 10 x 10 integer array
 * @return int count - the number of negative valuess
 */
int count_negatives(int a[10][10]) {
    int count = 0;
    for(int row = 0; row < 10; row++) {
        for(int col = 0; col < 10; col++) {
            if (a[row][col] < 0) {
                count++;
            }
        }
    }
    return count;
}