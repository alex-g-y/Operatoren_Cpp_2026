#include <iostream> 

class ComplexNumber
{
    private:

        int realNumber, imgNumber;
    public:

    ComplexNumber(){}
    ComplexNumber(int real, int img): realNumber(real), imgNumber(img){}

    bool operator<(const ComplexNumber& cn);
    
    
};