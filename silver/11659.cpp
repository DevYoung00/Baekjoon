
#include <iostream>
using namespace std;

int main(void){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m,i,a;
    cin >> n >> m;
    
    int s[111111];
    
    s[0] = 0;
    
    for(i=0; i<n; i++){
        cin >> a;
        s[i+1] = s[i] + a;
    }
    
    for(i=0; i<m; i++){
        int k,j = 0;
        cin >> k >> j;
            cout << s[j] - s[k-1] << "\n";
    }
    
}

