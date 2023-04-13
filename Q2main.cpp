#include <iostream>
#include <vector>
#include "linked list.h" // Including header file for linked list implementation
using namespace std;
int main(){
    linkedlist l,t; // Creating two instances of linked list class
    l.Add(2,-1,0); // Adding elements to l linked list
    l.Add(5,-2,3);
    l.Add(7,-1,6);
    l.Add(9,7,3);
    l.Add(6, 3,1); //Will no be added since 3 is not in the linked list
    cout<<"linked list after adding nodes: "<<endl;
    l.Print(); // Printing the linked list l
    l.Delete(6); // Nothing will happen since 6 is not in the linked list
    l.Delete(2); // Deleting an element from l
    cout<<"linked list after deleting nodes: "<<endl;
    l.Print(); // Printing the linked list l again
    vector<int> v{4,4,5,6,4,5,6,7,5}; // Creating a vector of integers
    t=l.vectorb(v); // Creating a new linked list t from the vector v using function vectorb which returns a linked list.
    cout<<"linked list t: "<<endl;
    t.Print(); // Printing the linked list t
    cout<<"Sum of linked list t: "<<endl;
    cout<<t.sum()<<endl; // Printing the sum of all the elements in linkedlist t
}
