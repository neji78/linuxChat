#include "uuid.hpp"
#include <iostream>
std::string Uuid::generate(){
    std::string uuid;
    char data[40];
    srand(time(NULL));

sprintf(data, "%x%x-%x-%x-%x-%x%x%x", 
    rand(), rand(),                 // Generates a 64-bit Hex number
    rand(),                         // Generates a 32-bit Hex number
    ((rand() & 0x0fff) | 0x4000),   // Generates a 32-bit Hex number of the form 4xxx (4 indicates the UUID version)
    rand() % 0x3fff + 0x8000,       // Generates a 32-bit Hex number in the range [0x8000, 0xbfff]
    rand(), rand(), rand()); 
    uuid.append(data);
    return uuid;
}