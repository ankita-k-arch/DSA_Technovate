//convert Binary Number into Decimal Number
#include<iostream>
using namespace std;
int BinaryToDecimal(int binNum){
    int ans = 0;
    int power = 1;
    while(binNum>0){
       int rem = binNum %10;
       ans += rem * power;
       binNum /= 10;
       power *=2; 
     }
     return ans;
}

int main(){

    cout<<BinaryToDecimal(1010)<<endl; // output: 10
    return 0;
}