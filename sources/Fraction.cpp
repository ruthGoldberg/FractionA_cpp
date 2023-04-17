#include "Fraction.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

std::ostream& ariel::operator<<(std::ostream& output, const ariel::Fraction& fraction)
{
    output << fraction.getNum() << "/" << fraction.getdeno();
    return output;
}
Fraction ariel::operator+ (float number, const Fraction& other){
    return Fraction(1,1);
}
Fraction ariel::operator- (float number, const Fraction& other){
     return Fraction(1,1);
}
Fraction ariel::operator/ (float number, const Fraction& other){
    return Fraction(1,1);
}
Fraction ariel::operator * (float number, const Fraction& other){
    return Fraction(1,1);
}
bool ariel::operator>= (float number, const Fraction& other){
    return true;
}
bool ariel::operator>(float number, const Fraction& other){
    return true;
}
bool ariel::operator<= (float number, const Fraction& other){
    return true;
}
bool ariel::operator< (float number, const Fraction& other){
    return true;
}


