
#include <iostream>

int main() {
    int module1, module2, module3, module4, module5, module6;

    // Input module results
    std::cout << "What was your first module result? ";
    std::cin >> module1;

    std::cout << "What was your second module result? ";
    std::cin >> module2;

    std::cout << "What was your third module result? ";
    std::cin >> module3;

    std::cout << "What was your fourth module result? ";
    std::cin >> module4;

    std::cout << "What was your fifth module result? ";
    std::cin >> module5;

    std::cout << "What was your sixth module result? ";
    std::cin >> module6;
    //calculating the average of the modules
    int average = ((module1 + module2 + module3 + module4 + module5 + module6) / 6);
    // finding out the grade you have based off the average
    switch (average / 10) {
    case 0:
    case 1:
    case 2:
        std::cout << "F" << std::endl;
        break;
    case 3:
        std::cout << "E" << std::endl;
        break;
    case 4:
        std::cout << "D" << std::endl;
        break;
    case 5:
        std::cout << "C" << std::endl;
        break;
    case 6:
        std::cout << "B" << std::endl;
        break;
    case 7:
    case 8:
    case 9:
    case 10:
        if (average >= 85) {
            std::cout << "A*" << std::endl;
        }
        else if (average >= 70) {
            std::cout << "A" << std::endl;
        }
        break;
    default:
        break;
    }

    // Check if passed or failed
    bool hasPassed = module1 >= 40 && module2 >= 40 && module3 >= 40 && module4 >= 40 && module5 >= 40 && module6 >= 40;
    //outputting if you have passed or not
    if (hasPassed) {
        std::cout << "You have passed" << std::endl;
    }
    else {
        std::cout << "You have failed" << std::endl;
    }

    return 0;
}
