 #include <iostream>
 using namespace std;
 main()
 {
 	string s = "0110101";
 	int minj = 1,maxj = 3;
 	int n = s.length();
 	bool flag = false;
 	for(int i = 0;i<n;i++)
 	{
 		if(s[i]=='0')
 		{
 			int c = min(i+maxj,n-1);
 			cout<<"c:"<<c<<endl;
 			for(int j=i+minj;j<=c;j++)
 			{
 				if(s[j]=='0' && j==n-1){
 					flag = true;
 					cout<<j<<endl;
 					break;
				 }
			 }
		 }
		 if(flag) break;
	 }
	 if(flag) cout<<"yes"<<endl;
	 else cout<<"no"<<endl;
 }
