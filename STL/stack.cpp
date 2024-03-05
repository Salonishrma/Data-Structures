#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s1;
   s1.push("saloni");
   s1.push("sharma");
   s1.push("himachal");
   cout<<"top element of the stack is= "<<s1.top()<<endl;
   s1.pop();
   cout<<"top element of stack after pop is = "<<s1.top()<<endl;
   cout<<"size ="<<s1.size()<<endl;
   cout<<"is stack empty "<<s1.empty()<<endl;
    return 0;
}
