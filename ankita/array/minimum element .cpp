#include<iostream>
#include<vector>
using namespace std;
class Array{
    private:
    std::vector<int> arr;
    public:
    void input(){
        int n;
        std::cout<<"Enter the number of Elements:"<<endl;
        std::cin>>n;
        arr.resize(n);
        std::cout<<"enter the Elements:"<<endl;    
            for(int i=0;i< n; i++){
        std::cin>>arr[i];
        };
    }
    void display(){
        std::cout<<"Elements in array are:"<<endl;
        for(const auto& element:arr){
            std::cout<<element<<"";
            std::cout<<endl;
        };
    };
    int smallest() const{
        int minVal= arr[0];
        for(const auto& element:arr){
            if(element<minVal){
                minVal=element;
            };
        };
        std::cout<<"Smallest value is:"<<minVal<<endl;
        return minVal;
    }
};
int main(){
    Array myArray;
    myArray.input();
    myArray.display();
    myArray.smallest();
    return 0;
}
