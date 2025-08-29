#include <TXLib.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>

#include "user_info.h"
#include "solver.h"

/**
    @brief пользователь вводит коэффициенты для квадратного уравнения

    @param [in] a - коэффициент a
    @param [in] b - коэффициент b
    @param [in] c - коэффициент c

**/

void get_user_info(coefs *coefficients) {

    assert(coefficients);

    printf("Эта программа решает квадратные уравнения\n");
    printf("Введите коэффициенты уравнения\n");

    coefficients->a = get_num(&coefficients->a, 'a');
    coefficients->b = get_num(&coefficients->b, 'b');
    coefficients->c = get_num(&coefficients->c, 'c');
}

/**
    @brief функция считывания коэффициента

    Защита от некорректного ввода:
    @code
    while (((scanf("%lg", coef) != 1) || (getchar() != '\n'))) {
        while ((sym = getchar()) != '\n')
            continue;
    @endcode

**/

double get_num(double *coef, char ch) {

    assert(coef);

    int sym = 0;

    printf("%c = ", ch);

    while (((scanf("%lg", coef) != 1) || (getchar() != '\n'))) {
        while ((sym = getchar()) != '\n')
            continue;

        printf("Введите число >:(\n");
        printf("%c = ", ch);
    }

    return *coef;

}
