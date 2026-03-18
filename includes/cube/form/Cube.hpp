#ifndef CUBE_H
#define CUBE_H

# include "iostream"
# include "vector"
# include "map"

# include "../../../includes/cube/form/Face.hpp"

class Cube
{

	private:
		std::vector<Face>	faces;

		Cube();

	public:
		Cube	&operator=(const Cube &src) = default;
		Cube(const Cube &src) = default;

		~Cube();
		Cube(std::map<std::string, std::string> emplacementColor);

		std::vector<Face>	getFaces();

};

#endif
