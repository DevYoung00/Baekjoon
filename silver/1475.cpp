#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main(){
	int arr[10] = {0,};
	  int max_num = -1;
	  int idx;
		string s;
		cin >> s;
	  for(int i=0; s[i]!='\0'; i++){
	    int num =(s[i] - 48);
		if(num == 9 | num==6) {
 		  arr[6]++;
 		  continue;
		}
		else{
			 arr[num]++;
			if( max_num< arr[num]) {
	       max_num = arr[num];
	      }
		}
	  }
	  
	  if(arr[6]%2 == 0) arr[6] = arr[6] /2;
	  else arr[6] = arr[6]/2 +1;
	  
	  max_num= max( max_num,arr[6]);
	  cout << max_num << "\n";
}

//실5, 

