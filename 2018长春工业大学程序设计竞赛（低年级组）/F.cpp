#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
        long long sum = 0;
        long long c_1 = 1;
        long long c_2 = 0;
        long long tmp = 0;
        long long s = 0;
        //if (n == 1)
            //cout<<1<<endl;
        for (int i = 1;i<=n;i++)
        {
                //c_1++;
            s = c_2;
            c_2 = c_1;
            tmp = s*2;
            sum += s;
            c_1 = tmp;
            //cout<<c_1<<' '<<c_2<<' '<<sum<<endl;
        }
        cout<<sum+c_1+c_2<<endl;
    return 0;
}
