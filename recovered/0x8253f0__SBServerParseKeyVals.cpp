
// FUNCTION: BF2 0x8253f0
// upstream serverbrowsing/sb_server.c SBServerParseKeyVals
#define _LINUX
#define _UNIX
#ifndef _SB_INTERNAL_H_
#define _SB_INTERNAL_H_




#ifndef __GSCOMMON_H__
#define __GSCOMMON_H__













#ifdef GS_PEER
	#define	UNIQUEID			
#endif





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
	#endif 

	#ifdef INSOCK
		
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




#ifndef __GSSOCKET_H__
#define __GSSOCKET_H__






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




#ifndef __GSPLATFORMTHREAD_H__
#define __GSPLATFORMTHREAD_H__




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



#ifndef __GSUTILITY_H__
#define __GSUTILITY_H__




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






#ifndef __GSIMEMORY_H__
#define __GSIMEMORY_H__









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








#define	GSI_MIN(a,b)				(((a) < (b)?(a):(b)))
#define	GSI_MAX(a,b)				(((a) > (b)?(a):(b)))
#define	GSI_LIMIT(x, minx, maxx)	(((x) < (minx)? (minx) : ((x) > (maxx)? (maxx) : (x))))
#define	GSI_WRAP(x, minx, maxx)		(((x) < (minx)? (maxx-1 ) : ((x) >= (maxx)? (minx) : (x))))
#define GSI_DIM( x )				( sizeof( x ) / sizeof((x)[ 0 ]))



#endif 

#ifndef _AVAILABLE_H_
#define _AVAILABLE_H_


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


 














#ifndef _SB_SERVERBROWSING_H
#define _SB_SERVERBROWSING_H


#ifdef __cplusplus
extern "C" {
#endif
	
	

 



typedef struct _ServerBrowser *ServerBrowser;


#ifndef SBServer 
typedef struct _SBServer *SBServer;
#endif	

typedef enum {SBFalse, SBTrue} SBBool;


typedef enum 
{
	sbe_noerror,  
	sbe_socketerror, 
	sbe_dnserror,  
	sbe_connecterror,  
	sbe_dataerror, 
	sbe_allocerror, 
	sbe_paramerror,	
	sbe_duplicateupdateerror 
} SBError;	


typedef enum 
{
	sb_disconnected, 
	sb_listxfer,	
	sb_querying,	
	sb_connected	
} SBState;


typedef enum 
{
	sbc_serveradded, 
	sbc_serverupdated, 
	sbc_serverupdatefailed, 
	sbc_serverdeleted, 
	sbc_updatecomplete, 
	sbc_queryerror,		
	sbc_serverchallengereceived 
} SBCallbackReason;	


typedef enum
{
	sbcs_succeeded,
	sbcs_failed
} SBConnectToServerState;


typedef void (*ServerBrowserCallback)(ServerBrowser sb, SBCallbackReason reason, SBServer server, void *instance);


typedef void (*SBConnectToServerCallback)(ServerBrowser sb, SBConnectToServerState state, SOCKET gamesocket, struct sockaddr_in *remoteaddr, void *instance);


#define MAX_FILTER_LEN 256


#define QVERSION_GOA 0
#define QVERSION_QR2 1

 



#ifndef GSI_UNICODE
#define ServerBrowserNew			ServerBrowserNewA
#define ServerBrowserUpdate			ServerBrowserUpdateA
#define ServerBrowserLimitUpdate	ServerBrowserLimitUpdateA
#define ServerBrowserAuxUpdateIP	ServerBrowserAuxUpdateIPA
#define ServerBrowserRemoveIP		ServerBrowserRemoveIPA
#define ServerBrowserSendNatNegotiateCookieToServer	ServerBrowserSendNatNegotiateCookieToServerA
#define ServerBrowserSendMessageToServer	ServerBrowserSendMessageToServerA
#define ServerBrowserSort			ServerBrowserSortA
#define SBServerGetStringValue		SBServerGetStringValueA
#define SBServerGetIntValue			SBServerGetIntValueA
#define SBServerGetFloatValue		SBServerGetFloatValueA
#define SBServerGetBoolValue		SBServerGetBoolValueA
#define SBServerGetPlayerStringValue	SBServerGetPlayerStringValueA
#define SBServerGetPlayerIntValue	SBServerGetPlayerIntValueA
#define SBServerGetPlayerFloatValue	SBServerGetPlayerFloatValueA
#define SBServerGetTeamStringValue	SBServerGetTeamStringValueA
#define SBServerGetTeamIntValue		SBServerGetTeamIntValueA
#define SBServerGetTeamFloatValue	SBServerGetTeamFloatValueA
#define ServerBrowserListQueryError	ServerBrowserListQueryErrorA
#define ServerBrowserErrorDesc		ServerBrowserErrorDescA
#define ServerBrowserGetServerByIP	ServerBrowserGetServerByIPA
#else
#define ServerBrowserNew			ServerBrowserNewW
#define ServerBrowserUpdate			ServerBrowserUpdateW
#define ServerBrowserLimitUpdate	ServerBrowserLimitUpdateW
#define ServerBrowserAuxUpdateIP	ServerBrowserAuxUpdateIPW
#define ServerBrowserRemoveIP		ServerBrowserRemoveIPW
#define ServerBrowserSendNatNegotiateCookieToServer	ServerBrowserSendNatNegotiateCookieToServerW
#define ServerBrowserSendMessageToServer	ServerBrowserSendMessageToServerW
#define ServerBrowserSort			ServerBrowserSortW
#define SBServerGetStringValue		SBServerGetStringValueW
#define SBServerGetIntValue			SBServerGetIntValueW
#define SBServerGetFloatValue		SBServerGetFloatValueW
#define SBServerGetBoolValue		SBServerGetBoolValueW
#define SBServerGetPlayerStringValue	SBServerGetPlayerStringValueW
#define SBServerGetPlayerIntValue	SBServerGetPlayerIntValueW
#define SBServerGetPlayerFloatValue	SBServerGetPlayerFloatValueW
#define SBServerGetTeamStringValue	SBServerGetTeamStringValueW
#define SBServerGetTeamIntValue		SBServerGetTeamIntValueW
#define SBServerGetTeamFloatValue	SBServerGetTeamFloatValueW
#define ServerBrowserListQueryError	ServerBrowserListQueryErrorW
#define ServerBrowserErrorDesc		ServerBrowserErrorDescW
#define ServerBrowserGetServerByIP	ServerBrowserGetServerByIPW
#endif
 













ServerBrowser ServerBrowserNew(const gsi_char *queryForGamename, const gsi_char *queryFromGamename, const gsi_char *queryFromKey, int queryFromVersion, int maxConcUpdates, int queryVersion, SBBool lanBrowse, ServerBrowserCallback callback, void *instance);

 



void ServerBrowserFree(ServerBrowser sb);


 



















 
SBError ServerBrowserUpdate(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete, const unsigned char *basicFields, int numBasicFields, const gsi_char *serverFilter);
SBError ServerBrowserLimitUpdate(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete, const unsigned char *basicFields, int numBasicFields, const gsi_char *serverFilter, int maxServers);


 



SBError ServerBrowserThink(ServerBrowser sb);

 











SBError ServerBrowserLANUpdate(ServerBrowser sb, SBBool async, unsigned short startSearchPort, unsigned short endSearchPort);

 














SBError ServerBrowserAuxUpdateIP(ServerBrowser sb, const gsi_char *ip, unsigned short port, SBBool viaMaster, SBBool async, SBBool fullUpdate);

 












SBError ServerBrowserAuxUpdateServer(ServerBrowser sb, SBServer server, SBBool async, SBBool fullUpdate);


 




void ServerBrowserDisconnect(ServerBrowser sb);


 


SBState ServerBrowserState(ServerBrowser sb);

 


void ServerBrowserRemoveIP(ServerBrowser sb, const gsi_char *ip, unsigned short port);

 


void ServerBrowserRemoveServer(ServerBrowser sb, SBServer server);

 



void ServerBrowserHalt(ServerBrowser sb);

 


void ServerBrowserClear(ServerBrowser sb);

 


const gsi_char *ServerBrowserErrorDesc(ServerBrowser sb, SBError error);

 




const gsi_char *ServerBrowserListQueryError(ServerBrowser sb);

 


SBServer ServerBrowserGetServer(ServerBrowser sb, int index);

 


SBServer ServerBrowserGetServerByIP(ServerBrowser sb, const gsi_char* ip, unsigned short port);

 



int ServerBrowserCount(ServerBrowser sb);

 



int ServerBrowserPendingQueryCount(ServerBrowser sb);

 




char *ServerBrowserGetMyPublicIP(ServerBrowser sb);

 


unsigned int ServerBrowserGetMyPublicIPAddr(ServerBrowser sb);


 


SBError ServerBrowserSendNatNegotiateCookieToServer(ServerBrowser sb, const gsi_char *ip, unsigned short port, int cookie);


 


SBError ServerBrowserSendMessageToServer(ServerBrowser sb, const gsi_char *ip, unsigned short port, const char *data, int len);

 


SBError ServerBrowserConnectToServer(ServerBrowser sb, SBServer server, SBConnectToServerCallback callback);


 




typedef enum {sbcm_int, sbcm_float, sbcm_strcase, sbcm_stricase} SBCompareMode;


 




void ServerBrowserSort(ServerBrowser sb, SBBool ascending, const gsi_char *sortkey, SBCompareMode comparemode);

 


void ServerBrowserLANSetLocalAddr(ServerBrowser sb, const char* theAddr);


 





typedef void (*SBServerKeyEnumFn)(gsi_char *key, gsi_char *value, void *instance);


 











SBBool SBServerGetConnectionInfo(ServerBrowser gSB, SBServer server, gsi_u16 PortToConnectTo, char *ipstring_out);


 


SBBool SBServerHasPrivateAddress(SBServer server);

 


SBBool SBServerDirectConnect(SBServer server);

 



int SBServerGetPing(SBServer server);


 



char *SBServerGetPublicAddress(SBServer server);
char *SBServerGetPrivateAddress(SBServer server);

 


unsigned int SBServerGetPublicInetAddress(SBServer server);
unsigned int SBServerGetPrivateInetAddress(SBServer server);

 



unsigned short SBServerGetPublicQueryPort(SBServer server);
unsigned short SBServerGetPrivateQueryPort(SBServer server);


 



SBBool SBServerHasBasicKeys(SBServer server);

 



SBBool SBServerHasFullKeys(SBServer server);

 


SBBool SBServerHasValidPing(SBServer server);


 



const gsi_char *SBServerGetStringValue(SBServer server, const gsi_char *keyname, const gsi_char *def);
int SBServerGetIntValue(SBServer server, const gsi_char *key, int idefault);
double SBServerGetFloatValue(SBServer server, const gsi_char *key, double fdefault);
SBBool SBServerGetBoolValue(SBServer server, const gsi_char *key, SBBool bdefault);


 






const gsi_char *SBServerGetPlayerStringValue(SBServer server, int playernum, const gsi_char *key, const gsi_char *sdefault);
int SBServerGetPlayerIntValue(SBServer server, int playernum, const gsi_char *key, int idefault);
double SBServerGetPlayerFloatValue(SBServer server, int playernum, const gsi_char *key, double fdefault);

const gsi_char *SBServerGetTeamStringValue(SBServer server, int teamnum, const gsi_char *key, const gsi_char *sdefault);
int SBServerGetTeamIntValue(SBServer server, int teamnum, const gsi_char *key, int idefault);
double SBServerGetTeamFloatValue(SBServer server, int teamnum, const gsi_char *key, double fdefault);


 



void SBServerEnumKeys(SBServer server, SBServerKeyEnumFn KeyFn, void *instance);


#ifdef __cplusplus
}
#endif

