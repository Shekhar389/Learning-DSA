//Program to solve kth grammar problem
#include<bits/stdc++.h>
using namespace std;
int answer(int n, int k)
{
  if(n==1&&k==1)
  {
    return 0;
  }
  int mid=pow(2,n-1)/2;
  if(k<=mid)
  {
    return answer(n-1,k);
  }
  else if(k>mid)
  {
    if(~(answer(n-1,k-mid)==-1))
    {
        return 1;
    }
    else
    return 0;
  }
}

int main()
{

cout<<answer(4,2);
}