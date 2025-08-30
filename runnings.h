#ifndef RUNNINGS_H_INCLUDED
#define RUNNINGS_H_INCLUDED

/**
    @brief Обычное выполнение программы

    Решает вводимые пользователем квадратные уравнения
**/

void run_default_program(void);

/**
    @brief Выпонение программу по указанному флагу

    Выполняет кусок программы, соответствующий вводимму флагу:
        -t/--tests - выполняет unit-тесты
        -h/--help  - открывает список флагов
        -l/--love  - послушать Полторашку

    @param [in] *argv[] - вводимый пользователем флаг

**/

void run_chosen_flag(char *argv[]);

#endif
