#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b){
	return a<b;
} 
	
int main(){
	string str;
	cin >> str;
	vector<string> v;
	v.push_back(str); 
	for(int i=1; i<str.length(); i++){
		string temp = str.substr(i, str.length());
		v.push_back(temp); 
	}
	sort(v.begin(), v.end(), compare);
	for(int i=0; i<v.size(); i++){
		cout << v[i] << "\n";
	}
		return 0;
}

 //실4, 접미사배열 

