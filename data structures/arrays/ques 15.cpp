 #include <iostream>
 using namespace std;
 int getmin(int a[],int n)
 {
 	int dp[n];
 	for(int i = 0;i<n;i++) dp[i]=INT_MAX;
 	dp[0] = 0;
 	for(int i = 1;i<n;i++)
 	{
 		for(int j = 0;j<i;j++)
 		{
 		   if(dp[j]!=INT_MAX && j+a[j]>=i)
			{
				if(dp[j]+1<dp[i])
				 dp[i] = dp[j]+1;
			}	
		 }
	 }
	 if(dp[n-1]!=INT_MAX) return dp[n-1];
	 else return -1;
 }
 main()
 {
 	int a[]={1,4,3,2,6,7};
 	cout<<getmin(a,6);
 }
