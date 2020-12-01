#pragma once

#include <string>
#include <vector>
#include <iostream>

class ForceBeing
{
  private:
  int power_level = 0;
  std::wstring name;
  bool evil = false;

  protected:
  ForceBeing(int level);

  virtual void setPowerLevel(int level);

  public:
  virtual int getPowerLevel();

  protected:
  virtual void setName(const std::wstring &characterName);

  public:
  virtual std::wstring getName();

  virtual void setEvil();

  virtual void setGood();

};

class Jedi : public ForceBeing
{

  public:
  Jedi(const std::wstring &jediName, int level);

  int getPowerLevel() override;
};

class Sith : public ForceBeing
{
  public:
  Sith(const std::wstring &sithName, int level);

  int getPowerLevel() override;

  std::wstring getName() override;
};

class StarWars
{

public:
	static std::wstring getWinner(ForceBeing *player1, ForceBeing *player2);

	static void printWinner(const std::wstring &winner);

	static void main(std::vector<std::wstring> &args);
};
