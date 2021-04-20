// AsmLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "AsmLibrary.h"

/// <summary>
/// Умножение двух целочисленных значений с проверкой переполнения
/// </summary>
/// <param name="a">Первый множитель</param>
/// <param name="b">Второй множитель</param>
/// <returns>Результат перемножения</returns>
int multiply(int a, int b)
{
    int c;
    int check=0;
    //of - флаг переноса/переполнения
    __asm
    {
        mov eax, a
        mov ebx, b

        mul ebx

        mov c, eax
        jno metka
        mov check, 1
        metka:
        
    }
    if (check) { return NULL; }
    return c;
}

/// <summary>
/// Деление одного значения без знака на другое значение без знака
/// </summary>
/// <param name="a">Делимое</param>
/// <param name="b">Делитель</param>
/// <returns>Частное</returns>
double divide(double a, double b)
{
    double c;
    __asm
    {
        finit
        FINIT

        FLD a
        FLD b
        FDIVP st(1), st(0)

        FSTP c
    }
    return c;
}