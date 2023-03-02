
#include <iostream>
#include <cstring>
using namespace std;

// Define a structure to hold a name
struct Name {
    char first[50];
    char last[50];
};

// Bubble sort function to sort an array of names
void bubbleSort(Name arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements and swap if necessary
            if (strcmp(arr[j].last, arr[j+1].last) > 0) {
                Name temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of names: ";
    cin >> n;

    // Create an array of Name structures
    Name names[n];

    // Read in the names from the keyboard
    for (int i = 0; i < n; i++) {
        cout << "Enter first name for name " << i+1 << ": ";
        cin >> names[i].first;
        cout << "Enter last name for name " << i+1 << ": ";
        cin >> names[i].last;
    }

    // Sort the names in alphabetical order
    bubbleSort(names, n);

    // Print the sorted names
    cout << "Sorted names:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i].first << ", " << names[i].last << endl;
    }
  return 0;
}










