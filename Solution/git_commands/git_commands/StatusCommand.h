#pragma once
#include "GitCommand.h"

class StatusCommand : public GitCommand
{
public:
	StatusCommand() : GitCommand("status") { }

	void ShowDescription() const override
	{
		#pragma once
#include "GitCommand.h"

		class StatusCommand : public GitCommand
		{
		public:
			StatusCommand() : GitCommand("status") { }

			void ShowDescription() const override
			{
				cout << "The git status command is a relatively straightforward command.\n"
					<< "It simply shows you what's been going on with git add and git commit.\n"
					<< "Status messages also include relevant instructions for staging / unstaging files.\n";
			}

			void ShowUsageExamples() const override
			{
				cout << "\tExample 1:\n";

				cout
					<< "\n# Edit hello.py\n"
					<< "git status\n"
					<< "# hello.py is listed under 'Changes not staged for commit'\n"
					<< "git add hello.py\n"
					<< "git status\n"
					<< "# hello.py is listed under 'Changes to be committed'\n"
					<< "git commit\n"
					<< "git status\n"
					<< "# nothing to commit(working directory clean)\n";
			}

			void ShowUseCases() const override
			{
				cout << "\t- tells you is what branch you're on\n"
					<< "\t- is the active branch syncing status with its remote tracking branch.\n"
					<< "\t- reports is a list of 'Changes to be committed'.\n";
			}
};
	

	
