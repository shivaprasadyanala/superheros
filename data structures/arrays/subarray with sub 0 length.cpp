  #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int a[] ={4,3,-7,-6,9};
 	map<int,int> mp;
 	bool flag = false;
 	int sum = 0;
 	int cnt=0;
// 	int max = 0;
 	vector<int> v;
 	for(int i = 0;i<5;i++){
 		sum+=a[i];
 		v.push_back(sum);
// 		cout<<v[i]<<" ";
	 }
	 
	 for(int i = 0;i<5;i++){
 		cout<<v[i]<<" ";
	 }
	 
	 int len = 0;
 	for(int i= 0;i<5;i++)
 	{
 		int intindex = 0;
 		int curindex = 0;
// 		sum+=a[i];
// 		cnt++;
// 		if(sum > max) max = sum; 
 		v.push_back(sum);
 		if(mp.find(v[i]) != mp.end() ||v[i]==0){
 			intindex = mp[a[i]];
 			curindex = i;
 			len = max(curindex-intindex,len);
 			cout<<"len"<<len<<" ";
		 }
		  mp[v[i]] = i;
	 }
	 cout<<"len:"<<len<<endl;
 	
 }
 
