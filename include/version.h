/*
 * include/version.h
 * Version number header file
 *
 * Copyright (c) 2017-2021 Roderick W. Smith
 *
 * Distributed under the terms of the GNU General Public License (GPL)
 * version 3 (GPLv3), a copy of which must be distributed with this
 * source code or binaries made from it.
 *
 */
/*
 * Modified for RefindPlus
 * Copyright (c) 2020-2025 Dayo Akanji (sf.net/u/dakanji/profile)
 *
 * Modifications distributed under the preceding terms.
 */

#define WIDE_STR2(x) L##x
#define WIDE_STR(x) WIDE_STR2(x)
#define VERSION_STRING_ASCII "0.14.2.AG_PRE-RELEASE"
#define REFINDPLUS_VERSION WIDE_STR(VERSION_STRING_ASCII)
