#include<iostream>

using namespace std;
int main(){
	int n,res=0;
	string tmp;
	cin >> n;
	for(int i=0; i<n; i++){
		char ascii[30] = {0,};
		bool check = true;
		cin >> tmp;
		int len = tmp.length();
		for(int i=0; i<len; i++){
			if(ascii[tmp[i]-97] > 0){
				if(tmp[i-1] && tmp[i] != tmp[i-1]) check = false;
			}
			ascii[tmp[i]-97]++;
		}
		if(check == true) res++;
	}
	cout<<res;
}
//실5, 그룹단어 체커
