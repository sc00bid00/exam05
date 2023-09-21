#pragma once
# include <string>
# include <iostream>
# include "ATarget.hpp"

class BrickWall : public ATarget {
	public:
		BrickWall();
		BrickWall(BrickWall const& src);
		BrickWall&	operator=(BrickWall const& rhs);
		~BrickWall();

		BrickWall*	clone() const;
};
