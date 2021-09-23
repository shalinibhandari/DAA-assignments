#include<bits/stdc++.h>
using namespace std;

int comparison = 0, swaps = 0;

void swapHelper(int arr[], int i, int j){

    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
    swaps++;
}

int part(int arr[], int l, int h){

    int pivot_ele = arr[l],i=l-1;
    for(int j=l; j <=h-1 ; j++){
        if(arr[j]<pivot_ele){
            i++;
            swapHelper(arr,i,j);
        }
        comparison++;
    }
    swapHelper(arr,i+1,h);
    return (i+1);
}

void Sort(int arr[], int l,int h){
    if(l<h){
        int p = part(arr,l,h);
        Sort(arr,l,p-1);
        Sort(arr,p+1,h);
    }
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
          comparison=0,swaps=0;
          Sort(arr,0,n-1);

          cout<<"\ncomparison: "<<comparison<<endl;
          cout<<"swaps: "<<swaps<<endl;
     }
}
