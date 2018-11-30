#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int data[100]={0};
    int x = 1;
    for (int i = 1;i<=n;i++)
    {
        x = x*i;
        data[i] = data[i-1]+x;
    }
    cout<<data[n]<<endl;

    return 0;
}
