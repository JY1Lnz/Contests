#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int data[n];
    for (int i = 0;i<n;i++)
        cin>>data[i];
    int small = 0,grate = 0;
    for (int i = 0;i<n;i++)
    {
        if (data[small] > data[i])
            small = i;
        if (data[grate] < data[i])
            grate = i;
    }
    int t = data[0];
    data[0] = data[small];
    data[small] = t;
    t = data[n-1];
    data[n-1] = data[grate];
    data[grate] = t;
    for (int i = 0;i<n;i++)
        cout<<data[i]<<' ';
    cout<<endl;


    return 0;
}
