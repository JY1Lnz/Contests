#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,k;
    cin>>c>>k;
    int sum = 0;
    sum += c;
    while(c>=k)
    {
        sum++;
        c -= k;
        c++;
    }
    cout<<sum;

    return 0;
}
