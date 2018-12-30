#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int MAXN = 3000*2+10;
const int MAXN1 = 3000+10;

char a[MAXN][MAXN];
int n,m;
int startx,starty,endx,endy;
struct Path
{
    int x;
    int y;
    int steps;
    Path(int _x = 0,int _y = 0,int _steps = 0)
    {
        x = _x;
        y = _y;
        steps = _steps;
    }
};

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
    queue<Path> que;
    que.push(Path(startx,starty,1));
    a[startx][starty] = '*';
    int steps = -1;
    while(!que.empty())
    {
        int tx = que.front().x;
        int ty = que.front().y;
        int step = que.front().steps;
        if (tx == endx&&ty == endy)
        {
            steps = step;
            break;
        }
        if (a[tx-1][ty] != '-'&&a[tx-2][ty] != '*')
        {
            que.push(Path(tx-2,ty,step+1));
            a[tx-2][ty] = '*';
        }
        if (a[tx+1][ty] != '-'&&a[tx+2][ty] != '*')
        {
            que.push(Path(tx+2,ty,step+1));
            a[tx+2][ty] = '*';
        }
        if (a[tx][ty+1] != '|'&&a[tx][ty+2] != '*')
        {
            que.push(Path(tx,ty+2,step+1));
            a[tx][ty+2] = '*';
        }
        if (a[tx][ty-1] != '|'&&a[tx][ty-2] != '*')
        {
            que.push(Path(tx,ty-2,step+1));
            a[tx][ty-2] = '*';
        }
        que.pop();
    }
    if (steps != -1)
        printf("%d\n",steps);
    else
        printf("TRDD Got lost...TAT\n");


    return 0;
}

