#include <iostream>


int main() {

    setlocale(LC_ALL, "RUS");
    int a;

    std::cout << "Введите а:";
    std::cin >> a;
    for (int i(0); i < a; i++) {
        for (int j(a); j != i; j--) {
            std::cout << " ";
        }
        for (int r(0); r != i; r++) {
            std::cout << "**";
        }
        std::cout << std::endl;
    }
    system("pause");
    return 0;
}
