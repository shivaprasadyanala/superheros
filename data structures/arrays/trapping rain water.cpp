 #include <iostream>
 using namespace std;
 main()
 {
 	int m = 0;
 	int a[] ={0,3,6,4,2,9,0,0};
// 	int a[] ={3,0,0,2,0,1};
bool flag = false;
 	for(int i = 0;i<8;i++)
 	{
	int sum = 0;
 		int n = sizeof(a)/sizeof(int);
 		if(a[i]!=0 && a[i] > a[i+1])
 		{
 		
 		for(int j = i+1;j<n-1;j++)
 		{
 			cout<<a[i]<<" "<<a[j]<<endl;
 			if(a[j]>a[i]){
 				flag = true;
 				break;
			 } 
 			
 			if(a[j]==0) sum+=a[i];
 			if(a[j]!=0) sum+=a[i]-a[j];
// 			cout<<"sum:"<<sum<<" ";
		 }
		 
		}
		m = max(m,sum);
 		if(flag) break;
		 
	 }
	 cout<<m<<endl;
 }
