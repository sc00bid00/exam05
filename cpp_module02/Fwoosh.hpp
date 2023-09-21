#pragma once
# include <string>
# include <iostream>
# include "ASpell.hpp"

class	Fwoosh : public ASpell {
	public:
		Fwoosh();
		Fwoosh(Fwoosh const& src);
		Fwoosh&	operator=(Fwoosh const& rhs);
		~Fwoosh();

		Fwoosh*	clone() const;
};


