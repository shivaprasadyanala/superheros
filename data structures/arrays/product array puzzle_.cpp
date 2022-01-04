 #include <iostream>
 using namespace std;
 main()
 {
 	int a[] = {1,2,3,4};
 	int pro[4];
 	int temp = 1;
 	for(int i = 0;i<4;i++){
 		pro[i]=temp;
 		temp *=a[i]; 
	 }
	 temp = 1;
	 for(int i = 4-1;i>=0;i--){
	 	pro[i]*=temp;
	 	temp*=a[i];
	 }
	 for(int i = 0;i<4;i++) cout<<pro[i]<<" ";
 }
