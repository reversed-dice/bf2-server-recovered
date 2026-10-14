// FUNCTION: BF2 0x74ec00
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
#line 58 "zconf.h"
#if defined(__MSDOS__) && !defined(MSDOS)
#  define MSDOS
#endif
#if (defined(OS_2) || defined(__OS2__)) && !defined(OS2)
#  define OS2
#endif
#if defined(_WINDOWS) && !defined(WINDOWS)
#  define WINDOWS
#endif
#if (defined(_WIN32) || defined(__WIN32__)) && !defined(WIN32)
#  define WIN32
#endif
#if (defined(MSDOS) || defined(OS2) || defined(WINDOWS)) && !defined(WIN32)
#  if !defined(__GNUC__) && !defined(__FLAT__) && !defined(__386__)
#    ifndef SYS16BIT
#      define SYS16BIT
#    endif
#  endif
#endif
#line 82 "zconf.h"
#ifdef SYS16BIT
#  define MAXSEG_64K
#endif
#ifdef MSDOS
#  define UNALIGNED_OK
#endif
#line 89 "zconf.h"
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
#line 112 "zconf.h"
#if defined(__OS400__) && !defined(STDC)
#  define STDC
#endif
#line 116 "zconf.h"
#ifndef STDC
#  ifndef const
#    define const
#  endif
#endif
#line 123 "zconf.h"
#if defined(__MWERKS__)||defined(applec)||defined(THINK_C)||defined(__SC__)
#  define NO_DUMMY_DECL
#endif
#line 128 "zconf.h"
#ifndef MAX_MEM_LEVEL
#  ifdef MAXSEG_64K
#    define MAX_MEM_LEVEL 8
#  else
#    define MAX_MEM_LEVEL 9
#  endif
#endif
#line 141 "zconf.h"
#ifndef MAX_WBITS
#  define MAX_WBITS   15
#endif
#line 160 "zconf.h"
#ifndef OF
#  ifdef STDC
#    define OF(args)  args
#  else
#    define OF(args)  ()
#  endif
#endif
#line 174 "zconf.h"
#ifdef SYS16BIT
#  if defined(M_I86SM) || defined(M_I86MM)
#line 177 "zconf.h"
#    define SMALL_MEDIUM
#    ifdef _MSC_VER
#      define FAR _far
#    else
#      define FAR far
#    endif
#  endif
#  if (defined(__SMALL__) || defined(__MEDIUM__))
#line 186 "zconf.h"
#    define SMALL_MEDIUM
#    ifdef __BORLANDC__
#      define FAR _far
#    else
#      define FAR far
#    endif
#  endif
#endif
#line 195 "zconf.h"
#if defined(WINDOWS) || defined(WIN32)
#line 199 "zconf.h"
#  ifdef ZLIB_DLL
#    if defined(WIN32) && (!defined(__BORLANDC__) || (__BORLANDC__ >= 0x500))
#      ifdef ZLIB_INTERNAL
#        define ZEXTERN extern __declspec(dllexport)
#      else
#        define ZEXTERN extern __declspec(dllimport)
#      endif
#    endif
#  endif
#line 212 "zconf.h"
#  ifdef ZLIB_WINAPI
#    ifdef FAR
#      undef FAR
#    endif
#    include <windows.h>
#line 219 "zconf.h"
#    define ZEXPORT WINAPI
#    ifdef WIN32
#      define ZEXPORTVA WINAPIV
#    else
#      define ZEXPORTVA FAR CDECL
#    endif
#  endif
#endif
#line 228 "zconf.h"
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
#line 240 "zconf.h"
#ifndef ZEXTERN
#  define ZEXTERN extern
#endif
#ifndef ZEXPORT
#  define ZEXPORT
#endif
#ifndef ZEXPORTVA
#  define ZEXPORTVA
#endif
#line 250 "zconf.h"
#ifndef FAR
#  define FAR
#endif
#line 254 "zconf.h"
#if !defined(__MACTYPES__)
typedef unsigned char  Byte;
#endif
typedef unsigned int   uInt;
typedef unsigned long  uLong;
#line 260 "zconf.h"
#ifdef SMALL_MEDIUM
#line 262 "zconf.h"
#  define Bytef Byte FAR
#else
   typedef Byte  FAR Bytef;
