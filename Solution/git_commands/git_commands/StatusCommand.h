#pragma once
#include "GitCommand.h"

class StatusCommand : public GitCommand
{
public:
	StatusCommand() : GitCommand("status") { }

	void ShowDescription() const override
	{
		cout << "Displays paths that have differences between the index file and the\n"
			<< "current HEAD commit, paths that have differences between the working\n"
			<< "tree and the index file, and paths in the working tree that are not tracked by Git\n\n";
	}

	void ShowUsageExamples() const override
	{
		cout << "\tgit status [<options>] [--] [<pathspec>...]\n\n";
	}

	void ShowUseCases() const override
	{
		cout << "\tThe first are what you would commit by running git commit;\n"
			<< "\tThe second and third are what you could commit by running git add before running git commit.\n\n";
	}
};