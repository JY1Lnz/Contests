#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 1e6+10;
const int MOD = 10000019;
int n;
int dp[20][3];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        memset(dp,0,sizeof(dp));
        dp[0][0] = 1;
        for (int i = 1;i<=n;i++)
        {
            int sum = dp[i-1][0]+dp[i-1][1]+dp[i-1][2];
            if (i < 2)
            {
                dp[i][0] = sum;//A
                dp[i][1] = sum;//W
                dp[i][2] = sum;//C
            }
            else
            {
                dp[i][0] = sum-dp[i-1][1];
                dp[i][1] = sum;
                dp[i][2] = sum;
            }
        }
        printf("%d\n",dp[n][0]+dp[n][1]+dp[n][2]);
    }

    return 0;
}
