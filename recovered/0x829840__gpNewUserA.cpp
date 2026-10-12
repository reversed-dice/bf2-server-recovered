// FUNCTION: BF2 0x829840
// upstream GP/gp.c gpNewUserA
#define _LINUX
#define _UNIX
#line 1 "GP/gp.c"
 














#include <stdlib.h>
#include <string.h>
#line 1 "GP/gpi.h"
 












#ifndef _GPI_H_
#define _GPI_H_



#line 1 "common/gsCommon.h"


#ifndef __GSCOMMON_H__
#define __GSCOMMON_H__













#ifdef GS_PEER
	#define	UNIQUEID			
#endif



#line 1 "common/gsPlatform.h"


#ifndef __GSPLATFORM_H__
#define __GSPLATFORM_H__





















#ifdef __mips64
	#ifndef _PS2
		#define _PS2
	#endif

	
	#if !defined(SN_SYSTEMS) && !defined(EENET) && !defined(INSOCK)
		#error "PlayStation2 network stack was not defined!"
	#endif
#endif

#if defined(_LINUX) || defined(_MACOSX)
	#define _UNIX
#endif

#if defined(_XBOX) || defined (_X360)
#if _XBOX_VER >= 200
	#define _X360
#endif
#endif










#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <wchar.h>



#if defined(_XBOX)
	#include <Xtl.h>


#elif defined(_WIN32)
	#define WIN32_LEAN_AND_MEAN
	#include <windows.h>
	#include <limits.h>
	#include <time.h>

	#if defined(GSI_WINSOCK2)
		#include <winsock2.h>
	#else
		#include <winsock.h>
	#endif
	
	#if (_MSC_VER > 1300)
		#define itoa(v, s, r) _itoa(v, s, r)
	#endif

#elif defined(_PS2)
	
	#ifdef EENET 
		#include <libeenet.h>
		#include <eenetctl.h>
		#include <ifaddrs.h>
		#include <sys/socket.h>
		#include <sys/errno.h>
		#include <netinet/in.h>
		#include <arpa/inet.h>
		#include <net/if.h>
		#include <sys/select.h>
		#include <malloc.h>
		
	#endif 

	
	#include <eekernel.h>
	#include <stdio.h>
	#include <malloc.h>
	#include <sifdev.h>
	#include <sifrpc.h>
	#include <sifcmd.h>
	#include <ilink.h>
	#include <ilsock.h>
	#include <ilsocksf.h>
	#include <limits.h>
	
	#ifdef SN_SYSTEMS
		
		
		
		
		#undef FD_CLR	
		#undef FD_ZERO
		#undef FD_SET	
		#undef FD_ISSET
		#undef FD_SETSIZE
		#undef fd_set
#line 123 "common/gsPlatform.h"
#line 124 "common/gsPlatform.h"
#line 125 "common/gsPlatform.h"
#line 126 "common/gsPlatform.h"
#line 127 "common/gsPlatform.h"
	#endif 

	#ifdef INSOCK
#line 131 "common/gsPlatform.h"
#line 132 "common/gsPlatform.h"
#line 133 "common/gsPlatform.h"
		
	#endif 


#elif defined(_UNIX)
	#include <unistd.h>
	#include <sys/types.h>
	#include <sys/socket.h>
	#include <stdio.h>
	#include <sys/types.h>
	#include <sys/socket.h>
	#include <sys/ioctl.h>
	#include <netinet/in.h>

	
	
	#ifndef NOFILE
		
		#include <netdb.h>
		#undef NOFILE
	#else
		
		#include <netdb.h>
	#endif

	#include <arpa/inet.h>
	#include <errno.h>
	#include <sys/time.h>
	#include <limits.h>
	
	#include <netinet/tcp.h>

    
    #define SB_NO_ICMP_SUPPORT


#elif defined(_NITRO)
	#include <nitro.h>
	#define NINET_NWBASE_MD5_H_  
	#include <nitroWiFi.h>
	#include <extras.h>  
    #include <limits.h>
	
	
	#define SB_NO_ICMP_SUPPORT


#elif defined(_PSP)
	#include <kernel.h>
	#include <pspnet.h>
	#include <pspnet_error.h>
	#include <pspnet_inet.h>
	#include <pspnet/sys/select.h>
	#include <pspnet_resolver.h>
	#include <pspnet_apctl.h>
	#include <pspnet_ap_dialog_dummy.h>
	#include <rtcsvc.h>
	#include <errno.h>
	#include <wlan.h>

	#include <pspnet/sys/socket.h>
	#include <pspnet/netinet/in.h>
	#include <utility\utility_common.h>
	#include <utility\utility_netconf.h>
	#include <utility\utility_module.h>

#elif defined(_PS3)
#include <netex/errno.h>
	#include <sys/process.h>
	#include <sys/time.h>
	#include <sys/types.h>	
	#include <sys/select.h>
	#include <sys/socket.h>
	#include <sys/sys_time.h>
	#include <sys/timer.h>
	#include <errno.h>
	#include <netdb.h>
	#include <netinet/in.h>
	#include <arpa/inet.h>
	#include <netex/net.h>
	#include <netex/ifctl.h>

	#include <limits.h>
	#include <time.h>


#elif defined(_REVOLUTION)
	#include <revolution.h>
	#include <revolution/soex.h>
	#include <revolution/ncd.h>	
    #include <limits.h>

	
	#define SB_NO_ICMP_SUPPORT


#else
	#error "The GameSpy SDKs do not support this operating system"

#endif 




#if defined(_WIN32)
	#define GS_STATIC_CALLBACK __cdecl
#else
	#define GS_STATIC_CALLBACK
#endif



#if defined(_PS3) || defined(_REVOLUTION) || defined(_X360) 
	#define GSI_BIG_ENDIAN
#endif
#ifndef GSI_BIG_ENDIAN
	#define GSI_LITTLE_ENDIAN
#endif



#include <ctype.h>

#if defined(_MACOSX)
	#undef _T
#endif

#include <assert.h>

#if defined(GS_NO_FILE) || defined(_PS2) || defined(_PS3) || defined(_NITRO) || defined(_PSP) || defined(_XBOX)
	#define NOFILE
#endif

#if defined(_PSP) || defined(_NITRO)
	#define GS_WIRELESS_DEVICE
#endif

#if !defined(GSI_DOMAIN_NAME)
	#define GSI_DOMAIN_NAME "gamespy.com"
#endif







typedef char              gsi_i8;
typedef unsigned char     gsi_u8;
typedef short             gsi_i16;
typedef unsigned short    gsi_u16;
typedef int               gsi_i32;
typedef unsigned int      gsi_u32;
typedef unsigned int      gsi_time;  


typedef gsi_i32           goa_int32;  
typedef gsi_u32           goa_uint32; 

typedef int               gsi_bool;
#define gsi_false         ((gsi_bool)0)
#define gsi_true          ((gsi_bool)1)
#define gsi_is_false(x)   ((x) == gsi_false)
#define gsi_is_true(x)    ((x) != gsi_false)


#if defined(_INTEGRAL_MAX_BITS) && !defined(GSI_MAX_INTEGRAL_BITS)
	#define GSI_MAX_INTEGRAL_BITS   _INTEGRAL_MAX_BITS
#else
	#define GSI_MAX_INTEGRAL_BITS   32
#endif


#ifdef _PS2
	typedef signed long           gsi_i64;
	typedef unsigned long         gsi_u64;
#elif defined(_WIN32)
	#if (!defined(_M_IX86) || (defined(_INTEGRAL_MAX_BITS) && _INTEGRAL_MAX_BITS >= 64))
	typedef __int64               gsi_i64;
	typedef unsigned __int64      gsi_u64;
	#endif
#elif defined(_NITRO)
	typedef s64                   gsi_i64;
	typedef u64                   gsi_u64;
#elif defined (_PSP)
	typedef long long             gsi_i64;
	typedef unsigned long long    gsi_u64;
#elif defined (_PS3)
	typedef int64_t               gsi_i64;
	typedef uint64_t              gsi_u64;
#elif defined (_REVOLUTION)
	typedef signed long long      gsi_i64;
	typedef unsigned long long    gsi_u64;
#else  
	typedef long long             gsi_i64;
	typedef unsigned long long    gsi_u64;
#endif 

#ifndef GSI_UNICODE
	#define gsi_char  char
#else
	#define gsi_char  unsigned short
#endif 



#define GSI_MIN_I8        CHAR_MIN
#define GSI_MAX_I8        CHAR_MAX
#define GSI_MAX_U8        UCHAR_MAX

#define GSI_MIN_I16       SHRT_MIN
#define GSI_MAX_I16       SHRT_MAX
#define GSI_MAX_U16       USHRT_MAX

#define GSI_MIN_I32       INT_MIN
#define GSI_MAX_I32       INT_MAX
#define GSI_MAX_U32       UINT_MAX

#if (GSI_MAX_INTEGRAL_BITS >= 64)
#define GSI_MIN_I64     (-9223372036854775807 - 1)
#define GSI_MAX_I64       9223372036854775807
#define GSI_MAX_U64       0xffffffffffffffffui64
#endif

#ifdef __cplusplus
extern "C" {
#endif




#undef _vftprintf
#undef _ftprintf
#undef _stprintf
#undef _tprintf
#undef _tcscpy
#undef _tcsncpy
#undef _tcscat
#undef _tcslen
#undef _tcschr
#undef _tcscmp
#undef _tfopen
#undef _T
#undef _tsnprintf

#ifdef GSI_UNICODE
	#define _vftprintf  vfwprintf
	#define _ftprintf   fwprintf
	#define _stprintf   swprintf
	#define _tprintf    wprintf
	#define _tcscpy     wcscpy
	#define _tcsncpy(d, s, l)	wcsncpy((wchar_t *)d, (wchar_t *)s, l)
	#define _tcscat     wcscat
	#define _tcslen     wcslen
	#define _tcschr     wcschr
	#define _tcscmp(s1, s2)     wcscmp((wchar_t *)s1, (wchar_t *)s2)
	#define _tfopen     _wfopen
	#define _T(a)       L##a

	#if defined(_WIN32) || defined(_PS2)
		#define _tsnprintf _snwprintf
	#else
		#define _tsnprintf swprintf
	#endif
#else
	#define _vftprintf  vfprintf
	#define _ftprintf   fprintf
	#define _stprintf   sprintf
	#define _tprintf    printf
	#define _tcscpy     strcpy
	#define _tcsncpy	strncpy
	#define _tcscat     strcat
	#define _tcslen     strlen
#if defined (_MSC_VER)
#if (_MSC_VER < 1400)
	#define _tcschr	    strchr
#endif
#else
	#define _tcschr	    strchr
#endif
	#define _tcscmp     strcmp
	#define _tfopen     fopen
#ifndef _T	
	#define _T(a)       a
#endif

	#if defined(_WIN32)
		#define _tsnprintf _snprintf
	#else
		#define _tsnprintf snprintf
	#endif
#endif 

#if defined(_WIN32)
	#define snprintf _snprintf
#endif 

#if defined(_WIN32)
	#define strcasecmp _stricmp
	#define strncasecmp _strnicmp
#endif

#if !defined(_WIN32)
	char *_strlwr(char *string);
	char *_strupr(char *string);
#endif

char * goastrdup(const char *src);
unsigned short * goawstrdup(const unsigned short *src);



 










#if defined _WIN32
	#define PRE_ALIGN(x)	__declspec(align(x))	
	#define POST_ALIGN(x)	
#elif defined  (_PS2) || defined (_PSP) || defined (_PS3) 
	#define PRE_ALIGN(x)	
	#define POST_ALIGN(x)	__attribute__((aligned (x)))		
#elif defined (_REVOLUTION)
	#define PRE_ALIGN(x)  
	#define POST_ALIGN(x) __attribute__((aligned(32)))
#else
	
	#define PRE_ALIGN(x)	
	#define POST_ALIGN(x)	
#endif

#define DIM( x )				( sizeof( x ) / sizeof((x)[ 0 ]))

unsigned char * gsiFloatSwap(unsigned char buf[4], float);
float gsiFloatUnswap(unsigned char buf[4]); 
extern gsi_u16 gsiByteOrderSwap16(gsi_u16);
extern gsi_u32 gsiByteOrderSwap32(gsi_u32);
extern gsi_u64 gsiByteOrderSwap64(gsi_u64);


#ifdef __cplusplus
}
#endif



#endif 


#line 25 "common/gsCommon.h"
#line 1 "common/gsPlatformSocket.h"


#ifndef __GSSOCKET_H__
#define __GSSOCKET_H__




#line 10 "common/gsPlatformSocket.h"


#ifdef __cplusplus
extern "C" {
#endif








#if defined _PS3 || defined _PSP
	#define  gsiSocketIsError(theReturnValue)		((theReturnValue) <  0)
	#define  gsiSocketIsNotError(theReturnValue)	((theReturnValue) >= 0)
#else
	#define  gsiSocketIsError(theReturnValue)		((theReturnValue) == -1)
	#define  gsiSocketIsNotError(theReturnValue)	((theReturnValue) != -1)
#endif


#if (0) 



typedef enum
{
	GS_SOCKERR_NONE = 0,   
	GS_SOCKERR_EWOULDBLOCK,   
	GS_SOCKERR_EINPROGRESS,      
	GS_SOCKERR_EALREADY,         
	GS_SOCKERR_ENOTSOCK,         
	GS_SOCKERR_EDESTADDRREQ,     
	GS_SOCKERR_EMSGSIZE,         
	GS_SOCKERR_EPROTOTYPE,       
	GS_SOCKERR_ENOPROTOOPT ,     
	GS_SOCKERR_EPROTONOSUPPORT , 
	GS_SOCKERR_ESOCKTNOSUPPORT,  
	GS_SOCKERR_EOPNOTSUPP  ,     
	GS_SOCKERR_EPFNOSUPPORT,     
	GS_SOCKERR_EAFNOSUPPORT,     
	GS_SOCKERR_EADDRINUSE  ,     
	GS_SOCKERR_EADDRNOTAVAIL ,   
	GS_SOCKERR_ENETDOWN   ,      
	GS_SOCKERR_ENETUNREACH  ,    
	GS_SOCKERR_ENETRESET,        
	GS_SOCKERR_ECONNABORTED,     
	GS_SOCKERR_ECONNRESET ,      
	GS_SOCKERR_ENOBUFS ,         
	GS_SOCKERR_EISCONN ,         
	GS_SOCKERR_ENOTCONN,         
	GS_SOCKERR_ESHUTDOWN,        
	GS_SOCKERR_ETOOMANYREFS ,    
	GS_SOCKERR_ETIMEDOUT,        
	GS_SOCKERR_ECONNREFUSED,     
	GS_SOCKERR_ELOOP,            
	GS_SOCKERR_ENAMETOOLONG,     
	GS_SOCKERR_EHOSTDOWN		,        
	GS_SOCKERR_EHOSTUNREACH		,    
	GS_SOCKERR_ENOTEMPTY		,        
	GS_SOCKERR_EPROCLIM			,        
	GS_SOCKERR_EUSERS			,           
	GS_SOCKERR_EDQUOT			,           
	GS_SOCKERR_ESTALE			,           
	GS_SOCKERR_EREMOTE			,          
	GS_SOCKERR_EINVAL			,  
	GS_SOCKERR_COUNT			,  
} GS_SOCKET_ERROR;

#define  gsiSocketIsError(theReturnValue)		((theReturnValue) != GS_SOCKERR_NONE)
#define  gsiSocketIsNotError(theReturnValue)	((theReturnValue) == GS_SOCKERR_NONE)

typedef int GSI_SOCKET;


typedef struct 
{
	
	u_short sa_family;               
	char    sa_data[14];             
} GS_SOCKADDR;

GSI_SOCKET		gsiSocketAccept		(GSI_SOCKET sock, GS_SOCKADDR* addr, int* len);
GS_SOCKET_ERROR gsiSocketSocket		(int pf, int type, int protocol);
GS_SOCKET_ERROR gsiSocketClosesocket(GSI_SOCKET sock);
GS_SOCKET_ERROR gsiSocketShutdown	(GSI_SOCKET sock, int how);
GS_SOCKET_ERROR gsiSocketBind		(GSI_SOCKET sock, const GS_SOCKADDR* addr, int len);
GS_SOCKET_ERROR gsiSocketConnect	(GSI_SOCKET sock, const GS_SOCKADDR* addr, int len);
GS_SOCKET_ERROR gsiSocketListen		(GSI_SOCKET sock, int backlog);
GS_SOCKET_ERROR gsiSocketRecv		(GSI_SOCKET sock, char* buf, int len, int flags);
GS_SOCKET_ERROR gsiSocketRecvfrom	(GSI_SOCKET sock, char* buf, int len, int flags, GS_SOCKADDR* addr, int* fromlen);
GS_SOCKET_ERROR gsiSocketSend		(GSI_SOCKET sock, const char* buf, int len, int flags);
GS_SOCKET_ERROR gsiSocketSendto		(GSI_SOCKET sock, const char* buf, int len, int flags, const GS_SOCKADDR* addr, int tolen);
GS_SOCKET_ERROR gsiSocketGetsockopt	(GSI_SOCKET sock, int level, int optname, char* optval, int* optlen);
GS_SOCKET_ERROR gsiSocketSetsockopt	(GSI_SOCKET sock, int level, int optname, const char* optval, int optlen);
GS_SOCKET_ERROR gsiSocketGetsockname(GSI_SOCKET sock, GS_SOCKADDR* addr, int* len);
GS_SOCKET_ERROR GOAGetLastError		(GSI_SOCKET sock);

gsiSocketGethostbyaddr(a,l,t) SOC_GetHostByAddr(a,l,t)
gsiSocketGethostbyname(n) SOC_GetHostByName(n)


#endif







#ifndef INADDR_NONE
   #define INADDR_NONE 0xffffffff
#endif

#ifndef INVALID_SOCKET 
	#define INVALID_SOCKET (-1)
#endif






#if defined(_PSP)
	#define AF_INET     SCE_NET_INET_AF_INET
	#define SOCK_STREAM SCE_NET_INET_SOCK_STREAM
	#define SOCK_DGRAM  SCE_NET_INET_SOCK_DGRAM
	#define SOCK_RAW    SCE_NET_INET_SOCK_RAW
	#define INADDR_ANY  SCE_NET_INET_INADDR_ANY
	#define SOL_SOCKET  SCE_NET_INET_SOL_SOCKET
	#define SO_SNDBUF   SCE_NET_INET_SO_SNDBUF
	#define SO_RCVBUF   SCE_NET_INET_SO_RCVBUF
	#define SO_NBIO     SCE_NET_INET_SO_NBIO
	#define SO_BROADCAST SCE_NET_INET_SO_BROADCAST
    #define SO_KEEPALIVE SCE_NET_INET_SO_KEEPALIVE
    #define SO_REUSEADDR SCE_NET_INET_SO_REUSEADDR

	#define IPPROTO_TCP SCE_NET_INET_IPPROTO_TCP 
	#define IPPROTO_UDP SCE_NET_INET_IPPROTO_UDP 
	#define IPPROTO_ICMP SCE_NET_INET_IPPROTO_ICMP 

	
	#define in_addr     SceNetInetInAddr
	#define sockaddr_in	SceNetInetSockaddrIn
	#define sockaddr    SceNetInetSockaddr

	
	
	#if defined(_SYS_TYPES_H) && defined(FD_SET)
		#undef fd_set
		#undef FD_SET
		#undef FD_CLR
		#undef FD_ZERO
		#undef timeval
		#undef FD_SETSIZE	
	#endif
	#define fd_set  SceNetInetFdSet
	#define timeval SceNetInetTimeval
	#define FD_SET  SceNetInetFD_SET
	#define FD_CLR  SceNetInetFD_CLR
	#define FD_ZERO SceNetInetFD_ZERO
	#define FD_SETSIZE SCE_NET_INET_FD_SETSIZE

	
	#define htonl		sceNetHtonl
	#define ntohl		sceNetNtohl
	#define htons		sceNetHtons
	#define ntohs		sceNetNtohs
	#define socket      sceNetInetSocket
    #define shutdown    sceNetInetShutdown
	#define closesocket sceNetInetClose
	
	#define setsockopt					  sceNetInetSetsockopt
	#define getsockopt(s, l, on, ov, ol)  sceNetInetGetsockopt(s, l, on, ov, (SceNetInetSocklen_t *)ol)

	#define bind			sceNetInetBind
	#define select			sceNetInetSelect

	#define connect			sceNetInetConnect
    #define listen			sceNetInetListen
	#define accept(s,a,l)	sceNetInetAccept(s, a, (SceNetInetSocklen_t *)l)
    
	#define send		sceNetInetSend  
	#define recv		sceNetInetRecv
	#define sendto		sceNetInetSendto 
	#define recvfrom(s, b, l, f, fr, fl)	sceNetInetRecvfrom(s, b, l, f, fr, (SceNetInetSocklen_t *)fl)

	
	#define inet_addr   sceNetInetInetAddr
	
	
	#define gethostname 
	#define getsockname(s,n,l) sceNetInetGetsockname(s, n, (SceNetInetSocklen_t *)l)
	
    #define GOAGetLastError(s) sceNetInetGetErrno()
	
	
	struct hostent
	{
		char* h_name;       
		char** h_aliases;    
		gsi_u16 h_addrtype; 
		gsi_u16 h_length;   
		char** h_addr_list; 
	};

	#define gethostbyname gsSocketGetHostByName
	#define inet_ntoa     gsSocketInetNtoa

	#define GSI_RESOLVER_TIMEOUT  (5*1000*1000) 
	#define GSI_RESOLVER_RETRY    (2)

	struct hostent* gsSocketGetHostByName(const char* name); 
	const char* gsSocketInetNtoa(struct in_addr in);


#endif 


#if defined(_XBOX)
	#if defined(_X360)
		
		struct hostent
		{
			char* h_name;       
			char** h_aliases;    
			gsi_u16 h_addrtype; 
			gsi_u16 h_length;   
			char** h_addr_list; 
		};

		typedef struct hostent HOSTENT;
		struct hostent * gethostbyname(const char* name);
	#else
		typedef int HOSTENT;
	#endif

	char * inet_ntoa(IN_ADDR in_addr);
#endif

#if defined(SN_SYSTEMS) 
	#define IPPROTO_TCP PF_INET
	#define IPPROTO_UDP PF_INET
	#define FD_SETSIZE  SN_MAX_SOCKETS
#endif


#if defined(_REVOLUTION) 
	#define WSAEWOULDBLOCK      SO_EWOULDBLOCK             
	#define WSAEINPROGRESS      SO_EINPROGRESS             
	#define WSAEALREADY         SO_EALREADY                
	#define WSAENOTSOCK         SO_ENOTSOCK                
	#define WSAEDESTADDRREQ     SO_EDESTADDRREQ            
	#define WSAEMSGSIZE         SO_EMSGSIZE                
	#define WSAEPROTOTYPE       SO_EPROTOTYPE              
	#define WSAENOPROTOOPT      SO_ENOPROTOOPT             
	#define WSAEPROTONOSUPPORT  SO_EPROTONOSUPPORT         
	#define WSAEOPNOTSUPP       SO_EOPNOTSUPP              
	#define WSAEAFNOSUPPORT     SO_EAFNOSUPPORT            
	#define WSAEADDRINUSE       SO_EADDRINUSE              
	#define WSAEADDRNOTAVAIL    SO_EADDRNOTAVAIL           
	#define WSAENETDOWN         SO_ENETDOWN                
	#define WSAENETUNREACH      SO_ENETUNREACH             
	#define WSAENETRESET        SO_ENETRESET               
	#define WSAECONNABORTED     SO_ECONNABORTED            
	#define WSAECONNRESET       SO_ECONNRESET              
	#define WSAENOBUFS          SO_ENOBUFS                 
	#define WSAEISCONN          SO_EISCONN                 
	#define WSAENOTCONN         SO_ENOTCONN                
	#define WSAETIMEDOUT        SO_ETIMEDOUT               
	#define WSAECONNREFUSED     SO_ECONNREFUSED            
	#define WSAELOOP            SO_ELOOP                   
	#define WSAENAMETOOLONG     SO_ENAMETOOLONG            
	#define WSAEHOSTUNREACH     SO_EHOSTUNREACH            
	#define WSAENOTEMPTY        SO_ENOTEMPTY               
	#define WSAEDQUOT           SO_EDQUOT                  
	#define WSAESTALE           SO_ESTALE                  
	#define WSAEINVAL           SO_EINVAL
#elif defined(_NITRO)
	#define WSAEWOULDBLOCK      SOC_EWOULDBLOCK             
	#define WSAEINPROGRESS      SOC_EINPROGRESS             
	#define WSAEALREADY         SOC_EALREADY                
	#define WSAENOTSOCK         SOC_ENOTSOCK                
	#define WSAEDESTADDRREQ     SOC_EDESTADDRREQ            
	#define WSAEMSGSIZE         SOC_EMSGSIZE                
	#define WSAEPROTOTYPE       SOC_EPROTOTYPE              
	#define WSAENOPROTOOPT      SOC_ENOPROTOOPT             
	#define WSAEPROTONOSUPPORT  SOC_EPROTONOSUPPORT         
	#define WSAEOPNOTSUPP       SOC_EOPNOTSUPP              
	#define WSAEAFNOSUPPORT     SOC_EAFNOSUPPORT            
	#define WSAEADDRINUSE       SOC_EADDRINUSE              
	#define WSAEADDRNOTAVAIL    SOC_EADDRNOTAVAIL           
	#define WSAENETDOWN         SOC_ENETDOWN                
	#define WSAENETUNREACH      SOC_ENETUNREACH             
	#define WSAENETRESET        SOC_ENETRESET               
	#define WSAECONNABORTED     SOC_ECONNABORTED            
	#define WSAECONNRESET       SOC_ECONNRESET              
	#define WSAENOBUFS          SOC_ENOBUFS                 
	#define WSAEISCONN          SOC_EISCONN                 
	#define WSAENOTCONN         SOC_ENOTCONN                
	#define WSAETIMEDOUT        SOC_ETIMEDOUT               
	#define WSAECONNREFUSED     SOC_ECONNREFUSED            
	#define WSAELOOP            SOC_ELOOP                   
	#define WSAENAMETOOLONG     SOC_ENAMETOOLONG            
	#define WSAEHOSTUNREACH     SOC_EHOSTUNREACH            
	#define WSAENOTEMPTY        SOC_ENOTEMPTY               
	#define WSAEDQUOT           SOC_EDQUOT                  
	#define WSAESTALE           SOC_ESTALE                  
	#define WSAEINVAL           SOC_EINVAL
#elif defined(_PS3)
	#define WSAEWOULDBLOCK      SYS_NET_EWOULDBLOCK	            
	#define WSAEINPROGRESS      SYS_NET_EINPROGRESS		          
	#define WSAEALREADY         SYS_NET_EALREADY                
	#define WSAENOTSOCK         SYS_NET_ENOTSOCK                
	#define WSAEDESTADDRREQ     SYS_NET_EDESTADDRREQ            
	#define WSAEMSGSIZE         SYS_NET_EMSGSIZE 
	#define WSAEPROTOTYPE       SYS_NET_EPROTOTYPE              
	#define WSAENOPROTOOPT      SYS_NET_ENOPROTOOPT             
	#define WSAEPROTONOSUPPORT  SYS_NET_EPROTONOSUPPORT         
	#define WSAESOCKTNOSUPPORT  SYS_NET_ESOCKTNOSUPPORT         
	#define WSAEOPNOTSUPP       SYS_NET_EOPNOTSUPP              
	#define WSAEPFNOSUPPORT     SYS_NET_EPFNOSUPPORT            
	#define WSAEAFNOSUPPORT     SYS_NET_EAFNOSUPPORT            
	#define WSAEADDRINUSE       SYS_NET_EADDRINUSE              
	#define WSAEADDRNOTAVAIL    SYS_NET_EADDRNOTAVAIL           
	#define WSAENETDOWN         SYS_NET_ENETDOWN                
	#define WSAENETUNREACH      SYS_NET_ENETUNREACH             
	#define WSAENETRESET        SYS_NET_ENETRESET               
	#define WSAECONNABORTED     SYS_NET_ECONNABORTED            
	#define WSAECONNRESET       SYS_NET_ECONNRESET 				
	#define WSAENOBUFS          SYS_NET_ENOBUFS    				
	#define WSAEISCONN          SYS_NET_EISCONN                 
	#define WSAENOTCONN         SYS_NET_ENOTCONN                
	#define WSAESHUTDOWN        SYS_NET_ESHUTDOWN               
	#define WSAETOOMANYREFS     SYS_NET_ETOOMANYREFS            
	#define WSAETIMEDOUT        SYS_NET_ERROR_ETIMEDOUT 
	#define WSAECONNREFUSED     SYS_NET_ECONNREFUSED            
	#define WSAELOOP            SYS_NET_ELOOP                   
	#define WSAENAMETOOLONG     SYS_NET_ENAMETOOLONG            
	#define WSAEHOSTDOWN        SYS_NET_EHOSTDOWN             
	#define WSAEHOSTUNREACH     SYS_NET_EHOSTUNREACH             
	#define WSAENOTEMPTY        SYS_NET_ENOTEMPTY               
	#define WSAEPROCLIM         SYS_NET_EPROCLIM                
	#define WSAEUSERS           SYS_NET_EUSERS                  
	#define WSAEDQUOT           SYS_NET_EDQUOT                  
	#define WSAESTALE           SYS_NET_ESTALE                  
	#define WSAEREMOTE          SYS_NET_EREMOTE
	#define WSAEINVAL           SYS_NET_EINVAL
#elif !defined(_WIN32)
	#define WSAEWOULDBLOCK      EWOULDBLOCK             
	#define WSAEINPROGRESS      EINPROGRESS             
	#define WSAEALREADY         EALREADY                
	#define WSAENOTSOCK         ENOTSOCK                
	#define WSAEDESTADDRREQ     EDESTADDRREQ            
	#define WSAEMSGSIZE         EMSGSIZE                
	#define WSAEPROTOTYPE       EPROTOTYPE              
	#define WSAENOPROTOOPT      ENOPROTOOPT             
	#define WSAEPROTONOSUPPORT  EPROTONOSUPPORT         
	#define WSAESOCKTNOSUPPORT  ESOCKTNOSUPPORT         
	#define WSAEOPNOTSUPP       EOPNOTSUPP              
	#define WSAEPFNOSUPPORT     EPFNOSUPPORT            
	#define WSAEAFNOSUPPORT     EAFNOSUPPORT            
	#define WSAEADDRINUSE       EADDRINUSE              
	#define WSAEADDRNOTAVAIL    EADDRNOTAVAIL           
	#define WSAENETDOWN         ENETDOWN                
	#define WSAENETUNREACH      ENETUNREACH             
	#define WSAENETRESET        ENETRESET               
	#define WSAECONNABORTED     ECONNABORTED            
	#define WSAECONNRESET       ECONNRESET              
	#define WSAENOBUFS          ENOBUFS                 
	#define WSAEISCONN          EISCONN                 
	#define WSAENOTCONN         ENOTCONN                
	#define WSAESHUTDOWN        ESHUTDOWN               
	#define WSAETOOMANYREFS     ETOOMANYREFS            
	#define WSAETIMEDOUT        ETIMEDOUT               
	#define WSAECONNREFUSED     ECONNREFUSED            
	#define WSAELOOP            ELOOP                   
	#define WSAENAMETOOLONG     ENAMETOOLONG            
	#define WSAEHOSTDOWN        EHOSTDOWN               
	#define WSAEHOSTUNREACH     EHOSTUNREACH            
	#define WSAENOTEMPTY        ENOTEMPTY               
	#define WSAEPROCLIM         EPROCLIM                
	#define WSAEUSERS           EUSERS                  
	#define WSAEDQUOT           EDQUOT                  
	#define WSAESTALE           ESTALE                  
	#define WSAEREMOTE          EREMOTE
	#define WSAEINVAL           EINVAL
#endif


#if !defined(_WIN32) && !defined(_NITRO) && !defined(_REVOLUTION) 
	typedef int SOCKET;
	typedef struct sockaddr    SOCKADDR;
	typedef struct sockaddr_in SOCKADDR_IN;
	typedef struct in_addr     IN_ADDR;
	typedef struct hostent     HOSTENT;
	typedef struct timeval     TIMEVAL;
#endif

#ifdef EENET
	#define GOAGetLastError(s) sceEENetErrno
	#define closesocket        sceEENetClose
#endif

#ifdef INSOCK
	
	#define NETBUFSIZE (32768) 


int gsiShutdown(SOCKET s, int how);

	#define GOAGetLastError(s) sceInsockErrno  
	#define closesocket(s)	   gsiShutdown(s,SCE_INSOCK_SHUT_RDWR)
	#undef shutdown
	#define shutdown(s,h) gsiShutdown(s,h)
#endif

#ifdef _UNIX
	#define GOAGetLastError(s) errno
	#define closesocket        close 
#endif

#if !defined(_WIN32)
	#define ioctlsocket ioctl
#endif

#if defined(_WIN32)
	#define GOAGetLastError(s) WSAGetLastError()
#endif

#if defined(_REVOLUTION)
	#define AF_INET SO_PF_INET
	#define SOCK_DGRAM SO_SOCK_DGRAM
	#define SOCK_STREAM SO_SOCK_STREAM
	#define IPPROTO_UDP SO_IPPROTO_UDP
	#define IPPROTO_TCP SO_IPPROTO_TCP
	#define INADDR_ANY SO_INADDR_ANY
	#define SOL_SOCKET SO_SOL_SOCKET
	#define SO_SNDBUF SO_SO_SNDBUF
	#define SO_RCVBUF SO_SO_RCVBUF
	#define SO_REUSEADDR SO_SO_REUSEADDR

	typedef int SOCKET;
	typedef struct SOSockAddr SOCKADDR;
	#define sockaddr SOSockAddr
	typedef struct SOSockAddrIn SOCKADDR_IN;
	#define sockaddr_in SOSockAddrIn
		#define sin_family family
		#define sin_port port
		#define sin_addr addr
	typedef struct SOInAddr IN_ADDR;
	#define in_addr SOInAddr
		#define s_addr addr
	typedef struct SOHostEnt HOSTENT;
	#define hostent SOHostEnt
		#define h_name name
		#define h_aliases aliases
		#define h_addrtype addrType
		#define h_length length
		#define h_addr_list addrList
		#define h_addr addrList[0]

	int socket(int pf, int type, int protocol);
	int closesocket(SOCKET sock);
	int shutdown(SOCKET sock, int how);
	int bind(SOCKET sock, const SOCKADDR* addr, int len);

	int connect(SOCKET sock, const SOCKADDR* addr, int len);
	int listen(SOCKET sock, int backlog);
	SOCKET accept(SOCKET sock, SOCKADDR* addr, int* len);

	int recv(SOCKET sock, char* buf, int len, int flags);
	int recvfrom(SOCKET sock, char* buf, int len, int flags, SOCKADDR* addr, int* fromlen);
	int send(SOCKET sock, const char* buf, int len, int flags);
	int sendto(SOCKET sock, const char* buf, int len, int flags, const SOCKADDR* addr, int tolen);

	int getsockopt(SOCKET sock, int level, int optname, char* optval, int* optlen);
	int setsockopt(SOCKET sock, int level, int optname, const char* optval, int optlen);

	#define gethostbyaddr(a,l,t)	SOGetHostByAddr(a,l,t)
	#define gethostbyname(n)		SOGetHostByName(n)

	
	#define getaddrinfo(n,s,h,r)	SOGetAddrInfo(n,s,h,r)
	#define freeaddrinfo(a)			SOFreeAddrInfo(a)
	
	
	int getsockname(SOCKET sock, SOCKADDR* addr, int* len);

	#define htonl(l) SOHtoNl((u32)l)
	#define ntohl(l) SONtoHl((u32)l)
	#define htons(s) SOHtoNs((u16)s)
	#define ntohs(s) SONtoHs((u16)s)

	#define inet_ntoa(n) SOInetNtoA(n)
	unsigned long inet_addr(const char * name);

	int GOAGetLastError(SOCKET sock);
#endif

#if defined(_NITRO)
	#define AF_INET SOC_PF_INET
	#define SOCK_DGRAM SOC_SOCK_DGRAM
	#define SOCK_STREAM SOC_SOCK_STREAM
	#define IPPROTO_UDP 0
	#define IPPROTO_TCP 0
	#define INADDR_ANY SOC_INADDR_ANY
	#define SOL_SOCKET SOC_SOL_SOCKET
	#define SO_SNDBUF SOC_SO_SNDBUF
	#define SO_RCVBUF SOC_SO_RCVBUF
	#define SO_REUSEADDR SOC_SO_REUSEADDR

	typedef int SOCKET;
	typedef struct SOSockAddr SOCKADDR;
	#define sockaddr SOSockAddr
	typedef struct SOSockAddrIn SOCKADDR_IN;
	#define sockaddr_in SOSockAddrIn
		#define sin_family family
		#define sin_port port
		#define sin_addr addr
	typedef struct SOInAddr IN_ADDR;
	#define in_addr SOInAddr
		#define s_addr addr
	typedef struct SOHostEnt HOSTENT;
	#define hostent SOHostEnt
		#define h_name name
		#define h_aliases aliases
		#define h_addrtype addrType
		#define h_length length
		#define h_addr_list addrList
		#define h_addr addrList[0]

	int socket(int pf, int type, int protocol);
	int closesocket(SOCKET sock);
	int shutdown(SOCKET sock, int how);
	int bind(SOCKET sock, const SOCKADDR* addr, int len);

	int connect(SOCKET sock, const SOCKADDR* addr, int len);
	int listen(SOCKET sock, int backlog);
	SOCKET accept(SOCKET sock, SOCKADDR* addr, int* len);

	int recv(SOCKET sock, char* buf, int len, int flags);
	int recvfrom(SOCKET sock, char* buf, int len, int flags, SOCKADDR* addr, int* fromlen);
	int send(SOCKET sock, const char* buf, int len, int flags);
	int sendto(SOCKET sock, const char* buf, int len, int flags, const SOCKADDR* addr, int tolen);

	int getsockopt(SOCKET sock, int level, int optname, char* optval, int* optlen);
	int setsockopt(SOCKET sock, int level, int optname, const char* optval, int optlen);

	#define gethostbyaddr(a,l,t) SOC_GetHostByAddr(a,l,t)
	#define gethostbyname(n) SOC_GetHostByName(n)
	
	int getsockname(SOCKET sock, SOCKADDR* addr, int* len);

	#define htonl(l) SOC_HtoNl(l)
	#define ntohl(l) SOC_NtoHl(l)
	#define htons(s) SOC_HtoNs(s)
	#define ntohs(s) SOC_NtoHs(s)

	#define inet_ntoa(n) SOC_InetNtoA(n)
	unsigned long inet_addr(const char * name);

	int GOAGetLastError(SOCKET sock);
#endif

#if defined(_PS3)
	#define accept(s,a,al) accept(s,a,(socklen_t*)(al))
	#define bind(s,a,al) bind(s,a,(socklen_t)(al))
	#define connect(s,a,al) connect(s,a,(socklen_t)(al))
	#define getpeername(s,a,al) getpeername(s,a,(socklen_t*)(al))
	#define getsockname(s,a,al) getsockname(s,a,(socklen_t*)(al))
	#define getsockopt(s,l,o,v,vl) getsockopt(s,l,o,v,(socklen_t*)(vl))
	#define recvfrom(s,b,l,f,a,al) recvfrom(s,b,l,f,a,(socklen_t*)(al))
	#define sendto(s,b,l,f,a,al) sendto(s,b,l,f,a,(socklen_t)(al))
	#define setsockopt(s,l,o,v,vl) setsockopt(s,l,o,v,(socklen_t)(vl))
	#define closesocket socketclose
	#define GOAGetLastError(s) sys_net_errno
	#define EWOULDBLOCK sceNET_EWOULDBLOCK
#endif

#if defined(_MACOSX)
	#define accept(s,a,al) accept(s,a,(socklen_t*)(al))
	#define bind(s,a,al) bind(s,a,(socklen_t)(al))
	#define connect(s,a,al) connect(s,a,(socklen_t)(al))
	#define getpeername(s,a,al) getpeername(s,a,(socklen_t*)(al))
	#define getsockname(s,a,al) getsockname(s,a,(socklen_t*)(al))
	#define getsockopt(s,l,o,v,vl) getsockopt(s,l,o,v,(socklen_t*)(vl))
	#define recvfrom(s,b,l,f,a,al) recvfrom(s,b,l,f,a,(socklen_t*)(al))
	#define sendto(s,b,l,f,a,al) sendto(s,b,l,f,a,(socklen_t)(al))
	#define setsockopt(s,l,o,v,vl) setsockopt(s,l,o,v,(socklen_t)(vl))
#endif

#if defined(SN_SYSTEMS) 
	int GOAGetLastError(SOCKET s);
	
	#if !defined(__MWERKS__)
		#define send(s,b,l,f) (int)send(s,b,(unsigned long)l,f)
		#define recv(s,b,l,f) (int)recv(s,b,(unsigned long)l,f)
		#define sendto(s,b,l,f,a,al) (int)sendto(s,b,(unsigned long)l,f,a,al)
		#define recvfrom(s,b,l,f,a,al) (int)recvfrom(s,b,(unsigned long)l,f,a,al)
	#endif
#endif


#if defined(SN_SYSTEMS)
	#define gethostbyaddr(a,b,c)   NULL
#endif




int SetSockBlocking(SOCKET sock, int isblocking);
int SetSockBroadcast(SOCKET sock);
int DisableNagle(SOCKET sock);
int SetReceiveBufferSize(SOCKET sock, int size);
int SetSendBufferSize(SOCKET sock, int size);
int GetReceiveBufferSize(SOCKET sock);
int GetSendBufferSize(SOCKET sock);
int CanReceiveOnSocket(SOCKET sock);
int CanSendOnSocket(SOCKET sock);
int GSISocketSelect(SOCKET theSocket, int* theReadFlag, int* theWriteFlag, int* theExceptFlag);
void SocketStartUp();
void SocketShutDown();

HOSTENT * getlocalhost(void);

int IsPrivateIP(IN_ADDR * addr);
gsi_u32 gsiGetBroadcastIP(void);


#if defined(_PSP)
	#define gethostbyaddr(a,b,c)   NULL
#endif





#ifdef __cplusplus
}
#endif

