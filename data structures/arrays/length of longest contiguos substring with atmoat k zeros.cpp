 #include <iostream>
 using namespace std;
 int longestsubstring(int a[],int n,int k)
 {
 	int m = 0;
 	int i = 0;
 	int z = 0;
 	for(int j = 0;j<n;j++)
 	{
// 		cout<<"hi"<<endl;
 		if(a[j] == 0) z+=1;
 		while(k<z)
 		{
// 			cout<<"hi";
 			if(a[i] == 0)
 			{
 				z-=1;
			 }
			 i+=1;
		 }
		 m = max(j-i+1,m);
	 }
	 return m;
 }
 main()
 {
 	int a[] ={1,0,0,0,1,0,1};
 	int n = sizeof(a)/sizeof(int);
 	int k = 2;
 	cout<<longestsubstring(a,7,k);
 }
