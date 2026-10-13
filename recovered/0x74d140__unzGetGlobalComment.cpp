// FUNCTION: BF2 0x74d140
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
#line 45 "unzip.h"
#ifndef _unz_H
#define _unz_H
#line 48 "unzip.h"
#ifdef __cplusplus
extern "C" {
#endif
#line 52 "unzip.h"
#ifndef _ZLIB_H
#line 54 "unzip.h"
#endif
#line 56 "unzip.h"
#ifndef _ZLIBIOAPI_H
#line 58 "unzip.h"
#endif
#line 60 "unzip.h"
#if defined(STRICTUNZIP) || defined(STRICTZIPUNZIP)
#line 63 "unzip.h"
typedef struct TagunzFile__ { int unused; } unzFile__;
typedef unzFile__ *unzFile;
#else
typedef voidp unzFile;
#endif
#line 70 "unzip.h"
#define UNZ_OK                          (0)
#define UNZ_END_OF_LIST_OF_FILE         (-100)
#define UNZ_ERRNO                       (Z_ERRNO)
#define UNZ_EOF                         (0)
#define UNZ_PARAMERROR                  (-102)
#define UNZ_BADZIPFILE                  (-103)
#define UNZ_INTERNALERROR               (-104)
#define UNZ_CRCERROR                    (-105)
#line 80 "unzip.h"
typedef struct tm_unz_s
{
    uInt tm_sec;
    uInt tm_min;
    uInt tm_hour;
    uInt tm_mday;
    uInt tm_mon;
    uInt tm_year;
} tm_unz;
#line 92 "unzip.h"
typedef struct unz_global_info_s
{
    uLong number_entry;
#line 96 "unzip.h"
    uLong size_comment;
} unz_global_info;
#line 101 "unzip.h"
typedef struct unz_file_info_s
{
    uLong version;
    uLong version_needed;
    uLong flag;
    uLong compression_method;
    uLong dosDate;
    uLong crc;
    uLong compressed_size;
    uLong uncompressed_size;
    uLong size_filename;
    uLong size_file_extra;
    uLong size_file_comment;
#line 115 "unzip.h"
    uLong disk_num_start;
    uLong internal_fa;
    uLong external_fa;
#line 119 "unzip.h"
    tm_unz tmu_date;
} unz_file_info;
#line 122 "unzip.h"
extern int ZEXPORT unzStringFileNameCompare OF ((const char* fileName1,
                                                 const char* fileName2,
                                                 int iCaseSensitivity));
#line 135 "unzip.h"
extern unzFile ZEXPORT unzOpen OF((const char *path));
#line 146 "unzip.h"
extern unzFile ZEXPORT unzOpen2 OF((const char *path,
                                    zlib_filefunc_def* pzlib_filefunc_def));
#line 153 "unzip.h"
extern int ZEXPORT unzClose OF((unzFile file));
#line 160 "unzip.h"
extern int ZEXPORT unzGetGlobalInfo OF((unzFile file,
                                        unz_global_info *pglobal_info));
#line 168 "unzip.h"
extern int ZEXPORT unzGetGlobalComment OF((unzFile file,
                                           char *szComment,
                                           uLong uSizeBuf));
#line 181 "unzip.h"
extern int ZEXPORT unzGoToFirstFile OF((unzFile file));
#line 187 "unzip.h"
extern int ZEXPORT unzGoToNextFile OF((unzFile file));
#line 194 "unzip.h"
extern int ZEXPORT unzLocateFile OF((unzFile file,
                     const char *szFileName,
                     int iCaseSensitivity));
#line 210 "unzip.h"
typedef struct unz_file_pos_s
{
    uLong pos_in_zip_directory;
    uLong num_of_file;
} unz_file_pos;
#line 216 "unzip.h"
extern int ZEXPORT unzGetFilePos(
    unzFile file,
    unz_file_pos* file_pos);
#line 220 "unzip.h"
extern int ZEXPORT unzGoToFilePos(
    unzFile file,
    unz_file_pos* file_pos);
#line 226 "unzip.h"
extern int ZEXPORT unzGetCurrentFileInfo OF((unzFile file,
                         unz_file_info *pfile_info,
                         char *szFileName,
                         uLong fileNameBufferSize,
                         void *extraField,
                         uLong extraFieldBufferSize,
                         char *szComment,
                         uLong commentBufferSize));
#line 252 "unzip.h"
extern int ZEXPORT unzOpenCurrentFile OF((unzFile file));
#line 258 "unzip.h"
extern int ZEXPORT unzOpenCurrentFilePassword OF((unzFile file,
                                                  const char* password));
#line 266 "unzip.h"
extern int ZEXPORT unzOpenCurrentFile2 OF((unzFile file,
                                           int* method,
                                           int* level,
                                           int raw));
#line 279 "unzip.h"
extern int ZEXPORT unzOpenCurrentFile3 OF((unzFile file,
                                           int* method,
                                           int* level,
                                           int raw,
                                           const char* password));
#line 294 "unzip.h"
extern int ZEXPORT unzCloseCurrentFile OF((unzFile file));
#line 300 "unzip.h"
extern int ZEXPORT unzReadCurrentFile OF((unzFile file,
                      voidp buf,
                      unsigned len));
#line 314 "unzip.h"
extern z_off_t ZEXPORT unztell OF((unzFile file));
#line 319 "unzip.h"
extern int ZEXPORT unzeof OF((unzFile file));
#line 324 "unzip.h"
extern int ZEXPORT unzGetLocalExtrafield OF((unzFile file,
                                             voidp buf,
                                             unsigned len));
#line 343 "unzip.h"
extern uLong ZEXPORT unzGetOffset (unzFile file);
#line 346 "unzip.h"
extern int ZEXPORT unzSetOffset (unzFile file, uLong pos);
#line 350 "unzip.h"
#ifdef __cplusplus
}
#endif
#line 354 "unzip.h"
#endif
#line 38 "unzip.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#line 44 "unzip.c"
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
#line 56 "unzip.c"
#ifndef local
#  define local static
#endif
#line 62 "unzip.c"
#ifndef CASESENSITIVITYDEFAULT_NO
#  if !defined(unix) && !defined(CASESENSITIVITYDEFAULT_YES)
#    define CASESENSITIVITYDEFAULT_NO
#  endif
#endif
#line 69 "unzip.c"
#ifndef UNZ_BUFSIZE
#define UNZ_BUFSIZE (16384)
#endif
#line 73 "unzip.c"
#ifndef UNZ_MAXFILENAMEINZIP
#define UNZ_MAXFILENAMEINZIP (256)
#endif
#line 77 "unzip.c"
#ifndef ALLOC
# define ALLOC(size) (malloc(size))
#endif
#ifndef TRYFREE
# define TRYFREE(p) {if (p) free(p);}
#endif
#line 84 "unzip.c"
#define SIZECENTRALDIRITEM (0x2e)
#define SIZEZIPLOCALHEADER (0x1e)
#line 90 "unzip.c"
const char unz_copyright[] =
   " unzip 1.01 Copyright 1998-2004 Gilles Vollant - http://www.winimage.com/zLibDll";
