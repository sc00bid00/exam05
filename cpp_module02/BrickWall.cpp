#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::BrickWall(BrickWall const& src) : ATarget(src.getType()) {
	*this = src;
}

BrickWall&	BrickWall::operator=(BrickWall const& rhs) {
	if(this!=&rhs)
		*this=rhs;
	return *this;
}

BrickWall::~BrickWall() {}

BrickWall*	BrickWall::clone() const {
	return new(BrickWall);
}
