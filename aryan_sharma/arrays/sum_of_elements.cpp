// Problem Statement 3
// Title: Calculate Sum of Array Elements
// Description:
// Write a program to calculate the sum of all 
// elements in an array.
// Use a function or class.
//  Input Format
// 
// 
// First line: Integer n
// Second line: n integers
//  Output Format
// 
// Print sum
//  Example
// Input:
// 4  
// 1 2 3 4
// Output:
// 10


#include<iostream>
#include<vector>
using namespace std;

// function for sum
int sumOfElements(vector<int> &arr){
    int sum = 0;
    for(int i = 0; i<arr.size(); i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    //taking input
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int result = sumOfElements(arr);
    
    // printing output
    cout<< result ;
    return 0;
}
