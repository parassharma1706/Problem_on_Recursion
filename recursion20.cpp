/****************The Problem Is to Count all the possible paths on an m*n grid from top left (grid [0][0]) to bottom right (grid[m-1][n-1]).
            Having constraints that from each cell you can either move only to right or down .**********************************/
#include<bits/stdc++.h>
using namespace std;
int total_path(int i,int j,int m,int n){
	if(i==m-1 && j==n-1) return 1;
	if(i>=m || j>=n) return 0;
	
	
	return total_path(i+1,j,m,n)+total_path(i,j+1,m,n);
}
int main(){
	int m,n;
	cin>>m>>n;
int result=total_path(0,0,m,n);
	cout<<"Total number of ways="<<result;
	return 0;
}
