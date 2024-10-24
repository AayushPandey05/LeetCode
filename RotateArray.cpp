//!> 189. Rotate Array
#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

void RotateArray(vector<int>& array, int k){

    //size of array
    int n = array.size();

    //To Handle cases where k >= n
    k = k % n;  

    //reverse the array
    reverse(array.begin(), array.end());

    //reverse the first k elements
    reverse(array.begin(), array.begin() + k);

    //reverse the remaining elements
    reverse(array.begin() + k, array.end());
}

int main(){
    int n;
    cout << "Size: " << endl;
    cin>>n;

    vector<int> array(n);
    cout << "Enter Elements: " << endl;
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    int k;
    cout << "Steps: ";
    cin >> k;

    RotateArray(array,k);
    cout << "Rotated Array: " << endl;
    for(int i=0; i<n; i++){
        cout << array[i] <<" ";
    }
    
    return 0;
}
