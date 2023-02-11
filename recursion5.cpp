//*************************Print From N to 1*********************
#include<bits/stdc++.h>
using namespace std;
void printing(int i,int n){
	if(i<1)
	return ;
	
	cout<<i<<" ";
	printing(i-1,n);
}
int main(){
	int n;
	cin>>n;
	printing(n,n);
	
	/*
	output for n=8
	8 7 6 5 4 3 2 1
	*/
	
	return 0;
}
