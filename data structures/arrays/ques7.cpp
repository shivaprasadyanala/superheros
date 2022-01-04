 #include <iostream>
 using namespace std;
 struct Pair{
 	int min;
 	int max;
 };
 struct Pair findminmax(int a[],int low,int high){
 	struct Pair minmax,mml,mmr;
 	if(low == high){
 		minmax.min = a[low];
 		minmax.max = a[high];
 		return minmax;
	 }
	 if(low+1 == high){
	 	if(a[low]<a[high])
	 	{
	 		minmax.min = a[low];
	 	minmax.max = a[high];
		 }
	 	
	 	else{
	 		minmax.min = a[high];
	 	minmax.max = a[low];
		 }
	 	
	 	return minmax;
	 }
	 int mid = (low+high)/2;
	 mml = findminmax(a,low,mid);
	 mmr = findminmax(a,mid+1,high);
	 
	 if(mml.min<mmr.min){
	 	minmax.min = mml.min;
	 }else{
	 	minmax.min = mmr.min;
	 }
	 if(mml.max>mmr.max){
	 	minmax.max = mml.max;
	 }else{
	 	minmax.max = mmr.max;
	 }
	 return minmax;
	 
	 
 };
 main()
 {
 	int a[] = {5,-2,-1,0,4};
 	Pair minmax;
 	minmax = findminmax(a,0,4);
 	cout<<"max:"<<minmax.max<<endl;
 	cout<<"min:"<<minmax.min<<endl;
 }
