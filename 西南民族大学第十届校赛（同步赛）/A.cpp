#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 1e5+10;
const int MOD = 10000019;
LL a[MAXN];
int n;


LL quick(LL a,LL x)
{
    LL r = 1;
    while(x>0)
    {
        if (x&1)
        {
            r = (r*a)%MOD;
            x--;
        }
        a = a%MOD*a%MOD;
        x>>=1;
    }
    return r%MOD;
}

int main()
{
    scanf("%d",&n);
    for (int i = 0;i<n;i++)
        scanf("%lld",&a[i]);
    LL sum = 0;
    for (int i = 0;i<n;i++)
        sum = (sum + quick(a[i],i+1))%MOD;
    printf("%lld\n",sum);

    return 0;
}

