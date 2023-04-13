#include <iostream>
#include <vector>
using namespace std;
// Define a node structure to store value, occurrence and pointer to next node
struct node{
    int value;
    int occorunce;
    node *next;
};

// Define a linked list class
class linkedlist{
private:
    node *h; // Declare head node pointer
public:
    linkedlist(); // Constructor
    void Add(int,int,int); // Add node to the list
    void Delete(int); // Delete node from the list
    void Print(); // Print the list
    linkedlist vectorb(vector<int>); // Create a linked list from a vector
    int sum(); // Calculate the sum of all the nodes in the list
};

