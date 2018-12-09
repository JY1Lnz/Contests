#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int L[n+1];
    int R[n+1];
    int lq,rq;
    cin>>lq>>rq;
    for (int i = 1;i<=n;i++)
        cin>>L[i];
    for (int i = 1;i<=n;i++)
        cin>>R[i];
    int sum = 0;
    for (int i = lq;i<=rq;i++)
    {
        if (L[i] <= lq&&R[i] >= rq)
            sum++;
    }
    cout<<sum<<endl;


    return 0;
}
