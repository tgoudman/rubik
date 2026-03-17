#ifndef FACEMODULE_H
#define FACEMODULE_H

# include "iostream"
# include "vector"

# include "./SpinModule.hpp"

class	Puzzle;
class	SpinModule;

class FaceModule
{

	private:
		Puzzle	*puzzle;

		std::vector<SpinModule>	spins;

		FaceModule();

	public:
		FaceModule	&operator=(const FaceModule &src) = default;
		FaceModule(const FaceModule &src) = default;
		FaceModule(Puzzle *puzzle);
		~FaceModule();

		void	initSpins(int sides);

};

#endif
