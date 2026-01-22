#include <bits/stdc++.h>
using namespace std;

int str(string s,string c)
{
    int st=0;
    while(st<s.length())
    {
        if(tolower(s[st])==tolower(c[st]))
        {
            st++;
        }
        if(tolower(s[st])<tolower(c[st]))
        {
            return -1;
        }
        if(tolower(s[st])>tolower(c[st]))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
   string s;
   string c;
   getline(cin,s);
   getline(cin,c);

   cout << str(s,c) << endl;


    return 0;

}
