 #include <iostream>
 using namespace std;
 main()
 {
 	int a[] = {4,-3,5,-2,1};
 	int j = 0;
 	for(int i = 0;i<5;i++)
 	{
 		if(a[i]<0 && i!=j){
 			swap(a[i],a[j]);
 			j++;
		 }
	 }
	 for(int i = 0;i<5;i++){
	 	cout<<a[i]<<" ";	 }
 }
