#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 1e6+10;
const int MOD = 10000019;
int a[MAXN];
int n;

int main()
{
    scanf("%d",&n);
    for (int i = 1;i<=n;i++)
        scanf("%d",&a[i]);
    int v = -1;
    for (int i = 1;i<n;i++)
    {
        int max1 = -1,max2 = -1;
        for (int j = 1;j<=i;j++)
            max1 = max(max1,a[j]);
        for (int j = i+1;j<=n;j++)
            max2 = max(a[j],max2);
        v = max(abs(max1-max2),v);
    }
    printf("%d\n",v);

    return 0;
}
