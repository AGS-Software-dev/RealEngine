#pragma once

// Reset all colors
#define RESET   "\033[0m"

// Text colors
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

// Background colors
#define BRED    "\033[41m"
#define BGREEN  "\033[42m"
#define BYELLOW "\033[43m"
#define BBLUE   "\033[44m"
#define BMAGENTA "\033[45m"
constexpr auto BCYAN = "\033[46m";
#define BWHITE  "\033[47m"

#include <iostream>
   
#define REAL_ERROR(messgae) std::cout << RED << messgae << std::endl;
#define REAL_WARN(messgae) std::cout << YELLOW << messgae << std::endl;
#define REAL_INFO(messgae) std::cout << GREEN << messgae << std::endl;
