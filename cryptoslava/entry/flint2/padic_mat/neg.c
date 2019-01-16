/*
    Copyright (C) 2011 Sebastian Pancratz

    This file is part of FLINT.

    FLINT is free software: you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License (LGPL) as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.  See <http://www.gnu.org/licenses/>.
*/

#include "fmpz_mat.h"
#include "padic_mat.h"

void _padic_mat_neg(padic_mat_t B, const padic_mat_t A)
{
    if (padic_mat_is_empty(B))
        return;

    fmpz_mat_neg(padic_mat(B), padic_mat(A));
    B->val = A->val;
}

void padic_mat_neg(padic_mat_t B, const padic_mat_t A, const padic_ctx_t ctx)
{
    _padic_mat_neg(B, A);
    _padic_mat_reduce(B, ctx);
}
