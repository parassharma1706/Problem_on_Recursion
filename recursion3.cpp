//*******************Printing name n times using recursion************************
#include<bits/stdc++.h>
using namespace std;

void name(int i,int n){
	if(i>n)
	return ;
	
	
cout<<"Paras Sharma\n";
name(i+1,n);
	
}
int main(){
	int n;
	cin>>n;
name(1,n);
	//cout<<result;
	return 0;
}
