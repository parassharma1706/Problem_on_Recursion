//***************Finding Factorial Of Number using Recursion*******************
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==1)
	return 1;
	
	return n*fact(n-1);
}
int main(){
 int num;
cin>>num;

 int result=fact(num);
cout<<result;
	
	/*
	Time complexity=O(n)
	space complexity=O(n)
	*/
	return 0;
}

