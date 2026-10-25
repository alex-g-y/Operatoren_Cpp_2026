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



    
    /**
     * Additionner les parties réelles entre elles et les parties imaginaires entre elles.
     */
     ComplexNumber& operator+=(const ComplexNumber& cn)
    {

    }

    /**
     * Soustraire les parties réelles et imaginaires correspondantes.
     */
    ComplexNumber& operator-=(const ComplexNumber& cn)
    {

    }

    /**
     * Multiplier deux nombres complexes et stocker le résultat dans l'objet courant.
     */
    ComplexNumber& operator*=(const ComplexNumber& cn)
    {

    }

    /**
     *  Diviser deux nombres complexes et stocker le résultat dans l'objet courant. Gérer la division par zéro.
     */
    ComplexNumber& operator/=(const ComplexNumber& cn)
    {

    }




    
};

std::iostream& operator<<(std::iostream out, const ComplexNumber& cn)
{
    out << "(" << cn.getRealNumber() <<", " << cn.getImgNumber() <<"i)";
    return out;
}