#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    int n;
    cin>>n;
    int data[n];
    for (int i = 0;i<n;i++)
    {
        cin>>data[i];
        sum += data[i];
    }
    int cnt = 0;
    for (int i = 0;i<n;i++)
    {
        if (sum-(2*data[i]) == 0)
            cnt++;
    }
    if (cnt)
        cout<<cnt<<endl;
    else
        cout<<-1<<endl;

    return 0;
}
