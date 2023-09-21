#include "Polymorph.hpp"

Polymorph::Polymorph() :ASpell("Polymorph", "turned into a critter") {}

Polymorph::Polymorph(Polymorph const& src) : ASpell(src.getName(), src.getEffects()) {
	*this = src;
}

Polymorph&	Polymorph::operator=(Polymorph const& rhs) {
	if(this!=&rhs)
		*this=rhs;
	return *this;
}

Polymorph::~Polymorph() {}

Polymorph*	Polymorph::clone() const {
	return new(Polymorph);
}
