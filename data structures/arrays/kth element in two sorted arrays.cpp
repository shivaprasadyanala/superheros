 #include <iostream>
 using namespace std;
 main()
 {
 	int a[] = {2,3,6,7,9};
 	int b[] = {1,4,8,10};
 	int k = 5;
 	int i = 0;
 	int j = 0;
 	int cnt = 0;
 	int res = 0;
 	while(i<5 && j<4)
 	{
        if(a[i]<b[j]){
        	cnt++;
        	if(cnt == k){
        		res = a[i];
        		 break;
			} 
        	i++;
		}else{
			cnt++;
			if(cnt == k){
				res = b[j];
				break;
			} 
			j++;
		}
	 }
	 //if a not completely iterated
	 while(i<5){
	 	cnt++;
	 	if(cnt == k){
	 		res = a[i];
	 		break;
		 } 
	 	i++;
	 }
	 while(j<4){
	 	cnt++;
	 	if(cnt == k){
	 		res = b[j];
	 		break;
		 } 
	 	j++;
	 }
	 cout<<res<<endl;
 }
