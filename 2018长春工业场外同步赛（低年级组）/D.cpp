#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int data[n];
    for (int i = 0;i<n;i++)
        cin>>data[i];
    sort(data,data+n);
    int zu = n/3;
    int sum = 0;
    for (int i = 0;i<n;i++)
        sum+=data[i];
    for (int i = n-3;zu>0;i-=3)
    {
        sum = sum - data[i];
        zu--;
    }
    cout<<sum<<endl;

    return 0;
}
