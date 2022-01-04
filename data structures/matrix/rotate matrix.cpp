 #include <iostream>
 using namespace std;
 main()
 {
 	int a[3][3] ={ {1,2,3},{4,5,6},{7,8,9}};
 	for(int j = 0;j<3;j++)
 	{
 		for(int i = 3-1;i>=0;i--)
 		{
 			cout<<a[i][j]<<" ";
		 }
		 cout<<endl;
	 }
 }
 
 //1 2 3
 //4 5 6
 //7 8 9
 
 //00 01 02
 //10 11 12
 //20 21 22
     ||
     \/
 //20 10 00
 //21 11 01
 //22 12 02

 
