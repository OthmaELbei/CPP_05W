

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
    std::string target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &op);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &op);
    ~RobotomyRequestForm();

    std::string gettarget() const;
    void action() const;
};

#endif