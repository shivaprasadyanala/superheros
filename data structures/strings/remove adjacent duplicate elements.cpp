 #include <iostream>
 using namespace std;
 main()
 {
 	string s = "geksfforgeeg";
 	int i = 0;
    char st[s.length()];
 	for(int j = 0;j<s.length();j++)
 	{
 	  	 char ch = s[j];
 	  	 if(i>0 && st[i-1]==ch){
 	  	 	i--;
		}else{
			st[i]=ch;
			i+=1;
		}
	}
	for(int j = 0;j<i;j++) cout<<st[j]<<" ";
 }