#endif 


#line 26 "common/gsCommon.h"
#line 1 "common/gsPlatformThread.h"


#ifndef __GSPLATFORMTHREAD_H__
#define __GSPLATFORMTHREAD_H__


#line 8 "common/gsPlatformThread.h"


#ifdef __cplusplus
extern "C" {
#endif





#if defined(_WIN32)
	typedef CRITICAL_SECTION   GSICriticalSection;
	typedef HANDLE GSISemaphoreID;
	typedef HANDLE GSIThreadID;
	typedef DWORD (WINAPI *GSThreadFunc)(void *arg);

#elif defined(_PS2)
	typedef int GSIThreadID;
	typedef int GSISemaphoreID;
	typedef struct 
	{
		
		GSISemaphoreID mSemaphore;
		GSIThreadID mOwnerThread;
		gsi_u32 mEntryCount; 
		gsi_u32 mPad; 
	} GSICriticalSection;
	typedef void (*GSThreadFunc)(void *arg);

#elif defined(_NITRO)
	typedef OSMutex GSICriticalSection;
	typedef struct
	{
		OSMutex mLock;
		gsi_i32 mValue;
		gsi_i32 mMax;
	} GSISemaphoreID;
	typedef struct
	{
		OSThread mThread;
		void * mStack;
	} GSIThreadID;
	typedef void (*GSThreadFunc)(void *arg);

#elif defined(_REVOLUTION)
	typedef OSMutex GSICriticalSection;
	typedef OSSemaphore GSISemaphoreID;
	typedef struct
	{
		OSThread mThread;
		void * mStack;
	} GSIThreadID;
	typedef void *(*GSThreadFunc)(void *arg);

#elif defined(_PSP)
	
	#define GSI_NO_THREADS
	typedef int GSIThreadID;
	typedef int GSISemaphoreID;
	typedef struct 
	{
		
		GSISemaphoreID mSemaphore;
		GSIThreadID mOwnerThread;
		gsi_u32 mEntryCount; 
		gsi_u32 mPad; 
	} GSICriticalSection;
	typedef void (*GSThreadFunc)(void *arg);

#elif defined(_PS3)
	
	#define GSI_NO_THREADS
	typedef int GSIThreadID;
	typedef int GSISemaphoreID;
	typedef struct 
	{
		
		GSISemaphoreID mSemaphore;
		GSIThreadID mOwnerThread;
		gsi_u32 mEntryCount; 
		gsi_u32 mPad; 
	} GSICriticalSection;
	typedef void (*GSThreadFunc)(void *arg);

#elif defined(_UNIX) 
	typedef pthread_mutex_t GSICriticalSection;
	typedef struct
	{
		pthread_mutex_t mLock;
		gsi_i32 mValue;
		gsi_i32 mMax;
	} GSISemaphoreID;
	typedef struct  
	{
		pthread_t thread;
		pthread_attr_t attr;
	} GSIThreadID;
	typedef void (*GSThreadFunc)(void *arg);

#else
	#define GSI_NO_THREADS
#endif

#if defined(WIN32)
	#define GSI_INFINITE INFINITE
#else
	#define GSI_INFINITE (gsi_u32)(-1)
#endif


#if !defined(GSI_NO_THREADS)
	
	#if defined(_WIN32)
		#define gsiInterlockedIncrement(a) InterlockedIncrement((long*)a)
		#define gsiInterlockedDecrement(a) InterlockedDecrement((long*)a)
	#elif defined(_PS2)
		gsi_u32 gsiInterlockedIncrement(gsi_u32* num);
		gsi_u32 gsiInterlockedDecrement(gsi_u32* num);
	#elif defined(_PS3)
		
	#elif defined(_NITRO)
		gsi_u32 gsiInterlockedIncrement(gsi_u32* num);
		gsi_u32 gsiInterlockedDecrement(gsi_u32* num);
	#elif defined(_REVOLUTION)
		gsi_u32 gsiInterlockedIncrement(gsi_u32* num);
		gsi_u32 gsiInterlockedDecrement(gsi_u32* num);
	#elif defined(_UNIX)
		gsi_u32 gsiInterlockedIncrement(gsi_u32* num);
		gsi_u32 gsiInterlockedDecrement(gsi_u32* num);
	#endif
	
#else
	
	#define gsiInterlockedIncrement(a) (++(*a))
	#define gsiInterlockedDecrement(a) (--(*a))
#endif





#if !defined(GSI_NO_THREADS)
    int  gsiStartThread(GSThreadFunc aThreadFunc,  gsi_u32 theStackSize, void *arg, GSIThreadID* theThreadIdOut);
    void gsiCancelThread(GSIThreadID theThreadID);
    void gsiExitThread(GSIThreadID theThreadID);
    void gsiCleanupThread(GSIThreadID theThreadID);

    
    gsi_u32 gsiHasThreadShutdown(GSIThreadID theThreadID);

    
    void gsiInitializeCriticalSection(GSICriticalSection *theCrit);
    void gsiEnterCriticalSection(GSICriticalSection *theCrit);
    void gsiLeaveCriticalSection(GSICriticalSection *theCrit);
    void gsiDeleteCriticalSection(GSICriticalSection *theCrit);

    
    GSISemaphoreID gsiCreateSemaphore(gsi_i32 theInitialCount, gsi_i32 theMaxCount, char* theName);
    gsi_u32        gsiWaitForSemaphore(GSISemaphoreID theSemaphore, gsi_u32 theTimeoutMs);
    void           gsiReleaseSemaphore(GSISemaphoreID theSemaphore, gsi_i32 theReleaseCount);
    void           gsiCloseSemaphore(GSISemaphoreID theSemaphore);

#else
	
    #define gsiStartThread(a, b, c, d) (-1) 
    #define gsiCancelThread(a)
    #define gsiExitThread(a)
    #define gsiCleanupThread(a)

    #define gsiHasThreadShutdown(a) (1)  

    #define gsiInitializeCriticalSection(a)
    #define gsiEnterCriticalSection(a)
    #define gsiLeaveCriticalSection(a)
    #define gsiDeleteCriticalSection(a)

    #define gsiCreateSemaphore(a,b,c)  (-1)
    #define gsiWaitForSemaphore(a,b) (0)
    #define gsiReleaseSemaphore(a,b)
    #define gsiCloseSemaphore(a)

#endif 
	


#ifdef __cplusplus
}
#endif

#endif 

#line 27 "common/gsCommon.h"
#line 1 "common/gsPlatformUtil.h"


#ifndef __GSUTILITY_H__
#define __GSUTILITY_H__


#line 8 "common/gsPlatformUtil.h"


#ifdef __cplusplus
extern "C" {
#endif







typedef struct GSIResolveHostnameInfo * GSIResolveHostnameHandle;
#define GSI_STILL_RESOLVING_HOSTNAME   0
#define GSI_ERROR_RESOLVING_HOSTNAME   0xFFFFFFFF



int  gsiStartResolvingHostname(const char * hostname, GSIResolveHostnameHandle * handle);

void gsiCancelResolvingHostname(GSIResolveHostnameHandle handle);



unsigned int gsiGetResolvedIP(GSIResolveHostnameHandle handle);






#if (defined(__MWERKS__) && !defined(_NITRO)) || defined(WIN32)
	#define GSI_UNUSED(x) x
#elif defined(_PS2) || defined(_NITRO) || defined(_PS3) || defined(_MACOSX)
	#define GSI_UNUSED(x) {void* y=&x;y=NULL;}
#elif defined(_PSP)
#define GSI_UNUSED(x) (void)x;
	
#else
	#define GSI_UNUSED(x)
#endif





void Util_RandSeed(unsigned long seed); 
int  Util_RandInt(int low, int high);   





void B64Encode(const char *input, char *output, int inlen, int encodingType);
void B64Decode(const char *input, char *output, int inlen, int * outlen, int encodingType);


int B64DecodeLen(const char *input, int encodingType);

typedef struct
{
	const char *input;
	int len;
	int encodingType;
} B64StreamData;

void B64InitEncodeStream(B64StreamData *data, const char *input, int len, int encodingType);


gsi_bool B64EncodeStream(B64StreamData *data, char output[4]);




#define XXTEA_KEY_SIZE 17
gsi_i8 * gsXxteaEncrypt(const gsi_i8 * iStr, gsi_i32 iLength, gsi_i8 key[XXTEA_KEY_SIZE], gsi_i32 *oLength);
gsi_i8 * gsXxteaDecrypt(const gsi_i8 * iStr, gsi_i32 iLength, gsi_i8 key[XXTEA_KEY_SIZE], gsi_i32 *oLength);

#ifndef max
#define max(a,b)    (((a) > (b)) ? (a) : (b))
#define min(a,b)    (((a) < (b)) ? (a) : (b))
#endif

#if defined(_DEBUG)
	void gsiCheckStack(void);
#else
	#define gsiCheckStack() 
#endif






gsi_time current_time();         
gsi_time current_time_hires();   
void msleep(gsi_time msec);      


struct tm * gsiSecondsToDate(const time_t *timp);		
time_t  gsiDateToSeconds(struct tm *tb);				
char * gsiSecondsToString(const time_t *timp);			






	
#if defined(_NITRO) 
	time_t time(time_t *timer);
	
	#define gmtime(t)	gsiSecondsToDate(t)
	#define ctime(t)	gsiSecondsToString(t)
	#define mktime(t)	gsiDateToSeconds(t)	
#elif defined(_REVOLUTION)
	time_t gsiTimeInSec(time_t *timer);
	struct tm *gsiGetGmTime(time_t *theTime);
	char *gsiCTime(time_t *theTime);
	#define time(t) gsiTimeInSec(t)
	#define gmtime(t) gsiGetGmTime(t)
	#define ctime(t) gsiCTime(t)
#else
	#include <time.h>
#endif


	#ifndef SOMAXCONN
	#define SOMAXCONN 5
#endif

typedef const char * (* GetUniqueIDFunction)();

extern GetUniqueIDFunction GOAGetUniqueID;


#ifdef _PS2
extern int wprintf(const wchar_t*,...);
#endif



gsi_i64 gsiStringToInt64(const char *theNumberStr);
void gsiInt64ToString(char theNumberStr[33], gsi_i64 theNumber);


#ifdef __cplusplus
}
#endif

#endif 


#line 28 "common/gsCommon.h"


#line 1 "common/gsMemory.h"


#ifndef __GSIMEMORY_H__
#define __GSIMEMORY_H__




#line 10 "common/gsMemory.h"





#if(1)
	#define GSI_PRE_ALLOC(x)		
	#define GSI_POST_ALLOC()
#elif(0)
	
	#define GSI_PRE_ALLOC(x)	gsMemMgrTagPush	(x);
	#define GSI_POST_ALLOC()	gsMemMgrTagPop	();
#elif(0)
	
	#define GSI_PRE_ALLOC(x)	gsMemMgrContextPush	(x);
	#define GSI_POST_ALLOC()	gsMemMgrContextPop	();
#endif

#if defined (__cplusplus)
extern "C"
{
#endif


typedef enum
{
	MEMTAG_DEFAULT,
	MEMTAG_SERVER_BROWSER,
	MEMTAG_PEER,
	MEMTAG_GP,
	MEMTAG_QR2,
	MEMTAG_NN,
	MEMTAG_GT2,
	MEMTAG_COUNT
} MEMTAG_SDK;




void* gsimalloc		(size_t size);
void* gsirealloc	(void* ptr, size_t size);
void  gsifree		(void* ptr);
void* gsimemalign	(size_t boundary, size_t size); 




#ifdef WIN32
typedef	void	*(__cdecl *gsMallocCB)	(size_t size);
typedef	void	 (__cdecl *gsFreeCB)	(void* ptr);
typedef	void	*(__cdecl *gsReallocCB)	(void* ptr, size_t size);
typedef	void	*(__cdecl *gsMemalignCB)(size_t boundary, size_t size); 
#else
typedef	void	*(*gsMallocCB)	(size_t size);
typedef	void	 (*gsFreeCB)	(void* ptr);
typedef	void	*(*gsReallocCB)	(void* ptr, size_t size);
typedef	void	*(*gsMemalignCB)(size_t boundary, size_t size); 
#endif

void gsiMemoryCallbacksSet(gsMallocCB p_malloc, gsFreeCB p_free, gsReallocCB p_realloc, gsMemalignCB p_memalign);










typedef enum 
{
	gsMemMgrContext_Invalid=  -1,
	gsMemMgrContext_Default=   0,
	gsMemMgrContext_Count  =  16	
}gsMemMgrContext;
















 




gsMemMgrContext	gsMemMgrCreate		(gsMemMgrContext context, const char *PoolName,void* thePoolBuffer, size_t thePoolSize);	



 












void			gsMemMgrContextPush	(gsMemMgrContext context);
gsMemMgrContext gsMemMgrContextPop	();



void			gsMemMgrDestroy(gsMemMgrContext context);	



void 			gsMemMgrDumpStats();
void 			gsMemMgrDumpAllocations();
void 			gsMemMgrValidateMemoryPool();	




gsMemMgrContext gsMemMgrContextFind	(void *ptr);
const char		*MemMgrBufferGetName(gsMemMgrContext context);






void			gsMemMgrTagPush	(gsi_u8 tag);
void			gsMemMgrTagPop	();
gsi_u8			gsMemMgrTagGet	(void *ptr);
gsi_u32			gsMemMgrMemUsedByTagGet(gsi_u8 tag);


gsi_u32			gsMemMgrMemAvailGet			(gsMemMgrContext context);

gsi_u32			gsMemMgrMemUsedGet			(gsMemMgrContext context);



gsi_u32			gsMemMgrMemLargestAvailGet	(gsMemMgrContext context);





gsi_u32			gsMemMgrMemHighwaterMarkGet	(gsMemMgrContext context);



void 			gsMemMgrSelfText();

#if defined (__cplusplus)
}
#endif

#endif 


#line 31 "common/gsCommon.h"
#line 1 "common/gsDebug.h"
#ifndef __GSIDEBUG_H__
#define __GSIDEBUG_H__












#include <stdarg.h>

#if defined(__LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern "C" {
#endif




typedef gsi_u8 GSIDebugLevel;
#define GSIDebugLevel_HotError   (GSIDebugLevel)(1<<0)   
#define GSIDebugLevel_WarmError  (GSIDebugLevel)(1<<1)   
#define GSIDebugLevel_Warning    (GSIDebugLevel)(1<<2)   
#define GSIDebugLevel_Notice     (GSIDebugLevel)(1<<3)   
#define GSIDebugLevel_Comment    (GSIDebugLevel)(1<<4)   
#define GSIDebugLevel_RawDump    (GSIDebugLevel)(1<<5)   
#define GSIDebugLevel_StackTrace (GSIDebugLevel)(1<<6)   

#define GSIDebugLevel_Count      7   



#define GSIDebugLevel_None       (GSIDebugLevel)(0)    
#define GSIDebugLevel_Normal     (GSIDebugLevel)(0x07) 
#define GSIDebugLevel_Debug      (GSIDebugLevel)(0x0F) 
#define GSIDebugLevel_Verbose    (GSIDebugLevel)(0x1F) 
#define GSIDebugLevel_Hardcore   (GSIDebugLevel)(0xFF) 





typedef enum 
{
	GSIDebugType_Network,  
	GSIDebugType_File,     
	GSIDebugType_Memory,   
	GSIDebugType_State,    
	GSIDebugType_Misc,     
	

	GSIDebugType_Count,
	GSIDebugType_All = GSIDebugType_Count
} GSIDebugType;





typedef enum
{
	GSIDebugCat_App,
	GSIDebugCat_GP,
	GSIDebugCat_Peer,
	GSIDebugCat_QR2,
	GSIDebugCat_SB,
	GSIDebugCat_Voice,
	GSIDebugCat_AD,
	GSIDebugCat_NatNeg,
	GSIDebugCat_HTTP,
	GSIDebugCat_CDKey,
	


	GSIDebugCat_Common, 
	                    
	GSIDebugCat_Count,
	GSIDebugCat_All = GSIDebugCat_Count
} GSIDebugCategory;

extern char* gGSIDebugCatStrings[GSIDebugCat_Count];
extern char* gGSIDebugTypeStrings[GSIDebugType_Count];
extern char* gGSIDebugLevelStrings[GSIDebugLevel_Count];




#ifndef GSI_COMMON_DEBUG
	
	
	#if !defined(_WIN32) && !defined(__MWERKS__)
		
		#define gsDebugFormat(c,t,l,f,...)
		#define gsDebugVaList(c,t,l,f,v)
		#define gsDebugBinary(c,t,l,b,n)
		#define gsSetDebugLevel(c,t,l)
		#define gsSetDebugFile(f)
		#define gsOpenDebugFile(f)
		#define gsGetDebugFile
		#define gsSetDebugCallback(c)
	#elif defined(_NITRO)
		#define gsDebugFormat(...)
		#define gsDebugVaList(c,t,l,f,v)
		#define gsDebugBinary(c,t,l,b,n)
		#define gsSetDebugLevel(c,t,l)
		#define gsSetDebugFile(f)
		#define gsOpenDebugFile(f)
		#define gsGetDebugFile
		#define gsSetDebugCallback(c)
	#else
		#define gsDebugFormat
		#define gsDebugVaList
		#define gsDebugBinary
		#define gsSetDebugLevel
		#define gsSetDebugFile
		#define gsOpenDebugFile
		#define gsGetDebugFile
		#define gsSetDebugCallback
	#endif
