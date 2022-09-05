#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    int solution;
    std::cin >> a >> b >> c;
    if (c == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }
    if (c < 0) {
        std::cout << "NO SOLUTION" << std::endl;
        return 0;
    }
    c = pow(c, 2);
    solution = (c - b) / a;
    if ((solution * a + b) >= 0)
        std::cout << solution << std::endl;
    else
        std::cout << "NO SOLUTION" << std::endl;
    return 0;
}