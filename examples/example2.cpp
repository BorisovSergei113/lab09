#include <fstream>
#include <print.hpp>
int main ( int atgc,char** argv) {
std:: ofstream file("log.txt");
print(std::string("hello"),file);
}
