#pragma once

class __declspec(dllimport) A
{
public:
    A(void);
    ~A(void);
};

// Declare a variable, make it visible outside
// __declspec(dllimport) make it export to lib file
extern bool __declspec(dllimport) flag;

void __declspec(dllimport) func1();
