#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	map<string, string> map;
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		string first,second;
        cin >> first >> second;
        map[first] = second;
		}
	for(int i=0; i<m; i++){
		string tmp;
		cin >> tmp;
		cout <<map[tmp] << "\n";
	}
}
