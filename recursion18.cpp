//*********************Frog jump Problem***************************
#include<bits/stdc++.h>
using namespace std;
int minimum_cost(int arr[],int n,int idx){
	if(idx==n-1) return 0;
	if(idx==n-2) return minimum_cost(arr,n,idx+1)+abs(arr[idx]-arr[idx+1]);
	
	
	return min(minimum_cost(arr,n,idx+1)+abs(arr[idx]-arr[idx+1]),minimum_cost(arr,n,idx+2)+abs(arr[idx]-arr[idx+2]));
}
int main(){
	int arr[]={10,30,40,20};
	
	int result=minimum_cost(arr,4,0);
	cout<<result;
	return 0;
}
