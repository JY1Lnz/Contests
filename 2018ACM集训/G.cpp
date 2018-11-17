#include<iostream>

int main()
{
    using namespace std;
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int l = a*b;
        int r = c*d;
        if (l<r)
            swap(l,r);
        cout<<l-r<<endl;
    }

    return 0;
}
