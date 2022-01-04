 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 vector<int> res(0);
 int findnum(int a[],int low,int high,int target){
 	
 	int mid = (low+high)/2;
 	if(a[mid]==target){
 		return mid;
	 }
 	else if(target>a[mid]) findnum(a,mid+1,high,target);
 	else findnum(a,low,mid-1,target);
 }
 main()
 {
 	int a[] = {4,6,9,10,11,12,13};
 	int target = 11;
 	int low = 0;
 	int high = 6;
 	vector<int> v;
 	cout<<findnum(a,low,high,target);
// 	cout<<v[0]<<endl;
}
