// SPDX-License-Identifier: LGPL-2.1-only
/*
 * core/hrlibc.c
 * 
 * Main file of hrlibc.
 * 
 * Copyright (C) 2024 Goldside543
 *
 */

include "hrlibc.h"

void print(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

void setmemory(void *ptr, int value, size_t num) {
    memset(ptr, value, num);
}

char* copystring(char *dest, const char *src) {
    return strcpy(dest, src);
}

size_t stringlength(const char *str) {
    return strlen(str);
}

int comparestrings(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}

void* allocate(size_t size) {
    return malloc(size);
}

void deallocate(void *ptr) {
    free(ptr);
}
