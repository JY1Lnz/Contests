#include<bits/stdc++.h>
using namespace std;

void Big_low(string & s)
{
    for (int i = 0;i < s.length();i++)
            if (isupper(s[i]))
                s[i] = tolower(s[i]);
}

int main()
{
    string word,sentence;
    while(cin>>word)
    {
        char z;
        z = getchar();
        getline(cin,sentence);
        int sum = 0;
        Big_low(word);
        Big_low(sentence);
        //cout<<word<<endl;
        //cout<<sentence<<endl;

        int len = word.length();
        for(int i = 0;i<=sentence.size()-len;)
        {
            string s(sentence,i,len);
            if (s == word)
            {
                sum++;
                i = i+len;
            }
            else
                i++;
        }
        cout<<sum<<endl;
    }

    return 0;
}
