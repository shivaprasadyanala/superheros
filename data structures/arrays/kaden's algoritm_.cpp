 #include <iostream>
 using namespace std;
 main()
 {
 	int a[] = {-2,-3,4,-1,-2,1,5,-3};
 	int max_so_far = a[0];
 	int curr_max = a[0];
 	for(int i = 1;i<8;i++)
 	{
 		curr_max = max(a[i],curr_max+a[i]);
 		max_so_far = max(max_so_far,curr_max);
 		
	 }
	 cout<<max_so_far<<endl;
 }
