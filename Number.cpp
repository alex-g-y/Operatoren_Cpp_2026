//
// Created by nyenn on 25.10.2026.
//
#include <iostream>


class ComplexNumber{
private:
    int Real;  // real numbers
    int Img; // imaginary numbers
public:
    ComplexNumber(){}
    ComplexNumber(int real, int img): Real(real), Img(img){}
    // get method
    int getRealNumber(){
        return Real;
    }

    int getImgNumber(){
        return Img;
    }

    void setRealNumber(int realNumber){
        Real = realNumber;
    }
    void setImgNumber (int imgnumber){
        Img = imgnumber;
    }
};

  //void operator =