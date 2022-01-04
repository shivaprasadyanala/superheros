 #include <iostream>
 #include <stack>
 using namespace std;
 void dequeue(stack<int> s){
 	stack<int> s2;
 	while(!s.empty()){
 		s2.push(s.top());
 		s.pop();
	 }
	 while(!s2.empty()){
	 	cout<<s2.top()<<endl;
	 	s2.pop();
	 }
 }
 stack<int> enqueue(int data,stack<int> s){
 	s.push(data);
 	return s;
 }
 main()
 {
 	stack<int> s;
 	s = enqueue(10,s);
 	s = enqueue(20,s);
 	s = enqueue(30,s);
 	dequeue(s);
 }
