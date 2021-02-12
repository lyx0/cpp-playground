#include <iostream>

// continue, break, return 
//
int main()
{
    int i = 0;
    for (i = 0; i <= 20; ++i) {
       if (i == 17)
           break;
       if (i % 2 == 0) 
           continue;
       std::cout << "I is at: " << i << " right now" << std::endl;
    };

    int i2 = 0;
    while (i2 <= 5) {
       std::cout << "While: " << i2 << std::endl;
       ++i2;
    };
};

