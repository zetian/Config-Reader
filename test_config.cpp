#include "configurator.h"
#include <fstream>
#include <stdlib.h>

int main()
{
    configurator::data myconfigdata;
    std::ifstream ifs( "test.ini", std::ifstream::in);
    ifs >> myconfigdata;
    std::cout << myconfigdata << std::endl;
    ifs.close();
}