 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	string s = "abcd.efgh.";
 	stack<int> st;
 	string res;
 	int n = s.length();
 	int i = 0;
 	while(i<n)
 	{
 		if(s[i]!='.')
 	   	st.push(s[i]);
 	   	else
 	   	{
 	   	   while(!st.empty()){
 	   	   	res+=st.top();
 	   	   	st.pop();
		  }	
//		  cout<<res<<endl;
          if(i!=n-1)
		  res+='.';
//		  i++;
		}
		i++;
	}
	cout<<i<<endl;
	cout<<res<<endl;
 }
 
 //a b c d
