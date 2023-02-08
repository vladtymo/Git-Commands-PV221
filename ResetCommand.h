#pragma once
#include "GitCommand.h"

class ResetCommand : public GitCommand
{
public:
	StatusCommand() : GitCommand("status") { }

	void ShowDescription() const override
	{
		cout << "The git reset command is a complex and versatile tool for undoing changes. \n"
			<< "\tIt has three primary forms of invocation.\n"
			<< "These forms correspond to command line arguments: \n"
			<< "\t\t  [--soft]\n"
			<< "\t\t [--mixed]\n"
			<< "\t\t  [--hard]\n"
			<< "The three arguments each correspond to Git's three internal state management mechanism's\n"
			<< ", The Commit Tree (HEAD), The Staging Index, and The Working Directory.\n";
	}

	void ShowUsageExamples() const override
	{
		cout << "\tgit reset [--] [argument]\n\n";
	}

	void ShowUseCases() const override
	{
		cout << " The --hard option changes the Commit History, and ref pointers are updated to the specified commit.\n"
			<< "\t\tA mixed option updates the ref pointers.\n"
			<< "The soft option does not touch the index file or working tree at all, but it resets the Head as all options do.\n"
			<< "When the soft mode runs, the refs pointers updated, and the resets stop there. It will act as git amend command.\n";
	}
};