 #include <iostream>
 using namespace std;
 main()
 {
 	string s = "aabccabba";
 	int i = 0;
 	int j = s.length();
 	string a = s;
 	while(i<j)
 	{
// 		cout<<"hi";
 		while(a[i+1]==a[j]) i+=1;
 		while(a[j-1]==a[i]) j+=1;
 		if(a[i]==a[j]) i++,j--;
 		for(int k = i+1;k<j-1;k++) s+=a[k];
 		if(a[i]!=a[j]) break;
	 }
	 cout<<a<<endl;
	 
 }
