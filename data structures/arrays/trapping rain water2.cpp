 #include <iostream>
 using namespace std;
 main()
 {
 	int a[] = {3,0,0,2,0,9};
 	int n = 6;
 	int res = 0;
 	for(int i = 1;i<n-1;i++)
 	{
 		int left = a[i];
 		for(int j = 0;j<i;j++)
 		{
 			left = max(left,a[j]);
		 }
		 int right = a[i];
		 for(int j = i;j<n;j++)
		 {
		 	right = max(right,a[j]);
		 }
		 res+=min(left,right)-a[i];
	 }
	 cout<<res;
 }
