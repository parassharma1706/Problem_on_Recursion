//***************Given an array of integers,print sums of all subsets in it.output sums can be printed in any order***********************
#include<bits/stdc++.h>
using namespace std;
void subset(int *arr,int n,int i,int sum,vector<int> &v){
	if(i==n){
		v.push_back(sum);
		return ;
	}
	
	subset(arr,n,i+1,sum+arr[i],v);
	subset(arr,n,i+1,sum,v);
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cin>>arr[i];
}	
vector<int> v;

subset(arr,n,0,0,v);
for(int i=0;i<v.size();i++){
	cout<<v[i]<<" ";
}
	
	return 0;
}

