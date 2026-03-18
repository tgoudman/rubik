#ifndef FACE_H
#define FACE_H

# include "iostream"

class Face
{

	private:
		std::string	initEmplacement;
		std::string	emplacement;
		std::string	color;

		Face();

	public:
		Face	&operator=(const Face &src) = default;
		Face(const Face &src) = default;

		~Face();
		Face(std::string emplacement, std::string color);

		std::string	getInitEmplacement();
		std::string	getEmplacement();
		std::string	getColor();

};

#endif
