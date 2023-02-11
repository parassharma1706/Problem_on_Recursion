#include<bits/stdc++.h>
using namespace std;
void combination(string &str,int n,int i,string result,vector<string> &v,vector<string> &strr){
	if(i==n){
		strr.push_back(result);
		return ;
	}
	int digit=str[i]-'0';
	if(digit<=1){
		combination(str,n,i,result,v,strr);
		return ;
	}
	for(int j=0;j<v[digit].size();j++){
		combination(str,n,i+1,result+v[digit][j],v,strr);
	}
	
}
int main(){
	string str;
	cin>>str;
	vector<string> v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	vector<string> strr;
	combination(str,str.size(),0,"",v,strr);
	
	for(int i=0;i<strr.size();i++){
		cout<<strr[i]<<" ";
	}
	return 0;
}
