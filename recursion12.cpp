//***********************Given a number find whether the number is palindrome or not,using recursion******************************
#include<bits/stdc++.h>
using namespace std;
int reversing(int n,int &sum){
	if(n>=0 && n<=9)
	{
		sum=(sum*10)+n%10;
		return sum;
	}
	sum=(sum*10)+(n%10);
	return reversing(n/10,sum);
}
int main(){
	int n;
	cin>>n;
	int sum=0;
	
	if(reversing(n,sum)==n)
	cout<<"Palindrome";
	else
	cout<<"Not Palindrome";
}