#endif 



#ifndef _QR2REGKEYS_H_
#define _QR2REGKEYS_H_


#ifdef __cplusplus
extern "C" {
#endif
	

#define MAX_REGISTERED_KEYS 254
#define NUM_RESERVED_KEYS 50
	
	
#define HOSTNAME_KEY		1
#define GAMENAME_KEY		2
#define GAMEVER_KEY			3
#define HOSTPORT_KEY		4
#define MAPNAME_KEY			5
#define GAMETYPE_KEY		6
#define GAMEVARIANT_KEY		7
#define NUMPLAYERS_KEY		8
#define NUMTEAMS_KEY		9
#define MAXPLAYERS_KEY		10
#define GAMEMODE_KEY		11
#define TEAMPLAY_KEY		12
#define FRAGLIMIT_KEY		13
#define TEAMFRAGLIMIT_KEY	14
#define TIMEELAPSED_KEY		15
#define TIMELIMIT_KEY		16
#define ROUNDTIME_KEY		17
#define ROUNDELAPSED_KEY	18
#define PASSWORD_KEY		19
#define GROUPID_KEY			20
#define PLAYER__KEY			21
#define SCORE__KEY			22
#define SKILL__KEY			23
#define PING__KEY			24
#define TEAM__KEY			25
#define DEATHS__KEY			26
#define PID__KEY			27
#define TEAM_T_KEY			28
#define SCORE_T_KEY			29
#define NN_GROUP_ID_KEY		30




#define COUNTRY_KEY			31
#define REGION_KEY			32

	
#ifndef GSI_UNICODE
	#define qr2_register_key	qr2_register_keyA
#else
	#define qr2_register_key	qr2_register_keyW
#endif

extern const char *qr2_registered_key_list[];
void qr2_register_key(int keyid, const gsi_char *key);





void qr2_internal_key_list_append(char* theKey);
void qr2_internal_key_list_free(); 


gsi_bool qr2_internal_is_master_only_key(const char * keyname);



void qr2_register_keyA(int keyid, const char *key);
void qr2_register_keyW(int keyid, const unsigned short *key);

#ifdef __cplusplus
}
#endif


