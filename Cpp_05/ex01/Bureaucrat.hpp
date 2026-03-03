
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Form;

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat(std::string name, int grades);
    int getGrade() const;
    std::string getName() const;
    void incrementing();
    void decrement();
      Bureaucrat &operator=(const Bureaucrat  &op);
    Bureaucrat(const Bureaucrat  &op);
    ~Bureaucrat();
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
    void signForm(Form &f);
};

#endif