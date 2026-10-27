//
// Created by nyenn on 25.10.2026.
//
#include <iostream>


class ComplexNumber{
private:
    double Real;  // real numbers
    double Img; // imaginary numbers
public:
    ComplexNumber(){}
    ComplexNumber(int real, int img): Real(real), Img(img){}
    // get method
    double getRealNumber(){
        return Real;
    }

    double getImgNumber(){
        return Img;
    }

    void setRealNumber(int realNumber){
        Real = realNumber;
    }
    void setImgNumber (int imgnumber){
        Img = imgnumber;
    }

    //equal operator =
    bool operator==(ComplexNumber& other){
       return Real = other.Real;
    }

    // Operatorr +=

    ComplexNumber& operator+=( const ComplexNumber& cn){
       Real += cn.Real;
       Img += cn.Img;
        return *this;
    }
    // Operator *=
    ComplexNumber& operator *=(const ComplexNumber& cn){
        Real *= cn.Real;
        Img *= cn.Img;
        return *this;
    }
    //Operator /=
    ComplexNumber& operator /=(const ComplexNumber& cn){
        Real /= cn.Real;
        Img /= cn.Img;
        return *this;
    }
    ComplexNumber& operator -=(const ComplexNumber& cn){
        Real -= cn.Real;
        Img -= cn.Img;
        return *this;
    }

};

//operator +
ComplexNumber operator+(ComplexNumber lhs, const ComplexNumber& rhs){
    lhs += rhs;
    return lhs;
}
// Operator *
ComplexNumber operator*(ComplexNumber lhs, const ComplexNumber& rhs){
    lhs *= rhs;
    return lhs;
}
//Operator /
ComplexNumber operator/(ComplexNumber lhs, const ComplexNumber& rhs){
    lhs /= rhs;
    return lhs;
}
// operator -
ComplexNumber operator-(ComplexNumber lhs, const ComplexNumber& rhs){
    lhs -= rhs;
    return lhs;
}

int main(){
   std::cout <<"hello there!" <<std::endl;
}