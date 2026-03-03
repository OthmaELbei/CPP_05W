

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    std::string target;


public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &op);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &op);
    ~ShrubberyCreationForm();

    std::string gettarget() const;
    void action() const;
};

#endif