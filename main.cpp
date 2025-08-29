//g++ main.cpp tester.cpp user_info.cpp string_change.cpp output.cpp solver.cpp math_operations.cpp POLTORASHKA.cpp -o program

#include <TXLib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#include "math_operations.h"
#include "user_info.h"
#include "solver.h"
#include "output.h"
#include "string_change.h"
#include "tester.h"
#include "POLTORASHKA.h"
#include "cor_flag.h"
#include "runnings.h"

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
