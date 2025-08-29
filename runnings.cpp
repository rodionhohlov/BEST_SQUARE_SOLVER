#include <TXLib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#include "runnings.h"
#include "math_operations.h"
#include "user_info.h"
#include "solver.h"
#include "output.h"
#include "string_change.h"
#include "tester.h"
#include "POLTORASHKA.h"

void run_default_program(void) {
    Sleep(850);

    coefs user_coefs = {.a = NAN, .b = NAN, .c = NAN}; //коэффициенты

    get_user_info(&user_coefs);

    ruts_ans solved_roots = {.x1 = NAN, .x2 = NAN, .ans = NO_ROOTS}; //корни

    solved_roots.ans = mega_solver(&user_coefs, &solved_roots); //число корней

    choose(solved_roots.ans, solved_roots.x1, solved_roots.x2);
}

void run_chosen_flag(char *argv[]) {

    if ((strcmp(*(argv+1), "-h") == 0) || (strcmp(*(argv+1), "--help") == 0))   {
        Sleep(850);

        printf("Список флагов:\n\n");
        printf("   -h/--help - открыть список флагов\n\n   -t/--tests - запустить unit-тесты\n\n   без символа - запустить выполнение программы\n\n   -l/--love - попробуй и узнаешь (^u^)\n");
    }
    else if (strcmp(*(argv+1), "-t") == 0 || strcmp(*(argv+1), "--tests") == 0) {
        Sleep(850);

        master_test();  //убрали амперсанд и заработало
    }
    else if (strcmp(*(argv+1), "-l") == 0 || strcmp(*(argv+1), "--love") == 0) {
        Sleep(850);

        MEOW();
    }
    else {
        Sleep(850);

        printf("Флаг недействителен\n(Введите -h/--help, чтобы открыть список флагов)");
    }
}
