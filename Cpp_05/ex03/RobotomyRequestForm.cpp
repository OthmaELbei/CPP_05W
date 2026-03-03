
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() {};
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequest", 72, 45), target(target) {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &op) : AForm(op), target(op.target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &op)
{
    if (this != &op)
    {
        AForm::operator=(op);
        this->target = op.target;
    }
    return *this;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
std::string RobotomyRequestForm::gettarget() const
{
    return this->target;
};
void RobotomyRequestForm::action() const
{
    if (rand() % 2 == 0)
    {
        std::cout << this->target << " has been robotomized successfully 50% of the time " << std::endl;
    }
    else
    {
        std::cout << "informs that the robotomy failed" << std::endl;
    }
}