 #include <iostream>
 using namespace std;
 main()
 {
 	string t = "kotaaayam";
 	string p = "kota";
 	int i = 0;
 	int j = 0;
 	while(i!=t.length()&&j!=p.length())
 	{
 		cout<<t[i]<<" "<<p[i]<<endl;
 		if(t[i]==p[j])
		{
			
			i++;
			j++;
		 } 
 		else i++;
// 		cout<<i<<" "<<j<<endl;
	 }
//	 cout<<i<<" "<<j<<endl;
	 if(j==p.length()) cout<<"yes"<<endl;
	 else cout<<"no"<<endl;
	 
 }
