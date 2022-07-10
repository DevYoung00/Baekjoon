#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main(){
	string str;
	vector<string> v;
	while(1){
		int cnt = 0;
		getline(cin,str);
		if(str == ".") break;
		for(int i=0; str[i] != '\0'; i++){
			if(cnt>=0){
			if(str[i] == '('){
				v.push_back("(");
				cnt1++;
			}
			if(str[i] == ')') {
				if(v.back() == "("){
					v.erase(v.end());
					cnt1--;
				}
				else {
					cnt1=10; break;
				}
			}
			if(str[i] == '[') {
				v.push_back("[");
				cnt2++;
			}
			if(str[i] == ']') {
					if(v.back() == "["){
					v.erase(v.end());
					cnt2--;
				}
				else{
					cnt2=10;
					break;
				}
			}
			} 
			else break;
		}
		if(cnt1 == 0) cout << "yes\n";
		else cout<<"no\n";
			}
}
