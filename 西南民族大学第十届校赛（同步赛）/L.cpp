#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 1e6+10;
const int MOD = 10000019;
int n;
int a[3][4];

int main()
{
    int t;
    int op,a,b,c,d;
    int fenzi,fenmu;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d",&op,&a,&b,&c,&d);
        fenmu = b*d;
        if (op == 1)
            fenzi = a*d + b*c;
        else
            fenzi = a*d - b*c;
        int fu = 0;
        if (fenzi < 0)
        {
            fu = 1;
            fenzi = -fenzi;
        }

        int ye = __gcd(fenzi,fenmu);
        fenzi = fenzi/ye;
        fenmu = fenmu/ye;
        if (fu)
            fenzi = -fenzi;
        printf("%d/%d\n",fenzi,fenmu);
    }

    return 0;
}
