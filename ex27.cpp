#include <iostream>
#include <string>
using namespace std;

bool test(string a, char b){
    int counter = 0;
    int j = 0;
    for(int i = 0; i <= a.length() - 2; i++){
        j = i + 1;
        if((a[i] == b)){
            counter++;
            if(a[j] == b && counter < 2){
                return true;
            }
        }
    }
    return false;
}

int main(){

cout << test("aab", 'a') << endl;
cout << test("aba", 'a') << endl;
cout << test("caabb", 'a') << endl;
cout << test("babaaba", 'a') << endl;
cout << test("aaaaa", 'a') << endl;
cout << test("babb", 'b') << endl;
cout << test("bbab", 'b') << endl;

return 0;
}
