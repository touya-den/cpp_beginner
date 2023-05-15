#include <iostream>
#include <string>
using namespace std;

int main(){

    int n, a, minn = 0, b = 0;
    int x[n];
    cin >> n;
    cout << "Type size of N = " << n << "\n";   
    for ( int i = 0; i < n; i++){
        cin >> x[i];
    }
    for (int j = 0; j < n - 1; j++){
        minn = x[j];
        for (int z = j + 1; z < n; z++){
            if(x[j] > x[z]) a = x[z];
            else a = x[j];
            if(a < minn){ 
                minn = a;
                b = x[z];
                x[z] = x[j];
                x[j] = b;
            }
        }
    }
    for (int c = 0; c <= n -1; c++) cout << x[c];
    
return 0;
}
