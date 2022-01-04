 #include <iostream>
 using namespace std;
 main()
 {
 	int a[3][3] ={ {1,2,3},{4,5,6},{7,8,9}};
 	for(int i = 0;i<3/2;i++)
 	{
 		for(int j = 0;j<3-i-1;j++)
 		{
// 			int temp = a[i][j];
// 			a[i][j] = a[3-j-1][i];
// 			a[3-j-1][i] = a[3-i-1][3-j-1];
// 			a[3-i-1][3-j-1] = a[j][3-i-1];
//			 a[j][3-i-1]= temp;
			 
//			 int temp = a[i][j];
// 			a[i][j] = a[i][3-j-1];
// 			a[i][3-j-1] = a[3-i-1][3-j-1];
// 			a[3-i-1][3-j-1] = a[3-i-1][j];
//			 a[3-i-1][j]= temp;
//			 cout<<"hi";
	}
	 }
	 for(int i = 0;i<3;i++)
	 {
	 	for(int j = 0;j<3;j++)
	 	{
	 		cout<<a[i][j]<<" ";
		 }
		 cout<<endl;
	 }
 }
 
 //1 2 3
 //4 5 6
 //7 8 9
