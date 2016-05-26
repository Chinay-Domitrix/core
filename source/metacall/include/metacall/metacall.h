/*
 *	MetaCall Library by Parra Studios
 *	Copyright (C) 2016 Vicente Eduardo Ferrer Garcia <vic798@gmail.com>
 *
 *	A library for providing a foreign function interface calls.
 *
 */

#ifndef METACALL_H
#define METACALL_H 1

#include <metacall/metacall_api.h>

#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

METACALL_API int metacall_initialize(void);

METACALL_API void * metacall(const char * name, ...);

METACALL_API int metacall_destroy(void);

METACALL_API void metacall_print_info(void);

#ifdef __cplusplus
}
#endif

#endif /* METACALL_H */
