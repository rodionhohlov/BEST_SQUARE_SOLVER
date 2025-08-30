#ifndef SOLVER_H_INCLUDED
#define SOLVER_H_INCLUDED

/**
    мой assert на проверку, является ли число NAN
**/

#define NAN_COEF_ASSERT(ex) if(!(ex)) {printf("файл %s строка %d: коэффициент имеет значение NAN", __FILE__, __LINE__); abort();}

struct coefs {
    double a;
    double b;
    double c;
};

enum nRoots {
    NO_ROOTS  = 0,
    ONE_ROOT  = 1,
    TWO_ROOTS = 2,
    INF_ROOTS = -1
};

struct ruts_ans {
    double x1;
    double x2;
    nRoots ans;
};

/**
    @brief Основная функция для решения всех вариантов квадратных уравнений

    При выполнении соответствующих условий вызывает функции для решения различных случает уравнений.

    @param [in] *coefficients - указатель на структуру коэффициентов
    @param [in] *roots - указатель на структуру с подсчитываемыми корнями

    @return Изменённые зачения для x1 и x2
**/

nRoots mega_solver(const coefs *coefficients, ruts_ans *roots);

/**
    @brief Функция решения станартных квадратных уравнений

    Решает случаи, когда все коэффициенты ненулевые

    @param [in] *coefficients - указатель на структуру коэффициентов a, b, c
    @param [in] *roots - указатель на структуру c корнями x1, x2 и их количеством

    @return Изменённые зачения для x1 и x2
**/

void solve_standard_square(const coefs *coefficients, ruts_ans *roots);

/**
    @brief Фукция решения линейных уравнений

    Решаются случаи, когда коэффициент a нулевой

    @param [in] *coefficients - указатель на структуру коэффициентов b, c
    @param [in] *roots - указатель на структуру c корнями x1, x2 и их количеством

    @return Изменённые зачения для x1 и x2
**/

void solve_linal(const coefs *coefficients, ruts_ans *roots);

/**
    @brief Функция решения квадратных уравнений

    Решает неполные квадратные уравнения или вызывает функцию solve_standard_square

    @code
     else
            solve_standard_square(coefficients, roots);
    @endcode

    @param [in] *coefficients - указатель на структуру коэффициентов a, b, c
    @param [in] *roots - указатель на структуру c корнями x1, x2 и их количеством

    @return Изменённые зачения для x1 и x2
**/

void solve_square(const coefs *coefficients, ruts_ans *roots);

/**
    @brief Функция дискриминанта

    Считает дскриминант для квадратных уравнений
**/

double discrim(const coefs *coefficients);

#endif
