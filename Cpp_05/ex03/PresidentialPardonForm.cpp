#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {};
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5), target(target) {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &op) : AForm(op), target(op.target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &op)
{
    if (this != &op)
    {
        AForm::operator=(op);
        this->target = op.target;
    }
    return *this;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
std::string PresidentialPardonForm::gettarget() const
{
    return this->target;
};
void PresidentialPardonForm::action()  const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox."
              << std::endl;
}