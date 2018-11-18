#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        vector<int> data;
        for(int i = 1;i<=n;i++)
            data.push_back(i);
        m = m-1;
        vector<int>::iterator it = data.begin();
        while(data.size() > 1)
        {
            for (int i = 1;i<=m;i++)
            {
                if (it == data.end())
                it = data.begin();
                it++;
                if (it == data.end())
                    it = data.begin();
            }
            if (it == data.end())
                it = data.begin();
            data.erase(it);
        }
        cout<<*data.begin()<<endl;
    }

    return 0;
}
