/*
* This software is developed for study and improve coding skill ...
*
* Project:  Enjoyable Coding< EC >
* Copyright (C) Gao Peng, 2015

* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Library General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.

* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Library General Public License for more details.

* You should have received a copy of the GNU Library General Public
* License along with this library; if not, write to the Free
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

* ---------------------------------------------------------------------
* ecMemOP.cpp
* This file for all EC memory operation interface implementation.
*
* Eamil:   epengao@126.com
* Author:  Gao Peng
* Version: Intial first version.
* --------------------------------------------------------------------
*/

#include <stdlib.h>
#include <string.h>
#include "ECMemOP.h"


EC_PTR ecMemAlloc(EC_U32 uSize)
{
    return malloc(uSize);
}

EC_VOID ecMemFree(EC_PTR pMem)
{
    free(pMem);
}

EC_VOID ecMemSet(EC_PTR pMem, EC_S32 val, EC_U32 uSize)
{
    memset(pMem, val, uSize);
}

EC_VOID ecMemCopy(EC_PTR pDest, EC_PTR pSrc, EC_U32 uSize)
{
    memcpy(pDest, pSrc, uSize);
}

EC_S32 ecMemCompare(EC_PTR pBuf1, EC_PTR pBuf2, EC_U32 uSize)
{
    return memcmp(pBuf1, pBuf2, uSize);
}

EC_VOID ecMemMove(EC_PTR pDest, EC_PTR pSrc, EC_U32 uSize)
{
    memmove (pDest, pSrc, uSize);
}

EC_S32 ecFindByteFromMem(EC_CHAR cFindByte, EC_PTR pFrom, EC_U32 nFromSize)
{
    EC_S32 nPos = -1;
    if (pFrom && (nFromSize > 0))
    {
        for (EC_U32 i = 0; i < nFromSize; i++)
        {
            if (cFindByte == ((EC_PCHAR)pFrom)[i]) return i;
        }
    }
    return nPos;
}

EC_S32 ecFindMemFromMem(EC_PTR pFind, EC_U32 nFindSize, EC_PTR pFrom, EC_U32 nFromSize)
{
    EC_INT nPos = -1;
    if (pFind && pFrom && (nFindSize <= nFromSize))
    {
        EC_U32 nCompareLength = nFromSize - nFindSize;
        for (EC_U32 i = 0; i < nCompareLength; i++)
        {
            EC_U32 j = 0;
            EC_PCHAR pCompare = (EC_PCHAR)pFrom + i;
            for (j = 0; j < nFindSize; i++)
            {
                EC_CHAR cFrom = pCompare[i];
                EC_CHAR cFind = ((EC_PCHAR)pFind)[i];
                if (cFind != cFrom) break;
            }
            if (j == nFindSize) return i;
        }
    }
    return nPos;
}
