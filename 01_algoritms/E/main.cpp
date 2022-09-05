#include <iostream>

int main() {
    int k1, m, k2, p2, n2, p1, n1, q = 0, q2 = 0, q3 = 0;
    std::cin >> k1 >> m >> k2 >> p2 >> n2;
    q = k2 / n2; //квартир на одном этаже
    if ((k2 % n2) > 0)
        q += 1;
    std::cout << "q = " << q << std::endl;
    q2 = m * q; //кол-во вкартир в 1 подъезде
    std::cout << "q2 = " << q2 << std::endl;
    p1 = k1 / q2; //подъезд
    if ((k1 % q2) > 0)
        p1 += 1;
    std::cout << "p1 = " << p1 << std::endl;
    q3 = k1 % q2; //остаток
    std::cout << "q3 = " << q3 << std::endl;
    n1 = q3 / q;
    if ((q3 % q) >= 0)
        n1 += 1;
    std::cout << p1 << " " << n1 << std::endl;
    return 0;
}