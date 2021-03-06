/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * Remote Applications Integrated Locally (RAIL)
 *
 * Copyright 2011 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __LIBRAIL_H
#define __LIBRAIL_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <freerdp/log.h>

#define RAIL_TAG FREERDP_TAG("rail")
#ifdef WITH_DEBUG_RAIL
#define DEBUG_RAIL(fmt, ...) WLog_DBG(RAIL_TAG, fmt, ## __VA_ARGS__)
#else
#define DEBUG_RAIL(fmt, ...) do { } while (0)
#endif

#endif /* __LIBRAIL_H */
