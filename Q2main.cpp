#include <iostream>
#include <vector>
#include "linked list.h"
using namespace std;
int main(){
    linkedlist l,t;
    l.Add(2,-1,0);
    l.Add(5,-2,3);
    l.Add(7,-1,6);
    l.Add(6, 3,1);
    l.Print();
    l.Delete(6);
    l.Delete(2);
    l.Print();
    vector<int> v{4,4,5,6,4,5,6,7,5};
    t=l.vectorb(v);
    t.Print();
    cout<<t.sum()<<endl;
}
