#include "Diary.h"
#include <iostream>
 
// Конструктор класса Diary
Diary::Diary(std::string name) : m_name(name) {};

// Метод класса Diary
Diary& Diary::addGrade(int grade) {m_grades.push_back(grade); calculateAverageGrade(grade); return *this;}

void Diary::calculateAverageGrade(int grade)
{
    m_averageGrade = (m_averageGrade + grade) / m_grades.size();
}

void Diary::printDiary()
{
    std::cout << "Name: " << m_name << '\n' << "Grades: ";
    for (auto const &grade : m_grades)
        std::cout << grade << ' ';
    std::cout << '\n' <<"Average Grade: " << m_averageGrade;
}