#endif
typedef char  FAR charf;
typedef int   FAR intf;
typedef uInt  FAR uIntf;
typedef uLong FAR uLongf;
#line 271 "zconf.h"
#ifdef STDC
   typedef void const *voidpc;
   typedef void FAR   *voidpf;
   typedef void       *voidp;
#else
   typedef Byte const *voidpc;
   typedef Byte FAR   *voidpf;
   typedef Byte       *voidp;
#endif
#line 281 "zconf.h"
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
#line 298 "zconf.h"
#if defined(__OS400__)
#  define NO_vsnprintf
#endif
#line 302 "zconf.h"
#if defined(__MVS__)
#  define NO_vsnprintf
#  ifdef FAR
#    undef FAR
#  endif
#endif
#line 310 "zconf.h"
#if defined(__MVS__)
#line 324 "zconf.h"
#endif
#line 326 "zconf.h"
#endif
#line 31 "zlib.h"
#ifndef ZLIB_H
#define ZLIB_H
#line 36 "zlib.h"
#ifdef __cplusplus
extern "C" {
#endif
#line 40 "zlib.h"
#define ZLIB_VERSION "1.2.2"
#define ZLIB_VERNUM 0x1220
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
#line 139 "zlib.h"
#define Z_NO_FLUSH      0
#define Z_PARTIAL_FLUSH 1
#define Z_SYNC_FLUSH    2
#define Z_FULL_FLUSH    3
#define Z_FINISH        4
#define Z_BLOCK         5
#line 147 "zlib.h"
#define Z_OK            0
#define Z_STREAM_END    1
#define Z_NEED_DICT     2
#define Z_ERRNO        (-1)
#define Z_STREAM_ERROR (-2)
#define Z_DATA_ERROR   (-3)
#define Z_MEM_ERROR    (-4)
#define Z_BUF_ERROR    (-5)
#define Z_VERSION_ERROR (-6)
#line 160 "zlib.h"
#define Z_NO_COMPRESSION         0
#define Z_BEST_SPEED             1
#define Z_BEST_COMPRESSION       9
#define Z_DEFAULT_COMPRESSION  (-1)
#line 166 "zlib.h"
#define Z_FILTERED            1
#define Z_HUFFMAN_ONLY        2
#define Z_RLE                 3
#define Z_DEFAULT_STRATEGY    0
#line 172 "zlib.h"
#define Z_BINARY   0
#define Z_ASCII    1
#define Z_UNKNOWN  2
#line 177 "zlib.h"
#define Z_DEFLATED   8
#line 180 "zlib.h"
#define Z_NULL  0
#line 182 "zlib.h"
#define zlib_version zlibVersion()
#line 187 "zlib.h"
ZEXTERN const char * ZEXPORT zlibVersion OF((void));
#line 217 "zlib.h"
ZEXTERN int ZEXPORT deflate OF((z_streamp strm, int flush));
#line 299 "zlib.h"
ZEXTERN int ZEXPORT deflateEnd OF((z_streamp strm));
#line 334 "zlib.h"
ZEXTERN int ZEXPORT inflate OF((z_streamp strm, int flush));
#line 433 "zlib.h"
ZEXTERN int ZEXPORT inflateEnd OF((z_streamp strm));
#line 507 "zlib.h"
ZEXTERN int ZEXPORT deflateSetDictionary OF((z_streamp strm,
                                             const Bytef *dictionary,
                                             uInt  dictLength));
#line 544 "zlib.h"
ZEXTERN int ZEXPORT deflateCopy OF((z_streamp dest,
                                    z_streamp source));
#line 562 "zlib.h"
ZEXTERN int ZEXPORT deflateReset OF((z_streamp strm));
#line 573 "zlib.h"
ZEXTERN int ZEXPORT deflateParams OF((z_streamp strm,
                                      int level,
                                      int strategy));
#line 594 "zlib.h"
ZEXTERN uLong ZEXPORT deflateBound OF((z_streamp strm,
                                       uLong sourceLen));
#line 603 "zlib.h"
ZEXTERN int ZEXPORT deflatePrime OF((z_streamp strm,
                                     int bits,
                                     int value));
#line 662 "zlib.h"
ZEXTERN int ZEXPORT inflateSetDictionary OF((z_streamp strm,
                                             const Bytef *dictionary,
                                             uInt  dictLength));
#line 681 "zlib.h"
ZEXTERN int ZEXPORT inflateSync OF((z_streamp strm));
#line 696 "zlib.h"
ZEXTERN int ZEXPORT inflateCopy OF((z_streamp dest,
                                    z_streamp source));
#line 712 "zlib.h"
ZEXTERN int ZEXPORT inflateReset OF((z_streamp strm));
#line 744 "zlib.h"
typedef unsigned (*in_func) OF((void FAR *, unsigned char FAR * FAR *));
typedef int (*out_func) OF((void FAR *, unsigned char FAR *, unsigned));
#line 747 "zlib.h"
ZEXTERN int ZEXPORT inflateBack OF((z_stream FAR *strm,
                                    in_func in, void FAR *in_desc,
                                    out_func out, void FAR *out_desc));
#line 816 "zlib.h"
ZEXTERN int ZEXPORT inflateBackEnd OF((z_stream FAR *strm));
#line 824 "zlib.h"
ZEXTERN uLong ZEXPORT zlibCompileFlags OF((void));
#line 876 "zlib.h"
ZEXTERN int ZEXPORT compress OF((Bytef *dest,   uLongf *destLen,
                                 const Bytef *source, uLong sourceLen));
#line 891 "zlib.h"
ZEXTERN int ZEXPORT compress2 OF((Bytef *dest,   uLongf *destLen,
                                  const Bytef *source, uLong sourceLen,
                                  int level));
#line 907 "zlib.h"
ZEXTERN uLong ZEXPORT compressBound OF((uLong sourceLen));
#line 914 "zlib.h"
ZEXTERN int ZEXPORT uncompress OF((Bytef *dest,   uLongf *destLen,
                                   const Bytef *source, uLong sourceLen));
#line 933 "zlib.h"
typedef voidp gzFile;
#line 935 "zlib.h"
ZEXTERN gzFile ZEXPORT gzopen  OF((const char *path, const char *mode));
#line 952 "zlib.h"
ZEXTERN gzFile ZEXPORT gzdopen  OF((int fd, const char *mode));
#line 965 "zlib.h"
ZEXTERN int ZEXPORT gzsetparams OF((gzFile file, int level, int strategy));
#line 973 "zlib.h"
ZEXTERN int ZEXPORT    gzread  OF((gzFile file, voidp buf, unsigned len));
#line 981 "zlib.h"
ZEXTERN int ZEXPORT    gzwrite OF((gzFile file,
                                   voidpc buf, unsigned len));
#line 989 "zlib.h"
ZEXTERN int ZEXPORTVA   gzprintf OF((gzFile file, const char *format, ...));
#line 1002 "zlib.h"
ZEXTERN int ZEXPORT gzputs OF((gzFile file, const char *s));
#line 1009 "zlib.h"
ZEXTERN char * ZEXPORT gzgets OF((gzFile file, char *buf, int len));
#line 1018 "zlib.h"
ZEXTERN int ZEXPORT    gzputc OF((gzFile file, int c));
#line 1024 "zlib.h"
ZEXTERN int ZEXPORT    gzgetc OF((gzFile file));
#line 1030 "zlib.h"
ZEXTERN int ZEXPORT    gzungetc OF((int c, gzFile file));
#line 1040 "zlib.h"
ZEXTERN int ZEXPORT    gzflush OF((gzFile file, int flush));
#line 1050 "zlib.h"
ZEXTERN z_off_t ZEXPORT    gzseek OF((gzFile file,
                                      z_off_t offset, int whence));
#line 1068 "zlib.h"
ZEXTERN int ZEXPORT    gzrewind OF((gzFile file));
#line 1075 "zlib.h"
ZEXTERN z_off_t ZEXPORT    gztell OF((gzFile file));
#line 1084 "zlib.h"
ZEXTERN int ZEXPORT gzeof OF((gzFile file));
#line 1090 "zlib.h"
ZEXTERN int ZEXPORT    gzclose OF((gzFile file));
#line 1097 "zlib.h"
ZEXTERN const char * ZEXPORT gzerror OF((gzFile file, int *errnum));
#line 1106 "zlib.h"
ZEXTERN void ZEXPORT gzclearerr OF((gzFile file));
#line 1121 "zlib.h"
ZEXTERN uLong ZEXPORT adler32 OF((uLong adler, const Bytef *buf, uInt len));
#line 1138 "zlib.h"
ZEXTERN uLong ZEXPORT crc32   OF((uLong crc, const Bytef *buf, uInt len));
#line 1160 "zlib.h"
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
ZEXTERN int ZEXPORT inflateBackInit_ OF((z_stream FAR *strm, int windowBits,
                                         unsigned char FAR *window,
                                         const char *version,
                                         int stream_size));
#define deflateInit(strm, level)  deflateInit_((strm), (level),       ZLIB_VERSION, sizeof(z_stream))
#line 1176 "zlib.h"
#define inflateInit(strm)  inflateInit_((strm),                ZLIB_VERSION, sizeof(z_stream))
#line 1178 "zlib.h"
#define deflateInit2(strm, level, method, windowBits, memLevel, strategy)  deflateInit2_((strm),(level),(method),(windowBits),(memLevel), (strategy),           ZLIB_VERSION, sizeof(z_stream))
#line 1181 "zlib.h"
#define inflateInit2(strm, windowBits)  inflateInit2_((strm), (windowBits), ZLIB_VERSION, sizeof(z_stream))
#line 1183 "zlib.h"
#define inflateBackInit(strm, windowBits, window)  inflateBackInit_((strm), (windowBits), (window),  ZLIB_VERSION, sizeof(z_stream))
#line 1188 "zlib.h"
#if !defined(ZUTIL_H) && !defined(NO_DUMMY_DECL)
    struct internal_state {int dummy;};
#endif
#line 1192 "zlib.h"
ZEXTERN const char   * ZEXPORT zError           OF((int));
ZEXTERN int            ZEXPORT inflateSyncPoint OF((z_streamp z));
ZEXTERN const uLongf * ZEXPORT get_crc_table    OF((void));
#line 1196 "zlib.h"
#ifdef __cplusplus
}
#endif
#line 1200 "zlib.h"
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
#line 45 "zip.h"
#ifndef _zip_H
#define _zip_H
#line 48 "zip.h"
#ifdef __cplusplus
extern "C" {
#endif
#line 52 "zip.h"
#ifndef _ZLIB_H
#line 54 "zip.h"
#endif
#line 56 "zip.h"
#ifndef _ZLIBIOAPI_H
#line 58 "zip.h"
#endif
#line 60 "zip.h"
#if defined(STRICTZIP) || defined(STRICTZIPUNZIP)
#line 63 "zip.h"
typedef struct TagzipFile__ { int unused; } zipFile__;
typedef zipFile__ *zipFile;
#else
typedef voidp zipFile;
#endif
#line 69 "zip.h"
#define ZIP_OK                          (0)
#define ZIP_EOF                         (0)
#define ZIP_ERRNO                       (Z_ERRNO)
#define ZIP_PARAMERROR                  (-102)
#define ZIP_BADZIPFILE                  (-103)
#define ZIP_INTERNALERROR               (-104)
#line 76 "zip.h"
#ifndef DEF_MEM_LEVEL
#  if MAX_MEM_LEVEL >= 8
#    define DEF_MEM_LEVEL 8
#  else
#    define DEF_MEM_LEVEL  MAX_MEM_LEVEL
#  endif
#endif
#line 86 "zip.h"
typedef struct tm_zip_s
{
    uInt tm_sec;
    uInt tm_min;
    uInt tm_hour;
    uInt tm_mday;
    uInt tm_mon;
    uInt tm_year;
} tm_zip;
#line 96 "zip.h"
typedef struct
{
    tm_zip      tmz_date;
    uLong       dosDate;
#line 102 "zip.h"
    uLong       internal_fa;
    uLong       external_fa;
} zip_fileinfo;
#line 106 "zip.h"
typedef const char* zipcharpc;
#line 109 "zip.h"
#define APPEND_STATUS_CREATE        (0)
#define APPEND_STATUS_CREATEAFTER   (1)
#define APPEND_STATUS_ADDINZIP      (2)
#line 113 "zip.h"
extern zipFile ZEXPORT zipOpen OF((const char *pathname, int append));
#line 133 "zip.h"
extern zipFile ZEXPORT zipOpen2 OF((const char *pathname,
                                   int append,
                                   zipcharpc* globalcomment,
                                   zlib_filefunc_def* pzlib_filefunc_def));
#line 138 "zip.h"
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
#line 162 "zip.h"
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
#line 178 "zip.h"
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
#line 203 "zip.h"
extern int ZEXPORT zipWriteInFileInZip OF((zipFile file,
                       const void* buf,
                       unsigned len));
#line 210 "zip.h"
extern int ZEXPORT zipCloseFileInZip OF((zipFile file));
#line 215 "zip.h"
extern int ZEXPORT zipCloseFileInZipRaw OF((zipFile file,
                                            uLong uncompressed_size,
                                            uLong crc32));
#line 224 "zip.h"
extern int ZEXPORT zipClose OF((zipFile file,
                const char* global_comment));
#line 230 "zip.h"
#ifdef __cplusplus
}
#endif
#line 234 "zip.h"
#endif
#line 10 "zip.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#line 17 "zip.c"
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
#line 29 "zip.c"
#ifndef local
#  define local static
#endif
#line 34 "zip.c"
#ifndef VERSIONMADEBY
# define VERSIONMADEBY   (0x0)
#endif
#line 38 "zip.c"
#ifndef Z_BUFSIZE
#define Z_BUFSIZE (16384)
#endif
#line 42 "zip.c"
#ifndef Z_MAXFILENAMEINZIP
#define Z_MAXFILENAMEINZIP (256)
#endif
#line 46 "zip.c"
#ifndef ALLOC
# define ALLOC(size) (malloc(size))
#endif
#ifndef TRYFREE
# define TRYFREE(p) {if (p) free(p);}
#endif
#line 60 "zip.c"
#ifndef SEEK_CUR
#define SEEK_CUR    1
#endif
#line 64 "zip.c"
#ifndef SEEK_END
#define SEEK_END    2
#endif
#line 68 "zip.c"
#ifndef SEEK_SET
#define SEEK_SET    0
#endif
#line 72 "zip.c"
#ifndef DEF_MEM_LEVEL
#if MAX_MEM_LEVEL >= 8
#  define DEF_MEM_LEVEL 8
#else
#  define DEF_MEM_LEVEL  MAX_MEM_LEVEL
#endif
#endif
const char zip_copyright[] =
   " zip 1.01 Copyright 1998-2004 Gilles Vollant - http://www.winimage.com/zLibDll";
