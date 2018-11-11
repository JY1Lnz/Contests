#include<bits/stdc++.h>
using namespace std;

int main()
{
    const float Pi = 3.14;
    float r,h;
    cin>>r>>h;
    float v,s;
    v = Pi*r*r*h;
    s = 2*Pi*r*h + 2*Pi*r*r;
    printf("%.3f %.3f\n",v,s);

    return 0;
}
