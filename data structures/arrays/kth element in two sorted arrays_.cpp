 #include<iostream>
 using namespace std;
 int kth(int *a,int *b,int *e1,int *e2,int k){
 	if(a == e1) return b[k];
 	if(b == e2) return a[k];
 	int mid1 = (e1-a)/2;
 	int mid2 = (e2-b)/2;
 	if(mid1+mid2 < k){
 		if(a[mid1] > b[mid2]){
 			return kth(a,b+mid2+1,e1,e2,k-mid2-1);
		 }else{
		 	return kth(a+mid1+1,b,e1,e2,k-mid1-1);
		 }
	 }else{
	 	if(a[mid1]>b[mid2])
	 	return kth(a,b,a+mid1,e2,k);
	 	else return kth(a,b,e1,b+mid2,k);
	 }
 }
 main()
 {
 	int a[] = {2,3,6,7,9};
 	int b[] = {1,4,8,10};
 	int k = 5;
 	cout<<kth(a,b,a+5,b+4,k-1);
 }
