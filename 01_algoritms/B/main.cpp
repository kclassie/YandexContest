#include <iostream>
#include <vector>

int main() {
   std::vector<int> vec;
   int a;
   std::cin >> a;
   vec.push_back(a);
   std::cin >> a;
   vec.push_back(a);
   std::cin >> a;
   vec.push_back(a);
   auto maxInd = max_element(std::begin(vec), std::end(vec));
   int maxElem = *maxInd;
   vec.erase(maxInd);
   if (maxElem < (vec.at(0) + vec.at(1)))
       std::cout << "YES" << std::endl;
   else
       std::cout << "NO" << std::endl;
    return 0;
}