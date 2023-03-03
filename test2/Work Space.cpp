#include <iostream>

void mystrcat(char* dest, const char* src) {
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char str1[100], str2[100];

    std::cout << "请输入第一个字符串：";
    std::cin.getline(str1, 100);

    std::cout << "请输入第二个字符串：";
    std::cin.getline(str2, 100);

    mystrcat(str1, str2);

    std::cout << "连接后的字符串为：" << str1 << std::endl;

    return 0;
}