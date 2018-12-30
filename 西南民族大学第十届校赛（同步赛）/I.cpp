#include<bits/stdc++.h>
#define LL long long
using namespace std;
const int MAXN = 1e6+10;
const int MOD = 10000019;
int n;
int dp[20][3];

void print(int n)
{
    for (int i = 0;i<n;i++)
        printf("*");
    printf("\n");
}

int main()
{
    scanf("%d",&n);
    for (int i = 0;i<n-1;i++)
    {
        for (int j = 0;j<i;j++)
            printf(" ");
        print(n);
    }
    for (int i = 0;i<n-1;i++)
        printf(" ");
    print(n);
    for (int i = 0;i<n-1;i++)
    {
        for (int j = 0;j<n-i-2;j++)
            printf(" ");
        print(n);
    }

    return 0;
}
