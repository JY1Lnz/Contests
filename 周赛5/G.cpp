#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,w = 0;
        cin>>m;
        vector<int> data;
        while(m!=0)
        {
            data.push_back(m%10);
            m/=10;
            w++;
        }
        reverse(data.begin(),data.end());
        //for (auto x:data)
            //cout<<x;/
        vector<int>::iterator it = data.begin();
        //cout<<*it;
        /*
        if (it+1 == data.end())
        {
            cout<<0<<endl;
            continue;
        }
        */
        if (w == 1)
        {
            cout<<0<<endl;
            continue;
        }
        int weizhi = w-1;
        for (int i = 0;i<w-1;i++)
        {
            if (data[i]>data[i+1]&&data[1]!=0)
            {
                weizhi = i;
                break;
            }
        }
        for (int i = 0;i<weizhi;i++)
            cout<<data[i];
        for (int i = weizhi+1;i<w;i++)
            cout<<data[i];
        cout<<endl;
    }

    return 0;
}
