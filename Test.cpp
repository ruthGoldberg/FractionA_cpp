#include "doctest.h"
#include <stdexcept>
#include "sources/Fraction.hpp"
using namespace std;
using namespace ariel;

TEST_CASE("put zero in the denominator"){
    CHECK_THROWS(Fraction(5,0));
    CHECK_THROWS(Fraction(0,0));
}

TEST_CASE("divide by 0"){
    Fraction a(2,5) , b(0,3);
    CHECK_THROWS(a/b);
    CHECK_THROWS(a/0);
}

TEST_CASE("expected results"){
    Fraction a(2,5) , b(3,8);
    CHECK(a+b == 0.775);
    CHECK(a*b == 0.15 );
    CHECK(a/b == 1.067);
    CHECK(a-b == 0.025);
    CHECK(a+b >= 0.5);
    CHECK(a*b > 0.1);
    CHECK(a*1 < 0.5);
    CHECK(a+b+1 == 1.775);
    CHECK(0*a == 0);
    CHECK(a++ == 0.4);
    CHECK(a == 1.4);
    CHECK(a-- == 1.4);
    CHECK(a == 0.4);
    CHECK(b ==0.375);
    CHECK(++b ==1.375 );
    CHECK(--b == 0.375);
}
