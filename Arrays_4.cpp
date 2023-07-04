//include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

/*
	shift all zeros to back of array
	arr = {1,2,0,3,0,0,4,5,6,7,0};
	output:
		{1,2,3,4,5,6,7,0,0,0,0}
*/
void display(vector<int>& arr){
	for(int i=0;i<arr.size();i++){
			cout<<arr[i]<<" ";
		}
	cout<<endl;
}

void brute(){
	//using temp array
	//TC = O(NlogN + N)
	//SC = O(d)

	vector<int> arr = {1,2,0,3,0,0,4,5,6,7,0};
	vector<int> temp;
	for(int i=0;i<arr.size();i++){
		if(arr[i]!=0)	temp.push_back(arr[i]);
	}
	for(int i=0;i<temp.size();i++){
		arr[i] = temp[i];
	}
	for(int i=temp.size();i<arr.size();i++){
		arr[i] = 0;
	}
	display(arr);

}

void better(){
	//TC = O(N + no of zeros)
	vector<int> arr = {1,2,0,3,0,0,4,5,6,7,0};
	int i=0,j=0;
	while(j<arr.size()){
		if(arr[j]!=0){
			arr[i]=arr[j];
			i++;
		}
		j++;
	}
	for(int k=i;k<arr.size();k++){
				arr[k] = 0;
			}
	display(arr);

}

void optimize(){
	//2 pointer therom
	//TC = O(N)
	//SC = O(1)
	vector<int> arr = {1,2,0,3,0,0,4,5,6,7,0};
	int j=-1;
	for(int i=0;i<arr.size();i++){
		if(arr[i]==0){
			j = i;
			break;
		}
	}
	if(j==-1)	cout<<"NO zeros";
	for(int i=j+1;i<arr.size();i++){
		if(arr[i]!=0){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			j++;
		}
	}
	display(arr);
	
}



int main(){

	brute();
	better();
	optimize();

	return 0;
}