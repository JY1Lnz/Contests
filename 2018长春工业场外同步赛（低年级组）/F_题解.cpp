#include<bits/stdc++.h>
using namespace std;

//从排序的范围从左到右找出比目标小的值
//记下有几个，再判断左边序号加上小的值的个数
//判断是否等于目标位置
//数组下标从1开始
int a[10005],b[10005];
int main() {
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    while(n--){
        int l,r,k;
        cin>>l>>r>>k;
        if(k>r)
            cout<<"Yes"<<endl;
        else{
            int cot=0;
            for(int i=l;i<=r;i++)
                if(a[i]<a[k])
                    cot++;
            if(l+cot==k)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
