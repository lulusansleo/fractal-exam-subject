/*
** EPITECH PROJECT, 2023
** B-PSU-200_minishell1
** File description:
** Core
*/

#include "lib/utils.h"
#include "helper.h"
#include "funcs/shell_core.h"

const project_t PROJECT = {
        "minishell1",
        "mysh",
        0,
        0,
};

int minishell1(int ac, char **av, char **env)
{
    int r;
    if ((r = call_helper(ac, av, "public/help", &PROJECT))) {
        if (r == 84)
            return 84;
        return 0;
    }
    return start_shell(env);
}
