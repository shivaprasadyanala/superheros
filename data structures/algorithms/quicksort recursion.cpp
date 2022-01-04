 #include <iostream>
 using namespace std;
 void swap(int *a,int *b){
 	int temp = *a;
 	*a = *b;
 	*b = temp;
 }
 int partition(int a[],int low,int high){
 	int i = (low-1);
 	int pivot = a[high];
 	for(int j=low;j<=high-1;j++){
 		if(a[j]<pivot)
 		{
 		  i++;
 		swap(&a[i],&a[j]);	
		}
 		
 		
	 }
	 swap(&a[i+1],&a[high]);
 		return (i+1);
 }
 void quicksort(int a[],int low,int high){
 	if(low<high){
	 int p = partition(a,low,high);
	 quicksort(a,low,p-1);
	 quicksort(a,p+1,high);
 }
}
 main(){
 	int a[] = {4,6,-2,5,-3};
 	quicksort(a,0,4);
 	for(int i = 0;i<5;i++){
 		cout<<a[i]<<" ";
}
 }
 	
