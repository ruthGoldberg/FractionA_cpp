#include "doctest.h"
#include <stdexcept>
#include "sources/Fraction.hpp"
#include <sstream>
#include <climits>
using namespace std;
using namespace ariel;

TEST_CASE("put zero in the denominator"){
    CHECK_THROWS(Fraction(5,0));
    CHECK_THROWS(Fraction(0,0));
    
}

TEST_CASE("divide by 0"){
    Fraction a(2,5) , b(0,3) , c(0) ,d ;
    CHECK_THROWS(a/b);
    CHECK_THROWS(a/0);
    CHECK_THROWS(b/c);
    CHECK_THROWS(1/d);
}

TEST_CASE(" + - * / overloading"){
    Fraction a(1,5) , b(3,-8) , c(1,1) , d(0.25);
    CHECK_EQ(a + c , Fraction(1.2));
    CHECK_EQ(a - d , Fraction(5,-100));
    CHECK_EQ(b * d ,Fraction(3,-32));
    CHECK_EQ(c / d , 4);
    CHECK_EQ(0 / a , 0);
    CHECK_EQ(1 * b , -0.375);
}
TEST_CASE(" ++ -- overloading"){
    Fraction a(1,5) , c(1,1);
    CHECK_EQ(a++ , 0.2);
    CHECK_EQ(++c , 2);
    CHECK_EQ(c-- ,2);
    CHECK_EQ(--c , 0);
    
}

TEST_CASE(" > >= < <= overloading"){
    Fraction a(1,5) , b(3,-8) , c(1,1) , d(0.25);
    CHECK(a < c);
    CHECK(0 > b);
    CHECK(c <= 4*d);
    CHECK(c >= 1);
    
}

TEST_CASE("output format checking"){
    std::stringstream output;
    Fraction a(2, 5) ,b(5,-3);
    output << a;
    CHECK(output.str() == "2/5");
    output.str("");
    output << b;
    CHECK(output.str() == "-5/3");
}

TEST_CASE("valid input checking"){
    std::stringstream input ("10 30");
    Fraction a;
    input >> a;
    CHECK_EQ(a , Fraction(1,3) );
    input.clear();
    input.str("3 -9");
    input >> a;
    CHECK_EQ(a, Fraction(-1,3));
    input.clear();
    input.str("1 0");
    CHECK_THROWS(input >> a);
    input.clear();
    input.str("80");
    CHECK_THROWS(input >> a);
}

TEST_CASE("gcd and reduction function checking"){
    
    Fraction a(2,6) , b(80,50) , c(17,5);
    CHECK_EQ(a, Fraction(1,3));
    CHECK_EQ(b, Fraction(8,5));
    CHECK_EQ(c, Fraction(17,5));
    CHECK_EQ(-0.001, Fraction(1000,-1000000));
    CHECK_EQ(25, Fraction(100,4));
    CHECK_EQ(-3, Fraction(300,-100));
}

TEST_CASE("toFloat function checking"){
   Fraction a(2,6) , b(80,50) , c(17,-15);
   CHECK_EQ(a.toFloat() ,(float)0.333 );
   CHECK_EQ(b.toFloat() ,(float)1.6 );
   CHECK_EQ(c.toFloat() ,(float)-1.133 );
}

TEST_CASE("check_overflow function checking"){
    Fraction a(INT_MAX , 1) , b(INT_MIN,1);
    CHECK_THROWS(a+1);
    CHECK_THROWS(b-1);
}
