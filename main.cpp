#include <stdio.h>

#include "commands.h"

int main(void)
{
    for(int i = 0; i < sizeof(_commands) / sizeof(command_struct); i++)
    {
        printf(" === Executing command %s ===\n", _commands[i].name);
        _commands[i].function();
        printf("\n === done. === \n");
    }
    return 0;
}
