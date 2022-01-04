 #include <iostream>
 #include <math.h>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	string num = "011010";
 	int n = num.length();
 	int i = 0;
 	while(i<n-1){
 		swap(num[i],num[i+1]);
 		i+=2;
 		
	 }
	 cout<<num<<endl;
	 int sum = 0;
//	reverse string;
    reverse(num.begin(),num.end());
	 for(int i = 0;i<n;i++){
	 	int bit = num[i]-48;
	 	cout<<bit;
	 	 sum+=bit*pow(2,i);
//	 	 sum+=bit*pow(2,n-i+1);
	 	 cout<<sum<<endl;
	 }
	 cout<<endl;
	 cout<<sum<<endl;
 }
