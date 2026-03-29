#include "ScalarConverter.hpp"
#include <cmath>

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter& src) { *this = src; }
ScalarConverter::~ScalarConverter() {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src) { (void)src; return *this; }

void ScalarConverter::convert(const std::string& literal) {
    double d = 0;
    char* end;

    d = std::strtod(literal.c_str(), &end);
    if (literal.length() == 1 && !std::isdigit(literal[0])) {
        d = static_cast<double>(literal[0]);
    } else if (*end != '\0' && !(*end == 'f' && *(end + 1) == '\0')) {
        if (literal != "nan" && literal != "nanf" && literal != "-inf" && literal != "-inff" && 
            literal != "+inf" && literal != "+inff" && literal != "inf" && literal != "inff") {
            std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
            return;
        }
    }

    std::cout << "char: ";
    if (d != d || d < 0 || d > 127) std::cout << "impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(d))) std::cout << "Non displayable" << std::endl;
    else std::cout << "'" << static_cast<char>(d) << "'" << std::endl;

    std::cout << "int: ";
    if (d != d || d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max()) std::cout << "impossible" << std::endl;
    else std::cout << static_cast<int>(d) << std::endl;

    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
