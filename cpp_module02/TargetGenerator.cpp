#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(TargetGenerator const& src) {
	*this=src;
}

TargetGenerator&	TargetGenerator::operator=(TargetGenerator const& rhs) {
	if(this != &rhs)
		*this=rhs;
	return *this;
}

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget* target) {
	if(target)
		this->_targets[target->getType()] = target;
}

void	TargetGenerator::forgetTargetType(std::string const& type) {
	std::map<std::string, ATarget*>::iterator it=this->_targets.find(type);
	if(it!= this->_targets.end())
		this->_targets.erase(it);
}

ATarget*	TargetGenerator::createTarget(std::string const& type) {
	std::map<std::string, ATarget*>::iterator it=this->_targets.find(type);
	if(it!= this->_targets.end())
		return it->second->clone();
	return NULL;
}
