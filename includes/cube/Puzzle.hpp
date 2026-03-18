#ifndef PUZZLE_H
#define PUZZLE_H

# include "iostream"
# include "vector"
# include "map"

# include "./module/child/Megaminx.hpp"

class Puzzle
{

	private:
		int	face = 6;
		int	pieces = 9;
		int	corner = 3;

		RubikModule	*module;

		void	createPuzzle();

	public:
		Puzzle	&operator=(const Puzzle &src);
		Puzzle(const Puzzle &src);
		~Puzzle();

		Puzzle();
		Puzzle(int face, int pieces, int corner);

		int					getFace() const;
		int					getPieces() const;
		int					getCorner() const;
		RubikModule			*getModule();

};

#endif
