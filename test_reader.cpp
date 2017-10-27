#include "config_reader.h"
#include <fstream>
#include <stdlib.h>
#include <string>

int main()
{
    // Configurator myconfigdata;
    ConfigReader config_reader("test.ini");
    // configurator::data config_reader;
    // std::ifstream ifs( "test.ini", std::ifstream::in);
    // ifs >> config_reader;
    std::cout << config_reader << std::endl;
    std::cout << "get test 2: " << config_reader.Get("test_2", "unknown") << std::endl;
    std::cout << "get test 4: " << config_reader.GetBoolean("test_4", 0) << std::endl;
    // std::string test_string = "123a";
    // int a = std::stoi(test_string);
    // std::cout << "~~~~" << a << std::endl;
    // ifs.close();
    // std::cout << config_reader.get_real("test_2", 1) << std::endl; 
}