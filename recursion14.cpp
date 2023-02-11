//****************Given a number num and a value k.Print k multiples of num,using recursion**********************
#include<bits/stdc++.h>
using namespace std;
void multiple(int n,int k){
	if(k==0)
	return ;
	
	multiple(n,k-1);
	cout<<n*k<<" ";
}
int main(){
int num,k;
cin>>num>>k;
multiple(num,k);
	
	return 0;
}
