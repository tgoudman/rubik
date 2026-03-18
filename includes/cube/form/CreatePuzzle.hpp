#ifndef CREATEPUZZLE_H
#define CREATEPUZZLE_H

# include "iostream"
# include "vector"
# include "map"

# include "./Cube.hpp"

class	Cube;

class CreatePuzzle
{

	private:
		std::map<std::string, std::vector<Cube>>	cubes;

		CreatePuzzle();

	public:
		CreatePuzzle	&operator=(const CreatePuzzle &src) = default;
		CreatePuzzle(const CreatePuzzle &src) = default;

		CreatePuzzle(std::map<std::string, std::string> mvColorMap);
		~CreatePuzzle();

};

#endif
