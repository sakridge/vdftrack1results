/*
    Copyright (C) 2008, 2009 William Hart
    Copyright (C) 2010, 2012 Sebastian Pancratz
    Copyright (C) 2013 Mike Hansen

    This file is part of FLINT.

    FLINT is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.  See <http://www.gnu.org/licenses/>.
*/

#ifdef T

#include "templates.h"

void
_TEMPLATE(T, poly_shift_right) (TEMPLATE(T, struct) * rop,
                                const TEMPLATE(T, struct) * op, slong len,
                                slong n, const TEMPLATE(T, ctx_t) ctx)
{
    slong i;

    if (rop != op)
    {
        for (i = 0; i < len - n; i++)
            TEMPLATE(T, set) (rop + i, op + n + i, ctx);
    }
    else
    {
        for (i = 0; i < len - n; i++)
            TEMPLATE(T, swap) (rop + i, rop + n + i, ctx);
    }
}

void
TEMPLATE(T, poly_shift_right) (TEMPLATE(T, poly_t) rop,
                               const TEMPLATE(T, poly_t) op, slong n,
                               const TEMPLATE(T, ctx_t) ctx)
{
    if (n == 0)
    {
        TEMPLATE(T, poly_set) (rop, op, ctx);
    }
    else if (op->length <= n)
    {
        TEMPLATE(T, poly_zero) (rop, ctx);
    }
    else
    {
        TEMPLATE(T, poly_fit_length) (rop, op->length - n, ctx);
        _TEMPLATE(T, poly_shift_right) (rop->coeffs, op->coeffs, op->length, n,
                                        ctx);
        _TEMPLATE(T, poly_set_length) (rop, op->length - n, ctx);
    }
}


#endif
