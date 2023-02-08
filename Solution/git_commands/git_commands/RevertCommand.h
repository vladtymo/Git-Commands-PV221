#pragma once
#include "GitCommand.h"

class RevertCommand : public GitCommand
{
public:
	RevertCommand() : GitCommand("revert") { }

	void ShowDescription() const override
	{
		cout << "The git revert command is a forward - moving undo operation that offers a safe method of undoing changes.\n"
			<< "Instead of deleting or orphaning commits in the commit history, a revert will create a new commit that inverses the changes specified.\n"
			<< "Git revert is a safer alternative to git reset in regards to losing work.\n";
	}

	void ShowUsageExamples() const override
	{
		cout << "\tExample 1:\n";

		cout << "$ git revert HEAD\n"
		<< "[main b9cd081] Revert 'prepend content to demo file' 1 file changed, 1 deletion(-)";
	}

	void ShowUseCases() const override
	{
		cout << "\t- to invert the changes introduced by the commit and appends a new commit with the resulting inverse content. \n"
		<< "\t-  to apply the inverse of a commit from your project history.  \n"
		<< "\t-for undoing changes to a repository's commit history.";
	}
};
