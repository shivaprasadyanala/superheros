 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 
 	string s = "geeks";
 	string s1 = "dgeks";
 	int n = s.length();
 	int m = s1.length();
 	
 	vector<int> v;
// 	cout<<s<<endl;
 	int ind;
 	
 		int i = 0;
 	int j = 0;
 	while(i<=n && j<=m)
 	{
// 		cout<<"hi";
 		if(s[i]==s1[j]&&i==0){
 			i++;
 			j++;
 			v.push_back(0);
 			ind = i;
		 }
		 if(s[i]==s1[j])
		 {
		 	cout<<i<<" "<<j<<endl;
		 	i++;
		 	j++;
		 	ind = i;
//		 	cout<<i<<endl;
		 }
		 else j++;
	}
	v.push_back(ind);
	if(v[0]==0 && v[1]==0){
		v[0]=-1;
		v[1]=-1;
	}
	cout<<v[0]<<" "<<v[1]<<endl;
 }
