 #include <iostream>
 using namespace std;
 int getmedian(int a1[],int a2[],int n)
 {
 	int i = 0;
 	int j = 0;
 	int count;
 	int m1 = -1,m2 = -1;
 	for(count = 0;count<=n;count++)
 	{
 		cout<<"i:"<<i<<" m1:"<<m1<<" j:"<<j<<" m2:"<<m2<<endl;
		 cout<<"cnt:"<<count<<endl;
 		if(i == n)
 		{
 			cout<<"first";
 			m1 = m2;
 			m2 = a2[0];
 			break;
		 }
		 if(j == n)
 		{
 			m1 = m2;
 			m2 = a1[0];
 			break;
		 }
		 if(a1[i]<=a2[j])
		 {
		 	m1 = m2;
		 	m2 = a1[i];
		 	i++;
		 }else{
		 	m1 = m2;
		 	m2 = a2[j];
		 	j++;
		 }
		 
	 }
	 return (m1+m2)/2;
 }
 main()
 {
// 	int a[]={1,12,15,26,38};
// 	int b[] = {2,13,17,45};
    int a[] = {1,3,5,7};
    int b[] = {2,8,9 ,10};
 	cout<<getmedian(a,b,4);
 }
