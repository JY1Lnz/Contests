#include<bits/stdc++.h>
using namespace std;

int main()
{
    string mum_s,child_s;
    cin>>child_s>>mum_s;
    long long mum_n = 1,child_n = 1;
    for (int i = 0;i<mum_s.length();i++)
        mum_n *= mum_s[i]-64;
    for (int i = 0;i<child_s.length();i++)
        child_n *= child_s[i]-64;
    if (mum_n % 47 == child_n % 47)
        cout<<"I got it!"<<endl;
    else
        cout<<"It is a dream."<<endl;


    return 0;
}
