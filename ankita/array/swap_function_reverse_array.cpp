Title: Reverse an Array
Description:
Write a program to reverse the elements of 
an array.
● Input Format
First line: Integer n
Second line: n integers
● Output Format
Print reversed array
● Example
Input:
5 
1 2 3 4 5
Output:
5 4 3 2 1
#include <iostream>
using namespace std;

void mySwap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int arr[], int n)
{
    for(int i = 0; i < n/2; i++)
    {
        mySwap(&arr[i], &arr[n-1-i]);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;

    reverseArray(arr, n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}