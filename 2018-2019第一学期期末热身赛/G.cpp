#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
const int maxn = 1000000+10;
long long sum = 0;
int a[maxn],b[maxn];
int n;


int main()
{
    while(cin>>n)
    {
        sum = 1;
        for (int i = 0;i<n;i++)
            cin>>a[i]>>b[i];
        for (int i = 0;i<n;i++)
        {
            sum = (sum * (a[i]+b[i])%MOD)%MOD;
        }
        cout<<sum<<endl;
    }

    return 0;
}
