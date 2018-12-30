#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAXN = 1e6+10;
int n;
int a[MAXN];
int times[MAXN][2];
struct Line
{
    int l;
    int r
    bool operator < (const Line & that)const
    {
        if (this->l != that.l)
            return this->l < that.l;
        return this->r < that.r;
    }
}line[100010];

int main()
{
    int lm = 1e6+10,rm = 0;
    scanf("%d",&n);
    for (int i = 0;i<n;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        line[i].l = l;
        line[i].r = r;
    }
    sort(line,line+n);




    return 0;
}
