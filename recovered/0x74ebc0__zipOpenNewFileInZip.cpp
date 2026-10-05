// FUNCTION: BF2 0x74ebc0
/*
minizip 1.01 (zlib contrib), Copyright (C) 1998-2005 Gilles Vollant, and zlib
(C) 1995-2005 Jean-loup Gailly and Mark Adler. zlib license: provided 'as-is',
without any express or implied warranty; permission is granted to use, alter
and redistribute it freely, subject to: 1. the origin must not be
misrepresented; 2. altered versions must be plainly marked as such; 3. this
notice may not be removed or altered.

Altered: K&R definitions rewritten as prototypes, one cast for C++, comments
and unrelated bodies dropped, line numbers kept with #line.
*/
extern "C" {
#line 8 "zconf.h"
#ifndef ZCONF_H
#define ZCONF_H
#line 15 "zconf.h"
#ifdef Z_PREFIX
#  define deflateInit_          z_deflateInit_
#  define deflate               z_deflate
#  define deflateEnd            z_deflateEnd
#  define inflateInit_          z_inflateInit_
#  define inflate               z_inflate
#  define inflateEnd            z_inflateEnd
#  define deflateInit2_         z_deflateInit2_
#  define deflateSetDictionary  z_deflateSetDictionary
#  define deflateCopy           z_deflateCopy
#  define deflateReset          z_deflateReset
#  define deflateParams         z_deflateParams
#  define deflateBound          z_deflateBound
#  define deflatePrime          z_deflatePrime
#  define inflateInit2_         z_inflateInit2_
#  define inflateSetDictionary  z_inflateSetDictionary
#  define inflateSync           z_inflateSync
#  define inflateSyncPoint      z_inflateSyncPoint
#  define inflateCopy           z_inflateCopy
#  define inflateReset          z_inflateReset
#  define inflateBack           z_inflateBack
#  define inflateBackEnd        z_inflateBackEnd
#  define compress              z_compress
#  define compress2             z_compress2
#  define compressBound         z_compressBound
#  define uncompress            z_uncompress
#  define adler32               z_adler32
#  define crc32                 z_crc32
#  define get_crc_table         z_get_crc_table
#  define zError                z_zError
#line 46 "zconf.h"
#  define alloc_func            z_alloc_func
#  define free_func             z_free_func
#  define in_func               z_in_func
#  define out_func              z_out_func
#  define Byte                  z_Byte
#  define uInt                  z_uInt
#  define uLong                 z_uLong
#  define Bytef                 z_Bytef
#  define charf                 z_charf
#  define intf                  z_intf
#  define uIntf                 z_uIntf
#  define uLongf                z_uLongf
#  define voidpf                z_voidpf
#  define voidp                 z_voidp
#endif
#line 62 "zconf.h"
#if defined(__MSDOS__) && !defined(MSDOS)
#  define MSDOS
#endif
#if (defined(OS_2) || defined(__OS2__)) && !defined(OS2)
#  define OS2
#endif
#if defined(_WINDOWS) && !defined(WINDOWS)
#  define WINDOWS
#endif
#if defined(_WIN32) || defined(_WIN32_WCE) || defined(__WIN32__)
#  ifndef WIN32
#    define WIN32
#  endif
#endif
#if (defined(MSDOS) || defined(OS2) || defined(WINDOWS)) && !defined(WIN32)
#  if !defined(__GNUC__) && !defined(__FLAT__) && !defined(__386__)
#    ifndef SYS16BIT
#      define SYS16BIT
#    endif
#  endif
#endif
#line 88 "zconf.h"
#ifdef SYS16BIT
#  define MAXSEG_64K
#endif
#ifdef MSDOS
#  define UNALIGNED_OK
#endif
#line 95 "zconf.h"
#ifdef __STDC_VERSION__
#  ifndef STDC
#    define STDC
#  endif
#  if __STDC_VERSION__ >= 199901L
#    ifndef STDC99
#      define STDC99
#    endif
#  endif
#endif
#if !defined(STDC) && (defined(__STDC__) || defined(__cplusplus))
#  define STDC
#endif
#if !defined(STDC) && (defined(__GNUC__) || defined(__BORLANDC__))
#  define STDC
#endif
#if !defined(STDC) && (defined(MSDOS) || defined(WINDOWS) || defined(WIN32))
#  define STDC
#endif
#if !defined(STDC) && (defined(OS2) || defined(__HOS_AIX__))
#  define STDC
#endif
#line 118 "zconf.h"
#if defined(__OS400__) && !defined(STDC)
#  define STDC
#endif
#line 122 "zconf.h"
#ifndef STDC
#  ifndef const
#    define const
#  endif
#endif
#line 129 "zconf.h"
#if defined(__MWERKS__)||defined(applec)||defined(THINK_C)||defined(__SC__)
#  define NO_DUMMY_DECL
#endif
#line 134 "zconf.h"
#ifndef MAX_MEM_LEVEL
#  ifdef MAXSEG_64K
#    define MAX_MEM_LEVEL 8
#  else
#    define MAX_MEM_LEVEL 9
#  endif
#endif
#line 147 "zconf.h"
#ifndef MAX_WBITS
#  define MAX_WBITS   15
#endif
#line 166 "zconf.h"
#ifndef OF
#  ifdef STDC
#    define OF(args)  args
#  else
#    define OF(args)  ()
#  endif
#endif
#line 180 "zconf.h"
#ifdef SYS16BIT
#  if defined(M_I86SM) || defined(M_I86MM)
#line 183 "zconf.h"
#    define SMALL_MEDIUM
#    ifdef _MSC_VER
#      define FAR _far
#    else
#      define FAR far
#    endif
#  endif
#  if (defined(__SMALL__) || defined(__MEDIUM__))
#line 192 "zconf.h"
#    define SMALL_MEDIUM
#    ifdef __BORLANDC__
#      define FAR _far
#    else
#      define FAR far
#    endif
#  endif
#endif
#line 201 "zconf.h"
#if defined(WINDOWS) || defined(WIN32)
#line 205 "zconf.h"
#  ifdef ZLIB_DLL
#    if defined(WIN32) && (!defined(__BORLANDC__) || (__BORLANDC__ >= 0x500))
#      ifdef ZLIB_INTERNAL
#        define ZEXTERN extern __declspec(dllexport)
#      else
#        define ZEXTERN extern __declspec(dllimport)
#      endif
#    endif
#  endif
#line 218 "zconf.h"
#  ifdef ZLIB_WINAPI
#    ifdef FAR
#      undef FAR
#    endif
#    include <windows.h>
#line 225 "zconf.h"
#    define ZEXPORT WINAPI
#    ifdef WIN32
#      define ZEXPORTVA WINAPIV
#    else
#      define ZEXPORTVA FAR CDECL
#    endif
#  endif
#endif
#line 234 "zconf.h"
#if defined (__BEOS__)
#  ifdef ZLIB_DLL
#    ifdef ZLIB_INTERNAL
#      define ZEXPORT   __declspec(dllexport)
#      define ZEXPORTVA __declspec(dllexport)
#    else
#      define ZEXPORT   __declspec(dllimport)
#      define ZEXPORTVA __declspec(dllimport)
#    endif
#  endif
#endif
#line 246 "zconf.h"
#ifndef ZEXTERN
#  define ZEXTERN extern
#endif
#ifndef ZEXPORT
#  define ZEXPORT
#endif
#ifndef ZEXPORTVA
#  define ZEXPORTVA
#endif
#line 256 "zconf.h"
#ifndef FAR
#  define FAR
#endif
#line 260 "zconf.h"
#if !defined(__MACTYPES__)
typedef unsigned char  Byte;
#endif
typedef unsigned int   uInt;
typedef unsigned long  uLong;
#line 266 "zconf.h"
#ifdef SMALL_MEDIUM
#line 268 "zconf.h"
#  define Bytef Byte FAR
#else
   typedef Byte  FAR Bytef;
#endif
typedef char  FAR charf;
typedef int   FAR intf;
typedef uInt  FAR uIntf;
typedef uLong FAR uLongf;
#line 277 "zconf.h"
#ifdef STDC
   typedef void const *voidpc;
   typedef void FAR   *voidpf;
   typedef void       *voidp;
#else
   typedef Byte const *voidpc;
   typedef Byte FAR   *voidpf;
   typedef Byte       *voidp;
#endif
#line 287 "zconf.h"
#if 0
#  include <sys/types.h>
#  include <unistd.h>
#  ifdef VMS
#    include <unixio.h>
#  endif
#  define z_off_t off_t
#endif
#ifndef SEEK_SET
#  define SEEK_SET        0
#  define SEEK_CUR        1
#  define SEEK_END        2
#endif
#ifndef z_off_t
#  define z_off_t long
#endif
#line 304 "zconf.h"
#if defined(__OS400__)
#  define NO_vsnprintf
#endif
#line 308 "zconf.h"
#if defined(__MVS__)
#  define NO_vsnprintf
#  ifdef FAR
#    undef FAR
#  endif
#endif
#line 316 "zconf.h"
#if defined(__MVS__)
#line 330 "zconf.h"
#endif
#line 332 "zconf.h"
#endif
#line 31 "zlib.h"
#ifndef ZLIB_H
#define ZLIB_H
#line 36 "zlib.h"
#ifdef __cplusplus
extern "C" {
#endif
#line 40 "zlib.h"
#define ZLIB_VERSION "1.2.3"
#define ZLIB_VERNUM 0x1230
#line 77 "zlib.h"
typedef voidpf (*alloc_func) OF((voidpf opaque, uInt items, uInt size));
typedef void   (*free_func)  OF((voidpf opaque, voidpf address));
#line 80 "zlib.h"
struct internal_state;
#line 82 "zlib.h"
typedef struct z_stream_s {
    Bytef    *next_in;
    uInt     avail_in;
    uLong    total_in;
#line 87 "zlib.h"
    Bytef    *next_out;
    uInt     avail_out;
    uLong    total_out;
#line 91 "zlib.h"
    char     *msg;
    struct internal_state FAR *state;
#line 94 "zlib.h"
    alloc_func zalloc;
    free_func  zfree;
    voidpf     opaque;
#line 98 "zlib.h"
    int     data_type;
    uLong   adler;
    uLong   reserved;
} z_stream;
#line 103 "zlib.h"
typedef z_stream FAR *z_streamp;
#line 109 "zlib.h"
typedef struct gz_header_s {
    int     text;
    uLong   time;
    int     xflags;
    int     os;
    Bytef   *extra;
    uInt    extra_len;
    uInt    extra_max;
    Bytef   *name;
    uInt    name_max;
    Bytef   *comment;
    uInt    comm_max;
    int     hcrc;
    int     done;
#line 124 "zlib.h"
} gz_header;
#line 126 "zlib.h"
typedef gz_header FAR *gz_headerp;
#line 162 "zlib.h"
#define Z_NO_FLUSH      0
#define Z_PARTIAL_FLUSH 1
#define Z_SYNC_FLUSH    2
#define Z_FULL_FLUSH    3
#define Z_FINISH        4
#define Z_BLOCK         5
#line 170 "zlib.h"
#define Z_OK            0
#define Z_STREAM_END    1
#define Z_NEED_DICT     2
#define Z_ERRNO        (-1)
#define Z_STREAM_ERROR (-2)
#define Z_DATA_ERROR   (-3)
#define Z_MEM_ERROR    (-4)
#define Z_BUF_ERROR    (-5)
#define Z_VERSION_ERROR (-6)
#line 183 "zlib.h"
#define Z_NO_COMPRESSION         0
#define Z_BEST_SPEED             1
#define Z_BEST_COMPRESSION       9
#define Z_DEFAULT_COMPRESSION  (-1)
#line 189 "zlib.h"
#define Z_FILTERED            1
#define Z_HUFFMAN_ONLY        2
#define Z_RLE                 3
#define Z_FIXED               4
#define Z_DEFAULT_STRATEGY    0
#line 196 "zlib.h"
#define Z_BINARY   0
#define Z_TEXT     1
#define Z_ASCII    Z_TEXT
#define Z_UNKNOWN  2
#line 202 "zlib.h"
#define Z_DEFLATED   8
#line 205 "zlib.h"
#define Z_NULL  0
#line 207 "zlib.h"
#define zlib_version zlibVersion()
#line 212 "zlib.h"
ZEXTERN const char * ZEXPORT zlibVersion OF((void));
#line 242 "zlib.h"
ZEXTERN int ZEXPORT deflate OF((z_streamp strm, int flush));
#line 328 "zlib.h"
ZEXTERN int ZEXPORT deflateEnd OF((z_streamp strm));
#line 363 "zlib.h"
ZEXTERN int ZEXPORT inflate OF((z_streamp strm, int flush));
#line 462 "zlib.h"
ZEXTERN int ZEXPORT inflateEnd OF((z_streamp strm));
#line 538 "zlib.h"
ZEXTERN int ZEXPORT deflateSetDictionary OF((z_streamp strm,
                                             const Bytef *dictionary,
                                             uInt  dictLength));
#line 577 "zlib.h"
ZEXTERN int ZEXPORT deflateCopy OF((z_streamp dest,
                                    z_streamp source));
#line 595 "zlib.h"
ZEXTERN int ZEXPORT deflateReset OF((z_streamp strm));
#line 606 "zlib.h"
ZEXTERN int ZEXPORT deflateParams OF((z_streamp strm,
                                      int level,
                                      int strategy));
#line 627 "zlib.h"
ZEXTERN int ZEXPORT deflateTune OF((z_streamp strm,
                                    int good_length,
                                    int max_lazy,
                                    int nice_length,
                                    int max_chain));
#line 644 "zlib.h"
ZEXTERN uLong ZEXPORT deflateBound OF((z_streamp strm,
                                       uLong sourceLen));
#line 653 "zlib.h"
ZEXTERN int ZEXPORT deflatePrime OF((z_streamp strm,
                                     int bits,
                                     int value));
#line 669 "zlib.h"
ZEXTERN int ZEXPORT deflateSetHeader OF((z_streamp strm,
                                         gz_headerp head));
#line 736 "zlib.h"
ZEXTERN int ZEXPORT inflateSetDictionary OF((z_streamp strm,
                                             const Bytef *dictionary,
                                             uInt  dictLength));
#line 758 "zlib.h"
ZEXTERN int ZEXPORT inflateSync OF((z_streamp strm));
#line 773 "zlib.h"
ZEXTERN int ZEXPORT inflateCopy OF((z_streamp dest,
                                    z_streamp source));
#line 789 "zlib.h"
ZEXTERN int ZEXPORT inflateReset OF((z_streamp strm));
#line 799 "zlib.h"
ZEXTERN int ZEXPORT inflatePrime OF((z_streamp strm,
                                     int bits,
                                     int value));
#line 815 "zlib.h"
ZEXTERN int ZEXPORT inflateGetHeader OF((z_streamp strm,
                                         gz_headerp head));
#line 877 "zlib.h"
typedef unsigned (*in_func) OF((void FAR *, unsigned char FAR * FAR *));
typedef int (*out_func) OF((void FAR *, unsigned char FAR *, unsigned));
#line 880 "zlib.h"
ZEXTERN int ZEXPORT inflateBack OF((z_streamp strm,
                                    in_func in, void FAR *in_desc,
                                    out_func out, void FAR *out_desc));
#line 949 "zlib.h"
ZEXTERN int ZEXPORT inflateBackEnd OF((z_streamp strm));
#line 957 "zlib.h"
ZEXTERN uLong ZEXPORT zlibCompileFlags OF((void));
#line 1009 "zlib.h"
ZEXTERN int ZEXPORT compress OF((Bytef *dest,   uLongf *destLen,
                                 const Bytef *source, uLong sourceLen));
#line 1024 "zlib.h"
ZEXTERN int ZEXPORT compress2 OF((Bytef *dest,   uLongf *destLen,
                                  const Bytef *source, uLong sourceLen,
                                  int level));
#line 1040 "zlib.h"
ZEXTERN uLong ZEXPORT compressBound OF((uLong sourceLen));
#line 1047 "zlib.h"
ZEXTERN int ZEXPORT uncompress OF((Bytef *dest,   uLongf *destLen,
                                   const Bytef *source, uLong sourceLen));
#line 1066 "zlib.h"
typedef voidp gzFile;
#line 1068 "zlib.h"
ZEXTERN gzFile ZEXPORT gzopen  OF((const char *path, const char *mode));
#line 1085 "zlib.h"
ZEXTERN gzFile ZEXPORT gzdopen  OF((int fd, const char *mode));
#line 1098 "zlib.h"
ZEXTERN int ZEXPORT gzsetparams OF((gzFile file, int level, int strategy));
#line 1106 "zlib.h"
ZEXTERN int ZEXPORT    gzread  OF((gzFile file, voidp buf, unsigned len));
#line 1114 "zlib.h"
ZEXTERN int ZEXPORT    gzwrite OF((gzFile file,
                                   voidpc buf, unsigned len));
#line 1122 "zlib.h"
ZEXTERN int ZEXPORTVA   gzprintf OF((gzFile file, const char *format, ...));
#line 1135 "zlib.h"
ZEXTERN int ZEXPORT gzputs OF((gzFile file, const char *s));
#line 1142 "zlib.h"
ZEXTERN char * ZEXPORT gzgets OF((gzFile file, char *buf, int len));
#line 1151 "zlib.h"
ZEXTERN int ZEXPORT    gzputc OF((gzFile file, int c));
#line 1157 "zlib.h"
ZEXTERN int ZEXPORT    gzgetc OF((gzFile file));
#line 1163 "zlib.h"
ZEXTERN int ZEXPORT    gzungetc OF((int c, gzFile file));
#line 1173 "zlib.h"
ZEXTERN int ZEXPORT    gzflush OF((gzFile file, int flush));
#line 1183 "zlib.h"
ZEXTERN z_off_t ZEXPORT    gzseek OF((gzFile file,
                                      z_off_t offset, int whence));
#line 1201 "zlib.h"
ZEXTERN int ZEXPORT    gzrewind OF((gzFile file));
#line 1208 "zlib.h"
ZEXTERN z_off_t ZEXPORT    gztell OF((gzFile file));
#line 1217 "zlib.h"
ZEXTERN int ZEXPORT gzeof OF((gzFile file));
#line 1223 "zlib.h"
ZEXTERN int ZEXPORT gzdirect OF((gzFile file));
#line 1229 "zlib.h"
ZEXTERN int ZEXPORT    gzclose OF((gzFile file));
#line 1236 "zlib.h"
ZEXTERN const char * ZEXPORT gzerror OF((gzFile file, int *errnum));
#line 1245 "zlib.h"
ZEXTERN void ZEXPORT gzclearerr OF((gzFile file));
#line 1260 "zlib.h"
ZEXTERN uLong ZEXPORT adler32 OF((uLong adler, const Bytef *buf, uInt len));
#line 1276 "zlib.h"
ZEXTERN uLong ZEXPORT adler32_combine OF((uLong adler1, uLong adler2,
                                          z_off_t len2));
#line 1285 "zlib.h"
ZEXTERN uLong ZEXPORT crc32   OF((uLong crc, const Bytef *buf, uInt len));
#line 1301 "zlib.h"
ZEXTERN uLong ZEXPORT crc32_combine OF((uLong crc1, uLong crc2, z_off_t len2));
#line 1317 "zlib.h"
ZEXTERN int ZEXPORT deflateInit_ OF((z_streamp strm, int level,
                                     const char *version, int stream_size));
ZEXTERN int ZEXPORT inflateInit_ OF((z_streamp strm,
                                     const char *version, int stream_size));
ZEXTERN int ZEXPORT deflateInit2_ OF((z_streamp strm, int  level, int  method,
                                      int windowBits, int memLevel,
                                      int strategy, const char *version,
                                      int stream_size));
ZEXTERN int ZEXPORT inflateInit2_ OF((z_streamp strm, int  windowBits,
                                      const char *version, int stream_size));
ZEXTERN int ZEXPORT inflateBackInit_ OF((z_streamp strm, int windowBits,
                                         unsigned char FAR *window,
                                         const char *version,
                                         int stream_size));
#define deflateInit(strm, level)  deflateInit_((strm), (level),       ZLIB_VERSION, sizeof(z_stream))
#line 1333 "zlib.h"
#define inflateInit(strm)  inflateInit_((strm),                ZLIB_VERSION, sizeof(z_stream))
#line 1335 "zlib.h"
#define deflateInit2(strm, level, method, windowBits, memLevel, strategy)  deflateInit2_((strm),(level),(method),(windowBits),(memLevel), (strategy),           ZLIB_VERSION, sizeof(z_stream))
#line 1338 "zlib.h"
#define inflateInit2(strm, windowBits)  inflateInit2_((strm), (windowBits), ZLIB_VERSION, sizeof(z_stream))
#line 1340 "zlib.h"
#define inflateBackInit(strm, windowBits, window)  inflateBackInit_((strm), (windowBits), (window),  ZLIB_VERSION, sizeof(z_stream))
#line 1345 "zlib.h"
#if !defined(ZUTIL_H) && !defined(NO_DUMMY_DECL)
    struct internal_state {int dummy;};
#endif
#line 1349 "zlib.h"
ZEXTERN const char   * ZEXPORT zError           OF((int));
ZEXTERN int            ZEXPORT inflateSyncPoint OF((z_streamp z));
ZEXTERN const uLongf * ZEXPORT get_crc_table    OF((void));
#line 1353 "zlib.h"
#ifdef __cplusplus
}
#endif
#line 1357 "zlib.h"
#endif
#line 9 "ioapi.h"
#ifndef _ZLIBIOAPI_H
#define _ZLIBIOAPI_H
#line 13 "ioapi.h"
#define ZLIB_FILEFUNC_SEEK_CUR (1)
#define ZLIB_FILEFUNC_SEEK_END (2)
#define ZLIB_FILEFUNC_SEEK_SET (0)
#line 17 "ioapi.h"
#define ZLIB_FILEFUNC_MODE_READ      (1)
#define ZLIB_FILEFUNC_MODE_WRITE     (2)
#define ZLIB_FILEFUNC_MODE_READWRITEFILTER (3)
#line 21 "ioapi.h"
#define ZLIB_FILEFUNC_MODE_EXISTING (4)
#define ZLIB_FILEFUNC_MODE_CREATE   (8)
#line 25 "ioapi.h"
#ifndef ZCALLBACK
#line 27 "ioapi.h"
#if (defined(WIN32) || defined (WINDOWS) || defined (_WINDOWS)) && defined(CALLBACK) && defined (USEWINDOWS_CALLBACK)
#define ZCALLBACK CALLBACK
#else
#define ZCALLBACK
#endif
#endif
#line 34 "ioapi.h"
#ifdef __cplusplus
extern "C" {
#endif
#line 38 "ioapi.h"
typedef voidpf (ZCALLBACK *open_file_func) OF((voidpf opaque, const char* filename, int mode));
typedef uLong  (ZCALLBACK *read_file_func) OF((voidpf opaque, voidpf stream, void* buf, uLong size));
typedef uLong  (ZCALLBACK *write_file_func) OF((voidpf opaque, voidpf stream, const void* buf, uLong size));
typedef long   (ZCALLBACK *tell_file_func) OF((voidpf opaque, voidpf stream));
typedef long   (ZCALLBACK *seek_file_func) OF((voidpf opaque, voidpf stream, uLong offset, int origin));
typedef int    (ZCALLBACK *close_file_func) OF((voidpf opaque, voidpf stream));
typedef int    (ZCALLBACK *testerror_file_func) OF((voidpf opaque, voidpf stream));
#line 46 "ioapi.h"
typedef struct zlib_filefunc_def_s
{
    open_file_func      zopen_file;
    read_file_func      zread_file;
    write_file_func     zwrite_file;
    tell_file_func      ztell_file;
    seek_file_func      zseek_file;
    close_file_func     zclose_file;
    testerror_file_func zerror_file;
    voidpf              opaque;
} zlib_filefunc_def;
#line 60 "ioapi.h"
void fill_fopen_filefunc OF((zlib_filefunc_def* pzlib_filefunc_def));
#line 62 "ioapi.h"
#define ZREAD(filefunc,filestream,buf,size) ((*((filefunc).zread_file))((filefunc).opaque,filestream,buf,size))
#define ZWRITE(filefunc,filestream,buf,size) ((*((filefunc).zwrite_file))((filefunc).opaque,filestream,buf,size))
#define ZTELL(filefunc,filestream) ((*((filefunc).ztell_file))((filefunc).opaque,filestream))
#define ZSEEK(filefunc,filestream,pos,mode) ((*((filefunc).zseek_file))((filefunc).opaque,filestream,pos,mode))
#define ZCLOSE(filefunc,filestream) ((*((filefunc).zclose_file))((filefunc).opaque,filestream))
#define ZERROR(filefunc,filestream) ((*((filefunc).zerror_file))((filefunc).opaque,filestream))
#line 70 "ioapi.h"
#ifdef __cplusplus
}
#endif
#line 74 "ioapi.h"
#endif
#line 46 "zip.h"
#ifndef _zip_H
#define _zip_H
#line 49 "zip.h"
#ifdef __cplusplus
extern "C" {
#endif
#line 53 "zip.h"
#ifndef _ZLIB_H
#line 55 "zip.h"
#endif
#line 57 "zip.h"
#ifndef _ZLIBIOAPI_H
#line 59 "zip.h"
#endif
#line 61 "zip.h"
#if defined(STRICTZIP) || defined(STRICTZIPUNZIP)
#line 64 "zip.h"
typedef struct TagzipFile__ { int unused; } zipFile__;
typedef zipFile__ *zipFile;
#else
typedef voidp zipFile;
#endif
#line 70 "zip.h"
#define ZIP_OK                          (0)
#define ZIP_EOF                         (0)
#define ZIP_ERRNO                       (Z_ERRNO)
#define ZIP_PARAMERROR                  (-102)
#define ZIP_BADZIPFILE                  (-103)
#define ZIP_INTERNALERROR               (-104)
#line 77 "zip.h"
#ifndef DEF_MEM_LEVEL
#  if MAX_MEM_LEVEL >= 8
#    define DEF_MEM_LEVEL 8
#  else
#    define DEF_MEM_LEVEL  MAX_MEM_LEVEL
#  endif
#endif
#line 87 "zip.h"
typedef struct tm_zip_s
{
    uInt tm_sec;
    uInt tm_min;
    uInt tm_hour;
    uInt tm_mday;
    uInt tm_mon;
    uInt tm_year;
} tm_zip;
#line 97 "zip.h"
typedef struct
{
    tm_zip      tmz_date;
    uLong       dosDate;
#line 103 "zip.h"
    uLong       internal_fa;
    uLong       external_fa;
} zip_fileinfo;
#line 107 "zip.h"
typedef const char* zipcharpc;
#line 110 "zip.h"
#define APPEND_STATUS_CREATE        (0)
#define APPEND_STATUS_CREATEAFTER   (1)
#define APPEND_STATUS_ADDINZIP      (2)
#line 114 "zip.h"
extern zipFile ZEXPORT zipOpen OF((const char *pathname, int append));
#line 134 "zip.h"
extern zipFile ZEXPORT zipOpen2 OF((const char *pathname,
                                   int append,
                                   zipcharpc* globalcomment,
                                   zlib_filefunc_def* pzlib_filefunc_def));
#line 139 "zip.h"
extern int ZEXPORT zipOpenNewFileInZip OF((zipFile file,
                       const char* filename,
                       const zip_fileinfo* zipfi,
                       const void* extrafield_local,
                       uInt size_extrafield_local,
                       const void* extrafield_global,
                       uInt size_extrafield_global,
                       const char* comment,
                       int method,
                       int level));
#line 163 "zip.h"
extern int ZEXPORT zipOpenNewFileInZip2 OF((zipFile file,
                                            const char* filename,
                                            const zip_fileinfo* zipfi,
                                            const void* extrafield_local,
                                            uInt size_extrafield_local,
                                            const void* extrafield_global,
                                            uInt size_extrafield_global,
                                            const char* comment,
                                            int method,
                                            int level,
                                            int raw));
#line 179 "zip.h"
extern int ZEXPORT zipOpenNewFileInZip3 OF((zipFile file,
                                            const char* filename,
                                            const zip_fileinfo* zipfi,
                                            const void* extrafield_local,
                                            uInt size_extrafield_local,
                                            const void* extrafield_global,
                                            uInt size_extrafield_global,
                                            const char* comment,
                                            int method,
                                            int level,
                                            int raw,
                                            int windowBits,
                                            int memLevel,
                                            int strategy,
                                            const char* password,
                                            uLong crcForCtypting));
#line 204 "zip.h"
extern int ZEXPORT zipWriteInFileInZip OF((zipFile file,
                       const void* buf,
                       unsigned len));
#line 211 "zip.h"
extern int ZEXPORT zipCloseFileInZip OF((zipFile file));
#line 216 "zip.h"
extern int ZEXPORT zipCloseFileInZipRaw OF((zipFile file,
                                            uLong uncompressed_size,
                                            uLong crc32));
#line 225 "zip.h"
extern int ZEXPORT zipClose OF((zipFile file,
                const char* global_comment));
#line 231 "zip.h"
#ifdef __cplusplus
}
#endif
#line 235 "zip.h"
#endif
#line 13 "zip.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#line 20 "zip.c"
#ifdef STDC
#  include <stddef.h>
#  include <string.h>
#  include <stdlib.h>
#endif
#ifdef NO_ERRNO_H
    extern int errno;
#else
#   include <errno.h>
#endif
#line 32 "zip.c"
#ifndef local
#  define local static
#endif
#line 37 "zip.c"
#ifndef VERSIONMADEBY
# define VERSIONMADEBY   (0x0)
#endif
#line 41 "zip.c"
#ifndef Z_BUFSIZE
#define Z_BUFSIZE (16384)
#endif
#line 45 "zip.c"
#ifndef Z_MAXFILENAMEINZIP
#define Z_MAXFILENAMEINZIP (256)
#endif
#line 49 "zip.c"
#ifndef ALLOC
# define ALLOC(size) (malloc(size))
#endif
#ifndef TRYFREE
# define TRYFREE(p) {if (p) free(p);}
#endif
#line 63 "zip.c"
#ifndef SEEK_CUR
#define SEEK_CUR    1
#endif
#line 67 "zip.c"
#ifndef SEEK_END
#define SEEK_END    2
#endif
#line 71 "zip.c"
#ifndef SEEK_SET
#define SEEK_SET    0
#endif
#line 75 "zip.c"
#ifndef DEF_MEM_LEVEL
#if MAX_MEM_LEVEL >= 8
#  define DEF_MEM_LEVEL 8
#else
#  define DEF_MEM_LEVEL  MAX_MEM_LEVEL
#endif
#endif
const char zip_copyright[] =
   " zip 1.01 Copyright 1998-2004 Gilles Vollant - http://www.winimage.com/zLibDll";
#line 86 "zip.c"
#define SIZEDATA_INDATABLOCK (4096-(4*4))
#line 88 "zip.c"
#define LOCALHEADERMAGIC    (0x04034b50)
#define CENTRALHEADERMAGIC  (0x02014b50)
#define ENDHEADERMAGIC      (0x06054b50)
#line 92 "zip.c"
#define FLAG_LOCALHEADER_OFFSET (0x06)
#define CRC_LOCALHEADER_OFFSET  (0x0e)
#line 95 "zip.c"
#define SIZECENTRALHEADER (0x2e)
#line 97 "zip.c"
typedef struct linkedlist_datablock_internal_s
{
  struct linkedlist_datablock_internal_s* next_datablock;
  uLong  avail_in_this_block;
  uLong  filled_in_this_block;
  uLong  unused;
  unsigned char data[SIZEDATA_INDATABLOCK];
} linkedlist_datablock_internal;
#line 106 "zip.c"
typedef struct linkedlist_data_s
{
    linkedlist_datablock_internal* first_block;
    linkedlist_datablock_internal* last_block;
} linkedlist_data;
#line 113 "zip.c"
typedef struct
{
    z_stream stream;
    int  stream_initialised;
    uInt pos_in_buffered_data;
#line 119 "zip.c"
    uLong pos_local_header;
#line 121 "zip.c"
    char* central_header;
    uLong size_centralheader;
    uLong flag;
#line 125 "zip.c"
    int  method;
    int  raw;
    Byte buffered_data[Z_BUFSIZE];
    uLong dosDate;
    uLong crc32;
    int  encrypt;
#ifndef NOCRYPT
    unsigned long keys[3];
    const unsigned long* pcrc_32_tab;
    int crypt_header_size;
#endif
} curfile_info;
#line 138 "zip.c"
typedef struct
{
    zlib_filefunc_def z_filefunc;
    voidpf filestream;
    linkedlist_data central_dir;
    int  in_opened_file_inzip;
    curfile_info ci;
#line 146 "zip.c"
    uLong begin_pos;
    uLong add_position_when_writting_offset;
    uLong number_entry;
#ifndef NO_ADDFILEINEXISTINGZIP
    char *globalcomment;
#endif
} zip_internal;
#line 156 "zip.c"
#ifndef NOCRYPT
#define INCLUDECRYPTINGCODE_IFCRYPTALLOWED
#line 30 "crypt.h"
#define CRC32(c, b) ((*(pcrc_32_tab+(((int)(c) ^ (b)) & 0xff))) ^ ((c) >> 8))
#line 35 "crypt.h"
static int decrypt_byte(unsigned long* pkeys, const unsigned long* pcrc_32_tab)
{
    unsigned temp;
#line 41 "crypt.h"
    temp = ((unsigned)(*(pkeys+2)) & 0xffff) | 2;
    return (int)(((temp * (temp ^ 1)) >> 8) & 0xff);
}
#line 48 "crypt.h"
static int update_keys(unsigned long* pkeys,const unsigned long* pcrc_32_tab,int c)
{
    (*(pkeys+0)) = CRC32((*(pkeys+0)), c);
    (*(pkeys+1)) += (*(pkeys+0)) & 0xff;
    (*(pkeys+1)) = (*(pkeys+1)) * 134775813L + 1;
    {
      register int keyshift = (int)((*(pkeys+1)) >> 24);
      (*(pkeys+2)) = CRC32((*(pkeys+2)), keyshift);
    }
    return c;
}
#line 65 "crypt.h"
static void init_keys(const char* passwd,unsigned long* pkeys,const unsigned long* pcrc_32_tab)
{
    *(pkeys+0) = 305419896L;
    *(pkeys+1) = 591751049L;
    *(pkeys+2) = 878082192L;
    while (*passwd != '\0') {
        update_keys(pkeys,pcrc_32_tab,(int)*passwd);
        passwd++;
    }
}
#line 76 "crypt.h"
#define zdecode(pkeys,pcrc_32_tab,c)  (update_keys(pkeys,pcrc_32_tab,c ^= decrypt_byte(pkeys,pcrc_32_tab)))
#line 79 "crypt.h"
#define zencode(pkeys,pcrc_32_tab,c,t)  (t=decrypt_byte(pkeys,pcrc_32_tab), update_keys(pkeys,pcrc_32_tab,c), t^(c))
#line 82 "crypt.h"
#ifdef INCLUDECRYPTINGCODE_IFCRYPTALLOWED
#line 84 "crypt.h"
#define RAND_HEAD_LEN  12
#line 86 "crypt.h"
#  ifndef ZCR_SEED2
#    define ZCR_SEED2 3141592654UL
#  endif
#line 90 "crypt.h"
static int crypthead(const char *passwd, unsigned char *buf, int bufSize, unsigned long *pkeys, const unsigned long *pcrc_32_tab, unsigned long crcForCrypting)
#line 97 "crypt.h"
{
    int n;
    int t;
    int c;
    unsigned char header[RAND_HEAD_LEN-2];
    static unsigned calls = 0;
#line 104 "crypt.h"
    if (bufSize<RAND_HEAD_LEN)
      return 0;
#line 111 "crypt.h"
    if (++calls == 1)
    {
        srand((unsigned)(time(NULL) ^ ZCR_SEED2));
    }
    init_keys(passwd, pkeys, pcrc_32_tab);
    for (n = 0; n < RAND_HEAD_LEN-2; n++)
    {
        c = (rand() >> 7) & 0xff;
        header[n] = (unsigned char)zencode(pkeys, pcrc_32_tab, c, t);
    }
#line 122 "crypt.h"
    init_keys(passwd, pkeys, pcrc_32_tab);
    for (n = 0; n < RAND_HEAD_LEN-2; n++)
    {
        buf[n] = (unsigned char)zencode(pkeys, pcrc_32_tab, header[n], t);
    }
    buf[n++] = zencode(pkeys, pcrc_32_tab, (int)(crcForCrypting >> 16) & 0xff, t);
    buf[n++] = zencode(pkeys, pcrc_32_tab, (int)(crcForCrypting >> 24) & 0xff, t);
    return n;
}
#line 132 "crypt.h"
#endif
#line 159 "zip.c"
#endif
#line 161 "zip.c"
local linkedlist_datablock_internal* allocate_new_datablock()
{
    linkedlist_datablock_internal* ldi;
    ldi = (linkedlist_datablock_internal*)
                 ALLOC(sizeof(linkedlist_datablock_internal));
    if (ldi!=NULL)
    {
        ldi->next_datablock = NULL ;
        ldi->filled_in_this_block = 0 ;
        ldi->avail_in_this_block = SIZEDATA_INDATABLOCK ;
    }
    return ldi;
}
#line 175 "zip.c"
local void free_datablock(linkedlist_datablock_internal *ldi)
#line 177 "zip.c"
{
    while (ldi!=NULL)
    {
        linkedlist_datablock_internal* ldinext = ldi->next_datablock;
        TRYFREE(ldi);
        ldi = ldinext;
    }
}
#line 186 "zip.c"
local void init_linkedlist(linkedlist_data *ll)
#line 188 "zip.c"
{
    ll->first_block = ll->last_block = NULL;
}
#line 192 "zip.c"
local void free_linkedlist(linkedlist_data *ll)
#line 194 "zip.c"
{
    free_datablock(ll->first_block);
    ll->first_block = ll->last_block = NULL;
}
#line 200 "zip.c"
local int add_data_in_datablock(linkedlist_data *ll, const void *buf, uLong len)
#line 204 "zip.c"
{
    linkedlist_datablock_internal* ldi;
    const unsigned char* from_copy;
#line 208 "zip.c"
    if (ll==NULL)
        return ZIP_INTERNALERROR;
#line 211 "zip.c"
    if (ll->last_block == NULL)
    {
        ll->first_block = ll->last_block = allocate_new_datablock();
        if (ll->first_block == NULL)
            return ZIP_INTERNALERROR;
    }
#line 218 "zip.c"
    ldi = ll->last_block;
    from_copy = (unsigned char*)buf;
#line 221 "zip.c"
    while (len>0)
    {
        uInt copy_this;
        uInt i;
        unsigned char* to_copy;
#line 227 "zip.c"
        if (ldi->avail_in_this_block==0)
        {
            ldi->next_datablock = allocate_new_datablock();
            if (ldi->next_datablock == NULL)
                return ZIP_INTERNALERROR;
            ldi = ldi->next_datablock ;
            ll->last_block = ldi;
        }
#line 236 "zip.c"
        if (ldi->avail_in_this_block < len)
            copy_this = (uInt)ldi->avail_in_this_block;
        else
            copy_this = (uInt)len;
#line 241 "zip.c"
        to_copy = &(ldi->data[ldi->filled_in_this_block]);
#line 243 "zip.c"
        for (i=0;i<copy_this;i++)
            *(to_copy+i)=*(from_copy+i);
#line 246 "zip.c"
        ldi->filled_in_this_block += copy_this;
        ldi->avail_in_this_block -= copy_this;
        from_copy += copy_this ;
        len -= copy_this;
    }
    return ZIP_OK;
}
#line 258 "zip.c"
#ifndef NO_ADDFILEINEXISTINGZIP
#line 264 "zip.c"
local int ziplocal_putValue OF((const zlib_filefunc_def* pzlib_filefunc_def,
                                voidpf filestream, uLong x, int nbByte));
local int ziplocal_putValue (const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, uLong x, int nbByte)
#line 271 "zip.c"
{
    unsigned char buf[4];
    int n;
    for (n = 0; n < nbByte; n++)
    {
        buf[n] = (unsigned char)(x & 0xff);
        x >>= 8;
    }
    if (x != 0)
      {
      for (n = 0; n < nbByte; n++)
        {
          buf[n] = 0xff;
        }
      }
#line 287 "zip.c"
    if (ZWRITE(*pzlib_filefunc_def,filestream,buf,nbByte)!=(uLong)nbByte)
        return ZIP_ERRNO;
    else
        return ZIP_OK;
}
#line 293 "zip.c"
local void ziplocal_putValue_inmemory OF((void* dest, uLong x, int nbByte));
local void ziplocal_putValue_inmemory (void *dest, uLong x, int nbByte)
#line 298 "zip.c"
{
    unsigned char* buf=(unsigned char*)dest;
    int n;
    for (n = 0; n < nbByte; n++) {
        buf[n] = (unsigned char)(x & 0xff);
        x >>= 8;
    }
#line 306 "zip.c"
    if (x != 0)
    {
       for (n = 0; n < nbByte; n++)
       {
          buf[n] = 0xff;
       }
    }
}
#line 318 "zip.c"
local uLong ziplocal_TmzDateToDosDate(const tm_zip *ptm, uLong dosDate)
#line 321 "zip.c"
{
    uLong year = (uLong)ptm->tm_year;
    if (year>1980)
        year-=1980;
    else if (year>80)
        year-=80;
    return
      (uLong) (((ptm->tm_mday) + (32 * (ptm->tm_mon+1)) + (512 * year)) << 16) |
        ((ptm->tm_sec/2) + (32* ptm->tm_min) + (2048 * (uLong)ptm->tm_hour));
}
#line 335 "zip.c"
local int ziplocal_getByte OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream,
    int *pi));