#endif


#ifndef _SB_CRYPT_H
#define _SB_CRYPT_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _GOACryptState
{
    unsigned char cards[256];       
    unsigned char rotor;            
    unsigned char ratchet;                    
    unsigned char avalanche;                  
    unsigned char last_plain;                 
    unsigned char last_cipher;                
} GOACryptState;



void GOACryptInit(GOACryptState *state, unsigned char *key, unsigned char keysize);
void GOAHashInit(GOACryptState *state);
unsigned char GOAEncryptByte(GOACryptState *state, unsigned char b);   
void GOAEncrypt(GOACryptState *state, unsigned char *bp, int len);   
unsigned char GOADecryptByte(GOACryptState *state, unsigned char b);       
void GOADecrypt(GOACryptState *state,unsigned char *bp, int len);   
void GOAHashFinal(GOACryptState *state, unsigned char *hash, unsigned char hashlength); 

#ifdef __cplusplus
}
#endif


#endif


#ifdef __cplusplus
extern "C" {
#endif

typedef enum {	pi_cryptheader,
				pi_fixedheader, 
				pi_keylist,
				pi_uniquevaluelist,
				pi_servers,
				pi_finished } SBListParseState;


typedef enum {sl_lanbrowse, sl_disconnected, sl_connected, sl_mainlist} SBServerListState;



#define MSPORT2 28910


#define NUM_MASTER_SERVERS 20


#define MAX_FIELD_LIST_LEN 256


#define MAX_POPULAR_VALUES 255


#define MAX_MAPLOOP_LENGTH 16



#define MAX_RECVFROM_SIZE 2048


#define STATE_BASICKEYS			(1 << 0)
#define STATE_FULLKEYS			(1 << 1)
#define STATE_PENDINGBASICQUERY	(1 << 2)
#define STATE_PENDINGFULLQUERY	(1 << 3)
#define STATE_QUERYFAILED		(1 << 4)
#define STATE_PENDINGICMPQUERY	(1 << 5)
#define STATE_VALIDPING	        (1 << 6)
#define STATE_PENDINGQUERYCHALLENGE (1 << 7)


#define MAX_QUERY_MSEC 2500


#define UNSOLICITED_UDP_FLAG	1
#define PRIVATE_IP_FLAG			2
#define CONNECT_NEGOTIATE_FLAG	4
#define ICMP_IP_FLAG			8
#define NONSTANDARD_PORT_FLAG	16
#define NONSTANDARD_PRIVATE_PORT_FLAG	32
#define HAS_KEYS_FLAG					64
#define HAS_FULL_RULES_FLAG				128


#define QR2_USE_QUERY_CHALLENGE 128


#define KEYTYPE_STRING	0
#define KEYTYPE_BYTE	1
#define KEYTYPE_SHORT	2


#define LIST_CHALLENGE_LEN 8


#define LIST_PROTOCOL_VERSION 1
#define LIST_ENCODING_VERSION 3


#define SERVER_LIST_REQUEST		0
#define SERVER_INFO_REQUEST		1
#define SEND_MESSAGE_REQUEST	2
#define KEEPALIVE_REPLY			3
#define MAPLOOP_REQUEST			4
#define PLAYERSEARCH_REQUEST	5


#define PUSH_KEYS_MESSAGE		1
#define PUSH_SERVER_MESSAGE		2
#define KEEPALIVE_MESSAGE		3
#define DELETE_SERVER_MESSAGE	4
#define MAPLOOP_MESSAGE			5
#define PLAYERSEARCH_MESSAGE	6


#define SEND_FIELDS_FOR_ALL		1
#define NO_SERVER_LIST			2
#define PUSH_UPDATES			4
#define SEND_GROUPS				32
#define NO_LIST_CACHE			64
#define LIMIT_RESULT_COUNT		128


#define SEARCH_ALL_GAMES		1
#define SEARCH_LEFT_SUBSTRING	2
#define SEARCH_RIGHT_SUBSTRING	4
#define SEARCH_ANY_SUBSTRING	8


#define MAX_QUERY_KEYS 20


#define SL_LAN_SEARCH_TIME 2000


#define QR2_MAGIC_1 0xFE
#define QR2_MAGIC_2 0xFD


#define NATNEG_MAGIC_LEN 6
#define NN_MAGIC_0 0xFD
#define NN_MAGIC_1 0xFC
#define NN_MAGIC_2 0x1E
#define NN_MAGIC_3 0x66
#define NN_MAGIC_4 0x6A
#define NN_MAGIC_5 0xB2



#define QTYPE_BASIC 0
#define QTYPE_FULL  1
#define QTYPE_ICMP  2


#define BASIC_GOA_QUERY "\\basic\\\\info\\"
#define BASIC_GOA_QUERY_LEN 13
#define FULL_GOA_QUERY "\\status\\"
#define FULL_GOA_QUERY_LEN 8


#define SORTKEY_LENGTH 255


#ifndef SB_NO_ICMP_SUPPORT
	#undef SB_ICMP_SUPPORT
	#define SB_ICMP_SUPPORT
#endif


typedef struct _SBKeyValuePair
{
	const char *key;
	const char *value;
} SBKeyValuePair;



typedef struct _SBRefString
{
	const char *str;
#ifdef GSI_UNICODE
	const unsigned short *str_W;
#endif
	int refcount;
} SBRefString;


typedef struct _SBServerList *SBServerListPtr;
typedef struct _SBQueryEngine *SBQueryEnginePtr;


typedef enum {slc_serveradded, slc_serverupdated, slc_serverdeleted, slc_initiallistcomplete, slc_disconnected, slc_queryerror, slc_publicipdetermined, slc_serverchallengereceived} SBListCallbackReason;

typedef enum {qe_updatesuccess, qe_updatefailed, qe_engineidle, qe_challengereceived} SBQueryEngineCallbackReason;


typedef void (*SBListCallBackFn)(SBServerListPtr serverlist, SBListCallbackReason reason, SBServer server, void *instance);
typedef void (*SBEngineCallbackFn)(SBQueryEnginePtr engine, SBQueryEngineCallbackReason reason, SBServer server, void *instance);
typedef void (*SBMaploopCallbackFn)(SBServerListPtr serverlist, SBServer server, time_t mapChangeTime, int numMaps, char *mapList[], void *instance);
typedef void (*SBPlayerSearchCallbackFn)(SBServerListPtr serverlist, char *nick, goa_uint32 serverIP, unsigned short serverPort, time_t lastSeenTime, char *gamename, void *instance);


typedef struct _KeyInfo
{
	const char *keyName;
	int keyType;
} KeyInfo;


typedef struct _SBServerList SBServerList;

#ifdef VENGINE_SUPPORT
	#define FTABLE_TYPES
#endif



typedef struct _SortInfo
{
	gsi_char sortkey[SORTKEY_LENGTH];
	SBCompareMode comparemode;	
} SortInfo;

struct _SBServerList
{
	SBServerListState state;
	DArray servers;
	DArray keylist;
	char queryforgamename[36];
	char queryfromgamename[36];
	char queryfromkey[32];
	char mychallenge[LIST_CHALLENGE_LEN];
	char *inbuffer;
	int inbufferlen;
	const char *popularvalues[MAX_POPULAR_VALUES];
	int numpopularvalues;
	int expectedelements;
	
	SBListCallBackFn ListCallback;
	SBMaploopCallbackFn MaploopCallback;
	SBPlayerSearchCallbackFn PlayerSearchCallback;
	void *instance;

	SortInfo currsortinfo;
	SortInfo prevsortinfo;

	SBBool sortascending;
	goa_uint32 mypublicip;
	goa_uint32 srcip;
	unsigned short defaultport;

	char *lasterror;
#ifdef GSI_UNICODE
	unsigned short *lasterror_W;
#endif

	SOCKET slsocket;
	gsi_time lanstarttime;
	int fromgamever;
	GOACryptState cryptkey;
	int queryoptions;
	SBListParseState pstate;
	gsi_u16 backendgameflags;

	const char* mLanAdapterOverride;

	SBServer deadlist;
	
#ifdef VENGINE_SUPPORT
	#define FTABLE_IMPLEMENT
#endif

};




#ifndef SB_SERVER_DECLARED
#define SB_SERVER_DECLARED

struct _SBServer
{
	goa_uint32 publicip;
	unsigned short publicport;
	goa_uint32 privateip;
	unsigned short privateport;
	goa_uint32 icmpip;	
	unsigned char state;
	unsigned char flags;
	HashTable keyvals;
	gsi_time updatetime;
	gsi_u32 querychallenge;
	struct _SBServer *next;
	gsi_u8 splitResponseBitmap;
};

#endif

typedef struct _SBServerFIFO
{
	SBServer first;
	SBServer last;
	int count;
} SBServerFIFO;

typedef struct _SBQueryEngine
{
	int queryversion;
	int maxupdates;
	SBServerFIFO querylist;
	SBServerFIFO pendinglist;
	SOCKET querysock;
	#if !defined(SN_SYSTEMS)
	SOCKET icmpsock;
	#endif
	goa_uint32 mypublicip;
	unsigned char serverkeys[MAX_QUERY_KEYS];
	int numserverkeys;	
	SBEngineCallbackFn ListCallback;
	void *instance;
} SBQueryEngine;


struct _ServerBrowser
{
	SBQueryEngine engine;
	SBServerList list;
	SBBool disconnectFlag;
	SBBool dontUpdate;
	goa_uint32 triggerIP;
	unsigned short triggerPort;
	ServerBrowserCallback BrowserCallback;
	SBConnectToServerCallback ConnectCallback;
	void *instance;
};

#define SB_ICMP_ECHO 8
#define SB_ICMP_ECHO_REPLY	0

typedef struct _IPHeader {
	gsi_u8	ip_hl_ver;
	gsi_u8  ip_tos;
	gsi_i16   ip_len;
	gsi_u16 ip_id; 
	gsi_i16   ip_off;
	gsi_u8  ip_ttl;
	gsi_u8  ip_p;
	gsi_u16 ip_sum;
	struct  in_addr ip_src,ip_dst; 
} SBIPHeader;



typedef struct _ICMPHeader
{
	gsi_u8		type;
	gsi_u8		code;
	gsi_u16	cksum;
	union {
		struct {
			gsi_u16 id;
			gsi_u16 sequence;
		} echo;
		gsi_u32 idseq;
		gsi_u16 gateway;
		struct {
			gsi_u16 __notused;
			gsi_u16 mtu;
		} frag;
	} un;
} SBICMPHeader;



void SBServerListInit(SBServerList *slist, const char *queryForGamename, const char *queryFromGamename, const char *queryFromKey, int queryFromVersion, SBBool lanBrowse, SBListCallBackFn callback, void *instance);
SBError SBServerListConnectAndQuery(SBServerList *slist, const char *fieldList, const char *serverFilter, int options, int maxServers);
SBError SBServerListGetLANList(SBServerList *slist, unsigned short startport, unsigned short endport, int queryversion);
void SBServerListDisconnect(SBServerList *slist);
void SBServerListCleanup(SBServerList *slist); 
void SBServerListClear(SBServerList *slist);
SBError SBGetServerRulesFromMaster(SBServerList *slist, goa_uint32 ip, unsigned short port);
SBError SBSendMessageToServer(SBServerList *slist, goa_uint32 ip, unsigned short port, const char *data, int len);
SBError SBSendNatNegotiateCookieToServer(SBServerList *slist, goa_uint32 ip, unsigned short port, int cookie);
SBError SBSendMaploopRequest(SBServerList *slist, SBServer server, SBMaploopCallbackFn callback);
SBError SBSendPlayerSearchRequest(SBServerList *slist, char *searchName, int searchOptions, int maxResults, SBPlayerSearchCallbackFn callback);
int SBServerListFindServerByIP(SBServerList *slist, goa_uint32 ip, unsigned short port);
int SBServerListFindServer(SBServerList *slist, SBServer findserver);
void SBServerListRemoveAt(SBServerList *slist, int index);
void SBServerListAppendServer(SBServerList *slist, SBServer server);
void SBServerListSort(SBServerList *slist, SBBool ascending, SortInfo sortinfo);
int SBServerListCount(SBServerList *slist);
SBServer SBServerListNth(SBServerList *slist, int i);
SBError SBListThink(SBServerList *slist);
const char *SBLastListErrorA(SBServerList *slist);
const unsigned short *SBLastListErrorW(SBServerList *slist);
void SBSetLastListErrorPtr(SBServerList *slist, char* theError);
void SBFreeDeadList(SBServerList *slist);
void SBAllocateServerList(SBServerList *slist);


SBServer SBAllocServer(SBServerList *slist, goa_uint32 publicip, unsigned short publicport);
void SBServerFree(void *elem);
void SBServerAddKeyValue(SBServer server, const char *keyname, const char *value);
void SBServerAddIntKeyValue(SBServer server, const char *keyname, int value);
void SBServerParseKeyVals(SBServer server, char *keyvals);
void SBServerParseQR2FullKeysSingle(SBServer server, char *data, int len);
void SBServerParseQR2FullKeysSplit(SBServer server, char *data, int len);
void SBServerSetFlags(SBServer server, unsigned char flags);
void SBServerSetPublicAddr(SBServer server, goa_uint32 ip, unsigned short port);
void SBServerSetPrivateAddr(SBServer server, goa_uint32 ip, unsigned short port);
void SBServerSetICMPIP(SBServer server, goa_uint32 icmpip);
void SBServerSetState(SBServer server, unsigned char state);
void SBServerSetNext(SBServer server, SBServer next);
SBServer SBServerGetNext(SBServer server);
unsigned char SBServerGetState(SBServer server);
unsigned char SBServerGetFlags(SBServer server);
unsigned short SBServerGetPublicQueryPortNBO(SBServer server);
int SBIsNullServer(SBServer server);
extern SBServer SBNullServer;



const char *SBRefStr(SBServerList *slist,const char *str);
void SBReleaseStr(SBServerList *slist,const char *str);
HashTable SBRefStrHash(SBServerList *slist);
void SBRefStrHashCleanup(SBServerList *slist);

extern char *SBOverrideMasterServer;



void SBQueryEngineInit(SBQueryEngine *engine, int maxupdates, int queryversion, SBBool lanBrowse, SBEngineCallbackFn callback, void *instance);
void SBQueryEngineUpdateServer(SBQueryEngine *engine, SBServer server, int addfront, int querytype, SBBool usequerychallenge);
void SBQueryEngineSetPublicIP(SBQueryEngine *engine, goa_uint32 mypublicip);
SBServer SBQueryEngineUpdateServerByIP(SBQueryEngine *engine, const char *ip, unsigned short queryport, int addfront, int querytype, SBBool usequerychallenge);
void SBQueryEngineThink(SBQueryEngine *engine);
void SBQueryEngineAddQueryKey(SBQueryEngine *engine, unsigned char keyid);
void SBEngineCleanup(SBQueryEngine *engine);
void SBQueryEngineRemoveServerFromFIFOs(SBQueryEngine *engine, SBServer server);
int NTSLengthSB(char *buf, int len);
void SBEngineHaltUpdates(SBQueryEngine *engine);



SBError ServerBrowserBeginUpdate2(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete, const unsigned char *basicFields, int numBasicFields, const char *serverFilter, int updateOptions, int maxServers);



#ifdef GSI_UNICODE
const char *SBServerGetStringValueA(SBServer server, const char *keyname, const char *def); 
int SBServerGetIntValueA(SBServer server, const char *key, int idefault);
#endif


#ifdef __cplusplus
}
#endif

