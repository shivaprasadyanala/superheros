 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int as[]={-2,-1,1,2};
 	int n = sizeof(as)/sizeof(int);
	  	stack<int> st;
        st.push(as[0]);
        vector<int> res;
        for(int i = 1;i<n;i++)
        {
        	cout<<"hi";
            if(as[i]<0){
                if(abs(as[i])<st.top()){
                    continue;
                }
                while(abs(as[i])>=st.top() && !st.empty()){
                	cout<<"hi";
                	st.pop();
				} 
            }
            st.push(as[i]);
        }
        cout<<st.size()<<endl;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        for(int i = 0;i<res.size();i++) cout<<res[i]<<" ";
 }
