//*****************Given an integer,find out the sum of its digits using recursion***********************
#include<bits/stdc++.h>
using namespace std;
int sum_of_digits(int n){
	if(n>=0 && n<=9)
	return n;
	
	return sum_of_digits(n/10)+(n%10);
	
	
}
int main(){
	int n;
	cin>>n;
	int result=sum_of_digits(n);
	cout<<result;
	/*
	Time complexity=O(log n)
	Space complexity=O(log n)
   HerebBase of log is 10
  */
	return 0;
}
