#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const& name, std::string const& effects) :_name(name), _effects(effects) {}

ASpell::ASpell(ASpell const& src) {
	*this = src;
}

ASpell&	ASpell::operator=(ASpell const& rhs) {
	if(this!=&rhs)
		*this = rhs;
	return *this;
}

ASpell::~ASpell() {}

std::string const&	ASpell::getName() const {
	return this->_name;
}

std::string const&	ASpell::getEffects() const {
	return this->_effects;
}

void	ASpell::launch(ATarget const& target) const {
	ATarget* test=NULL;
	if(&target!=test)
		target.getHitBySpell(*this);
}
