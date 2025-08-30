#ifndef COR_FLAG_H_INCLUDED
#define COR_FLAG_H_INCLUDED

/**
    @brief Проверка вводимого с командной строки флага

    Сравнивает введённый пользователем флаг с допустимыми флагами для вызова

    @param [in] - указатель на введённый флаг
**/

bool is_flag_correct(char *flag[]);

#endif
