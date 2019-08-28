/**
 * etl_profile.h - ETL compiler profile model
 * 
 * (C) 2019 - Pablo Bacho <pablo@pablobacho.com>
 * This code is licensed under the MIT License.
 */

#ifndef ETL_COMPILER_H
#define ETL_COMPILER_H

#define ETL_COMPILER_GCC
#define ETL_CPP11_SUPPORTED

#if !defined(CONFIG_OPTIMIZATION_ASSERTIONS_ENABLED)
    #define ETL_NO_CHECKS
#endif

#if defined(CONFIG_CXX_EXCEPTIONS)
    #define ETL_THROW_EXCEPTIONS
#endif

#include "etl/profiles/gcc_generic.h"

#endif // ETL_COMPILER_H
