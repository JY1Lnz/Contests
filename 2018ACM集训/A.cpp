#include<bits/stdc++.h>
using namespace std;

int bei(int n)
{
    if (n == 1)
        return 1;
    return 10*bei(n-1);
}

int main()
{
    string s;
    while(cin>>s)
    {
        int n = count(s.begin(),s.end(),'.');
        if (n != 3)
        {
            cout<<'N'<<endl;
            continue;
        }
        bool flag = true;
        for (auto c:s)
            if (c == '.'||(c<='9'&&c>='0'))
                flag = true;
            else
            {
                flag = false;
                break;
            }
        if (flag == false)
        {
            cout<<'N'<<endl;
            continue;
        }
        for (int i = 0;i<3;i++)
        {
            string ss(s,0,s.find('.',0));
            if (*ss.begin() == '0')
            {
                flag = false;
                break;
            }
            int n = 0;
            int t = ss.length();
            while(ss.length()>0)
            {
                n += (*ss.begin()-48)*bei(t);
                t--;
                ss.erase(ss.begin());
            }
            if (n > 255)
            {
                flag = false;
                break;
            }
            s.erase(0,s.find('.',0)+1);
        }
        if (*s.begin() == '0')
            flag = false;
        int sum = 0;
        int t = s.length();
        while(s.length()>0)
        {
            sum += (*s.begin()-48)*bei(t);
            t--;
            s.erase(s.begin());
        }
        if (sum > 255)
            flag = false;
        if (flag == false)
            cout<<'N'<<endl;
        else
            cout<<'Y'<<endl;
    }


    return 0;
}
