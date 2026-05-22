// Problem Statement 2
// Title: Find the Minimum Element in an Array
// Description:
// Given an array of integers, write a program to find the smallest element in the array.
// You must use either a class or a function to solve this problem.

/*
Input Format:
First line: Integer n (size of array)
Second line: n space-separated integers

Output Format:
Print the minimum element

Example:
Input:
5
4 2 9 1 7

Output:
1
*/

#include<iostream>
using namespace std;

int findMinElement(int array[], int n){
    int min = array[0];
    for(int i = 1; i<n; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int array[n];
    cout<<"Enter the elements of array : "<<endl;
    for(int i = 0; i< n; i++){
        cin>>array[i];
    }
int result = findMinElement(array,n);

cout<<"Minimum Element in array : "<<result<<endl;

}
