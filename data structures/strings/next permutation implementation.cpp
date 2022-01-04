 #include <iostream>
 using namespace std;
 int* rev(int a[],int l,int r)
 {
 	int temp;
    while(l<r){
    	temp = a[l];
    	a[l++] = a[r];
    	a[r--] = temp;
	}
	return a;
 }
 main()
 {
 	int a[]={1,2,3};
 	int n = sizeof(a)/sizeof(int);
// 	cout<<n<<endl;
 	int i;
 	for(i =n-2;i>0;i--)
 	{
 		if(a[i]<a[i+1]) break;
	 }
//	 cout<<i<<endl;
	 int *temp;
	 
	 temp=rev(a,i+1,n-1);
	 int num = a[i];
//	 cout<<num<<endl;
//	 cout<<a[i+1]<<endl;
	 for(int j = i+1;j<n;j++){
	 	if(a[j]>num){
	 		swap(a[j],a[i]);
	 		break;
		 }
	 }
	 for(int i = 0;i<n;i++) cout<<temp[i]<<" ";
	 
	
 }