#line 94 "unzip.c"
typedef struct unz_file_info_internal_s
{
    uLong offset_curfile;
} unz_file_info_internal;
#line 102 "unzip.c"
typedef struct
{
    char  *read_buffer;
    z_stream stream;
#line 107 "unzip.c"
    uLong pos_in_zipfile;
    uLong stream_initialised;
#line 110 "unzip.c"
    uLong offset_local_extrafield;
    uInt  size_local_extrafield;
    uLong pos_local_extrafield;
#line 114 "unzip.c"
    uLong crc32;
    uLong crc32_wait;
    uLong rest_read_compressed;
    uLong rest_read_uncompressed;
    zlib_filefunc_def z_filefunc;
    voidpf filestream;
    uLong compression_method;
    uLong byte_before_the_zipfile;
    int   raw;
} file_in_zip_read_info_s;
#line 128 "unzip.c"
typedef struct
{
    zlib_filefunc_def z_filefunc;
    voidpf filestream;
    unz_global_info gi;
    uLong byte_before_the_zipfile;
    uLong num_file;
    uLong pos_in_central_dir;
    uLong current_file_ok;
    uLong central_pos;
#line 139 "unzip.c"
    uLong size_central_dir;
    uLong offset_central_dir;
#line 143 "unzip.c"
    unz_file_info cur_file_info;
    unz_file_info_internal cur_file_info_internal;
    file_in_zip_read_info_s* pfile_in_zip_read;
#line 147 "unzip.c"
    int encrypted;
#    ifndef NOUNCRYPT
    unsigned long keys[3];
    const unsigned long* pcrc_32_tab;
#    endif
} unz_s;
#line 155 "unzip.c"
#ifndef NOUNCRYPT
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
#line 157 "unzip.c"
#endif
#line 166 "unzip.c"
local int unzlocal_getByte OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream,
    int *pi));
#line 171 "unzip.c"
local int unzlocal_getByte(const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, int *pi)
#line 175 "unzip.c"
{
    unsigned char c;
    int err = (int)ZREAD(*pzlib_filefunc_def,filestream,&c,1);
    if (err==1)
    {
        *pi = (int)c;
        return UNZ_OK;
    }
    else
    {
        if (ZERROR(*pzlib_filefunc_def,filestream))
            return UNZ_ERRNO;
        else
            return UNZ_EOF;
    }
}
#line 196 "unzip.c"
local int unzlocal_getShort OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream,
    uLong *pX));
#line 201 "unzip.c"
local int unzlocal_getShort (const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, uLong *pX)
#line 205 "unzip.c"
{
    uLong x ;
    int i;
    int err;
#line 210 "unzip.c"
    err = unzlocal_getByte(pzlib_filefunc_def,filestream,&i);
    x = (uLong)i;
#line 213 "unzip.c"
    if (err==UNZ_OK)
        err = unzlocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<8;
#line 217 "unzip.c"
    if (err==UNZ_OK)
        *pX = x;
    else
        *pX = 0;
    return err;
}
#line 224 "unzip.c"
local int unzlocal_getLong OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream,
    uLong *pX));
