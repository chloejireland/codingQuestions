/*
42. Rewrite the following code fragment using array notation instead of pointer notation:

    void display(int *a, int n) {
    	 while (n) {
	       std::cout << *a << " ";
	       a++;
	       n--;
	 } // end-while
	 std::cout << '\n';
	 
    } // end-display

please include a complete program that tests your code.
*/

#include <iostream>
using namespace std;

void display(int *a, int n);

int main(int argc, char *argv[]) {
    int array[] = {2, 4, 6, 8, 10};
    display(array, 4); 
}

/**
 * @brief This function prints out the contents of an integer array using array notation
 * 
 * @param a the array being printed
 * @param n the length of an array - 1
 * (n cannot be the actual length because n counts down)
 */
void display(int a[], int n) {
    	 while (n >= 0) {
	       std::cout << a[n] << " ";
	       //a++;
	       n--;
	    } // end-while
	std::cout << '\n';	 
} // end-display