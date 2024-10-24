#include<iostream>
using namespace std;

bool isPerfect(int num) {
    int s = 0;
    int e = num;

    while (s <= e) {
        long long int mid = s + (e - s) / 2; // Calculate mid
        long long int square = mid * mid; // Calculate square of mid
        
        if (square == num) {
            return true; // Perfect square found
        } 
        else if (square < num) {
            s = mid + 1; // Move to the right half
        } 
        else {
            e = mid - 1; // Move to the left half
        }
    }
    return false; // No perfect square found
}

bool isPerfectSquare(int num) {
    return isPerfect(num);
}

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    bool res = isPerfectSquare(num);
    if (res) {
        cout << "The number is a perfect square." << endl;
    } else {
        cout << "The number is not a perfect square." << endl;
    }
    return 0;
}