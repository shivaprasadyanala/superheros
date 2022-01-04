 #include <iostream>
 using namespace std;
 main()
 {
 	int a[] = {5,2,-1,0,3};
 	int k = 3;
 	int max_sum = 0;
 	for(int i = 0;i<k;i++)
 	{
 		max_sum +=a[i];
	 }
	 int curr_sum=0;
	 for(int i = k;i<5;i++)
	 {
	 	curr_sum+=a[i]-a[i-k];
	 	max_sum = max(max_sum,curr_sum);
	 }
	 cout<<max_sum;
 }
