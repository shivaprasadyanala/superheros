 #include <iostream>
 using namespace std;
 main()
 {
 	int n = 5;
 	int cnt = 0;
    for(int i = 1;i<=n;i++){
    	int t = i;
    	while(t){
// 			cout<<t<<endl;
			cnt+=t&1;
			t>>=1;
		 }
	}
 		
	 cout<<cnt<<endl;
 }
