//****************Print Linearly From 1 to N*********************
#include<bits/stdc++.h>
using namespace std;
void printing(int i,int n){
	if(i>n)
	return ;
	
	cout<<i<<" ";
	printing (i+1,n);
	
}
int main(){
	int n;
	cin>>n;
	printing(1,n);
	/*
	output for n=8
	1 2 3 4 5 6 7 8
	
	Time Complexity=O(n)
	Space complexity=O(n)
	
	*/
	return 0;
}
