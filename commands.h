#define COMMAND(NAME, CODE) void _g_command_##NAME(void) CODE;

#include "commands.cpp"

#define COMMAND(NAME, CODE) \
    { #NAME, _g_command_##NAME },

struct command_struct
{
  char *name;
  void (*function) (void);
};

struct command_struct _commands[] = {
#include "commands.cpp"
};

