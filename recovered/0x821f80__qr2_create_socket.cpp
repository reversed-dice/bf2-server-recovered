// FUNCTION: BF2 0x821f80
// upstream qr2/qr2.c qr2_create_socket
#define _LINUX
#define _UNIX
 




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
void SocketStartUp(...);
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

#ifndef _QR2_H_
#define _QR2_H_



 




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





#ifndef GSI_UNICODE
#define qr2_init			qr2_initA
#define qr2_init_socket		qr2_init_socketA
#define qr2_parse_query		qr2_parse_queryA
#define qr2_buffer_add		qr2_buffer_addA
#else
#define qr2_init			qr2_initW
#define qr2_init_socket		qr2_init_socketW
#define qr2_parse_query		qr2_parse_queryW
#define qr2_buffer_add		qr2_buffer_addW
#endif




#ifdef __cplusplus
extern "C" {
#endif




 




typedef enum 
{e_qrnoerror, 
e_qrwsockerror, 
e_qrbinderror, 
e_qrdnserror, 
e_qrconnerror,  
e_qrnochallengeerror, 
qr2_error_t_count
} qr2_error_t;


 







typedef enum {key_server, key_player, key_team, key_type_count} qr2_key_type;

 






#define NUM_PORTS_TO_TRY 100


 






#define QR_MAGIC_1 0xFE
#define QR_MAGIC_2 0xFD

 


extern char qr2_hostname[64];

 








typedef struct qr2_implementation_s *qr2_t;

 





typedef struct qr2_keybuffer_s *qr2_keybuffer_t;


 





typedef struct qr2_buffer_s *qr2_buffer_t;

typedef struct qr2_ipverify_node_s *qr2_ipverify_node_t;


 











typedef void (*qr2_serverkeycallback_t)(int keyid, qr2_buffer_t outbuf, void *userdata);
	
 













typedef void (*qr2_playerteamkeycallback_t)(int keyid, int index, qr2_buffer_t outbuf, void *userdata);	

	
 












typedef void (*qr2_keylistcallback_t)(qr2_key_type keytype, qr2_keybuffer_t keybuffer, void *userdata);	


 









typedef int  (*qr2_countcallback_t)(qr2_key_type keytype, void *userdata);	

 











typedef void (*qr2_adderrorcallback_t)(qr2_error_t error, gsi_char *errmsg, void *userdata);	



typedef void (*qr2_natnegcallback_t)(int cookie, void *userdata);	
typedef void (*qr2_clientmessagecallback_t)(gsi_char *data, int len, void *userdata);	
typedef void (*qr2_publicaddresscallback_t)(unsigned int ip, unsigned short port, void *userdata);
typedef void (*qr2_clientconnectedcallback_t)(SOCKET gamesocket, struct sockaddr_in *remoteaddr, void *userdata);


typedef void (*qr2_denyqr2responsetoipcallback_t)(void *userdata, unsigned int sender_ip, int * result);


void qr2_register_natneg_callback(qr2_t qrec, qr2_natnegcallback_t nncallback);
void qr2_register_clientmessage_callback(qr2_t qrec, qr2_clientmessagecallback_t cmcallback);
void qr2_register_publicaddress_callback(qr2_t qrec, qr2_publicaddresscallback_t pacallback);
void qr2_register_clientconnected_callback(qr2_t qrec, qr2_clientconnectedcallback_t cccallback);


void qr2_register_denyresponsetoip_callback(qr2_t qrec, qr2_denyqr2responsetoipcallback_t dertoipcallback);



 









void qr2_register_key(int keyid, const gsi_char *key);


 































qr2_error_t qr2_init( qr2_t *qrec, const gsi_char *ip, int baseport, const gsi_char *gamename, const gsi_char *secret_key,
			int ispublic, int natnegotiate,
			qr2_serverkeycallback_t server_key_callback,
			qr2_playerteamkeycallback_t player_key_callback,
			qr2_playerteamkeycallback_t team_key_callback,
			qr2_keylistcallback_t key_list_callback,
			qr2_countcallback_t playerteam_count_callback,
			qr2_adderrorcallback_t adderror_callback,
			void *userdata);

 














qr2_error_t qr2_init_socket( qr2_t *qrec, SOCKET s, int boundport, const gsi_char *gamename, const gsi_char *secret_key,
					 int ispublic, int natnegotiate,
					 qr2_serverkeycallback_t server_key_callback,
					 qr2_playerteamkeycallback_t player_key_callback,
					 qr2_playerteamkeycallback_t team_key_callback,
					 qr2_keylistcallback_t key_list_callback,
					 qr2_countcallback_t playerteam_count_callback,
					 qr2_adderrorcallback_t adderror_callback,
					 void *userdata);

 












void qr2_think(qr2_t qrec);

 













void qr2_parse_query(qr2_t qrec, gsi_char *query, int len, struct sockaddr *sender);

 








void qr2_send_statechanged(qr2_t qrec);

 










void qr2_shutdown(qr2_t qrec);



 





gsi_bool qr2_keybuffer_add(qr2_keybuffer_t keybuffer, int keyid);

 





gsi_bool qr2_buffer_add(qr2_buffer_t outbuf, const gsi_char *value);
gsi_bool qr2_buffer_add_int(qr2_buffer_t outbuf, int value);


 
#define REQUEST_KEY_LEN 4
#define RECENT_CLIENT_MESSAGES_TO_TRACK 10
typedef void (*cdkey_process_t)(char *buf, int len, struct sockaddr *fromaddr);

 
#define QR2_IPVERIFY_TIMEOUT        4000  
#define QR2_IPVERIFY_ARRAY_SIZE     200   
#define QR2_IPVERIFY_MAXDUPLICATES  5     
struct qr2_ipverify_info_s
{
	struct sockaddr_in addr;      
	gsi_u32            challenge;
	gsi_time           createtime; 
};

struct qr2_implementation_s
{
	SOCKET hbsock;
	char gamename[64];
	char secret_key[64];
	char instance_key[REQUEST_KEY_LEN];
	qr2_serverkeycallback_t server_key_callback;
	qr2_playerteamkeycallback_t player_key_callback;
	qr2_playerteamkeycallback_t team_key_callback;
	qr2_keylistcallback_t key_list_callback;
	qr2_countcallback_t playerteam_count_callback;
	qr2_adderrorcallback_t adderror_callback;					
	qr2_natnegcallback_t nn_callback;
	qr2_clientmessagecallback_t cm_callback;
	qr2_publicaddresscallback_t pa_callback;
	qr2_clientconnectedcallback_t cc_callback;

	qr2_denyqr2responsetoipcallback_t denyresp2_ip_callback;



	gsi_time lastheartbeat;
	gsi_time lastka;
	int userstatechangerequested;
	int listed_state;
	int ispublic;	 
	int qport;
	int read_socket;
	int nat_negotiate;
	struct sockaddr_in hbaddr;
	cdkey_process_t cdkeyprocess;
	int client_message_keys[RECENT_CLIENT_MESSAGES_TO_TRACK];
	int cur_message_key;
	unsigned int publicip;
	unsigned short publicport;
	void *udata;

	gsi_u8 backendoptions; 
	struct qr2_ipverify_info_s ipverify[QR2_IPVERIFY_ARRAY_SIZE];
};


void qr2_parse_queryA(qr2_t qrec, char *query, int len, struct sockaddr *sender);
gsi_bool qr2_buffer_addA(qr2_buffer_t outbuf, const char *value);
qr2_error_t qr2_initA( qr2_t *qrec, const char *ip, int baseport, const char *gamename, const char *secret_key,
			int ispublic, int natnegotiate,
			qr2_serverkeycallback_t server_key_callback,
			qr2_playerteamkeycallback_t player_key_callback,
			qr2_playerteamkeycallback_t team_key_callback,
			qr2_keylistcallback_t key_list_callback,
			qr2_countcallback_t playerteam_count_callback,
			qr2_adderrorcallback_t adderror_callback,
			void *userdata);
qr2_error_t qr2_init_socketA( qr2_t *qrec, SOCKET s, int boundport, const char *gamename, const char *secret_key,
					 int ispublic, int natnegotiate,
					 qr2_serverkeycallback_t server_key_callback,
					 qr2_playerteamkeycallback_t player_key_callback,
					 qr2_playerteamkeycallback_t team_key_callback,
					 qr2_keylistcallback_t key_list_callback,
					 qr2_countcallback_t playerteam_count_callback,
					 qr2_adderrorcallback_t adderror_callback,
					 void *userdata);


#ifdef __cplusplus
}
#endif


