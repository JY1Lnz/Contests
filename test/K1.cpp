#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,l,r;
        cin>>k>>l>>r;
        for (int i = r;i>=l;)
        {
            if (k <= 0)
                break;
            if (k>=i)
            {
                k = k-k/i*i;
                //cout<<k<<endl;
            }
            else
                i--;
        }
        if (k == 0)
            cout<<"Y\n";
        else
            cout<<"N\n";
    }

    return 0;
}
