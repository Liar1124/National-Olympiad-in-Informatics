#include <bits/stdc++.h>
using namespace std;
int main()
{
  //variable
  int a, b;  // "a" for "Dividend"; "b" for "Divisor"
  int q[21];  //"q" for "Quotient";

  //initialization & input
  cin>>a>>b;
  memset(q,0,sizeof(q));

  //process
  q[0]=a/b;
  for(int i=1; i<=20; i++)
  {
    a = (a%b)*10;
    q[i] = a/b;
  }

  //取最小位
  int number=21;
  while(number-- && !q[number]);

  //output
  cout<<q[0]<<".";
  for(int i=1; i<=number; i++)
    cout<<q[i];
}
