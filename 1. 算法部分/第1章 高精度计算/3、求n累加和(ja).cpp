#include <bits/stdc++.h>
using namespace std;

int main()
{
  //variable
  int sum[1001],n;

  //input & initialization
  cin>>n;
  memset(sum,0,sizeof(sum));

  //process
  for(int i=1; i<=n; i++)
  {
    sum[0] += i;
    for(int j=0; j<=999; j++)
    {
      if(sum[j]>=10)
      {
        sum[j+1] += sum[j]/10;  //��λ
        sum[j] %= 10; //��λ
      }
    }
  }



  //output
  int number=1001;  //����Сλ
  while(--number && !sum[number]);

  for(int i=number; i>=0; i--)
    cout<<sum[i];

  return 0;
}

