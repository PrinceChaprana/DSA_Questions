//include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

/*
	Left Rotate the Array by d moves
	arr = {1,2,3,4,5,6,7};
	d = 3;
	output:
		{4,5,6,7,1,2,3}
*/

void brute(){
	//using temp array
	//TC = O(NlogN + N)
	//SC = O(d)

	vector<int> arr = {1,2,3,4,5,6,7};
	int d = 3;
	int n = arr.size();
	d = d%n;
	vector<int> temp(d);
	for(int i = 0;i<d;i++)
		temp[i] = arr[i];
	for(int i=d;i<n;i++){
		arr[i-d] =arr[i]; 
	}
	int j=0;
	for(int i=n-d;i<n;i++)
		arr[i] = temp[j++];

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

}

void reverse(vector<int>& arr,int start,int end){
	
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void better(){
	

}

void optimize(){
	//reversing arr(d) and arr(d,n)
	//reverse arr(0,n)
	//TC = O(2n)
	//SC = O(1)
	vector<int> arr = {1,2,3,4,5,6,7};
	int d = 3;
	int n = arr.size();
	d = d%n;

	reverse(arr,0,d-1);
	//3 2 1 4 5 6 7
	reverse(arr,d,n-1);
	// 3 2 1 7 6 5 4
	reverse(arr,0,n-1);
	// 4 5 6 7 1 2 3

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){

	brute();
	better();
	optimize();

	return 0;
}