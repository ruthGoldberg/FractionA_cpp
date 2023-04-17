#pragma once
#include <iostream>
using namespace std;
namespace ariel{
    class Fraction{
        int numerator;
        int denominator;

    public:
        Fraction(int numerator , int denominator){
            this->numerator = numerator;
            this->denominator = denominator;
        }
        Fraction operator+ (const Fraction& other)const{return *this;}
        Fraction operator+ (const float number)const{return *this;}
        friend Fraction operator+ (float number, const Fraction& other);

        Fraction operator- (const Fraction& other)const{return *this;}
        Fraction operator- (const float number)const{return *this;}
        friend Fraction operator- (float number, const Fraction& other);

        Fraction operator/ (const Fraction& other)const{return *this;}
        Fraction operator/ (const float number)const{return *this;}
        friend Fraction operator/ (float number, const Fraction& other);

        Fraction operator* (const Fraction& other)const{return *this;}
        Fraction operator* (const float number)const{return *this;}
        friend Fraction operator * (float number, const Fraction& other);

        bool operator>= (const Fraction& other)const{return true;}
        bool operator>= (float number)const{return true;}
        friend bool operator>= (float number, const Fraction& other);

        bool operator> (const Fraction& other)const{return true;}
        bool operator> (const float number)const{return true;}
        friend bool operator> (float number, const Fraction& other);

        bool operator<= (const Fraction& other)const{return true;}
        bool operator<=(const float number)const{return true;}
        friend bool operator<= (float number, const Fraction& other);

        bool operator< (const Fraction& other)const{return true;}
        bool operator<(const float number)const{return true;}
        friend bool operator< (float number, const Fraction& other);

        bool operator == (const Fraction& other)const{return true;}
        bool operator==(const float number)const{return true;}
        friend bool operator== (float number, const Fraction& other);
      
        Fraction operator-- (){
            return *this;
        }
        Fraction operator-- (int){
            return *this;
        }
        Fraction operator++ (){
            return *this;
        }
        Fraction operator++ (int)
        {return *this;}

        friend std::ostream& operator<< (std::ostream& output, const Fraction& fraction);
        
        int getNum()const{
            return numerator;
        }

        int getdeno()const{
            return denominator;
        }

    };
}