#endif


 














#ifndef _NATNEG_H_
#define _NATNEG_H_
#if !defined(AFX_NATIFY_H__B8FF4369_8789_4674_8569_3D52CE8CA890__INCLUDED_)
#define AFX_NATIFY_H__B8FF4369_8789_4674_8569_3D52CE8CA890__INCLUDED_

#if _MSC_VER > 1000
#endif 


#define NATIFY_COOKIE		777
#define NATIFY_TIMEOUT		10000
#define NATIFY_STATUS_STEPS (NATIFY_TIMEOUT / 1000) + 7

typedef enum { packet_map1a, packet_map2, packet_map3, packet_map1b, NUM_PACKETS } NatifyPacket;
typedef enum { no_nat, firewall_only, full_cone, restricted_cone, port_restricted_cone, symmetric, unknown, NUM_NAT_TYPES } NatType;
typedef enum { promiscuous, not_promiscuous, port_promiscuous, ip_promiscuous, promiscuity_not_applicable, NUM_PROMISCUITY_TYPES } NatPromiscuity;
typedef enum { unrecognized, private_as_public, consistent_port, incremental, mixed, NUM_MAPPING_SCHEMES } NatMappingScheme;

typedef struct _AddressMapping {
	unsigned int privateIp;
	unsigned short privatePort;
	unsigned int publicIp;
	unsigned short publicPort;
} AddressMapping;

typedef struct _NAT {
	char brand[32];
	char model[32];
	char firmware[64];
	gsi_bool ipRestricted;
	gsi_bool portRestricted;
	NatPromiscuity promiscuity;
	NatType natType;
	NatMappingScheme mappingScheme;
	AddressMapping mappings[4];
	gsi_bool qr2Compatible;
} NAT;

int DiscoverReachability(SOCKET sock, unsigned int ip, unsigned short port, int portType);
int DiscoverMapping(SOCKET sock, unsigned int ip, unsigned short port, int portType, int id);
int NatifyThink(SOCKET sock, NAT * nat);
gsi_bool DetermineNatType(NAT * nat);
void OutputMapping(const AddressMapping * theMap);


#endif 


#ifdef __cplusplus
extern "C" {
#endif

 





#define NATNEG_MAGIC_LEN 6
#define NN_MAGIC_0 0xFD
#define NN_MAGIC_1 0xFC
#define NN_MAGIC_2 0x1E
#define NN_MAGIC_3 0x66
#define NN_MAGIC_4 0x6A
#define NN_MAGIC_5 0xB2


extern unsigned char NNMagicData[];

 




typedef enum {ns_initsent, ns_initack, ns_connectping, ns_finished, ns_canceled, ns_reportsent, ns_reportack } NegotiateState;

 






typedef enum {nr_success, nr_deadbeatpartner, nr_inittimeout, nr_pingtimeout, nr_unknownerror, nr_noresult } NegotiateResult;

 






typedef enum {ne_noerror, ne_allocerror, ne_socketerror, ne_dnserror} NegotiateError;



typedef void (*NegotiateProgressFunc)(NegotiateState state, void *userdata);


typedef void (*NegotiateCompletedFunc)(NegotiateResult result, SOCKET gamesocket, struct sockaddr_in *remoteaddr, void *userdata);


typedef void (*NatDetectionResultsFunc)(gsi_bool success, NAT nat);


 









NegotiateError NNBeginNegotiation(int cookie, int clientindex, NegotiateProgressFunc progresscallback, NegotiateCompletedFunc completedcallback, void *userdata);


 





NegotiateError NNBeginNegotiationWithSocket(SOCKET gamesocket, int cookie, int clientindex, NegotiateProgressFunc progresscallback, NegotiateCompletedFunc completedcallback, void *userdata);


 




void NNThink();


 





void NNProcessData(char *data, int len, struct sockaddr_in *fromaddr);


 




void NNCancel(int cookie);


 






void NNFreeNegotiateList();


 




NegotiateError NNStartNatDetection(NatDetectionResultsFunc resultscallback);



extern char *Matchup2Hostname;
extern char *Matchup1Hostname;

#ifdef __cplusplus
}
#endif

#endif


