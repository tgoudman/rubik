#ifndef RUBIKMODULE_H
#define RUBIKMODULE_H

# include "map"

# include "./FaceModule.hpp"
# include "../../form/Cube.hpp"

class	Puzzle;
class	FaceModule;
class	Cube;

class RubikModule
{

	private:
		Puzzle	*puzzle;
		int		face = 6;
		int		sides = 4;
		int		cube = 27;
		int		sideCube = 3;
		int		spin = 7;

		std::map<std::string, std::vector<Cube>>	spins;

		std::vector<FaceModule>	faces;
		std::vector<Cube>		cubes;

		RubikModule	&operator=(const RubikModule &src);
		RubikModule(const RubikModule &src);

		RubikModule();

	protected:
		void	createCube();
		void	cubeCreation();

	public:
		RubikModule(Puzzle *puzzle);
		RubikModule(Puzzle *puzzle, int face, int sides, int cube, int sideCube, int spin);

		virtual	~RubikModule();

		std::vector<FaceModule>	&getFaces();
		int						getSides();

};

#endif
