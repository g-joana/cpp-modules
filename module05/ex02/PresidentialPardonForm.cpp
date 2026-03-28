#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon", 25, 5), target("default") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("presidential pardon", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src), target(src.target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src) {
    if (this != &src) {
        AForm::operator=(src);
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    if (!getIsSigned())
        throw AForm::NotSignedException();
    if (executor.getGrade() > getGradeToExec())
        throw AForm::GradeTooLowException();

    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
