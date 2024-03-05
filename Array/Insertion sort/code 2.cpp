//by recursion

class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
        while(i>0 && arr[i-1]>arr[i]){
            int temp=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=temp;
            i--;
        }
      
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
    //base case
      if(n==1){
          return;
      }
      insertionSort(arr,n-1); //recursion go till depth 
      insert(arr,n-1);//add the element during backtracking
    }
};
