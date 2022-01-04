 #include <iostream>
 #include <bits/stdc++.h>
 using namespace std;
 main()
 {
    string s1 = "how arert out";
    vector<string> v;
    int n = s1.length();
    string t ="";
    int n2 = 0;
	for(int i = 0;i<n;i++)
	{
		if(s1[i]!=' ') t+=s1[i];
		else if(s1[i]==' '){
			int si = t.length();
			n2=max(n2,si);
			v.push_back(t);
			t="";
		}
	}
	int si = t.length();
	n2 = max(n2,si);
	cout<<n2<<endl;
	v.push_back(t);
	vector<string> res;
	string s2;
	cout<<n<<endl;
	for(int i = 0;i<n2;i++){
		s2="";
		for(int j = 0;j<n2;j++)
		{
			if(i<v[j].size())
			s2+=v[j][i];
			else s2+=' ';
			cout<<s2<<endl;
		}
			while(res[i].back()==' ') res[i].pop_back();
		res.push_back(s2);
	}

	for(int i = 0;i<n;i++) cout<<res[i]<<endl;
 }
