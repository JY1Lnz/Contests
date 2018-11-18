#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,t;
        int sum = 0;
        cin>>m>>t;
        deque<int> data[m];
        while(t--)
        {
            int w,len;
            cin>>w>>len;
            for (int i = 1;i<=len;i++)
                data[w-1].push_back(1);
            int k = 0;
            bool flag = true;
            while(flag)
            {
                int flag_2 = 1;
                for (int i = 0;i<m;i++)
                {
                    if (data[i].empty())
                    {
                        flag_2 = 0;
                        break;
                    }
                }
                if (flag_2 == 1)
                    k++;
                else
                    break;
                for(int i = 0;i<m;i++)
                {
                    data[i].pop_front();
                }

            }
            if (k>1)
                sum += 2*k;
            else if (k == 1)
                sum += 1;
            else
                ;

        }
        cout<<sum<<endl;

    }


    return 0;
}
