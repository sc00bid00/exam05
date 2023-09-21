#pragma once
# include <string>
# include <iostream>
# include "ASpell.hpp"

class	Fireball : public ASpell {
	public:
		Fireball();
		Fireball(Fireball const& src);
		Fireball&	operator=(Fireball const& rhs);
		~Fireball();

		Fireball*	clone() const;
};