#endif

 

















#ifndef _SB_ASCII_H
#define _SB_ASCII_H


#ifdef __cplusplus
extern "C" {
#endif

 













ServerBrowser ServerBrowserNewA(const char *queryForGamename, const char *queryFromGamename, const char *queryFromKey, int queryFromVersion, int maxConcUpdates, int queryVersion, SBBool lanBrowse, ServerBrowserCallback callback, void *instance);


 



















 
SBError ServerBrowserUpdateA(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete, const unsigned char *basicFields, int numBasicFields, const char *serverFilter);
SBError ServerBrowserLimitUpdateA(ServerBrowser sb, SBBool async, SBBool disconnectOnComplete, const unsigned char *basicFields, int numBasicFields, const char *serverFilter, int maxServers);


 














SBError ServerBrowserAuxUpdateIPA(ServerBrowser sb, const char *ip, unsigned short port, SBBool viaMaster, SBBool async, SBBool fullUpdate);

 


void ServerBrowserRemoveIPA(ServerBrowser sb, const char *ip, unsigned short port);

 


const char *ServerBrowserErrorDescA(ServerBrowser sb, SBError error);

 




const char *ServerBrowserListQueryErrorA(ServerBrowser sb);


 


SBError ServerBrowserSendNatNegotiateCookieToServerA(ServerBrowser sb, const char *ip, unsigned short port, int cookie);


 


SBError ServerBrowserSendMessageToServerA(ServerBrowser sb, const char *ip, unsigned short port, const char *data, int len);


 




void ServerBrowserSortA(ServerBrowser sb, SBBool ascending, const char *sortkey, SBCompareMode comparemode);

 




 



char *SBServerGetPublicAddress(SBServer server);
char *SBServerGetPrivateAddress(SBServer server);


 



const char *SBServerGetStringValueA(SBServer server, const char *keyname, const char *def);
int SBServerGetIntValueA(SBServer server, const char *key, int idefault);
double SBServerGetFloatValueA(SBServer server, const char *key, double fdefault);
SBBool SBServerGetBoolValueA(SBServer server, const char *key, SBBool bdefault);


 






const char *SBServerGetPlayerStringValueA(SBServer server, int playernum, const char *key, const char *sdefault);
int SBServerGetPlayerIntValueA(SBServer server, int playernum, const char *key, int idefault);
double SBServerGetPlayerFloatValueA(SBServer server, int playernum, const char *key, double fdefault);

const char *SBServerGetTeamStringValueA(SBServer server, int teamnum, const char *key, const char *sdefault);
int SBServerGetTeamIntValueA(SBServer server, int teamnum, const char *key, int idefault);
double SBServerGetTeamFloatValueA(SBServer server, int teamnum, const char *key, double fdefault);


#ifdef __cplusplus
}
#endif

