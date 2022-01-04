 #include <iostream>
 using namespace std;
 main()
 {
 	int a[3][4];
 	int r = 3;
 	int c = 4;
 	for(int i = 0;i<r;i++)
 	{
 		for(int j = 0;j<c;j++)
 		{
 			cin>>a[i][j];
		 }
	 }
	 int top = 0;
	 int down = r-1;
	 int left = 0;
	 int right = c-1;
	 int dir = 0;
	while(left <= right && top <= down)
	{
		if(dir == 0)
		{
			for(int i = left;i<=right;i++)
			{
				cout<<a[top][i]<<" ";
			}
			top+=1;
		}
		else if(dir==1)
		{
			for(int i = top;i<=down;i++)
			{
				cout<<a[i][right]<<" ";
			}
			right-=1;
		}else if(dir==2){
			for(int i = right;i>=left;i--)
			{
				cout<<a[down][i]<<" ";
			}
			down-=1;
		}else if(dir == 3){
			for(int i = down;i>=top;i--)
			{
				cout<<a[i][left]<<" ";
			}
			left+=1;
		}
		dir = (dir+1)%4;
	}
 }
