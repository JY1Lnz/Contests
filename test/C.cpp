#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long n;
    while(cin>>n)
    {
        long long money = 1;
        long long bei = 2;
        long long times = 0;
        while(money*bei <= n)
        {
            times++;
            money *= bei;
            bei *= 2;
        }
        times += n-money;
        cout<<times<<endl;
    }
}
