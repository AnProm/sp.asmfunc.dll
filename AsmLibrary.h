// Asmlibrary.h - Contains declarations of assembler functions
#pragma once

#ifdef ASMLIBRARY_EXPORTS
#define ASMLIBRARY_API __declspec(dllexport)
#else
#define ASMLIBRARY_API __declspec(dllimport)
#endif

extern "C" ASMLIBRARY_API int multiply(int a, int b);

extern "C" ASMLIBRARY_API double divide(double a, double b);