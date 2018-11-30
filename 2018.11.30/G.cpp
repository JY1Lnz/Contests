#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if (sqrt(n)*sqrt(n)==n)
    {
        cout<<n<<endl;
        return 0;
    }
    for (int i = n+1,j = n-1;j>=1;j--,i++)
    {
        if (sqrt(i)*sqrt(i)==i)
        {
            cout<<i<<endl;
            break;
        }
        else if (sqrt(j)*sqrt(j)==j)
        {
            cout<<j<<endl;
            break;
        }
    }

    return 0;
}
