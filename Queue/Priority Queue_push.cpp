//arrange inserted elements according to their higher priorty
#include <bits/stdc++.h>
using namespace std;
int main(){
priority_queue<int>q1;
q1.push(17);
q1.push(12);
q1.push(8);
q1.push(90);
while(!q1.empty()){
    cout<<q1.top()<<" ";
    q1.pop();
}

    return 0;
}
