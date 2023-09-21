/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBoook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsordo <lsordo@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 23:22:36 by lsordo            #+#    #+#             */
/*   Updated: 2023/08/16 23:59:23 by lsordo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "SpellBook.hpp"

SpellBook::SpellBook(SpellBook const& src) {
	*this = src;
}

SpellBook&	SpellBook::operator=(SpellBook const& rhs) {
	if (this != &rhs)
		*this = rhs;
	return *this;
}

SpellBook::SpellBook(void) {}

SpellBook::~SpellBook(void) {
	for (std::map<std::string, ASpell*>::iterator iSpell = this->_spellBook.begin(); iSpell != this->_spellBook.end(); ++iSpell)
		delete iSpell->second;
	this->_spellBook.clear();
}

/*
* void learnSpell(ASpell*), that COPIES a spell in the book
* void forgetSpell(string const &), that deletes a spell from the book, except
  if it isn't there
* ASpell* createSpell(string const &), that receives a string corresponding to
  the name of a spell, creates it, and returns it.
*/

void	SpellBook::learnSpell(ASpell* spell) {
	this->_spellBook[spell->getName()] = spell->clone();
}

void	SpellBook::forgetSpell(std::string const& spellName) {
	std::map<std::string, ASpell*>::iterator iSpell = this->_spellBook.find(spellName);
	if(iSpell != this->_spellBook.end()) {
		delete(iSpell->second);
		this->_spellBook.erase(iSpell);
	}
}

ASpell*	SpellBook::createSpell(std::string const& spellName) {
	std::map<std::string, ASpell*>::iterator iSpell = this->_spellBook.find(spellName);
	if(iSpell != this->_spellBook.end()) {
		return iSpell->second;
	}
	else
		return NULL;
}
