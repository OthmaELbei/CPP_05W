
#include "Form.hpp"
Form::Form(std::string name, int gradeToSign, int gredeToExecute)
    : name(name),isSigned(false), gradeToSign(gradeToSign), gredeToExecute(gredeToExecute)
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
std::string Form::getName() const
{
    return name;
}
bool Form::getSigned() const
{
    return isSigned;
}
int Form::getgradeToSige() const
{
    return gradeToSign;
}
int Form::getgredeToExecute() const
{
    return gredeToExecute;
}
void Form::beSigned(const Bureaucrat &b)
{

    if (b.getGrade() > gradeToSign)
    {
        throw GradeTooLowException();
    }
    isSigned = true;
}
std::ostream &operator<<(std::ostream &out, const Form &op)
{
    out << "Form: " << op.getName()
        << " this Signed is: " << op.getSigned()
        << " grade to signed " << op.getgradeToSige()
        << " grade to execute " << op.getgredeToExecute() ;

    return out;
}
const char *Form::GradeTooHighException::what() const throw()
{
    return "gared is too high";
};
const char *Form::GradeTooLowException::what() const throw()
{
    return "gared is too low";
};
Form::Form(const Form &op):name(op.name),isSigned(op.isSigned),gradeToSign(op.gradeToSign),gredeToExecute(op.gredeToExecute)
{
    
};
Form &Form::operator=(const Form &op)
{
    if(this != &op)
    {
       this->isSigned = op.isSigned;
    }
    return *this;
}

Form::~Form(){};