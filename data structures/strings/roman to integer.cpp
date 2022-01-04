 #include <iostream>
 using namespace std;
 main()
 {
// 	string s = "XLXLLXCXMIXCM";
    string s;
    cout<<"enter the string:"<<endl;
    cin>>s;
 	int l = s.length();
 	int cnt = 0;
 	for(int i = 0;i<l;i++)
 	{
 		if(s[i]=='I' &&i+1<l&&s[i+1]=='V'){
 			cnt+=4;
 			i++;
 			continue;
		 }
 		else if(s[i]=='I' &&i+1<l&&s[i+1]=='X'){
 			cnt+=9;
 			i++;
 			continue;
		 }
 		else if(s[i]=='I')cnt+=1;
 		
 		if(s[i]=='X' &&i+1<l&&s[i+1]=='L'){
 			cnt+=40;
 			i+=1;
 			continue;
		 }
 		else if(s[i]=='X' &&i+1<l&&s[i+1]=='C'){
 			cnt+=90;
 			i+=1;
 			continue;
		 } 
 		else if(s[i]=='X') cnt+=10;
 		
 		if(s[i]=='C' &&i+1<l&&s[i+1]=='D'){
 			cnt+=400;
 			i++;
 			continue;
		 }
 		else if(s[i]=='C' &&i+1<l&&s[i+1]=='M'){
 			cnt+=900;
 			i++;
 			continue;
		 }
 		else if(s[i]=='C') cnt+=100;
 		cout<<cnt<<endl;
 		if(s[i]=='V') cnt+=5;
 		if(s[i]=='L') cnt+=50;
 		if(s[i]=='D') cnt+=500;
 		if(s[i]=='M') cnt+=1000;
// 		cout<<i<<endl;
 		cout<<cnt<<endl;
	 }
	 cout<<cnt<<endl;
 }