#line 83 "zip.c"
#define SIZEDATA_INDATABLOCK (4096-(4*4))
#line 85 "zip.c"
#define LOCALHEADERMAGIC    (0x04034b50)
#define CENTRALHEADERMAGIC  (0x02014b50)
#define ENDHEADERMAGIC      (0x06054b50)
#line 89 "zip.c"
#define FLAG_LOCALHEADER_OFFSET (0x06)
#define CRC_LOCALHEADER_OFFSET  (0x0e)
#line 92 "zip.c"
#define SIZECENTRALHEADER (0x2e)
#line 94 "zip.c"
typedef struct linkedlist_datablock_internal_s
{
  struct linkedlist_datablock_internal_s* next_datablock;
  uLong  avail_in_this_block;
  uLong  filled_in_this_block;
  uLong  unused;
  unsigned char data[SIZEDATA_INDATABLOCK];
} linkedlist_datablock_internal;
#line 103 "zip.c"
typedef struct linkedlist_data_s
{
    linkedlist_datablock_internal* first_block;
    linkedlist_datablock_internal* last_block;
} linkedlist_data;
#line 110 "zip.c"
typedef struct
{
    z_stream stream;
    int  stream_initialised;
    uInt pos_in_buffered_data;
#line 116 "zip.c"
    uLong pos_local_header;
#line 118 "zip.c"
    char* central_header;
    uLong size_centralheader;
    uLong flag;
#line 122 "zip.c"
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
#line 135 "zip.c"
typedef struct
{
    zlib_filefunc_def z_filefunc;
    voidpf filestream;
    linkedlist_data central_dir;
    int  in_opened_file_inzip;
    curfile_info ci;
#line 143 "zip.c"
    uLong begin_pos;
    uLong add_position_when_writting_offset;
    uLong number_entry;
} zip_internal;
#line 150 "zip.c"
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
#line 153 "zip.c"
#endif
#line 155 "zip.c"
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
#line 169 "zip.c"
local void free_datablock(linkedlist_datablock_internal *ldi)
#line 171 "zip.c"
{
    while (ldi!=NULL)
    {
        linkedlist_datablock_internal* ldinext = ldi->next_datablock;
        TRYFREE(ldi);
        ldi = ldinext;
    }
}
#line 180 "zip.c"
local void init_linkedlist(linkedlist_data *ll)
#line 182 "zip.c"
{
    ll->first_block = ll->last_block = NULL;
}
#line 186 "zip.c"
local void free_linkedlist(linkedlist_data *ll)
#line 188 "zip.c"
{
    free_datablock(ll->first_block);
    ll->first_block = ll->last_block = NULL;
}
#line 194 "zip.c"
local int add_data_in_datablock(linkedlist_data *ll, const void *buf, uLong len)
#line 198 "zip.c"
{
    linkedlist_datablock_internal* ldi;
    const unsigned char* from_copy;
#line 202 "zip.c"
    if (ll==NULL)
        return ZIP_INTERNALERROR;
#line 205 "zip.c"
    if (ll->last_block == NULL)
    {
        ll->first_block = ll->last_block = allocate_new_datablock();
        if (ll->first_block == NULL)
            return ZIP_INTERNALERROR;
    }
#line 212 "zip.c"
    ldi = ll->last_block;
    from_copy = (unsigned char*)buf;
#line 215 "zip.c"
    while (len>0)
    {
        uInt copy_this;
        uInt i;
        unsigned char* to_copy;
#line 221 "zip.c"
        if (ldi->avail_in_this_block==0)
        {
            ldi->next_datablock = allocate_new_datablock();
            if (ldi->next_datablock == NULL)
                return ZIP_INTERNALERROR;
            ldi = ldi->next_datablock ;
            ll->last_block = ldi;
        }
#line 230 "zip.c"
        if (ldi->avail_in_this_block < len)
            copy_this = (uInt)ldi->avail_in_this_block;
        else
            copy_this = (uInt)len;
#line 235 "zip.c"
        to_copy = &(ldi->data[ldi->filled_in_this_block]);
#line 237 "zip.c"
        for (i=0;i<copy_this;i++)
            *(to_copy+i)=*(from_copy+i);
#line 240 "zip.c"
        ldi->filled_in_this_block += copy_this;
        ldi->avail_in_this_block -= copy_this;
        from_copy += copy_this ;
        len -= copy_this;
    }
    return ZIP_OK;
}
#line 252 "zip.c"
#ifndef NO_ADDFILEINEXISTINGZIP
#line 258 "zip.c"
local int ziplocal_putValue OF((const zlib_filefunc_def* pzlib_filefunc_def,
                                voidpf filestream, uLong x, int nbByte));
local int ziplocal_putValue (const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, uLong x, int nbByte)
#line 265 "zip.c"
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
#line 281 "zip.c"
    if (ZWRITE(*pzlib_filefunc_def,filestream,buf,nbByte)!=(uLong)nbByte)
        return ZIP_ERRNO;
    else
        return ZIP_OK;
}
#line 287 "zip.c"
local void ziplocal_putValue_inmemory OF((void* dest, uLong x, int nbByte));
local void ziplocal_putValue_inmemory (void *dest, uLong x, int nbByte)
#line 292 "zip.c"
{
    unsigned char* buf=(unsigned char*)dest;
    int n;
    for (n = 0; n < nbByte; n++) {
        buf[n] = (unsigned char)(x & 0xff);
        x >>= 8;
    }
#line 300 "zip.c"
    if (x != 0)
    {
       for (n = 0; n < nbByte; n++)
       {
          buf[n] = 0xff;
       }
    }
}
#line 312 "zip.c"
local uLong ziplocal_TmzDateToDosDate(const tm_zip *ptm, uLong dosDate)
#line 315 "zip.c"
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
#line 329 "zip.c"
local int ziplocal_getByte OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream,
    int *pi));
