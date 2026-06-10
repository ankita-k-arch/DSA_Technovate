Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 

Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000

#include<iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) {
            return 1.0;
        }
        if (x == 0) {
            return 0.0;
        }
        if (x == 1) {
            return 1.0;
        }
        if (x == -1 && n % 2 == 0) {
            return 1.0;
        }
        if (x == -1 && n % 2 != 0) {
            return -1.0;
        }

        long binForm = n;
        if (n < 0) {
            x = 1 /x;
            binForm = -binForm;
        }
        double ans = 1;
        while (binForm > 0) {
            if (binForm % 2 == 1) {
                ans *= x;
            }

            x *= x;
            binForm /= 2;
        }
        return ans;
    }
    
};

int main(){

    Solution obj;
    cout << obj.myPow(2, 10) << endl;   // 1024
    cout << obj.myPow(2, -2) << endl;   // 0.25
    return 0;
    

}