#line 229 "unzip.c"
local int unzlocal_getLong (const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, uLong *pX)
#line 233 "unzip.c"
{
    uLong x ;
    int i;
    int err;
#line 238 "unzip.c"
    err = unzlocal_getByte(pzlib_filefunc_def,filestream,&i);
    x = (uLong)i;
#line 241 "unzip.c"
    if (err==UNZ_OK)
        err = unzlocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<8;
#line 245 "unzip.c"
    if (err==UNZ_OK)
        err = unzlocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<16;
#line 249 "unzip.c"
    if (err==UNZ_OK)
        err = unzlocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<24;
#line 253 "unzip.c"
    if (err==UNZ_OK)
        *pX = x;
    else
        *pX = 0;
    return err;
}
#line 262 "unzip.c"
local int strcmpcasenosensitive_internal (const char *fileName1, const char *fileName2)
#line 265 "unzip.c"
{
    for (;;)
    {
        char c1=*(fileName1++);
        char c2=*(fileName2++);
        if ((c1>='a') && (c1<='z'))
            c1 -= 0x20;
        if ((c2>='a') && (c2<='z'))
            c2 -= 0x20;
        if (c1=='\0')
            return ((c2=='\0') ? 0 : -1);
        if (c2=='\0')
            return 1;
        if (c1<c2)
            return -1;
        if (c1>c2)
            return 1;
    }
}
#line 286 "unzip.c"
#ifdef  CASESENSITIVITYDEFAULT_NO
#define CASESENSITIVITYDEFAULTVALUE 2
#else
#define CASESENSITIVITYDEFAULTVALUE 1
#endif
#line 292 "unzip.c"
#ifndef STRCMPCASENOSENTIVEFUNCTION
#define STRCMPCASENOSENTIVEFUNCTION strcmpcasenosensitive_internal
#endif
#line 305 "unzip.c"
extern int ZEXPORT unzStringFileNameCompare (const char *fileName1, const char *fileName2, int iCaseSensitivity)
#line 309 "unzip.c"
{
    if (iCaseSensitivity==0)
        iCaseSensitivity=CASESENSITIVITYDEFAULTVALUE;
#line 313 "unzip.c"
    if (iCaseSensitivity==1)
        return strcmp(fileName1,fileName2);
#line 316 "unzip.c"
    return STRCMPCASENOSENTIVEFUNCTION(fileName1,fileName2);
}
#line 319 "unzip.c"
#ifndef BUFREADCOMMENT
#define BUFREADCOMMENT (0x400)
#endif
#line 327 "unzip.c"
local uLong unzlocal_SearchCentralDir OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream));
#line 331 "unzip.c"
local uLong unzlocal_SearchCentralDir(const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream)
#line 334 "unzip.c"
{
    unsigned char* buf;
    uLong uSizeFile;
    uLong uBackRead;
    uLong uMaxBack=0xffff;
    uLong uPosFound=0;
#line 341 "unzip.c"
    if (ZSEEK(*pzlib_filefunc_def,filestream,0,ZLIB_FILEFUNC_SEEK_END) != 0)
        return 0;
#line 345 "unzip.c"
    uSizeFile = ZTELL(*pzlib_filefunc_def,filestream);
#line 347 "unzip.c"
    if (uMaxBack>uSizeFile)
        uMaxBack = uSizeFile;
#line 350 "unzip.c"
    buf = (unsigned char*)ALLOC(BUFREADCOMMENT+4);
    if (buf==NULL)
        return 0;
#line 354 "unzip.c"
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
#line 365 "unzip.c"
        uReadSize = ((BUFREADCOMMENT+4) < (uSizeFile-uReadPos)) ?
                     (BUFREADCOMMENT+4) : (uSizeFile-uReadPos);
        if (ZSEEK(*pzlib_filefunc_def,filestream,uReadPos,ZLIB_FILEFUNC_SEEK_SET)!=0)
            break;
#line 370 "unzip.c"
        if (ZREAD(*pzlib_filefunc_def,filestream,buf,uReadSize)!=uReadSize)
            break;
#line 373 "unzip.c"
        for (i=(int)uReadSize-3; (i--)>0;)
            if (((*(buf+i))==0x50) && ((*(buf+i+1))==0x4b) &&
                ((*(buf+i+2))==0x05) && ((*(buf+i+3))==0x06))
            {
                uPosFound = uReadPos+i;
                break;
            }
#line 381 "unzip.c"
        if (uPosFound!=0)
            break;
    }
    TRYFREE(buf);
    return uPosFound;
}
#line 397 "unzip.c"
extern unzFile ZEXPORT unzOpen2 (const char *path, zlib_filefunc_def *pzlib_filefunc_def)
#line 400 "unzip.c"
{
    unz_s us;
    unz_s *s;
    uLong central_pos,uL;
#line 405 "unzip.c"
    uLong number_disk;
#line 407 "unzip.c"
    uLong number_disk_with_CD;
#line 409 "unzip.c"
    uLong number_entry_CD;
#line 413 "unzip.c"
    int err=UNZ_OK;
#line 415 "unzip.c"
    if (unz_copyright[0]!=' ')
        return NULL;
#line 418 "unzip.c"
    if (pzlib_filefunc_def==NULL)
        fill_fopen_filefunc(&us.z_filefunc);
    else
        us.z_filefunc = *pzlib_filefunc_def;
#line 423 "unzip.c"
    us.filestream= (*(us.z_filefunc.zopen_file))(us.z_filefunc.opaque,
                                                 path,
                                                 ZLIB_FILEFUNC_MODE_READ |
                                                 ZLIB_FILEFUNC_MODE_EXISTING);
    if (us.filestream==NULL)
        return NULL;
#line 430 "unzip.c"
    central_pos = unzlocal_SearchCentralDir(&us.z_filefunc,us.filestream);
    if (central_pos==0)
        err=UNZ_ERRNO;
#line 434 "unzip.c"
    if (ZSEEK(us.z_filefunc, us.filestream,
                                      central_pos,ZLIB_FILEFUNC_SEEK_SET)!=0)
        err=UNZ_ERRNO;
#line 439 "unzip.c"
    if (unzlocal_getLong(&us.z_filefunc, us.filestream,&uL)!=UNZ_OK)
        err=UNZ_ERRNO;
#line 443 "unzip.c"
    if (unzlocal_getShort(&us.z_filefunc, us.filestream,&number_disk)!=UNZ_OK)
        err=UNZ_ERRNO;
#line 447 "unzip.c"
    if (unzlocal_getShort(&us.z_filefunc, us.filestream,&number_disk_with_CD)!=UNZ_OK)
        err=UNZ_ERRNO;
#line 451 "unzip.c"
    if (unzlocal_getShort(&us.z_filefunc, us.filestream,&us.gi.number_entry)!=UNZ_OK)
        err=UNZ_ERRNO;
#line 455 "unzip.c"
    if (unzlocal_getShort(&us.z_filefunc, us.filestream,&number_entry_CD)!=UNZ_OK)
        err=UNZ_ERRNO;
#line 458 "unzip.c"
    if ((number_entry_CD!=us.gi.number_entry) ||
        (number_disk_with_CD!=0) ||
        (number_disk!=0))
        err=UNZ_BADZIPFILE;
#line 464 "unzip.c"
    if (unzlocal_getLong(&us.z_filefunc, us.filestream,&us.size_central_dir)!=UNZ_OK)
        err=UNZ_ERRNO;
#line 469 "unzip.c"
    if (unzlocal_getLong(&us.z_filefunc, us.filestream,&us.offset_central_dir)!=UNZ_OK)
        err=UNZ_ERRNO;
#line 473 "unzip.c"
    if (unzlocal_getShort(&us.z_filefunc, us.filestream,&us.gi.size_comment)!=UNZ_OK)
        err=UNZ_ERRNO;
#line 476 "unzip.c"
    if ((central_pos<us.offset_central_dir+us.size_central_dir) &&
        (err==UNZ_OK))
        err=UNZ_BADZIPFILE;
#line 480 "unzip.c"
    if (err!=UNZ_OK)
    {
        ZCLOSE(us.z_filefunc, us.filestream);
        return NULL;
    }
#line 486 "unzip.c"
    us.byte_before_the_zipfile = central_pos -
                            (us.offset_central_dir+us.size_central_dir);
    us.central_pos = central_pos;
    us.pfile_in_zip_read = NULL;
    us.encrypted = 0;
#line 493 "unzip.c"
    s=(unz_s*)ALLOC(sizeof(unz_s));
    *s=us;
    unzGoToFirstFile((unzFile)s);
    return (unzFile)s;
}
#line 500 "unzip.c"
extern unzFile ZEXPORT unzOpen (const char *path)
#line 502 "unzip.c"
{
    return unzOpen2(path, NULL);
}
#line 511 "unzip.c"
extern int ZEXPORT unzClose (unzFile file)
#line 513 "unzip.c"
{
    unz_s* s;
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
#line 519 "unzip.c"
    if (s->pfile_in_zip_read!=NULL)
        unzCloseCurrentFile(file);
#line 522 "unzip.c"
    ZCLOSE(s->z_filefunc, s->filestream);
    TRYFREE(s);
    return UNZ_OK;
}
#line 532 "unzip.c"
extern int ZEXPORT unzGetGlobalInfo (unzFile file, unz_global_info *pglobal_info)
#line 535 "unzip.c"
{
    unz_s* s;
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    *pglobal_info=s->gi;
    return UNZ_OK;
}
#line 548 "unzip.c"
local void unzlocal_DosDateToTmuDate (uLong ulDosDate, tm_unz *ptm)
#line 551 "unzip.c"
{
    uLong uDate;
    uDate = (uLong)(ulDosDate>>16);
    ptm->tm_mday = (uInt)(uDate&0x1f) ;
    ptm->tm_mon =  (uInt)((((uDate)&0x1E0)/0x20)-1) ;
    ptm->tm_year = (uInt)(((uDate&0x0FE00)/0x0200)+1980) ;
#line 558 "unzip.c"
    ptm->tm_hour = (uInt) ((ulDosDate &0xF800)/0x800);
    ptm->tm_min =  (uInt) ((ulDosDate&0x7E0)/0x20) ;
    ptm->tm_sec =  (uInt) (2*(ulDosDate&0x1f)) ;
}
#line 566 "unzip.c"
local int unzlocal_GetCurrentFileInfoInternal OF((unzFile file,
                                                  unz_file_info *pfile_info,
                                                  unz_file_info_internal
                                                  *pfile_info_internal,
                                                  char *szFileName,
                                                  uLong fileNameBufferSize,
                                                  void *extraField,
                                                  uLong extraFieldBufferSize,
                                                  char *szComment,
                                                  uLong commentBufferSize));
