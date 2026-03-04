#ifndef PARSING_H
#define PARSING_H

# include "algorithm"
# include "iostream"
# include <sstream>
# include "vector"

class Parsing
{

	private:
		std::vector<std::string> actions;
		std::vector<std::string> accepts = {"F", "F'", "F2", "R", "R'", "R2", "U", "U'", "U2", "B", "B'", "B2", "L", "L'", "L2", "D", "D'", "D2"};

		Parsing();

	public:
		Parsing	&operator=(const Parsing &src);
		Parsing(int argc, char **argv);
		Parsing(const Parsing &src);
		~Parsing();

		const std::vector<std::string> getActions();

};

#endif
