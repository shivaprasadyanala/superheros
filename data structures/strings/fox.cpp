 #include <iostream>
 using namespace std;
 main()
 {
 	string s;
 	cin>>s;
 	char ch;
 	bool flag = true;
 	int cnt = 0;
 	for(int i = 0;i<s.length();i++)
 	{
 		if(flag)
 		{
 			if(s[i]=='X'||s[i]=='O')
			 {
			 	 ch = s[i];
 			flag = false;
			  }
		 }
//		 cout<<ch<<endl;
		 if(ch!=s[i] && (s[i]=='X'||s[i]=='O')){
		 	ch = s[i];
		 	cnt++;
//		 	cout<<"hi"<<endl;
		 }
		 
	 }
	 cout<<cnt<<endl;
 }
