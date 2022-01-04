 #include <iostream>
 using namespace std;
 main()
 {
 	int a[2][3]={{4,3,6},{2,5,7}};
 	int b[3][2];
 	for(int i = 0;i<3;i++)
 	{
 		for(int j = 0;j<2;j++)
 		{
 		   b[i][j] = a[j][i];	
		 }
	 }
	 for(int i = 0;i<3;i++)
	 {
	 	for(int j = 0;j<2;j++)
	 	{
	 		cout<<b[i][j]<<" ";
		 }
		 cout<<endl;
	 }
 }
