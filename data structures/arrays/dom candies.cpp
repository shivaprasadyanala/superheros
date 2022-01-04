 #include <iostream>
 using namespace std;
 main()
 {
 	int a[] = {1,5,3,8,2};
 	int i = 0;
 	int j = 4;
 	int res = 0;
 	int ma = 0;
 	while(i<j){
 		if(a[i]<a[j]){
 			res = (j-i-1)*min(a[i],a[j]);
 			ma = max(ma,res);
 			cout<<res<<" "<<ma<<endl;
 			i++;
		 }else{
		 	res = (j-i-1)*min(a[i],a[j]);
 			ma = max(ma,res);
 			cout<<res<<" "<<ma<<endl;
		 	j--;
		 }
 		
	 }
	 cout<<ma;
 }
