// AsmLibrary.cpp : Defines the exported functions for the DLL.
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include <utility>
#include <limits.h>
#include "AsmLibrary.h"

/// <summary>
/// ��������� ���� ������������� �������� � ��������� ������������
/// </summary>
/// <param name="a">������ ���������</param>
/// <param name="b">������ ���������</param>
/// <returns>��������� ������������</returns>
int multiply(int a, int b)
{
    int c;
    int check=0;
    //of - ���� ��������/������������
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
/// ������� ������ �������� ��� ����� �� ������ �������� ��� �����
/// </summary>
/// <param name="a">�������</param>
/// <param name="b">��������</param>
/// <returns>�������</returns>
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