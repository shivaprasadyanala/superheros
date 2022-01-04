 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int a[] ={4,3,3,-6,9};
 	map<int,int> mp;
 	bool flag = false;
 	int sum = 0;
 	int cnt=0;
 	int max = 0;
 	vector<int> v(5);
// 	for(int i = 0;i<5;i++){
// 		sum+=a[i];
// 		v.push_back(sum);
//	 }
 	for(int i= 0;i<5;i++)
 	{
 		int intindex = 0;
 		int curindex = 0;
 		sum+=a[i];
// 		cnt++;
// 		if(sum > max) max = sum; 
 		v.push_back(sum);
 		if(mp.find(sum) != mp.end() || sum==0){
 			
 			 cout<<"yes"<<endl;//0 4 7 10 4 13
 			 flag = true;    //0 4 7 0 -6 -3
 			 break;
		 }
		  mp[sum]++;
	 }
	 if(!flag)
	 cout<<"no"<<endl;
	 int i = 0;
	 int j = v.size()-1;
	 cout<<"j:"<<j<<endl;
	 for(int i = 0;i<j;i++) cout<<v[i]<<" ";
	 while(i<=j)
	 {
	 	cout<<v[i]<<" "<<v[j]<<endl;
	 	cout<<"i"<<i<<" "<<"j"<<j<<endl;
	 	if(v[i] == v[j]){
	 		 cnt = j-i+1;
	 		 break;
		 }
		 j--;
		 i++;
	 }
	 cout<<"cnt:"<<cnt<<endl;
 	
 }
 
