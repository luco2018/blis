/*

   BLIS    
   An object-based framework for developing high-performance BLAS-like
   libraries.

   Copyright (C) 2013, The University of Texas

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    - Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    - Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    - Neither the name of The University of Texas nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
   HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef BLIS_SCALAR_MACRO_DEFS_H
#define BLIS_SCALAR_MACRO_DEFS_H


// -- Scalar query macros --

#include "bli_eq.h"


// -- Scalar constant initialization macros --

#include "bli_constants.h"


// -- Scalar computation macros --

#include "bli_absq2s.h"
#include "bli_abval2s.h"

#include "bli_adds.h"
#include "bli_addjs.h"

#include "bli_axpys.h"
#include "bli_axpyjs.h"

#include "bli_axmys.h"

#include "bli_cast.h"

#include "bli_conjs.h"

#include "bli_copys.h"
#include "bli_copyjs.h"
#include "bli_copycjs.h"

#include "bli_dots.h"
#include "bli_dotjs.h"

#include "bli_getris.h"

#include "bli_inverts.h"

#include "bli_invscals.h"
#include "bli_invscaljs.h"
#include "bli_invscalcjs.h"

#include "bli_neg2s.h"

#include "bli_scals.h"
#include "bli_scaljs.h"
#include "bli_scalcjs.h"

#include "bli_scal2s.h"
#include "bli_scal2js.h"

#include "bli_setris.h"

#include "bli_sqrt2s.h"

#include "bli_subs.h"
#include "bli_subjs.h"

#include "bli_swaps.h"

#include "bli_xpbys.h"



// -- Scalar initialization macros --

#include "bli_rands.h"


// -- Misc. scalar macros --

#include "bli_fprints.h"


// -- Inlined scalar macros in loops --

#include "bli_adds_mxn.h"
#include "bli_adds_mxn_uplo.h"
#include "bli_copys_mxn.h"
#include "bli_set0s_mxn.h"
#include "bli_xpbys_mxn.h"
#include "bli_xpbys_mxn_uplo.h"


// -- Miscellaneous macros --

// min, max, abs

#define bli_min( a, b )  ( (a) < (b) ? (a) : (b) )
#define bli_max( a, b )  ( (a) > (b) ? (a) : (b) )
#define bli_abs( a )     ( (a) < 0 ? -(a) : (a) )

// fmin, fmax, fabs

#define bli_min( a, b )  ( (a) < (b) ? (a) : (b) )
#define bli_fmin( a, b ) bli_min( a, b )
#define bli_fmax( a, b ) bli_max( a, b )
#define bli_fabs( a )    ( (a) < 0.0 ? -(a) : (a) )

// fminabs, fmaxabs
#define bli_fminabs( a, b ) \
\
	bli_fmin( bli_fabs( a ), \
	          bli_fabs( b ) )

#define bli_fmaxabs( a, b ) \
\
	bli_fmax( bli_fabs( a ), \
	          bli_fabs( b ) )

// swap_types

#define bli_swap_types( type1, type2 ) \
{ \
	num_t temp = type1; \
	type1 = type2; \
	type2 = temp; \
}

// swap_dims

#define bli_swap_dims( dim1, dim2 ) \
{ \
	dim_t temp = dim1; \
	dim1 = dim2; \
	dim2 = temp; \
}

// swap_incs

#define bli_swap_incs( inc1, inc2 ) \
{ \
	inc_t temp = inc1; \
	inc1 = inc2; \
	inc2 = temp; \
}

// toggle_bool

#define bli_toggle_bool( b ) \
{ \
	if ( b == TRUE ) b = FALSE; \
	else             b = TRUE; \
}


#endif
