#ifndef CALCULATOR_H_
#define CALCULATOR_H_

class Calculator
{
    public:
    Calculator(){}
    Calculator(double x,double y){
        num1 = x;
        num2 = y;
    }
    void set(double num1,double num2){
        this->num1 = num1;
        this->num2 = num2;
    }
    double add()const{
        return num1+num2;
    }
    double sub()const{
        return num1-num2;
    }
    double mul()const{
        return num1*num2;
    }
    double div()const{
        if(num2==0){
            exit(0);
        }
        return num1/num2;
    }
    private:
    double num1;
    double num2;
};







#endif //CALCULATOR_H_