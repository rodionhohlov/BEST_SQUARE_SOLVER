//g++ main.cpp tester.cpp user_info.cpp string_change.cpp output.cpp solver.cpp math_operations.cpp POLTORASHKA.cpp -o program

#include <TXLib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#include "cor_flag.h"
#include "runnings.h"

/**
    @brief main - основная функция

    Программа вызывает другие функции, на вход принимает 2 аргумента:

    @param [in] argc - число аргементов командной строки (ожидается 2)
    @param [in] argv - помимо названия прораммы принимает специальный флаг (без флага идёт обычное выполнение программы)
**/

int main(int argc, char *argv[]) {

    if (argc == 1) {
        run_default_program();
    }
    else if ((argc == 2) && (is_flag_correct(&argv[1]))) {

        run_chosen_flag(argv);
    }

    else if (argc > 2) {
        Sleep(850);
        printf("Лишние данные");
    }

    else {
        Sleep(850);
        printf("Ошибка при введении флага \n(Введите -h/--help, чтобы открыть список флагов\n");
    }
    return 0;
}
