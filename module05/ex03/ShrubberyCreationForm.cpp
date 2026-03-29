#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137), target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("shrubbery creation", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm(src), target(src.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) {
    if (this != &src) {
        AForm::operator=(src);
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > getGradeToExec())
        throw AForm::GradeTooLowException();

    std::string filename = target + "_shrubbery";
    std::ofstream outfile(filename.c_str());
    if (outfile.is_open()) {
        outfile << "      /\\      " << std::endl;
        outfile << "     /\\*\\     " << std::endl;
        outfile << "    /\\O\\*\\    " << std::endl;
        outfile << "   /*/\\/\\/\\   " << std::endl;
        outfile << "  /\\O\\/\\*\\/\\  " << std::endl;
        outfile << " /\\*\\/\\*\\/\\/\\ " << std::endl;
        outfile << "      ||      " << std::endl;
        outfile.close();
    }
}
