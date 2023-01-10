/*
43. Rewrite the following code fragment using pointer notation instead of array notation:

    int sum(int *a, int n) {
    
    	int s = 0;
	for (int i = 0; i < n; i++)
	    s += a[i];
	return s;
	
    } // end-sum

please include a complete program that tests your code.
*/

#include <iostream>
using namespace std;

int sum(int *a, int n);

int main(int argc, char *argv[]) {
    int array[] = {2, 4, 6, 8, 10};
    cout << sum(array, 5); // the sum of array is 30
}

/**
 * @brief This function sums the values of an array using pointer notation
 * 
 * @param a the array of integers
 * @param n the length of the array
 * @return int s - the sum of the values in the array
 */
int sum(int *a, int n) {
    	int s = 0;
        int *p = a;
	for (int i = 0; i < n; i++) {
	    s += *p;
        p++;
    }
	return s;
} // end-sum