#endif 



#if defined(_NITRO)
	#define LIST_NUMKEYBUCKETS 100
	#define LIST_NUMKEYCHAINS 2
#else
	#define LIST_NUMKEYBUCKETS 500
	#define LIST_NUMKEYCHAINS 4
#endif


#define UKEY_LENGTH_MAX		255
#define UVALUE_LENGTH_MAX	255

#ifndef EXTERN_REFSTR_HASH

#if defined(_WIN32) && !defined(_DLL) && !defined (_USRDLL) && !defined(_MANAGED) && defined(GM_2B)

__declspec( thread ) 
#endif
HashTable g_SBRefStrList = NULL;
#endif


 


static int StringHash(const char *s, int numbuckets);
static int RefStringHash(const void *elem, int numbuckets)
{
	return StringHash(((SBRefString *)elem)->str, numbuckets);
}



 



static int GS_STATIC_CALLBACK RefStringCompare(const void *entry1, const void *entry2)
{
   	return strcasecmp(((SBRefString *)entry1)->str,((SBRefString *)entry2)->str);
}


static void RefStringFree(void *elem)
{
	gsifree((char *)((SBRefString *)elem)->str);
#ifdef GSI_UNICODE
	gsifree((unsigned short *)((SBRefString *)elem)->str_W);
#endif
}


#ifndef EXTERN_REFSTR_HASH

HashTable SBRefStrHash(SBServerList *slist)
{
	if (g_SBRefStrList == NULL)
		g_SBRefStrList = TableNew2(sizeof(SBRefString),LIST_NUMKEYBUCKETS,LIST_NUMKEYCHAINS,RefStringHash, RefStringCompare, RefStringFree);

	GSI_UNUSED(slist);
	return g_SBRefStrList;
}

void SBRefStrHashCleanup(SBServerList *slist)
{
	if (g_SBRefStrList != NULL && TableCount(g_SBRefStrList) == 0)
	{
		TableFree(g_SBRefStrList);
		g_SBRefStrList = NULL;
	}

	GSI_UNUSED(slist);
}

#endif


void SBServerFree(void *elem)
{
	SBServer server = *(SBServer *)elem;
	
	TableFree(server->keyvals);
	server->keyvals = NULL;
	gsifree(server);
}

