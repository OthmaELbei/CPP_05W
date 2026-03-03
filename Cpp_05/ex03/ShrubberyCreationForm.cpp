#include "ShrubberyCreationForm.hpp"
#include <fstream>
ShrubberyCreationForm::ShrubberyCreationForm() {};
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137), target(target) {};
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &op) : AForm(op), target(op.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &op)
{
    if (this != &op)
    {
        AForm::operator=(op);
        this->target = op.target;
    }
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
std::string ShrubberyCreationForm::gettarget() const
{
    return this->target;
};
void ShrubberyCreationForm::action() const
{
    std::string filename =this->target + "_shrubbery";
    std::ofstream file(filename.c_str());
    file << "         \\//\\ //-*/\\/_* //_*                       " << std::endl;
    file << "     *-\\*-||\\\\\\ //\\_*\\///_*                  " << std::endl;
    file << "    \\\\_*//\\*//*| |\\\\_*//\\*//*                  " << std::endl;
    file << " \\\\_-*\\_*//\\*/| |\\_-*\\_*////\\*/                  " << std::endl;
    file << "*-\\\\_-*\\_*//*//| |\\_-*\\_//*////\\*/                  " << std::endl;
    file << "*-\\\\_-*\\_*//*//| |\\_-*\\_//*////\\*/                  " << std::endl;
    file << "*-\\\\_-*\\_*//*//| |\\_-*\\_//*////\\*/                  " << std::endl;
    file << "    *-\\\\__*//*//| |\\_-*\\_//*/\\*/                  " << std::endl;
    file << "     *-\\*__*//*//| |\\_-*\\_//*/                  " << std::endl;
    file << "      *-\\__*//*//| |\\_-*\\_//*/                  " << std::endl;
    file << "       *-\\__*/*//| |\\_////*/                  " << std::endl;
    file << "              \\\\| |///                  " << std::endl;
    file << "                \\| |/                  " << std::endl;
    file <<"                 | |/                  " << std::endl;
    file <<"                 | |                  " << std::endl;
    file <<"                 | |                  " << std::endl;
    file <<"                 | |                  " << std::endl;
    file.close();
}