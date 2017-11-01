#include "config_reader.h"
#include <iostream>

int main()
{
    ConfigReader config_reader("test.ini");
    if (config_reader.CheckError()){
        return -1;
    }
    std::cout << config_reader << std::endl;
    std::cout << "test_1 = : " << config_reader.Get("test_1", "default value") << std::endl;
    std::cout << "test_2 = : " << config_reader.GetReal("test_21", 0.01) << std::endl;
    std::cout << "test_3 = : " << config_reader.GetBoolean("test_3", false) << std::endl;
    std::cout << "test_4 = : " << config_reader.GetInteger("test_4", 0) << std::endl;
    return 0;
}