#pragma once

#include <iostream>
#include <thread>
#include <stack>

void cpuOverloader();
void memoryOverloader(std::stack<std::string> stack);
void overloader();