#include <iostream>
#include <vector>
using namespace std;

// Define a function to insert a number after another number in a vector
bool insertAfter(vector<int> &v, int v1, int v2) {
    vector<int>::iterator iter; // Declare an iterator to traverse the vector
    bool found = false; // Initialize a boolean variable to check if the first number is found in the vector
    for (iter = v.begin(); iter < v.end(); iter++) { // Traverse the vector and look for the first number
        if (*iter == v1) { // If the first number is found
            iter = v.insert(iter + 1, v2); // Insert the second number after the first number
            found = true;  // Set the found variable to true
        }
    }
    return found; // Return the value of the found variable
}

int main() {
    int size; // Declare a variable to hold the size of the vector
    cout << "Number of integers to enter: "; // Prompt the user to enter the size of the vector
    cin >> size;  // Read the size of the vector from the user
    vector<int> v(size); // Declare a vector of integers of the specified size
    vector<int>::iterator iter; // Declare an iterator to traverse the vector
    int i = 0; // Initialize a counter variable
    for (iter = v.begin(); iter < v.end(); iter++) { // Traverse the vector and prompt the user to enter each number
        cout << "Number " << i + 1 << ": ";// Prompt the user to enter the i-th number
        cin >> *iter; // Read the numbers from the user
        i++; // Increment the counter variable
    }
    for (iter = v.begin(); iter < v.end(); iter++) // Traverse the vector and print each number
        cout << *iter << " ";
    cout << endl;
    cout << "Please enter number to insert: "; // Prompt the user to enter the number to insert
    int num1;
    cin >> num1;
    cout << "Please enter after which number do you want to insert the new number: "; // Prompt the user to enter the number after which the new number should be inserted
    int num2;
    cin >> num2;
    if (insertAfter(v, num2, num1) == true) { // Call the insertAfter function to insert the number
        for (iter = v.begin(); iter < v.end(); iter++) // Traverse the updated vector and print each number
            cout << *iter << " ";
        cout << endl;
    }
    else // If the first number is not found in the vector, print an error message
        cout << num2 << " not found in vector" << endl;
}




