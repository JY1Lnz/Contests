#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[110],temp[110];
    int n,a[30];
    while (cin>>n){
        memset(a,0,sizeof(a));
        memset(temp,'\0',sizeof(temp));
        cin>>str;
        int len=strlen(str),flag=1;
        for (int i=0;i<len;i++){
            a[str[i]-'a'+1]++;
        }
        int cnt=0;
        for (int i=1;i<=26&&flag;i++){
            if (a[i]%n!=0){
                flag=0;
                break;
            }
            else{
                int t=a[i]/n;
                while (t--){
                    temp[cnt++]=(char)('a'+i-1);
                }
            }
        }
        if (flag==1){
//          int t=len/n;
            while (n--){
                printf("%s",temp);
            }
            printf("\n");
        }
        else
            printf("-1\n");
    }
    return 0;
}
