 #include <iostream>
 using namespace std;
 main()
 {
 	int a[] = {1,5,3,0,3,2};
 	int max_pro_far = a[0];
 	int max_pro_end = a[0];
 	for(int i = 1;i<sizeof(a)/sizeof(int);i++)
 	{
 	   max_pro_end = max(a[i],a[i]*max_pro_end);
 	   max_pro_far = max(max_pro_end,max_pro_far);
			
	}
    cout<<max_pro_far<<endl;
 }
