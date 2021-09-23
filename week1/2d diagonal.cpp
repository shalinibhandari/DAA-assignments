#include<bits/stdc++.h>

using namespace std;
int maxi;

 string reach(string a[],int t)
 {
     int n=a.size();
     char temp[n][n];
     for(int i=0;i<n;i++)
        temp[i]=a[i];
        maxi=INT_MAX;
        bool visited[n][n];
          int m=a[0].size();
        //reach(temp,t,0,0,visited,0);
        if(maxi<=t)
        return "YES";
        else
        return "NO";
 }
int main()
{
     int n,m,t;
     cin>>n;
     string a[n];
     for(int i=0;i<n;i++)
       cin>>a[i];
     cin>>t;

     cout<<reach(a,t);


}