#ifdef __cplusplus
extern "C" {
#endif	
	
#ifdef __MWERKS__ 
qr2_error_t qr2_initW( qr2_t *qrec, const unsigned short *ip, int baseport, const unsigned short *gamename, 
					 const unsigned short *secret_key, int ispublic, int natnegotiate, qr2_serverkeycallback_t server_key_callback, 
					 qr2_playerteamkeycallback_t player_key_callback, qr2_playerteamkeycallback_t team_key_callback, qr2_keylistcallback_t key_list_callback, 
					 qr2_countcallback_t playerteam_count_callback, qr2_adderrorcallback_t adderror_callback, void *userdata);
qr2_error_t qr2_init_socketW( qr2_t *qrec, SOCKET s, int boundport, const unsigned short *gamename, 
					 const unsigned short *secret_key, int ispublic, int natnegotiate, qr2_serverkeycallback_t server_key_callback,
					 qr2_playerteamkeycallback_t player_key_callback, qr2_playerteamkeycallback_t team_key_callback, qr2_keylistcallback_t key_list_callback, 
					 qr2_countcallback_t playerteam_count_callback, qr2_adderrorcallback_t adderror_callback, void *userdata);
qr2_error_t qr2_init_socketA( qr2_t *qrec, SOCKET s, int boundport, const char *gamename, const char *secret_key,
					 int ispublic, int natnegotiate, qr2_serverkeycallback_t server_key_callback,
					 qr2_playerteamkeycallback_t player_key_callback, qr2_playerteamkeycallback_t team_key_callback,
					 qr2_keylistcallback_t key_list_callback, qr2_countcallback_t playerteam_count_callback,
					 qr2_adderrorcallback_t adderror_callback, void *userdata);
qr2_error_t qr2_initA( qr2_t *qrec, const char *ip, int baseport, const char *gamename, const char *secret_key,
					 int ispublic, int natnegotiate, qr2_serverkeycallback_t server_key_callback,
					 qr2_playerteamkeycallback_t player_key_callback, qr2_playerteamkeycallback_t team_key_callback,
					 qr2_keylistcallback_t key_list_callback, qr2_countcallback_t playerteam_count_callback,
					 qr2_adderrorcallback_t adderror_callback, void *userdata);
#endif

 


#define MASTER_PORT 27900
#define MASTER_ADDR "master." GSI_DOMAIN_NAME
	
#define FIRST_HB_TIME 10000  
#define HB_TIME 60000  
#define KA_TIME 20000  
#define MIN_STATECHANGED_HB_TIME 10000  
#define MAX_FIRST_COUNT 4  
#define MAX_DATA_SIZE 1400
#define INBUF_LEN 256
#define PUBLIC_ADDR_LEN 12
#define QR2_OPTION_USE_QUERY_CHALLENGE 128
	
#define PACKET_QUERY              0x00
#define PACKET_CHALLENGE          0x01
#define PACKET_ECHO               0x02
#define PACKET_ECHO_RESPONSE      0x05  
#define PACKET_HEARTBEAT          0x03
#define PACKET_ADDERROR           0x04
#define PACKET_CLIENT_MESSAGE     0x06
#define PACKET_CLIENT_MESSAGE_ACK 0x07
#define PACKET_KEEPALIVE          0x08
#define PACKET_PREQUERY_IP_VERIFY 0x09

	 
#define MAX_LOCAL_IP 5


#define NATNEG_MAGIC_LEN 6
#define NN_MAGIC_0 0xFD
#define NN_MAGIC_1 0xFC
#define NN_MAGIC_2 0x1E
#define NN_MAGIC_3 0x66
#define NN_MAGIC_4 0x6A
#define NN_MAGIC_5 0xB2



#define QR2_EXFLAG_SPLIT		(1<<0)


#define QR2_SPLITNUM_MAX		7
#define QR2_SPLITNUM_FINALFLAG	(1<<7)


 


typedef unsigned char uchar;

struct qr2_keybuffer_s
{
	uchar keys[MAX_REGISTERED_KEYS];
	int numkeys;
};

struct qr2_buffer_s
{
	char buffer[MAX_DATA_SIZE];
	int len;
};

#define AVAILABLE_BUFFER_LEN(a) (MAX_DATA_SIZE - (a)->len)

 


struct qr2_implementation_s static_qr2_rec = {INVALID_SOCKET};
static qr2_t current_rec = &static_qr2_rec;
char qr2_hostname[64];

static int num_local_ips = 0;
static struct in_addr local_ip_list[MAX_LOCAL_IP];


 


static void send_heartbeat(qr2_t qrec, int statechanged);
static void send_keepalive(qr2_t qrec);
static int get_sockaddrin(const char *host, int port, struct sockaddr_in *saddr, struct hostent **savehent);
static void qr2_check_queries(qr2_t qrec);
static void qr2_check_send_heartbeat(qr2_t qrec);
static void enum_local_ips();
static void qr2_expire_ip_verify(qr2_t qrec);
qr2_error_t qr2_create_socket( SOCKET *sock, const char *ip,  int * port);

 
 
 

 

qr2_error_t qr2_init_socketA( qr2_t *qrec, SOCKET s, int boundport, const char *gamename, const char *secret_key,
					 int ispublic, int natnegotiate,
					 qr2_serverkeycallback_t server_key_callback,
					 qr2_playerteamkeycallback_t player_key_callback,
					 qr2_playerteamkeycallback_t team_key_callback,
					 qr2_keylistcallback_t key_list_callback,
					 qr2_countcallback_t playerteam_count_callback,
					 qr2_adderrorcallback_t adderror_callback,
					 void *userdata)
{
	char hostname[64];
	int ret;
	int i;
	qr2_t cr;

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_init_socket()\r\n");

	if (qrec == NULL)
	{
		cr = &static_qr2_rec;		
	}
	else
	{
		*qrec = (qr2_t)gsimalloc(sizeof(struct qr2_implementation_s));
		cr = *qrec;
	}
	srand((unsigned int)current_time());
	strcpy(cr->gamename,gamename);
	strcpy(cr->secret_key,secret_key);
	cr->qport = boundport;
	cr->lastheartbeat = 0;
	cr->lastka = 0;
	cr->hbsock = s;
	cr->listed_state = 1;
	cr->udata = userdata;
	cr->server_key_callback = server_key_callback;
	cr->player_key_callback = player_key_callback;
	cr->team_key_callback = team_key_callback;
	cr->key_list_callback = key_list_callback;
	cr->playerteam_count_callback = playerteam_count_callback;
	cr->adderror_callback = adderror_callback;
	cr->nn_callback = NULL;
	cr->cm_callback = NULL;
	cr->cdkeyprocess = NULL;
	cr->ispublic = ispublic;
	cr->read_socket = 0;
	cr->nat_negotiate = natnegotiate;
	cr->publicip = 0;
	cr->publicport = 0;
	cr->pa_callback = NULL;
	cr->cc_callback = NULL;
	cr->userstatechangerequested = 0;
	cr->backendoptions = 0;

	for (i = 0 ; i < REQUEST_KEY_LEN ; i++)
		cr->instance_key[i] = (char)(rand() % 0xFF);
	for (i = 0 ; i < RECENT_CLIENT_MESSAGES_TO_TRACK ; i++)
		cr->client_message_keys[i] = -1;
	cr->cur_message_key = 0;

	memset(cr->ipverify, 0, sizeof(cr->ipverify));
	
	
	enum_local_ips();

	if (ispublic)
	{
		int override = qr2_hostname[0];
		if(!override)
			sprintf(hostname, "%s.master." GSI_DOMAIN_NAME, gamename);
		ret = get_sockaddrin(override?qr2_hostname:hostname, MASTER_PORT, &(cr->hbaddr), NULL);

		if (ret == 1)
		{
			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
				"%s resolved to %s\r\n", override?qr2_hostname:hostname, inet_ntoa(cr->hbaddr.sin_addr));
		}
		else
		{
			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_HotError,
				"Failed on DNS lookup for %s \r\n", override?qr2_hostname:hostname);
		}
	}
	else 
		ret = 1;
	if (!ret)
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_HotError,
			"qr2_init_socket() returned failed (DNS error)\r\n");
		return e_qrdnserror;
	}
	else
	{
		return e_qrnoerror;
	}


}

qr2_error_t qr2_init_socketW( qr2_t *qrec, SOCKET s, int boundport, const unsigned short *gamename, const unsigned short *secret_key,
					 int ispublic, int natnegotiate,
					 qr2_serverkeycallback_t server_key_callback,
					 qr2_playerteamkeycallback_t player_key_callback,
					 qr2_playerteamkeycallback_t team_key_callback,
					 qr2_keylistcallback_t key_list_callback,
					 qr2_countcallback_t playerteam_count_callback,
					 qr2_adderrorcallback_t adderror_callback,
					 void *userdata)
{
	char gamename_A[255];
	char secretkey_A[255];

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_init_socketW()\r\n");

	UCS2ToAsciiString(gamename, gamename_A);
	UCS2ToAsciiString(secret_key, secretkey_A);

	return qr2_init_socketA(qrec, s, boundport, gamename_A, secretkey_A, ispublic, natnegotiate,
							server_key_callback, player_key_callback, team_key_callback,
							key_list_callback, playerteam_count_callback, adderror_callback, userdata);
}

qr2_error_t qr2_create_socket( SOCKET *sock, const char *ip,  int * port)
{
	struct sockaddr_in saddr;	
	SOCKET hbsock;
	int maxport;
	int lasterror = 0;
	int baseport = *port;

#if defined(_LINUX)
	unsigned int saddrlen;
#else
	int saddrlen;
#endif

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_create_socket()\r\n");

	SocketStartUp();
	
	hbsock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	if (INVALID_SOCKET == hbsock)
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_HotError,
			"Failed to create heartbeat socket\r\n");
		return e_qrwsockerror;
	}
	
	maxport = baseport + NUM_PORTS_TO_TRY;
	while (baseport < maxport)
	{
		get_sockaddrin(ip,baseport,&saddr,NULL);
		if (saddr.sin_addr.s_addr == htonl(0x7F000001)) 
			saddr.sin_addr.s_addr = INADDR_ANY;
		
		lasterror = bind(hbsock, (struct sockaddr *)&saddr, sizeof(saddr));
		if (lasterror == 0)
			break; 
		baseport++;
	}
	
	if (lasterror != 0) 
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_HotError,
			"Failed to bind() query socket\r\n");
		return e_qrbinderror;
	}
	
	if (baseport == 0) 
	{
		saddrlen = sizeof(saddr);

		lasterror = getsockname(hbsock,(struct sockaddr *)&saddr, &saddrlen);

		if (lasterror)
		{
			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_HotError,
				"Query socket bind() success, but getsockname() failed\r\n");
			return e_qrbinderror;
		}
		baseport = (unsigned short)((unsigned short)(saddr.sin_port << 8) | (unsigned short)(saddr.sin_port >> 8));
	}

	*sock = hbsock;
	*port = baseport;

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
		"Query socket created and bound to port %d\r\n", *port);

	return e_qrnoerror;
}

