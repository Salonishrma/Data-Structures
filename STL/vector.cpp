#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector size is 0 in statring it can change is size during run time, it double it size
    vector<int>v1;
    cout<<"capacity in satrting= "<<v1.capacity()<<endl;;
    v1.push_back(10);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(60);
    cout<<"element inseted= ";
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*it<<",";
    }
    cout<<endl;
    v1.pop_back();
    cout<<"elements after deletion = ";
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*it<<",";
    }
    cout<<endl;
    cout<<"this tell the capacity of vector "<<v1.capacity()<<endl;
    cout<<"this tell how many element are there in vector "<<v1.size()<<endl;
    cout<<"the element present at index 2 is "<<v1.at(2)<<endl;
    cout<<"element present at front is "<<v1.front()<<endl;
    cout<<"element present at back is "<<v1.back()<<endl;
    return 0;
}
