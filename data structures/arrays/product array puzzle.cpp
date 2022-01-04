 #include <iostream>
 using namespace std;
 main()
 {
 	int a[]={1,2,3,4};
 	int left[4];
 	int right[4];
 	left[0] = 1;
 	right[3] = 1;
 	for(int i = 1;i<4;i++){
 		left[i] = left[i-1]*a[i-1];
	 }
	 for(int i = 4-2;i>=0;i--){
	 	right[i] = right[i+1]*a[i+1];
	 }
	 for(int i = 0;i<4;i++){
	 	a[i] = left[i]*right[i];
	 }
	 for(int i = 0;i<4;i++) cout<<a[i]<<" ";
 }
