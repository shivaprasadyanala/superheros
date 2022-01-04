  #include <iostream>
 #include <stack>
 using namespace std;
 struct mystack{
 	stack<int> st1;
 	stack<int> st2;
 	void getmin(){
 		cout<<"hi"<<endl;
 		cout<<"minele:"<<st2.top()<<endl;
	 }
 	void push(int data){
 		if(!st1.empty() && !st2.empty()){
 			st1.push(data);
 			st2.push(data);
		 }else{
		 	if(data>=st1.top()){
		 		st1.push(data);
			 }else{
			 	st2.push(data);
			 }
		 }
	 }
 };
 main()
 {
 	cout<<"hi"<<endl;
 	mystack st;
 	st.push(10);
 	st.push(8);
 	st.push(7);
 	cout<<"hi"<<endl;
// 	st.pop();
 	st.getmin();
 }
