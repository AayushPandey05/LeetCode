#include <iostream>
using namespace std;

void Intersection(int array1[], int n, int array2[], int m) {
    bool printed[n]; // Array to track printed elements
    for (int i = 0; i < n; i++) {
        printed[i] = false; // Initialize all elements as not printed
    }

    for (int i = 0; i < n; i++) {
        // Check if the current element has already been printed
        if (!printed[i]) {
            for (int j = 0; j < m; j++) {
                // Check for intersection
                if (array1[i] == array2[j]) {
                    cout << array1[i] << " "; // Print the intersection element
                    printed[i] = true; // Mark this element as printed
                    break; // Exit the inner loop once found
                }
            }
        }
    }
}

int main() {
    int n;
    cin >> n; // Input size of first array
    int array1[n];
    for (int i = 0; i < n; i++) {
        cin >> array1[i]; // Input elements of first array
    }

    int m;
    cin >> m; // Input size of second array
    int array2[m];
    for (int j = 0; j < m; j++) {
        cin >> array2[j]; // Input elements of second array
    }

    cout << "Intersection of Arrays are: ";
    Intersection(array1, n, array2, m); // Call the function to find intersection

    return 0;
}