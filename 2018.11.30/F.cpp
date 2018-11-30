#include<bits/stdc++.h>
using namespace std;

int main()
{
    float data[30] = {1,1};
    for (int i = 2;i<30;i++)
        data[i] = data[i-1]+data[i-2];
    double sum = 0;
    int n;
    cin>>n;
    for (int i = 1;i<=n;i++)
    {
        sum += data[i+1]/data[i];
    }
    printf("%.3lf\n",sum);

    return 0;
}
