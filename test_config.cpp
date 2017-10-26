#include "configurator.h"
#include <fstream>
#include <stdlib.h>

int main()
{
    Configurator myconfigdata;
    // configurator::data myconfigdata;
    std::ifstream ifs( "test.ini", std::ifstream::in);
    ifs >> myconfigdata;
    std::cout << myconfigdata << std::endl;
    ifs.close();
    // std::cout << myconfigdata.get_real("test_2", 1) << std::endl; 
}