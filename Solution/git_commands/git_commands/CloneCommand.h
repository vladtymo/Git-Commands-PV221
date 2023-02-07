#pragma once
#include "GitCommand.h"

class CloneCommand : public GitCommand
{
public:
	CloneCommand() : GitCommand("clone") { }

	void ShowDescription() const override 
	{
		cout << "Clones a repository into a newly created directory, \n"
			<< "creates remote-tracking branches for each branch in the\n"
			<< "cloned repository (visible using git branch --remotes),\n"
			<< "and creates and checks out an initial branch that is forked\n"
			<< "from the cloned repository’s currently active branch.\n";
	}

	void ShowUsageExamples() const override 
	{
		cout << "\tExample 1:\n";
		cout << "git clone ssh://git@github.com:vladtymo/Git-Commands-PV221.git\n"
			<< "cd my - project\n"
			<< "# Start working on the project\n";

		cout << "\tExample 2:\n";
		cout << "git clone <repo> <directory>\n";
	}

	void ShowUseCases() const override
	{
		cout << "\t- Cloning a local or remote repository\n"
			<< "\t- Cloning a bare repository\n"
			<< "\t- Using shallow options to partially clone repositories\n"
			<< "\t- Git URL syntax and supported protocols\n";
	}
};