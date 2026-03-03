
#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <cstdlib>  
#include <ctime>  

int main() {
     srand(time(NULL));
     AForm *fristForm = NULL;
     AForm *secendForm = NULL;
     AForm *thredForm = NULL;
    try
    {
        Intern cretAfrom;
       fristForm = cretAfrom.makeForm("shrubbery creation","ali");
       secendForm = cretAfrom.makeForm("robotomy request","ahmed");
       thredForm = cretAfrom.makeForm("presidential pardon","taha");
        Bureaucrat boss("ahmed",30);
        Bureaucrat odrboss("ahmed",137);
        Bureaucrat wrker("ahmed",4);

            odrboss.signForm(*fristForm);
            odrboss.excuteForm(*fristForm);
            boss.signForm(*secendForm);
            boss.excuteForm(*secendForm);
            // wrker.signForm(*thredForm);
            // wrker.excuteForm(*thredForm);
        
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
 delete fristForm;
    delete secendForm;
    delete thredForm;
}