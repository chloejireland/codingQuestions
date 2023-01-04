// chapter 11 exercise 10
/*
    Complete the following function that adds up all the positive values in an integer vector. For example,
    if vector vec contains the elements 3, -3, 5, 2, −1, and 2, the call sum_positive(vec) would
    evaluate to 12, since 3 + 5 + 2 + 2 = 12. The function returns zero if the vector is empty. The function
    does not affect the contents of the vector.

        int sum_positive(const std::vector<int>& v) {
            // Add your code...
    }
*/

#include <iostream>
#include <vector>
/**
 * @brief This method sums the positive integers of a vector
 * 
 * @param v the vector
 * @return int, the sum of the positive number in the vector
 */
int sum_positive(const std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) { // loop through the vector
        if (v[i] > 0) { // if the element of the vector is greater than zero
            sum = v[i] + sum; // add that element (number) to sum
        }
    }
    
    std::cout <<"The sum is " << sum << '\n'; // print the sum to the screen
    return sum; 
}

// test the method sum_positive
int main() {
    std::vector<int> vec{3, -3, 5, 2, -1, 2};
    sum_positive(vec);
}