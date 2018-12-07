#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x;
    cin>>n>>k;
    int data[k+1] = {0};
    int b[k+1] = {0};
    for (int i = 0;i<n;i++)
    {
        cin>>x;
        data[x]++;
    }
    for (int i = 1;i<=k;i++)
        cout<<data[i]<<' ';
    cout<<endl;
    for (int i = 1;i<=k;i++)
    {
        if (data[i] != 0)
            b[i] = b[i]+data[i];
        for (int j = i+i;j<=k;j+=i)
            b[j] = b[j] + data[i];
    }
    for (int i = 1;i<=k;i++)
        cout<<b[i]<<' ';
    cout<<endl;
    int maxnum = 0;
    int sum = 0;
    for (int i = 1;i<=k;i++)
        maxnum = max(maxnum,b[i]);
    for (int i = 1;i<=k;i++)
        if(b[i] == maxnum)
            sum++;
    cout<<maxnum<<' '<<sum<<endl;

    return 0;
}
