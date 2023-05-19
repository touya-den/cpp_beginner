#include <iostream>
#include <string>
using namespace std;

int main(){

    int n = 2;
    int a[n];
    bool flag = true;
    cout << n << endl;
    cout << "A array has " << n << " inputs" << endl;
    for(int i = 0; i <= n - 1; i++){
        cin >> a[i];
    }
    if(n >= 3){
        for(int j = 0; j <= n -3; j++){
            if(a[j] >= 20 & a[j] <= 50){
                cout << "The position j is " << j + 1 << " and its value is " << a[j] << endl;
                for(int t = j + 1; t <= j+2; t++){
                    if(a[t] >= 20 & a[t] <= 50){
                        cout << "The position t is " << t + 1 << " and its value is " << a[t] << endl;
                    }               
                    else{
                        cout << "Wrong, project ended" << endl;
                        cout << "Ended at position " << t + 1 << endl;
                        if(j == n -3 ) flag = false;
                        break;
                    }
                }
                if(flag == false){
                    cout << "Project ended and nothing is here" << endl;
                    break;
                }
                cout << a[j] << " " << a[j + 1] << " " << a[j + 2] << endl;
            }
        }
    }
    else{
        cout << "None" << endl;
    }

return 0;
}