qr2_error_t qr2_initA( qr2_t *qrec, const char *ip, int baseport, const char *gamename, const char *secret_key,
					 int ispublic, int natnegotiate,
					 qr2_serverkeycallback_t server_key_callback,
					 qr2_playerteamkeycallback_t player_key_callback,
					 qr2_playerteamkeycallback_t team_key_callback,
					 qr2_keylistcallback_t key_list_callback,
					 qr2_countcallback_t playerteam_count_callback,
					 qr2_adderrorcallback_t adderror_callback,
					 void *userdata)
{
	SOCKET hbsock;
	qr2_error_t ret;

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_init()\r\n");

	ret = qr2_create_socket(&hbsock, ip, &baseport);
	if(ret != e_qrnoerror)
	{
		SocketShutDown();
		return ret;
	}

	ret = qr2_init_socketA(qrec, hbsock, baseport, gamename, secret_key, ispublic, natnegotiate, server_key_callback, player_key_callback, team_key_callback, key_list_callback, playerteam_count_callback, adderror_callback,  userdata);
	if (qrec == NULL)
		qrec = &current_rec;
	(*qrec)->read_socket = 1;
	
	return ret;
}

qr2_error_t qr2_initW( qr2_t *qrec, const unsigned short *ip, int baseport, const unsigned short *gamename, const unsigned short *secret_key,
					 int ispublic, int natnegotiate,
					 qr2_serverkeycallback_t server_key_callback,
					 qr2_playerteamkeycallback_t player_key_callback,
					 qr2_playerteamkeycallback_t team_key_callback,
					 qr2_keylistcallback_t key_list_callback,
					 qr2_countcallback_t playerteam_count_callback,
					 qr2_adderrorcallback_t adderror_callback,
					 void *userdata)
{
	char ip_A[255];
	char gamename_A[255];
	char secretkey_A[255];

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_initW()\r\n");

	if (ip != NULL) 
		UCS2ToAsciiString(ip, ip_A);
	UCS2ToAsciiString(gamename, gamename_A);
	UCS2ToAsciiString(secret_key, secretkey_A);

	return qr2_initA(qrec, (ip!=NULL)?ip_A:NULL, baseport, gamename_A, secretkey_A, ispublic, natnegotiate, server_key_callback, player_key_callback, team_key_callback, key_list_callback, playerteam_count_callback, adderror_callback,  userdata);
}

void qr2_register_natneg_callback(qr2_t qrec, qr2_natnegcallback_t nncallback)
{
	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_register_natneg_callback()\r\n");

	if (qrec == NULL)
		qrec = current_rec;
	qrec->nn_callback = nncallback;

}
void qr2_register_clientmessage_callback(qr2_t qrec, qr2_clientmessagecallback_t cmcallback)
{
	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_register_clientmessage_callback()\r\n");

	if (qrec == NULL)
		qrec = current_rec;
	qrec->cm_callback = cmcallback;
}
void qr2_register_publicaddress_callback(qr2_t qrec, qr2_publicaddresscallback_t pacallback)
{
	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_register_publicaddress_callback()\r\n");

	if (qrec == NULL)
		qrec = current_rec;
	qrec->pa_callback = pacallback;
}
void qr2_register_clientconnected_callback(qr2_t qrec, qr2_clientconnectedcallback_t cccallback)
{
	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_register_clientconnected_callback()\r\n");

	if (qrec == NULL)
		qrec = current_rec;
	qrec->cc_callback = cccallback;
}

void qr2_register_denyresponsetoip_callback(qr2_t qrec, qr2_denyqr2responsetoipcallback_t dertoipcallback)
{
	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_register_denyresponsetoip_callback()\r\n");

	if (qrec == NULL)
		qrec = current_rec;
	qrec->denyresp2_ip_callback = dertoipcallback;
}


 

void qr2_think(qr2_t qrec)
{
	if (qrec == NULL)
		qrec = current_rec;
	if (qrec->ispublic)
		qr2_check_send_heartbeat(qrec);
	qr2_check_queries(qrec);
	qr2_expire_ip_verify(qrec);
	NNThink();
}

 
void qr2_check_queries(qr2_t qrec)
{
	static char indata[INBUF_LEN]; 
	struct sockaddr_in saddr;
	int error;

#if defined(_LINUX)
	unsigned int saddrlen = sizeof(struct sockaddr_in);
#else
	int saddrlen = sizeof(struct sockaddr_in);
#endif

	if (!qrec->read_socket)
		return; 

	while(CanReceiveOnSocket(qrec->hbsock))
	{
		
		error = (int)recvfrom(qrec->hbsock, indata, (INBUF_LEN - 1), 0, (struct sockaddr *)&saddr, &saddrlen);
		
		if (gsiSocketIsNotError(error))
		{
			indata[error] = '\0';

			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
				"Received %d bytes on query socket\r\n", error);
			gsDebugBinary(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_RawDump,
				indata, error);

			qr2_parse_queryA(qrec, indata, error, (struct sockaddr *)&saddr);
		}
		else if (error == 0)
		{
			
			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
				"CanReceiveOnSocket() returned true, but recvfrom return 0!\r\n", error);
		}
		else
		{
			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
				"CanReceiveOnSocket() returned true, but recvfrom failed!\r\n", error);
		}
	}
}

 

void qr2_check_send_heartbeat(qr2_t qrec)
{
	gsi_time tc = current_time();

	if (INVALID_SOCKET == qrec->hbsock)
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_WarmError,
			"HBSock is invalid\r\n");
		return; 
	}

	
	if (qrec->listed_state > 0 && tc - qrec->lastheartbeat > FIRST_HB_TIME) 
	{ 
		if (qrec->listed_state >= MAX_FIRST_COUNT)
		{
			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_HotError,
				"No response from master, generating NoChallengeResponse error\r\n");

			qrec->listed_state = 0; 
#ifndef GSI_UNICODE
			qrec->adderror_callback(e_qrnochallengeerror, "No challenge value was received from the master server.", qrec->udata);
#else
			qrec->adderror_callback(e_qrnochallengeerror, L"No challenge value was received from the master server.", qrec->udata);
#endif
			return;
		} else
		{
			send_heartbeat(qrec, 3);
			qrec->listed_state++;
		}
	}
	else if (qrec->userstatechangerequested && (tc - qrec->lastheartbeat > MIN_STATECHANGED_HB_TIME))
		send_heartbeat(qrec,1);  
	else if (tc - qrec->lastheartbeat > HB_TIME || qrec->lastheartbeat == 0 || tc < qrec->lastheartbeat)
		send_heartbeat(qrec,0);  
	
	if (current_time() - qrec->lastka > KA_TIME) 
		send_keepalive(qrec);
}

 

void qr2_send_statechanged(qr2_t qrec)
{
	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_StackTrace,
		"qr2_send_statechanged()\r\n");

	if (qrec == NULL)
		qrec = current_rec;
	if (!qrec->ispublic)
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_Warning,
			"Requested send statechange for LAN game, discarding\r\n");
		return;
	}
	if (current_time() - qrec->lastheartbeat < MIN_STATECHANGED_HB_TIME)
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_Notice,
			"Queing statechange for later send (too soon)\r\n");

		
		qrec->userstatechangerequested = 1;
		return;  
	}

	send_heartbeat(qrec, 1);
	qrec->userstatechangerequested = 0; 
}


 
void qr2_shutdown(qr2_t qrec)
{
	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_StackTrace,
		"qr2_shutdown()\r\n");

	if (qrec == NULL)
		qrec = current_rec;
	if (qrec->ispublic)
		send_heartbeat(qrec, 2);
	if (INVALID_SOCKET != qrec->hbsock && qrec->read_socket) 
	{
		closesocket(qrec->hbsock);
	}
	qrec->hbsock = INVALID_SOCKET;
	qrec->lastheartbeat = 0;
	if(qrec->read_socket) 
	{
		SocketShutDown();
	}
	if (qrec != &static_qr2_rec) 
	{
		gsifree(qrec);
	}

    
    NNFreeNegotiateList(); 

	
	

	
	
}


gsi_bool qr2_keybuffer_add(qr2_keybuffer_t keybuffer, int keyid)
{
	
	if (keybuffer->numkeys >= MAX_REGISTERED_KEYS)
		return gsi_false;
	if (keyid < 1 || keyid > MAX_REGISTERED_KEYS)
		return gsi_false;

	keybuffer->keys[keybuffer->numkeys++] = (uchar)keyid;
	return gsi_true;
}

