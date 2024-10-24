//!> 26. Remove Duplicates from Sorted Array...
#include<iostream>
using namespace std;
int main() {

    int n, i, j, k = 0;
    cin>>n;

    int array[n];
    for (int i=0; i<n; i++) {
        cin>>array[i];
    }

    int arr[n];
    arr[0] = array[0];
    k = 1;

    for(int i=1; i<n; i++) {
        for(int j=0; j<k; j++) {
            if(array[i] == arr[j]) {
                break;
            }
        }
        if(j == k) {
            arr[k] = array[i];
            k++;
        }
    }
    for(int i=0; i<k; i++) {
        cout<<arr[i]<<" ";
    }
}