#include<bits/stdc++.h>
using namespace std;
int main()
{

     int t,n;
     cin>>t;
     while(t--)
     {
          cin>>n;
          char a[n];
          multimap<int ,char>mape;
          map<char,int>freq;
          for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }
        int flag = 0;
        for(auto i: freq)
            mape.insert({i.second, i.first});
        if(mape.rbegin()->first > 1)
        {
            cout<<mape.rbegin()->second<<"-"<<mape.rbegin()->first<<endl;
            flag = 1;
        }
        if(!flag)
            cout<<"No Duplicate Present."<<endl;
     }
}
