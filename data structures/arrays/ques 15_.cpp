 #include <iostream>
 using namespace std;
 int getminjumps(int a[],int n)
 {
 	if(n<=1)
 	return 0;
 	if(a[0] == 0) return -1;
 	int maxjump=a[0];
 	int step = a[0];
 	int jump = 1;
 	for(int i = 1;i<n;i++){
 		if(i == n-1) return jump;
 		maxjump = max(maxjump,i+a[i]);
 		step--;
 		if(step==0){
 			jump++;
 			if(i>=maxjump) return -1;
 			step = maxjump-i;
		 }
	 }
	 return -1;
 }
 main()
 {
 	int a[]={1,4,3,2,6,7};
 	cout<<getminjumps(a,6);
 }
