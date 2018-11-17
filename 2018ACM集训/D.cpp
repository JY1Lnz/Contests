#include<iostream>
#include<algorithm>

int main()
{
    int n;
    while(std::cin>>n)
    {
        int data[n];
        for (int i = 0;i<n;i++)
            std::cin>>data[i];
        std::sort(data,data+n);
        if (n%2 == 0)
        {
            float sum = data[n/2]+data[n/2-1];
            printf("%.2f\n",sum/2);
        }
        else
        {
            float sum = data[n/2];
            printf("%.2f\n",sum);
        }
    }

    return 0;
}
