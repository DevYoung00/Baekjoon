#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b){
	return a>b;
}

int main(){
	map<string,string> map;
	vector<string> enter;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string first,second;
		cin >> first >> second;
		map[first] = second;
	}
		std::map<string, string>::iterator it;
    	for (it = map.begin(); it != map.end(); it++) {
      	if(it->second == "enter") enter.push_back(it->first);
    
		}
		sort(enter.begin(), enter.end(), compare);
		for(int i=0;i<enter.size(); i++){
			cout << enter[i] << "\n";
		}
	
	
}

//실5, 회사에 있는 사람
