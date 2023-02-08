#pragma once
#include "GitCommand.h"

class CommitCommand : public GitCommand {
public:
	CommitCommand() : GitCommand("commit") { }

	void ShowDescription() const override
	{
		cout << "Create a new commit containing the current contents of the index and\n"
			<< "the given log message describing the changes. The new commit is a direct\n"
			<< "child of HEAD, usually the tip of the current branch, and the branch is\n"
			<< "updated to point to it(unless no branch is associated with the working \n"
			<< "tree, in which case HEAD is \"detached\" as described in git - checkout[1]).\n\n";
	}

	void ShowUsageExamples() const override
	{
		cout << "\tgit commit -m \"[commit message]\" \n\n";
	}

	void ShowUseCases() const override
	{
		cout << "\nThe first is you can send a message in this commit\n"
			<< "\nThe second you can describe this step of your work\n\n";
	}
};