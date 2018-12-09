#include<bits/stdc++.h>
using namespace std;

struct lei
{
    int kind;
    int number;
};

int main()
{
    int n,m,q;
    while(cin>>n>>m>>q)
    {
        int wupin[n+1];
        for (int i = 1;i<=n;i++)
            cin>>wupin[i];
        lei data[m+1];
        for (int i = 1;i<=m;i++)
        {
            int kind,num;
            cin>>kind>>num;
            data[i].kind = kind;
            data[i].number = num;
        }

        int test[10000010] = {0};
        for (int i = 1;i<=m;i++)
        {
            if (wupin[data[i].kind] >= data[i].number)
            {
                test[i] = 0;
                wupin[data[i].kind] -= data[i].number;
            }
            else
            {
                test[i] = data[i].number - wupin[data[i].kind];
                wupin[data[i].kind] = 0;
            }
        }
        int w;
        while(q--)
        {
            cin>>w;
            if (test[w] == 0)
                cout<<"Yes\n";
            else
                cout<<test[w]<<endl;
        }

    }


    return 0;
}
