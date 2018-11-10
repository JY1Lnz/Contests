#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b;
    while(cin>>a>>b)
    {
        if (a == 0&&b == 0)
            break;
        if ((a+b)%7 == 0)
            cout<<7<<endl;
        else
            cout<<(a+b)%7<<endl;
    }

    /*
    int a,b;
    while(cin>>a>>b)
    {
        if (a==0&&b==0)
            break;
        for (int i = 1;i<=b;i++)
        {
            a++;
            if (a>7)
                a = 1;
        }
        cout<<a<<endl;
    }
    */

    return 0;
}
