 #include <iostream>
 using namespace std;
 main()
 {
 	string s;
 	cin>>s;
 	int cnt = 0;
 	int z = 0;
 	for(int i = 0;i<s.length();i++)
 	{
 	   	if(s[i]=='0'){
 	   		cnt++;
// 	   		cout<<"hi"<<endl;
			}else{
				cnt--;
			}
			if(cnt==0) z++;
	}
	if(cnt != 0) z = -1; 
	cout<<z<<endl;
 }
