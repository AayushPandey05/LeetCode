//!...LEETCODE: 852. Peak Index in a Mountain Array...
//!..Peak Index in a mountain array........
#include<iostream>
using namespace std;
int PeakIndex(int arr[], int n){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        //!..Update Mid...
        mid = start + (end - start) / 2;
    }
    return start;
}
int main() {
    int arr[4] = {0,2,1,0};
    cout<<"Peak index is: "<<PeakIndex(arr,4);
}