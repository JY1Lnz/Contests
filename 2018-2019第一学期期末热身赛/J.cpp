#include<bits/stdc++.h>
using namespace std;

string big_add(string a,string b)
{
    string s;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int sum = 0;

    for (int i = 0;i<b.length();i++)
    {
        sum = (a[i]-'0')+(b[i]-'0')+sum;
        s += char(sum%10 + '0');
        sum/=10;
    }
    for (int i = b.length();i<a.length();i++)
    {
        sum = (a[i]-'0') + sum;
        s += char(sum%10 + '0');
        sum/=10;
    }
    while(sum > 0)
    {
        s += char(sum%10 + '0');
        sum/=10;
    }
    for (int i = s.length()-1;i>=0;i--)
        if (s[i] != '0')
            break;
        else
            s[i] = 0;
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    int t,cnt = 0;
    cin>>t;
    while(t--)
    {
        string s,b,n;
        int k;
        cin>>k;
        cin>>s;
        b.assign(s,0,k);
        for (int i = 0;i<=s.length()-k;i++)
        {
            n.assign(s,i,k);
            if (n > b)
                b = n;
        }
        string num = "0";
        reverse(b.begin(),b.end());
        for (int i = 0;i<k;i++)
        {
            if (b[i] == '1')
            {
                string tmp = "2";
                for (int j = 1;j<i;j++)
                {
                    tmp = big_add(tmp,tmp);
                }
                if (i == 0)
                    tmp = "1";
                if (i == 1)
                    tmp = "2";
                num = big_add(tmp,num);
            }
        }
        printf("Case #%d: ",++cnt);
        if (k == 0)
            cout<<0<<endl;
        else
            cout<<num<<endl;

    }

    return 0;
}
