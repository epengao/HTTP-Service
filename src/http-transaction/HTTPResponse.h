/*
* This software is developed for study and improve coding skill ...
*
* Project:  Enjoyable Coding< EC >
* Copyright (C) 2014-2016 Gao Peng

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
* HTTPResponse.h
* This file for HTTPResponse define and encapsulation.
*
* Eamil:   epengao@126.com
* Author:  Peter Gao
* Version: Intial first version.
* --------------------------------------------------------------------
*/

#ifndef HTTP_RESPONSE_H
#define HTTP_RESPONSE_H

#include "HTTPDefine.h"

class HTTPResponse
{
public:
    HTTPResponse();
    ~HTTPResponse();
    EC_VOID SetHTTPVersion(EC_PCHAR pMethod);
    EC_VOID SetResponseStatus(EC_PCHAR pURL);
    EC_VOID AddHTTPHeaderSection(HTTP_HeaderSection* pSection);
};

#endif /* HTTP_RESPONSE_H */


