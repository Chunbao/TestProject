#include "StdAfx.h"
#include "A.h"

// difference: former can be used outside this file by using extern
A a;
static A aa;

bool flag = false;

A::A(void)
{
}

A::~A(void)
{
}


void func1()
{
    // this is used to allocate memory and assign value when execution unit is loaded
    static int globalA = 10;

    globalA++;
}