void SBServerAddKeyValue(SBServer server, const char *keyname, const char *value)
{
	SBKeyValuePair kv;
	kv.key = SBRefStr(NULL, keyname);
	kv.value = SBRefStr(NULL, value);
	TableEnter(server->keyvals, &kv);

	gsDebugFormat(GSIDebugCat_SB, GSIDebugType_Misc, GSIDebugLevel_Comment,
			"SBServerAddKeyValue added %s\\%s\r\n", keyname, value);
}

void SBServerAddIntKeyValue(SBServer server, const char *keyname, int value)
{
	char stemp[20];
	sprintf(stemp, "%d", value);
	SBServerAddKeyValue(server, keyname, stemp);
}

typedef struct 
{
	SBServerKeyEnumFn EnumFn;
	void *instance;
} SBServerEnumData;

 




static void KeyMapF(void *elem, void *clientData)
{
	SBKeyValuePair *kv = (SBKeyValuePair *)elem;
	SBServerEnumData *ped = (SBServerEnumData *)clientData;

#ifndef GSI_UNICODE
	ped->EnumFn((char *)kv->key, (char *)kv->value, ped->instance);
#else
	unsigned short key_W[UKEY_LENGTH_MAX];
	unsigned short value_W[UVALUE_LENGTH_MAX];
	UTF8ToUCS2String(kv->key, key_W);
	UTF8ToUCS2String(kv->value, value_W);
	ped->EnumFn(key_W, value_W, ped->instance);
#endif
}
void SBServerEnumKeys(SBServer server, SBServerKeyEnumFn KeyFn, void *instance)
{
	SBServerEnumData ed;

	ed.EnumFn = KeyFn;
	ed.instance = instance;
	TableMap(server->keyvals, KeyMapF, &ed);
}


const char *SBServerGetStringValueA(SBServer server, const char *keyname, const char *def)
{
	SBKeyValuePair kv, *ptr;
	
	
	
	
	
	assert(server);
	if (!server)
		return NULL;
	kv.key = keyname;
	ptr =  (SBKeyValuePair *)TableLookup(server->keyvals, &kv);
	if (ptr == NULL)
		return def;
	return ptr->value;
}
#ifdef GSI_UNICODE
const unsigned short *SBServerGetStringValueW(SBServer server, const unsigned short *keyname, const unsigned short *def)
{
	char* keyname_A = UCS2ToUTF8StringAlloc(keyname);
	const char* value = SBServerGetStringValueA(server, keyname_A, NULL);
	if (value == NULL)
		return def;
	else
	{
		
		
		SBRefString ref, *val;
		ref.str = value;
		val = (SBRefString *)TableLookup(SBRefStrHash(NULL), &ref);
		if (val == NULL)
			return def; 

		return val->str_W;
	}
}
#endif

int SBServerGetIntValueA(SBServer server, const char *key, int idefault)
{
	const char *s, *s2;
	
	GS_ASSERT(key != NULL);
	GS_ASSERT(server != NULL);
	if (server == NULL)
		return idefault;
	if (strcmp(key,"ping") == 0) 
		return SBServerGetPing(server);
	s = SBServerGetStringValueA(server, key, NULL);
	if (s == NULL)
		return idefault;
	s2 = (*s != '-') ? s : s+1;  
	if (!isdigit((unsigned char)*s2)) 
		return idefault;
	else
		return atoi(s);
}
#ifdef GSI_UNICODE
int SBServerGetIntValueW(SBServer server, const unsigned short *key, int idefault)
{
	char keyname_A[255];
	UCS2ToUTF8String(key, keyname_A);
	return SBServerGetIntValueA(server, keyname_A, idefault);
}
#endif

double SBServerGetFloatValueA(SBServer server, const char *key, double fdefault)
{
	const char *s;
	s = SBServerGetStringValueA(server, key, NULL);
	if (s == NULL)
		return fdefault;
	else
		return atof(s);
}
#ifdef GSI_UNICODE
double SBServerGetFloatValueW(SBServer server, const unsigned short *key, double fdefault)
{
	char keyname_A[255];
	UCS2ToUTF8String(key, keyname_A);
	return SBServerGetFloatValueA(server, keyname_A, fdefault);
}
#endif

SBBool SBServerGetBoolValueA(SBServer server, const char *key, SBBool bdefault)
{
	const char *s;
	s = SBServerGetStringValueA(server, key, NULL);
	if (!s || !s[0])
		return bdefault;

	
	if('0' == s[0]|| 'F' == s[0] || 'f' == s[0] || 'N' == s[0] || 'n' == s[0])
		return SBFalse;

	
	return SBTrue;
}
#ifdef GSI_UNICODE
SBBool SBServerGetBoolValueW(SBServer server, const unsigned short *key, SBBool bdefault)
{
	char keyname_A[255];
	UCS2ToUTF8String(key, keyname_A);
	return SBServerGetBoolValueA(server, keyname_A, bdefault);
}
#endif

const char *SBServerGetPlayerStringValueA(SBServer server, int playernum, const char *key, const char *sdefault)
{
	char keyname[128];
	sprintf(keyname, "%s_%d", key, playernum);
	return SBServerGetStringValueA(server, keyname, sdefault);
}
#ifdef GSI_UNICODE
const unsigned short *SBServerGetPlayerStringValueW(SBServer server, int playernum, const unsigned short *key, const unsigned short *sdefault)
{
	char keyname_A[UKEY_LENGTH_MAX];
	char default_A[UKEY_LENGTH_MAX];
	const char* value_A = NULL;
	UCS2ToUTF8String(key, keyname_A);
	UCS2ToUTF8String(sdefault, default_A);
	
	value_A = SBServerGetPlayerStringValueA(server, playernum, keyname_A, default_A);
	if (value_A == NULL)
		return sdefault;
	else
	{
		
		SBRefString ref, *val;
		ref.str = value_A;
		val = (SBRefString *)TableLookup(SBRefStrHash(NULL), &ref);
		if (val == NULL)
			return sdefault;
		return val->str_W;
	}
}
#endif

int SBServerGetPlayerIntValueA(SBServer server, int playernum, const char *key, int idefault)
{
	char keyname[128];
	sprintf(keyname, "%s_%d", key, playernum);
	return SBServerGetIntValueA(server, keyname, idefault);
}
#ifdef GSI_UNICODE
int SBServerGetPlayerIntValueW(SBServer server, int playernum, const unsigned short *key, int idefault)
{
	char keyname_A[UKEY_LENGTH_MAX];
	UCS2ToUTF8String(key, keyname_A);
	return SBServerGetPlayerIntValueA(server, playernum, keyname_A, idefault);
}
#endif

