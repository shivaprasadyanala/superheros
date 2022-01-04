 #include <iostream>
 using namespace std;
 main()
 {
 	string s = "aaabaaba";
 	
 	int n = s.length();
 	cout<<n<<endl;
 	int lps[n]={0};
 	for(int i = 1,len=0;i<n;){
 		if(s[i]==s[len]){
 			i++;
 			++len;
 			lps[i]=len;
		 }
		 else if(len){
		 	len = lps[len-1];
		 }
		 else{
		 	i++;
		 	lps[i]=0;
		 }
	 }
	 for(int i = 0;i<n;i++) cout<<lps[i]<<" ";
 }
