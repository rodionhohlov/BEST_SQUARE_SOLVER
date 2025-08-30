#ifndef MATH_OPERATIONS_H_INCLUDED
#define MATH_OPERATIONS_H_INCLUDED

const double EPSILON = 1e-4;

/**
    @brief Сравнение двух чисел

    Функция сравнивает 2 числа с плавающей запятой решая проблему погрешности компьютера

    @param [in] num1 - первое число для сравнения
    @param [in] num2 - первое число для сравнения

    @return - true, если модуль их разности меньше 10^-4
    @return - false, если модуль их разности больше 10^-4
**/

bool float_equivalent(double num1, double num2);

/**
    @brief Результат применения && к двум аргументам

    @param [in] - булевские аргументы arg1 и arg2

    @return arg1 && arg2 - результат применения логического И к арументам
**/

bool and_res(bool arg1, bool arg2);

#endif
