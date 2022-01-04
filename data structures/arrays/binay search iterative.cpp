 #include <iostream>
 using namespace std;
 int* findtarget(int ar[],int target)
 {
 	int low = 0;
 	int high = 6;
 	int a=-1,b=-1;
 	int mid;
 	while(low<high)
 	{
// 		cout<<"hi"<<endl;
 		mid = (low+high)/2;
 		if(ar[mid]==target)
 		{
 		   	a=b=mid;
 		   	while(a-1>0 && ar[a-1]==target) a--;
 		   	while(b+1<6 && ar[b+1] == target) b++;
 		   	break;
		}else if(target>ar[mid]) low = mid+1;
		else high = mid-1;
	 }
//	 cout<<a<<" "<<b<<endl;
	 int res[]={a,b};
	 return res;
 }
 main()
 {
 	int a[] = {1,3,3,4,4,4,5};
 	int* res;
 	res = findtarget(a,6);
 	cout<<res[0]<<" "<<res[1]<<endl;
 }
