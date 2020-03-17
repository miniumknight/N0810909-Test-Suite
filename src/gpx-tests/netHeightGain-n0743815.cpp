#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE GPXTests
#include <boost/test/unit_test.hpp>
#include "logs.h"
#include "types.h"
#include "route.h"

using namespace GPS;


const bool isFileName = true; // All GPX data in this suite is provided by a file

BOOST_AUTO_TEST_SUITE( NetHeightGain)

BOOST_AUTO_TEST_CASE(TypicalRouteWithVariantElevationButNoNetGain)
{
    Route route = Route(LogFiles::GPXRoutesDir + "ABQWE.gpx", isFileName);
    BOOST_CHECK_EQUAL(route.netHeightGain(),0);
}

BOOST_AUTO_TEST_CASE(TypicalRouteWithNoElevation)
{
   Route route = Route(LogFiles::GPXRoutesDir + "ABCD", isFileName);
   BOOST_CHECK_EQUAL(route.netHeightGain(),0);

}
BOOST_AUTO_TEST_CASE(TypicalRouteWithNegativeGain)
{

}

BOOST_AUTO_TEST_CASE(TypicalRouteWithVariantElevationAndNetGain)
{

}

BOOST_AUTO_TEST_CASE(RouteWithOnePositionNoNetGain)
{

}


BOOST_AUTO_TEST_SUITE_END()

