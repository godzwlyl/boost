///////////////////////////////////////////////////////////////
//  Copyright 2012 John Maddock. Distributed under the Boost
//  Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_

#ifdef _MSC_VER
#  define _SCL_SECURE_NO_WARNINGS
#endif

#include <boost/multiprecision/concepts/mp_number_archetypes.hpp>

#include "test_arithmetic.hpp"

int main()
{
   test<boost::multiprecision::number<boost::multiprecision::concepts::number_backend_float_architype> >();
   return 0;
}
