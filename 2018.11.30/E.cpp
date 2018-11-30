#include<bits/stdc++.h>
using namespace std;

int main()
{
    int data[4][3];
    for (int i = 0;i<4;i++)
        for (int j = 0;j<3;j++)
            cin>>data[i][j];
    int big_n = 0,big_l = 0,big_r = 0;
    for (int i = 0;i<4;i++)
        for (int j = 0;j<3;j++)
        {
            if (data[i][j] > big_n)
            {
                big_n = data[i][j];
                big_l = i;
                big_r = j;
            }
        }
    printf("%d %d %d\n",big_n,big_l,big_r);

    return 0;
}
