#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b;
  cin >> a >>b ;
  int sum=0;
 while (a<=b)

   {
     sum++;
     a=3*a;  // per year 3 gun bare ......purber 3 guner sathe jhog hobe na....sudhu gun hobe
     b=2*b;
   }

    cout << sum <<endl;
return 0;
}
