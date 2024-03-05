#include <iostream>
#include<algorithm>
using namespace std;
void display(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<",";
    }
}

int main()
{
   int array[]={2,4,3,1,6,17,8,9,12,7};
  int  n= sizeof(array)/sizeof(array[0]);
   sort(array,array+n);
   display(array,n);
   cout<<endl;
   if(binary_search(array,array+n,10)){
       cout<<"element found"<<endl;
   }
   else{
       cout<<"element not found"<<endl;
   }
    return 0;
}