double SBServerGetPlayerFloatValueA(SBServer server, int playernum, const char *key, double fdefault)
{
	char keyname[128];
	sprintf(keyname, "%s_%d", key, playernum);
	return SBServerGetFloatValueA(server, keyname, fdefault);
}
#ifdef GSI_UNICODE
double SBServerGetPlayerFloatValueW(SBServer server, int playernum, const unsigned short *key, double fdefault)
{
	char keyname_A[UKEY_LENGTH_MAX];
	UCS2ToUTF8String(key, keyname_A);
	return SBServerGetPlayerFloatValueA(server, playernum, keyname_A, fdefault);
}
#endif

const char *SBServerGetTeamStringValueA(SBServer server, int teamnum, const char *key, const char *sdefault)
{
	char keyname[128];
	sprintf(keyname, "%s_t%d", key, teamnum);
	return SBServerGetStringValueA(server, keyname, sdefault);
}
#ifdef GSI_UNICODE
const unsigned short *SBServerGetTeamStringValueW(SBServer server, int teamnum, const unsigned short *key, const unsigned short *sdefault)
{
	char keyname_A[UKEY_LENGTH_MAX];
	char default_A[UKEY_LENGTH_MAX];
	const char* value_A = NULL;
	UCS2ToUTF8String(key, keyname_A);
	UCS2ToUTF8String(sdefault, default_A);
	value_A = SBServerGetTeamStringValueA(server, teamnum, keyname_A, default_A);

	if (value_A == NULL)
		return sdefault;
	else
	{
		
		SBRefString ref, *val;
		ref.str = value_A;
		val = (SBRefString *)TableLookup(SBRefStrHash(NULL), &ref);
		if (val == NULL)
			return sdefault;
		return val->str_W;
	}
}
#endif

int SBServerGetTeamIntValueA(SBServer server, int teamnum, const char *key, int idefault)
{
	char keyname[128];
	sprintf(keyname, "%s_t%d", key, teamnum);
	return SBServerGetIntValueA(server, keyname, idefault);
}
#ifdef GSI_UNICODE
int SBServerGetTeamIntValueW(SBServer server, int teamnum, const unsigned short *key, int idefault)
{
	char keyname_A[UKEY_LENGTH_MAX];
	UCS2ToUTF8String(key, keyname_A);
	return SBServerGetTeamIntValueA(server, teamnum, keyname_A, idefault);
}
#endif

double SBServerGetTeamFloatValueA(SBServer server, int teamnum, const char *key, double fdefault)
{
	char keyname[128];
	sprintf(keyname, "%s_t%d", key, teamnum);
	return SBServerGetFloatValueA(server, keyname, fdefault);
}
#ifdef GSI_UNICODE
double SBServerGetTeamFloatValueW(SBServer server, int teamnum, const unsigned short *key, double fdefault)
{
	char keyname_A[UKEY_LENGTH_MAX];
	UCS2ToUTF8String(key, keyname_A);
	return SBServerGetTeamFloatValueA(server, teamnum, keyname_A, fdefault);
}
#endif

SBBool SBServerHasBasicKeys(SBServer server)
{
	return (((server->state & STATE_BASICKEYS) == STATE_BASICKEYS) ? SBTrue : SBFalse);
}

SBBool SBServerHasFullKeys(SBServer server)
{
	return (((server->state & STATE_FULLKEYS) == STATE_FULLKEYS) ? SBTrue : SBFalse);
}

SBBool SBServerHasValidPing(SBServer server)
{
	return (((server->state & STATE_VALIDPING) == STATE_VALIDPING) ? SBTrue : SBFalse);
}


char *SBServerGetPublicAddress(SBServer server)
{
	return (char *)inet_ntoa(*(struct in_addr *)&server->publicip);
}

unsigned int SBServerGetPublicInetAddress(SBServer server)
{
	return server->publicip;
}


unsigned short SBServerGetPublicQueryPort(SBServer server)
{
	return ntohs(server->publicport);
}

unsigned short SBServerGetPublicQueryPortNBO(SBServer server)
{
	return server->publicport;
}

SBBool SBServerHasPrivateAddress(SBServer server)
{
	return (((server->flags & PRIVATE_IP_FLAG) == PRIVATE_IP_FLAG) ? SBTrue : SBFalse);
}



SBBool SBServerDirectConnect(SBServer server)
{
	return (((server->flags & UNSOLICITED_UDP_FLAG) == UNSOLICITED_UDP_FLAG) ? SBTrue : SBFalse);
}

char *SBServerGetPrivateAddress(SBServer server)
{
	return (char *)inet_ntoa(*(struct in_addr *)&server->privateip);
}

unsigned int SBServerGetPrivateInetAddress(SBServer server)
{
	return server->privateip;
}


unsigned short SBServerGetPrivateQueryPort(SBServer server)
{
	return ntohs(server->privateport);
}

void SBServerSetNext(SBServer server, SBServer next)
{
	server->next = next;
}

SBServer SBServerGetNext(SBServer server)
{
	return server->next;
}

static int CheckValidKey(char *key)
{
	const char *InvalidKeys[]={"queryid","final"};
	int i;
	for (i = 0; i < sizeof(InvalidKeys)/sizeof(InvalidKeys[0]); i++)
	{
		if (strcmp(key,InvalidKeys[i]) == 0)
			return 0;
	}
	return 1;
}

static char *mytok(char *instr, char delim)
{
	char *result;
	static char *thestr;
	
	if (instr)
		thestr = instr;
	result=thestr;
	while (*thestr && *thestr != delim)
	{
		thestr++;
	}
	if (thestr == result)
		result = NULL;
	if (*thestr) 
		*thestr++ = '\0';
	return result;
}


void SBServerParseKeyVals(SBServer server, char *keyvals)
{
	char *k, *v;
	
	k = mytok(++keyvals,'\\'); 
	while (k != NULL)
	{
		v = mytok(NULL,'\\');
		if (v == NULL)
			v = "";
		if (CheckValidKey(k))
		{
			SBServerAddKeyValue(server, k, v);
		}
		k = mytok(NULL,'\\');		
	}
}


 























void SBServerParseQR2FullKeysSingle(SBServer server, char *data, int len)
{
	int dlen;
	char *k;
	char *v;
	char *keys;
	int nkeys;
	unsigned short nunits;
	int pflag;
	int i,j;
	char tempkey[128];
	
	while (*data)
	{
		dlen = NTSLengthSB(data, len);
		if (dlen < 0)
			return; 
		k = data;
		data += dlen;
		len -= dlen;
		dlen = NTSLengthSB(data, len);
		if (dlen < 0)
			return; 
		v = data;
		data += dlen;
		len -= dlen;
		
		
		if (!qr2_internal_is_master_only_key(k))
		{
			SBServerAddKeyValue(server, k, v);
		}	
	}
	
	data++;
	len--;
	
	for (pflag = 0 ; pflag < 2 ; pflag++)
	{
		if (len < 2)
			return;
		memcpy(&nunits, data, 2);
		nunits = ntohs(nunits);
		data += 2;
		len -= 2;
		keys = data;
		nkeys = 0;
		
		while (*data)
		{
			dlen = NTSLengthSB(data, len);
			if (dlen < 0)
				return; 
			if (dlen > 100) 
				return;
			nkeys++;
			data += dlen;
			len -= dlen;
		}
		
		data++;
		len--;
		
		for (i = 0 ; i < nunits ; i++)
		{
			k = keys;
			
			for (j = 0 ; j < nkeys ; j++)
			{
				dlen = NTSLengthSB(data, len);
				if (dlen < 0)
					return; 
				sprintf(tempkey, "%s%d", k, i);
				SBServerAddKeyValue(server, tempkey, data);
				data += dlen;
				len -= dlen;
				k += strlen(k) + 1; 
			}
		}		
	}

}







