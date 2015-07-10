/*
 * $Id$
 *
 *  captagent - Homer capture agent. Modular
 *  Duplicate SIP messages in Homer Encapulate Protocol [HEP] [ipv6 version]
 *
 *  Author: Alexandr Dubovikov <alexandr.dubovikov@gmail.com>
 *  (C) Homer Project 2012-2015 (http://www.sipcapture.org)
 *
 * Homer capture agent is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version
 *
 * Homer capture agent is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
*/


#include <stdio.h>
#include "src/api.h"
#include "src/structure.h"
#include "src/modules_api.h"
#include "src/modules.h"
#include "src/log.h"
#include "localapi.h"


/**
 *
 */
int rawapi_set_filter(unsigned int index, char *filter)
{
	set_raw_filter(index, filter);
    return 1;
}

/**
 *
 */
int bind_socket_raw(socket_raw_api_t* api)
{
        if (!api) {
        	LERR("Invalid parameter value\n");
                return -1;

        }
        api->setfilter  = rawapi_set_filter;

        return 0;
}


