#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long mac,dick;
    cin>>mac>>dick;
    for (int i = 1;;i++)
    {
        if (i%2 != 0)
        {
            if (mac<i)
            {
                cout<<"Mac\n";
                break;
            }
            mac -= i;
        }
        else
        {
            if (dick<i)
            {
                cout<<"Dick\n";
                break;
            }
            dick -= i;
        }
    }

    return 0;
}
