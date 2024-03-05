#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l1;
    list<int>l2(5,100);
    for(int j:l2){
        cout<<j<<" ";
    }
    cout<<endl;
    l1.push_back(2);
    l1.push_front(1);
    l1.push_front(0);
    for(int i:l1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<l1.front()<<" is the front of list"<<endl;
    cout<<l1.back()<<" is the last element of list"<<endl;
    l1.erase(l1.begin());
    cout<<"element afteer erase ";
    for(int i:l1){
        cout<<i<<" ";
    }
    return 0;
}
