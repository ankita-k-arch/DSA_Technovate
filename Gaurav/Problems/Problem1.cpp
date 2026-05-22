/*
Problem Statement:
Find the maximum element in an array.

Input:
First line: integer n (size of array)
Second line: n space-separated integers

Output:
Print the maximum element in the array
*/

#include <iostream>
#include <vector>
using namespace std;

// Function to find maximum element in array
int findMaxElement(const vector<int>& arr) {
    int maxElement = arr[0];
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    return maxElement;
}

int main() {
    int n;
    cin >> n;

    // Edge case: if array is empty
    if (n == 0) {
        return 0;
    }

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findMaxElement(arr);
    cout << result;

    return 0;
}


/*
Input:
5
15 10 3 24 20
Output:
24
*/