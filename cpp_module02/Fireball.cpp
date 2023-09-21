#include "Fireball.hpp"

Fireball::Fireball() :ASpell("Fireball", "burnt to a crisp") {}

Fireball::Fireball(Fireball const& src) : ASpell(src.getName(), src.getEffects()) {
	*this = src;
}

Fireball&	Fireball::operator=(Fireball const& rhs) {
	if(this!=&rhs)
		*this=rhs;
	return *this;
}

Fireball::~Fireball() {}

Fireball*	Fireball::clone() const {
	return new(Fireball);
}
