  #include <iostream>
  #include <bits/stdc++.h>
 using namespace std;
 vector<int> kmp(string s){
 	int n = s.length();
 		vector<int> lps(n,0);
 	for(int i = 1,len=0;i<n;){
 		if(s[i]==s[len]){
// 			++len;
 			lps[i++]=++len;
		 }
		 else if(len){
		 	len = lps[len-1];
		 }
		 else{
		 	i++;
		 	lps[i]=0;
		 }
	 }
	 return lps;
 }
 main()
 {
 	string s = "aacecaaaa";
 	string p ="aaaa";
 	int n = p.length();
 	int m = s.length();
 	vector<int> lps = kmp(p);
    for(int i = 0,j=0;i<m;)
    {
//    	cout<<"hi"<<endl;
    	if(s[i]==p[j]){
    		i++;
    		j++;
		}
    	if(j==n){
    		cout<<i-j<<endl;
    		break;
		}
    	if(i<m && s[i]!=p[j])
    	j?j=lps[j-1]:i++;
	}
	
 }