gsi_bool qr2_buffer_add_int(qr2_buffer_t outbuf, int value)
{
	char temp[20];
	sprintf(temp, "%d", value);
	return qr2_buffer_addA(outbuf, temp);
}

gsi_bool qr2_buffer_addA(qr2_buffer_t outbuf, const char *value)
{
	GS_ASSERT(outbuf)
	GS_ASSERT(value)
	{
		int copylen;
		copylen = (int)strlen(value) + 1;
		if (copylen > AVAILABLE_BUFFER_LEN(outbuf))
			copylen = AVAILABLE_BUFFER_LEN(outbuf); 
		if (copylen <= 0)
			return gsi_false; 
		memcpy(outbuf->buffer + outbuf->len, value, (unsigned int)copylen);
		outbuf->len += copylen;
		outbuf->buffer[outbuf->len - 1] = 0; 
		return gsi_true;
	}
}
#if defined(GSI_UNICODE)
gsi_bool qr2_buffer_addW(qr2_buffer_t outbuf, const unsigned short *value)
{
	char value_A[4096];
	UCS2ToUTF8String(value, value_A);
	return qr2_buffer_addA(outbuf, value_A);
}
#endif


static void enum_local_ips()
{
	struct hostent *phost;
	phost = getlocalhost();
	if (phost == NULL)
		return;
	for (num_local_ips = 0 ; num_local_ips < MAX_LOCAL_IP ; num_local_ips++)
	{
		if (phost->h_addr_list[num_local_ips] == 0)
			break;
		memcpy(&local_ip_list[num_local_ips], phost->h_addr_list[num_local_ips], sizeof(struct in_addr));
	}
}

 


 

static int get_sockaddrin(const char *host, int port, struct sockaddr_in *saddr, struct hostent **savehent)
{
	struct hostent *hent = NULL;

	saddr->sin_family = AF_INET;
	saddr->sin_port = htons((unsigned short)port);
	if (host == NULL)
		saddr->sin_addr.s_addr = INADDR_ANY;
	else
		saddr->sin_addr.s_addr = inet_addr(host);
	
	if (saddr->sin_addr.s_addr == INADDR_NONE && strcmp(host,"255.255.255.255") != 0)
	{
		hent = gethostbyname(host);
		if (!hent)
			return 0;
		saddr->sin_addr.s_addr = *(unsigned int *)hent->h_addr_list[0];
	}
	if (savehent != NULL)
		*savehent = hent;
	return 1;

} 



 
 

static void swap_byte ( uchar *a, uchar *b )
{
	uchar swapByte; 
	
	swapByte = *a; 
	*a = *b;      
	*b = swapByte;
}

static uchar encode_ct ( uchar c )
{
	if (c <  26) return (uchar)('A'+c);
	if (c <  52) return (uchar)('a'+c-26);
	if (c <  62) return (uchar)('0'+c-52);
	if (c == 62) return (uchar)('+');
	if (c == 63) return (uchar)('/');
	
	return 0;
}

static void gs_encode ( uchar *ins, int size, uchar *result )
{
	int    i,pos;
	uchar  trip[3];
	uchar  kwart[4];
	
	i=0;
	while (i < size)
	{
		for (pos=0 ; pos <= 2 ; pos++, i++)
			if (i < size) trip[pos] = *ins++;
			else trip[pos] = '\0';
			kwart[0] = (unsigned char)(  (trip[0])       >> 2);
			kwart[1] = (unsigned char)((((trip[0]) &  3) << 4) + ((trip[1]) >> 4));
			kwart[2] = (unsigned char)((((trip[1]) & 15) << 2) + ((trip[2]) >> 6));
			kwart[3] = (unsigned char)(  (trip[2]) & 63);
			for (pos=0; pos <= 3; pos++) *result++ = encode_ct(kwart[pos]);
	}
	*result='\0';
}

static void gs_encrypt ( uchar *key, int key_len, uchar *buffer_ptr, int buffer_len )
{ 
	short counter;     
	uchar x, y, xorIndex;
	uchar state[256];       
	
	for ( counter = 0; counter < 256; counter++) state[counter] = (uchar) counter;
	
	x = 0; y = 0;
	for ( counter = 0; counter < 256; counter++)
	{
		y = (uchar)((key[x] + state[counter] + y) % 256);
		x = (uchar)((x + 1) % key_len);
		swap_byte ( &state[counter], &state[y] );
	}
	
	x = 0; y = 0;
	for ( counter = 0; counter < buffer_len; counter ++)
	{
		x = (uchar)((x + buffer_ptr[counter] + 1) % 256);
		y = (uchar)((state[x] + y) % 256);
		swap_byte ( &state[x], &state[y] );
		xorIndex = (uchar)((state[x] + state[y]) % 256);
		buffer_ptr[counter] ^= state[xorIndex];
	}
}

 
 

static void NatNegProgressCallback(NegotiateState state, void *userdata)
{
	
	GSI_UNUSED(state);
	GSI_UNUSED(userdata);
}

static void NatNegCompletedCallback(NegotiateResult result, SOCKET gamesocket, struct sockaddr_in *remoteaddr, void *userdata)
{
	qr2_t qrec = (qr2_t)userdata;

	if(qrec->cc_callback)
	{
		if(result == nr_success)
		{
			qrec->cc_callback(gamesocket, remoteaddr, qrec->udata);
		}
	}
}

 


static void qr_add_packet_header(qr2_buffer_t buf, char ptype, char *reqkey)
{
	buf->buffer[0] = ptype;
	memcpy(buf->buffer + 1, reqkey, REQUEST_KEY_LEN);
	buf->len = REQUEST_KEY_LEN  + 1;
}

#define MAX_CHALLENGE 64
static void compute_challenge_response(qr2_t qrec, qr2_buffer_t buf, char *challenge, int challengelen)
{
	char encrypted_val[MAX_CHALLENGE + 1]; 
	
	if(challengelen < 1)
		return; 
	if (challengelen > (MAX_CHALLENGE + 1))
		return; 
	if (challenge[challengelen - 1] != 0)
		return; 
	
	strcpy(encrypted_val, challenge);
	gs_encrypt((uchar *)qrec->secret_key, (int)strlen(qrec->secret_key), (uchar *)encrypted_val, challengelen - 1);
	gs_encode((uchar *)encrypted_val,challengelen - 1, (uchar *)(buf->buffer + buf->len));
	buf->len += (int)strlen(buf->buffer + buf->len) + 1;
	
}

static void handle_public_address(qr2_t qrec, char * buffer)
{
	unsigned int ip;
	unsigned int portTemp;
	unsigned short port;

	
	sscanf(buffer, "%08X%04X", &ip, &portTemp);
	port = (unsigned short)portTemp;
	ip = htonl(ip);

	
	if((ip == 0) || (port == 0))
		return;

#ifdef GSI_COMMON_DEBUG
	{
		IN_ADDR addr;
		addr.s_addr = ip;
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Received public address (%s:%d)\r\n", inet_ntoa(addr), port);
	}
#endif

	
	if((qrec->publicip != ip) || (qrec->publicport != port))
	{
		qrec->publicip = ip;
		qrec->publicport = port;
		qrec->pa_callback(ip, port, qrec->udata);
	}
}

