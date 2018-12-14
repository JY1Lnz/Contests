#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double x = n*log10(n);
        x = fmod(x,1.0);
        cout<<(int)pow(10,x)<<endl;
    }

    return 0;
}
