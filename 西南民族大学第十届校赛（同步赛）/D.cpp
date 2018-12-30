#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 5000+10;
const int MOD = 10000019;
int a[MAXN];
int n;


bool seLove(int n,int t)
{
    int first = n;
    while(t--)
        first = a[first];
    if (first == n)
        return true;
    else
        return false;
}

int main()
{
    scanf("%d",&n);
    for (int i = 1;i<=n;i++)
        scanf("%d",&a[i]);
    int flag = 0;
    for (int i = 1;i<=n;i++)
    {
        if (seLove(i,3))
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
