#include<bits/stdc++.h>
using namespace std;
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
          int k;
          cin>>k;
          int c=0;
         for(int i=0;i<n;i++)
          {

              for(int j=i+1;j<n;j++)
               {
                   if(abs(a[j]-a[i])==k)
                    {  ++c;

                    }
               }
           }
          cout<<c<<"\n";
     }
}
