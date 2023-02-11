//*******************Given a and b find the gcd,using recursion****************************
#include<bits/stdc++.h>
using namespace std;
int Finding_Gcd(int a,int b){
	if(b>a) return Finding_Gcd(b,a);
	if(b==0) return a;
	return Finding_Gcd(b,a%b);
}
int main(){
	int  a,b;
	cin>>a>>b;
	int result=Finding_Gcd(a,b);
	cout<<result;
	
	return 0;
}
