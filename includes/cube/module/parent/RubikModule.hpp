#ifndef RUBIKMODULE_H
#define RUBIKMODULE_H

# include "./FaceModule.hpp"

class	Puzzle;
class	FaceModule;

class RubikModule
{

	private:
		Puzzle	*puzzle;
		int		sides = 4;

		std::vector<FaceModule>	faces;

		RubikModule	&operator=(const RubikModule &src);
		RubikModule(const RubikModule &src);
		RubikModule();

	protected:
		void	createCube();

	public:
		RubikModule(Puzzle *puzzle);
		RubikModule(Puzzle *puzzle, int sides);
		virtual	~RubikModule();

		std::vector<FaceModule>	&getFaces();
		int						getSides();

};

#endif
