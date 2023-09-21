#pragma once
# include <string>
# include <iostream>
# include "ASpell.hpp"

class	Polymorph : public ASpell {
	public:
		Polymorph();
		Polymorph(Polymorph const& src);
		Polymorph&	operator=(Polymorph const& rhs);
		~Polymorph();

		Polymorph*	clone() const;
};


