#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat a("ahmed", 30);
        a.incrementing();
        std::cout << a.getGrade() << std::endl;
        a.incrementing();
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
