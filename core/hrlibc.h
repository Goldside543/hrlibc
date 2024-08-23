/* SPDX-License-Identifier: LGPL-2.0-only */

ifndef HRLIBC_H
#define HRLIBC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void print(const char *format, ...);
void setmemory(void *ptr, int value, size_t num);
char* copystring(char *dest, const char *src);
size_t stringlength(const char *str);
int comparestrings(const char *str1, const char *str2);
void* allocate(size_t size);
void deallocate(void *ptr);

#endif // HRLIBC_H
