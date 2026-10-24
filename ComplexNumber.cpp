#include <iostream> 

class ComplexNumber
{
    private:

        int realNumber, imgNumber;
    public:

    ComplexNumber(){}
    ComplexNumber(int real, int img): realNumber(real), imgNumber(img){}

    //getters und setters

    int getRealNumber() const
    {
        return realNumber;
    }

    int getImgNumber() const 
    {
        return imgNumber;
    }

    //------------------


    bool operator<(const ComplexNumber& cn);

    ComplexNumber& operator+=(int real);

    

    
};

std::iostream& operator<<(std::iostream out, const ComplexNumber& cn)
{
    out << "(" << cn.getRealNumber() <<", " << cn.getImgNumber() <<"i)";
    return out;
}