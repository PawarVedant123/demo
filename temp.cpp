#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int n = 5; // specify the number of arrays

    // Declare a 2-dimensional vector of empty vectors
    vector<vector<int>> arr(n);

    // Accessing an element
    // For example, setting the element at index 2 to [1, 2, 3]
    arr[2] = {1, 2, 3};

    // Displaying the arrays
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
