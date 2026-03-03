

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>  
#include <ctime>  
int main()
{
    srand(time(NULL));
    try
    {
        // std::cout << "----- SHRUBBERY TEST -----" << std::endl;
        Bureaucrat bob("Bob", 1);
        Bureaucrat mid("layk", 70);
        Bureaucrat leed("danke", 150);
        
        ShrubberyCreationForm sd("hello");
        RobotomyRequestForm robo("MsteRobo");
        PresidentialPardonForm brader("arter");
    
        std::cout << sd << std::endl;

        bob.signForm(sd);
        bob.excuteForm(sd);
        mid.signForm(robo);
        bob.excuteForm(robo);
        mid.signForm(brader);
        bob.excuteForm(brader);
        

        
        
        
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
