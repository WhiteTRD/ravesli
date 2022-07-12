#include "Diary.h"

int main()
{
    Diary diary {"Vlad"};
    diary.addGrade(10).addGrade(8).addGrade(7);
    diary.printDiary();
    
}