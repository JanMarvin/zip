#ifndef WRAPPER_H
#define WRAPPER_H

#include <zlib.h>

#ifndef MZ_ULONG
typedef unsigned long mz_ulong;
#define MZ_ULONG
#endif

#ifndef MZ_UINT8
typedef unsigned char mz_uint8;
#define MZ_UINT8
#endif

mz_ulong mz_crc32(mz_ulong crc, const mz_uint8 *ptr, size_t buf_len);

#endif // WRAPPER_H
