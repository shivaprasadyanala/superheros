 #include <iostream>
 using namespace std;
 main()
 {
 	string word = "abcdefd";
 	char ch ='d';
 	bool flag = true;
 	int len = word.length();
        int ind;
        for(int i = 0;i<word.length();i++)
        {
            if(word[i]==ch){
            	flag = true;
                ind = i;
                break;
            }
        }
        string s1="";
        cout<<ind<<endl;
        for(int i = ind;i>=0;i--)
        {
            s1 += word[i];
        }
        for(int i = ind+1;i<len;i++){
            s1 +=word[i];
        }
        if(!flag) cout<<"no"<<endl;
        for(int i = 0;i<s1.length();i++)
        {
        	cout<<s1[i];
		}
 }
