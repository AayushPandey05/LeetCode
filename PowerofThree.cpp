//!.Problem: 326. Power of Three...
#include<bits/stdc++.h>
using namespace std;
bool Power(int n){
    if(n == 0){
        return false;
    }
    while(n % 3 == 0){
        n /= 3;
    }
    return (n = 1) ? true : false;
}
int main(){
    int n;
    cin>>n;
    int result = Power(n);
    if(result){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}