#include <iostream>
#include<cctype> 

using namespace std;
int main(){
	
	
	
	string a, b;
    cin >> a >> b;
    int a_len = a.length();
    int b_len = b.length();
    int count, min=b.length();
    for(int i=0; i<= b_len - a_len; i++){
    	 count =0;
    		string temp = b.substr(i,a_len);
    		for(int j=0; j<a.length(); j++){
    			if(temp[j] != a[j]) count++;
		}
    	if(min>count) min = count;
	}
	cout << min;
}

//실4, 문자열  
