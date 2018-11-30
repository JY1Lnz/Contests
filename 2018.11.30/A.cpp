#include<bits/stdc++.h>
using namespace std;

int bei(int n)
{
    if (n == 1)
        return 1;
    return 10*bei(n-1);
}

int main()
{
    int a,b;
    cin>>a>>b;
    int sum = 0;
    int t = 1;
    while(a>0||b>0)
    {
        sum += ((a+b)%10)*bei(t);
        a/=10;
        b/=10;
        t++;
    }
    cout<<sum<<endl;

    return 0;
}
