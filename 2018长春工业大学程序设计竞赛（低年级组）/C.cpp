#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        double a,b,c;
        cin>>a>>b>>c;
        c = c/1000;
        b = b/1000;
        double x = c*a;
        double d = x/b;
        double d_1,d_2,d_3;
        //cout<<d<<endl;
        d_1 = d*100;
        d_2 = d*1000;
        d_3 = d*10000;
        cout<<int(d_2)<<endl;
        /*
        if (int(d_2) % 10 == 5)
        {
            if (int(d_3) % 10 > 0)
                printf("%.2f\n",d+0.0011);
            else
            {
                if ((int(d_1) % 10) % 2 == 1)
                    printf("%.2f\n",d+0.0011);
                else
                    printf("%.2f\n",d-0.002);
            }
        }
        else
            printf("%.2f\n",d);
    */
    if (int(d_2) % 10 == 5)
        {
            cout<<5<<endl;

            if (int(d_3) % 10 > 0)
                printf("%.2f\n",d+0.0011);
            else
            {
                cout<<3<<endl;
                if ((int(d_1) % 10) % 2 == 1)
                    printf("%.2f\n",d+0.0011);
                else
                    printf("%.2f\n",d-0.002);
            }
        }
        else
            printf("%.2f\n",d);
}

    return 0;
}

