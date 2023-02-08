#pragma once
#include "GitCommand.h"


		
		class ResetCommand : public GitCommand
		{
		public:
			ResetCommand() : GitCommand("reset") { }

			void ShowDescription() const override
			{
				cout << "The git reset command is a complexand versatile tool for undoing changes.\n"
					<< "It has three primary forms of invocation.These forms correspond to command line arguments --soft, --mixed, --hard.\n"
					<< "The three arguments each correspond to Git's three internal state management mechanism's, The Commit Tree(HEAD),\n"
					<< "The Staging Index, and The Working Directory.";
			}

			void ShowUsageExamples() const override
			{
				cout << "\tExample 1:\n";

				cout<< "git reset[-q][<tree - ish>][--] <pathspec>…\n"
					<< "git reset[-q][--pathspec - from - file = <file>[--pathspec - file - nul]][<tree - ish>]\n"
					<< "git reset(--patch | -p)[<tree - ish>][--][<pathspec>…​]\n"
					<< "git reset[--soft | --mixed[-N] | --hard | --merge | --keep][-q][<commit>]\n";
			}

			void ShowUseCases() const override
			{
				cout << "\t- to undo local changes to the state of a Git repo.\n"
					<< "\t-  command is frequently encountered while preparing the staged snapshot. \n"
					<< "\t- Removing Local Commits\n";
			}
};
	

	
