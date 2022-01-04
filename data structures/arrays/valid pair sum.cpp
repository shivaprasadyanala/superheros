 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int a[] = {3,-2,4,2};
 	sort(a,a+5);
 	int l = 0;
 	int h = 5-1;
 	int cnt = 0;
 	while(l < 5-1){
 		if((a[l]+a[h])>0) cnt++;
 		h--;
 		if(l==h){
 			l++;
 			h=5-1;
		 }
		 cout<<"hi"<<endl;
	 }
	 cout<<cnt<<endl;
 }
