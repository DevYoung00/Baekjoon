#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,string> a, pair<int,string> b){
	return a.first<b.first;
}

int main(){
    int n, a=0;
    string str;
    cin >> n;
    pair<int,string> p;
    vector< pair<int,string> > input;
    for(int i=0; i<n; i++){
    	cin >> p.first >> p.second ;
    	input.push_back(p);
	}
	stable_sort(input.begin(),input.end(),compare);
	for(int i=0; i<n; i++){
    	cout << input[i].first <<" " << input[i].second << "\n";
}


}


