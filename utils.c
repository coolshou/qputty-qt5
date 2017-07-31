/*
 *      Copyright (C) 2009 - 2011 Four J's Development Tools Europe, Ltd.
 *      http://www.fourjs.com
 *  
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */
#include "utils.h"
#include <ctype.h>
#include <string.h>

#ifdef Q_OS_WIN
const int share_can_be_downstream = TRUE;
const int share_can_be_upstream = TRUE;
#endif

int handleHostnameCmdlineParam(char* arg,Conf *conf)
{
    /*
     * Otherwise, treat this argument as a host name.
     */
    char* p=arg;
    char* q=arg;
    while (*p && !isspace((unsigned char)*p))
        p++;
    if (*p)
        *p++ = '\0';
    conf_set_str(conf, CONF_host, q);
    return 1;
}
