#pragma once
#include <sstream>
#include <string>
#include <vector>
#include "Command.hpp"
using namespace std;

class PushCommand : public Command
{
private:
	string _file_name;

public:
	PushCommand(string segment = "", string arg1 = "", string arg2 = "", string file_name = "")
		: Command(CommandType::Push, segment, arg1, arg2),
		_file_name(file_name)
	{

	}

	virtual string ToAsm()
	{
		ostringstream result{};
		return result.str();
	}
};
