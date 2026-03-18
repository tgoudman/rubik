#ifndef PUZZLE_H
#define PUZZLE_H

# include "iostream"
# include "vector"

# include "./module/child/BasicCube.hpp"

class Puzzle
{

	private:
		int	face = 6;
		int	pieces = 9;
		int	corner = 3;

		std::vector<char>	colors;
		RubikModule	*module;

		void	createPuzzle();

		Puzzle();

	public:
		Puzzle	&operator=(const Puzzle &src);
		Puzzle(const Puzzle &src);
		~Puzzle();

		Puzzle(std::vector<char> colors);
		Puzzle(int face, int pieces, int corner, std::vector<char> colors);

		int					getFace() const;
		int					getPieces() const;
		int					getCorner() const;
		RubikModule			*getModule();

};

#endif
