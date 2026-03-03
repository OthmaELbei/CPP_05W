
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grades) : name(name)
{
    if (grades < 1)
    {
        throw GradeTooHighException();
    }
    if (grades > 150)
    {
        throw GradeTooLowException();
    }

    grade = grades;
};
int Bureaucrat::getGrade() const
{
    return grade;
}
std::string Bureaucrat::getName() const
{
    return name;
}
void Bureaucrat::incrementing()
{
    if (grade <= 1)
    {
        throw GradeTooHighException();
    }
    grade -= 1;
}
void Bureaucrat::decrement()
{
    if (grade >= 150)
    {
        throw GradeTooLowException();
    }
    grade += 1;
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "gared is too high";
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "gared is too low";
}
 Bureaucrat &Bureaucrat::operator=(const Bureaucrat  &op)
 {
    if(this != &op){
        this->grade = op.grade;
    }
    return *this;
 }
 Bureaucrat::Bureaucrat(const Bureaucrat  &op):grade(op.grade)
{

}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &op)
{
    out << op.getName() << " , bureaucrat grade " << op.getGrade() << std::endl;
    return out;
}

Bureaucrat::~Bureaucrat(){}