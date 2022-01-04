 #include <iostream>
 #include <bits/stdc++.h>
 #include <vector>
 #include <string.h>
#include <sstream>
 using namespace std;
 main()
 {
 	int n = 163922343;
 	int ns = log10(n)+1;
 	vector<int> v;
 	string st;
 	int t = ns;
 	while(ns--)
 	{
 		int r = n%10;
 	    v.push_back(r);
 	    n/=10;
	}
	sort(v.begin(),v.end());
 	for(int i = 0;i<v.size();i++){
// 		cout<<v[i];
 		st+=v[i];
	 }
	 string s1 = "";
	 	string s2 = "";
	 if(t%2){
	 	for(int i = 0;i<=(v.size()/2);i++)
	 	{
	 	    s1+=v[i]+48;
//	 	    cout<<"hi"<<endl;
		}
		for(int i =(v.size()/2)+1;i<v.size();i++)
		{
			s2+=v[i]+48;
		}
	 }else{
	 	
	 	for(int i = 0;i<v.size();i++)
	 	{
	 	   if(i%2){
	 	   	s1+=v[i]+48;
			}else{
				s2+=v[i]+48;
			}
		}
	 }
	 cout<<s1<<" "<<s2<<endl;
		int x1;
		int x2;
		stringstream add(s1);
		stringstream add2(s2);
		add>>x1;
		add2>>x2;
		cout<<x1+x2<<endl;
 }
