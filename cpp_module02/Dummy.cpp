#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}

Dummy::Dummy(Dummy const& src) : ATarget(src.getType()) {
	*this = src;
}

Dummy&	Dummy::operator=(Dummy const& rhs) {
	if(this!=&rhs)
		*this=rhs;
	return *this;
}

Dummy::~Dummy() {}

Dummy*	Dummy::clone() const {
	return new(Dummy);
}
