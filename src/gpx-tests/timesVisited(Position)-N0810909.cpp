#include <boost/test/unit_test.hpp>

#include "logs.h"
#include "types.h"
#include "route.h"

using namespace GPS;

BOOST_AUTO_TEST_SUITE( route_timesVisitedPos_N0810909 )

const bool isFileName = true;
std::string MyGPXDir = LogFiles::GPXRoutesDir + "/N0810909/";

//Specific position has not been visisted within a route.
BOOST_AUTO_TEST_CASE(posNotVisisted)
{
	Route route = Route(LogFiles::GPXRoutesDir + "Q.gpx", isFileName);
	BOOST_CHECK_EQUAL(route.timesVisited(30.193, 50.291, 10.0), 0);
}

//Specific position has been visited once within a route.
BOOST_AUTO_TEST_CASE(posVisitedOnce)
{
	Route route = Route(LogFiles::MyGPXDir + "twoPoints.gpx", isFileName);
	BOOST_CHECK_EQUAL(route.timesVisited(1.121, 101.102, 0.0), 1);
}

//Specific positin has been visited multiple times within a route.
BOOST_AUTO_TEST_CASE(posVisitedMulti)
{
	Route route = Route(LogFiles::MyGPXDir + "tenPoints.gpx", isFileName);
	BOOST_CHECK_EQUAL(route.timesVisited(0.179964, 109.142, 0.0), 5);
}

//Invalid route; std invalid argument

//Invalid position specified; std invalid argument

//

BOOST_AUTO_TEST_SUITE_END()