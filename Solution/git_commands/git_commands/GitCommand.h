#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

class GitCommand
{
private:
	string name;

public:
	GitCommand(string name) : name(name) { }

	string GetCommandText() const
	{
		return "git " + name;
	}

	virtual void ShowDescription() const = 0;
	virtual void ShowUsageExamples() const = 0;
	virtual void ShowUseCases() const = 0;
};