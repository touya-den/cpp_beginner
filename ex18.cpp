#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    vector<int> number(0);
    int n, a;
    cin >> n;
    cout << "You have " << n << " numbers" << endl;
    for(int i = 0; i < n; i++){
        cin >> a;
        number.push_back(a);
    }
    // for(int j = 0; j < size(number); j++){
    //     cout << number.at(j) << endl;
    // }
    int max = 0;
    for(auto j : number){
        if(j > max){
            max = j;
        }
    }
    cout << max << endl;

return 0;
}
