#include <iostream>
#include <string>

int main(){
    //addition
    int value {5};
    std::cout << "the value for value1 is: " << value << std::endl;
    value = value + 2;
    std::cout << "the new value for value1 is: " << value << std::endl;
    
    //subtraction
    int value2 {6};
    std::cout << "the value for value2 is: " << value2 << std::endl; 

    value2 = value2 - 5;
    std::cout << "new value is: " << value2 << std::endl;
    //can only do this for sub and addition


//incramenting
    int value3 {5};
    std::cout << "lets increment value3 by one: " << value3++ << std::endl; // this only incraments will not display to the terminal
    std::cout << "the new value3 is " << value3 << std::endl; 

//decrement
    std::cout << "lets decrement value3 back down by one:  " << value3-- << std::endl; 
    std::cout << "the new value3 is: " << value3 << std::endl;
 
//can only increment and decrement by one in c++

//can also do a prefix version of increment and decrement that will change the value directly
    int value4 {6};

    
    std::cout << "increamenting value4 directly is starts at 6 and now is: " << ++value4 << std::endl;
    

    
    std::cout << "changing value4 back down it was 7 after decrementing now it is: " << --value4 << std::endl;









       return 0;
};