// The MIT License
// 
// Copyright (c) 2010 Gwendal Roué
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


/*
 * Set up standard GRMustache versions
 */
#define GRMUSTACHE_VERSION_1_0 1000
#define GRMUSTACHE_VERSION_1_1 1010
#define GRMUSTACHE_VERSION_1_2 1020
#define GRMUSTACHE_VERSION_1_3 1030
#define GRMUSTACHE_VERSION_1_4 1040
#define GRMUSTACHE_VERSION_1_5 1050
#define GRMUSTACHE_VERSION_1_6 1060
#define GRMUSTACHE_VERSION_1_7 1070
#define GRMUSTACHE_VERSION_1_8 1080



/* 
 * If min GRMustacheVersion not specified, assume 1.0
 */
#ifndef GRMUSTACHE_VERSION_MIN_REQUIRED
#define GRMUSTACHE_VERSION_MIN_REQUIRED GRMUSTACHE_VERSION_1_0
#endif

/*
 * if max GRMustacheVersion not specified, assume largerof(1.8, min)
 */
#ifndef GRMUSTACHE_VERSION_MAX_ALLOWED
#if GRMUSTACHE_VERSION_MIN_REQUIRED > GRMUSTACHE_VERSION_1_8
#define GRMUSTACHE_VERSION_MAX_ALLOWED GRMUSTACHE_VERSION_MIN_REQUIRED
#else
#define GRMUSTACHE_VERSION_MAX_ALLOWED GRMUSTACHE_VERSION_1_8
#endif
#endif


/*
 * Error on bad values
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_MIN_REQUIRED
#error GRMUSTACHE_VERSION_MAX_ALLOWED must be >= GRMUSTACHE_VERSION_MIN_REQUIRED
#endif
#if GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_1_0
#error GRMUSTACHE_VERSION_MIN_REQUIRED must be >= GRMUSTACHE_VERSION_1_0
#endif


/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER
 * 
 * Used on functions introduced in GRMustache 1.0
 */
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED
 * 
 * Used on functions introduced in GRMustache 1.0, 
 * and deprecated in GRMustache 1.0
 */
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_1_0_AND_LATER
 * 
 * Used on types deprecated in GRMustache 1.0
 */
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_0_AND_LATER     DEPRECATED_ATTRIBUTE






