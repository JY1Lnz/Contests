#include<bits/stdc++.h>
using namespace std;

string a1 = "*****";
string a2 = "....*";
string a3 = "*...*";
string a4 = "*....";

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        vector<string> data;
        string s;
        for (int i = 0;i<8;i++)
        {
            cin>>s;
            data.push_back(s);
        }
        vector<string> L,R;
        for (int i = 0;i<8;i++)
        {
            string x;
            x.assign(data[i],0,5);
            L.push_back(x);
            x.assign(data[i],6,5);
            R.push_back(x);
        }
        int l,r;
        if (L[0] == a1)
        {
            if (L[1] == a3)
            {
                if (L[3] == a3)
                    l = 0;
                else if (L[4] == a2)
                    l = 9;
                else
                    l = 8;
            }
            else if (L[1] == a2)
            {
                if (L[3] == a2)
                    l = 7;
                else if (L[4] == a2)
                    l = 3;
                else
                    l = 2;
            }
            else if (L[1] == a4)
            {

            }
        }
    }


    return 0;
}
