#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
  int a,b,c;
  int sumx=0;
  int sumy=0;
  int sumz=0;
  /* 3d vector have 3d dimenion.....so we have to calculate the sum of all the elements of the vector*/
    cin >> n;
    for(int i=0;i<n;i++)
     {
         cin >> a >> b >> c;

        sumx+=a;
        sumy+=b;
        sumz+=c;

     }


  if (sumx==0 && sumy==0 && sumz==0)
  {cout << "Yes" << endl;}
  else
  {cout << "NO" << endl;}
return 0;
}
