#include <iostream>
#include<queue>
#include<stack>
using namespace std;
struct Queue{
    stack<int>s1,s2;
void enqueue(int x){
        s1.push(x);
    }
int dequeue(){
    if(s1.empty() && s2.empty()){
        cout<<"queue is empty";
        exit(0);
    }
    if(s2.empty()){
        while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }
};

int main()
{
   Queue q;
   q.enqueue(10);
   q.enqueue(20);
   q.enqueue(30);
   q.enqueue(40);
   q.enqueue(50);
   cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue()<<endl;
    return 0;
}
