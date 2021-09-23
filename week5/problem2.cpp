#include<bits/stdc++.h>
using namespace std;
void merger(int a[], int l, int mid, int h){

    int n1 = mid-l+1, n2 = h-mid;
    int L[n1], R[n2], i, j, k;

    for(i = 0; i < n1; i++)
        L[i] = a[l+i];

    for(j = 0;j < n2; j++)
        R[j] = a[mid+1+j];

    i = 0; j = 0; k = l;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
            a[k] = L[i++];
        else
            a[k] = R[j++];
        k++;
    }
    while(i < n1)
    {
        a[k++] = L[i++];
    }
    while(j < n2)
    {
        a[k++] = R[j++];
    }
}

void sortHelper(int a[], int l, int h)
{
    if(l < h)
    {
        int mid = l + (h - l) / 2;
        sortHelper(a, l, mid);
        sortHelper(a, mid+1, h);
        merger(a, l, mid, h);
    }
}

void BinarySearch(int* a, int l, int h , int k)
{
    int flag = 0;
    while(h >= l)
    {
        if(a[l] + a[h] == k)
        {
            cout << a[l] << " " << a[h];
             if(l <= 0 && h > 0)
                cout << ", ";
            flag = 1;
        }
        if((a[l] + a[h]) < k)
            l++;
        else
            h--;
    }
    if(!flag)
        cout << "\nNo Such Pair exist" << endl;
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
            cin >> a[i];
          int k;
          cin>>k;
          sortHelper(a,0,n-1);
          BinarySearch(a,0,n-1,k);
     }
}
