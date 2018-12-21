#include<bits/stdc++.h>
using namespace std;

int n;
int getr(int x)
{
    int sum = 0;
    while(x>0)
    {
        sum = sum*10 + x%10;
        x/=10;
    }
    return sum;
}

int main()
{
    cin>>n;
    double x1 = pow(10,n);
    double x2 = pow(10,n-1);
    //cout<<x2<<' '<<x1<<endl;
    for (int i = x2;i <= x1;i++)
    {
        if (i == getr(i))
            cout<<i<<endl;
    }

    return 0;
}
