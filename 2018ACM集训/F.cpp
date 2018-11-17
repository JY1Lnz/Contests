#include<iostream>
#include<algorithm>
#include<string>

int main()
{
    std::string s;
    while(getline(std::cin,s))
    {
        //std::cout<<s<<'\n';
        int l = 0,r;
        while(l<s.length())
        {
            int i = l+1;
            while(isalpha(s[i])&&i < s.length())
                i++;
            r = i;
            reverse(s.begin()+l,s.begin()+r);
            l = r+1;
            while(!isalpha(s[l])&&l<s.length())
                l++;
        }
        std::cout<<s<<std::endl;
    }

    return 0;
}
