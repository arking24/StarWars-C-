#pragma once

#include <string>
#include <vector>
#include "StarWars.h"

int main(int argc, char **argv)
{
    std::vector<std::wstring> args(argv + 1, argv + argc);
    StarWars::main(args);
}

