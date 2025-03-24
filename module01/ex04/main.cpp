#include <string>
#include <cstring>
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    std::string fileNameOut;
    std::string s1;
    std::string s2;
    std::string line;
    size_t pos;
    size_t len1;

    if (argc < 4)
    {
        std::cerr << "invalid input. try: [file] [s1] [s2]";
        return 1;
    }
    fileNameOut = std::string(argv[1]) + ".replace";
    s1 = argv[2];
    s2 = argv[3];
    len1 = s1.length();

    std::ifstream inputFile(argv[1]);
    if (!inputFile)
    {
        std::cerr << "fd in error" << std::endl;
        return 1;
    }
    std::ofstream outputFile(fileNameOut.c_str());
    if (!outputFile)
    {
        std::cerr << "fd out error" << std::endl;
        return 1;
    }

    while (std::getline(inputFile, line))
    {
        pos = line.find(s1);
        while (pos != std::string::npos)
        {
            line.erase(pos, len1);
            line.insert(pos, s2);
            pos = line.find(s1);
        }
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();
    std::cout << "file copied to file.replaced replacing s1 for s2!" << std::endl;
}
