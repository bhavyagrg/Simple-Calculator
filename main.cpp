#include "Calculator.h"
#include <iostream>

int main(int argc, char** argv)
{
    double a,b;
   std::cout<<"Enter the values of a and b"<<std::endl;
   std::cin>>a>>b;

    Calculator calculator;
    double sum = calculator.add(a,b);
    std::cout << "Sum was " << sum << std::endl;
    
    double difference=calculator.subtract(a,b);
    std::cout<<"The diffrence is "<< difference<< std::endl;

    std::cout<<"The multiplication is "<<calculator.multiply(a,b)<<std::endl;

    std:: cout<<"The division is "<< calculator.divide(a,b)<< std::endl;

if(b==0){
    try{
        std:: cout<<"The division is "<< calculator.divide(a,b)<< std::endl;
    }
    catch(std::runtime_error err)
    {
        // what function contains the error passed in runtime_error constructor
        std::cout << err.what() << std::endl;
    }
}
    system("pause"); // to pause the execution
                     // in the terminal if you use pause then you will get a message as Press any key to continue                                                                                                                                                                                      
    return 0;

// -o is output flag which specifies output file name
    
}
