#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int w = 1;
    while(n--)
    {

        string s;
        cin>>s;
        int i = 0;
        bool flag =  true;
        while(i<=s.length()-2)
        {
            if (isdigit(s[i]))
            {
                string x(s,i,2);
                if (x == "13")
                {
                    flag = false;
                    break;
                }
                i += 2;
            }
            else
                i++;

        }
        if (flag)
            cout<<"Case #"<<w<<": Yes, I like it!\n";
        else
            cout<<"Case #"<<w<<": No, it's terrible!\n";
        w++;
    }

    return 0;
}
