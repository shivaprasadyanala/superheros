 #include <iostream>
 using namespace std;
 main()
 {
 	string s1 = "abcd";
 	string s2 = "cdabd";
 	string temp = "";
 	temp=s1+s1;
 	if(temp.find(s2)!=string::npos){
 		cout<<"yes"<<endl;
	 }else{
	 	cout<<"no"<<endl;
	 }
 }