static void qr_build_partial_query_reply(qr2_t qrec, qr2_buffer_t buf, qr2_key_type keytype, int keycount, uchar *keys)
{
	struct qr2_keybuffer_s kb;
	int playerteamcount;
	unsigned short cttemp;
	int i;
	int pindex;
	const char *k;
	int len;

	kb.numkeys = 0;
	if (keycount == 0)
		return; 
	
	if (keytype == key_player || keytype == key_team) 
	{
		if (AVAILABLE_BUFFER_LEN(buf) < sizeof(cttemp))
			return; 
		playerteamcount = qrec->playerteam_count_callback(keytype, qrec->udata);
		cttemp = htons((unsigned short)playerteamcount);
		memcpy(buf->buffer + buf->len, &cttemp, sizeof(cttemp));
		buf->len += sizeof(cttemp);
	} else
		playerteamcount = 1;

	if (keycount == 0xFF) 
	{
		qrec->key_list_callback(keytype, &kb, qrec->udata);
		
		for (i = 0 ; i < kb.numkeys ; i++)
		{
			k = qr2_registered_key_list[kb.keys[i]];
			if (k == NULL)
				k = "unknown";
			qr2_buffer_addA(buf, k);
			if (keytype == key_server) 
			{
				len = buf->len;
				qrec->server_key_callback(kb.keys[i], buf, qrec->udata);
				if(len == buf->len)
					qr2_buffer_addA(buf, "");
			}
		}
		
		if (AVAILABLE_BUFFER_LEN(buf) < 1)
			return; 
		buf->buffer[buf->len++] = 0;
		keycount = kb.numkeys;
		keys = kb.keys;
		if (keytype == key_server)
			return;	
	}
	for (pindex = 0 ; pindex < playerteamcount ; pindex++)
	{
		for (i = 0 ; i < keycount ; i++)
		{
			len = buf->len;
			if (keytype == key_server) 
				qrec->server_key_callback(keys[i], buf, qrec->udata);
			else if (keytype == key_player)
				qrec->player_key_callback(keys[i], pindex, buf, qrec->udata);
			else if (keytype == key_team)
				qrec->team_key_callback(keys[i], pindex, buf, qrec->udata);
			if(len == buf->len)
				qr2_buffer_addA(buf, "");
		}
	}		
}

static void qr_build_query_reply(qr2_t qrec, qr2_buffer_t buf, int serverkeycount, uchar *serverkeys, int playerkeycount, uchar *playerkeys, int teamkeycount, uchar *teamkeys)
{
	qr_build_partial_query_reply(qrec, buf, key_server, serverkeycount, serverkeys);
	qr_build_partial_query_reply(qrec, buf, key_player, playerkeycount, playerkeys);
	qr_build_partial_query_reply(qrec, buf, key_team, teamkeycount, teamkeys);
}


struct QRSplitQueryProgress
{
	qr2_key_type mCurKeyType;
	int mCurPacketNum;
	int mCurKeyIndex;		
	int mCurSubCount;       
	int mCurSubIndex;		
	struct qr2_keybuffer_s mKeyBuffer; 
};





static gsi_bool qr_build_split_query_reply(qr2_t qrec, qr2_buffer_t buf, struct QRSplitQueryProgress* progress)
{
	unsigned char* packetNumPos = NULL; 

	
	
	
	if (progress->mCurKeyType >= key_type_count)
		return gsi_false; 

	
	
	if (AVAILABLE_BUFFER_LEN(buf) < 32)
		return gsi_false; 

	
	qr2_buffer_addA(buf, "splitnum");
	packetNumPos = (unsigned char*)&buf->buffer[buf->len++];
	*packetNumPos = (gsi_u8)progress->mCurPacketNum++;

	
	while (progress->mCurKeyType < key_type_count)
	{
		
		if (progress->mKeyBuffer.numkeys == 0)
			qrec->key_list_callback(progress->mCurKeyType, &progress->mKeyBuffer, qrec->udata);

		
		if (progress->mCurSubCount == 0 && progress->mCurKeyType != key_server)
			progress->mCurSubCount = qrec->playerteam_count_callback(progress->mCurKeyType, qrec->udata);

		
		if (AVAILABLE_BUFFER_LEN(buf) < 100)
			return gsi_true; 

		
		buf->buffer[buf->len++] = (char)progress->mCurKeyType;

		
		while(progress->mCurKeyIndex < progress->mKeyBuffer.numkeys)
		{
			
			int aRegisteredKeyIndex = progress->mKeyBuffer.keys[progress->mCurKeyIndex];
			const char* aKeyName = qr2_registered_key_list[aRegisteredKeyIndex];

			
			if (gsi_is_false( qr2_buffer_addA(buf,aKeyName) ))
				return gsi_true; 

			if (progress->mCurKeyType == key_server)
			{
				
				qrec->server_key_callback(aRegisteredKeyIndex, buf, qrec->udata);

				
				if (AVAILABLE_BUFFER_LEN(buf) < 1)
					return gsi_true; 
			}
			else
			{
				if (AVAILABLE_BUFFER_LEN(buf) < 1)
					return gsi_true; 

				
				
				buf->buffer[buf->len++] = (char)progress->mCurSubIndex;

				
				while(progress->mCurSubIndex < progress->mCurSubCount)
				{
					
					if (progress->mCurKeyType == key_player)
						qrec->player_key_callback(aRegisteredKeyIndex, progress->mCurSubIndex, buf, qrec->udata);
					else if (progress->mCurKeyType == key_team)
						qrec->team_key_callback(aRegisteredKeyIndex, progress->mCurSubIndex, buf, qrec->udata);

					
					if (AVAILABLE_BUFFER_LEN(buf) < 1)
						return gsi_true; 
				
					
					progress->mCurSubIndex++;
				}
				
				if (AVAILABLE_BUFFER_LEN(buf) > 0)
					buf->buffer[buf->len++] = '\0';
			}
			
			progress->mCurKeyIndex++;
			progress->mCurSubIndex = 0;
		}

		
		if (AVAILABLE_BUFFER_LEN(buf) > 0)
			buf->buffer[buf->len++] = '\0';

		
		progress->mCurKeyType = (qr2_key_type)(progress->mCurKeyType + 1);
		progress->mCurKeyIndex = 0;
		progress->mCurSubCount = 0;
		progress->mCurSubIndex = 0;
		progress->mKeyBuffer.numkeys = 0;
	}

	
	*packetNumPos |= QR2_SPLITNUM_FINALFLAG;
	return gsi_true; 
}

static void qr_process_query(qr2_t qrec, qr2_buffer_t buf, uchar *qdata, int len, struct sockaddr* sender)
{
	uchar serverkeycount;
	uchar playerkeycount;
	uchar teamkeycount;
	uchar exflags = 0;

	uchar *serverkeys = NULL;
	uchar *playerkeys = NULL;
	uchar *teamkeys = NULL;
	if (len < 3)
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_WarmError,
			"Discarding invalid query (too short#1: %d bytes total)\r\n", len);
		return; 
	}
	serverkeycount = qdata[0];
	qdata++;
	len--;
	if (serverkeycount != 0 && serverkeycount != 0xFF)
	{
		serverkeys = qdata;
		qdata += serverkeycount;
		len -= serverkeycount;
	}
	if (len < 2)
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_WarmError,
			"Discarding invalid query (too short#2: %d bytes remain)\r\n", len);
		return; 
	}
	playerkeycount = qdata[0];
	qdata++;
	len--;
	if (playerkeycount != 0 && playerkeycount != 0xFF)
	{
		playerkeys = qdata;
		qdata += playerkeycount;
		len -= playerkeycount;
	}
	if (len < 1)
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_WarmError,
			"Discarding invalid query (too short#3: %d bytes remain)\r\n", len);
		return; 
	}
	teamkeycount = qdata[0];
	qdata++;
	len--;
	if (teamkeycount != 0 && teamkeycount != 0xFF)
	{
		teamkeys = qdata;
		qdata += teamkeycount;
		len -= teamkeycount;
	}
	if (len < 0)
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_WarmError,
			"Discarding invalid query (too short#4: %d bytes remain)\r\n", len);
		return; 
	}

	
	if (len > 0)
	{
		exflags = qdata[0];
		len--;
	}
	
	
	if ((exflags & QR2_EXFLAG_SPLIT)==QR2_EXFLAG_SPLIT)
	{
		struct QRSplitQueryProgress progress;
		progress.mCurPacketNum = 0;
		progress.mCurKeyType = key_server;
		progress.mCurKeyIndex = 0;
		progress.mCurSubCount = 0;
		progress.mCurSubIndex = 0;
		progress.mKeyBuffer.numkeys = 0;
			
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
			"Building query reply (split packet supported)\r\n");

		
		while (gsi_true == qr_build_split_query_reply(qrec, buf, &progress))
		{
			sendto(qrec->hbsock, buf->buffer, buf->len, 0, sender, sizeof(struct sockaddr_in));
			buf->len = 5; 
			if (progress.mCurPacketNum > QR2_SPLITNUM_MAX)
				return; 
		}

		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
				"Finished split query reply (%d packets)\r\n", progress.mCurPacketNum);
	}
	else
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
			"Building query reply (single packet)\r\n");
		qr_build_query_reply(qrec, buf, serverkeycount, serverkeys, playerkeycount, playerkeys, teamkeycount, teamkeys);
		sendto(qrec->hbsock, buf->buffer, buf->len, 0, sender, sizeof(struct sockaddr_in));
	}

	GSI_UNUSED(sender);
}

 

























































 














