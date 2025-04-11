#include "Application.h"

int main() {

    try {
        Real::RealEngine RealEngine;
        RealEngine.Running();
        API::Beep(1000, 1000);
    }
    catch (const std::exception& e) {
        std::cerr << "Fatal error: " << e.what() << std::endl;
        return -1;
    }
    return 0;
}