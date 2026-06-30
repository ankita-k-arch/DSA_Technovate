There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4


#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& A, int target) {
        int st = 0, end = A.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid] == target)
                return mid;

            if (A[st] <= A[mid]) { // left sorted
                if (A[st] <= target && target < A[mid])
                    end = mid - 1;
                else
                    st = mid + 1;
            }
            else { // right sorted
                if (A[mid] < target && target <= A[end])
                    st = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }
};

int main(){
    vector<int>  A  = {4,5,6,7,0,1,2};
    int target = 0;

    Solution s1;
    cout<<s1.search(A,target)<<endl; //output:4
    return 0;
}