static void qr_process_client_message(qr2_t qrec, char *buf, int len)
{
	unsigned char natNegBytes[NATNEG_MAGIC_LEN] = {NN_MAGIC_0,NN_MAGIC_1,NN_MAGIC_2,NN_MAGIC_3,NN_MAGIC_4,NN_MAGIC_5};
	int i;
	int isnatneg = 1;

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_Notice,
		"Processing client message\r\n");

	
	if (len >= NATNEG_MAGIC_LEN + 4)
	{
		for (i = 0 ; i < NATNEG_MAGIC_LEN ; i++)
			if ((unsigned char)buf[i] != natNegBytes[i])
			{
				isnatneg = 0;
				break;
			}
	} else
		isnatneg = 0;
	if (isnatneg)
	{
		int cookie;
		memcpy(&cookie, buf + NATNEG_MAGIC_LEN, 4);
		cookie = (int)ntohl((unsigned int)cookie);

		
		if(qrec->cc_callback)
		{
			NegotiateError error;

			if(__GSIACResult != GSIACAvailable)
			{
				
				__GSIACResult = GSIACAvailable;
				strcpy(__GSIACGamename, qrec->gamename);
			}

			
			error = NNBeginNegotiationWithSocket(qrec->hbsock, cookie, 1, NatNegProgressCallback, NatNegCompletedCallback, qrec);
			if(error != ne_noerror)
			{
				
			}
		}
		else if (qrec->nn_callback)
		{
			qrec->nn_callback(cookie, qrec->udata); 
		}
	} else
		if (qrec->cm_callback)
		{
#ifndef GSI_UNICODE
			qrec->cm_callback(buf, len, qrec->udata);
#else
			unsigned short* buf_W;
			buf_W = UTF8ToUCS2StringAlloc(buf);
			qrec->cm_callback(buf_W, wcslen(buf_W), qrec->udata);
#endif
		}
}

static int qr_got_recent_message(qr2_t qrec, int msgkey)
{
	int i;
	for (i = 0 ; i < RECENT_CLIENT_MESSAGES_TO_TRACK ; i++)
	{
		if (qrec->client_message_keys[i] == msgkey)
			return 1;
	}
	
	qrec->cur_message_key = (qrec->cur_message_key + 1) % RECENT_CLIENT_MESSAGES_TO_TRACK;
	qrec->client_message_keys[qrec->cur_message_key] = msgkey;
	return 0;
}


static gsi_bool qr2_process_ip_verify(qr2_t qrec, struct qr2_buffer_s* buf, struct sockaddr_in* sender)
{
	int i=0;
	gsi_time now = current_time();
	int firstFreeIndex = -1;
	int numDuplicates = 0;

	
	if ((qrec->backendoptions & QR2_OPTION_USE_QUERY_CHALLENGE) == 0)
	{
		qr2_buffer_add_int(buf, 0);
		return gsi_true;
	}

	
	for (; i < QR2_IPVERIFY_ARRAY_SIZE; i++)
	{
		
		if (firstFreeIndex == -1 && qrec->ipverify[i].addr.sin_addr.s_addr == 0)
			firstFreeIndex = i;
		
		if (qrec->ipverify[i].addr.sin_addr.s_addr == sender->sin_addr.s_addr &&
			qrec->ipverify[i].addr.sin_port == sender->sin_port)
		{
			numDuplicates++;
		}
	}

	
	if (numDuplicates > QR2_IPVERIFY_MAXDUPLICATES)
		return gsi_false;
	if (firstFreeIndex == -1)
		return gsi_false; 

	
	
	qrec->ipverify[firstFreeIndex].addr = *sender;
	qrec->ipverify[firstFreeIndex].challenge = htonl( (rand() << 16) | rand() );
	qrec->ipverify[firstFreeIndex].createtime = now;

	qr2_buffer_add_int(buf, (int)qrec->ipverify[firstFreeIndex].challenge);
	return gsi_true; 
}



static gsi_bool qr2_check_ip_verify(qr2_t qrec, struct sockaddr_in* sender, gsi_u32 ipverify)
{
	int i=0;
	for (; i < QR2_IPVERIFY_ARRAY_SIZE; i++)
	{
		if (qrec->ipverify[i].addr.sin_addr.s_addr == sender->sin_addr.s_addr &&
			qrec->ipverify[i].addr.sin_port == sender->sin_port)
		{
			if (qrec->ipverify[i].challenge == ipverify)
			{
				
				qrec->ipverify[i].addr.sin_addr.s_addr = 0;
				qrec->ipverify[i].addr.sin_port = 0;
				return gsi_true;
			}
			
			
		}
	}
	return gsi_false;
}


static void qr2_expire_ip_verify(qr2_t qrec)
{
	int i=0;
	gsi_time now = current_time();

	for (; i < QR2_IPVERIFY_ARRAY_SIZE; i++)
	{
		if (qrec->ipverify[i].addr.sin_addr.s_addr != 0 && (now - qrec->ipverify[i].createtime > QR2_IPVERIFY_TIMEOUT))
			qrec->ipverify[i].addr.sin_addr.s_addr = 0;
	}
}

 
void qr2_parse_queryA(qr2_t qrec, char *query, int len, struct sockaddr *sender)
{
	struct qr2_buffer_s buf;
	char ptype;
	char *reqkey;
	char *pos;
	gsi_u32 ipverify = 0;
	int i;
	
	buf.len = 0;

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_StackTrace,
		"qr2_parse_queryA()\r\n");

	if (qrec == NULL)
		qrec = current_rec;
	if (query[0] == 0x3B)  
	{
		if (qrec->cdkeyprocess != NULL)
		{
			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Notice,
				"Forwarding cdkey query onto cdkey sdk\r\n");
			qrec->cdkeyprocess(query, len, sender);
		}
		else
		{
			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_WarmError,
				"Received cdkey query but not using qr2-cdkey integration!\r\n");
		}
		return;
	}
	 










	if((len >= 6) && (memcmp(query, NNMagicData, NATNEG_MAGIC_LEN) == 0))  
	{
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Forwarding natneg query onto natneg sdk\r\n");
		NNProcessData(query, len, (struct sockaddr_in*)sender);
		return;
	}

	if (len < 7)
		return; 
	
	if ((uchar)query[0] != QR_MAGIC_1 || (uchar)query[1] != QR_MAGIC_2)
		return;


#if defined(SIMULATE_HARD_FIREWALL)
	
	
	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Warning,
			"SIMULATE_HARD_FIREWALL defined, ignoring QR2 packet\r\n");
	return;
#endif


#if defined(SIMULATE_FIREWALL) 
	
	{
		unsigned int aMasterAddr = (cr->hbaddr.sin_addr);
		if (((SOCKADDR_IN*)sender)->sin_addr.s_addr != aMasterAddr)
		{
			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Warning,
				"SIMULATE_FIREWALL defined, ignoring non-master QR2 packet\r\n");
			return;
		}
	}
