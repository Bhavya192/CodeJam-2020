#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin >> t;
	for(int m=1;m<=t;m++)
	{
	   string s,s1;
	   cin >> s;
	   int c=0;
	   int y=s.length()+1;
	   char v[y];
	   strcpy(v,s.c_str());
	   for(int i=0;i<s.length();i++)
	   {
	      if(c<((int)(v[i])-48))
		  {
	          for(int j=0;j<(((int)(v[i])-48)-c);j++)
	              s1+='(';

	          c+=(((int)(v[i])-48)-c);
	        	s1+=v[i];
	      }
	      else if(c>((int)(v[i])-48))
		  {
	          for(int j=0;j<(c-((int)(v[i])-48));j++)
	              s1+=')';

	          c-=(c-((int)(v[i])-48));
	          s1+=v[i];
	      }
	      else
	          s1+=v[i];

	   }
	   for(int i=0;i<c;i++)
	       s1+=')';

	   cout << "Case #"<<m<<": "<<s1<<endl;
	}
}
