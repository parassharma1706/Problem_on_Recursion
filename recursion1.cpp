//****************Program to find nth fibonacci number using recursion*****************
//******************* 0,1,1,2,3,5,8,13,21 - - - - -so on ******************
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n==0 || n==1)
	return n;

  return fib(n-1)+fib(n-2);
}
int main(){
 int num;
cin>>num;

int result=fib(num);
cout<<result;
 
/*
 Time complexity=O(2^n)
   space complexity=O(n)
*/
	return 0;
}






