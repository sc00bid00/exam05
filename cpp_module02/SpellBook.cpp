#include "SpellBook.hpp"

SpellBook::SpellBook(SpellBook const& src) {
	*this=src;
}

SpellBook&	SpellBook::operator=(SpellBook const& rhs) {
	if(this!=&rhs)
		*this = rhs;
	return *this;
}

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* spell) {
	if(spell)
		this->_book[spell->getName()] = spell;
}

void SpellBook::forgetSpell(std::string const& spellName) {
	std::map<std::string, ASpell*>::iterator it=this->_book.find(spellName);
	if(it != this->_book.end())
		this->_book.erase(it);
}

ASpell* SpellBook::createSpell(std::string const& spellName) {
	std::map<std::string, ASpell*>::iterator it=this->_book.find(spellName);
	if(it != this->_book.end()) {
		return it->second->clone();
	}
	return NULL;
}
