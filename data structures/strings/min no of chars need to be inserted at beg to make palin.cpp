 #include <iostream>
 using namespace std;
 main()
 {
 	string s="aacecaaaa*aaaacecaa";
 	int n1 = 9;
 	int n = s.length();
 	int lps[n]={0};
 	for(int i = 1,len=0;i<n;)
 	{
 		if(s[i]==s[len]){
 			lps[i++] = ++len;
		 }else if(len){
		 	
		 	len = lps[len-1];
		 }else{
		 	lps[i++]=0;
		 }
	 }
	 for(int i = 0;i<n;i++) cout<<lps[i]<<" ";
	 cout<<n1-lps[n-1]<<endl;
 }
