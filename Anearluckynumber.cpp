#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   int sum=0;
   while(n>0)
   {
       if(n%10==4 || n%10==7)
       {
           sum ++;
       }
       n/=10;
   }
   while(sum>0)
   {
       if(sum%10!=4 && sum%10!=7)
       {
           cout << "NO"<< endl;
           sum=0;
       }
       else
       {cout << "Yes"<< endl;
            sum=0; }
   }



return 0;
}

