#ifndef CUBE_H
#define CUBE_H

# include "algorithm"
# include "iostream"
# include <sstream>
# include "vector"
# include <math.h>

class Cube
{

	private:
		std::vector<std::vector<char>> rubik;
		std::vector<char> colors;

		int	cubes;

		Cube();

	public:
		Cube	&operator=(const Cube &src);
		Cube(std::vector<char> colors, int cubes);
		Cube(const Cube &src);
		~Cube();

		void printCube() const;

};

#endif
