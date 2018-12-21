#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int data[n];
        int dp[n] = {0};
        for (int i = 0;i<n;i++)
            cin>>data[i];
        sort (data,data+n);
        cout<<unique(data,data+n)-data<<endl;

    }

    return 0;
}
