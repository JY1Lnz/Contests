#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    vector<int> data;
    for (int i = 0;i<m;i++)
    {
        int a;
        cin>>a;
        data.push_back(a);
    }

    while(n--)
    {
        vector<int> n_data = data;
        int l,r,k,value;
        cin>>l>>r>>k;
        k = k-1;
        value = n_data[k];
        if (k<l-1||k>r-1)
        {
            cout<<"Yes\n";
            continue;
        }
        sort(n_data.begin()+(l-1),n_data.begin()+r);
        if (n_data[k] == value)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}
