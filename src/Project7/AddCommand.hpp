#pragma once
#include "Command.hpp"
#include "PopCommand.hpp"
#include "PushCommand.hpp"

class AddCommand : public Command
{

public:
	AddCommand(string segment = "", string arg1 = "", string arg2 = "")
		: Command(CommandType::Add, segment, arg1, arg2)
	{

	}

	virtual string ToAsm()
	{
		ostringstream result{};
		return result.str();
	}
};