#pragma once
# include <string>
# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget {
	private:
		std::string	_type;
	public:
		ATarget();
		ATarget(std::string type);
		ATarget(ATarget const& src);
		ATarget&	operator=(ATarget const& rhs);
		virtual	~ATarget();

		std::string const&	getType() const;
		virtual ATarget*	clone() const = 0;
		void	getHitBySpell(ASpell const& spell) const;
};

