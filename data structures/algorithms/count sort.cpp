 #include <iostream>
 using namespace std;
 main()
 {
 	int a[]={4,12,22,81,3,3,11,21};
 	
 	int n = sizeof(a)/sizeof(int);
 	int ma = INT_MIN;
 	for(int i = 0;i<n;i++){
 		
 		if(a[i]>ma) ma = a[i];
	 } 
	 int f[ma+1]={0};
	 for(int i = 0;i<n;i++) f[a[i]]++;
	 for(int i = 1;i<ma+1;i++) f[i]=f[i]+f[i-1];
	 int res[100];
	 for(int i = 0;i<n;i++)
	 {
	 	int pos = f[a[i]]-1;
	 	f[a[i]]-=1;
	 	res[pos]=a[i];
	 }
	 for(int i = 0;i<n;i++){
	 	cout<<res[i]<<" ";
	 }
 }
