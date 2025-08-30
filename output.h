#ifndef CHOOSER_H_INCLUDED
#define CHOOSER_H_INCLUDED

#include "solver.h"

/**
    @brief Вывод ответа после решения уравнения

    Функция анализирует число корней и в зависимости от значения выводит соответствующие ответы

    @param [in] RootsCNT - число корней
    @param [in] root1 - корень 1
    @param [in] root2 - корень 2
**/

void choose(nRoots RootsCNT, double root1, double root2);

#endif
