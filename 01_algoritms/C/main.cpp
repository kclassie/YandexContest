#include <iostream>
#include <vector>

void cleanNumber(std::string number, std::vector<char> *vec) {
    for (int i = number.size(); i >= 0; i--) {
        if (number[i] > 47 && number[i] < 58)
            vec->push_back(number[i]);
    }
    if (vec->size() == 7) {
        vec->push_back('5');
        vec->push_back('9');
        vec->push_back('4');
    }
    if (vec->size() == 11)
        vec->pop_back();
    if (vec->size() == 12) {
        vec->pop_back();
        vec->pop_back();
    }
}

int main() {
    std::string number;
    std::vector<char> newNumber;
    std::cin >> number;
    cleanNumber(number, &newNumber);
    for (int i = 0; i < 3; i++) {
        std::cin >> number;
        std::vector<char> tmpNumber;
        cleanNumber(number, &tmpNumber);
        int j = newNumber.size() - 1;
        while (j >= 0) {
            if (newNumber[j] != tmpNumber[j]) {
                std::cout << "NO" << std::endl;
                break;
            }
            j--;
        }
        if (j < 0)
            std::cout << "YES" << std::endl;
    }
    return 0;
}