#line 334 "zip.c"
local int ziplocal_getByte(const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, int *pi)
#line 338 "zip.c"
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
#line 359 "zip.c"
local int ziplocal_getShort OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream,
    uLong *pX));
#line 364 "zip.c"
local int ziplocal_getShort (const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, uLong *pX)
#line 368 "zip.c"
{
    uLong x ;
    int i;
    int err;
#line 373 "zip.c"
    err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x = (uLong)i;
#line 376 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<8;
#line 380 "zip.c"
    if (err==ZIP_OK)
        *pX = x;
    else
        *pX = 0;
    return err;
}
#line 387 "zip.c"
local int ziplocal_getLong OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream,
    uLong *pX));
#line 392 "zip.c"
local int ziplocal_getLong (const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream, uLong *pX)
#line 396 "zip.c"
{
    uLong x ;
    int i;
    int err;
#line 401 "zip.c"
    err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x = (uLong)i;
#line 404 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<8;
#line 408 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<16;
#line 412 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_getByte(pzlib_filefunc_def,filestream,&i);
    x += ((uLong)i)<<24;
#line 416 "zip.c"
    if (err==ZIP_OK)
        *pX = x;
    else
        *pX = 0;
    return err;
}
#line 423 "zip.c"
#ifndef BUFREADCOMMENT
#define BUFREADCOMMENT (0x400)
#endif
#line 430 "zip.c"
local uLong ziplocal_SearchCentralDir OF((
    const zlib_filefunc_def* pzlib_filefunc_def,
    voidpf filestream));
