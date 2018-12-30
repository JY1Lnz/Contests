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
    scanf("%d",&t);
    int cnt = 0;
    while(t--)
    {
        for (int i = 0;i<3;i++)
            for (int j = 0;j<4;j++)
                scanf("%d",&a[i][j]);
        int head,tail;
        int fh = 0,ft = 0;
        for (int i = 0;i<4;i++)
        {
            if (a[0][i] != 0)
            {
                head = a[0][i];
                fh++;
            }
        }
        for (int i = 0;i<4;i++)
        {
            if (a[2][i] != 0)
            {
                tail = a[2][i];
                ft++;
            }
        }

        if (fh != 1||ft != 1||a[1][0] != a[1][2]||a[1][1] != a[1][3]||head != tail)
            printf("No!\n");
        else
            printf("Yes!\n");

        cnt++;
        if (cnt == 50)
        {
            printf("\n");
            cnt = 0;
        }
    }

    return 0;
}
