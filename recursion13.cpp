//**********************Write a program to check whether a given number is palindrome or not**************************
#include<bits/stdc++.h>
using namespace std;
bool checking_palindrome(int n,int &temp){
	if(n>=0 && n<=9){
		int temp1=temp;
		temp/=10;
		return (n==(temp1%10));
	}
	
	int result=(checking_palindrome(n/10,temp) && (n%10==temp%10));
	temp/=10;
	return result;
}
int main(){
	int num,temp;
	cin>>num;
	temp=num;
	
	if(checking_palindrome(num,temp))
		cout<<"Number is a Palindrome";
		else
		cout<<"Number is not a Palindrome";
	
	return 0;
}