#endif

		if (qrec->denyresp2_ip_callback)
		{
			unsigned int aMasterAddr = (qrec->hbaddr.sin_addr.s_addr);
			unsigned int senderAddr = ((SOCKADDR_IN*)sender)->sin_addr.s_addr;	
			if ((aMasterAddr & 0xffff) != (senderAddr & 0xffff))				
			{
				int deny_result = 0;
				qrec->denyresp2_ip_callback(qrec->udata, senderAddr, &deny_result);
				if (deny_result)
				{
					gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Warning,
						"QR2_IP_FILTER defined, ignoring QR2 packet from denied ip\r\n");
					return;
				}
			}
		}


	if (qrec->listed_state > 0)
		qrec->listed_state = 0;

	ptype = query[2];
	reqkey = &query[3];
	pos = query + 7;
	len -= 7;

	qr_add_packet_header(&buf, ptype, reqkey);
	switch (ptype)
	{
	case PACKET_PREQUERY_IP_VERIFY:
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Received IP verify challenge request\r\n");
		if (gsi_is_true(qr2_process_ip_verify(qrec, &buf, (struct sockaddr_in*)sender)))
			break; 
		else
			return; 


	case PACKET_QUERY:
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Processing query packet\r\n");

		
		if ((qrec->backendoptions & QR2_OPTION_USE_QUERY_CHALLENGE) == QR2_OPTION_USE_QUERY_CHALLENGE)
		{
			if (len < 4)
				return; 

			ipverify = ntohl(*(gsi_u32*)pos);
			pos += 4;
			len -= 4;

			
			if (gsi_is_false(qr2_check_ip_verify(qrec, (struct sockaddr_in*)sender, ipverify)))
			{
				
				
				return;
			}
		}
		
		
		qr_process_query(qrec, &buf, (uchar *)pos, len, sender);
		return;
	case PACKET_CHALLENGE:
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Processing challenge packet\r\n");

		
		for (i = 0 ; i < REQUEST_KEY_LEN ; i++)
		{
			if (reqkey[i] != qrec->instance_key[i])
				return; 
		}

		
		if (len >= (PUBLIC_ADDR_LEN + 3))
		{
			unsigned int backendoptions;

			
			sscanf(pos + len - (PUBLIC_ADDR_LEN + 3), "%02x", &backendoptions);
			qrec->backendoptions = (gsi_u8)backendoptions;
			
			#ifdef QR2_DEBUG_FORCE_USE_QUERY_CHALLENGE
			qrec->backendoptions = QR2_OPTION_USE_QUERY_CHALLENGE;
			#endif

			gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Misc, GSIDebugLevel_Notice,
				"Received setting options: %d\r\n", qrec->backendoptions);

			if(qrec->pa_callback)
				handle_public_address(qrec, pos + len - (PUBLIC_ADDR_LEN + 1));
			else
			{
				gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Notice,
					"Discarding public address (no callback set)\r\n");
			}
		}
		compute_challenge_response(qrec, &buf, pos, len);
		break;
	case PACKET_ECHO:
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Processing echo packet\r\n");

		
		if (len > 32)
			len = 32; 
		buf.buffer[0] = PACKET_ECHO_RESPONSE;
		memcpy(buf.buffer + buf.len, pos, (size_t)len);
		buf.len += len;
		break;

	case PACKET_ADDERROR:
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_WarmError,
			"Processing adderror packet\r\n");

		if (qrec->listed_state == -1)
			return; 
		
		for (i = 0 ; i < REQUEST_KEY_LEN ; i++)
		{
			if (reqkey[i] != qrec->instance_key[i])
				return; 
		}
		if (len < 2)
			return; 
		qrec->listed_state = -1;
#ifndef GSI_UNICODE
		qrec->adderror_callback((qr2_error_t)*pos, pos + 1, qrec->udata);
#else
		{
			unsigned short* message_W;
			message_W = UTF8ToUCS2StringAlloc(pos+1);
			qrec->adderror_callback((qr2_error_t)*pos, message_W, qrec->udata);
			gsifree(message_W);
		}
#endif
		return; 
	case PACKET_CLIENT_MESSAGE:
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Notice,
			"Processing clientmessage packet\r\n");

		
		for (i = 0 ; i < REQUEST_KEY_LEN ; i++)
		{
			if (reqkey[i] != qrec->instance_key[i])
				return; 
		}
		if (len < 4) 
			return;
		buf.buffer[0] = PACKET_CLIENT_MESSAGE_ACK;
		
		memcpy(buf.buffer + buf.len, pos, (size_t)4);
		buf.len += 4;
		
		memcpy(&i, pos, (size_t)4);
		if (!qr_got_recent_message(qrec, i))
			qr_process_client_message(qrec, pos + 4, len - 4);
		
		break;
	case PACKET_KEEPALIVE:
		gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
			"Processing keepalive packet\r\n");
		return; 
	default:
		return; 

	}
	
	sendto(qrec->hbsock, buf.buffer, buf.len, 0, sender, sizeof(struct sockaddr_in));

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
		"Sent %d bytes as QR2 query response\r\n", buf.len);
	gsDebugBinary(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_RawDump,
		buf.buffer, buf.len);
}

 










 
static void send_keepalive(qr2_t qrec)
{
	struct qr2_buffer_s buf;
	buf.len = 0;
	qr_add_packet_header(&buf, PACKET_KEEPALIVE, qrec->instance_key);
	sendto(qrec->hbsock, buf.buffer, buf.len, 0, (struct sockaddr *)&(qrec->hbaddr), sizeof(struct sockaddr_in));

	
	qrec->lastka = current_time();

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
		"Sent keepalive to master\r\n", buf);
}

 

static void send_heartbeat(qr2_t qrec, int statechanged)
{
	struct qr2_buffer_s buf;
	
	int i;
	char ipkey[20];

	buf.len = 0;
	qr_add_packet_header(&buf, PACKET_HEARTBEAT, qrec->instance_key);
	
	for (i = 0 ; i < num_local_ips ; i++)
	{
		sprintf(ipkey, "localip%d", i);
		qr2_buffer_addA(&buf, ipkey);
		qr2_buffer_addA(&buf, inet_ntoa(local_ip_list[i]));
	}
	qr2_buffer_addA(&buf, "localport");
	qr2_buffer_add_int(&buf, qrec->qport);
	qr2_buffer_addA(&buf, "natneg");
	qr2_buffer_addA(&buf, qrec->nat_negotiate ? "1" : "0");
	if(statechanged)
	{
		qr2_buffer_addA(&buf, "statechanged");
		qr2_buffer_add_int(&buf, statechanged);
	}
	qr2_buffer_addA(&buf, "gamename");
	qr2_buffer_addA(&buf, qrec->gamename);
	if(qrec->pa_callback)
	{
		qr2_buffer_addA(&buf, "publicip");
		qr2_buffer_add_int(&buf, (int)qrec->publicip);
		qr2_buffer_addA(&buf, "publicport");
		qr2_buffer_add_int(&buf, qrec->publicport);
	}
	
	
	if (statechanged != 2) 
	{
		
		
		
		struct qr2_buffer_s temp;
		memcpy(temp.buffer, buf.buffer, (size_t)buf.len);
		temp.len = buf.len;
		qr_build_query_reply(qrec, &temp, 0xFF, NULL, 0xFF, NULL, 0xFF, NULL);

		
		if(AVAILABLE_BUFFER_LEN(&temp) < 1)
		{
			temp.len = buf.len;
			qr_build_query_reply(qrec, &temp, 0xFF, NULL, 0, NULL, 0, NULL);
		}
		
		memcpy(buf.buffer, temp.buffer, (size_t)temp.len);
		buf.len = temp.len;
	}	
	else
	{
		
		
		if (AVAILABLE_BUFFER_LEN(&buf) >= 1)
			buf.buffer[buf.len++] = 0;
	}

	
	sendto(qrec->hbsock, buf.buffer, buf.len, 0, (struct sockaddr *)&(qrec->hbaddr), sizeof(struct sockaddr_in));

	
	qrec->lastka = qrec->lastheartbeat = current_time();

	
	if (statechanged != 0)
		qrec->userstatechangerequested = 0;

	gsDebugFormat(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_Comment,
		"Sent heartbeat to master (size %d)\r\n", buf.len);
	gsDebugBinary(GSIDebugCat_QR2, GSIDebugType_Network, GSIDebugLevel_RawDump,
		buf.buffer, buf.len);
}

#ifdef __cplusplus
}
#endif



