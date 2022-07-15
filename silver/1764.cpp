#include <iostream>
#include <map>

using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int count = 0;
	map<string, int> map;
	for(int i=0; i<n+m; i++){
		string s;
		cin >> s;
		map[s]++;
		if(map[s] >1) count++;
	}
	cout << count <<"\n";
	std::map<string, int>::iterator it;
    for (it = map.begin(); it != map.end(); it++) {
      	if(it->second>1)cout << it->first << "\n";
     
		}

}
