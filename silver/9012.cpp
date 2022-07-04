#include <iostream>
using namespace std;

int main(){
	int n;
	string str;
	cin >> n;
	for(int i=0; i<n; i++){
		int count = 0;
		cin >> str;
		for(int j=0; j<str.length(); j++){
			if(str[j] == '(') count++;
			else if(str[j] == ')') count--;
			if(count<0) break;	
		}
		if(count==0) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}

 

//실4, 괄호 문제
