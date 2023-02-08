#pragma once
#include <vector>
#include <conio.h>
#include "GitCommand.h"
#include "CloneCommand.h"
#include "ResetCommand.h"
using std::cin;
using std::vector;

class GitDocumentation
{
private:
    vector<GitCommand*> commands;

    bool IsValidPosition(const int pos) const
    {
        return pos >= 1 && pos <= commands.size();
    }

public:
    GitDocumentation()
    {
        commands.push_back(new CloneCommand());
        commands.push_back(new ResetCommand());
        //...
    }
    ~GitDocumentation()
    {
        for (auto i : commands) delete i;
    }

    bool CloseDialog() const
    {
        cout << "Do you want to close the applicaiton? [Y]es or [N]o: ";
        char response = _getch();
        cout << endl;

        return response == 'Y' || response == 'y';
    }
    void CommandInformationDialog() const
    {
        cout << "Choose command to show information: \n";

        for (size_t i = 0; i < commands.size(); ++i)
        {
            cout << "\t[" << i + 1 << "] - " << commands[i]->GetCommandText() << endl;
        }

        int position = 0;
        cin >> position;

        if (!IsValidPosition(position))
        {
            cout << "Invalid position!\n";
            return;
        }

        int index = position - 1;
        commands[index]->ShowDescription();
        commands[index]->ShowUseCases();
        commands[index]->ShowUsageExamples();
    }

    void Start() const
    {
        do
        {
            CommandInformationDialog();
        } while (!CloseDialog());
    }
};