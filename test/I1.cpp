#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    while(cin>>len)
    {
        string s;
        bool flag = false;
        cin>>s;
        map<char,int> data;
        for (int i = 0;i<s.length();i++)
            data[s[i]]++;
        auto it = data.begin();
        for (;it != data.end();it++)
            if(it->second%len != 0)
            {
                flag = true;
                break;
            }
        if (flag)
        {
            cout<<-1<<endl;
            continue;
        }
        for (int i = 0;i<len;i++)
            for (it = data.begin();it != data.end();it++)
                for (int j = 0;j<it->second/len;j++)
                    cout<<it->first;
        cout<<endl;
    }

    return 0;
}
