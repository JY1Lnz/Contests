#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1;
        cin>>n1;
        double sum = 0;
        char op;
        int n,m,r;
        while(n1--)
        {
            cin>>op;
            if (op == 'T')
            {
                cin>>n>>m;
                sum = max(sum,double(n*m/2));
            }
            else if (op == 'R')
            {
                cin>>n>>m;
                sum = max(sum,double(n*m));
            }
            else
            {
                cin>>r;
                double s = 3.14159*r*r;
                sum = max(sum,s);
            }
        }
        printf("%.2f\n",sum);
    }

    return 0;
}