#define QR2_SPLITPACKET_NUMSTRING "splitnum"
#define QR2_SPLITPACKET_MAX	      7      
#define QR2_SPLITPACKET_FINAL     (1<<7) 
void SBServerParseQR2FullKeysSplit(SBServer server, char *data, int len)
{
	int dlen;
	char *k;
	char *v;
	unsigned int packetNum = 0;
	gsi_bool isFinal = gsi_false;

	
	if (*data == '\0')
		return;
	
	
	dlen = NTSLengthSB(data, len);
	if (dlen < 0)
		return;
	k = data;
	data += dlen;
	len -= dlen;
	
	if (strncasecmp(QR2_SPLITPACKET_NUMSTRING,k,strlen(QR2_SPLITPACKET_NUMSTRING))!=0)
		return;
	if (len < 1)
		return;

	packetNum = (unsigned int)((unsigned char)*data);
	data++;
	len--;

	
	if ((packetNum & QR2_SPLITPACKET_FINAL) == QR2_SPLITPACKET_FINAL)
	{
		isFinal = gsi_true;
		packetNum ^= QR2_SPLITPACKET_FINAL;
	}

	
	if (packetNum > QR2_SPLITPACKET_MAX)
		return;

	
	if (isFinal == SBTrue)
		
		server->splitResponseBitmap |= (char)(0xFF<<packetNum); 
	else
		
		server->splitResponseBitmap |= (1<<packetNum);

	
	if (len < 1)
		return;

	
	while(len > 0)
	{
		int keyType = 0;
		int nindex = 0;

		
		keyType = *data;
		data++;
		len--;

		if (keyType < 0 || keyType > 2)
		{
			gsDebugFormat(GSIDebugCat_SB, GSIDebugType_Network, GSIDebugLevel_WarmError,
					"Split packet parse error, invalid key type! (%d)\r\n", keyType);
			return; 
		}

		
		while(*data)
		{
			
			dlen = NTSLengthSB(data, len);
			if (dlen < 0)
				return;
			k = data;
			data += dlen;
			len -= dlen;
				
			if (keyType == 0)
			{
				
				dlen = NTSLengthSB(data, len);
				if (dlen < 0)
					return;
				v = data;
				data += dlen;
				len -= dlen;

				
				if (!qr2_internal_is_master_only_key(k))
				{
					SBServerAddKeyValue(server, k, v);
				}	
			}
			else
			{
				char tempkey[128];

				
				if (len < 1)
					return;

				nindex = *data;
				data++;
				len--;

				
				while(*data)
				{
					
					dlen = NTSLengthSB(data, len);
					if (dlen < 0)
						return;
					v = data;
					data += dlen;
					len -= dlen;
					
					sprintf(tempkey, "%s%d", k, nindex);
					SBServerAddKeyValue(server, tempkey, v);
					nindex++; 
				}

				
				if (len > 0)
				{
					data++;
					len--;
				}
			}
		} 

		
		if (len > 0)
		{
			if (*data != '\0')
			{
				gsDebugFormat(GSIDebugCat_SB, GSIDebugType_Network, GSIDebugLevel_WarmError,
					"Split packet parse error, NULL byte expected!\r\n");
				return; 
			}
			data++;
			len--;
		}
	}
}

 


#define MULTIPLIER -1664117991
static int StringHash(const char *s, int numbuckets)
{
	goa_uint32 hashcode = 0;
	while (*s != 0)
	{
		hashcode = (goa_uint32)((int)hashcode * MULTIPLIER + tolower(*s));
		s++;
	}
    return (int)(hashcode % numbuckets);

}

static void KeyValFree(void *elem)
{
	SBKeyValuePair *kv = (SBKeyValuePair *)elem;
	SBReleaseStr(NULL, kv->key);
	SBReleaseStr(NULL, kv->value);
}

static int KeyValHashKey(const void *elem, int numbuckets)
{
	return StringHash(((SBKeyValuePair *)elem)->key, numbuckets);
}


static int GS_STATIC_CALLBACK KeyValCompareKey(const void *entry1, const void *entry2)
{
	GS_ASSERT(entry1)
	GS_ASSERT(entry2)
	if	(
			(((SBKeyValuePair *)entry1)->key == NULL)  ||
			(((SBKeyValuePair *)entry2)->key == NULL)  
		)
		return 1;

	return strcasecmp(((SBKeyValuePair *)entry1)->key, ((SBKeyValuePair *)entry2)->key);
}


int SBServerGetPing(SBServer server)
{
	return (int) server->updatetime;
}

#define NUM_BUCKETS 8
#define NUM_CHAINS 4


SBServer SBAllocServer(SBServerList *slist, goa_uint32 publicip, unsigned short publicport)
{
	SBServer server;
	server = (SBServer)gsimalloc(sizeof(struct _SBServer));
	if (server == NULL)
		return NULL;
	server->keyvals = TableNew2(sizeof(SBKeyValuePair),NUM_BUCKETS,NUM_CHAINS, KeyValHashKey, KeyValCompareKey, KeyValFree);
	if (server->keyvals == NULL)
	{
		gsifree(server);
		return NULL;
	}
	server->state = 0;
	server->flags = 0;
	server->next = NULL;
	server->updatetime = 0;
	server->icmpip = 0;
	server->publicip = publicip;
	server->publicport = publicport;
	server->privateip = 0;
	server->privateport = 0;

	GSI_UNUSED(slist);
	return server;	
}



void SBServerSetFlags(SBServer server, unsigned char flags)
{
	server->flags = flags;
}
void SBServerSetPublicAddr(SBServer server, goa_uint32 ip, unsigned short port)
{
	server->publicip = ip;
	server->publicport = port;

}
void SBServerSetPrivateAddr(SBServer server, goa_uint32 ip, unsigned short port)
{
	server->privateip = ip;
	server->privateport = port;

}
void SBServerSetICMPIP(SBServer server, goa_uint32 icmpip)
{
	server->icmpip = icmpip;

}
void SBServerSetState(SBServer server, unsigned char state)
{
	server->state = state;

}
unsigned char SBServerGetState(SBServer server)
{
	return server->state;

}
unsigned char SBServerGetFlags(SBServer server)
{
	return server->flags;

}

int SBIsNullServer(SBServer server)
{
	return (server == SBNullServer) ? 1 : 0;
}

SBServer SBNullServer = NULL;

