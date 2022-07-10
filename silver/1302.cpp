#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main(){
	int n;
	cin >> n;
	vector<string> v;
	string str;
	int max = 0;
	string best;
	int idx;
	for(int i=0; i<n; i++){
		cin >> str;
		v.push_back(str);
		int cnt = count(v.begin(),v.end(),str);
		if(cnt>max) {
			idx = i;
			best = str;
			max = cnt;
		}
		if(cnt == max){
			if(v[idx] > v[i]){
			idx = i;
			best = str;
			}
		}
	}
	cout << best << "\n";
	 
}

//실4, 베스트셀러 
