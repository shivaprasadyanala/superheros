 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int n;
 	cin>>n;
 	int a[10][10];
 	for(int i = 0;i<n;i++)
 	{
 		for(int j = 0;j<n;j++) cin>>a[i][j];
	}
	stack<int> st;
	for(int i = 0;i<n;i++)
	{
		st.push(i);
	}
	for(int i = 0;i<n-1;i++)
	{
		if(!st.empty())
		{
			int i = st.top();
			st.pop();
			int j = st.top();
			st.pop();
			if(a[i][j]==1){
				st.push(j);
			}else if(a[i][j]==0){
				st.push(i);
			}
		}
		
	}
	int p = st.top();
	bool f1 = true;
	bool f2 = true;
	for(int i = 0;i<n;i++)
	{
		if(i!=p)
		{
			if(a[p][i]!=0) f1 = false;
			if(a[i][p]!=1) f2 = false;
		}
	}

   if(f1 && f2) cout<<p<<endl;
   else cout<<"none"<<endl;
	 
 }
