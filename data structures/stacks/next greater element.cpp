 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int a[]={1,3,2,0,5,4};
 	vector<int> v;
 	stack<int> st;
 	for(int i = 0;i<6;i++)
 	{
 		if(st.empty()){
 			st.push(a[i]);
 			continue;
		 }
 		while(!st.empty() && st.top()<a[i]){
 			cout<<st.top()<<"->"<<a[i]<<endl;
 			st.pop();
		 }
		 st.push(a[i]);
	 }
	 while(!st.empty()){
	 	cout<<st.top()<<"->"<<-1<<endl;
	 	st.pop();
	 }
//	 for(int i = 0;i<5;i++) cout<<v[i]<<" ";
 }
