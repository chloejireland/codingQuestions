// chapter 11 problem 11

/* 
    Complete the following function that counts the even numbers in an integer vector. For example, if
    vector vec contains the elements 3, 5, 4, −1, and 0, the call count_evens(vec) would evaluate
    to 2, since the vector contains two even numbers: 4 and 0. The function returns zero if the vector is
    empty. The function does not affect the contents of the vector.
            int count_evens(const std::vector<int>& v) {
                // Add your code...
        }
*/

#include <iostream>
#include <vector>
/**
 * @brief This method counts the number of even numbers in an integer vector
 * 
 * @param v the vector
 * @return int count, the number of even numbers in the vector v
 */
int count_evens(const std::vector<int>& v) {
    int count = 0;
    for (int i = 0; i < v.size(); i++) { // loop through the vector
        if (v[i] >= 0) {
            if (v[i] % 2 == 0) { // if the element of the vector is even or greater than zero
                count++;
            }
        } 
    } 
    std::cout <<"The number of even integers is " << count << '\n'; // print the sum to the screen
    return count; 
}

// test the method sum_positive
int main() {
    std::vector<int> vec{3, 5, 4, -1, 0,};
    count_evens(vec);
}
