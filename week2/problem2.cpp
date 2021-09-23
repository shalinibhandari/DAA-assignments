#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int a[], int s, int e,int key){
    while(s<=e)
    {

         int mid=(s+e)/2;
         if(a[mid]==key)
          return mid;
         else if(a[mid]>key)
           e=mid-1;
         else
          s=mid+1;
    }
    return -1;
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
               int c =0;
               sort(a,a+n);
         for(int i=0;i<n-1;i++)
         {
              for(int j=i+1;j<n;j++)
              {

                   int p=a[i]+a[j];
                   int index=Binarysearch(a,0,n-1,p);
                   if(index==-1)
                      continue;
                   else
                   {
                        cout<<i<<" "<<j<<" "<<index<<"\n";
                        c=1;
                        break;
                   }
              }

         }
         if(c==0)
          cout<<"No sequence found!"<<"\n";
     }
}

