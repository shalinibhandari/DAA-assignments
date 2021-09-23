#include<bits/stdc++.h>
using namespace std;

int  main()
{

    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(j=0;j<m; j++)
        cin>>b[j];

    i=0; j=0;
    while(i<n&&j<m)
    {
        if(a[i] == b[j])
        {
            cout<<a[i++]<<" ";
        }
        else if(a[i]<b[j])
            i++;
        else
            j++;
    }
}
