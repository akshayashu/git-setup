#include <bits/stdc++.h>

using namespace std;

void function(int a[], int n, int k)
{
    stack<int> s;
    int f=0,b=n-1;
    while(a[f]<=k && f<n/2)
    {
        s.push(a[f]);
        f++;
    }
    while(a[b]<=k && b>=n/2)
    {
        s.push(a[b]);
        b--;
    }
    cout<<(n-s.size());
}

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    function(a,n,k);

    return 0;
}
