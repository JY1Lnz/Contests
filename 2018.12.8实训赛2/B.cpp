#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,s,m;
    int time;
    {
        h = 0;
        s = 0;
        m = 0;
        scanf("%d",&time);
        if (time < 60)
            printf("%d:%d:%d\n",h,m,time);
        else if (time < 3600)
        {
            m = time /60;
            s = time%60;
            printf("%d:%d:%d\n",h,m,s);
        }
        else
        {
            h = time / 3600;
            time = time % 3600;
            m = time /60;
            s = time%60;

            printf("%d:%d:%d\n",h,m,s);

        }
    }

    return 0;
}
