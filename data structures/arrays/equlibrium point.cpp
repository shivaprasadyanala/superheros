 #include <iostream>
 using namespace std;
 main()
 {
 	int a[]={1,3,5,2,2};
 	int suml = 0;
 	int sumr = 0;
 	bool flag = false;
 	int ans;
 	for(int i = 1;i<5;i++)
 	{
 		suml = 0;
 		sumr = 0;
		 for(int j = 0;j<i;j++) suml+=a[j];
		 for(int k = i+1;k<5;k++) sumr+=a[k];
		 cout<<suml<<" "<<sumr<<endl;
		 if(suml == sumr){
		 	ans = i;
		 	break;
		 }else{
		 	ans = -1;
		 }
	 }
	 cout<<ans<<endl;
 }
