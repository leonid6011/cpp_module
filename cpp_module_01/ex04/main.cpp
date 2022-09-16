#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream> 
#include <sstream>

int checkStr(std::string s1, std::string s2)
{
    if (s1 == s2)
    {
		std::cerr << "Your lines are the same!\n" << std::endl;
		return(EXIT_FAILURE);
	}
	if (s1.empty())
	{
		std::cerr << "Error! s1 are empty!\n" << std::endl;
		return(EXIT_FAILURE);
	}
	if (s2.empty())
	{
		std::cerr << "Error! s1 are empty!\n" << std::endl;
		return(EXIT_FAILURE);
	}
    return(EXIT_SUCCESS);
}

std::string convertFileToStr(std::string fileName) {
    std::ifstream file;
	file.open(fileName.c_str()); //открываем файл
    if (!file.is_open())
	{
		std::cerr << "Error! Failed attempt to open a file " << fileName << std::endl;
		return (NULL);
	}
    std::ostringstream allFileString;
	allFileString << file.rdbuf();
    file.close();
    return (allFileString.str());
}

void myReplace(std::string &fileString, std::string s1, std::string s2) {
	int position;

	position = fileString.find(s1);
	while (fileString.find(s1) != std::string::npos)
	{
		fileString.insert(position, s2);
		fileString.erase(position + s2.length(), s1.length());
		position = fileString.find(s1);
	}
}

int convertStrToFile(std::string fileName, std::string fileString) {
	fileName = fileName + ".replace";
	std::ofstream writeTpFile;
	writeTpFile.open(fileName.c_str());
	if (!writeTpFile.is_open())
	{
		std::cerr << "Error! Failed attempt to create or open a file." << std::endl;
		return(EXIT_FAILURE);
	}
	writeTpFile << fileString;
	writeTpFile.close();
	return(EXIT_SUCCESS);
}

int main(int argc, char **argv)
{
    if (argc != 4)
	{
		std::cerr << "Error! Wrong number of arguments\n You must enter a filename and two strings, s1 and s2.\n" << std::endl;
		return(EXIT_FAILURE);
	}
    std::string fileName(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
    if (checkStr(s1, s2))
        return(EXIT_FAILURE);
    std::string fileString = convertFileToStr(fileName);
    if (fileString.empty())
	{
        return(1);
	}
	myReplace(fileString, s1, s2);
	if (convertStrToFile(fileName, fileString))
		return(1);
}