#line 434 "zip.c"
local uLong ziplocal_SearchCentralDir(const zlib_filefunc_def *pzlib_filefunc_def, voidpf filestream)
#line 437 "zip.c"
{
    unsigned char* buf;
    uLong uSizeFile;
    uLong uBackRead;
    uLong uMaxBack=0xffff;
    uLong uPosFound=0;
#line 444 "zip.c"
    if (ZSEEK(*pzlib_filefunc_def,filestream,0,ZLIB_FILEFUNC_SEEK_END) != 0)
        return 0;
#line 448 "zip.c"
    uSizeFile = ZTELL(*pzlib_filefunc_def,filestream);
#line 450 "zip.c"
    if (uMaxBack>uSizeFile)
        uMaxBack = uSizeFile;
#line 453 "zip.c"
    buf = (unsigned char*)ALLOC(BUFREADCOMMENT+4);
    if (buf==NULL)
        return 0;
#line 457 "zip.c"
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
#line 468 "zip.c"
        uReadSize = ((BUFREADCOMMENT+4) < (uSizeFile-uReadPos)) ?
                     (BUFREADCOMMENT+4) : (uSizeFile-uReadPos);
        if (ZSEEK(*pzlib_filefunc_def,filestream,uReadPos,ZLIB_FILEFUNC_SEEK_SET)!=0)
            break;
#line 473 "zip.c"
        if (ZREAD(*pzlib_filefunc_def,filestream,buf,uReadSize)!=uReadSize)
            break;
#line 476 "zip.c"
        for (i=(int)uReadSize-3; (i--)>0;)
            if (((*(buf+i))==0x50) && ((*(buf+i+1))==0x4b) &&
                ((*(buf+i+2))==0x05) && ((*(buf+i+3))==0x06))
            {
                uPosFound = uReadPos+i;
                break;
            }
#line 484 "zip.c"
        if (uPosFound!=0)
            break;
    }
    TRYFREE(buf);
    return uPosFound;
}
#endif
#line 493 "zip.c"
extern zipFile ZEXPORT zipOpen2 (const char *pathname, int append, zipcharpc *globalcomment, zlib_filefunc_def *pzlib_filefunc_def)
#line 498 "zip.c"
;
#line 658 "zip.c"
extern zipFile ZEXPORT zipOpen (const char *pathname, int append)
#line 661 "zip.c"
;
#line 665 "zip.c"
extern int ZEXPORT zipOpenNewFileInZip3 (zipFile file, const char *filename, const zip_fileinfo *zipfi, const void *extrafield_local, uInt size_extrafield_local, const void *extrafield_global, uInt size_extrafield_global, const char *comment, int method, int level, int raw, int windowBits, int memLevel, int strategy, const char *password, uLong crcForCrypting)
#line 687 "zip.c"
;
#line 874 "zip.c"
extern int ZEXPORT zipOpenNewFileInZip2(zipFile file, const char *filename, const zip_fileinfo *zipfi, const void *extrafield_local, uInt size_extrafield_local, const void *extrafield_global, uInt size_extrafield_global, const char *comment, int method, int level, int raw)
#line 889 "zip.c"
;
#line 898 "zip.c"
extern int ZEXPORT zipOpenNewFileInZip (zipFile file, const char *filename, const zip_fileinfo *zipfi, const void *extrafield_local, uInt size_extrafield_local, const void *extrafield_global, uInt size_extrafield_global, const char *comment, int method, int level)
#line 912 "zip.c"
;
#line 919 "zip.c"
local int zipFlushWriteBuffer(zip_internal *zi)
#line 921 "zip.c"
{
    int err=ZIP_OK;
#line 924 "zip.c"
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
#line 941 "zip.c"
extern int ZEXPORT zipWriteInFileInZip (zipFile file, const void *buf, unsigned len)
#line 945 "zip.c"
;
#line 1006 "zip.c"
extern int ZEXPORT zipCloseFileInZipRaw (zipFile file, uLong uncompressed_size, uLong crc32)
#line 1010 "zip.c"
;
#line 1102 "zip.c"
extern int ZEXPORT zipCloseFileInZip (zipFile file)
#line 1104 "zip.c"
;
#line 1108 "zip.c"
extern int ZEXPORT zipClose (zipFile file, const char *global_comment)
#line 1111 "zip.c"
{
    zip_internal* zi;
    int err = 0;
    uLong size_centraldir = 0;
    uLong centraldir_pos_inzip ;
    uInt size_global_comment;
    if (file == NULL)
        return ZIP_PARAMERROR;
    zi = (zip_internal*)file;
#line 1121 "zip.c"
    if (zi->in_opened_file_inzip == 1)
    {
        err = zipCloseFileInZip (file);
    }
#line 1126 "zip.c"
    if (global_comment==NULL)
        size_global_comment = 0;
    else
        size_global_comment = (uInt)strlen(global_comment);
#line 1132 "zip.c"
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
#line 1144 "zip.c"
            size_centraldir += ldi->filled_in_this_block;
            ldi = ldi->next_datablock;
        }
    }
    free_datablock(zi->central_dir.first_block);
#line 1150 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)ENDHEADERMAGIC,4);
#line 1153 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)0,2);
#line 1156 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)0,2);
#line 1159 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)zi->number_entry,2);
#line 1162 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)zi->number_entry,2);
#line 1165 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)size_centraldir,4);
#line 1168 "zip.c"
    if (err==ZIP_OK)
#line 1170 "zip.c"
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,
                                (uLong)(centraldir_pos_inzip - zi->add_position_when_writting_offset),4);
#line 1173 "zip.c"
    if (err==ZIP_OK)
        err = ziplocal_putValue(&zi->z_filefunc,zi->filestream,(uLong)size_global_comment,2);
#line 1176 "zip.c"
    if ((err==ZIP_OK) && (size_global_comment>0))
        if (ZWRITE(zi->z_filefunc,zi->filestream,
                   global_comment,size_global_comment) != size_global_comment)
                err = ZIP_ERRNO;
#line 1181 "zip.c"
    if (ZCLOSE(zi->z_filefunc,zi->filestream) != 0)
        if (err == ZIP_OK)
            err = ZIP_ERRNO;
#line 1185 "zip.c"
    TRYFREE(zi);
#line 1187 "zip.c"
    return err;
}
}
