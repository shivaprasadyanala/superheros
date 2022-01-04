 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int n;
 	cin>>n;
 	queue<int> q;
 	for(int i = 0;i<n;i++)
 	{
 		int k;
 		cin>>k;
 		q.push(k);
 		while(q.front()<k-3000) q.pop(); 		
 		
	 }
	 cout<<q.size()<<endl;
 }
