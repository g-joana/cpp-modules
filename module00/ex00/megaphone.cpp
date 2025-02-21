#include <cctype>
#include <iostream>

char *convertToUpper(char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        str[count] = std::toupper(str[count]);
        count++;
    }
    return (str);
}

int main(int argc, char **argv)
{
    (void)argc;
    argv += 1;
    while (*argv != NULL)
    {
        convertToUpper(*argv);
        std::cout << *argv++;
        if (*argv != NULL)
            std::cout << " ";
    }
}
