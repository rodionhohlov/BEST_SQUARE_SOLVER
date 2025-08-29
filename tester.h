#ifndef TESTER_H_INCLUDED
#define TESTER_H_INCLUDED

#include "solver.h"

struct UnitTest {
    struct coefs coeffits;
    struct ruts_ans exp_ruts_ans;
};

void master_test(void);

void unit_test(UnitTest *cur_test);

#endif
