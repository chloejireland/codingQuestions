/*
Complete the following function that determines if all the elements in one vector also appear in
another. The function returns true if all the elements in the second vector also appear in the first;
otherwise, it returns false. For example, if vector vec1 contains the elements 3, 5, 2, −1, 7,
and 2, and vector vec2 contains the elements 5, 7, and 2, the call contains(vec1, vec2)
would evaluate to true. If instead vector vec2 contains the elements 3, 8, −1, and 2, the call
contains(vec1, vec2) would evaluate to false (8 does not appear in the first vector). Also
If vector vec2 contains the elements 5, 7, 2, and 5, the call contains(vec1, vec2) would
evaluate to false (5 appears twice in vec2 but only once in vec1, so vec1 does not contain all the
elements that appear in vec2). The function does not affect the contents of the vectors.
        bool contains(const std::vector<int>& v1, const std::vector<int>& v2) {
            // Add your code...
        }
*/

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief This function determines if all the elements in one vector also appear in another.
 * The function returns true if all the elements in the second vector also appear in the first;
 * otherwise, it returns false.
 * 
 * @param v1 the first vector 
 * @param v2 the second vector 
 * @return true - if all the elements in the second vector also appear in the first 
 * @return false - if the second vector containts elements that are not in the first
 */
bool contains(const vector<int>& v1, const std::vector<int>& v2) {

        for (int v2idx = 0; v2idx < v2.size(); v2idx++) { // to iterate through the second vector
            int currentNum = v2[v2idx]; // store the element
            int countOfCurrentNum = count(v2.begin(), v2.end(), currentNum); // get the count of the element in the second vector
            if (countOfCurrentNum > count(v1.begin(), v1.end(), currentNum)) { // if the count of the element in the second vector is greater then the count of the same element in the first vector 
                return false; 
            }
        }
    return true;
}

int main() {
    // ****** TESTS ********
    vector<int> v = {3, 5, 2, -1, 7, 2};
    vector<int> v2 = {5, 7, 2};
    vector<int> v3 = {3, 8, -1, 2};
    vector<int> v4 = {5, 7, 2, 5};
    cout << contains(v, v2); // return 1 (true)
    cout << contains(v, v3); // return 0 (false)
    cout << contains(v, v4); //return 0 (false)
}


/*
// I realized that i don't need this function in the contains method,
// but i worked for a while on it and did not want to delete :)


vector<vector<int>> countFreq(const vector<int> &v) {
    vector<vector<int>> v2d{}; 
    vector<int> row0{};
    vector<int> row1{};
    bool countedZeros = false;
    int number = 0;
    // for loop for going through the vector
    for (int x = 0; x < v.size(); x++) {
        //if num is greater than 0
        if (v[x] > 0) {
            number = count(v.begin(), v.end(), v[x]);
            if (count(row0.begin(), row0.end(), v[x]) == 0) {
                row0.push_back(v[x]); // the number from the vector
                row1.push_back(number); // the count of occurances
            }
            //}
        }
        
        // else if num is less than 0
        else if (v[x] < 0 ) {
            int negElem = v[x];
            number = count(v.begin(), v.end(), negElem);
            if (count(row0.begin(), row0.end(), v[x]) == 0) {
                row0.push_back(negElem);
                row1.push_back(number);
            }    
        }

        // else if num is 0
        else if (v[x] == 0) {
            if (countedZeros == false) {
                if (count(v.begin(), v.end(), x) > 0) {
                    number = count(v.begin(), v.end(), 0);
                    row0.push_back(x);
                    row1.push_back(number);
                    countedZeros = true;
                }
            }
            else {
                break;
            }
        }
        //  nonvalid value
        else {
            cout <<"The vector containts a non integer value. Please try again;";
        }
    }
    v2d.push_back(row0);
    v2d.push_back(row1);
    return v2d;

} // end countFreq func
*/
