#include <boost/test/unit_test.hpp>

#include "logs.h"
#include "route.h"

using namespace GPS;

/* BOOST DESCRIPTION*/

BOOST_AUTO_TEST_SUITE( Route_maxElevation )

const std::string defaultName = "/N0810103/"; //custom GPX data is loaded from this folder

const bool isFileName = true; // All GPX data in this suite is loaded from files.

//

BOOST_AUTO_TEST_CASE( typical_name_present )
{
   const std::string gpxData =
     "<gpx><rte><name>/N0810103/</name><rtept lat=\"0\" lon=\"0\"></rtept></rte></gpx>";
   Route route = Route(gpxData, isFileName);

   BOOST_CHECK_EQUAL( route.name(), "/N0810103/" );
}

BOOST_AUTO_TEST_SUITE_END()
