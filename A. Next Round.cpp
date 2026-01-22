
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k,s;
  int sum=0;
  cin >> n >> k;
  vector<int> num;
  for (int i=0;i<n;i++)
  {
      cin >> s;
      num.push_back(s);
  }
  for(int i=0;i<n;i++)
  {
      if(num[i]>=num[k-1] && num[i]>0)
          sum++;
  }
cout << sum << endl;

return 0;
}
