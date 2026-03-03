
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    PresidentialPardonForm(const PresidentialPardonForm &op);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &op);
    ~PresidentialPardonForm();

    std::string gettarget() const;
    void action() const;
};

#endif