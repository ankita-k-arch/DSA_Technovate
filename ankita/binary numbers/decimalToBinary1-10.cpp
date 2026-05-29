//convertion of Binary number to Decimal Number from 1-10
#include<iostream>
using namespace std;

int DecimalToBinary(int DecNum){
    int ans = 0,
     power = 1;
    while(DecNum>0){
       int  rem = DecNum % 2;
       DecNum /=2;
       ans += rem * power;
       power *=  10;

    }
    return ans; // binary form 
};

int main(){
int DecNum = 50;
for(int i=1;i<=10;i++){
cout<<DecimalToBinary(DecNum)<<endl; 
}
    return 0;
}
//output :
110010
110010
110010
110010
110010
110010
110010
110010
110010
110010