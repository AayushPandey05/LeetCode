//!.Problem: 226. Power of Three...
#include<bits/stdc++.h>
using namespace std;

bool Power(int n){
    if(n == 0){
        return false;
    }
    if(n == 1){
        return true;
    }
    if(n % 2 != 0){
        return false;
    }
    return Power(n / 2);
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