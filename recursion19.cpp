//*******************Given an array of n integers and a target value x.Print whether x exists in the array or not.****************************
#include<bits/stdc++.h>
using namespace std;
bool search(int *arr,int n,int idx,int ele){
	if(idx==n) return false;
	
	
	return arr[idx]==ele || search(arr,n,idx+1,ele);
}
int main(){
	int n,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>x;
	
	if(search(arr,n,0,x))
	cout<<"Element is present";
	else
	cout<<"Element is not present";
	
	return 0;
}
