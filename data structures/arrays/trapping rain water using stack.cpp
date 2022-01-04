 #include <iostream>
 #include <stack>
 using namespace std;
 int findwater(int a[],int n)
 {
 	stack<int> st;
 	int ans = 0;
 	for(int i = 0;i<n;i++)
 	{
 		while(!(st.empty()) && a[st.top()]<a[i])
 	  {
 		int pop_height = a[st.top()];
 		if(st.empty()) break;
 		int distance = i - st.top() - 1;
 		int min_height = min(a[st.top()],a[i]) - pop_height;
 		ans+=distance*min_height;
 		
	  }
 	st.push(i);
	 }
	 return ans;
 	
 }
 main()
 {
 	int a[] = {3,0,0,2,0,4};
 	cout<<"hi";
 	cout<<findwater(a,6);
 }
