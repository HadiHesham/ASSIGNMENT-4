#include <iostream>
#include <vector>
using namespace std;
bool insertAfter(vector<int> &v,int v1,int v2){
    vector<int>::iterator iter;
    bool found=false;
    for(iter = v.begin();iter<v.end();iter++)
        if(*iter==v1){
            iter=v.insert(iter+1,v2);
            found = true;
        }
    return found;
}
int main(){
    int size;
    cout<<"Number of integers to enter: ";
    cin>>size;
    vector<int> v(size);
    vector<int>::iterator iter;
    int i=0;
    for(iter=v.begin();iter<v.end();iter++){
        cout<<"Number "<<i+1<<": ";
        cin>>*iter;
        i++;
    }
    for(iter = v.begin();iter<v.end();iter++)
        cout<<*iter<<" ";
    cout<<endl;
    cout<<"Please enter number to insert: ";
    int num1;
    cin>>num1;
    cout<<"Please enter after which number do you want to insert the new number: ";
    int num2;
    cin>>num2;
    if(insertAfter(v,num2,num1)==true){
        for(iter = v.begin();iter<v.end();iter++)
            cout<<*iter<<" ";
        cout<<endl;
    }
    else
        cout<<num2<<" not found in vector"<<endl;
}
