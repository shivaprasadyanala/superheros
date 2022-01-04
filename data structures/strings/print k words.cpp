 #include <iostream>
 using namespace std;
 main()
 {
 	
 	string s = "hi hello haw are you?";
 	int k = 3;
 	string temp="";
 	int cnt = 0;
 	for(int i = 0;i<s.length();i++)
 	{
// 		cout<<"hi";
 		if(s[i] == ' ') cnt++;
 		temp+=s[i];
 		if(cnt == k) break;
	 }
	 for(int i =0;i<temp.length();i++)
	 {
	 	cout<<temp[i];
	 }
	 
 }
