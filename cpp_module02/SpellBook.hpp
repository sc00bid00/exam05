#pragma once
# include <string>
# include <iostream>
# include "ASpell.hpp"
# include <map>

class SpellBook {
	private:
		std::map<std::string, ASpell*>	_book;

		SpellBook(SpellBook const& src);
		SpellBook&	operator=(SpellBook const& rhs);
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const& spellName);
		ASpell* createSpell(std::string const& spellName);
};