#else





typedef void (*GSIDebugCallback)(GSIDebugCategory,GSIDebugType,GSIDebugLevel,
                                   const char*, va_list);





typedef struct GSIDebugInstance
{
#if !defined(_NITRO)
	FILE* mGSIDebugFile;
#endif
	GSIDebugCallback mDebugCallback;
	gsi_i32 mInitialized;

#if !defined(GSI_NO_THREADS)
	GSICriticalSection mDebugCrit;
#endif

	GSIDebugLevel mGSIDebugLevel[GSIDebugCat_Count][GSIDebugType_Count];
} GSIDebugInstance;





void gsDebugFormat(GSIDebugCategory theCat, GSIDebugType theType, 
             GSIDebugLevel theLevel, const char* theTokenStr, ...);  

void gsDebugVaList(GSIDebugCategory theCat, GSIDebugType theType, 
             GSIDebugLevel theLevel, const char* theTokenStr, 
			 va_list theParams);  

void gsDebugBinary(GSIDebugCategory theCat, GSIDebugType theType,
             GSIDebugLevel theLevel, const char* theBuffer, gsi_i32 theLength);





void  gsSetDebugLevel(GSIDebugCategory theCat, GSIDebugType theType, 
					  GSIDebugLevel theLevel);

#if !defined(_NITRO)


void  gsSetDebugFile(FILE* theFile);


FILE* gsOpenDebugFile(const char* theFileName);


FILE* gsGetDebugFile();

#endif


void  gsSetDebugCallback(GSIDebugCallback theCallback);




#endif 

#if defined(__LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif

#endif 

#line 32 "common/gsCommon.h"
#line 1 "common/gsAssert.h"
#ifndef __GSIASSERT_H__
#define __GSIASSERT_H__

#if defined(__LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
extern "C" {
#endif




















 












extern  void  gsDebugAssert			(const char *format,const char *szError,const char *szFile, int line);
#ifndef _DEBUG
	
	
	
	

	#define GS_ASSERT(x)				{};		
	#define GS_ASSERT_STR(x, t)			{};		
	#define GS_ASSERT_ALIGN_16(x)		{}; 
	#define GS_FAIL()			
	#define GS_FAIL_STR(x)			



#else

	#define GS_ASSERT(x)				{ if(!(x))			{  gsDebugAssert("ASSERT on '" #x "' [%s] in %s line:%d\n",	"",					__FILE__,__LINE__); } };
	#define GS_ASSERT_STR(x,t)			{ if(!(x))			{  gsDebugAssert("ASSERT on '" #x "' [%s] in %s line:%d\n",	 t,					__FILE__,__LINE__); } };
	#define GS_ASSERT_ALIGN_16(x)		{ if(((U32)(x))%16) {  gsDebugAssert("ASSERT on '" #x "' [%s] in %s line:%d\n","16 byte misalign",	__FILE__,__LINE__); } };
	#define GS_FAIL()										{  gsDebugAssert("FAIL  [%s] ln %s line:%d\n",	"",					__FILE__,__LINE__);	};											
	#define GS_FAIL_STR(t)									{  gsDebugAssert("FAIL  [%s] ln %s line:%d\n",	t,					__FILE__,__LINE__);	};											
																				  


#endif 



typedef void (*gsDebugAssertCallback)	(const char *string);
	



void gsDebugAssertCallbackSet(gsDebugAssertCallback theCallback);




#define GS_STATIC_CHECK(expr, msg)    { CompileTimeError<((expr) != 0)> ERROR_##msg; (void)ERROR_##msg; } 


#if defined(__LANGUAGE_C_PLUS_PLUS)||defined(__cplusplus)||defined(c_plusplus)
}
#endif

#endif 

#line 33 "common/gsCommon.h"
#line 1 "common/gsStringUtil.h"


#ifndef __STRINGUTIL_H__
#define __STRINGUTIL_H__




#ifdef __cplusplus
extern "C" {
#endif




#ifdef _PS2
#define ALIGNED	__attribute__ ((aligned(16)))
#else
#define ALIGNED
#endif

#define UCS2Char        unsigned short
#define UCS2String      unsigned short*     
#define UTF8ByteType    unsigned char       
#define UTF8String      char*               



#define UTF8_FOLLOW_BYTE_TAG     0x80    
#define UTF8_TWO_BYTE_TAG        0xC0	
#define UTF8_THREE_BYTE_TAG      0xE0	
#define UTF8_FOUR_BYTE_TAG       0xF0	

#define UTF8_FOLLOW_BYTE_MASK    0x3F    
#define UTF8_TWO_BYTE_MASK       0x1F    
#define UTF8_THREE_BYTE_MASK     0x0F    

#define UTF8_IS_THREE_BYTE(a)    (((UTF8ByteType)a & UTF8_FOUR_BYTE_TAG)==UTF8_THREE_BYTE_TAG)	
#define UTF8_IS_TWO_BYTE(a)	     (((UTF8ByteType)a & UTF8_THREE_BYTE_TAG)==UTF8_TWO_BYTE_TAG)
#define UTF8_IS_FOLLOW_BYTE(a)   (((UTF8ByteType)a & UTF8_TWO_BYTE_TAG)==UTF8_FOLLOW_BYTE_TAG)
#define UTF8_IS_SINGLE_BYTE(a)   ((UTF8ByteType)a <= 0x7F)	

#define	REPLACE_INVALID_CHAR     '?' 	





int _ReadUCS2CharFromUTF8String (const UTF8String  theUTF8String, UCS2Char* theUnicodeChar, int theMaxLength);
int _UCS2CharToUTF8String       (UCS2Char          theUCS2Char,   UTF8String theUTF8String);
int _UCS2ToUTF8ConversionLengthOnly (const UCS2String theUCS2String);
int _UTF8ToUCS2ConversionLengthOnly (const UTF8String theUTF8String);


int AsciiToUTF8String(const char*      theAsciiString, UTF8String theUTF8String );
int UTF8ToAsciiString(const UTF8String theUTF8String,  char*      theAsciiString);
int UCS2ToUTF8String (const UCS2String theUCS2String,  UTF8String theUTF8String );
int UTF8ToUCS2String (const UTF8String theUTF8String,  UCS2String theUCS2String );
int UCS2ToAsciiString(const UCS2String theUCS2String,  char*      theAsciiString);
int AsciiToUCS2String(const char*      theAsciiString, UCS2String theUCS2String );




int UTF8ToUCS2StringLen(const UTF8String theUTF8String, UCS2String theUCS2String, int theMaxLength);
    

UTF8String UCS2ToUTF8StringAlloc(const UCS2String theUCS2String);
UCS2String UTF8ToUCS2StringAlloc(const UTF8String theUTF8String);


UTF8String* UCS2ToUTF8StringArrayAlloc(const UCS2String* theUCS2StringArray, int theNumStrings);
UCS2String* UTF8ToUCS2StringArrayAlloc(const UTF8String* theUTF8StringArray, int theNumStrings);




#ifdef __cplusplus
} 
#endif

#endif 


#line 34 "common/gsCommon.h"






#define	GSI_MIN(a,b)				(((a) < (b)?(a):(b)))
#define	GSI_MAX(a,b)				(((a) > (b)?(a):(b)))
#define	GSI_LIMIT(x, minx, maxx)	(((x) < (minx)? (minx) : ((x) > (maxx)? (maxx) : (x))))
#define	GSI_WRAP(x, minx, maxx)		(((x) < (minx)? (maxx-1 ) : ((x) >= (maxx)? (minx) : (x))))
#define GSI_DIM( x )				( sizeof( x ) / sizeof((x)[ 0 ]))



#endif 

#line 20 "GP/gpi.h"
#line 1 "common/gsAvailable.h"
#ifndef _AVAILABLE_H_
#define _AVAILABLE_H_

#line 5 "common/gsAvailable.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef GSI_UNICODE
#define GSIStartAvailableCheck   GSIStartAvailableCheckA
#else
#define GSIStartAvailableCheck   GSIStartAvailableCheckW
#endif



extern char GSIACHostname[64];


typedef enum
{
	GSIACWaiting,                 
	GSIACAvailable,               
	GSIACUnavailable,             
	GSIACTemporarilyUnavailable   
} GSIACResult;



void GSIStartAvailableCheck(const gsi_char * gamename);








GSIACResult GSIAvailableCheckThink(void);



void GSICancelAvailableCheck(void);


extern GSIACResult __GSIACResult;
extern char __GSIACGamename[64];

#ifdef __cplusplus
}
#endif

#endif

#line 21 "GP/gpi.h"
#line 1 "common/gsUdpEngine.h"


#ifndef __GS_UDP_ENGINE_H__
#define __GS_UDP_ENGINE_H__





#line 11 "common/gsUdpEngine.h"
#line 1 "gt2/gt2.h"
 









 



 



#ifndef _GT2_H_
#define _GT2_H_

#line 23 "gt2/gt2.h"

#ifdef __cplusplus
extern "C" {
#endif

 




typedef int GT2Bool;
#define GT2False 0
#define GT2True 1


typedef unsigned char GT2Byte;


typedef struct GTI2Socket * GT2Socket;



typedef struct GTI2Connection * GT2Connection;



typedef unsigned short GT2MessageID;




typedef enum
{
	GT2Success,             
                            
	GT2OutOfMemory,         
	GT2Rejected,            
	GT2NetworkError,        
	GT2AddressError,        
	GT2DuplicateAddress,    
	GT2TimedOut,			
	GT2NegotiationError,	
	GT2InvalidConnection,	
	GT2InvalidMessage,		
	GT2SendFailed			
} GT2Result;


typedef enum
{
	GT2Connecting,   
	GT2Connected,    
	GT2Closing,      
	GT2Closed        
} GT2ConnectionState;


typedef enum
{
	GT2LocalClose,         
	GT2RemoteClose,        
	                       
	GT2CommunicationError, 
	GT2SocketError,        
	GT2NotEnoughMemory     
} GT2CloseReason;

 







extern char GT2ChallengeKey[33];

 







typedef void (* gt2SocketErrorCallback)
(
	GT2Socket socket
);

 










GT2Result gt2CreateSocket
(
	GT2Socket * socket,  
	const char * localAddress,  
	int outgoingBufferSize,  
	int incomingBufferSize,  
	gt2SocketErrorCallback callback  
);


GT2Result gt2CreateAdHocSocket
(
	GT2Socket * socket,			
	const char * localAddress,  
	int outgoingBufferSize,		
	int incomingBufferSize,		
	gt2SocketErrorCallback callback  
);

#ifdef _XBOX







GT2Result gt2CreateVDPSocket
(
	GT2Socket * socket,  
	const char * localAddress,  
	int outgoingBufferSize,  
	int incomingBufferSize,  
	gt2SocketErrorCallback callback  
);
#endif





void gt2CloseSocket(GT2Socket socket);


void gt2Think(GT2Socket socket);





GT2Result gt2SendRawUDP
(
	GT2Socket socket,  
	const char * remoteAddress,  
	const GT2Byte * message,  
	int len  
);

 









typedef void (* gt2ConnectedCallback)
(
	GT2Connection connection,       
	GT2Result result,               
	GT2Byte * message,              
	int len                         
);


typedef void (* gt2ReceivedCallback)
(
	GT2Connection connection,       
	GT2Byte * message,              
	int len,                        
	GT2Bool reliable                
);



typedef void (* gt2ClosedCallback)
(
	GT2Connection connection,       
	GT2CloseReason reason           
);




typedef void (* gt2PingCallback)
(
	GT2Connection connection,        
	int latency                      
);




typedef struct
{
	gt2ConnectedCallback connected; 
	gt2ReceivedCallback received;   
	gt2ClosedCallback closed;       
	gt2PingCallback ping;           
} GT2ConnectionCallbacks;

 










GT2Result gt2Connect
(
	GT2Socket socket,  
	GT2Connection * connection,  
	const char * remoteAddress,  
	const GT2Byte * message,  
	int len,  
	int timeout,  
	GT2ConnectionCallbacks * callbacks,  
	GT2Bool blocking  
);






GT2Result gt2Send
(
	GT2Connection connection,  
	const GT2Byte * message,  
	int len,  
	GT2Bool reliable  
);






void gt2Ping(GT2Connection connection);



void gt2CloseConnection(GT2Connection connection);



void gt2CloseConnectionHard(GT2Connection connection);


void gt2CloseAllConnections(GT2Socket socket);



void gt2CloseAllConnectionsHard(GT2Socket socket);

 








typedef void (* gt2ConnectAttemptCallback)
(
	GT2Socket socket,  
	GT2Connection connection,  
	unsigned int ip,  
	unsigned short port,  
	int latency,  
	GT2Byte * message,  
	int len  
);

 







void gt2Listen(GT2Socket socket, gt2ConnectAttemptCallback callback);










GT2Bool gt2Accept(GT2Connection connection, GT2ConnectionCallbacks * callbacks);







void gt2Reject(GT2Connection connection, const GT2Byte * message, int len);

 









GT2MessageID gt2GetLastSentMessageID(GT2Connection connection);





GT2Bool gt2WasMessageIDConfirmed(GT2Connection connection, GT2MessageID messageID);

 








typedef void (* gt2SendFilterCallback)
(
	GT2Connection connection,  
	int filterID,              
	const GT2Byte * message,   
	int len,                   
	GT2Bool reliable           
);







typedef void (* gt2ReceiveFilterCallback)
(
	GT2Connection connection,       
	int filterID,                   
	GT2Byte * message,              
	int len,                        
	GT2Bool reliable                
);

 





GT2Bool gt2AddSendFilter
(
	GT2Connection connection,       
	gt2SendFilterCallback callback  
);



void gt2RemoveSendFilter
(
	GT2Connection connection,       
	gt2SendFilterCallback callback  
);



void gt2FilteredSend
(
	GT2Connection connection,  
	int filterID,              
	const GT2Byte * message,   
	int len,                   
	GT2Bool reliable           
);



GT2Bool gt2AddReceiveFilter
(
	GT2Connection connection,          
	gt2ReceiveFilterCallback callback  
);



void gt2RemoveReceiveFilter
(
	GT2Connection connection,          
	gt2ReceiveFilterCallback callback  
);



void gt2FilteredReceive
(
	GT2Connection connection,       
	int filterID,                   
	GT2Byte * message,              
	int len,                        
	GT2Bool reliable                
);

 







typedef GT2Bool (* gt2UnrecognizedMessageCallback)
(
	GT2Socket socket,     
	unsigned int ip,      
	unsigned short port,  
	GT2Byte * message,    
	int len               
);

 





SOCKET gt2GetSocketSOCKET(GT2Socket socket);






void gt2SetUnrecognizedMessageCallback(GT2Socket socket, gt2UnrecognizedMessageCallback callback);

 




GT2Socket gt2GetConnectionSocket(GT2Connection connection);






GT2ConnectionState gt2GetConnectionState(GT2Connection connection);


unsigned int gt2GetRemoteIP(GT2Connection connection);


unsigned short gt2GetRemotePort(GT2Connection connection);


unsigned int gt2GetLocalIP(GT2Socket socket);


unsigned short gt2GetLocalPort(GT2Socket socket);


int gt2GetIncomingBufferSize(GT2Connection connection);


int gt2GetIncomingBufferFreeSpace(GT2Connection connection);


int gt2GetOutgoingBufferSize(GT2Connection connection);


int gt2GetOutgoingBufferFreeSpace(GT2Connection connection);

 



void gt2SetSocketData(GT2Socket socket, void * data);
void * gt2GetSocketData(GT2Socket socket);
void gt2SetConnectionData(GT2Connection connection, void * data);
void * gt2GetConnectionData(GT2Connection connection);

 



unsigned int gt2NetworkToHostInt(unsigned int i);
unsigned int gt2HostToNetworkInt(unsigned int i);
unsigned short gt2HostToNetworkShort(unsigned short s);
unsigned short gt2NetworkToHostShort(unsigned short s);

 












const char * gt2AddressToString
(
	unsigned int ip,                
	unsigned short port,            
	char string[22]                 
);


















GT2Bool gt2StringToAddress
(
	const char * string,            
	unsigned int * ip,              
	unsigned short * port           
);

















const char * gt2IPToHostInfo(unsigned int ip, char *** aliases, unsigned int *** ips);
const char * gt2StringToHostInfo(const char * string, char *** aliases, unsigned int *** ips);




const char * gt2IPToHostname(unsigned int ip);
const char * gt2StringToHostname(const char * string);
char ** gt2IPToAliases(unsigned int ip);
char ** gt2StringToAliases(const char * string);
unsigned int ** gt2IPToIPs(unsigned int ip);
unsigned int ** gt2StringToIPs(const char * string);

#ifdef _XBOX
unsigned int gt2XnAddrToIP(XNADDR theAddr, XNKID theKeyId);
GT2Bool gt2IPToXnAddr(int ip, XNADDR *theAddr, XNKID *theKeyId);
#endif


void gt2IpToMac(gsi_u32 ip,char *mac);

gsi_u32 gt2MacToIp(const char *mac);


 






typedef void (* gt2DumpCallback)
(
	GT2Socket socket,          
	GT2Connection connection,  
	unsigned int ip,           
	unsigned short port,       
	GT2Bool reset,             
	const GT2Byte * message,   
	int len                    
);

 











void gt2SetSendDump(GT2Socket socket, gt2DumpCallback callback);
void gt2SetReceiveDump(GT2Socket socket, gt2DumpCallback callback);



#ifdef __cplusplus
}
#endif

#endif

#line 12 "common/gsUdpEngine.h"
#line 1 "darray.h"
#ifndef _DARRAY_H
#define _DARRAY_H

 












#ifdef __cplusplus
extern "C" {
#endif

 









typedef struct DArrayImplementation *DArray;


 










#if defined(WIN32)
	typedef int (__cdecl *ArrayCompareFn)(const void *elem1, const void *elem2);
#else
	typedef int (*ArrayCompareFn)(const void *elem1, const void *elem2);
#endif


 






typedef void (*ArrayMapFn)(void *elem, void *clientData);

 




typedef int (*ArrayMapFn2)(void *elem, void *clientData);

  






typedef void (*ArrayElementFreeFn)(void *elem);


 







































DArray ArrayNew(int elemSize, int numElemsToAllocate, 
                ArrayElementFreeFn elemFreeFn);



  










void ArrayFree(DArray array);


 




int ArrayLength(const DArray array);


  













void *ArrayNth(DArray array, int n);


 








void ArrayAppend(DArray array, const void *newElem);

 







void ArrayInsertAt(DArray array, const void *newElem, int n);

 






void ArrayInsertSorted(DArray array, const void *newElem, ArrayCompareFn comparator);

  









void ArrayDeleteAt(DArray array, int n);

  







void ArrayRemoveAt(DArray array, int n);

 










void ArrayReplaceAt(DArray array, const void *newElem, int n);


 





void ArraySort(DArray array, ArrayCompareFn comparator);


#define NOT_FOUND -1	

 


















int ArraySearch(DArray array, const void *key, ArrayCompareFn comparator, 
                  int fromIndex, int isSorted);


 








void ArrayMap(DArray array, ArrayMapFn fn, void *clientData);

 




void ArrayMapBackwards(DArray array, ArrayMapFn fn, void *clientData);

 






void * ArrayMap2(DArray array, ArrayMapFn2 fn, void *clientData);

 



void * ArrayMapBackwards2(DArray array, ArrayMapFn2 fn, void *clientData);

 



void ArrayClear(DArray array);

 



void *ArrayGetDataPtr(DArray array);

 



void ArraySetDataPtr(DArray array, void *ptr, int count, int capacity);

#ifdef __cplusplus
}
#endif

#endif 

#line 13 "common/gsUdpEngine.h"








#define GS_UDP_DEFAULT_OUT_BUFFSIZE  1460
#define GS_UDP_DEFAULT_IN_BUFFSIZE 1500


#define GS_IP_ADDR_AND_PORT          22




#define GS_UDP_MSG_HEADER_LEN        16
#define GS_UDP_RELIABLE_MSG_HEADER   7



typedef enum _GSUdpErrorCode
{
	GS_UDP_NO_ERROR,
	GS_UDP_NO_MEMORY,
	GS_UDP_REJECTED,
	GS_UDP_NETWORK_ERROR,
	GS_UDP_ADDRESS_ERROR,
	GS_UDP_ADDRESS_ALREADY_IN_USE,
	GS_UDP_TIMED_OUT,
	GS_UDP_REMOTE_ERROR,
	GS_UDP_SEND_FAILED,
	GS_UDP_INVALID_MESSAGE,
	GS_UDP_PARAMETER_ERROR,
	GS_UDP_NOT_INITIALIZED,
	GS_UDP_MSG_TOO_BIG,
	GS_UDP_UNKNOWN_ERROR,
	
	GS_UDP_NUM_ERROR_CODES
} GSUdpErrorCode;





typedef enum _GSUdpPeerState
{
	GS_UDP_PEER_CONNECTING,
	GS_UDP_PEER_CONNECTED,
	GS_UDP_PEER_CLOSING,
	GS_UDP_PEER_CLOSED,
	
	GS_UDP_PEER_STATE_NUM
} GSUdpPeerState;



typedef enum _GSUdpCloseReason
{
	GS_UDP_CLOSED_LOCALLY,
	GS_UDP_CLOSED_REMOTELY,
	
	GS_UDP_CLOSED_BY_COMM_ERROR, 
	GS_UDP_CLOSED_BY_LOW_MEM,
	
	GS_UDP_CLOSED_NUM
} GSUdpCloseReason;






typedef void (*gsUdpErrorCallback)(GSUdpErrorCode theCode, void *theUserData);



typedef void (*gsUdpAppConnectAttemptCallback)(unsigned int theIp, unsigned short thePort, 
											   int theLatency, unsigned char *theInitMsg, 
											   unsigned int theInitMsgLen, void *theUserData);



typedef void (*gsUdpConnClosedCallback)(unsigned int ip, unsigned short port, GSUdpCloseReason reason, 
										void *theUserData);
typedef void (*gsUdpConnReceivedDataCallback)(unsigned int ip, unsigned short port, 
											  unsigned char *message, unsigned int messageLength, 
											  gsi_bool reliable, void *theUserData);
typedef void (*gsUdpConnConnectedCallback)(unsigned int ip, unsigned short port, 
										   GSUdpErrorCode error, gsi_bool rejected, 
										   void *theUserData);
typedef void (*gsUdpConnPingCallback)(unsigned int ip, unsigned short port, unsigned int latency, 
									  void *theUserData);



typedef gsi_bool (*gsUdpUnknownMsgCallback)(unsigned int ip, unsigned short port, 
										unsigned char *message, unsigned int messageLength, 
										void *theUserData);





gsi_bool gsUdpEngineIsInitialized();
GSUdpErrorCode gsUdpEngineInitialize(unsigned short thePort, int theIncomingBufSize, 
									 int theOutgoingBufSize, gsUdpErrorCallback theAppNetworkError, 
									 gsUdpConnConnectedCallback theAppConnected,
									 gsUdpConnClosedCallback theAppClosed,
									 gsUdpConnPingCallback theAppPing,
									 gsUdpConnReceivedDataCallback theAppReceive,
									 gsUdpUnknownMsgCallback theAppUnownMsg,
									 gsUdpAppConnectAttemptCallback theAppConnectAttempt,
									 void *theAppUserData);

GSUdpErrorCode gsUdpEngineThink();
GSUdpErrorCode gsUdpEngineShutdown();


GSUdpErrorCode gsUdpEngineGetPeerState(unsigned int theIp, unsigned short thePort, 
									   GSUdpPeerState *thePeerState);
GSUdpErrorCode gsUdpEngineStartTalkingToPeer(unsigned int theIp, unsigned short thePort,
											 char theInitMsg[GS_UDP_MSG_HEADER_LEN], int timeOut);
GSUdpErrorCode gsUdpEngineAcceptPeer(unsigned int theIp, unsigned short thePort);
GSUdpErrorCode gsUdpEngineRejectPeer(unsigned int theIp, unsigned short thePort);









GSUdpErrorCode gsUdpEngineSendMessage(unsigned int theIp, unsigned short thePort, 
									  char theHeader[GS_UDP_MSG_HEADER_LEN], unsigned char *theMsg, 
									  unsigned int theMsgLen, gsi_bool theReliable);



GSUdpErrorCode gsUdpEngineAddMsgHandler(char theInitMsg[GS_UDP_MSG_HEADER_LEN], 
										char theHeader[GS_UDP_MSG_HEADER_LEN], 
										gsUdpErrorCallback theMsgHandlerError, 
										gsUdpConnConnectedCallback theMsgHandlerConnected, 
										gsUdpConnClosedCallback theMsgHandlerClosed, 
										gsUdpConnPingCallback theMsgHandlerPing,
										gsUdpConnReceivedDataCallback theMsgHandlerRecv,
										void *theUserData);
GSUdpErrorCode gsUdpEngineRemoveMsgHandler(char theHeader[GS_UDP_MSG_HEADER_LEN]);



SOCKET gsUdpEngineGetSocket();
void gsUdpEngineAddrToString(unsigned int theIp, unsigned short thePort, 
							 char addrstring[GS_IP_ADDR_AND_PORT]);
unsigned int gsUdpEngineGetLocalAddr();
unsigned short gsUdpEngineGetLocalPort();


gsi_bool gsUdpEngineNoMoreMsgHandlers();
gsi_bool gsUdpEngineNoApp();



int gsUdpEngineGetPeerOutBufferFreeSpace(unsigned int theIp, unsigned short thePort);

#endif

#line 22 "GP/gpi.h"
#line 1 "hashtable.h"
 #ifndef _HASHTABLE_H
#define _HASHTABLE_H

 















 
 









typedef struct HashImplementation *HashTable;


 










typedef int (*TableHashFn)(const void *elem, int numBuckets);


 










#if defined(WIN32)

typedef int (__cdecl *TableCompareFn)(const void *elem1, const void *elem2);
#else
typedef int (*TableCompareFn)(const void *elem1, const void *elem2);
#endif

  





typedef void (*TableMapFn)(void *elem, void *clientData);

  




typedef int (*TableMapFn2)(void *elem, void *clientData);


 






typedef void (*TableElementFreeFn)(void *elem);

#ifdef __cplusplus
extern "C" {
#endif

 































HashTable TableNew(int elemSize, int nBuckets, 
                   TableHashFn hashFn, TableCompareFn compFn, 
 					 TableElementFreeFn freeFn);

HashTable TableNew2(int elemSize, int nBuckets, int nChains,
                   TableHashFn hashFn, TableCompareFn compFn, 
 					 TableElementFreeFn freeFn);


  










void TableFree(HashTable table);


 



int TableCount(HashTable table);



 








void TableEnter(HashTable table, const void *newElem);

 





int TableRemove(HashTable table, const void *delElem);


 






void *TableLookup(HashTable table, const void *elemKey);



 








void TableMap(HashTable table, TableMapFn fn, void *clientData);

 



void TableMapSafe(HashTable table, TableMapFn fn, void *clientData);

 






void * TableMap2(HashTable table, TableMapFn2 fn, void *clientData);

 



void * TableMapSafe2(HashTable table, TableMapFn2 fn, void *clientData);

 



void TableClear(HashTable table);

#ifdef __cplusplus
}
#endif

#endif 

#line 23 "GP/gpi.h"
#line 24 "GP/gpi.h"
#line 1 "md5.h"
 


 




















 


 






#ifndef _MD5_H_
#define _MD5_H_

#ifdef __cplusplus
extern "C" {
#endif
	
#ifndef PROTOTYPES
#define PROTOTYPES 1
#endif

 
typedef unsigned char *POINTER;

 
typedef unsigned short int UINT2;

 
typedef unsigned int UINT4;

 



#if PROTOTYPES
#define PROTO_LIST(list) list
#else
#define PROTO_LIST(list) ()
#endif

 
typedef struct {
  UINT4 state[4];                                            
  UINT4 count[2];                 
  unsigned char buffer[64];                                  
} MD5_CTX;

void MD5Init PROTO_LIST ((MD5_CTX *));
void MD5Update PROTO_LIST ((MD5_CTX *, unsigned char *, unsigned int));
void MD5Final PROTO_LIST ((unsigned char [16], MD5_CTX *));
void MD5Print PROTO_LIST ((unsigned char [16], char[33]));
void MD5Digest PROTO_LIST ((unsigned char *, unsigned int, char[33]));
#ifdef __cplusplus
}
#endif

#endif

#line 25 "GP/gpi.h"
#line 1 "GP/gp.h"
 











#ifndef _GP_H_
#define _GP_H_


#line 18 "GP/gp.h"

