#include <iostream>
#include <string>

class Employe
{
private:
    int m_id = 0;
    std::string m_name = "Anonim";
    int m_years = 0;
    
public:
    Employe() { innit(); }
    Employe(const std::string &name, int years) : m_name(name), m_years(years) { innit(); }

    void innit() 
    {   
        m_id + 1;
        std::cout << "Employe created." << std::endl;
        print(); 
    }

    int getId() { return m_id; } 

    void setName(const std::string &name) { m_name = name; }
    std::string getName() { return m_name; }

    void setYears(int years) { m_years = years; }
    int getYears() { return m_years; }

    void print()
    {
        std::cout << "ID: " << m_id << "\n"
                  << "Name: " << m_name << "\n"
                  << "Years: " << m_years << "\n" << std::endl;
    }

};

int main()
{
    Employe Vania("Vania", 22);
    Employe Vlad("Vlad", 8);
    Employe Arsen("Arsen", 6);

    return 0;
}