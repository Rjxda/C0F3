#ifndef V0RTEX_H
#define V0RTEX_H

#include <mach/mach.h>

#include "common.h"

kern_return_t v0rtex(task_t *tfp02, kptr_t *kslide, kptr_t *kernucred, kptr_t *selfproc);

#endif
