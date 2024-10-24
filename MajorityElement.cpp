//!.. 169.Majority Element..........
//!>. Doing with sort approach 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int MajorityElement(vector<int> arr){
    
    //pehle array ko sort kro 
    sort(arr.begin(), arr.end());

    //Using recursion
    return arr[arr.size() / 2];
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n; // Input the size of the array

    vector<int> arr(n); // Initialize the vector with size n
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read elements into the vector
    }

    int result = MajorityElement(arr);
    cout << "Majority Element is: " << result << endl;
    return 0;
}
