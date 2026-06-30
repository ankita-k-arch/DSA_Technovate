You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.

 

Example 1:

Input: arr = [0,3,8,9,5,2]
peak = 9

Output: 3


#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 1, end = A.size() - 2;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (A[mid - 1]<A[mid] && A[mid]> A[mid + 1]) {  //mid
                return mid;
            }

            else if (A[mid - 1] < A[mid]) { //right search
                st = mid + 1;
            }

            else {                    //left search
                 end = mid - 1;
            }
        }
        return -1;
    }
};
int main(){
    vector<int> A ={0,3,8,9,5,2};
    int peak = 9;
    Solution s1;
    cout<<s1.peakIndexInMountainArray( A)<<endl; //output:3;
    return 0;
}