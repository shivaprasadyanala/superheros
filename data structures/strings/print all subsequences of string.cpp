 #include <bits/stdc++.h>
 using namespace std;
 void printsub(string input,string o){
 	if(input.empty()){
 		cout<<o<<endl;
 		return;
	 }
	 printsub(input.substr(1),o+input[0]);
	 printsub(input.substr(1),o);
 }
 main()
 {
 	string s = "test";
// 	cout<<s.substr(1)<<endl;
 	string o = "";
 	printsub(s,o);
 }
