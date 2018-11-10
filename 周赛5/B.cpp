#include<bits/stdc++.h>
using namespace std;

int main()
{
    int data[10] ={0};
    int a,b;
    cin>>a>>b;
    for (int i = a;i<=b;i++)
    {
        int num = i;
        while(num != 0)
        {
            data[num%10]++;
            num /= 10;
        }
    }
    for (int i = 0;i<10;i++)
        cout<<data[i]<<' ';

    return 0;
}
