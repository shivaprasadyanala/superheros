 #include <iostream>
 using namespace std;
 void merge(int a1[],int a2[],int m,int n)
 {
 	for(int i = n-1;i>=0;i--)
 	{
 		int j,last = a1[m-1];
 		for(j = m-2;j>=0 && a1[j] > a2[i] ; j--)
 		{
 			a1[j+1] = a1[j];
		 }
		 if(j!=m-2 || last > a2[i])
		 {
		 	a1[j+1] = a2[i];
		 	a2[i] = last;
		 }
 		
	 }
	 for(int i = 0;i<6;i++) cout<<a1[i]<<" ";
	 for(int i = 0;i<4;i++) cout<<a2[i]<<" ";
 }
 main()
 {
 	int a1[] = {1,5,9,10,15,20};
 	int a2[] ={2,3,8,13};
 	int m = 6;
 	int n = 4;
 	merge(a1,a2,m,n);
 }
