#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        int x,y;
        cin>>x>>y;
        double l12 = sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
        double l23 = sqrt((y3-y2)*(y3-y2)+(x3-x2)*(x3-x2));
        double l31 = sqrt((y1-y3)*(y1-y3)+(x1-x3)*(x1-x3));
        double Sabc = sqrt((l12+l23+l31)/2*)

    }


    return 0;
}
