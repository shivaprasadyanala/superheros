 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 void dfs(vector< vector < int > > &v,int sr,int sc,int newcolor,int n,int m,int src)
 {
 	if(sr<0||sr>=n||sc<0||sr>=n) return;
 	else if(v[sr][sc]!=src) return ;
 	v[sr][sc] = newcolor;
 	dfs(v,sr-1,sc,newcolor,n,m,src);
 	dfs(v,sr+1,sc,newcolor,n,m,src);
 	dfs(v,sr,sc-1,newcolor,n,m,src);
	 dfs(v,sr,sc+1,newcolor,n,m,src);
 }
 main()
 {
 	int n,m;
 	int src;
 	int newcolor;
 	int sc,sr;
 	cout<<"enter cols and rows:"<<endl;
 	cin>>n>>m;
 	vector< vector < int > > v;
 	for(int i = 0;i<n;i++)
 	{
 		for(int j = 0;j<m;j++)
 		{
 			cin>>v[i][j];
		 }
	 }
	cout<<"enter sc and sr:"<<endl;
	cin>>sc>>sr;
	src = v[sc][sr];
	cout<<"enter the new color:"<<endl;
	cin>>newcolor;
	dfs(v,sr,sc,newcolor,n,m,src);
	cout<<"the output:"<<endl;
	for(int i = 0;i<n;i++)
 	{
 		for(int j = 0;j<m;j++)
 		{
 			cout<<v[i][j]<<" ";
		 }
		 cout<<endl;
	 }
 }
