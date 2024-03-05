#include<iostream>
#include<queue>
using namespace std;
int main(){
   queue<string>q1;
   q1.push("saloni");
   q1.push("sharma");
   q1.push("himachal");
   cout<<"front element of the queue  is= "<<q1.front()<<endl;
   q1.pop();
   cout<<"front element of queue after pop is = "<<q1.front()<<endl;
   cout<<"size ="<<q1.size()<<endl;
   cout<<"is queue empty "<<q1.empty()<<endl;
   q1.push("hello");
   q1.pop();
   cout<<q1.front();
    return 0;
}
