#include <iostream>
#include <vector>
using namespace std;
struct node{
    int value;
    int occorunce;
    node *next;
};
class linkedlist{
private:
    node *h;
public:
    linkedlist();
    void Add(int,int,int);
    void Delete(int);
    void Print();
    linkedlist vectorb(vector<int>);
    int sum();
};