#ifdef __cplusplus
extern "C" {
#endif



typedef enum _GPEnum
{
	
	
	GP_ERROR = 0,
	GP_RECV_BUDDY_REQUEST,
	GP_RECV_BUDDY_STATUS,
	GP_RECV_BUDDY_MESSAGE,
	GP_RECV_BUDDY_UTM,
	GP_RECV_GAME_INVITE,
	GP_TRANSFER_CALLBACK,
	GP_RECV_BUDDY_AUTH,
	GP_RECV_BUDDY_REVOKE,
		
	
	
	GP_INFO_CACHING = 0x0100,
	GP_SIMULATION,
	GP_INFO_CACHING_BUDDY_AND_BLOCK_ONLY,

	
	
	GP_BLOCKING = 1,
	GP_NON_BLOCKING = 0,

	
	
	GP_FIREWALL = 1,
	GP_NO_FIREWALL = 0,

	
	
	GP_CHECK_CACHE = 1,
	GP_DONT_CHECK_CACHE = 0,

	
	
	
	GP_VALID = 1,
	GP_INVALID = 0,

	
	
	GP_FATAL = 1,
	GP_NON_FATAL = 0,

	
	
	GP_MALE = 0x0500,
	GP_FEMALE,
	GP_PAT,

	
	
	GP_MORE = 0x0600,
	GP_DONE,

	
	
	GP_NICK = 0x0700,
	GP_UNIQUENICK,
	GP_EMAIL,
	GP_PASSWORD,
	GP_FIRSTNAME,
	GP_LASTNAME,
	GP_ICQUIN,
	GP_HOMEPAGE,
	GP_ZIPCODE,
	GP_COUNTRYCODE,
	GP_BIRTHDAY,
	GP_SEX,
	GP_CPUBRANDID,
	GP_CPUSPEED,
	GP_MEMORY,
	GP_VIDEOCARD1STRING,
	GP_VIDEOCARD1RAM,
	GP_VIDEOCARD2STRING,
	GP_VIDEOCARD2RAM,
	GP_CONNECTIONID,
	GP_CONNECTIONSPEED,
	GP_HASNETWORK,
	GP_OSSTRING,
	GP_AIMNAME,  
	GP_PIC,
	GP_OCCUPATIONID,
	GP_INDUSTRYID,
	GP_INCOMEID,
	GP_MARRIEDID,
	GP_CHILDCOUNT,
	GP_INTERESTS1,

	
	
	GP_REPLACE = 1,
	GP_DONT_REPLACE = 0,

	
	
	GP_CONNECTED = 1,
	GP_NOT_CONNECTED = 0,

	
	
	GP_MASK_NONE        = 0x00000000,
	GP_MASK_HOMEPAGE    = 0x00000001,
	GP_MASK_ZIPCODE     = 0x00000002,
	GP_MASK_COUNTRYCODE = 0x00000004,
	GP_MASK_BIRTHDAY    = 0x00000008,
	GP_MASK_SEX         = 0x00000010,
	GP_MASK_EMAIL       = 0x00000020,
	GP_MASK_ALL         = 0xFFFFFFFF,

	
	
	GP_OFFLINE  = 0,
	GP_ONLINE   = 1,
	GP_PLAYING  = 2,
	GP_STAGING  = 3,
	GP_CHATTING = 4,
	GP_AWAY     = 5,

	
	
	GP_SESS_IS_CLOSED = 0x00000001,
	GP_SESS_IS_OPEN = 0x00000002,
	GP_SESS_HAS_PASSWORD = 0x00000004,
	GP_SESS_IS_BEHIND_NAT = 0x00000008,
	GP_SESS_IS_RANKED = 0x000000010,
	

	
	
	GP_INTEL = 1,
	GP_AMD,
	GP_CYRIX,
	GP_MOTOROLA,
	GP_ALPHA,

	
	
	GP_MODEM = 1,
	GP_ISDN,
	GP_CABLEMODEM,
	GP_DSL,
	GP_SATELLITE,
	GP_ETHERNET,
	GP_WIRELESS,

	
	
	
	GP_TRANSFER_SEND_REQUEST = 0x800,  
	GP_TRANSFER_ACCEPTED,
	GP_TRANSFER_REJECTED,        
	GP_TRANSFER_NOT_ACCEPTING,   
	GP_TRANSFER_NO_CONNECTION,   
	GP_TRANSFER_DONE,            
	GP_TRANSFER_CANCELLED,       
	GP_TRANSFER_LOST_CONNECTION, 
	GP_TRANSFER_ERROR,           
	GP_TRANSFER_THROTTLE,  
	GP_FILE_BEGIN,
	GP_FILE_PROGRESS,  
	GP_FILE_END,
	GP_FILE_DIRECTORY,
	GP_FILE_SKIP,
	GP_FILE_FAILED,  

	
	
	GP_FILE_READ_ERROR = 0x900,
	GP_FILE_WRITE_ERROR,
	GP_FILE_DATA_ERROR,

	
	
	GP_TRANSFER_SENDER = 0xA00,
	GP_TRANSFER_RECEIVER,

	
	
	GP_DONT_ROUTE = 0xB00, 

	
	
	GP_SILENCE_NONE       = 0x00000000,
	GP_SILENCE_MESSAGES   = 0x00000001,
	GP_SILENCE_UTMS       = 0x00000002,
	GP_SILENCE_LIST       = 0x00000004, 
	GP_SILENCE_ALL        = 0xFFFFFFFF,

	
	GP_NEW_STATUS_INFO_SUPPORTED = 0xC00,
	GP_NEW_STATUS_INFO_NOT_SUPPORTED = 0xC01
} GPEnum;



typedef enum _GPResult
{
	GP_NO_ERROR,			
	GP_MEMORY_ERROR,
	GP_PARAMETER_ERROR,
	GP_NETWORK_ERROR,
	GP_SERVER_ERROR,
	GP_MISC_ERROR,
	GP_COUNT
} GPResult;




typedef enum _GPErrorCode
{
	
	
	GP_GENERAL = 0x0000,
	GP_PARSE,
	GP_NOT_LOGGED_IN,
	GP_BAD_SESSKEY,
	GP_DATABASE,
	GP_NETWORK,
	GP_FORCED_DISCONNECT,
	GP_CONNECTION_CLOSED,
	GP_UDP_LAYER,

	
	
	GP_LOGIN = 0x0100,
	GP_LOGIN_TIMEOUT,

	GP_LOGIN_BAD_NICK,
	GP_LOGIN_BAD_EMAIL,
	GP_LOGIN_BAD_PASSWORD,
	GP_LOGIN_BAD_PROFILE,
	GP_LOGIN_PROFILE_DELETED,
	GP_LOGIN_CONNECTION_FAILED,
	GP_LOGIN_SERVER_AUTH_FAILED,
	GP_LOGIN_BAD_UNIQUENICK,
	GP_LOGIN_BAD_PREAUTH,

	
	
	GP_NEWUSER = 0x0200,
	GP_NEWUSER_BAD_NICK,
	GP_NEWUSER_BAD_PASSWORD,
	GP_NEWUSER_UNIQUENICK_INVALID,
	GP_NEWUSER_UNIQUENICK_INUSE,

	
	
	GP_UPDATEUI = 0x0300,
	GP_UPDATEUI_BAD_EMAIL,

	
	
	GP_NEWPROFILE = 0x0400,
	GP_NEWPROFILE_BAD_NICK,
	GP_NEWPROFILE_BAD_OLD_NICK,

	
	
	GP_UPDATEPRO = 0x0500,
	GP_UPDATEPRO_BAD_NICK,

	
	
	GP_ADDBUDDY = 0x0600,
	GP_ADDBUDDY_BAD_FROM,
	GP_ADDBUDDY_BAD_NEW,
	GP_ADDBUDDY_ALREADY_BUDDY,

	
	
	GP_AUTHADD = 0x0700,
	GP_AUTHADD_BAD_FROM,
	GP_AUTHADD_BAD_SIG,

	
	
	GP_STATUS = 0x0800,

	
	
	GP_BM = 0x0900,
	GP_BM_NOT_BUDDY,
	GP_BM_EXT_INFO_NOT_SUPPORTED,
	GP_BM_BUDDY_OFFLINE,

	
	
	GP_GETPROFILE = 0x0A00,
	GP_GETPROFILE_BAD_PROFILE,

	
	
	GP_DELBUDDY = 0x0B00,
	GP_DELBUDDY_NOT_BUDDY,

	
	
	GP_DELPROFILE = 0x0C00,
	GP_DELPROFILE_LAST_PROFILE,

	
	
	GP_SEARCH = 0x0D00,
	GP_SEARCH_CONNECTION_FAILED,
	GP_SEARCH_TIMED_OUT,

	
	
	GP_CHECK = 0x0E00,
	GP_CHECK_BAD_EMAIL,
	GP_CHECK_BAD_NICK,
	GP_CHECK_BAD_PASSWORD,

	
	
	GP_REVOKE = 0x0F00,
	GP_REVOKE_NOT_BUDDY,

	
	
	GP_REGISTERUNIQUENICK = 0x1000,
	GP_REGISTERUNIQUENICK_TAKEN,
	GP_REGISTERUNIQUENICK_RESERVED,
	GP_REGISTERUNIQUENICK_BAD_NAMESPACE,

	
	
	GP_REGISTERCDKEY = 0x1100,
	GP_REGISTERCDKEY_BAD_KEY,
	GP_REGISTERCDKEY_ALREADY_SET,
	GP_REGISTERCDKEY_ALREADY_TAKEN,

	
	
	GP_ADDBLOCK = 0x1200,
	GP_ADDBLOCK_ALREADY_BLOCKED,

	
	
	GP_REMOVEBLOCK = 0x1300,
	GP_REMOVEBLOCK_NOT_BLOCKED

} GPErrorCode;



#define GP_NICK_LEN                 31
#define GP_UNIQUENICK_LEN           21
#define GP_FIRSTNAME_LEN            31
#define GP_LASTNAME_LEN             31
#define GP_EMAIL_LEN                51
#define GP_PASSWORD_LEN             31
#define GP_PASSWORDENC_LEN          ((((GP_PASSWORD_LEN+2)*4)/3)+1)
#define GP_HOMEPAGE_LEN             76
#define GP_ZIPCODE_LEN              11
#define GP_COUNTRYCODE_LEN          3
#define GP_PLACE_LEN                128
#define GP_AIMNAME_LEN              51
#define GP_REASON_LEN               1025
#define GP_STATUS_STRING_LEN        256
#define GP_LOCATION_STRING_LEN      256
#define GP_ERROR_STRING_LEN         256
#define GP_AUTHTOKEN_LEN            256
#define GP_PARTNERCHALLENGE_LEN     256
#define GP_CDKEY_LEN                65
#define GP_CDKEYENC_LEN             ((((GP_CDKEY_LEN+2)*4)/3)+1)
#define GP_LOGIN_TICKET_LEN         25

#define GP_RICH_STATUS_LEN          256
#define GP_STATUS_BASIC_STR_LEN     33




#define GP_XOR_SEED                 0x79707367 


#define GP_PARTNERID_GAMESPY		0
#define GP_PARTNERID_IGN			10


#define GP_MAX_NAMESPACEIDS         16





typedef void * GPConnection;



typedef int GPProfile;



typedef int GPTransfer;



typedef void (* GPCallback)(
  GPConnection * connection,
  void * arg,
  void * param
);





typedef struct
{
  GPResult result;
  GPErrorCode errorCode;
  gsi_char * errorString;
  GPEnum fatal;
} GPErrorArg;



typedef struct
{
  GPResult result;
  GPProfile profile;
  gsi_char uniquenick[GP_UNIQUENICK_LEN];
} GPConnectResponseArg;



typedef struct
{
  GPResult result;
  GPProfile profile;
} GPNewUserResponseArg;



typedef struct
{
  GPResult result;
  GPProfile profile;
} GPCheckResponseArg;



typedef struct
{
  GPResult result;
  int numSuggestedNicks;
  gsi_char ** suggestedNicks;
} GPSuggestUniqueNickResponseArg;



typedef struct
{
	GPResult result;
} GPRegisterUniqueNickResponseArg;



typedef struct
{
	GPResult result;
} GPRegisterCdKeyResponseArg;



typedef struct
{
  GPResult result;
  GPProfile profile;
} GPNewProfileResponseArg;




typedef struct  
{
	GPResult result;
	GPProfile profile;
} GPDeleteProfileResponseArg;



typedef struct
{
  GPProfile profile;
  gsi_char nick[GP_NICK_LEN];
  gsi_char uniquenick[GP_UNIQUENICK_LEN];
  int namespaceID;
  gsi_char firstname[GP_FIRSTNAME_LEN];
  gsi_char lastname[GP_LASTNAME_LEN];
  gsi_char email[GP_EMAIL_LEN];
} GPProfileSearchMatch;



typedef struct
{
  GPResult result;
  int numMatches;
  GPEnum more;
  GPProfileSearchMatch * matches;
} GPProfileSearchResponseArg;



typedef struct
{
  GPResult result;
  GPProfile profile;
  gsi_char nick[GP_NICK_LEN];
  gsi_char uniquenick[GP_UNIQUENICK_LEN];
  gsi_char email[GP_EMAIL_LEN];
  gsi_char firstname[GP_FIRSTNAME_LEN];
  gsi_char lastname[GP_LASTNAME_LEN];
  gsi_char homepage[GP_HOMEPAGE_LEN];
  int icquin;
  gsi_char zipcode[GP_ZIPCODE_LEN];
  gsi_char countrycode[GP_COUNTRYCODE_LEN];
  float longitude; 
  float latitude;  
  gsi_char place[GP_PLACE_LEN];  
  int birthday;
  int birthmonth;
  int birthyear;
  GPEnum sex;
  GPEnum publicmask;
  gsi_char aimname[GP_AIMNAME_LEN];
  int pic;
  int occupationid;
  int industryid;
  int incomeid;
  int marriedid;
  int childcount;
  int interests1;
  int ownership1;
  int conntypeid;
} GPGetInfoResponseArg;



typedef struct
{ 
  GPProfile profile;
  unsigned int date;
  gsi_char reason[GP_REASON_LEN];
} GPRecvBuddyRequestArg;



typedef struct
{ 
  GPProfile profile; 
  GPEnum status;
  gsi_char statusString[GP_STATUS_STRING_LEN];
  gsi_char locationString[GP_LOCATION_STRING_LEN];
  unsigned int ip; 
  int port;
  GPEnum quietModeFlags;
} GPBuddyStatus;





typedef struct
{
	GPProfile profile;
	GPEnum statusState;
	unsigned int buddyIp;
	unsigned short buddyPort;
	unsigned int hostIp;
	unsigned int hostPrivateIp;
	unsigned short queryPort;
	unsigned short hostPort;
	unsigned int sessionFlags;
	gsi_char richStatus[GP_RICH_STATUS_LEN];
	gsi_char gameType[GP_STATUS_BASIC_STR_LEN];
	gsi_char gameVariant[GP_STATUS_BASIC_STR_LEN];
	gsi_char gameMapName[GP_STATUS_BASIC_STR_LEN];
	GPEnum quietModeFlags;
	GPEnum newStatusInfoFlag;
} GPBuddyStatusInfo;



typedef struct  
{
	GPProfile profile;
	gsi_char **keys;
	gsi_char **values;
	int numKeys;

} GPGetBuddyStatusInfoKeysArg;




typedef struct
{
	GPProfile profile; 
	unsigned int date;
	int index;
} GPRecvBuddyStatusArg;



typedef struct
{ 
  GPProfile profile;
  unsigned int date;
  gsi_char * message;
} GPRecvBuddyMessageArg;

typedef struct 
{
  GPProfile profile;
  unsigned int date;
  gsi_char * message;
} GPRecvBuddyUTMArg;

typedef struct  
{
	GPProfile profile;
	unsigned int date;
} GPRecvBuddyAuthArg;

typedef struct 
{
	GPProfile profile;
	unsigned int date;
} GPRecvBuddyRevokeArg;



typedef struct
{
  GPTransfer transfer;
  GPEnum type;
  int index;
  int num;
  gsi_char * message;
} GPTransferCallbackArg;



typedef struct
{
  GPResult result;
  gsi_char email[GP_EMAIL_LEN];
  GPEnum isValid;
} GPIsValidEmailResponseArg;



typedef struct
{
  GPResult result;
  gsi_char email[GP_EMAIL_LEN];
  int numNicks;  
  gsi_char ** nicks;
  gsi_char ** uniquenicks;
} GPGetUserNicksResponseArg;



typedef struct
{
  GPProfile profile;
  int productID;
  gsi_char location[GP_LOCATION_STRING_LEN];
} GPRecvGameInviteArg;



typedef struct
{
	GPProfile profile;
	gsi_char nick[GP_NICK_LEN];
	GPEnum status;
	gsi_char statusString[GP_STATUS_STRING_LEN];
} GPFindPlayerMatch;



typedef struct
{
  GPResult result;
  int productID;  
  int numMatches;
  GPFindPlayerMatch * matches;
} GPFindPlayersResponseArg;



typedef struct
{
	GPResult result;
	int numProfiles;
	GPProfileSearchMatch * profiles;
} GPGetReverseBuddiesResponseArg;

typedef struct  
{
	GPProfile profile;
	gsi_char uniqueNick[GP_UNIQUENICK_LEN];
} GPUniqueMatch;

typedef struct  
{
	GPResult result;
	int numOfUniqueMatchs;
	GPUniqueMatch *matches;
} GPGetReverseBuddiesListResponseArg;




 




extern char GPConnectionManagerHostname[64];
extern char GPSearchManagerHostname[64];




#ifndef GSI_UNICODE
#define gpConnect			gpConnectA
#define gpConnectNewUser	gpConnectNewUserA
#define gpConnectUniqueNick gpConnectUniqueNickA
#define gpConnectPreAuthenticated  gpConnectPreAuthenticatedA
#define gpCheckUser			gpCheckUserA
#define gpNewUser			gpNewUserA
#define gpSuggestUniqueNick gpSuggestUniqueNickA
#define gpRegisterUniqueNick       gpRegisterUniqueNickA
#define gpRegisterCdKey     gpRegisterCdKeyA
#define gpGetErrorString	gpGetErrorStringA
#define gpNewProfile		gpNewProfileA
#define gpProfileSearch		gpProfileSearchA
#define gpProfileSearchUniquenick	gpProfileSearchUniquenickA
#define gpSetInfos			gpSetInfosA
#define gpSendBuddyRequest	gpSendBuddyRequestA
#ifndef GP_NEW_STATUS_INFO
#define gpSetStatus			gpSetStatusA
#endif
#ifdef GP_NEW_STATUS_INFO

#define gpSetStatusInfo     gpSetStatusInfoA
#endif
#define gpSendBuddyMessage	gpSendBuddyMessageA
#define gpSendBuddyUTM		gpSendBuddyUTMA
#define gpIsValidEmail		gpIsValidEmailA
#define gpGetUserNicks		gpGetUserNicksA
#define gpSetInfoCacheFilename     gpSetInfoCacheFilenameA
#define gpSendFiles			gpSendFilesA
#define gpAcceptTransfer	gpAcceptTransferA
#define gpRejectTransfer	gpRejectTransferA
#define gpSetTransferDirectory     gpSetTransferDirectoryA
#define gpGetFileName		gpGetFileNameA
#define gpGetFilePath		gpGetFilePathA
#define gpInvitePlayer      gpInvitePlayerA
#ifdef GP_NEW_STATUS_INFO

#define gpAddStatusInfoKey       gpAddStatusInfoKeyA
#define gpSetStatusInfoKey       gpSetStatusInfoKeyA
#define gpGetStatusInfoKeyVal    gpGetStatusInfoKeyValA
#define gpDelStatusInfoKey       gpDelStatusInfoKeyA
#endif
#else
#define gpConnect			gpConnectW
#define gpConnectNewUser	gpConnectNewUserW
#define gpConnectUniqueNick gpConnectUniqueNickW
#define gpConnectPreAuthenticated  gpConnectPreAuthenticatedW
#define gpCheckUser			gpCheckUserW
#define gpNewUser			gpNewUserW
#define gpSuggestUniqueNick gpSuggestUniqueNickW
#define gpRegisterUniqueNick       gpRegisterUniqueNickW
#define gpRegisterCdKey     gpRegisterCdKeyW
#define gpGetErrorString	gpGetErrorStringW
#define gpNewProfile		gpNewProfileW
#define gpProfileSearch		gpProfileSearchW
#define gpProfileSearchUniquenick	gpProfileSearchUniquenickW
#define gpSetInfos			gpSetInfosW
#define gpSendBuddyRequest	gpSendBuddyRequestW
#ifndef GP_NEW_STATUS_INFO
#define gpSetStatus			gpSetStatusW
#endif
#ifdef GP_NEW_STATUS_INFO

#define gpSetStatusInfo     gpSetStatusInfoW
#endif
#define gpSendBuddyMessage	gpSendBuddyMessageW
#define gpSendBuddyUTM		gpSendBuddyUTMW
#define gpIsValidEmail		gpIsValidEmailW
#define gpGetUserNicks		gpGetUserNicksW
#define gpSetInfoCacheFilename     gpSetInfoCacheFilenameW
#define gpSendFiles			gpSendFilesW
#define gpAcceptTransfer	gpAcceptTransferW
#define gpRejectTransfer	gpRejectTransferW
#define gpSetTransferDirectory     gpSetTransferDirectoryW
#define gpGetFileName		gpGetFileNameW
#define gpGetFilePath		gpGetFilePathW
#define gpInvitePlayer      gpInvitePlayerW







#endif



GPResult gpInitialize
(
  GPConnection * connection,
  int productID,				
  int namespaceID,				
								
  int partnerID					
								
								
);



void gpDestroy(
  GPConnection * connection
);



GPResult gpEnable
(
  GPConnection * connection, 
  GPEnum state
);



GPResult gpDisable
(
  GPConnection * connection, 
  GPEnum state
);



GPResult gpProcess
(
  GPConnection * connection
);



GPResult gpSetCallback
(
  GPConnection * connection,
  GPEnum func,
  GPCallback callback,
  void * param
);



GPResult gpConnect
(
  GPConnection * connection,
  const gsi_char nick[GP_NICK_LEN],
  const gsi_char email[GP_EMAIL_LEN],
  const gsi_char password[GP_PASSWORD_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpConnectNewUser
(
  GPConnection * connection,
  const gsi_char nick[GP_NICK_LEN],
  const gsi_char uniquenick[GP_UNIQUENICK_LEN],
  const gsi_char email[GP_EMAIL_LEN],
  const gsi_char password[GP_PASSWORD_LEN],
  const gsi_char cdkey[GP_CDKEY_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpConnectUniqueNick
(
  GPConnection * connection,
  const gsi_char uniquenick[GP_UNIQUENICK_LEN],
  const gsi_char password[GP_PASSWORD_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpConnectPreAuthenticated
(
  GPConnection * connection,
  const gsi_char authtoken[GP_AUTHTOKEN_LEN],
  const gsi_char partnerchallenge[GP_PARTNERCHALLENGE_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
);



void gpDisconnect
(
  GPConnection * connection
);



GPResult gpIsConnected
(
  GPConnection * connection,
  GPEnum * connected
);



GPResult gpCheckUser
(
  GPConnection * connection,
  const gsi_char nick[GP_NICK_LEN],
  const gsi_char email[GP_EMAIL_LEN],
  const gsi_char password[GP_PASSWORD_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpNewUser
(
  GPConnection * connection,
  const gsi_char nick[GP_NICK_LEN],
  const gsi_char uniquenick[GP_UNIQUENICK_LEN],
  const gsi_char email[GP_EMAIL_LEN],
  const gsi_char password[GP_PASSWORD_LEN],
  const gsi_char cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpSuggestUniqueNick
(
  GPConnection * connection,
  const gsi_char desirednick[GP_UNIQUENICK_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpRegisterUniqueNick
(
  GPConnection * connection,
  const gsi_char uniquenick[GP_UNIQUENICK_LEN],
  const gsi_char cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpRegisterCdKey
(
  GPConnection * connection,
  const gsi_char cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpGetErrorCode(
  GPConnection * connection,
  GPErrorCode * errorCode
);



GPResult gpGetErrorString(
  GPConnection * connection,
  gsi_char errorString[GP_ERROR_STRING_LEN]
);



GPResult gpNewProfile(
  GPConnection * connection,
  const gsi_char nick[GP_NICK_LEN],
  GPEnum replace,
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpDeleteProfile(
    GPConnection * connection,
    GPCallback callback,
	void * param
);






GPResult gpProfileFromID(
  GPConnection * connection, 
  GPProfile * profile, 
  int id
);






GPResult gpIDFromProfile(
  GPConnection * connection,
  GPProfile profile,
  int * id
);



GPResult gpUserIDFromProfile(
  GPConnection * connection,
  GPProfile profile,
  int * userid
);



GPResult gpProfileSearch(
  GPConnection * connection,
  const gsi_char nick[GP_NICK_LEN],
  const gsi_char uniquenick[GP_UNIQUENICK_LEN],
  const gsi_char email[GP_EMAIL_LEN],
  const gsi_char firstname[GP_FIRSTNAME_LEN],
  const gsi_char lastname[GP_LASTNAME_LEN],
  int icquin,
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpProfileSearchUniquenick(
  GPConnection * connection,
  const gsi_char uniquenick[GP_UNIQUENICK_LEN],
  const int namespaceIDs[GP_MAX_NAMESPACEIDS],
  int numNamespaces,
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpGetInfo(
  GPConnection * connection,
  GPProfile profile, 
  GPEnum checkCache,
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpGetInfoNoWait(
  GPConnection * connection,
  GPProfile profile,
  GPGetInfoResponseArg * arg
);



GPResult gpSetInfoi(
  GPConnection * connection, 
  GPEnum info, 
  int value
);



GPResult gpSetInfos(
  GPConnection * connection,
  GPEnum info,
  const gsi_char * value
);



GPResult gpSetInfod(
  GPConnection * connection,
  GPEnum info,
  int day,
  int month,
  int year
);



GPResult gpSetInfoMask(
  GPConnection * connection,
  GPEnum mask
);



GPResult gpSendBuddyRequest(
  GPConnection * connection,
  GPProfile profile,
  const gsi_char reason[GP_REASON_LEN]
);



GPResult gpAuthBuddyRequest(
  GPConnection * connection,
  GPProfile profile
);




GPResult gpDenyBuddyRequest(
  GPConnection * connection,
  GPProfile profile
);



GPResult gpDeleteBuddy(
  GPConnection * connection,
  GPProfile profile
);



GPResult gpAddToBlockedList(
  GPConnection * connection,
  GPProfile profile
);



GPResult gpRemoveFromBlockedList(
  GPConnection * connection,
  GPProfile profile
);



GPResult gpGetNumBlocked(
  GPConnection * connection,
  int * numBlocked
);



GPResult gpGetBlockedProfile(
  GPConnection * connection, 
  int index,
  GPProfile * profile
);




gsi_bool gpIsBlocked(
  GPConnection * connection,
  GPProfile profile
);



GPResult gpGetNumBuddies(
  GPConnection * connection,
  int * numBuddies
);



#ifndef GP_NEW_STATUS_INFO
GPResult gpGetBuddyStatus(
  GPConnection * connection,
  int index,
  GPBuddyStatus * status
);
#endif

#ifdef GP_NEW_STATUS_INFO


GPResult gpGetBuddyStatusInfo(
	GPConnection * connection,
	int index, 
	GPBuddyStatusInfo * statusInfo
);

GPResult gpSetBuddyAddr(
	GPConnection *connection, 
	int index,
	unsigned int buddyIp,
	unsigned short buddyPort
);
#endif


GPResult gpGetBuddyIndex(
  GPConnection * connection, 
  GPProfile profile, 
  int * index
);




int gpIsBuddy(
  GPConnection * connection,
  GPProfile profile
);

int gpIsBuddyConnectionOpen(
  GPConnection * connection,
  GPProfile profile
);



#ifndef GP_NEW_STATUS_INFO
GPResult gpSetStatus(
  GPConnection * connection,
  GPEnum status,
  const gsi_char statusString[GP_STATUS_STRING_LEN],
  const gsi_char locationString[GP_LOCATION_STRING_LEN]
);
#endif

#ifdef GP_NEW_STATUS_INFO
GPResult gpSetStatusInfo(
	GPConnection *connection, 
	GPEnum statusState,
	unsigned int hostIp, 
	unsigned int hostPrivateIp,
	unsigned short queryPort,
	unsigned short hostPort,
	unsigned int sessionFlags,
	const gsi_char *richStatus,
	int richStatusLen,
	const gsi_char *gameType,
	int gameTypeLen,
	const gsi_char *gameVariant,
	int gameVariantLen,
	const gsi_char *gameMapName,
	int gameMapNameLen
);

GPResult gpAddStatusInfoKey(GPConnection *connection, const gsi_char *keyName, const gsi_char *keyValue);
GPResult gpSetStatusInfoKey(GPConnection *connection, const gsi_char *keyName, const gsi_char *keyValue);
GPResult gpGetStatusInfoKeyVal(GPConnection *connection, const gsi_char *keyName, gsi_char **keyValue);
GPResult gpDelStatusInfoKey(GPConnection *connection, const gsi_char *keyName);

GPResult gpGetBuddyStatusInfoKeys(GPConnection *connection, int index, GPCallback callback, void *userData);
#endif


GPResult gpSendBuddyMessage(
  GPConnection * connection,
  GPProfile profile,
  const gsi_char * message
);



GPResult gpSendBuddyUTM(
  GPConnection * connection,
  GPProfile profile,
  const gsi_char * message,
  int sendOption 
);








GPResult gpIsValidEmail(
  GPConnection * connection,
  const gsi_char email[GP_EMAIL_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpGetUserNicks(
  GPConnection * connection,
  const gsi_char email[GP_EMAIL_LEN],
  const gsi_char password[GP_PASSWORD_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);




GPResult gpSetInvitableGames(
  GPConnection * connection,
  int numProductIDs,
  const int * productIDs
);




GPResult gpFindPlayers(
  GPConnection * connection,
  int productID,
  GPEnum blocking,
  GPCallback callback,
  void * param
);



GPResult gpInvitePlayer(
  GPConnection * connection,
  GPProfile profile,
  int productID,
  const gsi_char location[GP_LOCATION_STRING_LEN]
);




GPResult gpGetReverseBuddies(
	GPConnection * connection,
	GPEnum blocking,
	GPCallback callback,
	void * param
);





GPResult gpGetReversBuddiesList( GPConnection * connection,
	GPProfile *targets, int numOfTargets, 
	GPEnum blocking,
	GPCallback callback,
	void * param
);



GPResult gpRevokeBuddyAuthorization(
  GPConnection * connection,
  GPProfile profile
);


GPResult gpSetCdKey(
  GPConnection * connection,
  const gsi_char cdkeyhash,
  GPCallback callback
);



GPResult gpGetLoginTicket(
  GPConnection * connection,
  char loginTicket[GP_LOGIN_TICKET_LEN]
);



GPResult gpSetQuietMode(
  GPConnection * connection,
  GPEnum flags
);

#ifndef NOFILE




void gpSetInfoCacheFilename(
  const gsi_char * filename
);




typedef void (* gpSendFilesCallback)(
  GPConnection * connection,
  int index,
  const gsi_char ** path,
  const gsi_char ** name,
  void * param
);

GPResult gpSendFiles(
  GPConnection * connection,
  GPTransfer * transfer,
  GPProfile profile,
  const gsi_char * message,
  gpSendFilesCallback callback,
  void * param
);

GPResult gpAcceptTransfer(
  GPConnection * connection,
  GPTransfer transfer,
  const gsi_char * message
);

GPResult gpRejectTransfer(
  GPConnection * connection,
  GPTransfer transfer,
  const gsi_char * message
);

GPResult gpFreeTransfer(
  GPConnection * connection,
  GPTransfer transfer
);

GPResult gpSetTransferData(
  GPConnection * connection,
  GPTransfer transfer,
  void * userData
);

void * gpGetTransferData(
  GPConnection * connection,
  GPTransfer transfer
);

GPResult gpSetTransferDirectory(
  GPConnection * connection,
  GPTransfer transfer,
  const gsi_char * directory
);


GPResult gpSetTransferThrottle(
  GPConnection * connection,
  GPTransfer transfer,
  int throttle
);


GPResult gpGetTransferThrottle(
  GPConnection * connection,
  GPTransfer transfer,
  int * throttle
);

GPResult gpGetTransferProfile(
  GPConnection * connection,
  GPTransfer transfer,
  GPProfile * profile
);

GPResult gpGetTransferSide(
  GPConnection * connection,
  GPTransfer transfer,
  GPEnum * side
);

GPResult gpGetTransferSize(
  GPConnection * connection,
  GPTransfer transfer,
  int * size
);

GPResult gpGetTransferProgress(
  GPConnection * connection,
  GPTransfer transfer,
  int * progress
);

GPResult gpGetNumFiles(
  GPConnection * connection,
  GPTransfer transfer,
  int * num
);

GPResult gpGetCurrentFile(
  GPConnection * connection,
  GPTransfer transfer,
  int * index
);

GPResult gpSkipFile(
  GPConnection * connection,
  GPTransfer transfer,
  int index
);

GPResult gpGetFileName(
  GPConnection * connection,
  GPTransfer transfer,
  int index,
  gsi_char ** name
);

GPResult gpGetFilePath(
  GPConnection * connection,
  GPTransfer transfer,
  int index,
  gsi_char ** path
);

GPResult gpGetFileSize(
  GPConnection * connection,
  GPTransfer transfer,
  int index,
  int * size
);

GPResult gpGetFileProgress(
  GPConnection * connection,
  GPTransfer transfer,
  int index,
  int * progress
);

GPResult gpGetFileModificationTime(
  GPConnection * connection,
  GPTransfer transfer,
  int index,
  gsi_time * modTime
);

GPResult gpGetNumTransfers(
  GPConnection * connection,
  int * num
);

GPResult gpGetTransfer(
  GPConnection * connection,
  int index,
  GPTransfer * transfer
);
#endif

#ifdef _DEBUG



void gpProfilesReport(
  GPConnection * connection,
  void (* report)(const char * output)
);
#endif

#ifdef __cplusplus
}
#endif

#endif

#line 26 "GP/gpi.h"


#define GPI_NEW_AUTH_NOTIFICATION	(1<<0)
#define GPI_NEW_REVOKE_NOTIFICATION (1<<1)


#define GPI_NEW_STATUS_NOTIFICATION (1<<2)


#define GPI_NEW_LIST_RETRIEVAL_ON_LOGIN (1<<3)


#ifndef GPI_SDKREV
#ifdef GP_NEW_STATUS_INFO
#define GPI_SDKREV (GPI_NEW_AUTH_NOTIFICATION | GPI_NEW_REVOKE_NOTIFICATION | GPI_NEW_STATUS_NOTIFICATION | GPI_NEW_LIST_RETRIEVAL_ON_LOGIN)
#else
#define GPI_SDKREV (GPI_NEW_AUTH_NOTIFICATION | GPI_NEW_REVOKE_NOTIFICATION | GPI_NEW_LIST_RETRIEVAL_ON_LOGIN)
#endif
#endif


#define GPI_PEER_PORT 6500





typedef enum _GPIBool
{
	GPIFalse,
	GPITrue
} GPIBool;

#line 1 "GP/gpiUtility.h"
 












#ifndef _GPIUTILITY_H_
#define _GPIUTILITY_H_



#line 20 "GP/gpiUtility.h"





#define GPI_READ_SIZE                  (16 * 1024)



#define freeclear(mem)      { gsifree(mem); (mem) = NULL; }

#define Error(connection, result, string)       { gpiSetErrorString(connection, string);                                                        return (result);}


#define CallbackError(connection, result, code, string)  { gpiSetError(connection, code, string);                                                            gpiCallErrorCallback(connection, result, GP_NON_FATAL);                                                            return result;}



#define CallbackFatalError(connection, result, code, string)  { gpiSetError(connection, code, string);                                                                  gpiCallErrorCallback(connection, result, GP_FATAL);                                                                  return result;}



#define CHECK_RESULT(result)                          { GPResult __result__ = (result);                                                         if(__result__ != GP_NO_ERROR){                                                           return __result__;}}





void
strzcpy(
  char * dest,
  const char * src,
  size_t len  
);

void
gpiDebug(
  GPConnection * connection,
  const char * fmt,
  ...
);

GPIBool
gpiValueForKeyWithIndex(
  const char * command,
  const char * key,
  int * index,
  char * value,
  int len
);

GPIBool
gpiValueForKey(
  const char * command,
  const char * key,
  char * value,
  int len
);

char *
gpiValueForKeyAlloc(
  const char * command,
  const char * key
);

GPResult
gpiCheckSocketConnect(
  GPConnection * connection,
  SOCKET sock,
  int * state
);

GPResult
gpiReadKeyAndValue(
  GPConnection * connection,
  const char * buffer,
  int * index,
  char key[512],
  char value[512]
);

GPIBool
gpiCheckForError(
  GPConnection * connection,
  const char * input,
  GPIBool callErrorCallback
);

void
gpiSetError(
  GPConnection * connection,
  GPErrorCode errorCode,
  const char * errorString
);

void
gpiSetErrorString(
  GPConnection * connection,
  const char * errorString
);

void
gpiEncodeString(
  const char * unencodedString,
  char * encodedString
);

#endif

#line 60 "GP/gpi.h"
#line 1 "GP/gpiCallback.h"
 












#ifndef _GPICALLBACK_H_
#define _GPICALLBACK_H_



#line 20 "GP/gpiCallback.h"





enum GPICallbackId
{
	GPI_ERROR                      = GP_ERROR,
	GPI_RECV_BUDDY_REQUEST         = GP_RECV_BUDDY_REQUEST,
	GPI_RECV_BUDDY_STATUS          = GP_RECV_BUDDY_STATUS,
	GPI_RECV_BUDDY_MESSAGE         = GP_RECV_BUDDY_MESSAGE,
	GPI_RECV_BUDDY_UTM             = GP_RECV_BUDDY_UTM,
	GPI_RECV_GAME_INVITE           = GP_RECV_GAME_INVITE,
	GPI_TRANSFER_CALLBACK          = GP_TRANSFER_CALLBACK,
	GPI_RECV_BUDDY_AUTH            = GP_RECV_BUDDY_AUTH,
	GPI_RECV_BUDDY_REVOKE          = GP_RECV_BUDDY_REVOKE,
	GPI_NUM_CALLBACKS              
};



enum GPIAddCallbackType
{
	GPI_ADD_NORMAL,
	GPI_ADD_ERROR,
	GPI_ADD_MESSAGE,
	GPI_ADD_NICKS,
	GPI_ADD_PMATCH,
	GPI_ADD_STATUS,
	GPI_ADD_BUDDDYREQUEST,
	GPI_ADD_TRANSFER_CALLBACK,
	GPI_ADD_REVERSE_BUDDIES,
	GPI_ADD_SUGGESTED_UNIQUE,
	GPI_ADD_BUDDYAUTH,
	GPI_ADD_BUDDYUTM,
	GPI_ADD_BUDDYREVOKE,
	GPI_ADD_REVERSE_BUDDIES_LIST,
	GPI_ADD_BUDDYKEYS,
	GPI_NUM_ADD_CALLBACK_TYPES
};






typedef struct
{
  GPCallback callback;
  void * param;
} GPICallback;



typedef struct GPICallbackData
{
	GPICallback callback;
	void * arg;
	int type;
	int operationID;
	struct GPICallbackData * pnext;
} GPICallbackData;



void
gpiCallErrorCallback(
  GPConnection * connection,
  GPResult result,
  GPEnum fatal
);

typedef struct GPIOperation_s *GPIOperation_st;

GPResult
gpiAddCallback(
  GPConnection * connection,
  GPICallback callback,
  void * arg,
  const struct GPIOperation_s * operation,
  int type
);

GPResult
gpiProcessCallbacks(
  GPConnection * connection,
  int blockingOperationID
);

#endif

#line 61 "GP/gpi.h"
#line 1 "GP/gpiOperation.h"
 












#ifndef _GPIOPERATION_H_
#define _GPIOPERATION_H_



#line 20 "GP/gpiOperation.h"





#define GPI_CONNECT                    0
#define GPI_NEW_PROFILE                1
#define GPI_GET_INFO                   2
#define GPI_PROFILE_SEARCH             3
#define GPI_REGISTER_UNIQUENICK        4
#define GPI_DELETE_PROFILE             5
#define GPI_REGISTER_CDKEY             6


#define GPI_START                      0

#define GPI_LOGIN                      2
#define GPI_REQUESTING                 3
#define GPI_WAITING                    4
#define GPI_FINISHING                  5





typedef struct GPIOperation_s
{
  int type;
  void * data;
  GPIBool blocking;
  GPICallback callback;
  int state;
  int id;
  GPResult result;
  struct GPIOperation_s * pnext;
} GPIOperation;



typedef struct
{
  char serverChallenge[128];
  char userChallenge[33];
  char passwordHash[33];
  char authtoken[GP_AUTHTOKEN_LEN];
  char partnerchallenge[GP_PARTNERCHALLENGE_LEN];
  char cdkey[GP_CDKEY_LEN];
  GPIBool newuser;
} GPIConnectData;



GPResult
gpiAddOperation(
  GPConnection * connection,
  int type,
  void * data,
  GPIOperation ** op,
  GPEnum blocking,
  GPCallback callback,
  void * param
);

void
gpiRemoveOperation(
  GPConnection * connection,
  GPIOperation * operation
);

void
gpiDestroyOperation(
  GPConnection * connection,
  GPIOperation * operation
);

GPIBool
gpiFindOperationByID(
  const GPConnection * connection,
  GPIOperation ** operation,
  int id
);

GPIBool
gpiOperationsAreBlocking(
  const GPConnection * connection
);

GPResult
gpiProcessOperation(
  GPConnection * connection,
  GPIOperation * operation,
  const char * input
);

GPResult
gpiFailedOpCallback(
  GPConnection * connection,
  const GPIOperation * operation
);

#endif

#line 62 "GP/gpi.h"
#line 1 "GP/gpiConnect.h"
 












#ifndef _GPICONNECT_H_
#define _GPICONNECT_H_



#line 20 "GP/gpiConnect.h"





#define GPI_NOT_CONNECTED              0
#define GPI_CONNECTING                 1
#define GPI_NEGOTIATING                2
#define GPI_CONNECTED                  3
#define GPI_DISCONNECTED               4
#define GPI_PROFILE_DELETING           5



GPResult
gpiConnect(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  const char uniquenick[GP_UNIQUENICK_LEN],
  const char email[GP_EMAIL_LEN],
  const char password[GP_PASSWORD_LEN],
  const char authtoken[GP_AUTHTOKEN_LEN],
  const char partnerchallenge[GP_PARTNERCHALLENGE_LEN],
  const char cdkey[GP_CDKEY_LEN],
  GPEnum firewall,
  GPIBool newuser,
  GPEnum blocking,
  GPCallback callback,
  void * param
);

void
gpiDisconnect(
  GPConnection * connection,
  GPIBool tellServer
);

GPResult
gpiProcessConnect(
  GPConnection * connection,
  GPIOperation * operation,
  const char * input
);

GPResult
gpiCheckConnect(
  GPConnection * connection
);

#endif

#line 63 "GP/gpi.h"
#line 1 "GP/gpiBuffer.h"
 












#ifndef _GPIBUFFER_H_
#define _GPIBUFFER_H_



#line 20 "GP/gpiBuffer.h"





typedef struct
{
	char * buffer;
	int size;
	int len;
	int pos;
} GPIBuffer;

typedef struct GPIPeer_s * GPIPeer_st;



GPResult
gpiAppendCharToBuffer(
  GPConnection * connection,
  GPIBuffer * outputBuffer,
  char c
);

GPResult
gpiAppendStringToBufferLen(
  GPConnection * connection,
  GPIBuffer * outputBuffer,
  const char * string,
  int stringLen
);

GPResult
gpiAppendStringToBuffer(
  GPConnection * connection,
  GPIBuffer * outputBuffer,
  const char * buffer
);

GPResult gpiAppendShortToBuffer(
	GPConnection * connection,
	GPIBuffer * outputBuffer, 
	short num
);

GPResult gpiAppendUShortToBuffer(
	GPConnection * connection,
	GPIBuffer * outputBuffer, 
	unsigned short num
);

GPResult
gpiAppendIntToBuffer(
  GPConnection * connection,
  GPIBuffer * outputBuffer,
  int num
);

GPResult
gpiAppendUIntToBuffer(
  GPConnection * connection,
  GPIBuffer * outputBuffer,
  unsigned int num
);

GPResult
gpiSendOrBufferChar(
  GPConnection * connection,
  GPIPeer_st peer,
  char c
);

 








GPResult
gpiSendOrBufferStringLenToPeer(
	GPConnection * connection,
	GPIPeer_st peer,
	const char * string,
	int stringLen
);

GPResult
gpiSendOrBufferString(
  GPConnection * connection,
  GPIPeer_st peer,
  char * string
);

GPResult
gpiSendOrBufferInt(
  GPConnection * connection,
  GPIPeer_st peer,
  int num
);

GPResult
gpiSendOrBufferUInt(
  GPConnection * connection,
  GPIPeer_st peer,
  unsigned int num
);

GPResult
gpiSendFromBuffer(
  GPConnection * connection,
  SOCKET sock,
  GPIBuffer * outputBuffer,
  GPIBool * connClosed,
  GPIBool clipSentData,
  char id[3]
);

GPResult
gpiRecvToBuffer(
  GPConnection * connection,
  SOCKET sock,
  GPIBuffer * inputBuffer,
  int * bytesRead,
  GPIBool * connClosed,
  char id[3]
);

GPResult
gpiReadMessageFromBuffer(
  GPConnection * connection,
  GPIBuffer * inputBuffer,
  char ** message,
  int * type,
  int * len
);

GPResult
gpiClipBufferToPosition(
  GPConnection * connection,
  GPIBuffer * buffer
);

GPResult gpiSendBufferToPeer(GPConnection * connection, unsigned int ip, unsigned short port, 
							 GPIBuffer * outputBuffer, GPIBool *closed, GPIBool clipSentData);
#endif

#line 64 "GP/gpi.h"
#line 1 "GP/gpiInfo.h"
 












#ifndef _GPIINFO_H_
#define _GPIINFO_H_



#line 20 "GP/gpiInfo.h"





typedef struct
{
  char * nick;
  char * uniquenick;
  char * email;
  char * firstname;
  char * lastname;
  char * homepage;
  int icquin;
  char zipcode[GP_ZIPCODE_LEN];
  char countrycode[GP_COUNTRYCODE_LEN];
  float longitude; 
  float latitude;  
  char place[GP_PLACE_LEN];  
  int birthday;
  int birthmonth;
  int birthyear;
  GPEnum sex;
  int publicmask;
  char * aimname;
  int pic;
  int occupationid;
  int industryid;
  int incomeid;
  int marriedid;
  int childcount;
  int interests1;
  int ownership1;
  int conntypeid;
} GPIInfoCache;



GPResult
gpiSetInfoi(
  GPConnection * connection, 
  GPEnum info, 
  int value
);

GPResult
gpiSetInfos(
  GPConnection * connection, 
  GPEnum info, 
  const char * value
);

GPResult
gpiSetInfod(
  GPConnection * connection, 
  GPEnum info, 
  int day,
  int month,
  int year
);

GPResult
gpiSetInfoMask(
  GPConnection * connection, 
  GPEnum mask
);

void
gpiInfoCacheToArg(
  const GPIInfoCache * cache,
  GPGetInfoResponseArg * arg
);

GPResult
gpiGetInfo(
  GPConnection * connection,
  GPProfile profile, 
  GPEnum checkCache,
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult
gpiGetInfoNoWait(
  GPConnection * connection,
  GPProfile profile,
  GPGetInfoResponseArg * arg
);

GPResult
gpiProcessGetInfo(
  GPConnection * connection,
  GPIOperation * operation,
  const char * input
);

GPResult
gpiSendGetInfo(
  GPConnection * connection,
  int profileid,
  int operationid
);

GPResult
gpiAddLocalInfo(
  GPConnection * connection,
  GPIBuffer * buffer
);

typedef struct GPIProfile *pGPIProfile;

GPIBool
gpiSetInfoCache(
  GPConnection * connection,
  pGPIProfile profile,
  const GPIInfoCache * cache
);

void
gpiFreeInfoCache(
  pGPIProfile profile
);

#endif

#line 65 "GP/gpi.h"
#line 1 "GP/gpiProfile.h"
 












#ifndef _GPIPROFILE_H_
#define _GPIPROFILE_H_



#line 20 "GP/gpiProfile.h"



#define GPI_SIG_LEN      33







typedef struct _GPIBuddyStatusInfo 
{
	int buddyIndex;
	GPEnum statusState;
	char *richStatus;
	char *gameType;
	char *gameVariant;
	char *gameMapName;
	unsigned int sessionFlags;
	unsigned int buddyIp;
	unsigned short buddyPort;
	unsigned int hostIp;
	unsigned int hostPrivateIp;
	unsigned short queryPort;
	unsigned short hostPort;
	GPEnum quietModeFlags;
	int productId;
	
	DArray extendedInfoKeys;
} GPIBuddyStatusInfo;


typedef struct
{
	int buddyIndex;
	GPEnum status;
	char * statusString;
	char * locationString;
	unsigned int ip;
	unsigned short port;
	GPEnum quietModeFlags;
} GPIBuddyStatus;



typedef struct GPIProfile
{
	int profileId;
	int userId;
	GPIBuddyStatus * buddyStatus;
	GPIBuddyStatusInfo *buddyStatusInfo;
	GPIInfoCache * cache;
	char * authSig;
	int requestCount;
	char * peerSig;
    gsi_bool blocked;
    int blockIndex;
    gsi_bool buddyOrBlockCache;
} GPIProfile;



typedef struct
{
	HashTable profileTable;
	int num;
	int numBuddies;
    int numBlocked;
} GPIProfileList;



GPIBool
gpiInitProfiles(
  GPConnection * connection
);

GPIProfile *
gpiProfileListAdd(
  GPConnection * connection,
  int id
);

GPIBool
gpiGetProfile(
  GPConnection * connection,
  GPProfile profileid,
  GPIProfile ** pProfile
);

GPResult
gpiProcessNewProfile(
  GPConnection * connection,
  GPIOperation * operation,
  const char * input
);

GPResult
gpiNewProfile(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  GPEnum replace,
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult gpiProcessDeleteProfle
(
  GPConnection * connection,
  GPIOperation * operation,
  const char * input
);

GPResult gpiDeleteProfile(
    GPConnection * connection,
    GPCallback callback,
	void * param
);

void
gpiRemoveProfile(
  GPConnection * connection,
  GPIProfile * profile
);

void
gpiRemoveProfileByID(
  GPConnection * connection,
  int profileid
);

GPResult
gpiLoadDiskProfiles(
  GPConnection * connection
);

GPResult
gpiSaveDiskProfiles(
  GPConnection * connection
);

GPResult
gpiFindProfileByUser(
  GPConnection * connection,
  char nick[GP_NICK_LEN],
  char email[GP_EMAIL_LEN],
  GPIProfile ** profile
);


typedef GPIBool
(* gpiProfileMapFunc)(
  GPConnection * connection,
  GPIProfile * profile,
  void * data
);

GPIBool
gpiProfileMap(
  GPConnection * connection,
  gpiProfileMapFunc func,
  void * data
);

GPIProfile *
gpiFindBuddy(
  GPConnection * connection,
  int buddyIndex
);

void gpiRemoveBuddyStatus(GPIBuddyStatus *buddyStatus);
void gpiRemoveBuddyStatusInfo(GPIBuddyStatusInfo *buddyStatusInfo);

GPIBool
gpiCanFreeProfile(
  GPIProfile * profile
);

void gpiSetInfoCacheFilename(
  const char filename[FILENAME_MAX + 1]
);


GPResult
gpiAddToBlockedList(
  GPConnection * connection,
  int profileid
);

GPResult
gpiRemoveFromBlockedList(
  GPConnection * connection,
  int profileid
);

GPIProfile *
gpiFindBlockedProfile(
  GPConnection * connection, 
  int blockIndex
);

GPResult
gpiProcessRecvBlockedList(
  GPConnection * connection,
  const char * input
);

#endif

#line 66 "GP/gpi.h"
#line 1 "GP/gpiPeer.h"
 












#ifndef _GPIPEER_H_
#define _GPIPEER_H_



#line 20 "GP/gpiPeer.h"





#define GPI_PEER_NOT_CONNECTED       100
#define GPI_PEER_GETTING_SIG         101
#define GPI_PEER_GOT_SIG             102
#define GPI_PEER_CONNECTING          103
#define GPI_PEER_WAITING             104
#define GPI_PEER_CONNECTED           105
#define GPI_PEER_DISCONNECTED        106



#define GPI_PEER_TIMEOUT               (10 * 1000)



#define GPI_PEER_OP_TIMEOUT            60000

typedef enum
{
	GPI_PEER_OP_STATE_NONE,
	GPI_PEER_OP_STATE_REQUESTED,
	GPI_PEER_OP_STATE_FINISHED
} GPIPeerOpState;
 
typedef struct GPITransferID_s * GPITransferID_st;





typedef struct GPIMessage
{
	GPIBuffer buffer;
	int type;
	int start;
} GPIMessage;

typedef struct _GPIPeerOp
{
	GPIPeerOpState state;
	void *userData;
	GPCallback callback;
	struct _GPIPeerOp * next;
	int type;
	gsi_time timeout;
} GPIPeerOp;

typedef struct _GPIPeerOpQueue
{
	GPIPeerOp * opList;
	GPIPeerOp * first;
	GPIPeerOp * last;
} GPIPeerOpQueue;



typedef struct GPIPeer_s
{
	int state;
	GPIBool initiated;
	
	unsigned int ip;
	unsigned short port;
	GPProfile profile;
	time_t timeout;
	int nackCount;
	GPIBuffer inputBuffer;
	GPIBuffer outputBuffer;
	DArray messages;
	GPIPeerOpQueue peerOpQueue;
	struct GPIPeer_s * pnext;
} GPIPeer;



GPResult
gpiProcessPeers(
  GPConnection * connection
);

GPResult
gpiPeerGetSig(
  GPConnection * connection,
  GPIPeer * peer
);

GPResult
gpiPeerStartConnect(
  GPConnection * connection,
  GPIPeer * peer
);


GPIPeer * gpiGetPeerByProfile(const GPConnection * connection,
							  int profileid);


GPIPeer *gpiGetPeerByAddr(const GPConnection *connection,
                          unsigned int ip,
                          unsigned short port);

gsi_bool gpiIsPeerConnected(GPIPeer *peer);

GPIPeer *
gpiAddPeer(
  GPConnection * connection,
  int profileid,
  GPIBool initiate
);

void
gpiDestroyPeer(
  GPConnection * connection,
  GPIPeer * peer
);

void
gpiRemovePeer(
  GPConnection * connection,
  GPIPeer * peer
);

GPResult
gpiPeerAddMessage(
  GPConnection * connection,
  GPIPeer * peer,
  int type,
  const char * message
);

GPResult
gpiPeerStartTransferMessage(
  GPConnection * connection,
  GPIPeer * peer,
  int type,
  const struct GPITransferID_s * transferID
);

GPResult
gpiPeerFinishTransferMessage(
  GPConnection * connection,
  GPIPeer * peer,
  const char * message,
  int len
);

GPResult
gpiPeerSendMessages(
  GPConnection * connection,
  GPIPeer * peer
);

void gpiPeerLeftCallback(unsigned int ip, unsigned short port, GSUdpCloseReason reason, void *userData);
void gpiPeerMessageCallback(unsigned int ip, unsigned short port, unsigned char *message, 
							unsigned int messageLength, gsi_bool reliable, void *userData);
void gpiPeerAcceptedCallback(unsigned int ip, unsigned short port, 
							 GSUdpErrorCode error, gsi_bool rejected, void *userData);
void gpiPeerPingReplyCallback(unsigned int ip, unsigned short port, unsigned int latency, void *userData);

void gpiPeerAddOp(GPIPeer *peer, GPIPeerOp *operation);
void gpiPeerRemoveOp(GPIPeer *peer, GPIPeerOp *operation);
void gpiCheckTimedOutPeerOperations(GPConnection * connection, GPIPeer * peer);
#endif

#line 67 "GP/gpi.h"
#line 1 "GP/gpiSearch.h"
 












#ifndef _GPISEARCH_H_
#define _GPISEARCH_H_



#line 20 "GP/gpiSearch.h"



#define GPI_SEARCH_PROFILE			    1
#define GPI_SEARCH_IS_VALID             2
#define GPI_SEARCH_NICKS                3
#define GPI_SEARCH_PLAYERS              4
#define GPI_SEARCH_CHECK                5
#define GPI_SEARCH_NEWUSER              6
#define GPI_SEARCH_OTHERS_BUDDY         7
#define GPI_SEARCH_SUGGEST_UNIQUE       8
#define GPI_SEARCH_OTHERS_BUDDY_LIST    9
#define GPI_SEARCH_PROFILE_UNIQUENICK  10


#define GPI_SEARCH_TIMEOUT 60000



typedef struct
{
	int type;
	SOCKET sock;
	GPIBuffer inputBuffer;
	GPIBuffer outputBuffer;
	char nick[GP_NICK_LEN];
	char uniquenick[GP_UNIQUENICK_LEN];
	int namespaceIDs[GP_MAX_NAMESPACEIDS];
	int numNamespaces;
	char email[GP_EMAIL_LEN];
	char firstname[GP_FIRSTNAME_LEN];
	char lastname[GP_LASTNAME_LEN];
	char password[GP_PASSWORD_LEN];
	char cdkey[GP_CDKEY_LEN];
	int partnerID;
	int icquin;
	int skip;
	int productID;
	GPIBool processing;
	GPIBool remove;
	gsi_time searchStartTime;
	int *revBuddyProfileIds;
	int numOfRevBuddyProfiles;
} GPISearchData;



GPResult
gpiProfileSearch(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  const char uniquenick[GP_UNIQUENICK_LEN],
  const char email[GP_EMAIL_LEN],
  const char firstname[GP_FIRSTNAME_LEN],
  const char lastname[GP_LASTNAME_LEN],
  int icquin,
  int skip,
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult
gpiProfileSearchUniquenick(
  GPConnection * connection,
  const char uniquenick[GP_UNIQUENICK_LEN],
  const int namespaceIDs[],
  int numNamespaces,
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult
gpiIsValidEmail(
  GPConnection * connection,
  const char email[GP_EMAIL_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult
gpiGetUserNicks(
  GPConnection * connection,
  const char email[GP_EMAIL_LEN],
  const char password[GP_PASSWORD_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult
gpiFindPlayers(
  GPConnection * connection,
  int productID,
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult gpiCheckUser(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  const char email[GP_EMAIL_LEN],
  const char password[GP_PASSWORD_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult gpiNewUser(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  const char uniquenick[GP_UNIQUENICK_LEN],
  const char email[GP_EMAIL_LEN],
  const char password[GP_PASSWORD_LEN],
  const char cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult gpiOthersBuddy(
  GPConnection * connection,
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult gpiOthersBuddyList(
	GPConnection * connection,
	int *profiles, 
	int numOfProfiles,
	GPEnum blocking,
	GPCallback callback,
	void * param
);

GPResult gpiSuggestUniqueNick(
  GPConnection * connection,
  const char desirednick[GP_NICK_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult
gpiProcessSearches(
  GPConnection * connection
);

#endif

#line 68 "GP/gpi.h"
#line 1 "GP/gpiBuddy.h"
 












#ifndef _GPIBUDDY_H_
#define _GPIBUDDY_H_



#line 20 "GP/gpiBuddy.h"





#define GPI_BM_MESSAGE                    1
#define GPI_BM_REQUEST                    2
#define GPI_BM_REPLY                      3  
#define GPI_BM_AUTH                       4
#define GPI_BM_UTM                        5
#define GPI_BM_REVOKE                     6  
#define GPI_BM_STATUS                   100						
#define GPI_BM_INVITE                   101
#define GPI_BM_PING                     102
#define GPI_BM_PONG                     103
#define GPI_BM_KEYS_REQUEST             104
#define GPI_BM_KEYS_REPLY               105
#define GPI_BM_FILE_SEND_REQUEST        200
#define GPI_BM_FILE_SEND_REPLY          201
#define GPI_BM_FILE_BEGIN               202
#define GPI_BM_FILE_END                 203
#define GPI_BM_FILE_DATA                204
#define GPI_BM_FILE_SKIP                205
#define GPI_BM_FILE_TRANSFER_THROTTLE   206
#define GPI_BM_FILE_TRANSFER_CANCEL     207
#define GPI_BM_FILE_TRANSFER_KEEPALIVE  208



GPResult
gpiProcessRecvBuddyMessage(
  GPConnection * connection,
  const char * input
);

GPResult gpiProcessRecvBuddyStatusInfo(GPConnection *connection, const char *input);

GPResult 
gpiProcessRecvBuddyList(
  GPConnection * connection, 
  const char * input
);

GPResult
gpiSendServerBuddyMessage(
  GPConnection * connection,
  int profileid,
  int type,
  const char * message
);

GPResult
gpiSendBuddyMessage(
  GPConnection * connection,
  int profileid,
  int type,
  const char * message,
  int sendOptions,
  GPIPeerOp *peerOp
);

GPResult gpiBuddyHandleKeyRequest(GPConnection *connection, GPIPeer *peer);
GPResult gpiBuddyHandleKeyReply(GPConnection *connection, GPIPeer *peer, char *buffer);

GPResult
gpiAuthBuddyRequest(
  GPConnection * connection,
  GPProfile profile
);

GPIBool
gpiFixBuddyIndices(
  GPConnection * connection,
  GPIProfile * profile,
  void * data
);

GPResult
gpiDeleteBuddy(
  GPConnection * connection,
  GPProfile profile,
  GPIBool sendServerRequest
);

#endif

#line 69 "GP/gpi.h"
#line 1 "GP/gpiTransfer.h"
 












#ifndef _GPITRANSFER_H_
#define _GPITRANSFER_H_



#line 20 "GP/gpiTransfer.h"



#define GPI_FILE_DIRECTORY     (1 << 1)
#define GPI_FILE_SKIP          (1 << 2)
#define GPI_FILE_FAILED        (1 << 3)
#define GPI_FILE_COMPLETED     (1 << 4)
#define GPI_FILE_CONFIRMING    (1 << 5)

#define GPI_ACCEPTED           0
#define GPI_REJECTED           1
#define GPI_NOT_ACCEPTING      2

#define GPI_SKIP_READ_ERROR    0
#define GPI_SKIP_WRITE_ERROR   1
#define GPI_SKIP_USER_SKIP     2



typedef enum
{
	GPITransferPinging,
	GPITransferWaiting,
	GPITransferTransferring,
	GPITransferComplete,
	GPITransferCancelled,
	GPITransferNoConnection
} GPITransferState;

typedef struct GPITransferID_s
{
	int profileid;
	unsigned int count;
	unsigned int time;
} GPITransferID;

typedef struct
{
	GPITransferState state;
	DArray files;
	GPITransferID transferID;
	int localID;
	GPIBool sender;
	GPProfile profile;
	GPIPeer * peer;
	int currentFile;
	int throttle;
	char * baseDirectory;
	unsigned long lastSend;
	char * message;
	int totalSize;
	int progress;
	void * userData;
} GPITransfer;

typedef struct
{
	char * path;
	char * name;
	
#ifdef GSI_UNICODE
	unsigned short* name_W; 
	unsigned short* path_W;
#endif

	int progress;
	int size;
	int acknowledged;
	FILE * file;
	int flags;
	gsi_time modTime;
	MD5_CTX md5;
	int reason;
} GPIFile;



#ifndef NOFILE
GPResult gpiInitTransfers(
  GPConnection * connection
);

void gpiCleanupTransfers(
  GPConnection * connection
);

GPResult gpiProcessTransfers
(
  GPConnection * connection
);

GPResult gpiNewSenderTransfer
(
  GPConnection * connection,
  GPITransfer ** transfer,
  GPProfile profile
);

void gpiFreeTransfer
(
  GPConnection * connection,
  GPITransfer * transfer
);

void gpiCancelTransfer
(
  GPConnection * connection,
  GPITransfer * transfer
);

void gpiTransferError
(
  GPConnection * connection,
  const GPITransfer * transfer
);

GPITransfer * gpiFindTransferByLocalID
(
  GPConnection * connection,
  int localID
);

int gpiGetTransferLocalIDByIndex
(
  GPConnection * connection,
  int index
);

GPIFile * gpiAddFileToTransfer
(
  GPITransfer * transfer,
  const char * path,
  const char * name
);

void gpiSkipFile
(
  GPConnection * connection,
  GPITransfer * transfer,
  int file,
  int reason
);

void gpiSkipCurrentFile
(
  GPConnection * connection,
  GPITransfer * transfer,
  int reason
);

GPIBool gpiGetTransferFileInfo
(
  FILE * file,
  int * size,
  gsi_time * modTime
);

void gpiTransferPeerDestroyed
(
  GPConnection * connection,
  GPIPeer * peer
);

void gpiTransfersHandlePong
(
  GPConnection * connection,
  GPProfile profile,
  GPIPeer * peer
);
#endif

GPResult gpiSendTransferReply
(
  GPConnection * connection,
  const GPITransferID * transferID,
  GPIPeer * peer,
  int result,
  const char * message
);

void gpiHandleTransferMessage
(
  GPConnection * connection,
  GPIPeer * peer,
  int type,
  const char * headers,
  const char * buffer,
  int len
);

#endif

#line 70 "GP/gpi.h"
#line 1 "GP/gpiUnique.h"
 












#ifndef _GPIUNIQUE_H_
#define _GPIUNIQUE_H_



#line 20 "GP/gpiUnique.h"



GPResult gpiRegisterUniqueNick(
  GPConnection * connection,
  const char uniquenick[GP_UNIQUENICK_LEN],
  const char cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult gpiProcessRegisterUniqueNick(
  GPConnection * connection,
  GPIOperation * operation,
  const char * input
);


GPResult gpiRegisterCdKey(
  GPConnection * connection,
  const char cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
);

GPResult gpiProcessRegisterCdKey(
  GPConnection * connection,
  GPIOperation * operation,
  const char * input
);

#endif

#line 71 "GP/gpi.h"
#line 1 "GP/gpiKeys.h"
#ifndef _GPIKEYS_H_
#define _GPIKEYS_H_

#line 5 "GP/gpiKeys.h"
#define GPI_INITIAL_NUM_KEYS 1

typedef struct
{
	char *keyName;
	char *keyValue;
} GPIKey;

void gpiStatusInfoKeyFree(void *element);
GPResult gpiStatusInfoKeysInit(GPConnection * connection);
void gpiStatusInfoKeysDestroy(GPConnection * connection);
int gpiStatusInfoKeyCompFunc(const void *elem1, const void *elem2);
GPResult gpiStatusInfoAddKey(GPConnection *connection, DArray keys, const char *theKeyName, const char *theKeyValue);
GPResult gpiStatusInfoDelKey(GPConnection *connection, DArray keys, const char *keyName);
GPResult gpiStatusInfoSetKey(GPConnection *connection, DArray keys, const char *keyName, const char *newKeyValue);
GPResult gpiStatusInfoGetKey(GPConnection *connection, DArray keys, const char *keyName, char **keyValue);
GPResult gpiSaveKeysToBuffer(GPConnection *connection, char **buffer);
GPResult gpiStatusInfoCheckKey(GPConnection *connection, DArray keys, const char *keyName, char **keyValue);
#endif

#line 72 "GP/gpi.h"


#ifdef _PS3
#line 1 "GP/gpiPS3.h"
 









#ifndef _GPIPS3_H_
#define _GPIPS3_H_



#line 17 "GP/gpiPS3.h"
#include <np.h>
#include <np\common.h>
#include <sysutil/sysutil_common.h>




#define	GPI_NP_SYNC_DELAY		5000	
#define	GPI_NP_STATUS_TIMEOUT	5000	
#define	GPI_NP_NUM_TRANSACTIONS	32	    



typedef struct 
{
    int       npTransId;
    SceNpId   *npIdForAdd;
    gsi_bool  npLookupDone;
} npIdLookupTrans;



GPResult gpiInitializeNpBasic();
GPResult gpiCheckNpStatus(GPConnection * connection);
GPResult gpiDestroyNpBasic(GPConnection * connection);
GPResult gpiProcessNp(GPConnection * connection);
int gpiNpBasicCallback(int event, int retCode, uint32_t reqId, void *arg);

GPResult gpiSyncNpBuddies(GPConnection * connection);
void gpiSyncNpBuddiesCallback(GPConnection * pconnection, GPProfileSearchResponseArg * arg, void * param);

GPResult gpiSyncNpBlockList(GPConnection * connection);
void gpiSyncNpBlockListCallback(GPConnection * pconnection, GPProfileSearchResponseArg * arg, void * param);

GPResult gpiAddToNpBlockList(GPConnection * connection, int profileid);
void gpiAddToNpBlockListInfoCallback(GPConnection * pconnection, GPGetInfoResponseArg * arg, void * param);

#endif

#line 76 "GP/gpi.h"
#endif



typedef struct
{
  char errorString[GP_ERROR_STRING_LEN];
  GPIBool infoCaching;
  GPIBool infoCachingBuddyAndBlockOnly;
  GPIBool simulation;
  GPIBool firewall;
  char nick[GP_NICK_LEN];
  char uniquenick[GP_UNIQUENICK_LEN];
  char email[GP_EMAIL_LEN];
  char password[GP_PASSWORD_LEN];
  int sessKey;
  int userid;
  int profileid;
  int partnerID;
  GPICallback callbacks[GPI_NUM_CALLBACKS];
  SOCKET cmSocket;
  int connectState;
  GPIBuffer socketBuffer;
  char * inputBuffer;
  int inputBufferSize;
  GPIBuffer outputBuffer;
  
  
  char mHeader[GS_UDP_MSG_HEADER_LEN];
  unsigned short peerPort;
  int nextOperationID;
  int numSearches;
  
	
	GPEnum lastStatusState;
	unsigned int hostIp;
	unsigned int hostPrivateIp;
	unsigned short queryPort;
	unsigned short hostPort;
	unsigned int sessionFlags;

	char richStatus[GP_RICH_STATUS_LEN];
	char gameType[GP_STATUS_BASIC_STR_LEN];
	char gameVariant[GP_STATUS_BASIC_STR_LEN];
	char gameMapName[GP_STATUS_BASIC_STR_LEN];

	
	DArray extendedInfoKeys;

  
  char lastStatusString[GP_STATUS_STRING_LEN];
  char lastLocationString[GP_LOCATION_STRING_LEN];
  
  GPErrorCode errorCode;
  GPIBool fatalError;
  FILE * diskCache;
  GPIOperation * operationList;
  GPIProfileList profileList;
  GPIPeer * peerList;
  GPICallbackData * callbackList;
  GPICallbackData * lastCallback;
  GPIBuffer updateproBuffer;
  GPIBuffer updateuiBuffer;
  DArray transfers;
  unsigned int nextTransferID;
  int productID;
  int namespaceID;
  char loginTicket[GP_LOGIN_TICKET_LEN];
  GPEnum quietModeFlags;
  gsi_time kaTransmit;
  
#ifdef GSI_UNICODE
  unsigned short errorString_W[GP_ERROR_STRING_LEN];
  unsigned short nick_W[GP_NICK_LEN];
  unsigned short uniquenick_W[GP_UNIQUENICK_LEN];
  unsigned short email_W[GP_EMAIL_LEN];
  unsigned short password_W[GP_PASSWORD_LEN];
  
  
  unsigned short lastStatusString_W[GP_STATUS_STRING_LEN];
  unsigned short lastLocationString_W[GP_LOCATION_STRING_LEN];

  unsigned short richStatus_W[GP_RICH_STATUS_LEN];
  unsigned short gameType_W[GP_STATUS_BASIC_STR_LEN];
  unsigned short gameVariant_W[GP_STATUS_BASIC_STR_LEN];
  unsigned short gameMapName_W[GP_STATUS_BASIC_STR_LEN];
#endif

#ifdef _PS3
  
  gsi_bool  npInitialized;
  gsi_bool  npStatusRetrieved;
  gsi_bool  npBasicGameInitialized;
  gsi_bool  npLookupGameInitialized;
  gsi_bool  npPerformBuddySync;
  gsi_bool  npPerformBlockSync;
  gsi_bool  npSyncLock;
  int       npLookupTitleCtxId;
  DArray    npTransactionList;
  gsi_time  loginTime;
#endif

} GPIConnection;



GPResult
gpiInitialize(
  GPConnection * connection,
  int productID,
  int namespaceID,
  int partnerID
);

void
gpiDestroy(
  GPConnection * connection
);

GPResult
gpiReset(
  GPConnection * connection
);

GPResult
gpiProcessConnectionManager(
  GPConnection * connection
);

GPResult
gpiProcess(
  GPConnection * connection,
  int blockingOperationID
);

GPResult
gpiEnable(
  GPConnection * connection, 
  GPEnum state
);

GPResult
gpiDisable(
  GPConnection * connection, 
  GPEnum state
);

#ifdef _DEBUG
void
gpiReport(
  GPConnection * connection,
  void (* report)(const char * output)
);
#endif

#endif

#line 19 "GP/gp.c"



GPResult gpInitialize(
  GPConnection * connection,
  int productID,
  int namespaceID,
  int partnerID
)
{
	
	
	if(__GSIACResult != GSIACAvailable)
		return GP_PARAMETER_ERROR;

	
	
	if(connection == NULL)
		return GP_PARAMETER_ERROR;

	return gpiInitialize(connection, productID, namespaceID, partnerID);
}

void gpDestroy(
  GPConnection * connection
)
{
	
	
	if((connection == NULL) || (*connection == NULL))
		return;

	gpiDestroy(connection);
}

GPResult gpEnable(
  GPConnection * connection, 
  GPEnum state
)
{
	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	return gpiEnable(connection, state);
}

GPResult gpDisable(
  GPConnection * connection, 
  GPEnum state
)
{
	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	return gpiDisable(connection, state);
}

GPResult gpProcess(
  GPConnection * connection
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection*)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;
	
	return gpiProcess(connection, 0);
}

GPResult gpSetCallback(
  GPConnection * connection,
  GPEnum func,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;
	int index;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	index = func;
	if((index < 0) || (index >= GPI_NUM_CALLBACKS))
		Error(connection, GP_PARAMETER_ERROR, "Invalid func.");

	
	
	iconnection->callbacks[index].callback = callback;
	iconnection->callbacks[index].param = param;

	return GP_NO_ERROR;
}

GPResult gpConnectA(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  const char email[GP_EMAIL_LEN],
  const char password[GP_PASSWORD_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;
	if((nick == NULL) || (nick[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if((email == NULL) || (email[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if((password == NULL) || (password[0] == '\0'))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
	{
		GPConnectResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiConnect(connection, nick, "", email, password, "", "", NULL, firewall, GPIFalse, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpConnectW(
  GPConnection * connection,
  const unsigned short nick[GP_NICK_LEN],
  const unsigned short email[GP_EMAIL_LEN],
  const unsigned short password[GP_PASSWORD_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char nick_A[GP_NICK_LEN];
	char email_A[GP_EMAIL_LEN];
	char password_A[GP_PASSWORD_LEN];

	UCS2ToAsciiString(nick, nick_A);
	UCS2ToAsciiString(email, email_A);
	UCS2ToAsciiString(password, password_A);

	return gpConnectA(connection, nick_A, email_A, password_A, firewall, blocking, callback, param);
}
#endif

GPResult gpConnectNewUserA(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  const char uniquenick[GP_UNIQUENICK_LEN],
  const char email[GP_EMAIL_LEN],
  const char password[GP_PASSWORD_LEN],
  const char cdkey[GP_CDKEY_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;
	if((nick == NULL) || (nick[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if(uniquenick == NULL)
		uniquenick = "";
	if((email == NULL) || (email[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if((password == NULL) || (password[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if(cdkey && (cdkey[0] == '\0'))
		cdkey = NULL;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");
	
	
	
	if(strlen(nick) >= GP_NICK_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Nick too long.");

	
	
	if(strlen(uniquenick) >= GP_UNIQUENICK_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Uniquenick too long.");

	
	
	if(strlen(email) >= GP_EMAIL_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Email too long.");

	
	
	if(strlen(password) >= GP_PASSWORD_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Password too long.");

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
	{
		GPConnectResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiConnect(connection, nick, uniquenick, email, password, "", "", cdkey, firewall, GPITrue, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpConnectNewUserW(
  GPConnection * connection,
  const unsigned short nick[GP_NICK_LEN],
  const unsigned short uniquenick[GP_UNIQUENICK_LEN],
  const unsigned short email[GP_EMAIL_LEN],
  const unsigned short password[GP_PASSWORD_LEN],
  const unsigned short cdkey[GP_CDKEY_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char nick_A[GP_NICK_LEN];
	char uniquenick_A[GP_UNIQUENICK_LEN];
	char email_A[GP_NICK_LEN];
	char password_A[GP_NICK_LEN];
	char cdkey_A[GP_CDKEY_LEN];

	UCS2ToAsciiString(nick, nick_A);
	UCS2ToAsciiString(uniquenick, uniquenick_A);
	UCS2ToAsciiString(email, email_A);
	UCS2ToAsciiString(password, password_A);
	UCS2ToAsciiString(cdkey, cdkey_A);

	return gpConnectNewUserA(connection, nick_A, uniquenick_A, email_A, password_A, cdkey_A, firewall, blocking, callback, param);
}
#endif

GPResult gpConnectUniqueNickA(
  GPConnection * connection,
  const char uniquenick[GP_UNIQUENICK_LEN],
  const char password[GP_PASSWORD_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;
	if((uniquenick == NULL) || (uniquenick[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if((password == NULL) || (password[0] == '\0'))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
	{
		GPConnectResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiConnect(connection, "", uniquenick, "", password, "", "", NULL, firewall, GPIFalse, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpConnectUniqueNickW(
  GPConnection * connection,
  const unsigned short uniquenick[GP_UNIQUENICK_LEN],
  const unsigned short password[GP_PASSWORD_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char uniquenick_A[GP_UNIQUENICK_LEN];
	char password_A[GP_NICK_LEN];

	UCS2ToAsciiString(uniquenick, uniquenick_A);
	UCS2ToAsciiString(password, password_A);

	return gpConnectUniqueNickA(connection, uniquenick_A, password_A, firewall, blocking, callback, param);
}
#endif

GPResult gpConnectPreAuthenticatedA
(
  GPConnection * connection,
  const char authtoken[GP_AUTHTOKEN_LEN],
  const char partnerchallenge[GP_PARTNERCHALLENGE_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;
	if((authtoken == NULL) || (authtoken[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if((partnerchallenge == NULL) || (partnerchallenge[0] == '\0'))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
	{
		GPConnectResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiConnect(connection, "", "", "", "", authtoken, partnerchallenge, NULL, firewall, GPIFalse, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpConnectPreAuthenticatedW
(
  GPConnection * connection,
  const unsigned short authtoken[GP_AUTHTOKEN_LEN],
  const unsigned short partnerchallenge[GP_PARTNERCHALLENGE_LEN],
  GPEnum firewall,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char authtoken_A[GP_AUTHTOKEN_LEN];
	char partnerchallenge_A[GP_PARTNERCHALLENGE_LEN];

	UCS2ToAsciiString(authtoken, authtoken_A);
	UCS2ToAsciiString(partnerchallenge, partnerchallenge_A);

	return gpConnectPreAuthenticatedA(connection, authtoken_A, partnerchallenge_A, firewall, blocking, callback, param);
}
#endif

void gpDisconnect(
  GPConnection * connection
)
{
	GPIConnection * iconnection;
    int oldState;

	
	
	if((connection == NULL) || (*connection == NULL))
		return;

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
		return;

    
    
    oldState = iconnection->connectState;

	gpiDisconnect(connection, GPITrue);
	
	
	
    gpiReset(connection);

    
    
    if (oldState == GPI_CONNECTED)
        iconnection->connectState = GPI_DISCONNECTED;

}

GPResult gpIsConnected
(
  GPConnection * connection,
  GPEnum * connected
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->connectState == GPI_CONNECTED)
		*connected = GP_CONNECTED;
	else
		*connected = GP_NOT_CONNECTED;

	return GP_NO_ERROR;
}

GPResult gpCheckUserA(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  const char email[GP_EMAIL_LEN],
  const char password[GP_PASSWORD_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	if(strlen(nick) >= GP_NICK_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Nick too long.");

	
	
	if(strlen(email) >= GP_EMAIL_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Email too long.");

	
	
	if(password && (strlen(password) >= GP_PASSWORD_LEN))
		Error(connection, GP_PARAMETER_ERROR, "Password too long.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		GPCheckResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiCheckUser(connection, nick, email, password, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpCheckUserW(
  GPConnection * connection,
  const unsigned short nick[GP_NICK_LEN],
  const unsigned short email[GP_EMAIL_LEN],
  const unsigned short password[GP_PASSWORD_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char nick_A[GP_NICK_LEN];
	char email_A[GP_NICK_LEN];
	char password_A[GP_NICK_LEN];

	UCS2ToAsciiString(nick, nick_A);
	UCS2ToAsciiString(email, email_A);
	UCS2ToAsciiString(password, password_A);

	return gpCheckUserA(connection, nick_A, email_A, password_A, blocking, callback, param);
}
#endif

GPResult gpNewUserA(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  const char uniquenick[GP_UNIQUENICK_LEN],
  const char email[GP_EMAIL_LEN],
  const char password[GP_PASSWORD_LEN],
  const char cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;
	if((nick == NULL) || (nick[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if(uniquenick == NULL)
		uniquenick = "";
	if((email == NULL) || (email[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if((password == NULL) || (password[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if(cdkey && (cdkey[0] == '\0'))
		cdkey = NULL;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	if(strlen(nick) >= GP_NICK_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Nick too long.");

	
	
	if(strlen(uniquenick) >= GP_UNIQUENICK_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Uniquenick too long.");

	
	
	if(strlen(email) >= GP_EMAIL_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Email too long.");

	
	
	if(strlen(password) >= GP_PASSWORD_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Password too long.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		GPNewUserResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiNewUser(connection, nick, uniquenick, email, password, cdkey, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpNewUserW(
  GPConnection * connection,
  const unsigned short nick[GP_NICK_LEN],
  const unsigned short uniquenick[GP_UNIQUENICK_LEN],
  const unsigned short email[GP_EMAIL_LEN],
  const unsigned short password[GP_PASSWORD_LEN],
  const unsigned short cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char nick_A[GP_NICK_LEN];
	char uniquenick_A[GP_UNIQUENICK_LEN];
	char email_A[GP_EMAIL_LEN];
	char password_A[GP_PASSWORD_LEN];
	char cdkey_A[GP_CDKEY_LEN];

	UCS2ToAsciiString(nick, nick_A);
	UCS2ToAsciiString(uniquenick, uniquenick_A);
	UCS2ToAsciiString(email, email_A);
	UCS2ToAsciiString(password, password_A);
	UCS2ToAsciiString(cdkey, cdkey_A);

	return gpNewUserA(connection, nick_A, uniquenick_A, email_A, password_A, cdkey_A, blocking, callback, param);
}
#endif

GPResult gpSuggestUniqueNickA(
  GPConnection * connection,
  const char desirednick[GP_NICK_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	if(strlen(desirednick) >= GP_UNIQUENICK_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Desirednick too long.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		GPSuggestUniqueNickResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiSuggestUniqueNick(connection, desirednick, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpSuggestUniqueNickW(
  GPConnection * connection,
  const unsigned short desirednick[GP_NICK_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char desirednick_A[GP_UNIQUENICK_LEN];

	UCS2ToAsciiString(desirednick, desirednick_A);

	return gpSuggestUniqueNickA(connection, desirednick_A, blocking, callback, param);
}
#endif

GPResult gpRegisterUniqueNickA(
  GPConnection * connection,
  const char uniquenick[GP_UNIQUENICK_LEN],
  const char cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;
	if((uniquenick == NULL) || (uniquenick[0] == '\0'))
		return GP_PARAMETER_ERROR;
	if(cdkey && (cdkey[0] == '\0'))
		cdkey = NULL;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		GPRegisterUniqueNickResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiRegisterUniqueNick(connection, uniquenick, cdkey, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpRegisterUniqueNickW(
  GPConnection * connection,
  const unsigned short uniquenick[GP_UNIQUENICK_LEN],
  const unsigned short cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char uniquenick_A[GP_UNIQUENICK_LEN];
	char cdkey_A[GP_CDKEY_LEN];

	UCS2ToAsciiString(uniquenick, uniquenick_A);
	UCS2ToAsciiString(cdkey, cdkey_A);

	return gpRegisterUniqueNickA(connection, uniquenick_A, cdkey_A, blocking, callback, param);
}
#endif


GPResult gpRegisterCdKeyA(
  GPConnection * connection,
  const char cdkey[GP_CDKEY_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;
	if((cdkey == NULL) || (cdkey[0] == '\0'))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		GPRegisterCdKeyResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiRegisterCdKey(connection, cdkey, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpRegisterCdKeyW(
  GPConnection * connection, 
  const gsi_char cdkey[GP_CDKEY_LEN], 
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char cdkey_A[GP_CDKEY_LEN];
	UCS2ToAsciiString(cdkey, cdkey_A);
	return gpRegisterCdKeyA(connection, cdkey_A, blocking, callback, param);
}
#endif

GPResult gpGetErrorCode(
  GPConnection * connection,
  GPErrorCode * errorCode
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(errorCode == NULL)
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		*errorCode = (GPErrorCode)0;
		return GP_NO_ERROR;
	}

	
	
	*errorCode = iconnection->errorCode;

	return GP_NO_ERROR;
}

GPResult gpGetErrorStringA(
  GPConnection * connection,
  char errorString[GP_ERROR_STRING_LEN]
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(errorString == NULL)
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		errorString[0] = '\0';
		return GP_NO_ERROR;
	}

	
	
	strzcpy(errorString, iconnection->errorString, GP_ERROR_STRING_LEN);
	return GP_NO_ERROR;
}
#ifdef GSI_UNICODE
GPResult gpGetErrorStringW(
  GPConnection * connection,
  unsigned short errorString[GP_ERROR_STRING_LEN]
)
{
	char errorString_A[GP_ERROR_STRING_LEN];
	GPResult result;

	result = gpGetErrorStringA(connection, errorString_A);
	AsciiToUCS2String(errorString_A, errorString);
	return result;
}
#endif

GPResult gpNewProfileA(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  GPEnum replace,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	
	if((nick == NULL) || (nick[0] == '\0'))
		Error(connection, GP_PARAMETER_ERROR, "Invalid nick.");

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
	{
		GPNewProfileResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiNewProfile(connection, nick, replace, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpNewProfileW(
  GPConnection * connection,
  const unsigned short nick[GP_NICK_LEN],
  GPEnum replace,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char nick_A[GP_NICK_LEN];

	
	
	
	int i = 0;
	for (; (i < GP_NICK_LEN) && (nick[i] != 0); i++)
	{
		if ((nick[i] & 0xFF00) != 0)
			return GP_PARAMETER_ERROR;
	}

	
	UCS2ToAsciiString(nick, nick_A);
	return gpNewProfileA(connection, nick_A, replace, blocking, callback, param);
}
#endif

GPResult gpDeleteProfile(
    GPConnection * connection,
    GPCallback callback,
	void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
	{
		GPDeleteProfileResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiDeleteProfile(connection, callback, param);
}

GPResult gpProfileFromID(
  GPConnection * connection, 
  GPProfile * profile, 
  int id
)
{
	GSI_UNUSED(connection);

	
	
	
	*profile = id;

	return GP_NO_ERROR;
}



GPResult gpIDFromProfile(
  GPConnection * connection,
  GPProfile profile,
  int * id
)
{
	GSI_UNUSED(connection);

	
	
	
	*id = profile;

	return GP_NO_ERROR;
}



GPResult gpUserIDFromProfile(
  GPConnection * connection,
  GPProfile profile,
  int * userid
)
{
	GPIConnection * iconnection;
	GPIProfile * pProfile;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		*userid = 0;
		return GP_NO_ERROR;
	}

	
	
	if(!gpiGetProfile(connection, profile, &pProfile))
		Error(connection, GP_PARAMETER_ERROR, "Invalid profile.");

	
	
	*userid = pProfile->userId;

	return GP_NO_ERROR;
}


GPResult gpProfileSearchA(
  GPConnection * connection,
  const char nick[GP_NICK_LEN],
  const char uniquenick[GP_UNIQUENICK_LEN],
  const char email[GP_EMAIL_LEN],
  const char firstname[GP_FIRSTNAME_LEN],
  const char lastname[GP_LASTNAME_LEN],
  int icquin,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		GPProfileSearchResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		arg.more = GP_DONE;
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiProfileSearch(connection, nick, uniquenick, email, firstname, lastname, icquin, 0, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpProfileSearchW(
  GPConnection * connection,
  const unsigned short nick[GP_NICK_LEN],
  const unsigned short uniquenick[GP_UNIQUENICK_LEN],
  const unsigned short email[GP_EMAIL_LEN],
  const unsigned short firstname[GP_FIRSTNAME_LEN],
  const unsigned short lastname[GP_LASTNAME_LEN],
  int icquin,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char nick_A[GP_NICK_LEN];
	char uniquenick_A[GP_UNIQUENICK_LEN];
	char email_A[GP_NICK_LEN];
	char firstname_A[GP_NICK_LEN];
	char lastname_A[GP_NICK_LEN];

	UCS2ToAsciiString(nick, nick_A); 
	UCS2ToAsciiString(uniquenick, uniquenick_A);
	UCS2ToAsciiString(email, email_A);
	UCS2ToAsciiString(firstname, firstname_A);
	UCS2ToAsciiString(lastname, lastname_A);

	return gpProfileSearchA(connection, nick_A, uniquenick_A, email_A, firstname_A, lastname_A, icquin, blocking, callback, param);
}
#endif

GPResult gpProfileSearchUniquenickA(
  GPConnection * connection,
  const char uniquenick[GP_UNIQUENICK_LEN],
  const int namespaceIDs[GP_MAX_NAMESPACEIDS],
  int numNamespaces,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL) || (namespaceIDs == NULL) || (numNamespaces < 1))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		GPProfileSearchResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		arg.more = GP_DONE;
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiProfileSearchUniquenick(connection, uniquenick, namespaceIDs, numNamespaces, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpProfileSearchUniquenickW(
  GPConnection * connection,
  const unsigned short uniquenick[GP_UNIQUENICK_LEN],
  const int namespaceIDs[GP_MAX_NAMESPACEIDS],
  int numNamespaces,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char uniquenick_A[GP_UNIQUENICK_LEN];

	UCS2ToAsciiString(uniquenick, uniquenick_A);

	return gpProfileSearchUniquenickA(connection, uniquenick_A, namespaceIDs, numNamespaces, blocking, callback, param);
}
#endif

GPResult gpGetInfo(
  GPConnection * connection,
  GPProfile profile, 
  GPEnum checkCache,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL) || (profile == 0))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		GPGetInfoResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiGetInfo(connection, profile, checkCache, blocking, callback, param);
}

GPResult gpGetInfoNoWait(
  GPConnection * connection,
  GPProfile profile,
  GPGetInfoResponseArg * arg
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL) || (profile == 0) || (arg == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
	{
		memset(arg, 0, sizeof(arg));
		return GP_NO_ERROR;
	}

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiGetInfoNoWait(connection, profile, arg);
}

GPResult gpSetInfoi(
  GPConnection * connection, 
  GPEnum info, 
  int value
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiSetInfoi(connection, info, value);
}

GPResult gpSetInfosA(
  GPConnection * connection, 
  GPEnum info, 
  const char * value
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiSetInfos(connection, info, value);
}
#ifdef GSI_UNICODE
GPResult gpSetInfosW(
  GPConnection * connection, 
  GPEnum info, 
  const unsigned short* value
)
{
	char* value_A = UCS2ToUTF8StringAlloc(value);
	GPResult result = gpSetInfosA(connection, info, value_A);
	gsifree(value_A);
	return result;
}
#endif

GPResult gpSetInfod(
  GPConnection * connection,
  GPEnum info,
  int day,
  int month,
  int year
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiSetInfod(connection, info, day, month, year);
}

GPResult gpSetInfoMask(
  GPConnection * connection,
  GPEnum mask
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiSetInfoMask(connection, mask);
}

GPResult gpSendBuddyRequestA(
  GPConnection * connection,
  GPProfile profile,
  const char reason[GP_REASON_LEN]
)
{
	GPIConnection * iconnection;
	char reasonFixed[GP_REASON_LEN];
	int i;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	if(reason == NULL)
		Error(connection, GP_PARAMETER_ERROR, "Invalid reason.");

	
	
	strzcpy(reasonFixed, reason, GP_REASON_LEN);
	for(i = 0 ; reasonFixed[i] ; i++)
		if(reasonFixed[i] == '\\')
			reasonFixed[i] = '/';

	
	
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\addbuddy\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\newprofileid\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, profile);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\reason\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, reasonFixed);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

	return GP_NO_ERROR;
}
#ifdef GSI_UNICODE
GPResult gpSendBuddyRequestW(
  GPConnection * connection,
  GPProfile profile,
  const unsigned short reason[GP_REASON_LEN]
)
{
	char reason_A[GP_REASON_LEN];
	UCS2ToUTF8String(reason, reason_A);
	return gpSendBuddyRequestA(connection, profile, reason_A);
}
#endif

GPResult gpAuthBuddyRequest(
  GPConnection * connection,
  GPProfile profile
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiAuthBuddyRequest(connection, profile);
}

GPResult gpDenyBuddyRequest(
  GPConnection * connection,
  GPProfile profile
)
{
	GPIConnection * iconnection;
	GPIProfile * pProfile;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection*)*connection;
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	if(!gpiGetProfile(connection, profile, &pProfile))
		return GP_NO_ERROR;

	
	
	pProfile->requestCount--;
	if(!iconnection->infoCaching && (pProfile->requestCount <= 0))
	{
		freeclear(pProfile->authSig);
		if(gpiCanFreeProfile(pProfile))
			gpiRemoveProfile(connection, pProfile);
	}

	return GP_NO_ERROR;
}

GPResult gpGetNumBuddies(
  GPConnection * connection,
  int * numBuddies
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		*numBuddies = 0;
		return GP_NO_ERROR;
	}

	
	
	*numBuddies = iconnection->profileList.numBuddies;

	return GP_NO_ERROR;
}

#ifndef GP_NEW_STATUS_INFO
GPResult gpGetBuddyStatus(
  GPConnection * connection,
  int index, 
  GPBuddyStatus * status
)
{
	GPIConnection * iconnection;
	int num;
	GPIProfile * profile;
	
	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		memset(status, 0, sizeof(GPBuddyStatus));
		return GP_NO_ERROR;
	}

	
	
	if(status == NULL)
		Error(connection, GP_PARAMETER_ERROR, "Invalid status.");

	
	
	num = iconnection->profileList.numBuddies;
	if((index < 0) || (index >= num))
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");

	
	
	profile = gpiFindBuddy(connection, index);
	if(!profile)
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");

	
	assert(profile->buddyStatus);
	status->profile = (GPProfile)profile->profileId;
	status->status = profile->buddyStatus->status;
#ifndef GSI_UNICODE
	if(profile->buddyStatus->statusString)
		strzcpy(status->statusString, profile->buddyStatus->statusString, GP_STATUS_STRING_LEN);
	else
		status->statusString[0] = '\0';
	

	if(profile->buddyStatus->locationString)
		strzcpy(status->locationString, profile->buddyStatus->locationString, GP_LOCATION_STRING_LEN);
	else
		status->locationString[0] = '\0';

#else
	if(profile->buddyStatus->statusString)
		UTF8ToUCS2String(profile->buddyStatus->statusString, status->statusString);
	else
		status->statusString[0] = '\0';

	if(profile->buddyStatus->locationString)
		UTF8ToUCS2String(profile->buddyStatus->locationString, status->locationString);
	else
		status->locationString[0] = '\0';

#endif
	status->ip = profile->buddyStatus->ip;
	status->port = profile->buddyStatus->port;
	status->quietModeFlags = profile->buddyStatus->quietModeFlags;
	
	return GP_NO_ERROR;
}
#endif

#ifdef GP_NEW_STATUS_INFO
GPResult gpGetBuddyStatusInfo(
	GPConnection * connection,
	int index, 
	GPBuddyStatusInfo * statusInfo
)
{
	GPIConnection * iconnection;
	int num;
	GPIProfile * profile;
	GPIBuddyStatus *buddyStatus;
	GPIBuddyStatusInfo * buddyStatusInfo;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		memset(statusInfo, 0, sizeof(GPBuddyStatusInfo));
		return GP_NO_ERROR;
	}

	
	
	if(statusInfo == NULL)
		Error(connection, GP_PARAMETER_ERROR, "Invalid status.");

	
	
	num = iconnection->profileList.numBuddies;
	if((index < 0) || (index >= num))
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");

	
	
	profile = gpiFindBuddy(connection, index);
	if(!profile)
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");

	
	buddyStatus = profile->buddyStatus;
	buddyStatusInfo = profile->buddyStatusInfo;
	assert(buddyStatus || buddyStatusInfo);

	statusInfo->profile = (GPProfile)profile->profileId;
	if (buddyStatus)
	{
		statusInfo->statusState = buddyStatus->status;
#ifndef GSI_UNICODE
		if(buddyStatus->statusString)
			strzcpy(statusInfo->richStatus, buddyStatus->statusString, GP_RICH_STATUS_LEN);
		else
			statusInfo->richStatus[0] = '\0';
		statusInfo->gameType[0] = '\0';
		statusInfo->gameVariant[0] = '\0';
		statusInfo->gameMapName[0] = '\0';
#else
		if(buddyStatus->statusString)
			UTF8ToUCS2String(buddyStatus->statusString, statusInfo->richStatus);
		else
			statusInfo->richStatus[0] = '\0';
		statusInfo->gameType[0] = '\0';
		statusInfo->gameVariant[0] = '\0';
		statusInfo->gameMapName[0] = '\0';
#endif
		statusInfo->buddyIp = buddyStatus->ip;
		statusInfo->buddyPort = buddyStatus->port;
		statusInfo->quietModeFlags = buddyStatus->quietModeFlags;
		statusInfo->newStatusInfoFlag = GP_NEW_STATUS_INFO_NOT_SUPPORTED;
	}
	else if (buddyStatusInfo)
	{
		statusInfo->statusState = buddyStatusInfo->statusState;
		statusInfo->buddyIp = buddyStatusInfo->buddyIp;
		statusInfo->buddyPort = buddyStatusInfo->buddyPort;
		statusInfo->hostIp = buddyStatusInfo->hostIp;
		statusInfo->hostPrivateIp = buddyStatusInfo->hostPrivateIp;
		statusInfo->queryPort = buddyStatusInfo->queryPort;
		statusInfo->hostPort = buddyStatusInfo->hostPort;
		statusInfo->sessionFlags = buddyStatusInfo->sessionFlags;
		statusInfo->quietModeFlags = buddyStatusInfo->quietModeFlags;
		statusInfo->newStatusInfoFlag = GP_NEW_STATUS_INFO_SUPPORTED;
#ifndef GSI_UNICODE
		strzcpy(statusInfo->richStatus, buddyStatusInfo->richStatus, GP_RICH_STATUS_LEN);
		strzcpy(statusInfo->gameType, buddyStatusInfo->gameType, GP_STATUS_BASIC_STR_LEN);
		strzcpy(statusInfo->gameVariant, buddyStatusInfo->gameVariant, GP_STATUS_BASIC_STR_LEN);
		strzcpy(statusInfo->gameMapName, buddyStatusInfo->gameMapName, GP_STATUS_BASIC_STR_LEN);
#else
		UTF8ToUCS2String(buddyStatusInfo->richStatus, statusInfo->richStatus);
		UTF8ToUCS2String(buddyStatusInfo->gameType, statusInfo->gameType);
		UTF8ToUCS2String(buddyStatusInfo->gameVariant, statusInfo->gameVariant);
		UTF8ToUCS2String(buddyStatusInfo->gameMapName, statusInfo->gameMapName);
#endif
	}
	
	return GP_NO_ERROR;
}

GPResult gpSetBuddyAddr(
	GPConnection *connection, 
	int index,
	unsigned int buddyIp,
	unsigned short buddyPort
)
{
	GPIConnection * iconnection;
	int num;
	GPIProfile * profile;
	
	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	num = iconnection->profileList.numBuddies;
	if((index < 0) || (index >= num))
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");
	
	
	
	profile = gpiFindBuddy(connection, index);
	if(!profile)
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");

	if (buddyIp == 0 || buddyPort == 0)
		Error(connection, GP_PARAMETER_ERROR, "Invalid IP and port");
	if (profile->buddyStatusInfo)
	{
		profile->buddyStatusInfo->buddyIp = buddyIp;
		profile->buddyStatusInfo->buddyPort = buddyPort;
	}
	return GP_NO_ERROR;
}
#endif

GPResult gpGetBuddyIndex(
  GPConnection * connection, 
  GPProfile profile, 
  int * index
)
{
	GPIProfile * pProfile;
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		*index = 0;
		return GP_NO_ERROR;
	}

	
	
	if(gpiGetProfile(connection, profile, &pProfile) && pProfile->buddyStatus)
		*index = pProfile->buddyStatus->buddyIndex;
	else if (gpiGetProfile(connection, profile, &pProfile) && pProfile->buddyStatusInfo)
		*index = pProfile->buddyStatusInfo->buddyIndex;
	else
		*index = -1;

	return GP_NO_ERROR;
}

int gpIsBuddy(
  GPConnection * connection,
  GPProfile profile
)
{
	GPIProfile * pProfile;
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return 0;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return 0;

	
	
	if(gpiGetProfile(connection, profile, &pProfile) && pProfile->buddyStatus)
		return 1;
	else if (gpiGetProfile(connection, profile, &pProfile) &&pProfile->buddyStatusInfo)
		return 1;

	return 0;
}

int gpIsBuddyConnectionOpen(
  GPConnection * connection, 
  GPProfile profile
)
{
	GPIConnection * iconnection;
	GPIPeer *aPeer;
	
	
	if((connection == NULL) || (*connection == NULL))
		return 0;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return 0;

	aPeer = gpiGetPeerByProfile(connection, profile);

	if (aPeer == NULL || !gpiIsPeerConnected(aPeer))
		return 0; 
	else
		return 1; 
}

GPResult gpDeleteBuddy(
  GPConnection * connection,
  GPProfile profile
)
{
	GPIConnection * iconnection;
	
	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	CHECK_RESULT(gpiDeleteBuddy(connection, profile, GPITrue));

	return GP_NO_ERROR;
}

GPResult gpAddToBlockedList(
  GPConnection * connection,
  GPProfile profile
)
{
    GPIConnection * iconnection;

    
    
    if((connection == NULL) || (*connection == NULL))
        return GP_PARAMETER_ERROR;

    
    
    iconnection = (GPIConnection *)*connection;

    
    
    if(iconnection->connectState == GPI_DISCONNECTED)
        Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

    
    
    if(iconnection->simulation)
        return GP_NO_ERROR;
    
    
    
    return gpiAddToBlockedList(connection, profile);
}

GPResult gpRemoveFromBlockedList(
  GPConnection * connection,
  GPProfile profile
)
{
    GPIConnection * iconnection;

    
    
    if((connection == NULL) || (*connection == NULL))
        return GP_PARAMETER_ERROR;

    
    
    iconnection = (GPIConnection *)*connection;

    
    
    if(iconnection->connectState == GPI_DISCONNECTED)
        Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

    
    
    if(iconnection->simulation)
        return GP_NO_ERROR;

    
    
    return gpiRemoveFromBlockedList(connection, profile);
}

GPResult gpGetNumBlocked(
  GPConnection * connection,
  int * numBlocked
)
{
    GPIConnection * iconnection;

    
    
    if((connection == NULL) || (*connection == NULL))
        return GP_PARAMETER_ERROR;

    
    
    iconnection = (GPIConnection *)*connection;

    
    
    if(iconnection->simulation)
    {
        *numBlocked = 0;
        return GP_NO_ERROR;
    }

    
    
    *numBlocked = iconnection->profileList.numBlocked;

    return GP_NO_ERROR;
}

GPResult gpGetBlockedProfile(
  GPConnection * connection, 
  int index,
  GPProfile * profile
)
{
    GPIConnection * iconnection;
    int num;
    GPIProfile * pProfile;

    
    
    if((connection == NULL) || (*connection == NULL))
        return GP_PARAMETER_ERROR;

    
    
    iconnection = (GPIConnection *)*connection;

    
    
    if(iconnection->simulation)
        return GP_NO_ERROR;
       
    
    
    if(profile == NULL)
        Error(connection, GP_PARAMETER_ERROR, "Invalid profile container");

    
    
    num = iconnection->profileList.numBlocked;
    if((index < 0) || (index >= num))
        Error(connection, GP_PARAMETER_ERROR, "Invalid index.");

    
    
    pProfile = gpiFindBlockedProfile(connection, index);
    if(!pProfile)
        Error(connection, GP_PARAMETER_ERROR, "Invalid index.");

    *profile = (GPProfile)pProfile->profileId;

    return GP_NO_ERROR;
}

gsi_bool gpIsBlocked(
  GPConnection * connection,
  GPProfile profile
)
{
    GPIProfile * pProfile;
    GPIConnection * iconnection;

    
    
    if((connection == NULL) || (*connection == NULL))
        return gsi_false;

    
    
    iconnection = (GPIConnection *)*connection;

    
    
    if(iconnection->simulation)
        return gsi_false;

    
    
    if(gpiGetProfile(connection, profile, &pProfile) && pProfile->blocked)
        return gsi_true;

    return gsi_false;
}

#ifndef GP_NEW_STATUS_INFO
GPResult gpSetStatusA(
  GPConnection * connection,
  GPEnum status,
  const char statusString[GP_STATUS_STRING_LEN],
  const char locationString[GP_LOCATION_STRING_LEN]
)
{
	char statusStringFixed[GP_STATUS_STRING_LEN];
	char locationStringFixed[GP_LOCATION_STRING_LEN];
	GPIConnection * iconnection;
	int i;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	if(statusString == NULL)
		Error(connection, GP_PARAMETER_ERROR, "Invalid statusString.");
	if(locationString == NULL)
		Error(connection, GP_PARAMETER_ERROR, "Invalid locationString.");

	
	
	strzcpy(statusStringFixed, statusString, GP_STATUS_STRING_LEN);
	for(i = 0 ; statusStringFixed[i] ; i++)
		if(statusStringFixed[i] == '\\')
			statusStringFixed[i] = '/';
	strzcpy(locationStringFixed, locationString, GP_LOCATION_STRING_LEN);
	for(i = 0 ; locationStringFixed[i] ; i++)
		if(locationStringFixed[i] == '\\')
			locationStringFixed[i] = '/';

	
	
	if((status == iconnection->lastStatusState) &&
	   (strcmp(statusStringFixed, iconnection->lastStatusString) == 0) &&
	   (strcmp(locationStringFixed, iconnection->lastLocationString) == 0))
	{
		return GP_NO_ERROR;
	}

	
	
	iconnection->lastStatusState = status;
#ifndef GSI_UNICODE
	strzcpy(iconnection->lastStatusString, statusStringFixed, GP_STATUS_STRING_LEN);
	strzcpy(iconnection->lastLocationString, locationStringFixed, GP_LOCATION_STRING_LEN);
#else
	UTF8ToUCS2StringLen(iconnection->lastStatusString, iconnection->lastStatusString_W, GP_STATUS_STRING_LEN);
	UTF8ToUCS2StringLen(iconnection->lastStatusString, iconnection->lastLocationString_W, GP_LOCATION_STRING_LEN);
#endif

	
	
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\status\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, status);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\statstring\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, statusStringFixed);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\locstring\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, locationStringFixed);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

	return GP_NO_ERROR;
}
#ifdef GSI_UNICODE
GPResult gpSetStatusW(
  GPConnection * connection,
  GPEnum status,
  const unsigned short statusString[GP_STATUS_STRING_LEN],
  const unsigned short locationString[GP_LOCATION_STRING_LEN]
)
{
	char statusString_A[GP_STATUS_STRING_LEN];
	char locationString_A[GP_LOCATION_STRING_LEN];
	UCS2ToUTF8String(statusString, statusString_A);
	UCS2ToUTF8String(locationString, locationString_A);
	return gpSetStatusA(connection, status, statusString_A, locationString_A);
}
#endif
#endif

#ifdef GP_NEW_STATUS_INFO
GPResult gpSetStatusInfoA(
						 GPConnection *connection, 
						 GPEnum statusState,
						 unsigned int hostIp, 
						 unsigned int hostPrivateIp,
						 unsigned short queryPort,
						 unsigned short hostPort,
						 unsigned int sessionFlags,
						 const char *richStatus,
						 int richStatusLen,
						 const char *gameType,
						 int gameTypeLen,
						 const char *gameVariant,
						 int gameVariantLen,
						 const char *gameMapName,
						 int gameMapNameLen
)
{
	GPIConnection * iconnection;
	
#ifndef GSI_UNICODE
	char gameTypeFixed[GP_STATUS_BASIC_STR_LEN];
	char gameVariantFixed[GP_STATUS_BASIC_STR_LEN];
	char gameMapNameFixed[GP_STATUS_BASIC_STR_LEN];
#else
	char *gameTypeFixed;
	char *gameVariantFixed;
	char *gameMapNameFixed;
#endif

	GS_ASSERT(connection != NULL);
	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	GS_ASSERT(richStatus != NULL);
	if (richStatus == NULL)
		Error(connection, GP_PARAMETER_ERROR, "Invalid richStatus.");

#ifndef GSI_UNICODE
	GS_ASSERT(richStatusLen <= GP_RICH_STATUS_LEN);
	GS_ASSERT(gameTypeLen <= GP_STATUS_BASIC_STR_LEN);
	GS_ASSERT(gameVariantLen <= GP_STATUS_BASIC_STR_LEN);
	GS_ASSERT(gameMapNameLen <= GP_STATUS_BASIC_STR_LEN);

	if (gameType == NULL)
		strncpy(gameTypeFixed, "", GP_STATUS_BASIC_STR_LEN);
	else
		strncpy(gameTypeFixed, gameType, GP_STATUS_BASIC_STR_LEN);
	if (gameVariant == NULL)
		strncpy(gameVariantFixed, "", GP_STATUS_BASIC_STR_LEN);
	else
		strncpy(gameVariantFixed, gameVariant, GP_STATUS_BASIC_STR_LEN);
	if (gameMapName == NULL)
		strncpy(gameMapNameFixed, "", GP_STATUS_BASIC_STR_LEN);
	else
		strncpy(gameMapNameFixed, gameMapName, GP_STATUS_BASIC_STR_LEN);

	
	
	if((statusState == iconnection->lastStatusState) &&
		(strcmp(richStatus, iconnection->richStatus) == 0) &&
		(strcmp(gameTypeFixed, iconnection->gameType) == 0) &&
		(strcmp(gameVariantFixed, iconnection->gameVariant) == 0) &&
		(strcmp(gameMapNameFixed, iconnection->gameMapName) == 0) &&
		(sessionFlags == iconnection->sessionFlags) &&
		(hostIp == iconnection->hostIp) &&
		(hostPrivateIp == iconnection->hostPrivateIp) &&
		(queryPort == iconnection->queryPort) &&
		(hostPort == iconnection->hostPort))
	{
		return GP_NO_ERROR;
	}
#else
	gameTypeFixed = goastrdup(gameType);
	gameVariantFixed = goastrdup(gameVariant);
	gameMapNameFixed = goastrdup(gameMapName);
#endif
	
	iconnection->lastStatusState = statusState;
	iconnection->hostIp = hostIp;
	iconnection->hostPrivateIp = hostPrivateIp;
	iconnection->queryPort = queryPort;
	iconnection->hostPort = hostPort;
	iconnection->sessionFlags = sessionFlags;

#ifndef GSI_UNICODE
	strzcpy(iconnection->gameType, gameTypeFixed, GP_STATUS_BASIC_STR_LEN);
	strzcpy(iconnection->gameVariant, gameVariantFixed, GP_STATUS_BASIC_STR_LEN);
	strzcpy(iconnection->gameMapName, gameMapNameFixed, GP_STATUS_BASIC_STR_LEN);
	strzcpy(iconnection->richStatus, richStatus, GP_RICH_STATUS_LEN);
#endif
	
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\statusinfo\\\\state\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, statusState);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\hostIp\\");
	gpiAppendUIntToBuffer(connection, &iconnection->outputBuffer, ntohl(hostIp));
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\hprivIp\\");
	gpiAppendUIntToBuffer(connection, &iconnection->outputBuffer, ntohl(hostPrivateIp));
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\qport\\");
	gpiAppendUShortToBuffer(connection, &iconnection->outputBuffer, queryPort);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\hport\\");
	gpiAppendUShortToBuffer(connection, &iconnection->outputBuffer, hostPort);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sessflags\\");
	gpiAppendUIntToBuffer(connection, &iconnection->outputBuffer, sessionFlags);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\richStatus\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, richStatus);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\gameType\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, gameTypeFixed);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\gameVariant\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, gameVariantFixed);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\gameMapName\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, gameMapNameFixed);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

	GSI_UNUSED(richStatusLen);
	GSI_UNUSED(gameTypeLen);
	GSI_UNUSED(gameVariantLen);
	GSI_UNUSED(gameMapNameLen);
	return GP_NO_ERROR;
}

#ifdef GSI_UNICODE
GPResult gpSetStatusInfoW(
						  GPConnection *connection, 
						  GPEnum statusState,
						  unsigned int hostIp, 
						  unsigned int hostPrivateIp,
						  unsigned short queryPort,
						  unsigned short hostPort,
						  unsigned int sessionFlags,
						  const unsigned short *richStatus,
						  int richStatusLen,
						  const unsigned short *gameType,
						  int gameTypeLen,
						  const unsigned short *gameVariant,
						  int gameVariantLen,
						  const unsigned short *gameMapName,
						  int gameMapNameLen
						  )
{
	char *richStatus_A, *gameType_A, *gameVariant_A, *gameMapName_A;
	GPResult aResult;
	GPIConnection * iconnection;
	GS_ASSERT(connection != NULL);
	GS_ASSERT(richStatusLen <= GP_RICH_STATUS_LEN);
	GS_ASSERT(gameTypeLen <= GP_STATUS_BASIC_STR_LEN);
	GS_ASSERT(gameVariantLen <= GP_STATUS_BASIC_STR_LEN);
	GS_ASSERT(gameMapNameLen <= GP_STATUS_BASIC_STR_LEN);
	GS_ASSERT(richStatus != NULL);

	if (connection != NULL && (*connection != NULL))
		iconnection = (GPIConnection *)*connection;
	else return GP_PARAMETER_ERROR;

	if (richStatus == NULL)
		Error(connection, GP_PARAMETER_ERROR, "Invalid richStatus.");

	if (richStatusLen <= GP_RICH_STATUS_LEN)
		richStatus_A = UCS2ToUTF8StringAlloc(richStatus);
	else 
		richStatus_A = UCS2ToUTF8StringAlloc((UCS2String)_T(""));
	if (gameType && (gameTypeLen <= GP_STATUS_BASIC_STR_LEN))
		gameType_A = UCS2ToUTF8StringAlloc(gameType);
	else 
		gameType_A = UCS2ToUTF8StringAlloc((UCS2String)_T(""));
	if (gameVariant && (gameVariantLen <= GP_STATUS_BASIC_STR_LEN))
		gameVariant_A = UCS2ToUTF8StringAlloc(gameVariant);
	else 
		gameVariant_A = UCS2ToUTF8StringAlloc((UCS2String)_T(""));
	if (gameMapName && (gameMapNameLen <= GP_STATUS_BASIC_STR_LEN))
		gameMapName_A = UCS2ToUTF8StringAlloc(gameMapName);
	else 
		gameMapName_A = UCS2ToUTF8StringAlloc((UCS2String)_T(""));

	if ((statusState == iconnection->lastStatusState) &&
		(sessionFlags == iconnection->sessionFlags) &&
		(hostIp == iconnection->hostIp) &&
		(hostPrivateIp == iconnection->hostPrivateIp) &&
		(queryPort == iconnection->queryPort) &&
		(hostPort == iconnection->hostPort) &&
		(_tcscmp(richStatus, iconnection->richStatus_W) == 0) &&
		(_tcscmp(gameType, iconnection->gameType_W) == 0) &&
		(_tcscmp(gameVariant, iconnection->gameVariant_W) == 0) &&
		(_tcscmp(gameMapName, iconnection->gameMapName_W) == 0))
	{
		return GP_NO_ERROR;
	}
	_tcsncpy(iconnection->richStatus_W, richStatus, GP_RICH_STATUS_LEN);
	_tcsncpy(iconnection->gameType_W, gameType, GP_STATUS_BASIC_STR_LEN);
	_tcsncpy(iconnection->gameVariant_W, gameVariant, GP_STATUS_BASIC_STR_LEN);
	_tcsncpy(iconnection->gameMapName_W, gameMapName, GP_STATUS_BASIC_STR_LEN);

	aResult = gpSetStatusInfoA(connection, statusState, hostIp, hostPrivateIp, queryPort, hostPort, 
		sessionFlags, richStatus_A, (int)strlen(richStatus_A), gameType_A, (int)strlen(gameType_A), 
		gameVariant_A, (int)strlen(gameVariant_A), gameMapName_A, (int)strlen(gameMapName_A));
	gsifree(richStatus_A);
	gsifree(gameType_A);
	gsifree(gameVariant_A);
	gsifree(gameMapName_A);
	return aResult;
}
#endif

GPResult gpAddStatusInfoKeyA(GPConnection *connection, const char *keyName, const char *keyValue)
{
	GPIConnection * iconnection;

	
	
	if ((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if ( iconnection->simulation )
		return GP_NO_ERROR;

	
	
	if (iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiStatusInfoAddKey(connection, iconnection->extendedInfoKeys, keyName, keyValue);
}

#ifdef GSI_UNICODE
GPResult gpAddStatusInfoKeyW(GPConnection *connection, const unsigned short *keyName, const unsigned short *keyValue)
{
	GPResult aResult;
	char *keyName_A = UCS2ToUTF8StringAlloc(keyName);
	char *keyValue_A = UCS2ToUTF8StringAlloc(keyValue);
	aResult = gpAddStatusInfoKeyA(connection, keyName_A, keyValue_A);
	gsifree(keyName_A);
	gsifree(keyValue_A);
	return aResult;
}
#endif

GPResult gpSetStatusInfoKeyA(GPConnection *connection, const char *keyName, const char *keyValue)
{
	GPIConnection * iconnection;

	
	
	if ((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if ( iconnection->simulation )
		return GP_NO_ERROR;

	
	
	if (iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiStatusInfoSetKey(connection, iconnection->extendedInfoKeys, keyName, keyValue);
}

#ifdef GSI_UNICODE
GPResult gpSetStatusInfoKeyW(GPConnection *connection, const unsigned short *keyName, const unsigned short *keyValue)
{
	GPResult aResult;
	char *keyName_A = UCS2ToUTF8StringAlloc(keyName);
	char *keyValue_A = UCS2ToUTF8StringAlloc(keyValue);
	aResult = gpSetStatusInfoKeyA(connection, keyName_A, keyValue_A);
	gsifree(keyName_A);
	gsifree(keyValue_A);
	return aResult;
}
#endif

GPResult gpDelStatusInfoKeyA(GPConnection *connection, const char *keyName)
{
	GPIConnection * iconnection;

	
	
	if ((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if ( iconnection->simulation )
		return GP_NO_ERROR;

	
	
	if (iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiStatusInfoDelKey(connection, iconnection->extendedInfoKeys, keyName);
}

#ifdef GSI_UNICODE
GPResult gpDelStatusInfoKeyW(GPConnection *connection, const unsigned short *keyName)
{
	GPResult aResult;
	char *keyName_A = UCS2ToUTF8StringAlloc(keyName);
	aResult = gpDelStatusInfoKeyA(connection, keyName_A);
	gsifree(keyName_A);
	return aResult;
}
#endif

GPResult gpGetStatusInfoKeyValA(GPConnection *connection, const char *keyName, char **keyValue)
{
	GPIConnection * iconnection;

	
	
	if ((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if ( iconnection->simulation )
		return GP_NO_ERROR;

	
	
	if (iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	return gpiStatusInfoGetKey(connection, iconnection->extendedInfoKeys, keyName, keyValue);
}
#ifdef GSI_UNICODE
GPResult gpGetStatusInfoKeyValW(GPConnection *connection, const unsigned short *keyName, unsigned short **keyValue)
{
	GPResult aResult;
	char *keyValue_A;
	
	char *keyName_A = UCS2ToUTF8StringAlloc(keyName);
	
	aResult = gpGetStatusInfoKeyValA(connection, keyName_A, &keyValue_A);
	*keyValue = UTF8ToUCS2StringAlloc(keyValue_A);

	gsifree(keyName_A);
	gsifree(keyValue_A);
	return aResult;
}
#endif



GPResult gpGetBuddyStatusInfoKeys(GPConnection *connection, int index, GPCallback callback, void *userData)
{
	GPIConnection *iconnection;
	GPIProfile * pProfile;
	GPResult aResult;
	GPIPeerOp *aPeerOp;
	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	pProfile = gpiFindBuddy(connection, index);
	if (!pProfile)
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");

	if (pProfile->buddyStatus)
		CallbackError(connection, GP_PARAMETER_ERROR, GP_BM_EXT_INFO_NOT_SUPPORTED, "The profile does not support extended info keys.")
		
	if (!pProfile->buddyStatusInfo && !pProfile->buddyStatus)
		CallbackError(connection, GP_PARAMETER_ERROR, GP_BM_NOT_BUDDY, "The profile used to get extended info keys is not a buddy.")
	
	if (pProfile->buddyStatusInfo && pProfile->buddyStatusInfo->statusState == GP_OFFLINE)
		CallbackError(connection, GP_NETWORK_ERROR, GP_BM_BUDDY_OFFLINE, "The profile used to get extended info keys is offline.");

	aPeerOp = (GPIPeerOp *)gsimalloc(sizeof(GPIPeerOp));
	aPeerOp->callback = callback;
	aPeerOp->next = NULL;
	aPeerOp->state = GPI_PEER_OP_STATE_REQUESTED;
	aPeerOp->type = GPI_BM_KEYS_REQUEST;
	aPeerOp->userData = userData;
	aPeerOp->timeout = current_time() + GPI_PEER_OP_TIMEOUT;
	aResult = gpiSendBuddyMessage(connection, pProfile->profileId, GPI_BM_KEYS_REQUEST, "Keys?", GP_DONT_ROUTE, aPeerOp);
	return aResult;
}
#endif

GPResult gpSendBuddyMessageA(
  GPConnection * connection,
  GPProfile profile,
  const char * message
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	if(message == NULL)
		Error(connection, GP_PARAMETER_ERROR, "Invalid message.");

	return gpiSendBuddyMessage(connection, profile, GPI_BM_MESSAGE, message, 0, NULL);
}
#ifdef GSI_UNICODE
GPResult gpSendBuddyMessageW(
  GPConnection * connection,
  GPProfile profile,
  const unsigned short* message
)
{
	char* message_A;
	GPResult result;

	assert(message != NULL);
	message_A = UCS2ToUTF8StringAlloc(message);						
	result = gpSendBuddyMessageA(connection, profile, message_A);	
	gsifree(message_A);	
	return result;
}
#endif

GPResult gpSendBuddyUTMA(
  GPConnection * connection,
  GPProfile profile,
  const char * message,
  int sendOption
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	if(message == NULL)
		Error(connection, GP_PARAMETER_ERROR, "Invalid message.");

	return gpiSendBuddyMessage(connection, profile, GPI_BM_UTM, message, sendOption, NULL);
}

#ifdef GSI_UNICODE
GPResult gpSendBuddyUTMW(
 GPConnection * connection,
 GPProfile profile,
 const unsigned short* message,
 int sendOption
)
{
	char* message_A;
	GPResult result;

	assert(message != NULL);
	message_A = UCS2ToUTF8StringAlloc(message);						
	result = gpSendBuddyUTMA(connection, profile, message_A, sendOption);	
	gsifree(message_A);	
	return result;
}
#endif

GPResult gpIsValidEmailA(
  GPConnection * connection,
  const char email[GP_EMAIL_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	if(strlen(email) >= GP_EMAIL_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Email too long.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		GPIsValidEmailResponseArg arg;
		memset(&arg, 0, sizeof(arg));
#ifndef GSI_UNICODE
		strzcpy(arg.email, email, GP_EMAIL_LEN);
#else
		UTF8ToUCS2String(email, arg.email);
#endif
		arg.isValid = GP_INVALID;
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiIsValidEmail(connection, email, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpIsValidEmailW(
  GPConnection * connection,
  const unsigned short email[GP_EMAIL_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	char email_A[GP_EMAIL_LEN];
	UCS2ToAsciiString(email, email_A);
	return gpIsValidEmailA(connection, email_A, blocking,callback, param);
}
#endif

GPResult gpGetUserNicksA(
  GPConnection * connection,
  const char email[GP_EMAIL_LEN],
  const char password[GP_PASSWORD_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	if(strlen(email) >= GP_EMAIL_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Email too long.");

	
	
	if(strlen(password) >= GP_PASSWORD_LEN)
		Error(connection, GP_PARAMETER_ERROR, "Password too long.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
	{
		GPGetUserNicksResponseArg arg;
		memset(&arg, 0, sizeof(arg));
#ifndef GSI_UNICODE
		strzcpy(arg.email, email, GP_EMAIL_LEN);
#else
		AsciiToUCS2String(email, arg.email);
#endif
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiGetUserNicks(connection, email, password, blocking, callback, param);
}
#ifdef GSI_UNICODE
GPResult gpGetUserNicksW(
  GPConnection * connection,
  const unsigned short email[GP_EMAIL_LEN],
  const unsigned short password[GP_PASSWORD_LEN],
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
  char email_A[GP_EMAIL_LEN];
  char password_A[GP_PASSWORD_LEN];
  UCS2ToAsciiString(email, email_A);
  UCS2ToAsciiString(password, password_A);
  return gpGetUserNicksA(connection, email_A, password_A, blocking, callback, param);
}
#endif

GPResult gpSetInvitableGames(
  GPConnection * connection,
  int numProductIDs,
  const int * productIDs
)
{
	GPIConnection * iconnection;
	int i;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	if(numProductIDs < 0)
		Error(connection, GP_PARAMETER_ERROR, "Invalid numProductIDs.");
	if((numProductIDs > 0) && (productIDs == NULL))
		Error(connection, GP_PARAMETER_ERROR, "Invalid productIDs.");

	
	
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\inviteto\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\products\\");
	for(i = 0 ; i < numProductIDs ; i++)
	{
		gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, productIDs[i]);
		if(i < (numProductIDs - 1))
			gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, ",");
	}
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

	return GP_NO_ERROR;
}

GPResult gpFindPlayers(
  GPConnection * connection,
  int productID,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	if(iconnection->simulation)
	{
		GPFindPlayersResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		arg.productID = productID;
		arg.numMatches = 0;
		arg.matches = NULL;
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiFindPlayers(connection, productID, blocking, callback, param);
}

GPResult gpInvitePlayerA(
  GPConnection * connection,
  GPProfile profile,
  int productID,
  const char location[GP_LOCATION_STRING_LEN]
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\pinvite\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\profileid\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, profile);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\productid\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, productID);

	if (location && location[0])
	{
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\location\\");
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, location);
	}

	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

	return GP_NO_ERROR;
}
#ifdef GSI_UNICODE
GPResult gpInvitePlayerW(
  GPConnection * connection,
  GPProfile profile,
  int productID,
  const gsi_char location[GP_LOCATION_STRING_LEN]
)
{
	char location_A[GP_LOCATION_STRING_LEN];
	UCS2ToAsciiString(location, location_A);
	return gpInvitePlayerA(connection, profile, productID, location_A);
}
#endif

GPResult gpGetReverseBuddies(
  GPConnection * connection,
  GPEnum blocking,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	if(iconnection->simulation)
	{
		GPGetReverseBuddiesResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiOthersBuddy(connection, blocking, callback, param);
}

GPResult gpGetReversBuddiesList( GPConnection * connection,
	GPProfile *targets, int numOfTargets, 
	GPEnum blocking,
	GPCallback callback,
	void * param)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(callback == NULL)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	if(iconnection->simulation)
	{
		GPGetReverseBuddiesListResponseArg arg;
		memset(&arg, 0, sizeof(arg));
		callback(connection, &arg, param);
		return GP_NO_ERROR;
	}

	
	
	return gpiOthersBuddyList(connection, targets, numOfTargets, blocking, callback, param);

}


GPResult gpRevokeBuddyAuthorization(
  GPConnection * connection,
  GPProfile profile
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		return GP_NO_ERROR;

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\revoke\\");
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\profileid\\");
	gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, profile);
	gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");

	return GP_NO_ERROR;
}


GPResult gpGetLoginTicket(
  GPConnection * connection,
  char loginTicket[GP_LOGIN_TICKET_LEN]
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;
	memcpy(loginTicket, iconnection->loginTicket, GP_LOGIN_TICKET_LEN);
	return GP_NO_ERROR;
}

GPResult gpSetQuietMode(
  GPConnection * connection,
  GPEnum flags
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	iconnection->quietModeFlags = flags;

	
	
	if(iconnection->connectState == GPI_CONNECTED)
	{
		
		
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\quiet\\");
		gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->quietModeFlags);
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\sesskey\\");
		gpiAppendIntToBuffer(connection, &iconnection->outputBuffer, iconnection->sessKey);
		gpiAppendStringToBuffer(connection, &iconnection->outputBuffer, "\\final\\");
	}

	return GP_NO_ERROR;
}

#ifndef NOFILE
void gpSetInfoCacheFilenameA(
  const char * filename
)
{
	gpiSetInfoCacheFilename(filename);
}
void gpSetInfoCacheFilenameW(
  const unsigned short * filename
)
{
	char* filename_A = UCS2ToUTF8StringAlloc(filename);
	gpiSetInfoCacheFilename(filename_A);
	gsifree(filename_A);
}

static GPResult gpiAddSendingFileA(
  GPConnection * connection,
  GPITransfer * transfer,
  const char * path,
  const char * name
)
{
	GPIFile * file = NULL;
	int size = 0;
	gsi_time modTime = 0;

	
	
	if(!path && !name)
		Error(connection, GP_PARAMETER_ERROR, "File missing path and name.");
	if(path && !path[0])
		Error(connection, GP_PARAMETER_ERROR, "Empty path.");
	if(name && !name[0])
		Error(connection, GP_PARAMETER_ERROR, "Empty name.");

	
	
	if(path)
	{
		FILE * fileVerify;

		fileVerify = fopen(path, "r");
		if(!fileVerify)
			Error(connection, GP_PARAMETER_ERROR, "Can't find file.");

		if(!gpiGetTransferFileInfo(fileVerify, &size, &modTime))
		{
			fclose(fileVerify);
			Error(connection, GP_PARAMETER_ERROR, "Can't get info on file.");
		}

		fclose(fileVerify);
	}

	
	
	if(name)
	{
		size_t len;

		len = strlen(name);

		if(strstr(name, "//") || strstr(name, "\\\\"))
			Error(connection, GP_PARAMETER_ERROR, "Empty directory in filename.");
		if(strstr(name, "./") || strstr(name, ".\\") || (name[len - 1] == '.'))
			Error(connection, GP_PARAMETER_ERROR, "Directory level in filename.");
		if((name[0] == '/') || (name[0] == '\\'))
			Error(connection, GP_PARAMETER_ERROR, "Filename can't start with a slash.");
		if(strcspn(name, ":*?\"<>|\n") != len)
			Error(connection, GP_PARAMETER_ERROR, "Invalid character in filename.");
	}
	
	
	else
	{
		const char * str;

		
		
		name = strrchr(path, '/');
		str = strrchr(path, '\\');
		if(str > name)
			name = str;

		
		
		if(name)
			name++;
		else
			name = path;
	}

	
	
	file = gpiAddFileToTransfer(transfer, path, name);
	if(!file)
		Error(connection, GP_MEMORY_ERROR, "Out of memory.");

	
	
	file->size = size;
	file->modTime = modTime;

	
	
	transfer->totalSize += size;

	return GP_NO_ERROR;
}
#ifdef GSI_UNICODE
static GPResult gpiAddSendingFileW(
  GPConnection * connection,
  GPITransfer * transfer,
  const unsigned short * path,
  const unsigned short * name
)
{
	char* path_A = UCS2ToUTF8StringAlloc(path);
	char* name_A = UCS2ToUTF8StringAlloc(name);
	GPResult result = gpiAddSendingFileA(connection, transfer, path_A, name_A);
	gsifree(path_A);
	gsifree(name_A);
	return result;
}
#endif


GPResult gpSendFilesA(
  GPConnection * connection,
  GPTransfer * transfer,
  GPProfile profile,
  const char * message,
  gpSendFilesCallback callback,
  void * param
)
{
	GPIConnection * iconnection;
	GPITransfer * pTransfer;
	GPResult result;
	const gsi_char * path;
	const gsi_char * name;
	int numFiles;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	if(iconnection->simulation)
		Error(connection, GP_PARAMETER_ERROR, "Cannot send files in simulation mode.");

	
	
	if(iconnection->connectState == GPI_DISCONNECTED)
		Error(connection, GP_PARAMETER_ERROR, "The connection has already been disconnected.");

	
	
	if(!callback)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");
	if(!iconnection->callbacks[GPI_TRANSFER_CALLBACK].callback)
		Error(connection, GP_PARAMETER_ERROR, "No callback.");

	
	
	if(!message)
		message = "";

	
	
	CHECK_RESULT(gpiNewSenderTransfer(connection, &pTransfer, profile));

	
	
	pTransfer->message = goastrdup(message);
	if(!pTransfer->message)
	{
		gpiFreeTransfer(connection, pTransfer);
		Error(connection, GP_MEMORY_ERROR, "Out of memory.");
	}

	
	
	numFiles = 0;
	do
	{
		path = NULL;
		name = NULL;
		callback(connection, numFiles++, &path, &name, param);
		if(path && !path[0])
			path = NULL;
		if(name && !name[0])
			name = NULL;

		if(name || path)
		{
#ifndef GSI_UNICODE
			result = gpiAddSendingFileA(connection, pTransfer, path, name);
#else
			result = gpiAddSendingFileW(connection, pTransfer, path, name);
#endif
			if(result != GP_NO_ERROR)
			{
				gpiFreeTransfer(connection, pTransfer);
				return result;
			}
		}
	}
	while(name || path);

	
	
	if(!ArrayLength(pTransfer->files))
	{
		gpiFreeTransfer(connection, pTransfer);
		Error(connection, GP_PARAMETER_ERROR, "No files to send.");
	}

	
	
	result = gpiSendBuddyMessage(connection, profile, GPI_BM_PING, "1", 0, NULL);
	if(result != GP_NO_ERROR)
	{
		gpiFreeTransfer(connection, pTransfer);
		return result;
	}

	
	
	if(transfer)
		*transfer = pTransfer->localID;

	return GP_NO_ERROR;
}
GPResult gpSendFilesW(
  GPConnection * connection,
  GPTransfer * transfer,
  GPProfile profile,
  const unsigned short* message,
  gpSendFilesCallback callback,
  void * param
)
{
	char* message_A = NULL;
	GPResult result;
	
	if (message == NULL)
		return gpSendFilesA(connection, transfer, profile, NULL, callback, param);
	
	message_A = UCS2ToUTF8StringAlloc(message);
	result = gpSendFilesA(connection, transfer, profile, message_A, callback, param);
	gsifree(message_A);
	return result;
}

GPResult gpAcceptTransferA(
  GPConnection * connection,
  GPTransfer transfer,
  const char * message
)
{
	GPITransfer * pTransfer;
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection*)*connection;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	if(!pTransfer->baseDirectory)
		Error(connection, GP_PARAMETER_ERROR, "No transfer directory set.");

	
	
	if(pTransfer->state & GPITransferCancelled)
		Error(connection, GP_PARAMETER_ERROR, "Transfer already cancelled.");

	
	
	CHECK_RESULT(gpiSendTransferReply(connection, &pTransfer->transferID, pTransfer->peer, GPI_ACCEPTED, message));

	
	
	pTransfer->state = GPITransferTransferring;

	
	
	pTransfer->currentFile = 0;

	return GP_NO_ERROR;
}
GPResult gpAcceptTransferW(
  GPConnection * connection,
  GPTransfer transfer,
  const unsigned short * message
)
{
	char* message_A = NULL;
	GPResult result;
	
	if (message == NULL)
		return gpAcceptTransferA(connection, transfer, NULL);
	
	message_A = UCS2ToUTF8StringAlloc(message);
	result = gpAcceptTransferA(connection, transfer, message_A);
	gsifree(message_A);
	return result;
}
	

GPResult gpRejectTransferA(
  GPConnection * connection,
  GPTransfer transfer,
  const char * message
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		return GP_NO_ERROR;

	
	
	if(pTransfer->state & GPITransferCancelled)
		return GP_NO_ERROR;

	
	
	gpiSendTransferReply(connection, &pTransfer->transferID, pTransfer->peer, GPI_REJECTED, message);

	
	
	gpiFreeTransfer(connection, pTransfer);

	return GP_NO_ERROR;
}
GPResult gpRejectTransferW(
  GPConnection * connection,
  GPTransfer transfer,
  const unsigned short* message
)
{
	char* message_A = NULL;
	GPResult result;
	
	if (message == NULL)
		return gpRejectTransferA(connection, transfer, NULL);
	
	message_A = UCS2ToUTF8StringAlloc(message);
	result = gpRejectTransferA(connection, transfer, message_A);
	gsifree(message_A);
	return result;
}

GPResult gpFreeTransfer(
  GPConnection * connection,
  GPTransfer transfer
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		return GP_NO_ERROR;

	
	
	if(!pTransfer->sender && (pTransfer->state == GPITransferWaiting))
		return gpRejectTransfer(connection, transfer, NULL);

	
	
	if(pTransfer->state < GPITransferComplete)
		gpiCancelTransfer(connection, pTransfer);

	
	
	gpiFreeTransfer(connection, pTransfer);

	return GP_NO_ERROR;
}

GPResult gpSetTransferData(
  GPConnection * connection,
  GPTransfer transfer,
  void * userData
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	pTransfer->userData = userData;

	return GP_NO_ERROR;
}

void * gpGetTransferData(
  GPConnection * connection,
  GPTransfer transfer
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		return NULL;

	
	
	return pTransfer->userData;
}

GPResult gpSetTransferDirectoryA(
  GPConnection * connection,
  GPTransfer transfer,
  const char * directory
)
{
	GPITransfer * pTransfer;
	char lastChar;

	if(!directory || !directory[0])
		Error(connection, GP_PARAMETER_ERROR, "Invalid directory.");
	lastChar = directory[strlen(directory) - 1];
	if((lastChar != '\\') && (lastChar != '/'))
		Error(connection, GP_PARAMETER_ERROR, "Invalid directory.");

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	if(pTransfer->sender)
		Error(connection, GP_PARAMETER_ERROR, "Sender has no transfer directory.");
	if(pTransfer->state != GPITransferWaiting)
		Error(connection, GP_PARAMETER_ERROR, "Can only set transfer directory before transferring.");

	
	
	if(pTransfer->baseDirectory)
		gsifree(pTransfer->baseDirectory);
	pTransfer->baseDirectory = NULL;

	
	
	pTransfer->baseDirectory = goastrdup(directory);
	if(!pTransfer->baseDirectory)
		Error(connection, GP_MEMORY_ERROR, "Out of memory.");

	return GP_NO_ERROR;
}
GPResult gpSetTransferDirectoryW(
  GPConnection * connection,
  GPTransfer transfer,
  const unsigned short * directory
)
{
	char* directory_A = UCS2ToUTF8StringAlloc(directory);
	GPResult result = gpSetTransferDirectoryA(connection, transfer, directory_A);
	gsifree(directory_A);
	return result;
}

GPResult gpSetTransferThrottle(
  GPConnection * connection,
  GPTransfer transfer,
  int throttle
)
{
	GPITransfer * pTransfer;
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection*)*connection;

	
	
	if(throttle < 0)
		throttle = -1;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	pTransfer->throttle = throttle;

	
	
	CHECK_RESULT(gpiPeerStartTransferMessage(connection, pTransfer->peer, GPI_BM_FILE_TRANSFER_THROTTLE, (GPITransferID_st)&pTransfer->transferID));
	gpiSendOrBufferString(connection, pTransfer->peer, "\\rate\\");
	gpiSendOrBufferInt(connection, pTransfer->peer, throttle);
	gpiPeerFinishTransferMessage(connection, pTransfer->peer, NULL, 0);

	
	
	if(pTransfer->sender)
	{
		GPTransferCallbackArg * arg;

		
		
		arg = (GPTransferCallbackArg *)gsimalloc(sizeof(GPTransferCallbackArg));
		if(arg)
		{
			memset(arg, 0, sizeof(GPTransferCallbackArg));
			arg->transfer = pTransfer->localID;
			arg->type = GP_TRANSFER_THROTTLE;
			arg->num = throttle;
			gpiAddCallback(connection, iconnection->callbacks[GPI_TRANSFER_CALLBACK], arg, NULL, GPI_ADD_TRANSFER_CALLBACK);
		}
	}

	return GP_NO_ERROR;
}

GPResult gpGetTransferThrottle(
  GPConnection * connection,
  GPTransfer transfer,
  int * throttle
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	*throttle = pTransfer->throttle;

	return GP_NO_ERROR;
}

GPResult gpGetTransferProfile(
  GPConnection * connection,
  GPTransfer transfer,
  GPProfile * profile
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	*profile = pTransfer->profile;

	return GP_NO_ERROR;
}

GPResult gpGetTransferSide(
  GPConnection * connection,
  GPTransfer transfer,
  GPEnum * side
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	if(pTransfer->sender)
		*side = GP_TRANSFER_SENDER;
	else
		*side = GP_TRANSFER_RECEIVER;

	return GP_NO_ERROR;
}

GPResult gpGetTransferSize(
  GPConnection * connection,
  GPTransfer transfer,
  int * size
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	*size = pTransfer->totalSize;

	return GP_NO_ERROR;
}

GPResult gpGetTransferProgress(
  GPConnection * connection,
  GPTransfer transfer,
  int * progress
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	*progress = pTransfer->progress;

	return GP_NO_ERROR;
}

GPResult gpGetNumFiles(
  GPConnection * connection,
  GPTransfer transfer,
  int * num
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	*num = ArrayLength(pTransfer->files);

	return GP_NO_ERROR;
}

GPResult gpGetCurrentFile(
  GPConnection * connection,
  GPTransfer transfer,
  int * index
)
{
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	*index = pTransfer->currentFile;

	return GP_NO_ERROR;
}

GPResult gpSkipFile(
  GPConnection * connection,
  GPTransfer transfer,
  int index
)
{
	GPIFile * file;
	GPITransfer * pTransfer;
	GPTransferCallbackArg * arg;
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	iconnection = (GPIConnection*)*connection;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	if((index < 0) || (index >= ArrayLength(pTransfer->files)))
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");
	file = (GPIFile *)ArrayNth(pTransfer->files, index);

	
	
	if(index < pTransfer->currentFile)
		return GP_NO_ERROR;

	
	
	if(pTransfer->currentFile != index)
	{
		
		
		file->flags |= GPI_FILE_SKIP;

		
		
		if(!pTransfer->sender)
			gpiSkipFile(connection, pTransfer, index, GPI_SKIP_USER_SKIP);

		return GP_NO_ERROR;
	}

	
	
	if(!pTransfer->sender && (index == pTransfer->currentFile) && file->file)
	{
		fclose(file->file);
		file->file = NULL;
		remove(file->path);
	}

	
	
	gpiSkipCurrentFile(connection, pTransfer, GPI_SKIP_USER_SKIP);

	
	
	arg = (GPTransferCallbackArg *)gsimalloc(sizeof(GPTransferCallbackArg));
	if(arg)
	{
		memset(arg, 0, sizeof(GPTransferCallbackArg));
		arg->transfer = pTransfer->localID;
		arg->index = index;
		arg->type = GP_FILE_SKIP;
		gpiAddCallback(connection, iconnection->callbacks[GPI_TRANSFER_CALLBACK], arg, NULL, GPI_ADD_TRANSFER_CALLBACK);
	}

	return GP_NO_ERROR;
}

GPResult gpGetFileName(
  GPConnection * connection,
  GPTransfer transfer,
  int index,
  gsi_char ** name
)
{
	GPIFile * file;
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	if((index < 0) || (index >= ArrayLength(pTransfer->files)))
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");
	file = (GPIFile *)ArrayNth(pTransfer->files, index);

	
	
#ifndef GSI_UNICODE
	*name = file->name;
#else
	*name = file->name_W;
#endif

	return GP_NO_ERROR;
}


GPResult gpGetFilePath(
  GPConnection * connection,
  GPTransfer transfer,
  int index,
  gsi_char ** path
)
{
	GPIFile * file;
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	if((index < 0) || (index >= ArrayLength(pTransfer->files)))
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");
	file = (GPIFile *)ArrayNth(pTransfer->files, index);

	
	
#ifndef GSI_UNICODE
	*path = file->path;
#else
	*path = file->path_W;
#endif

	return GP_NO_ERROR;
}

GPResult gpGetFileSize(
  GPConnection * connection,
  GPTransfer transfer,
  int index,
  int * size
)
{
	GPIFile * file;
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	if((index < 0) || (index >= ArrayLength(pTransfer->files)))
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");
	file = (GPIFile *)ArrayNth(pTransfer->files, index);

	
	
	*size = file->size;

	return GP_NO_ERROR;
}

GPResult gpGetFileProgress(
  GPConnection * connection,
  GPTransfer transfer,
  int index,
  int * progress
)
{
	GPIFile * file;
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	if((index < 0) || (index >= ArrayLength(pTransfer->files)))
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");
	file = (GPIFile *)ArrayNth(pTransfer->files, index);

	
	
	*progress = file->progress;

	return GP_NO_ERROR;
}

GPResult gpGetFileModificationTime(
  GPConnection * connection,
  GPTransfer transfer,
  int index,
  gsi_time * modTime
)
{
	GPIFile * file;
	GPITransfer * pTransfer;

	
	
	pTransfer = gpiFindTransferByLocalID(connection, transfer);
	if(!pTransfer)
		Error(connection, GP_PARAMETER_ERROR, "Invalid transfer.");

	
	
	if((index < 0) || (index >= ArrayLength(pTransfer->files)))
		Error(connection, GP_PARAMETER_ERROR, "Invalid index.");
	file = (GPIFile *)ArrayNth(pTransfer->files, index);

	
	
	*modTime = file->modTime;

	return GP_NO_ERROR;
}

GPResult gpGetNumTransfers(
  GPConnection * connection,
  int * num
)
{
	GPIConnection * iconnection;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(num == NULL)
		Error(connection, GP_PARAMETER_ERROR, "NULL pointer.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	*num = ArrayLength(iconnection->transfers);

	return GP_NO_ERROR;
}

GPResult gpGetTransfer(
  GPConnection * connection,
  int index,
  GPTransfer * transfer
)
{
	GPIConnection * iconnection;
	int localID;

	
	
	if((connection == NULL) || (*connection == NULL))
		return GP_PARAMETER_ERROR;

	
	
	if(transfer == NULL)
		Error(connection, GP_PARAMETER_ERROR, "NULL pointer.");

	
	
	iconnection = (GPIConnection *)*connection;

	
	
	localID = gpiGetTransferLocalIDByIndex(connection, index);

	
	
	if(localID == -1)
		Error(connection, GP_PARAMETER_ERROR, "Index out of range.");

	
	
	*transfer = localID;

	return GP_NO_ERROR;
}
#endif

#ifdef _DEBUG
void gpProfilesReport(
  GPConnection * connection,
  void (* report)(const char * output)
)
{
	

	
	
	if((connection == NULL) || (*connection == NULL))
		return;

	
	
	

	gpiReport(connection, report);
}
#endif

