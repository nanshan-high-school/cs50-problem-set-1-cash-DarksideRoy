#include <iostream>
using namespace std;
//27125 范伯綱 655249

int main() {
    float cash;
    cout << "Enter how many money? ";
    cin >> cash;      

    int total = 0, temp, rest, help;
    temp = cash / 1000;
    rest = cash -= 1000 * temp;
    help = cash;
    cash -= help;
    
    while (cash < 1 && cash != 0) {
        if (cash >= 0.5) {
            cash -= 0.5;
            total += 1;
        }
        if (cash > 0) {
            total += cash / 0.1;
        }
        cash *= 10;
    }
    
    while (rest >= 1) {
        if (rest % 10 >= 5) {
            rest -= 5;
            total += 1;
        }
        total += rest % 10;
        rest /= 10;
    }
    total += temp;
    cout << "At least " << total << ".";
}
