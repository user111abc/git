#include <iostream>
#include <vector>
#include <string>

int main() {
    std::cout << "=== C++ 环境配置成功! ===" << std::endl;

    // 简单的功能自测
    std::vector<std::string> items = {"VS Code", "MinGW-w64 (GCC)", "GDB 调试器"};
    for (const auto& item : items) {
        std::cout << "  ✓ " << item << std::endl;
    }

    int sum = 0;
    for (int i = 1; i <= 100; ++i) sum += i;
    std::cout << "1+2+...+100 = " << sum << std::endl;
    return 0;
}
