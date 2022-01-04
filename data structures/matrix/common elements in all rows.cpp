 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int a[4][5];
 	map<int,int> mp;
 	map<int,int>::iterator itr;
 	for(int i = 0;i<4;i++)
 	{
 		for(int j = 0;j<5;j++)
 		{
 			cin>>a[i][j];
		 }
	 }
	 for(int i = 0;i<5;i++) mp[a[0][i]]++;
	 for(int i = 1;i<4;i++)
 	{
 		for(int j = 0;j<5;j++)
 		{
 			if(mp[a[i][j]]){
 				mp[a[i][j]]++;
			 }
		 }
	 }
	 for(itr = mp.begin();itr!=mp.end();itr++ ){
	 	if(itr->second >= 4)
	 	cout<<itr->first<<endl;
	 }
 }
