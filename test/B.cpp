#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAXN = 3000*2+10;
const int MAXN1 = 3000+10;

char a[MAXN][MAXN];
int vis[MAXN1][MAXN1];
int nexts1[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
int nexts2[4][2] = {{-2,0},{0,2},{2,0},{0,-2}};
int n,m,steps = -1;
int startx,starty,endx,endy;

void dfs(int x,int y,int step)
{
    if (x == endx&&y == endy)
    {
        if (steps != -1)
            steps = min(steps,step);
        else
            steps = step;
        return;
    }

    for (int i = 0;i<4;i++)
    {
        int tx = x+nexts1[i][0];
        int ty = y+nexts1[i][1];
        if (i == 0||i == 2)
        {
            if (a[tx][ty] == '-')
                continue;
        }
        else
        {
            if (a[tx][ty] == '|')
                continue;
        }
        tx = x+nexts2[i][0];
        ty = y+nexts2[i][1];
        if (vis[tx][ty] == 0)
        {
            vis[tx][ty] = 1;
            dfs(tx,ty,step+1);
            vis[tx][ty] = 0;
        }
    }

}

int main()
{
    scanf("%d%d",&n,&m);
    getchar();
    for (int i = 1; i<=2*n+1; i++)
    {
        gets(a[i]+1);
    }
    for (int i = 1; i<=2*n+1;i++)
        for (int j = 1;j<=2*m+1;j++)
            if (a[i][j] == 'S')
                startx = i,starty = j;
            else if (a[i][j] == 'T')
                endx = i,endy =  j;

    vis[startx][starty] = 1;
    dfs(startx,starty,1);
    if (steps != -1)
        printf("%d\n",steps);
    else
        printf("TRDD Got lost...TAT\n");


    return 0;
}
