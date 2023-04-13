#include <iostream>
#include <vector>
#include "linked list.h"
using namespace std;
int main(){
    linkedlist l,t;
    vector<int> v{4,4,5,6,4,5,6,7,5};
    t=l.vectorb(v);
    t.Print();
    cout<<t.sum()<<endl;
}
