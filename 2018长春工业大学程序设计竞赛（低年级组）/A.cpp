#include<bits/stdc++.h>
using namespace std;

int main()
{
    int data[10];
    for (int i = 0;i<10;i++)
        cin>>data[i];
    reverse(data,data+10);
    for (int i = 0;i<10;i++)
        cout<<data[i]<<' ';
    cout<<endl;

    return 0;
}
