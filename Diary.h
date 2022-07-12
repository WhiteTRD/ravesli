#ifndef DIARY_H
#define DIARY_H

#include <iostream>
#include <vector>
#include <string>

class Diary
{
private:
    std::string m_name;
    std::vector<int> m_grades;
    double m_averageGrade = 0;

public:
    Diary(std::string name);
    Diary& addGrade(int grade);
    void calculateAverageGrade(int grade);
    void printDiary();
};
 
#endif