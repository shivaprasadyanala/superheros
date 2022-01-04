 #include <iostream>
 using namespace std;
 int findminheight(int a[],int k)
 {
 	int n = sizeof(a)/sizeof(int);
 	cout<<n<<endl;
 	int ans = a[5-1] - a[0];
 	int shortest = a[0] + k;
 	int longest = a[5-1] -k;
 	for(int i = 0;i<5-1;i++)
 	{
 		int mi = min(shortest,a[i+1]-k);
 		int ma = max(longest,a[i]+k);
 		if(mi<0) continue;
 		ans = min(ans,ma-mi);
	 }
	 return ans;
 	
 }
 int partition(int a[],int low,int high)
 {
 	int pivot = a[high];
 	int i = low-1;
 	for(int j = 0;j<high;j++)
 	{
 		if(a[j]<pivot)
 		{
 			i++;
 			swap(a[i],a[j]);
		 }
	 }
	 swap(a[i+1],a[high]);
	 return i+1;
 }
 int* asort(int a[],int low,int high){
 	if(low<high){
 		int pi = partition(a,low,high);
 		asort(a,low,pi-1);
 		asort(a,pi+1,high);
	 }
	 return a;
 }
 main()
 {
 	int ar[]= {3,9,16,12,20};
 	cout<<"size of:"<<sizeof(ar)/sizeof(int)<<endl;
 	int *res;
  	res = asort(ar,0,4);
  	int k = 3;
  	cout<<findminheight(res,k);
//  	for(int i = 0;i<5;i++) cout<<res[i]<<" ";
 }
