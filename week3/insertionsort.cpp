#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[], int n){
    int key,i,j,comparisons=0,shifts=0;
    for(int i=1;i<n;i++){
        shifts++;
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
            comparisons++;
            shifts++;
        }
        arr[j+1] = key;
    }
     for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
    cout<<endl<<"Comparisons: "<<comparisons<<endl;
    cout<<"Shifts: "<<shifts<<endl;
}
int main()
{
     int t,n;
     cin>>t;
     while(t--)
     {
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++)
               cin>>arr[i];
          InsertionSort(arr,n);
     }
}
