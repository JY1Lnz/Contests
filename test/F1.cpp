#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,q;
    cin>>n>>m;
    int data[m];
    for (int i = 0;i<m;i++)
        cin>>data[i];
    cin>>q;
    int people[q];
    for (int i = 0;i<q;i++)
        cin>>people[i];
    sort(data,data+m);
    for (int i = 0;i<q;i++)
    {
        int len = 0;
        int w = lower_bound(data,data+m,people[i])-data;
        if (w == 0)
            len = abs(data[w] - people[i]);
        else if (w == m)
            len = abs(data[w-1] - people[i]);
        else
            len = min(abs(data[w]-people[i]),abs(data[w-1]-people[i]));
        cout<<len<<endl;
    }



    return 0;
}
