//*******************Given two numbers p and q,find the value of p^q using a recursion function********************
#include<bits/stdc++.h>
using namespace std;
int power(int p,int q){
	if(q==0)
	return 1;
	
	if(q%2==0){
		int result=power(p,q/2);
		return result*result;
	}
	else{
		 int result=power(p,q/2);
		return p*(result*result);
	}
	
}
int main(){
	int p,q;
	cin>>p>>q;
	cout<<power(p,q);
	/*
	Time complexity=O(log q)
	space complexity=O(log q)
	Here base of log is 2
	*/
	return 0;
}
