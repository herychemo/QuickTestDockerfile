#include <iostream>
#include <sstream>

std::string buildHello(std::string name) {
    std::ostringstream stringStream;
    stringStream << "Hello " << name << std::endl;
    return stringStream.str();
}
