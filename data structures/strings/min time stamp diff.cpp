 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	string s[]={"22:11","23:59","00:20"}; 
 	vector<int> v;
 	string h1;
 	string m1
	 ;
 	for(int i=0;i<3;i++)
 	{
 		h1="";
 		m1="";
 		 h1 +=s[i][0];
 		 h1 +=s[i][1];
// 		 cout<<h1;
 		 m1+=s[i][3];
 		 m1 +=s[i][4];
// 		cout<<s[i][0]<<" "<<s[i][1]<<endl;
// 		cout<<h1<<" "<<m1<<endl;
 		if(h1=="00" && m1=="00") h1 = "24";
 		int a = 0;
 		int b = 0;
 		for(int i = 0;i<2;i++)
 		a = a*10+(h1[i]-'0');
 		for(int i = 0;i<2;i++)
 		b = b*10+(m1[i]-'0');
 		cout<<a*60+b;
 		v.push_back(a*60+b);
	 }
	 cout<<"vector";
	 for(int i = 0;i<3;i++)
	 cout<<v[i]<<endl;
	 sort(v.begin(),v.end());
	 int mi = 100000;
	 for(int i = 0;i<2;i++)
	 {
	 	int ans = abs(v[i]-v[i+1]);
	 	if(ans<mi) mi = ans;
	 }
	 cout<<mi<<endl;
 	
 }
