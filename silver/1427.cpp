#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(int a, int b){
	return a>b;
}

int main(){
	string n;
	vector<int> arr;
	getline(cin,n);
	for(int i=0; n[i]!='\0'; i++){
		int temp = n[i] - 48;
		arr.push_back(temp);
	
	}
	sort(arr.begin(),arr.end(),compare);
	for(int i=0; n[i]!='\0'; i++){
		cout<< arr[i];
	}
}

//실5 소트인사이드 
