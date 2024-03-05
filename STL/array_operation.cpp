#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5>a1={2,6,7,3,1};
    cout<<"size of array "<<a1.size()<<endl;;
    for(int i=0;i<5;i++){
        cout<<a1[i]<<" ";
        cout<<endl;
    }
    cout<<"first element of array "<<a1.front()<<endl;
    cout<<"last element of array "<<a1.back()<<endl;
    cout<<"is array empty "<<a1.empty()<<endl;
    cout<<"element at this index is "<<a1.at(3);
    return 0;
}
