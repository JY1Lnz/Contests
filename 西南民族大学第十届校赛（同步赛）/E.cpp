#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    string a;
    int n;
    cin>>a>>n;
    for (int i = 1; i<n; i++)
    {
        int len = a.length();
        string b = "";
        int w = 1;
        for (int i = 0; i<len; i++)
        {
            if (a[i] != a[i+1]||i == len-1)
            {
                ostringstream oss;
                oss<<w;
                b += oss.str();
                b += a[i];
                w = 1;
            }
            else
            {
                w++;
            }
        }
        a = b;
    }
    cout<<a.length()<<' '<<a<<endl;

    return 0;
}
