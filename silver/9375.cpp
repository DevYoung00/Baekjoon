#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	cin >> n;
	for(int i=0; i<n; i++){
		map<string, int> map;
		int res = 1;
		cin >> m;
		string first, second;
		for(int j=0; j<m; j++){
			cin >> first >> second;
			map[second]++;
		
		}
		std::map<string, int>::iterator it;
    	for (it = map.begin(); it != map.end(); it++) {
      	res = res * (it->second+1);
      	
    }
    cout << res-1 << "\n";
	}
}

//실3, 패션왕 신해빈 
