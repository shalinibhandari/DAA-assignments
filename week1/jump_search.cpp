#include<bits/stdc++.h>
using namespace std;
int linear_search(int a[],int s,int e ,int val)
{  int c=0;
     for(int i=s+1;i<e;i++)
     {    ++c;
          if(a[i]==val)
               return c;
     }
     return -1;
}
void jump_search(int a[],int n,int val)
{  int i;
   int p=sqrt(n);
   int c=-1,count=0;
   for(i=0;i<n;i+=p)
     {    if(a[i]==val)
           {
               count=1;
               c=(i/p)+1;
           }
          else if(a[i+p]==val&&i+p<n)
           {
               count=1;
               c=(i+p)/p+1;
           }
          else if(a[i]<val &&i+p>=n)
           {
               if(a[n-1]>=val)
               {
                    c=linear_search(a,i,n,val);
               }

           }
          else if(a[i]<val && a[i+p]>val)
               {
                    c=linear_search(a,i,i+p,val);
               }

          if(c!=-1)
                    break;
          }

          if(count==1)
               cout<<"Present "<<c;
          else if(c==-1)
               cout<<"Not Found "<<n/p;
          else
               cout<<"Present "<<c+(i/p)+1;
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
          jump_search(a,n,val);
          cout<<"\n\n";
     }
}