#line 340 "zip.c"
local int ziplocal_getByte(const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, int *pi)
#line 344 "zip.c"
{
    unsigned char c;
    int err = (int)ZREAD(*pzlib_filefunc_def,filestream,&c,1);
    if (err==1)
    {
        *pi = (int)c;
        return ZIP_OK;
    }
    else
    {
        if (ZERROR(*pzlib_filefunc_def,filestream))
            return ZIP_ERRNO;
        else
            return ZIP_EOF;
    }
}
#line 365 "zip.c"
local int ziplocal_getShort OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream,
    uLong *pX));
#line 370 "zip.c"
local int ziplocal_getShort (const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, uLong *pX)
#line 374 "zip.c"
{
    uLong x ;
    int i;
    int err;
#line 379 "zip.c"
    err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x = (uLong)i;
#line 382 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<8;
#line 386 "zip.c"
    if (err==ZIP_OK)
        *pX = x;
    else
        *pX = 0;
    return err;
}
#line 393 "zip.c"
local int ziplocal_getLong OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream,
    uLong *pX));
#line 398 "zip.c"
local int ziplocal_getLong (const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, uLong *pX)
#line 402 "zip.c"
{
    uLong x ;
    int i;
    int err;
#line 407 "zip.c"
    err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x = (uLong)i;
#line 410 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<8;
#line 414 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<16;
#line 418 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<24;
#line 422 "zip.c"
    if (err==ZIP_OK)
        *pX = x;
    else
        *pX = 0;
    return err;
}
#line 429 "zip.c"
#ifndef BUFREADCOMMENT
#define BUFREADCOMMENT (0x400)
#endif
#line 436 "zip.c"
local uLong ziplocal_SearchCentralDir OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream));
#line 440 "zip.c"
local uLong ziplocal_SearchCentralDir(const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream)
#line 443 "zip.c"
{
    unsigned char* buf;
    uLong uSizeFile;
    uLong uBackRead;
    uLong uMaxBack=0xffff;
    uLong uPosFound=0;
#line 450 "zip.c"
    if (ZSEEK(*pzlib_filefunc_def,filestream,0,ZLIB_FILEFUNC_SEEK_END) != 0)
        return 0;
#line 454 "zip.c"
    uSizeFile = ZTELL(*pzlib_filefunc_def,filestream);
#line 456 "zip.c"
    if (uMaxBack>uSizeFile)
        uMaxBack = uSizeFile;
#line 459 "zip.c"
    buf = (unsigned char*)ALLOC(BUFREADCOMMENT+4);
    if (buf==NULL)
        return 0;
#line 463 "zip.c"
    uBackRead = 4;
    while (uBackRead<uMaxBack)
    {
        uLong uReadSize,uReadPos ;
        int i;
        if (uBackRead+BUFREADCOMMENT>uMaxBack)
            uBackRead = uMaxBack;
        else
            uBackRead+=BUFREADCOMMENT;
        uReadPos = uSizeFile-uBackRead ;
#line 474 "zip.c"
        uReadSize = ((BUFREADCOMMENT+4) < (uSizeFile-uReadPos)) ?
                     (BUFREADCOMMENT+4) : (uSizeFile-uReadPos);
        if (ZSEEK(*pzlib_filefunc_def,filestream,uReadPos,ZLIB_FILEFUNC_SEEK_SET)!=0)
            break;
#line 479 "zip.c"
        if (ZREAD(*pzlib_filefunc_def,filestream,buf,uReadSize)!=uReadSize)
            break;
#line 482 "zip.c"
        for (i=(int)uReadSize-3; (i--)>0;)
            if (((*(buf+i))==0x50) && ((*(buf+i+1))==0x4b) &&
                ((*(buf+i+2))==0x05) && ((*(buf+i+3))==0x06))
            {
                uPosFound = uReadPos+i;
                break;
            }
#line 490 "zip.c"
        if (uPosFound!=0)
            break;
    }
    TRYFREE(buf);
    return uPosFound;
}
#endif
#line 499 "zip.c"
extern zipFile ZEXPORT zipOpen2 (const char *pathname, int append, zipcharpc *globalcomment, zlib_filefunc_def *pzlib_filefunc_def)
#line 504 "zip.c"
{
    zip_internal ziinit;
    zip_internal* zi;
    int err=ZIP_OK;
#line 510 "zip.c"
    if (pzlib_filefunc_def==NULL)
        fill_fopen_filefunc(&ziinit.z_filefunc);
    else
        ziinit.z_filefunc = *pzlib_filefunc_def;
#line 515 "zip.c"
    ziinit.filestream = (*(ziinit.z_filefunc.zopen_file))
                 (ziinit.z_filefunc.opaque,
                  pathname,
                  (append == APPEND_STATUS_CREATE) ?
                  (ZLIB_FILEFUNC_MODE_READ | ZLIB_FILEFUNC_MODE_WRITE | ZLIB_FILEFUNC_MODE_CREATE) :
                    (ZLIB_FILEFUNC_MODE_READ | ZLIB_FILEFUNC_MODE_WRITE | ZLIB_FILEFUNC_MODE_EXISTING));
#line 522 "zip.c"
    if (ziinit.filestream == NULL)
        return NULL;
    ziinit.begin_pos = ZTELL(ziinit.z_filefunc,ziinit.filestream);
    ziinit.in_opened_file_inzip = 0;
    ziinit.ci.stream_initialised = 0;
    ziinit.number_entry = 0;
    ziinit.add_position_when_writting_offset = 0;
    init_linkedlist(&(ziinit.central_dir));
#line 532 "zip.c"
    zi = (zip_internal*)ALLOC(sizeof(zip_internal));
    if (zi==NULL)
    {
        ZCLOSE(ziinit.z_filefunc,ziinit.filestream);
        return NULL;
    }
#line 540 "zip.c"
#    ifndef NO_ADDFILEINEXISTINGZIP
    ziinit.globalcomment = NULL;
    if (append == APPEND_STATUS_ADDINZIP)
    {
        uLong byte_before_the_zipfile;
#line 546 "zip.c"
        uLong size_central_dir;
        uLong offset_central_dir;
        uLong central_pos,uL;
#line 550 "zip.c"
        uLong number_disk;
#line 552 "zip.c"
        uLong number_disk_with_CD;
#line 554 "zip.c"
        uLong number_entry;
        uLong number_entry_CD;
#line 558 "zip.c"
        uLong size_comment;
#line 560 "zip.c"
        central_pos = ziplocal_SearchCentralDir(&ziinit.z_filefunc,ziinit.filestream);
        if (central_pos==0)
            err=ZIP_ERRNO;
#line 564 "zip.c"
        if (ZSEEK(ziinit.z_filefunc, ziinit.filestream,
                                        central_pos,ZLIB_FILEFUNC_SEEK_SET)!=0)
            err=ZIP_ERRNO;
#line 569 "zip.c"
        if (ziplocal_getLong(&ziinit.z_filefunc, ziinit.filestream,&uL)!=ZIP_OK)
            err=ZIP_ERRNO;
#line 573 "zip.c"
        if (ziplocal_getShort(&ziinit.z_filefunc, ziinit.filestream,&number_disk)!=ZIP_OK)
            err=ZIP_ERRNO;
#line 577 "zip.c"
        if (ziplocal_getShort(&ziinit.z_filefunc, ziinit.filestream,&number_disk_with_CD)!=ZIP_OK)
            err=ZIP_ERRNO;
#line 581 "zip.c"
        if (ziplocal_getShort(&ziinit.z_filefunc, ziinit.filestream,&number_entry)!=ZIP_OK)
            err=ZIP_ERRNO;
#line 585 "zip.c"
        if (ziplocal_getShort(&ziinit.z_filefunc, ziinit.filestream,&number_entry_CD)!=ZIP_OK)
            err=ZIP_ERRNO;
#line 588 "zip.c"
        if ((number_entry_CD!=number_entry) ||
            (number_disk_with_CD!=0) ||
            (number_disk!=0))
            err=ZIP_BADZIPFILE;
#line 594 "zip.c"
        if (ziplocal_getLong(&ziinit.z_filefunc, ziinit.filestream,&size_central_dir)!=ZIP_OK)
            err=ZIP_ERRNO;
#line 599 "zip.c"
        if (ziplocal_getLong(&ziinit.z_filefunc, ziinit.filestream,&offset_central_dir)!=ZIP_OK)
            err=ZIP_ERRNO;
#line 603 "zip.c"
        if (ziplocal_getShort(&ziinit.z_filefunc, ziinit.filestream,&size_comment)!=ZIP_OK)
            err=ZIP_ERRNO;
#line 606 "zip.c"
        if ((central_pos<offset_central_dir+size_central_dir) &&
            (err==ZIP_OK))
            err=ZIP_BADZIPFILE;
#line 610 "zip.c"
        if (err!=ZIP_OK)
        {
            ZCLOSE(ziinit.z_filefunc, ziinit.filestream);
            return NULL;
        }
#line 616 "zip.c"
        if (size_comment>0)
        {
            ziinit.globalcomment = (char*)ALLOC(size_comment+1);
            if (ziinit.globalcomment)
            {
               size_comment = ZREAD(ziinit.z_filefunc, ziinit.filestream,ziinit.globalcomment,size_comment);
               ziinit.globalcomment[size_comment]=0;
            }
        }
#line 626 "zip.c"
        byte_before_the_zipfile = central_pos -
                                (offset_central_dir+size_central_dir);
        ziinit.add_position_when_writting_offset = byte_before_the_zipfile;
#line 630 "zip.c"
        {
            uLong size_central_dir_to_read = size_central_dir;
            size_t buf_size = SIZEDATA_INDATABLOCK;
            void* buf_read = (void*)ALLOC(buf_size);
            if (ZSEEK(ziinit.z_filefunc, ziinit.filestream,
                  offset_central_dir + byte_before_the_zipfile,
                  ZLIB_FILEFUNC_SEEK_SET) != 0)
                  err=ZIP_ERRNO;
#line 639 "zip.c"
            while ((size_central_dir_to_read>0) && (err==ZIP_OK))
            {
                uLong read_this = SIZEDATA_INDATABLOCK;
                if (read_this > size_central_dir_to_read)
                    read_this = size_central_dir_to_read;
                if (ZREAD(ziinit.z_filefunc, ziinit.filestream,buf_read,read_this) != read_this)
                    err=ZIP_ERRNO;
#line 647 "zip.c"
                if (err==ZIP_OK)
                    err = add_data_in_datablock(&ziinit.central_dir,buf_read,
                                                (uLong)read_this);
                size_central_dir_to_read-=read_this;
            }
            TRYFREE(buf_read);
        }
        ziinit.begin_pos = byte_before_the_zipfile;
        ziinit.number_entry = number_entry_CD;
#line 657 "zip.c"
        if (ZSEEK(ziinit.z_filefunc, ziinit.filestream,
                  offset_central_dir+byte_before_the_zipfile,ZLIB_FILEFUNC_SEEK_SET)!=0)
            err=ZIP_ERRNO;
    }
#line 662 "zip.c"
    if (globalcomment)
    {
      *globalcomment = ziinit.globalcomment;
    }
#    endif
#line 668 "zip.c"
    if (err != ZIP_OK)
    {
#    ifndef NO_ADDFILEINEXISTINGZIP
        TRYFREE(ziinit.globalcomment);
#    endif
        TRYFREE(zi);
        return NULL;
    }
    else
    {
        *zi = ziinit;
        return (zipFile)zi;
    }
}
#line 683 "zip.c"
extern zipFile ZEXPORT zipOpen (const char *pathname, int append)
#line 686 "zip.c"
{
    return zipOpen2(pathname,append,NULL,NULL);
}
#line 690 "zip.c"
extern int ZEXPORT zipOpenNewFileInZip3 (zipFile file, const char *filename, const zip_fileinfo *zipfi, const void *extrafield_local, uInt size_extrafield_local, const void *extrafield_global, uInt size_extrafield_global, const char *comment, int method, int level, int raw, int windowBits, int memLevel, int strategy, const char *password, uLong crcForCrypting)
#line 712 "zip.c"
{
    zip_internal* zi;
    uInt size_filename;
    uInt size_comment;
    uInt i;
    int err = ZIP_OK;
#line 719 "zip.c"
#    ifdef NOCRYPT
    if (password != NULL)
        return ZIP_PARAMERROR;
#    endif
#line 724 "zip.c"
    if (file == NULL)
        return ZIP_PARAMERROR;
    if ((method!=0) && (method!=Z_DEFLATED))
        return ZIP_PARAMERROR;
#line 729 "zip.c"
    zi = (zip_internal*)file;
#line 731 "zip.c"
    if (zi->in_opened_file_inzip == 1)
    {
        err = zipCloseFileInZip (file);
        if (err != ZIP_OK)
            return err;
    }
#line 739 "zip.c"
    if (filename==NULL)
        filename="-";
#line 742 "zip.c"
    if (comment==NULL)
        size_comment = 0;
    else
        size_comment = (uInt)strlen(comment);
#line 747 "zip.c"
    size_filename = (uInt)strlen(filename);
#line 749 "zip.c"
    if (zipfi == NULL)
        zi->ci.dosDate = 0;
    else
    {
        if (zipfi->dosDate != 0)
            zi->ci.dosDate = zipfi->dosDate;
        else zi->ci.dosDate = ziplocal_TmzDateToDosDate(&zipfi->tmz_date,zipfi->dosDate);
    }
#line 758 "zip.c"
    zi->ci.flag = 0;
    if ((level==8) || (level==9))
      zi->ci.flag |= 2;
    if ((level==2))
      zi->ci.flag |= 4;
    if ((level==1))
      zi->ci.flag |= 6;
    if (password != NULL)
      zi->ci.flag |= 1;
#line 768 "zip.c"
    zi->ci.crc32 = 0;
    zi->ci.method = method;
    zi->ci.encrypt = 0;
    zi->ci.stream_initialised = 0;
    zi->ci.pos_in_buffered_data = 0;
    zi->ci.raw = raw;
    zi->ci.pos_local_header = ZTELL(zi->z_filefunc,zi->filestream) ;
    zi->ci.size_centralheader = SIZECENTRALHEADER + size_filename +
                                      size_extrafield_global + size_comment;
    zi->ci.central_header = (char*)ALLOC((uInt)zi->ci.size_centralheader);
#line 779 "zip.c"
    ziplocal_putValue_inmemory(zi->ci.central_header,(uLong)CENTRALHEADERMAGIC,4);
#line 781 "zip.c"
    ziplocal_putValue_inmemory(zi->ci.central_header+4,(uLong)VERSIONMADEBY,2);
    ziplocal_putValue_inmemory(zi->ci.central_header+6,(uLong)20,2);
    ziplocal_putValue_inmemory(zi->ci.central_header+8,(uLong)zi->ci.flag,2);
    ziplocal_putValue_inmemory(zi->ci.central_header+10,(uLong)zi->ci.method,2);
    ziplocal_putValue_inmemory(zi->ci.central_header+12,(uLong)zi->ci.dosDate,4);
    ziplocal_putValue_inmemory(zi->ci.central_header+16,(uLong)0,4);
    ziplocal_putValue_inmemory(zi->ci.central_header+20,(uLong)0,4);
    ziplocal_putValue_inmemory(zi->ci.central_header+24,(uLong)0,4);
    ziplocal_putValue_inmemory(zi->ci.central_header+28,(uLong)size_filename,2);
    ziplocal_putValue_inmemory(zi->ci.central_header+30,(uLong)size_extrafield_global,2);
    ziplocal_putValue_inmemory(zi->ci.central_header+32,(uLong)size_comment,2);
    ziplocal_putValue_inmemory(zi->ci.central_header+34,(uLong)0,2);
#line 794 "zip.c"
    if (zipfi==NULL)
        ziplocal_putValue_inmemory(zi->ci.central_header+36,(uLong)0,2);
    else
        ziplocal_putValue_inmemory(zi->ci.central_header+36,(uLong)zipfi->internal_fa,2);
#line 799 "zip.c"
    if (zipfi==NULL)
        ziplocal_putValue_inmemory(zi->ci.central_header+38,(uLong)0,4);
    else
        ziplocal_putValue_inmemory(zi->ci.central_header+38,(uLong)zipfi->external_fa,4);
#line 804 "zip.c"
    ziplocal_putValue_inmemory(zi->ci.central_header+42,(uLong)zi->ci.pos_local_header- zi->add_position_when_writting_offset,4);
#line 806 "zip.c"
    for (i=0;i<size_filename;i++)
        *(zi->ci.central_header+SIZECENTRALHEADER+i) = *(filename+i);
#line 809 "zip.c"
    for (i=0;i<size_extrafield_global;i++)
        *(zi->ci.central_header+SIZECENTRALHEADER+size_filename+i) =
              *(((const char*)extrafield_global)+i);
#line 813 "zip.c"
    for (i=0;i<size_comment;i++)
        *(zi->ci.central_header+SIZECENTRALHEADER+size_filename+
              size_extrafield_global+i) = *(comment+i);
    if (zi->ci.central_header == NULL)
        return ZIP_INTERNALERROR;
#line 820 "zip.c"
    err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)LOCALHEADERMAGIC,4);
