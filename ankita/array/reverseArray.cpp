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
#include<iostream>
using namespace std;

int reverseArray(int arr[], int size){
    int start = 0, end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return 0;
};

int main(){
   int arr[] = {4,2,7,8,1,2,5};
   int sz= 7;
   cout<<sz<<endl;
   for(int i=0;i<sz;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   
   reverseArray(arr,sz);
   cout<<"output:";
   for(int i=0;i<sz;i++){
    
    cout<<arr[i]<<" "; 
   }
cout<<endl;
return 0;

}

//output:5 2 1 8 7 2 4 

