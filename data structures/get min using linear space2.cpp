 #include <iostream>
 #include <stack>
 using namespace std;
 struct mystack{
 	stack<int> st1;
 	stack<int> st2;
 	void getmin(){
 		cout<<"minele:"<<st2.top()<<endl;
	 }
	 void gettop(){
	 	cout<<st1.top()<<endl;
	 }
	 void pop(){
	 	st1.pop();
	 	st2.pop();
	 }
 	void push(int data){
 		if(st1.empty() && st2.empty()){
 			st1.push(data);
 			st2.push(data);
		 }else{
		 	if(data>=st2.top()){
		 		st1.push(data);
		 		st2.push(st2.top());
			 }else{
			 	st1.push(data);
			 	st2.push(data);
			 }
		 }
	 }
 };
 main()
 {
 	mystack st;
 	st.push(10);
// 	cout<<"hi"<<endl;
 	st.push(8);
 	st.push(7);
 	st.gettop();
// 	cout<<"hi"<<endl;
 	st.pop();
 	st.gettop();
 	st.getmin();
 }
