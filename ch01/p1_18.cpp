#include <iostream>

int main() {

    int currVal = 0, val = 0;
    int cnt = 0;
    if(std::cin >> currVal) {
        cnt = 1;
        while(std::cin >> val) {
            if(val == currVal) {
                cnt++;
            }
            else {
                std::cout << currVal << " ocurrs " << cnt << " times." << std::endl;
                currVal = val;
                cnt = 1;
            }
        }

        std::cout << currVal << " ocurrs " << cnt << " times." << std::endl;
    }

    return 0;
}
