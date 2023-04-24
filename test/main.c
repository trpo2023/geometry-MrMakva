#include <stdio.h>
//#include <ctest.h>
#include "ctest.h"
//#include "thirdparty/ctest.h"

#define CTEST_MAIN

#define CTEST_SEGFAULT

#include "libgeometry/libgeometry.h"

int main(int argc, const char* argv[])
{
    int result = ctest_main(argc, argv);

    return result;
}
