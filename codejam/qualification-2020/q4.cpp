 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin>>t;
	string s;
	cin>>s;
	while(t--){
		char c;
		string s="";
		for(int j=0;j<10;j++){
			s+="0";
		}
		for(int i=1;i<=10;i++){
			cout<<i<<endl;
			cout.flush();
			cin>>c;
			s[i-1]=c;
		}
		cout<<s<<endl;
		cout.flush();
		char f;
		cin>>f;
		if(f=='Y')continue;
		else return 0;
	}
	return 0;
}