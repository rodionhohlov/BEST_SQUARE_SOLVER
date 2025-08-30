#ifndef STRING_CHANGE_H_INCLUDED
#define STRING_CHANGE_H_INCLUDED

#include "solver.h"

/**
    @brief Функция вывода текста

    Выводит текст в зависимости от значения cnt

    @param [in] cnt - число корней

    @return "один" при значении cnt = 1
    @return "два" при значении cnt = 2
    @return "нисколько" при значении cnt = 0
    @return "много" при значении cnt = -1
**/

const char *string_nroots(nRoots cnt);

/**\
    @brief Функция вывода для каждого корня

    Выводит значения корней
**/

const char *NAN_to_str(double root, nRoots ruts, char *super_string);

#endif
