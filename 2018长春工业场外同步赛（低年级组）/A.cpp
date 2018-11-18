#include<bits/stdc++.h>
using namespace std;

int main()
{
    int data[3];
    while(cin>>data[0]>>data[1]>>data[2])
    {
        sort(data,data+3);
        for (int i = 0;i<3;i++)
            cout<<data[i]<<" ";
        cout<<endl;
    }

    return 0;
}
