

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a("ahmed", 3);
        a.incrementing();
        std::cout << a.getGrade() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Form f("Foerm", 30, 50);
        std::cout << f << std ::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
