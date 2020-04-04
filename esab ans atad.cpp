#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b;
    cin >>t>>b;
    while(t--)
    {
      char ch,r;
      string s = "";
      for(int j=0;j<10;j++)
      s+='0';
      for(int i=1;i<=10;i++)
      {
          cout<<i<<endl;
          cout.flush();
          cin >>ch;
          s[i-1]=ch;
      }
      cout<<s<<endl;
      cout.flush();
      cin >>r;
      if(r=='Y')
          continue;
      else
          return 0;
    }
}
