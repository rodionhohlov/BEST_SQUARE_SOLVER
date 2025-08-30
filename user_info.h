#ifndef USER_INFO_H_INCLUDED
#define USER_INFO_H_INCLUDED

#include "solver.h"

/**
    @brief пользователь вводит коэффициенты для квадратного уравнения

    @param [in] a - коэффициент a
    @param [in] b - коэффициент b
    @param [in] c - коэффициент c

**/

void get_user_info(coefs *coefficients);

/**
    @brief функция считывания коэффициента

    Защита от некорректного ввода:
    @code
    while (((scanf("%lg", coef) != 1) || (getchar() != '\n'))) {
        while ((sym = getchar()) != '\n')
            continue;
    @endcode

**/

double get_num(double *coef, char ch);

#endif
