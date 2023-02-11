/***********Given a number n.Find the sum of natural number till n but with alternate signs.
                 that means if n=5 then you have to return 1-2+3-4+5=3 as answer**********************
*/
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
	if(n==1)
	return n;
	
	return sum(n-1)+(n%2==0?(-n):n);
}
int main(){
	int n;
	cin>>n;
int result=sum(n);
	cout<<result;
	return 0;
}
