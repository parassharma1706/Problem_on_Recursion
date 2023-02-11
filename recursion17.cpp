//*******************Given a number check whether the number is armstrong or not************************
#include<bits/stdc++.h>
using namespace std;
int armstrong(int n,int d){
	if(n==0) return 0;
	
	return pow(n%10,d)+armstrong(n/10,d);
}
int main(){
	int num;
	cin>>num;
	int digits=log10(num)+1;
	int result=armstrong(num,digits);
	if(num==result)
	cout<<"Number is Armstrong";
	else
	cout<<"Number is Not Armstrong";
	return 0;
}
