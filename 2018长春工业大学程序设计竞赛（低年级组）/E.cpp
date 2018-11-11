#include<bits/stdc++.h>
using namespace std;
//^ = 1
//> = 2
//v = 3
//< = 4
int main()
{
    char l,r;
    long long n;
    while(cin>>l>>r>>n)
    {
        n = n%4;
        int l_n,r_n;
        switch(l)
        {
            case '^':
                l_n = 1;
                break;
            case '>':
                l_n = 2;
                break;
            case 'v':
                l_n = 3;
                break;
            case '<':
                l_n = 4;
                break;
        }
        switch(r)
        {
            case '^':
                r_n = 1;
                break;
            case '>':
                r_n = 2;
                break;
            case 'v':
                r_n = 3;
                break;
            case '<':
                r_n = 4;
                break;
        }
        //cout<<l_n<<' '<<r_n;
        int flag_r = 0,flag_l = 0;
        int l_n_1 = l_n,l_n_2 = l_n;
        for (int i = 1;i<=n;i++)
        {
            l_n_1++;
            if (l_n_1 > 4)
                l_n_1 = 4;
        }
        for (int i = 1;i<=n;i++)
        {
            l_n_2--;
            if (l_n_2 < 1)
                l_n_2 = 4;
        }
        if (l_n_1 == r_n)
            flag_r = 1;
        if (l_n_2 == r_n)
            flag_l = 1;
        if (flag_r == 1)
            cout<<"cw"<<endl;
        else if (flag_l == 1)
            cout<<"ccw"<<endl;
        else
            cout<<"undefined"<<endl;

    }

    return 0;
}

