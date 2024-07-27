
#include <iostream>
#include <map>
int main()
{
    std::map<std::string, char> students_grades;
    // установка значений
    students_grades["Oleg"] = 'A';
    students_grades["Anton"] = 'B';
    students_grades["Kate"] = 'F';

    // получение значений
    std::cout << "Oleg\t" << students_grades["Oleg"] << std::endl;
    std::cout << "Anton\t" << students_grades["Anton"] << std::endl;
    std::cout << "Kate\t" << students_grades["Kate"] << std::endl;
}
