#include <iostream>
#include <string>
#include <vector>

class Diary
{
private:
    std::string m_name;
    std::vector<int> m_grades;

public:
    Diary(std::string name) : m_name(name) {};
    Diary& addGrade(int grade) {m_grades.push_back(grade); return *this;}
    double getAverageScore()
    {
        double averageScore;
        for (const auto &grade : m_grades)
            averageScore += grade;
        averageScore /= m_grades.size();
        return averageScore;	    
    }

    void printDiary()
    {
        std::cout << "Name: " << m_name << '\n' << "grades: ";
        
        for (const auto &grade : m_grades)
            std::cout << grade << ' ';
        
        std::cout << '\n' << "average grade: " << getAverageScore();
    }
};

int main()
{
    Diary diaryVlad = {"Vlad"};
    diaryVlad.addGrade(10).addGrade(8).addGrade(7).addGrade(5);
    diaryVlad.printDiary();

    return 0;
}