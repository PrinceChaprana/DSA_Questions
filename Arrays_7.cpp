//include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

/*
	Maximum Concutive no of 1s
	arr = {1,0,1,1,1,0,0,1,1,0};
	output: 3

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


}

void better(){
	

}

void optimize(){
	//Sum therem
	//TC = O(n1)
	//SC = O(1)
	vector<int> arr = {1,0,1,1,1,0,0,1,1,0};
	int maxx = 0;
	int count = 0;
	for(int i=0;i<arr.size();i++){
		if(arr[i] ==1){
			count++;
			continue;
		}
		if(count>maxx)	maxx = count;
		count = 0;
	}

	cout<<maxx<<endl;
		
}


int main(){

	brute();
	better();
	optimize();

	return 0;
}