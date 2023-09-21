#include "Fwoosh.hpp"

Fwoosh::Fwoosh() :ASpell("Fwoosh", "fwooshed") {}

Fwoosh::Fwoosh(Fwoosh const& src) : ASpell(src.getName(), src.getEffects()) {
	*this = src;
}

Fwoosh&	Fwoosh::operator=(Fwoosh const& rhs) {
	if(this!=&rhs)
		*this=rhs;
	return *this;
}

Fwoosh::~Fwoosh() {}

Fwoosh*	Fwoosh::clone() const {
	return new(Fwoosh);
}
