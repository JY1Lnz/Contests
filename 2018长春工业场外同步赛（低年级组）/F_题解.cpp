#include<bits/stdc++.h>
using namespace std;

//������ķ�Χ�������ҳ���Ŀ��С��ֵ
//�����м��������ж������ż���С��ֵ�ĸ���
//�ж��Ƿ����Ŀ��λ��
//�����±��1��ʼ
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