/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 1.1 
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_1_1
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER     UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_1_1
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER     WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 1.1, 
 * and deprecated in GRMustache 1.1
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_1
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_1
 * 
 * Used on declarations introduced in GRMustache 1.0, 
 * but later deprecated in GRMustache 1.1
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_1
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_1    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_1    AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_1_1_AND_LATER
 * 
 * Used on types deprecated in GRMustache 1.1 
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_1
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_1_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 1.1 
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_1_1
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER     UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_1_1
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER     WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 1.1, 
 * and deprecated in GRMustache 1.1
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_1
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_1
 * 
 * Used on declarations introduced in GRMustache 1.0, 
 * but later deprecated in GRMustache 1.1
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_1
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_1    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_1    AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_1_1_AND_LATER
 * 
 * Used on types deprecated in GRMustache 1.1 
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_1
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_1_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 1.2 
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_1_2
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER     UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_1_2
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER     WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 1.2, 
 * and deprecated in GRMustache 1.2
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_2
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_2
 * 
 * Used on declarations introduced in GRMustache 1.0, 
 * but later deprecated in GRMustache 1.2
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_2
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_2    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_2    AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_2
 * 
 * Used on declarations introduced in GRMustache 1.1, 
 * but later deprecated in GRMustache 1.2
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_2
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_2    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_2    AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_1_2_AND_LATER
 * 
 * Used on types deprecated in GRMustache 1.2 
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_2
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_2_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_2_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 1.3 
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_1_3
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER     UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_1_3
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER     WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 1.3, 
 * and deprecated in GRMustache 1.3
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_3
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_3
 * 
 * Used on declarations introduced in GRMustache 1.0, 
 * but later deprecated in GRMustache 1.3
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_3
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_3    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_3    AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_3
 * 
 * Used on declarations introduced in GRMustache 1.1, 
 * but later deprecated in GRMustache 1.3
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_3
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_3    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_3    AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_3
 * 
 * Used on declarations introduced in GRMustache 1.2, 
 * but later deprecated in GRMustache 1.3
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_3
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_3    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_3    AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_1_3_AND_LATER
 * 
 * Used on types deprecated in GRMustache 1.3 
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_3
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_3_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_3_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 1.4 
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_1_4
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER     UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_1_4
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER     WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 1.4, 
 * and deprecated in GRMustache 1.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_4
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4
 * 
 * Used on declarations introduced in GRMustache 1.0, 
 * but later deprecated in GRMustache 1.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_4
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4    AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4
 * 
 * Used on declarations introduced in GRMustache 1.1, 
 * but later deprecated in GRMustache 1.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_4
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4    AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4
 * 
 * Used on declarations introduced in GRMustache 1.2, 
 * but later deprecated in GRMustache 1.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_4
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4    AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4
 * 
 * Used on declarations introduced in GRMustache 1.3, 
 * but later deprecated in GRMustache 1.4
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_4
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_4    AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_1_4_AND_LATER
 * 
 * Used on types deprecated in GRMustache 1.4 
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_4
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_4_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_4_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 1.5 
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_1_5
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER     UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_1_5
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER     WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 1.5, 
 * and deprecated in GRMustache 1.5
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_5
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5
 * 
 * Used on declarations introduced in GRMustache 1.0, 
 * but later deprecated in GRMustache 1.5
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_5
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5    AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5
 * 
 * Used on declarations introduced in GRMustache 1.1, 
 * but later deprecated in GRMustache 1.5
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_5
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5    AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5
 * 
 * Used on declarations introduced in GRMustache 1.2, 
 * but later deprecated in GRMustache 1.5
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_5
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5    AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5
 * 
 * Used on declarations introduced in GRMustache 1.3, 
 * but later deprecated in GRMustache 1.5
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_5
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5    AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5
 * 
 * Used on declarations introduced in GRMustache 1.4, 
 * but later deprecated in GRMustache 1.5
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_5
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_5    AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_1_5_AND_LATER
 * 
 * Used on types deprecated in GRMustache 1.5 
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_5
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_5_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_5_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 1.6 
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_1_6
#define AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER     UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_1_6
#define AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER     WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 1.6, 
 * and deprecated in GRMustache 1.6
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_6
#define AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6
 * 
 * Used on declarations introduced in GRMustache 1.0, 
 * but later deprecated in GRMustache 1.6
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_6
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6
 * 
 * Used on declarations introduced in GRMustache 1.1, 
 * but later deprecated in GRMustache 1.6
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_6
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6
 * 
 * Used on declarations introduced in GRMustache 1.2, 
 * but later deprecated in GRMustache 1.6
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_6
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6
 * 
 * Used on declarations introduced in GRMustache 1.3, 
 * but later deprecated in GRMustache 1.6
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_6
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6
 * 
 * Used on declarations introduced in GRMustache 1.4, 
 * but later deprecated in GRMustache 1.6
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_6
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6
 * 
 * Used on declarations introduced in GRMustache 1.5, 
 * but later deprecated in GRMustache 1.6
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_6
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_6    AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_1_6_AND_LATER
 * 
 * Used on types deprecated in GRMustache 1.6 
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_6
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_6_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_6_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 1.7 
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_1_7
#define AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER     UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_1_7
#define AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER     WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 1.7, 
 * and deprecated in GRMustache 1.7
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_7
#define AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7
 * 
 * Used on declarations introduced in GRMustache 1.0, 
 * but later deprecated in GRMustache 1.7
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_7
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7
 * 
 * Used on declarations introduced in GRMustache 1.1, 
 * but later deprecated in GRMustache 1.7
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_7
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7
 * 
 * Used on declarations introduced in GRMustache 1.2, 
 * but later deprecated in GRMustache 1.7
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_7
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7
 * 
 * Used on declarations introduced in GRMustache 1.3, 
 * but later deprecated in GRMustache 1.7
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_7
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7
 * 
 * Used on declarations introduced in GRMustache 1.4, 
 * but later deprecated in GRMustache 1.7
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_7
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7
 * 
 * Used on declarations introduced in GRMustache 1.5, 
 * but later deprecated in GRMustache 1.7
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_7
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7
 * 
 * Used on declarations introduced in GRMustache 1.6, 
 * but later deprecated in GRMustache 1.7
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_7
#define AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_7    AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_1_7_AND_LATER
 * 
 * Used on types deprecated in GRMustache 1.7 
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_7
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_7_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_7_AND_LATER
#endif






