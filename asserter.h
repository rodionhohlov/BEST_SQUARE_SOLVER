#ifndef ASSERTER_H_INCLUDED
#define ASSERTER_H_INCLUDED

#define ARGC_ASSERT(x==2) \
    if (x!=2) { \
        printf("ошибка в %s файле в %d строке: недопустимый аргумент командной строки - число аргументов", __FILE__, __LINE__);  \
        abort(); \
    }

#endif
