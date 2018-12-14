#include<bits/stdc++.h>
using namespace std;

int getreverse(int n)
{
    if (n < 10)
        return n;
    int x = 0;

    return n%10+getreverse(n/10);
}

bool primer(int n)
{
    for (int i = 2;i*i<=n;i++)
        if (n%i == 0)
            return false;
    return true;
}

int main()
{

    int n;
    while(cin>>n)
    {
        int x = 0;
        while(n != 0)
        {
            x = x*10 + n%10;
            n /= 10;
        }
        if (x == 1||x == 0)
        {
            cout<<"N\n";
            continue;
        }
        if (primer(x))
            cout<<"Y\n";
        else
            cout<<"N\n";
    }

}