#line 577 "unzip.c"
local int unzlocal_GetCurrentFileInfoInternal (unzFile file, unz_file_info *pfile_info, unz_file_info_internal *pfile_info_internal, char *szFileName, uLong fileNameBufferSize, void *extraField, uLong extraFieldBufferSize, char *szComment, uLong commentBufferSize)
#line 592 "unzip.c"
{
    unz_s* s;
    unz_file_info file_info;
    unz_file_info_internal file_info_internal;
    int err=UNZ_OK;
    uLong uMagic;
    long lSeek=0;
#line 600 "unzip.c"
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    if (ZSEEK(s->z_filefunc, s->filestream,
              s->pos_in_central_dir+s->byte_before_the_zipfile,
              ZLIB_FILEFUNC_SEEK_SET)!=0)
        err=UNZ_ERRNO;
#line 610 "unzip.c"
    if (err==UNZ_OK)
        if (unzlocal_getLong(&s->z_filefunc, s->filestream,&uMagic) != UNZ_OK)
            err=UNZ_ERRNO;
        else if (uMagic!=0x02014b50)
            err=UNZ_BADZIPFILE;
#line 616 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&file_info.version) != UNZ_OK)
        err=UNZ_ERRNO;
#line 619 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&file_info.version_needed) != UNZ_OK)
        err=UNZ_ERRNO;
#line 622 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&file_info.flag) != UNZ_OK)
        err=UNZ_ERRNO;
#line 625 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&file_info.compression_method) != UNZ_OK)
        err=UNZ_ERRNO;
#line 628 "unzip.c"
    if (unzlocal_getLong(&s->z_filefunc, s->filestream,&file_info.dosDate) != UNZ_OK)
        err=UNZ_ERRNO;
#line 631 "unzip.c"
    unzlocal_DosDateToTmuDate(file_info.dosDate,&file_info.tmu_date);
#line 633 "unzip.c"
    if (unzlocal_getLong(&s->z_filefunc, s->filestream,&file_info.crc) != UNZ_OK)
        err=UNZ_ERRNO;
#line 636 "unzip.c"
    if (unzlocal_getLong(&s->z_filefunc, s->filestream,&file_info.compressed_size) != UNZ_OK)
        err=UNZ_ERRNO;
#line 639 "unzip.c"
    if (unzlocal_getLong(&s->z_filefunc, s->filestream,&file_info.uncompressed_size) != UNZ_OK)
        err=UNZ_ERRNO;
#line 642 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&file_info.size_filename) != UNZ_OK)
        err=UNZ_ERRNO;
#line 645 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&file_info.size_file_extra) != UNZ_OK)
        err=UNZ_ERRNO;
#line 648 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&file_info.size_file_comment) != UNZ_OK)
        err=UNZ_ERRNO;
#line 651 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&file_info.disk_num_start) != UNZ_OK)
        err=UNZ_ERRNO;
#line 654 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&file_info.internal_fa) != UNZ_OK)
        err=UNZ_ERRNO;
#line 657 "unzip.c"
    if (unzlocal_getLong(&s->z_filefunc, s->filestream,&file_info.external_fa) != UNZ_OK)
        err=UNZ_ERRNO;
#line 660 "unzip.c"
    if (unzlocal_getLong(&s->z_filefunc, s->filestream,&file_info_internal.offset_curfile) != UNZ_OK)
        err=UNZ_ERRNO;
#line 663 "unzip.c"
    lSeek+=file_info.size_filename;
    if ((err==UNZ_OK) && (szFileName!=NULL))
    {
        uLong uSizeRead ;
        if (file_info.size_filename<fileNameBufferSize)
        {
            *(szFileName+file_info.size_filename)='\0';
            uSizeRead = file_info.size_filename;
        }
        else
            uSizeRead = fileNameBufferSize;
#line 675 "unzip.c"
        if ((file_info.size_filename>0) && (fileNameBufferSize>0))
            if (ZREAD(s->z_filefunc, s->filestream,szFileName,uSizeRead)!=uSizeRead)
                err=UNZ_ERRNO;
        lSeek -= uSizeRead;
    }
#line 682 "unzip.c"
    if ((err==UNZ_OK) && (extraField!=NULL))
    {
        uLong uSizeRead ;
        if (file_info.size_file_extra<extraFieldBufferSize)
            uSizeRead = file_info.size_file_extra;
        else
            uSizeRead = extraFieldBufferSize;
#line 690 "unzip.c"
        if (lSeek!=0)
            if (ZSEEK(s->z_filefunc, s->filestream,lSeek,ZLIB_FILEFUNC_SEEK_CUR)==0)
                lSeek=0;
            else
                err=UNZ_ERRNO;
        if ((file_info.size_file_extra>0) && (extraFieldBufferSize>0))
            if (ZREAD(s->z_filefunc, s->filestream,extraField,uSizeRead)!=uSizeRead)
                err=UNZ_ERRNO;
        lSeek += file_info.size_file_extra - uSizeRead;
    }
    else
        lSeek+=file_info.size_file_extra;
#line 704 "unzip.c"
    if ((err==UNZ_OK) && (szComment!=NULL))
    {
        uLong uSizeRead ;
        if (file_info.size_file_comment<commentBufferSize)
        {
            *(szComment+file_info.size_file_comment)='\0';
            uSizeRead = file_info.size_file_comment;
        }
        else
            uSizeRead = commentBufferSize;
#line 715 "unzip.c"
        if (lSeek!=0)
            if (ZSEEK(s->z_filefunc, s->filestream,lSeek,ZLIB_FILEFUNC_SEEK_CUR)==0)
                lSeek=0;
            else
                err=UNZ_ERRNO;
        if ((file_info.size_file_comment>0) && (commentBufferSize>0))
            if (ZREAD(s->z_filefunc, s->filestream,szComment,uSizeRead)!=uSizeRead)
                err=UNZ_ERRNO;
        lSeek+=file_info.size_file_comment - uSizeRead;
    }
    else
        lSeek+=file_info.size_file_comment;
#line 728 "unzip.c"
    if ((err==UNZ_OK) && (pfile_info!=NULL))
        *pfile_info=file_info;
#line 731 "unzip.c"
    if ((err==UNZ_OK) && (pfile_info_internal!=NULL))
        *pfile_info_internal=file_info_internal;
#line 734 "unzip.c"
    return err;
}
#line 744 "unzip.c"
extern int ZEXPORT unzGetCurrentFileInfo (unzFile file, unz_file_info *pfile_info, char *szFileName, uLong fileNameBufferSize, void *extraField, uLong extraFieldBufferSize, char *szComment, uLong commentBufferSize)
#line 757 "unzip.c"
{
    return unzlocal_GetCurrentFileInfoInternal(file,pfile_info,NULL,
                                                szFileName,fileNameBufferSize,
                                                extraField,extraFieldBufferSize,
                                                szComment,commentBufferSize);
}
#line 768 "unzip.c"
extern int ZEXPORT unzGoToFirstFile (unzFile file)
#line 770 "unzip.c"
{
    int err=UNZ_OK;
    unz_s* s;
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    s->pos_in_central_dir=s->offset_central_dir;
    s->num_file=0;
    err=unzlocal_GetCurrentFileInfoInternal(file,&s->cur_file_info,
                                             &s->cur_file_info_internal,
                                             NULL,0,NULL,0,NULL,0);
    s->current_file_ok = (err == UNZ_OK);
    return err;
}
#line 790 "unzip.c"
extern int ZEXPORT unzGoToNextFile (unzFile file)
#line 792 "unzip.c"
{
    unz_s* s;
    int err;
#line 796 "unzip.c"
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    if (!s->current_file_ok)
        return UNZ_END_OF_LIST_OF_FILE;
    if (s->gi.number_entry != 0xffff)
      if (s->num_file+1==s->gi.number_entry)
        return UNZ_END_OF_LIST_OF_FILE;
#line 805 "unzip.c"
    s->pos_in_central_dir += SIZECENTRALDIRITEM + s->cur_file_info.size_filename +
            s->cur_file_info.size_file_extra + s->cur_file_info.size_file_comment ;
    s->num_file++;
    err = unzlocal_GetCurrentFileInfoInternal(file,&s->cur_file_info,
                                               &s->cur_file_info_internal,
                                               NULL,0,NULL,0,NULL,0);
    s->current_file_ok = (err == UNZ_OK);
    return err;
}
#line 824 "unzip.c"
extern int ZEXPORT unzLocateFile (unzFile file, const char *szFileName, int iCaseSensitivity)
#line 828 "unzip.c"
{
    unz_s* s;
    int err;
#line 835 "unzip.c"
    unz_file_info cur_file_infoSaved;
    unz_file_info_internal cur_file_info_internalSaved;
    uLong num_fileSaved;
    uLong pos_in_central_dirSaved;
#line 841 "unzip.c"
    if (file==NULL)
        return UNZ_PARAMERROR;
#line 844 "unzip.c"
    if (strlen(szFileName)>=UNZ_MAXFILENAMEINZIP)
        return UNZ_PARAMERROR;
#line 847 "unzip.c"
    s=(unz_s*)file;
    if (!s->current_file_ok)
        return UNZ_END_OF_LIST_OF_FILE;
#line 852 "unzip.c"
    num_fileSaved = s->num_file;
    pos_in_central_dirSaved = s->pos_in_central_dir;
    cur_file_infoSaved = s->cur_file_info;
    cur_file_info_internalSaved = s->cur_file_info_internal;
#line 857 "unzip.c"
    err = unzGoToFirstFile(file);
#line 859 "unzip.c"
    while (err == UNZ_OK)
    {
        char szCurrentFileName[UNZ_MAXFILENAMEINZIP+1];
        err = unzGetCurrentFileInfo(file,NULL,
                                    szCurrentFileName,sizeof(szCurrentFileName)-1,
                                    NULL,0,NULL,0);
        if (err == UNZ_OK)
        {
            if (unzStringFileNameCompare(szCurrentFileName,
                                            szFileName,iCaseSensitivity)==0)
                return UNZ_OK;
            err = unzGoToNextFile(file);
        }
    }
#line 877 "unzip.c"
    s->num_file = num_fileSaved ;
    s->pos_in_central_dir = pos_in_central_dirSaved ;
    s->cur_file_info = cur_file_infoSaved;
    s->cur_file_info_internal = cur_file_info_internalSaved;
    return err;
}
#line 903 "unzip.c"
extern int ZEXPORT unzGetFilePos(unzFile file, unz_file_pos *file_pos)
#line 906 "unzip.c"
{
    unz_s* s;
#line 909 "unzip.c"
    if (file==NULL || file_pos==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    if (!s->current_file_ok)
        return UNZ_END_OF_LIST_OF_FILE;
#line 915 "unzip.c"
    file_pos->pos_in_zip_directory  = s->pos_in_central_dir;
    file_pos->num_of_file           = s->num_file;
#line 918 "unzip.c"
    return UNZ_OK;
}
#line 921 "unzip.c"
extern int ZEXPORT unzGoToFilePos(unzFile file, unz_file_pos *file_pos)
#line 924 "unzip.c"
{
    unz_s* s;
    int err;
#line 928 "unzip.c"
    if (file==NULL || file_pos==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
#line 933 "unzip.c"
    s->pos_in_central_dir = file_pos->pos_in_zip_directory;
    s->num_file           = file_pos->num_of_file;
#line 937 "unzip.c"
    err = unzlocal_GetCurrentFileInfoInternal(file,&s->cur_file_info,
                                               &s->cur_file_info_internal,
                                               NULL,0,NULL,0,NULL,0);
#line 941 "unzip.c"
    s->current_file_ok = (err == UNZ_OK);
    return err;
}
#line 957 "unzip.c"
local int unzlocal_CheckCurrentFileCoherencyHeader (unz_s *s, uInt *piSizeVar, uLong *poffset_local_extrafield, uInt *psize_local_extrafield)
#line 964 "unzip.c"
{
    uLong uMagic,uData,uFlags;
    uLong size_filename;
    uLong size_extra_field;
    int err=UNZ_OK;
#line 970 "unzip.c"
    *piSizeVar = 0;
    *poffset_local_extrafield = 0;
    *psize_local_extrafield = 0;
#line 974 "unzip.c"
    if (ZSEEK(s->z_filefunc, s->filestream,s->cur_file_info_internal.offset_curfile +
                                s->byte_before_the_zipfile,ZLIB_FILEFUNC_SEEK_SET)!=0)
        return UNZ_ERRNO;
#line 979 "unzip.c"
    if (err==UNZ_OK)
        if (unzlocal_getLong(&s->z_filefunc, s->filestream,&uMagic) != UNZ_OK)
            err=UNZ_ERRNO;
        else if (uMagic!=0x04034b50)
            err=UNZ_BADZIPFILE;
#line 985 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&uData) != UNZ_OK)
        err=UNZ_ERRNO;
#line 991 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&uFlags) != UNZ_OK)
        err=UNZ_ERRNO;
#line 994 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&uData) != UNZ_OK)
        err=UNZ_ERRNO;
    else if ((err==UNZ_OK) && (uData!=s->cur_file_info.compression_method))
        err=UNZ_BADZIPFILE;
#line 999 "unzip.c"
    if ((err==UNZ_OK) && (s->cur_file_info.compression_method!=0) &&
                         (s->cur_file_info.compression_method!=Z_DEFLATED))
        err=UNZ_BADZIPFILE;
#line 1003 "unzip.c"
    if (unzlocal_getLong(&s->z_filefunc, s->filestream,&uData) != UNZ_OK)
        err=UNZ_ERRNO;
#line 1006 "unzip.c"
    if (unzlocal_getLong(&s->z_filefunc, s->filestream,&uData) != UNZ_OK)
        err=UNZ_ERRNO;
    else if ((err==UNZ_OK) && (uData!=s->cur_file_info.crc) &&
                              ((uFlags & 8)==0))
        err=UNZ_BADZIPFILE;
#line 1012 "unzip.c"
    if (unzlocal_getLong(&s->z_filefunc, s->filestream,&uData) != UNZ_OK)
        err=UNZ_ERRNO;
    else if ((err==UNZ_OK) && (uData!=s->cur_file_info.compressed_size) &&
                              ((uFlags & 8)==0))
        err=UNZ_BADZIPFILE;
#line 1018 "unzip.c"
    if (unzlocal_getLong(&s->z_filefunc, s->filestream,&uData) != UNZ_OK)
        err=UNZ_ERRNO;
    else if ((err==UNZ_OK) && (uData!=s->cur_file_info.uncompressed_size) &&
                              ((uFlags & 8)==0))
        err=UNZ_BADZIPFILE;
#line 1025 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&size_filename) != UNZ_OK)
        err=UNZ_ERRNO;
    else if ((err==UNZ_OK) && (size_filename!=s->cur_file_info.size_filename))
        err=UNZ_BADZIPFILE;
#line 1030 "unzip.c"
    *piSizeVar += (uInt)size_filename;
#line 1032 "unzip.c"
    if (unzlocal_getShort(&s->z_filefunc, s->filestream,&size_extra_field) != UNZ_OK)
        err=UNZ_ERRNO;
    *poffset_local_extrafield= s->cur_file_info_internal.offset_curfile +
                                    SIZEZIPLOCALHEADER + size_filename;
    *psize_local_extrafield = (uInt)size_extra_field;
#line 1038 "unzip.c"
    *piSizeVar += (uInt)size_extra_field;
#line 1040 "unzip.c"
    return err;
}
#line 1047 "unzip.c"
extern int ZEXPORT unzOpenCurrentFile3 (unzFile file, int *method, int *level, int raw, const char *password)
#line 1053 "unzip.c"
{
    int err=UNZ_OK;
    uInt iSizeVar;
    unz_s* s;
    file_in_zip_read_info_s* pfile_in_zip_read_info;
    uLong offset_local_extrafield;
    uInt  size_local_extrafield;
#    ifndef NOUNCRYPT
    char source[12];
#    else
    if (password != NULL)
        return UNZ_PARAMERROR;
#    endif
#line 1067 "unzip.c"
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    if (!s->current_file_ok)
        return UNZ_PARAMERROR;
#line 1073 "unzip.c"
    if (s->pfile_in_zip_read != NULL)
        unzCloseCurrentFile(file);
#line 1076 "unzip.c"
    if (unzlocal_CheckCurrentFileCoherencyHeader(s,&iSizeVar,
                &offset_local_extrafield,&size_local_extrafield)!=UNZ_OK)
        return UNZ_BADZIPFILE;
#line 1080 "unzip.c"
    pfile_in_zip_read_info = (file_in_zip_read_info_s*)
                                        ALLOC(sizeof(file_in_zip_read_info_s));
    if (pfile_in_zip_read_info==NULL)
        return UNZ_INTERNALERROR;
#line 1085 "unzip.c"
    pfile_in_zip_read_info->read_buffer=(char*)ALLOC(UNZ_BUFSIZE);
    pfile_in_zip_read_info->offset_local_extrafield = offset_local_extrafield;
    pfile_in_zip_read_info->size_local_extrafield = size_local_extrafield;
    pfile_in_zip_read_info->pos_local_extrafield=0;
    pfile_in_zip_read_info->raw=raw;
#line 1091 "unzip.c"
    if (pfile_in_zip_read_info->read_buffer==NULL)
    {
        TRYFREE(pfile_in_zip_read_info);
        return UNZ_INTERNALERROR;
    }
#line 1097 "unzip.c"
    pfile_in_zip_read_info->stream_initialised=0;
#line 1099 "unzip.c"
    if (method!=NULL)
        *method = (int)s->cur_file_info.compression_method;
#line 1102 "unzip.c"
    if (level!=NULL)
    {
        *level = 6;
        switch (s->cur_file_info.flag & 0x06)
        {
          case 6 : *level = 1; break;
          case 4 : *level = 2; break;
          case 2 : *level = 9; break;
        }
    }
#line 1113 "unzip.c"
    if ((s->cur_file_info.compression_method!=0) &&
        (s->cur_file_info.compression_method!=Z_DEFLATED))
        err=UNZ_BADZIPFILE;
#line 1117 "unzip.c"
    pfile_in_zip_read_info->crc32_wait=s->cur_file_info.crc;
    pfile_in_zip_read_info->crc32=0;
    pfile_in_zip_read_info->compression_method =
            s->cur_file_info.compression_method;
    pfile_in_zip_read_info->filestream=s->filestream;
    pfile_in_zip_read_info->z_filefunc=s->z_filefunc;
    pfile_in_zip_read_info->byte_before_the_zipfile=s->byte_before_the_zipfile;
#line 1125 "unzip.c"
    pfile_in_zip_read_info->stream.total_out = 0;
#line 1127 "unzip.c"
    if ((s->cur_file_info.compression_method==Z_DEFLATED) &&
        (!raw))
    {
      pfile_in_zip_read_info->stream.zalloc = (alloc_func)0;
      pfile_in_zip_read_info->stream.zfree = (free_func)0;
      pfile_in_zip_read_info->stream.opaque = (voidpf)0;
      pfile_in_zip_read_info->stream.next_in = (Bytef*)0;
      pfile_in_zip_read_info->stream.avail_in = 0;
#line 1136 "unzip.c"
      err=inflateInit2(&pfile_in_zip_read_info->stream, -MAX_WBITS);
      if (err == Z_OK)
        pfile_in_zip_read_info->stream_initialised=1;
      else
      {
        TRYFREE(pfile_in_zip_read_info);
        return err;
      }
#line 1151 "unzip.c"
    }
    pfile_in_zip_read_info->rest_read_compressed =
            s->cur_file_info.compressed_size ;
    pfile_in_zip_read_info->rest_read_uncompressed =
            s->cur_file_info.uncompressed_size ;
#line 1158 "unzip.c"
    pfile_in_zip_read_info->pos_in_zipfile =
            s->cur_file_info_internal.offset_curfile + SIZEZIPLOCALHEADER +
              iSizeVar;
#line 1162 "unzip.c"
    pfile_in_zip_read_info->stream.avail_in = (uInt)0;
#line 1164 "unzip.c"
    s->pfile_in_zip_read = pfile_in_zip_read_info;
#line 1166 "unzip.c"
#    ifndef NOUNCRYPT
    if (password != NULL)
    {
        int i;
        s->pcrc_32_tab = get_crc_table();
        init_keys(password,s->keys,s->pcrc_32_tab);
        if (ZSEEK(s->z_filefunc, s->filestream,
                  s->pfile_in_zip_read->pos_in_zipfile +
                     s->pfile_in_zip_read->byte_before_the_zipfile,
                  SEEK_SET)!=0)
            return UNZ_INTERNALERROR;
        if(ZREAD(s->z_filefunc, s->filestream,source, 12)<12)
            return UNZ_INTERNALERROR;
#line 1180 "unzip.c"
        for (i = 0; i<12; i++)
            zdecode(s->keys,s->pcrc_32_tab,source[i]);
#line 1183 "unzip.c"
        s->pfile_in_zip_read->pos_in_zipfile+=12;
        s->encrypted=1;
    }
#    endif
#line 1189 "unzip.c"
    return UNZ_OK;
}
#line 1192 "unzip.c"
extern int ZEXPORT unzOpenCurrentFile (unzFile file)
#line 1194 "unzip.c"
{
    return unzOpenCurrentFile3(file, NULL, NULL, 0, NULL);
}
#line 1198 "unzip.c"
extern int ZEXPORT unzOpenCurrentFilePassword (unzFile file, const char *password)
#line 1201 "unzip.c"
{
    return unzOpenCurrentFile3(file, NULL, NULL, 0, password);
}
#line 1205 "unzip.c"
extern int ZEXPORT unzOpenCurrentFile2 (unzFile file, int *method, int *level, int raw)
#line 1210 "unzip.c"
{
    return unzOpenCurrentFile3(file, method, level, raw, NULL);
}
#line 1224 "unzip.c"
extern int ZEXPORT unzReadCurrentFile  (unzFile file, voidp buf, unsigned len)
#line 1228 "unzip.c"
{
    int err=UNZ_OK;
    uInt iRead = 0;
    unz_s* s;
    file_in_zip_read_info_s* pfile_in_zip_read_info;
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    pfile_in_zip_read_info=s->pfile_in_zip_read;
#line 1238 "unzip.c"
    if (pfile_in_zip_read_info==NULL)
        return UNZ_PARAMERROR;
#line 1242 "unzip.c"
    if ((pfile_in_zip_read_info->read_buffer == NULL))
        return UNZ_END_OF_LIST_OF_FILE;
    if (len==0)
        return 0;
#line 1247 "unzip.c"
    pfile_in_zip_read_info->stream.next_out = (Bytef*)buf;
#line 1249 "unzip.c"
    pfile_in_zip_read_info->stream.avail_out = (uInt)len;
#line 1251 "unzip.c"
    if ((len>pfile_in_zip_read_info->rest_read_uncompressed) &&
        (!(pfile_in_zip_read_info->raw)))
        pfile_in_zip_read_info->stream.avail_out =
            (uInt)pfile_in_zip_read_info->rest_read_uncompressed;
#line 1256 "unzip.c"
    if ((len>pfile_in_zip_read_info->rest_read_compressed+
           pfile_in_zip_read_info->stream.avail_in) &&
         (pfile_in_zip_read_info->raw))
        pfile_in_zip_read_info->stream.avail_out =
            (uInt)pfile_in_zip_read_info->rest_read_compressed+
            pfile_in_zip_read_info->stream.avail_in;
#line 1263 "unzip.c"
    while (pfile_in_zip_read_info->stream.avail_out>0)
    {
        if ((pfile_in_zip_read_info->stream.avail_in==0) &&
            (pfile_in_zip_read_info->rest_read_compressed>0))
        {
            uInt uReadThis = UNZ_BUFSIZE;
            if (pfile_in_zip_read_info->rest_read_compressed<uReadThis)
                uReadThis = (uInt)pfile_in_zip_read_info->rest_read_compressed;
            if (uReadThis == 0)
                return UNZ_EOF;
            if (ZSEEK(pfile_in_zip_read_info->z_filefunc,
                      pfile_in_zip_read_info->filestream,
                      pfile_in_zip_read_info->pos_in_zipfile +
                         pfile_in_zip_read_info->byte_before_the_zipfile,
                         ZLIB_FILEFUNC_SEEK_SET)!=0)
                return UNZ_ERRNO;
            if (ZREAD(pfile_in_zip_read_info->z_filefunc,
                      pfile_in_zip_read_info->filestream,
                      pfile_in_zip_read_info->read_buffer,
                      uReadThis)!=uReadThis)
                return UNZ_ERRNO;
#line 1286 "unzip.c"
#            ifndef NOUNCRYPT
            if(s->encrypted)
            {
                uInt i;
                for(i=0;i<uReadThis;i++)
                  pfile_in_zip_read_info->read_buffer[i] =
                      zdecode(s->keys,s->pcrc_32_tab,
                              pfile_in_zip_read_info->read_buffer[i]);
            }
#            endif
#line 1298 "unzip.c"
            pfile_in_zip_read_info->pos_in_zipfile += uReadThis;
#line 1300 "unzip.c"
            pfile_in_zip_read_info->rest_read_compressed-=uReadThis;
#line 1302 "unzip.c"
            pfile_in_zip_read_info->stream.next_in =
                (Bytef*)pfile_in_zip_read_info->read_buffer;
            pfile_in_zip_read_info->stream.avail_in = (uInt)uReadThis;
        }
#line 1307 "unzip.c"
        if ((pfile_in_zip_read_info->compression_method==0) || (pfile_in_zip_read_info->raw))
        {
            uInt uDoCopy,i ;
#line 1311 "unzip.c"
            if ((pfile_in_zip_read_info->stream.avail_in == 0) &&
                (pfile_in_zip_read_info->rest_read_compressed == 0))
                return (iRead==0) ? UNZ_EOF : iRead;
#line 1315 "unzip.c"
            if (pfile_in_zip_read_info->stream.avail_out <
                            pfile_in_zip_read_info->stream.avail_in)
                uDoCopy = pfile_in_zip_read_info->stream.avail_out ;
            else
                uDoCopy = pfile_in_zip_read_info->stream.avail_in ;
#line 1321 "unzip.c"
            for (i=0;i<uDoCopy;i++)
                *(pfile_in_zip_read_info->stream.next_out+i) =
                        *(pfile_in_zip_read_info->stream.next_in+i);
#line 1325 "unzip.c"
            pfile_in_zip_read_info->crc32 = crc32(pfile_in_zip_read_info->crc32,
                                pfile_in_zip_read_info->stream.next_out,
                                uDoCopy);
            pfile_in_zip_read_info->rest_read_uncompressed-=uDoCopy;
            pfile_in_zip_read_info->stream.avail_in -= uDoCopy;
            pfile_in_zip_read_info->stream.avail_out -= uDoCopy;
            pfile_in_zip_read_info->stream.next_out += uDoCopy;
            pfile_in_zip_read_info->stream.next_in += uDoCopy;
            pfile_in_zip_read_info->stream.total_out += uDoCopy;
            iRead += uDoCopy;
        }
        else
        {
            uLong uTotalOutBefore,uTotalOutAfter;
            const Bytef *bufBefore;
            uLong uOutThis;
            int flush=Z_SYNC_FLUSH;
#line 1343 "unzip.c"
            uTotalOutBefore = pfile_in_zip_read_info->stream.total_out;
            bufBefore = pfile_in_zip_read_info->stream.next_out;
#line 1352 "unzip.c"
            err=inflate(&pfile_in_zip_read_info->stream,flush);
#line 1354 "unzip.c"
            if ((err>=0) && (pfile_in_zip_read_info->stream.msg!=NULL))
              err = Z_DATA_ERROR;
#line 1357 "unzip.c"
            uTotalOutAfter = pfile_in_zip_read_info->stream.total_out;
            uOutThis = uTotalOutAfter-uTotalOutBefore;
#line 1360 "unzip.c"
            pfile_in_zip_read_info->crc32 =
                crc32(pfile_in_zip_read_info->crc32,bufBefore,
                        (uInt)(uOutThis));
#line 1364 "unzip.c"
            pfile_in_zip_read_info->rest_read_uncompressed -=
                uOutThis;
#line 1367 "unzip.c"
            iRead += (uInt)(uTotalOutAfter - uTotalOutBefore);
#line 1369 "unzip.c"
            if (err==Z_STREAM_END)
                return (iRead==0) ? UNZ_EOF : iRead;
            if (err!=Z_OK)
                break;
        }
    }
#line 1376 "unzip.c"
    if (err==Z_OK)
        return iRead;
    return err;
}
#line 1385 "unzip.c"
extern z_off_t ZEXPORT unztell (unzFile file)
#line 1387 "unzip.c"
{
    unz_s* s;
    file_in_zip_read_info_s* pfile_in_zip_read_info;
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    pfile_in_zip_read_info=s->pfile_in_zip_read;
#line 1395 "unzip.c"
    if (pfile_in_zip_read_info==NULL)
        return UNZ_PARAMERROR;
#line 1398 "unzip.c"
    return (z_off_t)pfile_in_zip_read_info->stream.total_out;
}
#line 1405 "unzip.c"
extern int ZEXPORT unzeof (unzFile file)
#line 1407 "unzip.c"
{
    unz_s* s;
    file_in_zip_read_info_s* pfile_in_zip_read_info;
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    pfile_in_zip_read_info=s->pfile_in_zip_read;
#line 1415 "unzip.c"
    if (pfile_in_zip_read_info==NULL)
        return UNZ_PARAMERROR;
#line 1418 "unzip.c"
    if (pfile_in_zip_read_info->rest_read_uncompressed == 0)
        return 1;
    else
        return 0;
}
#line 1438 "unzip.c"
extern int ZEXPORT unzGetLocalExtrafield (unzFile file, voidp buf, unsigned len)
#line 1442 "unzip.c"
{
    unz_s* s;
    file_in_zip_read_info_s* pfile_in_zip_read_info;
    uInt read_now;
    uLong size_to_read;
#line 1448 "unzip.c"
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    pfile_in_zip_read_info=s->pfile_in_zip_read;
#line 1453 "unzip.c"
    if (pfile_in_zip_read_info==NULL)
        return UNZ_PARAMERROR;
#line 1456 "unzip.c"
    size_to_read = (pfile_in_zip_read_info->size_local_extrafield -
                pfile_in_zip_read_info->pos_local_extrafield);
#line 1459 "unzip.c"
    if (buf==NULL)
        return (int)size_to_read;
#line 1462 "unzip.c"
    if (len>size_to_read)
        read_now = (uInt)size_to_read;
    else
        read_now = (uInt)len ;
#line 1467 "unzip.c"
    if (read_now==0)
        return 0;
#line 1470 "unzip.c"
    if (ZSEEK(pfile_in_zip_read_info->z_filefunc,
              pfile_in_zip_read_info->filestream,
              pfile_in_zip_read_info->offset_local_extrafield +
              pfile_in_zip_read_info->pos_local_extrafield,
              ZLIB_FILEFUNC_SEEK_SET)!=0)
        return UNZ_ERRNO;
#line 1477 "unzip.c"
    if (ZREAD(pfile_in_zip_read_info->z_filefunc,
              pfile_in_zip_read_info->filestream,
              buf,read_now)!=read_now)
        return UNZ_ERRNO;
#line 1482 "unzip.c"
    return (int)read_now;
}
#line 1489 "unzip.c"
extern int ZEXPORT unzCloseCurrentFile (unzFile file)
#line 1491 "unzip.c"
{
    int err=UNZ_OK;
#line 1494 "unzip.c"
    unz_s* s;
    file_in_zip_read_info_s* pfile_in_zip_read_info;
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
    pfile_in_zip_read_info=s->pfile_in_zip_read;
#line 1501 "unzip.c"
    if (pfile_in_zip_read_info==NULL)
        return UNZ_PARAMERROR;
#line 1505 "unzip.c"
    if ((pfile_in_zip_read_info->rest_read_uncompressed == 0) &&
        (!pfile_in_zip_read_info->raw))
    {
        if (pfile_in_zip_read_info->crc32 != pfile_in_zip_read_info->crc32_wait)
            err=UNZ_CRCERROR;
    }
#line 1513 "unzip.c"
    TRYFREE(pfile_in_zip_read_info->read_buffer);
    pfile_in_zip_read_info->read_buffer = NULL;
    if (pfile_in_zip_read_info->stream_initialised)
        inflateEnd(&pfile_in_zip_read_info->stream);
#line 1518 "unzip.c"
    pfile_in_zip_read_info->stream_initialised = 0;
    TRYFREE(pfile_in_zip_read_info);
#line 1521 "unzip.c"
    s->pfile_in_zip_read=NULL;
#line 1523 "unzip.c"
    return err;
}
#line 1532 "unzip.c"
extern int ZEXPORT unzGetGlobalComment (unzFile file, char *szComment, uLong uSizeBuf)
#line 1536 "unzip.c"
{
    int err=UNZ_OK;
    unz_s* s;
    uLong uReadThis ;
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
#line 1544 "unzip.c"
    uReadThis = uSizeBuf;
    if (uReadThis>s->gi.size_comment)
        uReadThis = s->gi.size_comment;
#line 1548 "unzip.c"
    if (ZSEEK(s->z_filefunc,s->filestream,s->central_pos+22,ZLIB_FILEFUNC_SEEK_SET)!=0)
        goto errret;
#line 1551 "unzip.c"
    if (uReadThis>0)
    {
      *szComment='\0';
      if (ZREAD(s->z_filefunc,s->filestream,szComment,uReadThis)!=uReadThis)
        goto errret;
    }
#line 1558 "unzip.c"
    if ((szComment != NULL) && (uSizeBuf > s->gi.size_comment))
        *(szComment+s->gi.size_comment)='\0';
    return (int)uReadThis;
errret:
    return UNZ_ERRNO;
}
#line 1564 "unzip.c"
extern uLong ZEXPORT unzGetOffset (unzFile file)
#line 1566 "unzip.c"
{
    unz_s* s;
#line 1569 "unzip.c"
    if (file==NULL)
          return UNZ_PARAMERROR;
    s=(unz_s*)file;
    if (!s->current_file_ok)
      return 0;
    if (s->gi.number_entry != 0 && s->gi.number_entry != 0xffff)
      if (s->num_file==s->gi.number_entry)
         return 0;
    return s->pos_in_central_dir;
}
#line 1580 "unzip.c"
extern int ZEXPORT unzSetOffset (unzFile file, uLong pos)
#line 1583 "unzip.c"
{
    unz_s* s;
    int err;
#line 1587 "unzip.c"
    if (file==NULL)
        return UNZ_PARAMERROR;
    s=(unz_s*)file;
#line 1591 "unzip.c"
    s->pos_in_central_dir = pos;
    s->num_file = s->gi.number_entry;
    err = unzlocal_GetCurrentFileInfoInternal(file,&s->cur_file_info,
                                              &s->cur_file_info_internal,
                                              NULL,0,NULL,0,NULL,0);
    s->current_file_ok = (err == UNZ_OK);
    return err;
}
}
