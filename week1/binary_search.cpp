#include<iostream>
using namespace std;
int binarysearch(int a[],int s,int e,int val)
{
     int mid=(s+e)/2;

     if(s>e)
          return -1;
     else if(a[mid]==val)
          return mid+1;
     else if(a[mid]<val)
         binarysearch(a,mid+1,e,val);
     else
          binarysearch(a,s,mid-1,val);
}
int main()
{
     int t,n,i,val;
     cin>>t;

     while(t--)
     {
          cin>>n;
          int a[n];
          for(i=0;i<n;i++)
               cin>>a[i];
          cin>>val;
          int c=binarysearch(a,0,n,val);
          if(c==-1)
               cout<<"Not Present "<<n;
          else
               cout<<"Present "<<c;
          cout<<"\n\n";
     }
}
