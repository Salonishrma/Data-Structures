//advance version we can push , pop from both ends 
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d1;
    d1.push_front(1);
    d1.push_front(2);
    d1.push_back(4);
    for(int i:d1){
        cout<<i<<endl;
    }
    cout<<"first element "<<d1.front()<<endl;
    cout<<"last elemesnt "<<d1.back()<<endl;
    cout<<"is deque empty "<<d1.empty()<<endl;
    cout<<"elemnet at 2nd index "<<d1.at(2)<<endl;
    cout<<"before erase size "<<d1.size()<<endl;
    d1.erase(d1.begin(),d1.begin()+1);
    cout<<"after erase size "<<d1.size()<<endl;
    d1.pop_front();
    for(auto it=d1.begin();it!=d1.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}
