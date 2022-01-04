 #include <iostream>
 #include <queue>
 using namespace std;
 queue<int> push(int data,queue<int> q1,queue<int> q2){
 	q2.push(data);
 	while(!q1.empty()){
 		q2.push(q1.front());
 		q1.pop();
	 }
	 //swaping the queue names
	 queue<int> q = q1;
	 q1 = q2;
	 q2 = q;
	 return q1;
 }
 int pop(queue<int> q1,queue<int> q2){
 	if(q1.empty()) return -1;
 	int data = q1.front();
 	q1.pop();
 	return data;
 }
 main()
 {
 	queue<int> q1,q2;
 	q1 =push(10,q1,q2);
 	q1 = push(20,q1,q2);
 	q1 = push(30,q1,q2);
 	cout<<pop(q1,q2)<<endl;
 	q1=push(40,q1,q2);
 	cout<<pop(q1,q2);
 }
