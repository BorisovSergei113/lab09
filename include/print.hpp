/** Print text in file and monitor */
#include <string>
#include <fstream>
#include <iostream>
/** @brief  Вывод текста на экран
    @param  Принимает на вход ссылку на строку text,и ссылку на поток вывода out
*/
void print (const std::string& text, std::ostream& out = std::cout );
/** @brief  Вывод текста в файл
    @param  Принимает на вход ссылку на строку text,и ссылку на поток вывода в файл out
*/
void print (const std::string& text, std::ofstream& out);
