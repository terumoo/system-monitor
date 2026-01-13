#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string line;
    
    // Show memory info
    std::ifstream meminfo("/proc/meminfo");
    if (meminfo.is_open()) {
        std::cout << "Memory Info:" << std::endl;
        for (int i = 0; i < 3 && std::getline(meminfo, line); i++) {
            std::cout << line << std::endl;
        }
        meminfo.close();
    } else {
        std::cout << "Cannot open /proc/meminfo" << std::endl;
    }

    // Show CPU info
    std::ifstream cpuinfo("/proc/cpuinfo");
    if (cpuinfo.is_open()) {
        std::cout << "\nCPU Info:" << std::endl;
        for (int i = 0; i < 5 && std::getline(cpuinfo, line); i++) {
            std::cout << line << std::endl;
        }
        cpuinfo.close();
    } else {
        std::cout << "Cannot open /proc/cpuinfo" << std::endl;
    }

    return 0;
}


