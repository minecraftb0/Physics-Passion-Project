#include <iostream>

int main(){

    //integers
    int x=5; //declaration
    int y=6;
    int sum=x+y;
    int age=15;

    //double
    double price=10.99;
    double gpa=2.5;
    double temp=67.41;

    //char
    char grade='A';
    char currency='$';

    //boolean
    bool student=true;
    bool power=false;

    //string
    std::string name="Aidan";

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";
    std::cout << temp << "\n";
    std::cout << currency << "\n";
    std::cout << power << "\n";
    std::cout << name << "\n";
    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old.";

    return 0;
}