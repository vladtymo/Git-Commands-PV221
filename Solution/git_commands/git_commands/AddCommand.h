#pragma once
#include "GitCommand.h"

class AddCommand : public GitCommand
{
public:
	AddCommand() : GitCommand("Add") { }

	void ShowDescription() const override
	{
		cout << "The git add command adds a change from the working directory to the indexed files section.\n"
			<<" It tells Git that you want to include the changes in a particular file in the next commit.\n" 
			<<" However, the git add command does not actually\n" 
			<<"have a significant effect on the repository : changes are checked into it only after the git commit command is executed.";
	}

	void ShowUsageExamples() const override
	{
		cout << "\tgit add <file>\n\n";
	}

	void ShowUseCases() const override
	{
		cout << "\tgit add hello.py"
			<<"\n\tgit commit\n\n";
	}
};
