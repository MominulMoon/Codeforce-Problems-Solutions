#include<bits/stdc++.h>
using namespace std;

int main()
{
  long int n;
   cin >> n;
   int sum = 0;
   while (n>0)
      {
         if(n%10==4 || n%10==7)
            sum ++ ;
         n/=10;
      }
   if (sum==0)
      cout << "NO" << endl;
   while(sum>0)
      {  if(sum%10!=4 && sum%10 !=7 )
         cout << "NO" << endl;
   else
         cout << "Yes" << endl;
   sum/=10;}
return 0;
}
