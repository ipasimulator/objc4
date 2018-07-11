
#ifndef _OBJC_CACHE_H
#define _OBJC_CACHE_H

#include "objc-private.h"

__BEGIN_DECLS

// [port] TODO: WTF?
#if defined(OBJC_PORT)
extern IMP _cache_getImp(Class cls, SEL sel);
#else
extern IMP cache_getImp(Class cls, SEL sel);
#endif

extern void cache_fill(Class cls, SEL sel, IMP imp, id receiver);

extern void cache_erase_nolock(Class cls);

extern void cache_delete(Class cls);

extern void cache_collect(bool collectALot);

__END_DECLS

#endif
