 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	string s = "abcbcadeed";
// 	int n = 3;
// 	map<char,int> mp;
// 	int cnt = 0;
// 	for(int i=0;i<st.length();i++)
// 	{
// 		if(mp.size()>n) cnt++;
// 		cout<<mp.size()<<" ";
// 		if(!mp[st[i]]){
// 			mp[st[i]]++;
//		 }
//		 else{
//		 	mp[st[i]]=0;
//		 	cout<<"hi";
//		 }
//	}
//	for(int i = 95;i<128;i++) cout<<mp[i]<<" ";
//	cout<<cnt<<endl;
   char seen[26]={0};
   int res = 0;
   int occ = 0;
   int cap = 1;
   for(int i = 0;i<s.length();i++)
   {
   	  if(seen[s[i]-'a']==0){
   	  	seen[s[i]-'a'] =1;
   	  	if(occ<cap){
   	  	  occ++;
   	  	  seen[s[i]-'a']=2;
		}else{
	 	res++;
	    }
	 }else{
	 	if(seen[s[i]-'a'] ==2) occ--;
	 	seen[s[i]-'a'] = 0;
	 }
   }
   cout<<res<<endl;
 }
