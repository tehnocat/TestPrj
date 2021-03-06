#include <iostream>
#include <vector>
#include "myvector.h"

int main() {

    std::vector <uint8_t>original_v;

    original_v.push_back(1);
    original_v.push_back(2);

    test::Vector v(6);

    try {
        v[1] = 1;
        v[7] = 0;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unhandled exception" << std::endl;
    }

    std::cout << *v.begin() << std::endl;

    std::cout << *v.end() << std::endl;

    auto sz = v.size();
    std::cout << "Hello, World!" << std::endl;

    for (auto &n : v) {
        std::cout << n << std::endl;
    }
    std::cout << sz << std::endl;

    for (auto &n : original_v){
        std::cout << n << std::endl;
    }
    return 0;
}