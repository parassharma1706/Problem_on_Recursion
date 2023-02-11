//*********************Given an array ,return the maximum element from the array************************
#include<bits/stdc++.h>
using namespace std;
int maximum(int arr[],int idx,int n){
if(idx==n-1)
return arr[idx];

return max(arr[idx],maximum(arr,idx+1,n));

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int result=maximum(arr,0,n);
	cout<<result;

	return 0;
}
