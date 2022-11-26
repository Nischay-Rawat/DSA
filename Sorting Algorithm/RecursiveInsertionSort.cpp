class Solution
{
    public:
    void insert(int arr[], int i)
    {
        //code here
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
     if(n<=1){
         return ;
     }
     insertionSort(arr,n-1);
     int item = arr[n-1];
     int j= n-2;
        while(j>=0&&arr[j]>item){
         arr[j+1]=arr[j];
        j--;
     }
     arr[j+1]=item;
    }
};