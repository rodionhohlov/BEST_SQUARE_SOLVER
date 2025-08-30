#ifndef TESTER_H_INCLUDED
#define TESTER_H_INCLUDED

#include "solver.h"

struct UnitTest {
    struct coefs coeffits;
    struct ruts_ans exp_ruts_ans;
};

/**
    @brief Функция запуска тестов

    Считывает с файла "tests.txt" значения для тестирования и запускает все unit-тесты
**/

void master_test(void);

/**
    @brief UNIT-TEST

    Функция считает уравнения и сравнивает полученные результаты с вводимыми

    @param [in] *сur_test - указатель на элемент структуры из соэффициентов и корней
**/

void unit_test(UnitTest *cur_test);

#endif
