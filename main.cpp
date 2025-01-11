#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    std::string s;
    std::ifstream fin("D:\in.txt"); 
    
    
    if (fin.is_open())
    {
        while (!fin.eof())
        {
            fin >> s;
            std::cout << s << std::endl;
        }
    }
    else
    {
        std::cout << "не получилось открыть файл!" << std::endl;
    }
    
    fin.close();
    return 0;
}
