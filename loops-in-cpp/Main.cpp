#include <iostream>

int main() 
{
    int counter;
    for (counter = 0; counter <= 5; ++counter) 
    {
        std::cout << "This is loop " << counter << "!" << std::endl;
    };
    
    int counter2;
    while (counter2 <= 5) 
    {
        std::cout << "While: " << counter2 << "!" << std::endl;
        ++counter2;
    };

    int counter3;
    do
    {
        std::cout << "DoWhile: " << counter3 << "!" << std::endl;
        ++counter3;
    } while (counter3 <= 5);
};
