#include<iostream>
#include<memory.h>
using namespace std;

int main()
{

    int n,k;
    scanf("%d%d",&n,&k);
    int step = 0;
    while(n!=k)
    {
        if (k&1)
            k--,step++;
        else
        {
            if (k/2 < n)
            {
                step += min((k-n),(n-k/2+1));
                break;
            }
            else
            {
                k /= 2;
                step++;
            }
        }
    }
    printf("%d\n",step);

    return 0;
}
