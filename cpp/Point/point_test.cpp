#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Point.hpp"

TEST_CASE( "Test Point", "[point]" ) {

    Point p;

    REQUIRE( p.getX() == 0.0 );
    REQUIRE( p.getY() == 0.0 );

    Point p2(2, 3);

    REQUIRE( p2.getX() == 2.0 );
    REQUIRE( p2.getY() == 3.0 );

    SECTION( "test cmp operators" ) {
        REQUIRE( (p == p2) == false );
        REQUIRE( (p != p2) == true );
    }

    SECTION( "test setters" ) {
        p.setX(10);
        p.setY(14);

        REQUIRE( p.getX() == 10 );
        REQUIRE( p.getY() == 14 );
    }

    SECTION( "test add operator " ) {
        Point p3(5, 1);
        Point p4 = p3 + p2;

        REQUIRE( p4.getX() == 7 );
        REQUIRE( p4.getY() == 4 );
    }
}
