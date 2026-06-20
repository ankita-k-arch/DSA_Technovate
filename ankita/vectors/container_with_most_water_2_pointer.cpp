
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

EXAMPLE 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0; //ans
        int lp = 0, rp = height.size() - 1;

        while (lp < rp) {
            int w = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWt = w * ht;
          maxWater = max(maxWater, currWt);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};

int main(){
    vector<int> height= {1,8,6,2,5,4,8,3,7}; //input
    
    Solution obj;

    int maxWater = obj.maxArea(height);

            
   cout<<maxWater<<endl;

   return 0;

}