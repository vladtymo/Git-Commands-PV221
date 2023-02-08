#pragma once
#include "GitCommand.h"

class PushCommand: public GitCommand
{
public:
	PushCommand(): GitCommand("push") { }

	void ShowDescription() const override
	{
		cout << "The git push command is used to upload local repository content to a remote repository.\n" <<
			    "Pushing is how you transfer commits from your local repository to a remote repo.\n" <<
			    "It's the counterpart to git fetch, but whereas fetching imports commits to local branches,\n" <<
			    "pushing exports commits to remote branches.Remote branches are configured using the git remote command.\n" <<
			    "Pushing has the potential to overwrite changes, caution should be taken when pushing.\n" <<
			    "These issues are discussed below.\n";
	}

	void ShowUsageExamples() const override
	{
		cout << "\tExample 1:\n";
		cout << "git push -f : Force a push that would otherwise be blocked, usually because it will delete or\n" <<
			    "overwrite existing commits (Use with caution!)\n";

		cout << "\tExample 2:\n";
		cout << "git push -u origin [branch] : Useful when pushing a new branch, this creates an upstream tracking branch with a\n" <<
			    "lasting relationship to your local branch>\n";

		cout << "\tExample 3:\n";
		cout << "git push --all: Push all branches\n";

		cout << "\tExample 4:\n";
		cout << "git push --tags: Publish tags that aren't yet in the remote repository\n";
	}

	void ShowUseCases() const override
	{
		cout << "\tPush the specified branch to , along with all of the necessary commits\n" <<
			    " and internal objects.This creates a local branch in the destination repository.\n" <<
			    "To prevent you from overwriting commits, Git won’t let you push when it results in \n" <<
			    "a non - fast - forward merge in the destination repository.\n";
	}
};