#include<bits/stdc++.h>
using namespace std;
int Binary_search(int a[], int s, int e,int key,int occur){
    int mid,index=-1;
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]==key){
            index=mid;
            if(occur)
                e= mid-1;
            else
                s= mid+1;
        }else if(a[mid]>key)
            e=mid-1;
        else if(a[mid]<key)
            s=mid+1;
    }
    return index;
}
int main()
{
     int t,n;
     cin>>t;
     while(t--)
     {

          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)
               cin>>a[i];
          int key;
          cin>>key;
        int firstoccur = Binary_search(a,0,n-1,key,1);
        int lastoccur = Binary_search(a,0,n-1,key,0);
        if(firstoccur!=-1)
            cout<<key<<"->"<<lastoccur-firstoccur+1<<endl;
        else
            cout<<"Key not present "<<key<<endl;
     }
}
