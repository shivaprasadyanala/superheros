 #include <iostream>
 using namespace std;
 main()
 {
 	int i,j;
 	int a[]={4,-5,3,2,-1,-2};
 	i = 0;
 	j = 5;
 	while(i<j){
 		if(a[i]<0 && a[j]<0){
 			i++;
 			continue;
		 }
		 if(a[i]>0 &&a[j]>0){
		 	j--;
		 	continue;
		 }
		 if(a[i]<0 && a[j]>0){
		 	j--;
		 	i++;
		 	continue;
		 }
		 if(a[i]>0 && a[j]<0){
		 	swap(a[i],a[j]);
		 	i++;
		 	j--;
		 	continue;
		 }
		 
	 }
	 for(int i=0;i<6;i++){
	 	cout<<a[i]<<endl;
	 }
 	
 }
