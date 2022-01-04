 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	stack<int> st;
 	int a[]={3,1,4,2};
 	st.push(a[0]);
 	for(int i= 1;i<4;i++)
 	{
 		cout<<st.size()<<endl;
 	  if(a[i]<=st.top() && st.size()<=2){
 	  	if(!st.empty()) st.pop();
	   }	
//	   if(st.size()==3){
//	   	
//	   	cout<<"true";
//	   	break;
//	   }
	   if(st.size()==2 && st.top()<a[i]) continue;
	   st.push(a[i]);
	   
	}
	if(st.size()==3) cout<<"true"<<endl;
	else cout<<"false"<<endl;
 	
 }
