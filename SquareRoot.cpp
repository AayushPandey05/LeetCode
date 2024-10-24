//!..69. Sqrt(x)...
#include<iostream>
using namespace std;
long long int BinarySearch(int num){
    int start = 0;
    int end = num;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;
    while(start <= end){
        long long int square = mid * mid;
        if(square == num){
            return mid;
        }
        else if(square < num){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        //!..Update Mid...
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;

    int result = BinarySearch(num);
    cout<<"Square Root is: ";
    cout<<result<<endl;
}