//
// Created by 齐国伟 on 2019/5/29.
//

#include "test.h"

test::test()
{
    this->r=5.0;
}

test::test(double R)
{
    this->r=R;
}

double test:: Area()
{
    return 3.14*r*r;
}
