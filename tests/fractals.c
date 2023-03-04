/*
** EPITECH PROJECT, 2023
** B-CPE-210_fractals
** File description:
** Core file
*/

#include "criterion.h"
#include "funcs/core.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(fractals, basic_one_iteration, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "1",
        "###@#.#@###",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 0, "%i must be equals to %i");
    cr_assert_stdout_eq_str("###\n#.#\n###\n");
}

Test(fractals, basic_two_iterations, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "2",
        "###@#.#@###",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 0, "%i must be equals to %i");
    cr_assert_stdout_eq_str(
        "#########\n#.##.##.#\n#########\n"\
        "###...###\n#.#...#.#\n###...###\n"\
        "#########\n#.##.##.#\n#########\n"
    );
}

Test(fractals, basic_null_iterator, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "###@#.#@###",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 0, "%i must be equals to %i");
    cr_assert_stdout_eq_str("#\n");
}

Test(fractals, error_invalid_params, .init = redirect_all_std) {
    int ac = 3;
    char *av[3] = {
        "./fractals",
        "-1",
        "###@#.#@###"
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect number of params !\n");
}

Test(fractals, error_negative_iterator, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "-1",
        "###@#.#@###",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect nbr of iteration\n");
}

Test(fractals, error_invalid_iterator, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "asdsdf",
        "###@#.#@###",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect nbr of iteration\n");
}

Test(fractals, error_void_iterator, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "",
        "###@#.#@###",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect nbr of iteration\n");
}

Test(fractals, error_void_hashtag_pattern, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect patterns !\n");
}

Test(fractals, error_invalid_hashtag_pattern_1, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "##@#.#@###",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect patterns !\n");
}

Test(fractals, error_invalid_hashtag_pattern_2, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "##@#.",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect patterns !\n");
}

Test(fractals, error_invalid_hashtag_pattern_3, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "###@#.#@###@###",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect patterns !\n");
}

Test(fractals, error_invalid_hashtag_pattern_4, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "###@#.#@#A#",
        "...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect patterns !\n");
}

Test(fractals, error_void_point_pattern, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "###@#.#@###",
        ""
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect patterns !\n");
}

Test(fractals, error_invalid_point_pattern_1, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "###@#.#@###",
        "..@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect patterns !\n");
}

Test(fractals, error_invalid_point_pattern_2, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "###@#.#@###",
        "..@.."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect patterns !\n");
}

Test(fractals, error_invalid_point_pattern_3, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "###@#.#@###",
        "...@...@...@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect patterns !\n");
}

Test(fractals, error_invalid_point_pattern_4, .init = redirect_all_std) {
    int ac = 4;
    char *av[4] = {
        "./fractals",
        "0",
        "###@#.#@###",
        "...@B..@..."
    };
    int exit = fractals(ac, av);
    cr_assert_eq(exit, 84, "%i must be equals to %i");
    cr_assert_stderr_eq_str("fractals: Incorrect patterns !\n");
}
