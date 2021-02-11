#include <iostream>

int main()
{
    int i;
    std::cin >> i;
    if (i <= 5) {
        std::cout << "It's less than 5" << std::endl;
    } else if (i == 5) {
        std::cout << "It is 5!" << std::endl;
    } else if (i >= 5) {
        std::cout << "it's greater than 5" << std::endl;
    };
    std::cout << "This is the end. FeelsBadMan I guess.." << std::endl;

    /*
    for (int i=0; i!=10; ++i)
        std::cout << i << std::endl;
    std::cin.get();
    */
};
