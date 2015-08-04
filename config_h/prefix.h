/* This is a generated file. */
#ifndef CONFIG_H_
#define CONFIG_H_

/* Probe byte-order via defines (clang & gcc at least work) to avoid run-time
 * tests */
#ifdef __BYTE_ORDER__
# ifdef __ORDER_LITTLE_ENDIAN__
#  if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
#   define HAVE_LITTLE_ENDIAN 1
#  endif
# endif
# ifdef __ORDER_BIG_ENDIAN__
#  if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#   define HAVE_BIG_ENDIAN 1
#  endif
# endif
#endif
