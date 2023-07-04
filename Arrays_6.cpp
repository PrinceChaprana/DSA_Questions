//include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

/*
	Find the Missing number
	arr = {1,2,3,4,5,7};
	output: 6

*/
void display(vector<int>& arr){
	for(int i=0;i<arr.size();i++){
			cout<<arr[i]<<" ";
		}
	cout<<endl;
}

void brute(){
	//using flag
	//TC = O(n^2)
	//SC = O(st)

	vector<int> arr = {1,2,3,4,5,7};
	int n = arr.size() + 1 ;
	for(int i=1;i<=n;i++){
		int flag = 0;
		for(int j=0;j<n-1;j++){
			if(arr[j]==i){
				flag = 1;
				break;
			}
		}
		if(flag ==0){
			cout<<i<<endl;
			break;
		}
	}
	

}

void better(){
	//using hashing
	//Tc = O(2n)
	//SC = O(2n)
	vector<int> arr = {1,2,3,4,5,7};
	int n = arr.size();
	vector<int> hash(n+1,0);
	for(int i=0;i<n;i++){
		hash[arr[i]-1] = 1;
	}
	for(int i=0;i<n+1;i++){
		if(hash[i]==0){
			cout<<i+1<<endl;
			break;
		}
	}

}

void optimize1(){
	//Sum therem
	//TC = O(n1)
	//SC = O(1)
	vector<int> arr = {1,2,3,4,5,7};
	int n = arr.size() +1;
	int sum = (n * (n+1))/2;
	int sum2 = 0;
	for(int i=0;i<n-1;i++){
		sum2 += arr[i];
	}
	cout<<sum-sum2<<endl;
	
	
}

void optimize2(){
	//using xor
	vector<int> arr = {1,2,3,4,5,7};
	int xor1 = 0,xor2 = 0;
	for(int i=0;i<arr.size();i++){
		xor2 = xor2 ^ arr[i];
		xor1 = xor1 ^ (i+1);
	}
	xor1 = xor1^(arr.size()+1);
	cout<<(xor1^xor2)<<endl;
}


int main(){

	brute();
	better();
	optimize1();
	optimize2();

	return 0;
}