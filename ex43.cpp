#include <iostream>
#include <string>
using namespace std;

string test(string s){
    if(s[0] == 'F' && s[s.length() - 1] == 'B'){
        return "FizzBuzz";
    }
    if(s[0] == 'F'){
        return "Fizz";
    }
    if(s[s.length() - 1] == 'B'){
        return "Buzz";
    }
    return s;
}

int main(){

cout << test("FB") << endl;
cout << test("AuzzB") << endl;
cout << test("Fsafs") << endl;
cout << test("founder") << endl;

return 0;
}
