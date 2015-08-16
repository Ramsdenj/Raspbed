/* 
 * File:   main.cpp
 * Author: john
 *
 * Created on August 13, 2015, 6:06 PM
 */

#include <cstdlib>
#include "SerialPort.hpp"

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    SerialPort serialPort("ttyUSB0");
    
    serialPort.print();
    
    serialPort.start();
    return 0;
}