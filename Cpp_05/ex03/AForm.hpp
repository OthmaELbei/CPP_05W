
#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
class AForm
{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gredeToExecute;

public:
    AForm();
    AForm(std::string name, int gradeToSign, int gredeToExecute);
    std ::string getName() const;
    bool getSigned() const;
    int getgradeToSige() const;
    int getgredeToExecute() const;
    virtual ~AForm();
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    class FormNotSignedException : public std::exception
    {
    public:
        const char *what() const throw();
    };
    void beSigned(const Bureaucrat &b);
    void execute(const Bureaucrat  &executor) const;
    AForm &operator=(const AForm &op);
    AForm(const AForm &op);
    virtual void action() const = 0;
};
std::ostream &operator<<(std::ostream &out, const AForm &op);
#endif