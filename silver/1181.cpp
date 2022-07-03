#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string a, string b){
	if(a.length() < b.length() | (a.length() == b.length() && a<b)) return true;
	return false;
	}
	
int main(){
	int n;
	string temp;
	cin >> n;
	vector <string> v;
	for(int i=0; i<n; i++){
		cin >> temp;
		if(find(v.begin(), v.end(), temp) == v.end()) v.push_back(temp);
		}
	sort(v.begin(), v.end(), compare);
	for(int i=0; i<v.size(); i++){
		cout << v[i] << "\n";}
		return 0;
}

 

