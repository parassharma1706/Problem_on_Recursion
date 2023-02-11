//**********************Find the sum of the values of the array,using recursion********************
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int idx,int n){
if(idx==n-1)
return arr[idx];

return arr[idx]+sum(arr,idx+1,n);

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int result=sum(arr,0,n);
	cout<<result;

	return 0;
}
