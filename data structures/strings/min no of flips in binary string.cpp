#include <iostream>
using namespace std;
main()
{
	string g = "101011110";
	int n = g.length();
	string st1 = "";
	string st2 = "";
	for(int i = 0;i<n;i++)
	{
		if(i%2) st1+="0";
		else st1+="1";
	}
	for(int i = 0;i<n;i++)
	{
		if(i%2) st2+="1";
		else st2+="0";
	}
	int cnt1=0;
	int cnt2 =0;
	for(int i = 0;i<n;i++)
	{
		if(g[i]!=st1[i]) cnt1++;
		if(g[i]!=st2[i]) cnt2++;
	}
	cout<<cnt1<<" "<<cnt2<<endl;
	cout<<min(cnt1,cnt2);
}
