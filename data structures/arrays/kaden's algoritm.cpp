 #include <iostream>
 using namespace std;
 main()
 {
 	int a[] = {-2,-3,4,-1,-2,1,5,-3};
 	int max_so_far = INT_MIN;
 	int max_end_here = 0;
 	int start;
 	int end;
 	for(int i = 0;i<8;i++)
 	{
 		 max_end_here+=a[i];
 		if(max_so_far < max_end_here){
 		 max_so_far = max_end_here;
		  end = i;
		 }
		 if(max_end_here<0){
		 	max_end_here  = 0; 
		 	start = i+1;
		 } 
	 }
	 cout<<max_so_far<<" "<<start<<" "<<end<<" "<<endl;
 }
