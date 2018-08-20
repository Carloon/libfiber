#ifndef SANE_SOCKET_INCLUDE_H
#define SANE_SOCKET_INCLUDE_H

#if 0  /* kcc couldn't follow the path */
#include <../../include/fiber/libfiber.h>
#endif
#ifndef LIB_FIBER_INCLUDE_H
#define LIB_FIBER_INCLUDE_H

#include "fiber_base.h"
#include "fiber_lock.h"
#include "fiber_event.h"
#include "fiber_sem.h"
#include "fiber_hook.h"
#include "fiber_channel.h"

#endif

int is_listen_socket(socket_t fd);
int getsocktype(socket_t fd);

#endif
