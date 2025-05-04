#include "wrapper.h"

// Standard wrapper implementation calling zlib's crc32 directly:
mz_ulong mz_crc32(mz_ulong crc, const mz_uint8 *ptr, size_t buf_len) {
  uLong zlib_crc = (uLong)crc;
  const Bytef* zlib_ptr = (const Bytef*)ptr;
  uInt zlib_len = (uInt)buf_len;
  uLong result_crc = crc32(zlib_crc, zlib_ptr, zlib_len);
  return (mz_ulong)result_crc;
}
