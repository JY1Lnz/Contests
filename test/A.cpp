#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 200000+10;
const int MOD = 10000019;
int n,k;
int l,r;
int a[MAXN];
int p[MAXN];
int num[MAXN];
vector<int> data[MAXN];

int se(int x)
{
    int now = 0;
    if (a[x] <= k)
        now++;
    int len = data[x].size();
    for (int j = 0; j<len; j++)
    {
        if (data[x][j] == 1||p[data[x][j]] != 0)
            continue;
        p[data[x][j]] = p[x]+1;
        num[data[x][j]] = se(data[x][j]);
        now += num[data[x][j]];
    }
    return now;
}

int main()
{
    scanf("%d%d",&n,&k);
    for (int i = 1; i<=n; i++)
        scanf("%d",&a[i]);
    for (int i = 0; i<n-1; i++)
    {
        scanf("%d%d",&l,&r);
        data[l].push_back(r);
        data[r].push_back(l);
    }

    num[1] = se(1);

    for (int i = 1; i <= n; i++)
        printf("%d ",num[i]);
    printf("\n");


    return 0;
}
