#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int sum = 1;
        int zong = n;
        string s[n];
        for (int i = 0;i<n;i++)
            s[i] = "0000000000";
        int w = 0;
        while(n--)
        {
            int ci;
            cin>>ci;
            int x;
            while(ci--)
            {
                cin>>x;
                if (s[w][x] == '0')
                    s[w][x]++;
            }
            w++;
        }
        for (int i = 1;i<zong;i++)
        {
            int flag = 0;
            for (int j = 0;j<i;j++)
                if (s[j] == s[i])
                    flag = 1;
            if (flag == 0)
                sum++;
        }
        //cout<<s[0]<<endl;
        //cout<<s[1]<<endl;
        //cout<<s[2]<<endl;
        cout<<sum<<endl;
    }

    return 0;
}

