
/* Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.

Examples
Input
4
Output
2
Input
5
Output
-3
*/
#include<bits/stdc++.h>
using namespace std;

long long f(long long n)
{
    if(n%2==0)
    {
        return n/2;
    }
    else
    {
        return -(n+1)/2;
    }
}

int main()
{
  long long  int n;
   cin >> n;
    cout << f(n)<<endl;
return 0;
}
