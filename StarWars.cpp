#include "StarWars.h"

ForceBeing::ForceBeing(int level)
{
	power_level = level;
}

void ForceBeing::setPowerLevel(int level)
{
  power_level = level;
}

int ForceBeing::getPowerLevel()
{
  return power_level;
}

void ForceBeing::setName(const std::wstring &characterName)
{
  name = characterName;
}

std::wstring ForceBeing::getName()
{
  return name;
}

void ForceBeing::setEvil()
{
  evil = true;
}

void ForceBeing::setGood()
{
  evil = false;
}

Jedi::Jedi(const std::wstring &jediName, int level) : ForceBeing(level)
{
	setName(jediName);
	setGood();
}

int Jedi::getPowerLevel()
{
  return ForceBeing::getPowerLevel() + 1;
}

Sith::Sith(const std::wstring &sithName, int level) : ForceBeing(level)
{
	setName(sithName);
	setEvil();
}

int Sith::getPowerLevel()
{
  return ForceBeing::getPowerLevel() - 1;
}

std::wstring Sith::getName()
{
  return L"Sith Lord: " + ForceBeing::getName();
}

std::wstring StarWars::getWinner(ForceBeing *player1, ForceBeing *player2)
{
	return player1->getPowerLevel() > player2->getPowerLevel() ? player1->getName() : player2->getName();
}

void StarWars::printWinner(const std::wstring &winner)
{
	std::wcout << L"The winner is: " << winner << std::endl;
}

void StarWars::main(std::vector<std::wstring> &args)
{
	Sith *darthVader = new Sith(L"Darth Vader",100);
	Jedi *lukeSkyWalker = new Jedi(L"Luke Skywalker",99);
	printWinner(getWinner(darthVader, lukeSkyWalker));

//JAVA TO C++ CONVERTER TODO TASK: A 'delete lukeSkyWalker' statement was not added since lukeSkyWalker was passed to a method or constructor. Handle memory management manually.
//JAVA TO C++ CONVERTER TODO TASK: A 'delete darthVader' statement was not added since darthVader was passed to a method or constructor. Handle memory management manually.
}
