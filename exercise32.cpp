/* 

32. Complete the following function that adds up all the positive values in an array of integers. 
For example, if array arr contains the elements 3, -3, 5, 2, −1, and 2, the call sum_positive(arr) would evaluate to 12, 
since 3 + 5 + 2 + 2 = 12. The function returns zero if the array is empty (that is, n < 1).

    // Array a with length n
    int sum_positive(const int *a, int n) {
    	// Add your code...
    }

Please include a complete program that tests your code . . .

*/

#include <iostream>
using namespace std;

int sum_positive(const int *a, int n);

int main(int argc, char *argv[]) {
    int a [] = {3, -3, 5, 2, -1, 2};
    cout << sum_positive(a, 6); // evaluates to 12 
}

/**
 * @brief this function sums the positive integers in an array
 * 
 * @param a the array 
 * @param n the length of the array
 * @return sum - the sum of the positive integers
 */
int sum_positive(const int *a, int n) {
    int sum = 0;
    if(n > 0) {
        for (int count = 0; count < n; count++) {
            if (a[count] > 0) {
                sum += a[count];
            }
        }
        
    }
    else {
        cout << "Cannot sum an empty array.";
    }
    return sum;
}