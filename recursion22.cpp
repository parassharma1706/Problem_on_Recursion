//***************Given a string we have to find out all its subsequences(subset) of it.
#include<bits/stdc++.h>
using namespace std;
void subsequences(string &str,int n,int i,string result,vector<string> &strr){
	if(i==n) {
		strr.push_back(result);
		return ;
	}
	
	subsequences(str,n,i+1,result+str[i],strr);
	subsequences(str,n,i+1,result,strr);
}
int main(){
	string str;
	cin>>str;
	vector<string> strr;
	
	subsequences(str,str.size(),0,"",strr);
	
	for(int i=0;i<strr.size();i++,strr){
		cout<<strr[i]<<" ";
	}
	cout<<strr.size();
	
	return 0;
}
