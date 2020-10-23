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

		//convert command into equivalent assembly
		switch (segment)
		{
		case Segment::Local:
			break;
		case Segment::Argument:
			break;
		case Segment::This:
			break;
		case Segment::That:
			break;
		case Segment::Temp:
			break;
		case Segment::Static:
			break;
		case Segment::Constant:

			//load the constant 
			result << "@" << arg1 << endl;
			result << "D=A" << endl;

			//store value on top of stack
			result << "@SP" << endl;
			result << "A=M" << endl;
			result << "M=D" << endl;

			break;
		case Segment::Pointer:
			break;
		default:
			break;
		}

		//increment stack pointer
		result << "@SP" << endl;
		result << "D=M+1" << endl;
		result << "M=D" << endl;
		
		return result.str();
	}
};
