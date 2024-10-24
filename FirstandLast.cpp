//!>.34. Find First and Last Position of Element in Sorted Array...
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
int firstRange(vector<int>& nums, int target){
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;
    int mid = s + (e - s)/2;
    while(s <= e){
        if(nums[mid] == target){
            ans = mid;
            e = mid - 1;
        }
        else if(target > nums[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastRange(vector<int>& nums, int target){
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;
    int mid = s + (e - s)/2;
    while(s <= e){
        if(nums[mid] == target){
            ans = mid;
            s = mid + 1;
        }
        else if(target > nums[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2);
        result[0] = firstRange(nums,target);
        result[1] = lastRange(nums,target);
        return result;
    }
};
int main(){
    int n; // Size of the array
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n); // Initialize vector with size n
    cout << "Enter the elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i]; // Read elements into the vector
    }
    
    int target;
    cout << "Enter the target element: ";
    cin >> target;

    Solution s;
    vector<int> range = s.searchRange(nums, target); // Get the range
    cout << "First and Last Position: [" << range[0] << ", " << range[1] << "]" << endl; // Output the result

    return 0;
}