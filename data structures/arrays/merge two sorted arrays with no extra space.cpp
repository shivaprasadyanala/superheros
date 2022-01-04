 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int a1[] = {1,5,9,10,15,20};
 	int a2[] ={2,3,8,13};
	 int i = 0;
 	while(a1[6-1]>a2[0])
 	{
 		
 		if(a1[i]>a2[0]){
 			swap(a1[i],a2[0]);
 			sort(a2,a2+4);
		 }
		 i++;
	 }
	 for(int i = 0;i<6;i++) cout<<a1[i]<<" ";
	 for(int i = 0;i<4;i++) cout<<a2[i]<<" ";
 }
