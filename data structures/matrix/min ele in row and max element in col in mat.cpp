 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int a[3][4] = {{1,10,4,2},{9,3,8,7},{15,16,17,12}};
 	map<int,int> mp;
 	int row[3];
 	int col[4];
 	int mi;
 	int ma;
// 	mi = a[0][0];
 	for(int i = 0;i<3;i++)
 	{
 		mi = a[i][0];
 		for(int j =0;j<4;j++)
 		{
 			
//            cout<<mi<<" "<<a[i][j]<<endl;
 			if(mi > a[i][j] ) mi = a[i][j];
		 }
//		 cout<<mi<<" ";
         row[i] = mi;
	 }
	 for(int i = 0;i<3;i++)
 	{
 		ma = a[0][i];
 		for(int j =0;j<4;j++)
 		{
 			
 			if(a[j][i] > ma ) ma = a[j][i];
// 			cout<<ma<<endl;
		 }
		 col[i] = ma;
	 }
	 for(int i = 0;i<3;i++) cout<<row[i]<<" ";
	 cout<<endl;
	 for(int j = 0;j<4;j++) cout<<col[j]<<" ";
	 for(int i = 0;i<4;i++){
	 	
	 	mp[row[i]]++;
	 	mp[col[i]]++;
	 }
	 for(int i = 0;i<20;i++){
	 	if(mp[i]>=2) cout<<i<<endl;
	 }
 }
