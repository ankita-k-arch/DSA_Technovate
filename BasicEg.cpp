/*Wap to take input of array using classes*/
#include <iostream>
#include <vector>
using namespace std;

class Array {
private:
    std::vector<int> arr;
public:
    void input()// Function to take input of array elements 
    {
        int n;
        std::cout << "Enter the number of elements: ";
        std::cin >> n;
        arr.resize(n);
        std::cout << "Enter the elements: ";
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
    }
    void display() // Function to display the elements of the array
    {
        std::cout << "Elements in the array are: ";
        for (const auto& element : arr) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
};
int main() {
    Array myArray;
    myArray.input();// Taking input of array elements
    myArray.display();// Displaying the elements of the array
    return 0;
}