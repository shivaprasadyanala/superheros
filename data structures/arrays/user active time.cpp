 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int a[5][2]={{1,2},{1,3},{0,5},{0,2},{0,5}};
 	set<vector<vector<int> > > s;
 	for(int i = 0;i<5;i++)
 	s.insert(a[i][0],a[i][1]);
 	
 }
