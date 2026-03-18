#ifndef SPINMODULE_H
#define SPINMODULE_H

# include "iostream"

class SpinModule
{

	private:

	public:
		SpinModule	&operator=(const SpinModule &src) = default;
		SpinModule(const SpinModule &src) = default;
		~SpinModule();
		SpinModule();

};

#endif
