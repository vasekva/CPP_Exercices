#include <string>
#include <iostream>
#include <fstream>

# define BACK_GRAY		"\033[47m"
# define NORM			"\033[0m"
# define BOLD			"\033[1m"
# define RED			"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE			"\033[34m"
# define PURPLE			"\033[35m"
# define BRIGHT_BLUE	"\033[36m"
# define NONE			"\033[37m"

using std::string;
using std::endl;
using std::cerr;

int replaceStrInFiles(string fileName, string str1, string str2)
{
	std::ifstream inputFile;
	std::ofstream outputFile;
	string	tmpStr;
	size_t	start_pos;

	if (str1.empty() || str2.empty())
	{
		cerr << BOLD << RED
			 << "Error! String is empty!" << NORM << endl;
		return (-1);
	}
	start_pos = 0;
	inputFile.open(fileName);
	if (inputFile.is_open())
	{
		outputFile.open(fileName.append(".replace"));
		if (!outputFile.is_open())
		{
			cerr << BOLD << RED << "OutputFile open error!\n";
			inputFile.close();
			return (-1);
		}
		else
		{
			while (getline(inputFile, tmpStr))
			{
				if (!inputFile.eof())
					tmpStr += '\n';
				while ((start_pos = tmpStr.find(str1, start_pos)) != string::npos)
				{
					tmpStr.erase(start_pos, str1.size());
					tmpStr.insert(start_pos, str2);
					start_pos += str2.length();
				}
				start_pos = 0;
				outputFile << tmpStr;
			}
		}
	}
	else
	{
		cerr << BOLD << RED << "InputFile open error!\n";
		return (-1);
	}
	outputFile.close();
	inputFile.close();
	return (1);
}