 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int a[] ={4,6,2,5,21,};
 	int b[] = {5,2,51,4,10};
 	//using maps
 	map<int,int> mp;
 	for(int i = 0;i<5;i++){
 		mp[a[i]]++;
	 }
	 for(int i = 0;i<5;i++){
 		mp[b[i]]++;
	 }
	 map<int,int>::iterator itr;
	 for(itr=mp.begin();itr!=mp.end();itr++){
	 	cout<<itr->first<<" ";
	 }
	 cout<<endl;
	 //using sets
	 set<int> s;
	 for(int i = 0;i<5;i++){
 	    s.insert(a[i]);
	 }
	 for(int i = 0;i<5;i++){
 		s.insert(b[i]);
	 }
	 set<int,int>::iterator itr1;
	 for(itr1=s.begin();itr1!=s.end();itr1++){
	 	cout<<*itr1<<" ";
	 }
	 //using freq array
	 cout<<endl;
	 int f[100]={0};
	 for(int i = 0;i<5;i++){
	 	f[a[i]]++;
	 }
	 for(int i = 0;i<5;i++){
	 	f[b[i]]++;
	 }
	 cout<<"intersection"<<endl;
	 for(int i = 0;i<100;i++){
	 	if(f[i]>1) cout<<i<<" ";
	 }
	 cout<<"union"<<endl;
	 for(int i = 0;i<100;i++){
	 	if(f[i]>=1) cout<<i<<" ";
	 }
 } 
