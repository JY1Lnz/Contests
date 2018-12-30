#include<bits/stdc++.h>
using namespace std;

struct que
{
    int l;
    int r;
    int num;
    int len;

    bool operator < (const que & B) const
    {
        if (this->l!=B.l)
            return this->l<B.l;
        return this->r>B.r;
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    que q[m];
    for (int i = 0;i<m;i++)
    {
        cin>>q[i].l>>q[i].r;
        q[i].num = i;
        q[i].len = q[i].r-q[i].l;
    }
    sort(q,q+m);
    int num,len = 0,small;
    int flag = 0;

    for (int i = m-1;i>0;i--)
        if (q[i].r < q[i-1].r)
        {
            flag = 1;
            num = q[i].num;
            break;
        }
    //cout<<flag<<endl;

    if (!flag)
    {
        if (q[m-2].r >= q[m-1].r)
        {
            num = q[m-1].num;
            flag = 1;
        }
        else
        {
            small = q[m-1].r-q[m-2].r;
            num = q[m-1].num;
        }
        //cout<<small<<endl;
        if (!flag)
        {
            for (int i = m-2;i>0;i--)
            {
                int tmp;
                if (q[i+1].l-q[i-1].r == 1||q[i+1].l<=q[i-1].r)
                {
                    num = q[i].num;
                    break;
                }
                else
                {
                    tmp = q[i+1].r-q[i-1].l;
                    if (tmp < small)
                    {
                        small = tmp;
                        num = q[i].num;
                    }
                }
            }
        }
    }
    int w,t = 0;
    int i = 0;
    if (num != 0)
    {
        len = q[0].l - 1;
        w = q[0].r;
        i = 0;
    }
    else
    {
        len = q[1].l - 1;
        w = q[1].r;
        i = 1;
    }
    t++;
    if (t == m-1)
        len += n-q[i].r;
    for(i = 1;i<m;i++)
    {
        if (num == q[i].num)
            continue;
        t++;
        if (q[i].l <= w+1)
            w = q[i].r;
        else
        {
            w = q[i].r;
            len += q[i].l - q[i-1].r-1;
            //cout<<len<<endl;
        }
        if (t == m-1)
            len += n-q[i].r;
    }
    cout<<num+1<<' '<<len<<endl;


    return 0;
}
