 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	string s="iidd";
// 	cin>>s;
int n = s.length();
//cout<<n<<endl;
 	int num = 1;
 	stack<int> st;
 	for(int i = 0;i<s.length();i++)
 	{
 	   if(s[i]=='d'){
 	   	st.push(num);
 	   num+=1;
		}  
 	   else{
 	   	st.push(num);
 	   	num++;
 	   	while(!st.empty()){
        cout<<st.top();
        st.pop();
		}
	}
//	cout<<res<<endl;
 }
 st.push(num);
 while(!st.empty()){
 	cout<<st.top();
 	st.pop();
 }
}