#line 822 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)20,2);
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)zi->ci.flag,2);
#line 827 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)zi->ci.method,2);
#line 830 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)zi->ci.dosDate,4);
#line 833 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)0,4);
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)0,4);
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)0,4);
#line 840 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)size_filename,2);
#line 843 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)size_extrafield_local,2);
#line 846 "zip.c"
    if ((err==ZIP_OK) && (size_filename>0))
        if (ZWRITE(zi->z_filefunc,zi->filestream,filename,size_filename)!=size_filename)
                err = ZIP_ERRNO;
#line 850 "zip.c"
    if ((err==ZIP_OK) && (size_extrafield_local>0))
        if (ZWRITE(zi->z_filefunc,zi->filestream,extrafield_local,size_extrafield_local)
                                                                           !=size_extrafield_local)
                err = ZIP_ERRNO;
#line 855 "zip.c"
    zi->ci.stream.avail_in = (uInt)0;
    zi->ci.stream.avail_out = (uInt)Z_BUFSIZE;
    zi->ci.stream.next_out = zi->ci.buffered_data;
    zi->ci.stream.total_in = 0;
    zi->ci.stream.total_out = 0;
#line 861 "zip.c"
    if ((err==ZIP_OK) && (zi->ci.method == Z_DEFLATED) && (!zi->ci.raw))
    {
        zi->ci.stream.zalloc = (alloc_func)0;
        zi->ci.stream.zfree = (free_func)0;
        zi->ci.stream.opaque = (voidpf)0;
#line 867 "zip.c"
        if (windowBits>0)
            windowBits = -windowBits;
#line 870 "zip.c"
        err = deflateInit2(&zi->ci.stream, level,
               Z_DEFLATED, windowBits, memLevel, strategy);
#line 873 "zip.c"
        if (err==Z_OK)
            zi->ci.stream_initialised = 1;
    }
