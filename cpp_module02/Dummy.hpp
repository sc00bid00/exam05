#pragma once
# include <string>
# include <iostream>
# include "ATarget.hpp"

class Dummy : public ATarget {
	public:
		Dummy();
		Dummy(Dummy const& src);
		Dummy&	operator=(Dummy const& rhs);
		~Dummy();

		Dummy*	clone() const;
};
