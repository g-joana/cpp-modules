#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "AForm.hpp"

class Intern {
private:
    AForm * makeShrubbery(std::string target);
    AForm * makeRobotomy(std::string target);
    AForm * makePresidential(std::string target);
public:
    Intern();
    Intern(Intern const & src);
    ~Intern();

    Intern & operator=(Intern const & src);

    AForm * makeForm(std::string name, std::string target);
};

#endif