#    ifndef NOCRYPT
    zi->ci.crypt_header_size = 0;
    if ((err==Z_OK) && (password != NULL))
    {
        unsigned char bufHead[RAND_HEAD_LEN];
        unsigned int sizeHead;
        zi->ci.encrypt = 1;
        zi->ci.pcrc_32_tab = get_crc_table();
#line 886 "zip.c"
        sizeHead=crypthead(password,bufHead,RAND_HEAD_LEN,zi->ci.keys,zi->ci.pcrc_32_tab,crcForCrypting);
        zi->ci.crypt_header_size = sizeHead;
#line 889 "zip.c"
        if (ZWRITE(zi->z_filefunc,zi->filestream,bufHead,sizeHead) != sizeHead)
                err = ZIP_ERRNO;
    }
#    endif
#line 894 "zip.c"
    if (err==Z_OK)
        zi->in_opened_file_inzip = 1;
    return err;
}
#line 899 "zip.c"
extern int ZEXPORT zipOpenNewFileInZip2(zipFile file, const char *filename, const zip_fileinfo *zipfi, const void *extrafield_local, uInt size_extrafield_local, const void *extrafield_global, uInt size_extrafield_global, const char *comment, int method, int level, int raw)
#line 914 "zip.c"
{
    return zipOpenNewFileInZip3 (file, filename, zipfi,
                                 extrafield_local, size_extrafield_local,
                                 extrafield_global, size_extrafield_global,
                                 comment, method, level, raw,
                                 -MAX_WBITS, DEF_MEM_LEVEL, Z_DEFAULT_STRATEGY,
                                 NULL, 0);
}
#line 923 "zip.c"
extern int ZEXPORT zipOpenNewFileInZip (zipFile file, const char *filename, const zip_fileinfo *zipfi, const void *extrafield_local, uInt size_extrafield_local, const void *extrafield_global, uInt size_extrafield_global, const char *comment, int method, int level)
#line 937 "zip.c"
{
    return zipOpenNewFileInZip2 (file, filename, zipfi,
                                 extrafield_local, size_extrafield_local,
                                 extrafield_global, size_extrafield_global,
                                 comment, method, level, 0);
}
#line 944 "zip.c"
local int zipFlushWriteBuffer(zip_internal *zi)
#line 946 "zip.c"
{
    int err=ZIP_OK;
#line 949 "zip.c"
    if (zi->ci.encrypt != 0)
    {
#ifndef NOCRYPT
        uInt i;
        int t;
        for (i=0;i<zi->ci.pos_in_buffered_data;i++)
            zi->ci.buffered_data[i] = zencode(zi->ci.keys, zi->ci.pcrc_32_tab,
                                       zi->ci.buffered_data[i],t);
#endif
    }
    if (ZWRITE(zi->z_filefunc,zi->filestream,zi->ci.buffered_data,zi->ci.pos_in_buffered_data)
                                                                    !=zi->ci.pos_in_buffered_data)
      err = ZIP_ERRNO;
    zi->ci.pos_in_buffered_data = 0;
    return err;
}
#line 966 "zip.c"
extern int ZEXPORT zipWriteInFileInZip (zipFile file, const void *buf, unsigned len)
#line 970 "zip.c"
{
    zip_internal* zi;
    int err=ZIP_OK;
#line 974 "zip.c"
    if (file == NULL)
        return ZIP_PARAMERROR;
    zi = (zip_internal*)file;
#line 978 "zip.c"
    if (zi->in_opened_file_inzip == 0)
        return ZIP_PARAMERROR;
#line 981 "zip.c"
    zi->ci.stream.next_in = (Bytef*)buf;
    zi->ci.stream.avail_in = len;
    zi->ci.crc32 = crc32(zi->ci.crc32,(const Bytef*)buf,len);
#line 985 "zip.c"
    while ((err==ZIP_OK) && (zi->ci.stream.avail_in>0))
    {
        if (zi->ci.stream.avail_out == 0)
        {
            if (zipFlushWriteBuffer(zi) == ZIP_ERRNO)
                err = ZIP_ERRNO;
            zi->ci.stream.avail_out = (uInt)Z_BUFSIZE;
            zi->ci.stream.next_out = zi->ci.buffered_data;
        }
#line 996 "zip.c"
        if(err != ZIP_OK)
            break;
#line 999 "zip.c"
        if ((zi->ci.method == Z_DEFLATED) && (!zi->ci.raw))
        {
            uLong uTotalOutBefore = zi->ci.stream.total_out;
            err=deflate(&zi->ci.stream,  Z_NO_FLUSH);
            zi->ci.pos_in_buffered_data += (uInt)(zi->ci.stream.total_out - uTotalOutBefore) ;
#line 1005 "zip.c"
        }
        else
        {
            uInt copy_this,i;
            if (zi->ci.stream.avail_in < zi->ci.stream.avail_out)
                copy_this = zi->ci.stream.avail_in;
            else
                copy_this = zi->ci.stream.avail_out;
            for (i=0;i<copy_this;i++)
                *(((char*)zi->ci.stream.next_out)+i) =
                    *(((const char*)zi->ci.stream.next_in)+i);
            {
                zi->ci.stream.avail_in -= copy_this;
                zi->ci.stream.avail_out-= copy_this;
                zi->ci.stream.next_in+= copy_this;
                zi->ci.stream.next_out+= copy_this;
                zi->ci.stream.total_in+= copy_this;
                zi->ci.stream.total_out+= copy_this;
                zi->ci.pos_in_buffered_data += copy_this;
            }
        }
    }
#line 1028 "zip.c"
    return err;
}
#line 1031 "zip.c"
extern int ZEXPORT zipCloseFileInZipRaw (zipFile file, uLong uncompressed_size, uLong crc32)
#line 1035 "zip.c"
{
    zip_internal* zi;
    uLong compressed_size;
    int err=ZIP_OK;
#line 1040 "zip.c"
    if (file == NULL)
        return ZIP_PARAMERROR;
    zi = (zip_internal*)file;
#line 1044 "zip.c"
    if (zi->in_opened_file_inzip == 0)
        return ZIP_PARAMERROR;
    zi->ci.stream.avail_in = 0;
#line 1048 "zip.c"
    if ((zi->ci.method == Z_DEFLATED) && (!zi->ci.raw))
        while (err==ZIP_OK)
    {
        uLong uTotalOutBefore;
        if (zi->ci.stream.avail_out == 0)
        {
            if (zipFlushWriteBuffer(zi) == ZIP_ERRNO)
                err = ZIP_ERRNO;
            zi->ci.stream.avail_out = (uInt)Z_BUFSIZE;
            zi->ci.stream.next_out = zi->ci.buffered_data;
        }
        uTotalOutBefore = zi->ci.stream.total_out;
        err=deflate(&zi->ci.stream,  Z_FINISH);
        zi->ci.pos_in_buffered_data += (uInt)(zi->ci.stream.total_out - uTotalOutBefore) ;
    }
#line 1064 "zip.c"
    if (err==Z_STREAM_END)
        err=ZIP_OK;
#line 1067 "zip.c"
    if ((zi->ci.pos_in_buffered_data>0) && (err==ZIP_OK))
        if (zipFlushWriteBuffer(zi)==ZIP_ERRNO)
            err = ZIP_ERRNO;
#line 1071 "zip.c"
    if ((zi->ci.method == Z_DEFLATED) && (!zi->ci.raw))
    {
        err=deflateEnd(&zi->ci.stream);
        zi->ci.stream_initialised = 0;
    }
#line 1077 "zip.c"
    if (!zi->ci.raw)
    {
        crc32 = (uLong)zi->ci.crc32;
        uncompressed_size = (uLong)zi->ci.stream.total_in;
    }
    compressed_size = (uLong)zi->ci.stream.total_out;
#    ifndef NOCRYPT
    compressed_size += zi->ci.crypt_header_size;
#    endif
#line 1087 "zip.c"
    ziplocal_putValue_inmemory(zi->ci.central_header+16,crc32,4);
    ziplocal_putValue_inmemory(zi->ci.central_header+20,
                                compressed_size,4);
    if (zi->ci.stream.data_type == Z_ASCII)
        ziplocal_putValue_inmemory(zi->ci.central_header+36,(uLong)Z_ASCII,2);
    ziplocal_putValue_inmemory(zi->ci.central_header+24,
                                uncompressed_size,4);
#line 1095 "zip.c"
    if (err==ZIP_OK)
        err = add_data_in_datablock(&zi->central_dir,zi->ci.central_header,
                                       (uLong)zi->ci.size_centralheader);
    free(zi->ci.central_header);
#line 1100 "zip.c"
    if (err==ZIP_OK)
    {
        long cur_pos_inzip = ZTELL(zi->z_filefunc,zi->filestream);
        if (ZSEEK(zi->z_filefunc,zi->filestream,
                  zi->ci.pos_local_header + 14,ZLIB_FILEFUNC_SEEK_SET)!=0)
            err = ZIP_ERRNO;
#line 1107 "zip.c"
        if (err==ZIP_OK)
            err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,crc32,4);
#line 1110 "zip.c"
        if (err==ZIP_OK)
            err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,compressed_size,4);
