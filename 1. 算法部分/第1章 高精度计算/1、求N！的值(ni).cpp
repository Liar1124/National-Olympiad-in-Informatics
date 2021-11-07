#include <bits/stdc++.h>
using namespace std;
int main()
{
  //variable
  int n,ni[1000],add=0;

  //input & initialization
  cin>>n;
  memset(ni,0,sizeof(ni));
  ni[0]=1;

  //process
  for(int i=1; i<=n; i++)
  {
    for(int bit=0; bit<1000; bit++)
    {
      ni[bit] *= i;
      ni[bit] += add;
      add=ni[bit]/10;  //进位
      ni[bit]%=10;
    }
  }
  //找最高位
  int bit_number=1000;
  while(--bit_number && ni[bit_number]==0);

  //output
  while(bit_number>=0)
  {
    cout<<ni[bit_number];
    bit_number--;
  }
}
