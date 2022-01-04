 #include <iostream>
 #include <stack>
 using namespace std;
 struct mystack{
 	int minele;
 	stack<int> st;
 	int getmin(){
 		cout<<"minele is:"<<minele<<endl;
 		return minele;
	 }
 	void push(int x){
 		if(st.empty()){
 			st.push(x);
 			minele = x;	
 			cout<<x<<" is pushed"<<endl;
		 }else{
		 	if(x<minele){
		 	st.push(2*x-minele);
		 	minele = x;
		 }else{
		 	st.push(x);
		 	cout<<x<<" is pushed"<<endl;
		 }
		 }
		 
	 }
	 void pop(){
	 	if(st.empty()){
	 		cout<<"stack is empty";
		 }
		 int x = st.top();
		 
	 		if(x<minele){
	 			minele = 2*minele-x;
	 			st.pop();
			 }else{
			 	st.pop();
			 }
	 }
	 void gettop(){
	 	int t = st.top();
	 	(t<minele)?cout<<minele:cout<<t;
	 }
 };
 main()
 {
 	mystack st;
 	st.push(-2);
 	st.push(0);
 	st.push(-5);
 	st.getmin();
 	st.pop();
 	st.gettop();
 	st.getmin();
 }
