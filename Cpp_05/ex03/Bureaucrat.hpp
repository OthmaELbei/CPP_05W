

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class AForm;

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
     void excuteForm(AForm const & form) const;
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
    void signForm(AForm &f);
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &op);


#endif