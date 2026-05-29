//convert Decimalnumber  to Binary number
#include<iostream>
using namespace std;

int DecimalToBinary(int DecNum){
    int ans = 0,
     power = 1;
    while(DecNum>0){
       int  rem = DecNum % 2;
       DecNum /=2;
       ans += (rem * power);
       power *= 10;

    }
    return ans; // binary form 
};

int main(){
int DecNum = 50;
cout<<DecimalToBinary(DecNum)<<endl; //output: 110010
    return 0;
}
