#include <iostream>
#include <string>


using namespace std;


int main() {
    int i = 42;
    string s = to_string(i);
    double d = stod(s);
    cout << d << endl;
}
