 #include <iostream>
 using namespace std;
 main()
 {
 	int a[3][4];
 	bool flag = false;
 	int target;
 	for(int i = 0;i<3;i++)
 	{
 		for(int j = 0;j<4;j++)
 		{
 			cin>>a[i][j];
		 }
	 }
	 cout<<"enter target:";
	 cin>>target;
	 int row;
	 for(int i = 0;i<3;i++)
	 {
	 	if(a[i][3]>=target){
	 		row = i;
	 		 break;
		 }
	 }
	 cout<<"row"<<row<<endl;
	 for(int i = 0;i<4;i++)
	 {
	 	if(a[row][i] == target) {
	 		cout<<"yes"<<endl;
	 		cout<<row<<" "<<i<<endl;
	 		flag = true;
	 		break;
		 }
	 }
	 if(!flag) cout<<"no"<<endl;
 }
