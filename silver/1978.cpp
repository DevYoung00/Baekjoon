#include<iostream>

using namespace std;
int main(){
	int n, tmp,res=0;
	cin >> n;
	for(int i=0; i<n; i++){
		bool check = true;
		cin>>tmp;
		if(tmp <= 1) continue;
		for(int i=2; i<tmp; i++){
			if(tmp%i == 0) {
				check = false;
				continue;
			}  
		}
		if(check==true) res++;
	}
	cout <<res;
}

//실5, 소수찾기
