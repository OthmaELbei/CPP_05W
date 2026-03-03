
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
class Form
{
private:
    const std::string name;
    bool isSigned;
    const  int gradeToSign;
    const  int gredeToExecute;

public:
    Form(std::string name, int gradeToSign, int gredeToExecute);
    std ::string getName() const;
    bool getSigned() const;
    int getgradeToSige() const;
    int getgredeToExecute() const;
 Form &operator=(const Form &op);
    Form(const Form &op);
    ~Form();
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
    void beSigned(const Bureaucrat &b);
};
std::ostream &operator<<(std::ostream &out, const Form &op);
#endif