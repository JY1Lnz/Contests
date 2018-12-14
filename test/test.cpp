#include<bits/stdc++.h>
using namespace std;

void print_subset(int n,int * A,int cur)
{
    for (int i = 0;i<cur;i++)
        printf("%d ",A[i]);
    cout<<endl;
    int s = cur?A[cur-1]+1 : 0;
    for (int i = s;i < n;i++)
    {
        A[cur] = i;
        print_subset(n,A,cur+1);
    }
}

int main()
{
    int data[] = {1,2,7,4};
    print_subset(4,data,0);

    return 0;
}
