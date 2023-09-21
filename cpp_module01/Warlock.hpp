#pragma once
# include <string>
# include <iostream>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include <map>

class Warlock {
	private:
		std::string	_name;
		std::string	_title;
		std::map<std::string,ASpell*>	_book;

		Warlock();
		Warlock(Warlock const& src);
		Warlock&	operator=(Warlock const& rhs);
	public:
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string const&	getName() const;
		std::string const&	getTitle() const;
		void	setTitle(std::string const& title);
		void introduce() const;

		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string spellName);
		void	launchSpell(std::string spellName,ATarget& target);
};

