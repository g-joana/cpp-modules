#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <limits>
# include <cstdlib>

class ScalarConverter {
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& src);
        ~ScalarConverter();

        ScalarConverter& operator=(const ScalarConverter& src);

    public:
        static void convert(const std::string& literal);
};

#endif
