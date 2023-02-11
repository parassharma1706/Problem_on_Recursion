//**********************Remove all the occurrences of'a' from string given by user********************
#include<bits/stdc++.h>
using namespace std;
string remove(string &mystr,int idx,int n,char ele){
	if(idx==n)
	return "";
	
	
	if(mystr[idx]==ele)
	return ""+remove(mystr,idx+1,n,ele);
	else
	return mystr[idx]+remove(mystr,idx+1,n,ele);
	
}
int main(){
string mystr;
getline(cin,mystr);
char ele='a';
string str=remove(mystr,0,mystr.length(),ele);
cout<<str;
	return 0;
}
