
#include "AForm.hpp"

AForm::AForm():name("defolt"),isSigned(false),gradeToSign(150),gredeToExecute(150)
{};
AForm::AForm(std::string name, int gradeToSign, int gredeToExecute)
    : name(name), isSigned(false), gradeToSign(gradeToSign), gredeToExecute(gredeToExecute)
{
    if (gradeToSign < 1 || gredeToExecute < 1)
    {
        throw GradeTooHighException();
    }
    if (gradeToSign > 150 || gredeToExecute > 150)
    {
        throw GradeTooLowException();
    }
}
std::string AForm::getName() const
{
    return name;
}
bool AForm::getSigned() const
{
    return isSigned;
}
int AForm::getgradeToSige() const
{
    return gradeToSign;
}
int AForm::getgredeToExecute() const
{
    return gredeToExecute;
}
void AForm::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > gradeToSign)
    {
        throw GradeTooLowException();
    }
    isSigned = true;
}
std::ostream &operator<<(std::ostream &out, const AForm &op)
{
    out << "Form: " << op.getName()
        << " this Signed is: " << op.getSigned()
        << " grade to signed " << op.getgradeToSige()
        << " grade to execute " << op.getgredeToExecute() ;

    return out;
}
const char *AForm::GradeTooHighException::what() const throw()
{
    return "gared is too high";
};
const char *AForm::GradeTooLowException::what() const throw()
{
    return "gared is too low";
};
const char *AForm::FormNotSignedException::what() const throw()
{
    return "form is not signed";
};
AForm::AForm(const AForm &op):name(op.name),isSigned(op.isSigned),gradeToSign(op.gradeToSign),gredeToExecute(op.gredeToExecute)
{
    
};
AForm &AForm::operator=(const AForm &op)
{
    if(this != &op)
    {
       this->isSigned = op.isSigned;
    }
    return *this;
}
void AForm::execute(const Bureaucrat &executor) const
{
       if(!this->isSigned)
       {
        throw FormNotSignedException();
       }
       if(executor.getGrade() > this->getgredeToExecute())
       {
        throw GradeTooLowException();
       }
       this->action();
};
AForm::~AForm(){};