#include<iostream>
using namespace std;
int linear_search(int a[],int n,int val)
{  int c=0;
     for(int i=0;i<n;i++)
     {
          if(a[i]==val)
               return c+1;
          ++c;
     }
     return -1;
}
int main()
{
     int n,val,i,t;
     cout<<"Number of test cases you want:\n";
     cin>>t;
     while(t--)
      {

          cout<<"Enter the size of the array:\n";
          cin>>n;

          int a[n];
          cout<<"Enter the array elements:\n";
          for(i=0;i<n;i++)
             cin>>a[i];

          cout<<"Enter the element to be found:\n";
          cin>>val;

          int c=linear_search(a,n,val);
          if(c==-1)
               cout<<"Element could not be found";
          else
               cout<<"Element is found after "<<c<<" no of comparision";
          cout<<"\n\n";
      }
}
