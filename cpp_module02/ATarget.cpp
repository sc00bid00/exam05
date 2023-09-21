#include "ATarget.hpp"

ATarget::ATarget() {};

ATarget::ATarget(std::string type) : _type(type) {}

ATarget::ATarget(ATarget const& src) {
	*this=src;
}

ATarget&	ATarget::operator=(ATarget const& rhs) {
	if(this!=&rhs)
		*this=rhs;
	return *this;
}

ATarget::~ATarget() {}

std::string const&	ATarget::getType() const {
	return this->_type;
}

void	ATarget::getHitBySpell(ASpell const& spell) const {
	ASpell* test = NULL;
	if(&spell != test)
		std::cout<<this->_type<<" has been "<<spell.getEffects()<<"!"<<std::endl;
}
