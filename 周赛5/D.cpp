#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data;
    int a;
    while(cin>>a)
    {
        if (a == 0)
            break;
        data.push_back(a);
    }
    for (vector<int>::iterator it = data.end()-1;it>=data.begin();it--)
        cout<<*it<<' ';

    return 0;
}