/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_8_AND_LATER
 * 
 * Used on declarations introduced in GRMustache 1.8 
 */
#if GRMUSTACHE_VERSION_MAX_ALLOWED < GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_8_AND_LATER     UNAVAILABLE_ATTRIBUTE
#elif GRMUSTACHE_VERSION_MIN_REQUIRED < GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_8_AND_LATER     WEAK_IMPORT_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_8_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_8_AND_LATER_BUT_DEPRECATED
 * 
 * Used on declarations introduced in GRMustache 1.8, 
 * and deprecated in GRMustache 1.8
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_8_AND_LATER_BUT_DEPRECATED    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_8_AND_LATER_BUT_DEPRECATED    AVAILABLE_GRMUSTACHE_VERSION_1_8_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8
 * 
 * Used on declarations introduced in GRMustache 1.0, 
 * but later deprecated in GRMustache 1.8
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    AVAILABLE_GRMUSTACHE_VERSION_1_0_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8
 * 
 * Used on declarations introduced in GRMustache 1.1, 
 * but later deprecated in GRMustache 1.8
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    AVAILABLE_GRMUSTACHE_VERSION_1_1_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8
 * 
 * Used on declarations introduced in GRMustache 1.2, 
 * but later deprecated in GRMustache 1.8
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    AVAILABLE_GRMUSTACHE_VERSION_1_2_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8
 * 
 * Used on declarations introduced in GRMustache 1.3, 
 * but later deprecated in GRMustache 1.8
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    AVAILABLE_GRMUSTACHE_VERSION_1_3_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8
 * 
 * Used on declarations introduced in GRMustache 1.4, 
 * but later deprecated in GRMustache 1.8
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    AVAILABLE_GRMUSTACHE_VERSION_1_4_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8
 * 
 * Used on declarations introduced in GRMustache 1.5, 
 * but later deprecated in GRMustache 1.8
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    AVAILABLE_GRMUSTACHE_VERSION_1_5_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8
 * 
 * Used on declarations introduced in GRMustache 1.6, 
 * but later deprecated in GRMustache 1.8
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    AVAILABLE_GRMUSTACHE_VERSION_1_6_AND_LATER
#endif

/*
 * AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8
 * 
 * Used on declarations introduced in GRMustache 1.7, 
 * but later deprecated in GRMustache 1.8
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_8
#define AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    DEPRECATED_ATTRIBUTE
#else
#define AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER_BUT_DEPRECATED_IN_GRMUSTACHE_VERSION_1_8    AVAILABLE_GRMUSTACHE_VERSION_1_7_AND_LATER
#endif

/*
 * DEPRECATED_IN_GRMUSTACHE_VERSION_1_8_AND_LATER
 * 
 * Used on types deprecated in GRMustache 1.8 
 */
#if GRMUSTACHE_VERSION_MIN_REQUIRED >= GRMUSTACHE_VERSION_1_8
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_8_AND_LATER    DEPRECATED_ATTRIBUTE
#else
#define DEPRECATED_IN_GRMUSTACHE_VERSION_1_8_AND_LATER
#endif


