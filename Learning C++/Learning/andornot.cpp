#include <iostream>

int main(){

    // && and
    // || or
    // ! not

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp<=0 || temp >= 30){
        std::cout << "The temperature is good!\n";
    }
    else{
        std::cout << "The temperature is bad!\n";
    }

    if(!sunny){
        std::cout << "It is cloudy outside";
    }
    else{
        std::cout << "It is sunny outside";
    }

    return 0;
}