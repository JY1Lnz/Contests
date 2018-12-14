#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100] = "00";
    while(cin>>s+2)
    {
        int n;
        int len = strlen(s)/3;
        int data[3];
        for (int i = strlen(s)-len,j = 2;i>=0;i-=len,j--)
        {
            sscanf(&s[i],"%d",&n);
            s[i] = 0;
            data[j] = n;
        }
        cout<<data[0]<<' '<<data[1]<<' '<<data[2]<<endl;
        s[0] = '0',s[1] = '0';
    }

    return 0;
}