#line 1113 "zip.c"
        if (err==ZIP_OK)
            err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,uncompressed_size,4);
#line 1116 "zip.c"
        if (ZSEEK(zi->z_filefunc,zi->filestream,
                  cur_pos_inzip,ZLIB_FILEFUNC_SEEK_SET)!=0)
            err = ZIP_ERRNO;
    }
#line 1121 "zip.c"
    zi->number_entry ++;
    zi->in_opened_file_inzip = 0;
#line 1124 "zip.c"
    return err;
}
#line 1127 "zip.c"
extern int ZEXPORT zipCloseFileInZip (zipFile file)
#line 1129 "zip.c"
{
    return zipCloseFileInZipRaw (file,0,0);
}
#line 1133 "zip.c"
extern int ZEXPORT zipClose (zipFile file, const char *global_comment)
#line 1136 "zip.c"
{
    zip_internal* zi;
    int err = 0;
    uLong size_centraldir = 0;
    uLong centraldir_pos_inzip;
    uInt size_global_comment;
    if (file == NULL)
        return ZIP_PARAMERROR;
    zi = (zip_internal*)file;
#line 1146 "zip.c"
    if (zi->in_opened_file_inzip == 1)
    {
        err = zipCloseFileInZip (file);
    }
#line 1151 "zip.c"
#ifndef NO_ADDFILEINEXISTINGZIP
    if (global_comment==NULL)
        global_comment = zi->globalcomment;
#endif
    if (global_comment==NULL)
        size_global_comment = 0;
    else
        size_global_comment = (uInt)strlen(global_comment);
#line 1160 "zip.c"
    centraldir_pos_inzip = ZTELL(zi->z_filefunc,zi->filestream);
    if (err==ZIP_OK)
    {
        linkedlist_datablock_internal* ldi = zi->central_dir.first_block ;
        while (ldi!=NULL)
        {
            if ((err==ZIP_OK) && (ldi->filled_in_this_block>0))
                if (ZWRITE(zi->z_filefunc,zi->filestream,
                           ldi->data,ldi->filled_in_this_block)
                              !=ldi->filled_in_this_block )
                    err = ZIP_ERRNO;
#line 1172 "zip.c"
            size_centraldir += ldi->filled_in_this_block;
            ldi = ldi->next_datablock;
        }
    }
    free_datablock(zi->central_dir.first_block);
#line 1178 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)ENDHEADERMAGIC,4);
#line 1181 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)0,2);
#line 1184 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)0,2);
#line 1187 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)zi->number_entry,2);
#line 1190 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)zi->number_entry,2);
#line 1193 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)size_centraldir,4);
#line 1196 "zip.c"
    if (err==ZIP_OK)
#line 1198 "zip.c"
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,
                                (uLong)(centraldir_pos_inzip - zi->add_position_when_writting_offset),4);
#line 1201 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)size_global_comment,2);
#line 1204 "zip.c"
    if ((err==ZIP_OK) && (size_global_comment>0))
        if (ZWRITE(zi->z_filefunc,zi->filestream,
                   global_comment,size_global_comment) != size_global_comment)
                err = ZIP_ERRNO;
#line 1209 "zip.c"
    if (ZCLOSE(zi->z_filefunc,zi->filestream) != 0)
        if (err == ZIP_OK)
            err = ZIP_ERRNO;
#line 1213 "zip.c"
#ifndef NO_ADDFILEINEXISTINGZIP
    TRYFREE(zi->globalcomment);
#endif
    TRYFREE(zi);
#line 1218 "zip.c"
    return err;
}
}
