#include <iostream>
#include <string>

int main() {
    const int arraysize=20;
    std::string ABC[arraysize];
    
    for (int n=0; n<arraysize; n++) {
        std::cout<<"Enter a string:";
        std::cin>>ABC[n];
    }
    
    //now you have an array of 20 strings in ABC[]
    
    //you can do whatever you want with these strings here
    
    return 0;
}