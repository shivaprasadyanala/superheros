 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
 	int a[]={5,1,3,4,7};
 	int sum;
 	cin>>sum;
 	int n =5;
 	sort(a,a+n);
 	int cnt = 0;
 	int csum = 0;
    for(int i = 0;i<n-3;i++)
    {
    	int low = i+1;
    	int high = n-1;
    	while(low<high){
    		csum+=a[i]+a[low]+a[high];
		
		if(csum>=sum) high--;
		else{
			cnt+=high-low;
			low++;
		}
	}
	}
	 cout<<"cnt:"<<cnt<<endl;
 }
