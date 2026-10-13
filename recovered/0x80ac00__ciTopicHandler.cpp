// FUNCTION: BF2 0x80ac00
// upstream Chat/chatHandlers.c ciTopicHandler
#define _LINUX
#define _UNIX
 









 


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
 









#ifndef _CHATMAIN_H_
#define _CHATMAIN_H_

 


 









#ifndef _CHAT_H_
#define _CHAT_H_





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





#ifdef __cplusplus
extern "C" {
#endif

 




#define CHAT_MESSAGE        0
#define CHAT_ACTION         1
#define CHAT_NOTICE         2
#define CHAT_UTM            3
#define CHAT_ATM            4





#define CHAT_NORMAL         0
#define CHAT_VOICE          1
#define CHAT_OP             2



#define CHAT_LEFT           0  
#define CHAT_QUIT           1  
#define CHAT_KICKED         2  
#define CHAT_KILLED         3  



#define CHAT_NICK_OK                0
#define CHAT_IN_USE                 1
#define CHAT_INVALID                2
#define CHAT_UNIQUENICK_EXPIRED     3
#define CHAT_NO_UNIQUENICK          4
#define CHAT_INVALID_UNIQUENICK     5
#define CHAT_NICK_TOO_LONG          6



#define CHAT_DISCONNECTED           0
#define CHAT_NICK_ERROR             1
#define CHAT_LOGIN_FAILED           2

 




typedef enum { CHATFalse, CHATTrue } CHATBool;



typedef void * CHAT;



typedef struct CHATChannelMode
{
	CHATBool InviteOnly;
	CHATBool Private;
	CHATBool Secret;
	CHATBool Moderated;
	CHATBool NoExternalMessages;
	CHATBool OnlyOpsChangeTopic;
	CHATBool OpsObeyChannelLimit;
	int Limit;
} CHATChannelMode;




typedef enum
{
	CHATEnterSuccess,        
	CHATBadChannelName,      
	CHATChannelIsFull,       
	CHATInviteOnlyChannel,   
	CHATBannedFromChannel,   
	CHATBadChannelPassword,  
	CHATTooManyChannels,     
	CHATEnterTimedOut,       
	CHATBadChannelMask       
} CHATEnterResult;




#ifndef GSI_UNICODE
#define chatConnect					chatConnectA
#define chatConnectSpecial			chatConnectSpecialA
#define chatConnectSecure			chatConnectSecureA
#define chatConnectLogin			chatConnectLoginA
#define chatConnectPreAuth			chatConnectPreAuthA
#define chatRetryWithNick			chatRetryWithNickA
#define chatRegisterUniqueNick		chatRegisterUniqueNickA
#define chatSendRaw					chatSendRawA
#define chatChangeNick				chatChangeNickA
#define chatFixNick					chatFixNickA
#define chatTranslateNick			chatTranslateNickA
#define chatAuthenticateCDKey		chatAuthenticateCDKeyA
#define chatEnumChannels			chatEnumChannelsA
#define chatEnterChannel			chatEnterChannelA
#define chatLeaveChannel			chatLeaveChannelA
#define chatSendChannelMessage		chatSendChannelMessageA
#define chatSetChannelTopic			chatSetChannelTopicA
#define chatGetChannelTopic			chatGetChannelTopicA
#define chatSetChannelMode			chatSetChannelModeA
#define chatGetChannelMode			chatGetChannelModeA
#define chatSetChannelPassword		chatSetChannelPasswordA	
#define chatGetChannelPassword		chatGetChannelPasswordA		
#define chatSetChannelLimit			chatSetChannelLimitA	
#define chatEnumChannelBans			chatEnumChannelBansA
#define chatAddChannelBan			chatAddChannelBanA
#define chatRemoveChannelBan		chatRemoveChannelBanA
#define chatSetChannelGroup			chatSetChannelGroupA
#define chatGetChannelNumUsers		chatGetChannelNumUsersA
#define chatInChannel				chatInChannelA
#define chatEnumUsers				chatEnumUsersA
#define chatSendUserMessage			chatSendUserMessageA
#define chatGetUserInfo				chatGetUserInfoA
#define chatGetBasicUserInfo		chatGetBasicUserInfoA
#define chatGetBasicUserInfoNoWait	chatGetBasicUserInfoNoWaitA
#define chatGetChannelBasicUserInfo	chatGetChannelBasicUserInfoA
#define chatInviteUser				chatInviteUserA
#define chatKickUser				chatKickUserA
#define chatBanUser					chatBanUserA
#define chatSetUserMode				chatSetUserModeA
#define chatGetUserMode				chatGetUserModeA
#define chatGetUserModeNoWait		chatGetUserModeNoWaitA
#define chatSetGlobalKeys			chatSetGlobalKeysA
#define chatSetChannelKeys			chatSetChannelKeysA
#define chatGetGlobalKeys			chatGetGlobalKeysA
#define chatGetChannelKeys			chatGetChannelKeysA
#define chatGetNick					chatGetNickA
#define chatGetUdpRelay				chatGetUdpRelayA
#else
#define chatConnect					chatConnectW
#define chatConnectSpecial			chatConnectSpecialW
#define chatConnectSecure			chatConnectSecureW
#define chatConnectLogin			chatConnectLoginW
#define chatConnectPreAuth			chatConnectPreAuthW
#define chatRetryWithNick			chatRetryWithNickW
#define chatRegisterUniqueNick		chatRegisterUniqueNickW
#define chatSendRaw					chatSendRawW
#define chatChangeNick				chatChangeNickW
#define chatFixNick					chatFixNickW
#define chatTranslateNick			chatTranslateNickW
#define chatAuthenticateCDKey		chatAuthenticateCDKeyW
#define chatEnumChannels			chatEnumChannelsW
#define chatEnterChannel			chatEnterChannelW
#define chatLeaveChannel			chatLeaveChannelW
#define chatSendChannelMessage		chatSendChannelMessageW
#define chatSetChannelTopic			chatSetChannelTopicW
#define chatGetChannelTopic			chatGetChannelTopicW
#define chatSetChannelMode			chatSetChannelModeW
#define chatGetChannelMode			chatGetChannelModeW
#define chatSetChannelPassword		chatSetChannelPasswordW
#define chatGetChannelPassword		chatGetChannelPasswordW
#define chatSetChannelLimit			chatSetChannelLimitW
#define chatEnumChannelBans			chatEnumChannelBansW
#define chatAddChannelBan			chatAddChannelBanW
#define chatRemoveChannelBan		chatRemoveChannelBanW
#define chatSetChannelGroup			chatSetChannelGroupW
#define chatGetChannelNumUsers		chatGetChannelNumUsersW
#define chatInChannel				chatInChannelW
#define chatEnumUsers				chatEnumUsersW
#define chatSendUserMessage			chatSendUserMessageW
#define chatGetUserInfo				chatGetUserInfoW
#define chatGetBasicUserInfo		chatGetBasicUserInfoW
#define chatGetBasicUserInfoNoWait	chatGetBasicUserInfoNoWaitW
#define chatGetChannelBasicUserInfo	chatGetChannelBasicUserInfoW
#define chatInviteUser				chatInviteUserW
#define chatKickUser				chatKickUserW
#define chatBanUser					chatBanUserW
#define chatSetUserMode				chatSetUserModeW
#define chatGetUserMode				chatGetUserModeW
#define chatGetUserModeNoWait		chatGetUserModeNoWaitW
#define chatSetGlobalKeys			chatSetGlobalKeysW
#define chatSetChannelKeys			chatSetChannelKeysW
#define chatGetGlobalKeys			chatGetGlobalKeysW
#define chatGetChannelKeys			chatGetChannelKeysW
#define chatGetNick					chatGetNickW
#define chatGetUdpRelay				chatGetUdpRelayW
#endif




 




typedef void (* chatRaw)(CHAT chat,
						 const gsi_char * raw,
						 void * param);



typedef void (* chatDisconnected)(CHAT chat,
								  const gsi_char * reason,
								  void * param);




typedef void (* chatPrivateMessage)(CHAT chat,
									const gsi_char * user,
									const gsi_char * message,
									int type,  
									void * param);



typedef void (* chatInvited)(CHAT chat,
							 const gsi_char * channel,
							 const gsi_char * user,
							 void * param);



typedef struct chatGlobalCallbacks
{
	chatRaw raw;
	chatDisconnected disconnected;
	chatPrivateMessage privateMessage;
	chatInvited invited;
	void * param;
} chatGlobalCallbacks;

 




typedef void (* chatChannelMessage)(CHAT chat,
									const gsi_char * channel,
									const gsi_char * user,
									const gsi_char * message,
									int type,  
									void * param);



typedef void (* chatKicked)(CHAT chat,
							const gsi_char * channel,
							const gsi_char * user,
							const gsi_char * reason,
							void * param);



typedef void (* chatUserJoined)(CHAT chat,
								const gsi_char * channel,
								const gsi_char * user,
								int mode,    
								void * param);



typedef void (* chatUserParted)(CHAT chat,
								const gsi_char * channel,
								const gsi_char * user,
								int why,    
								const gsi_char * reason,
								const gsi_char * kicker,
								void * param);



typedef void (* chatUserChangedNick)(CHAT chat,
									 const gsi_char * channel,
									 const gsi_char * oldNick,
									 const gsi_char * newNick,
									 void * param);



typedef void (* chatTopicChanged)(CHAT chat,
								  const gsi_char * channel,
								  const gsi_char * topic,
								  void * param);



typedef void (* chatChannelModeChanged)(CHAT chat,
										const gsi_char * channel,
										CHATChannelMode * mode,
										void * param);



typedef void (* chatUserModeChanged)(CHAT chat,
									 const gsi_char * channel,
									 const gsi_char * user,
									 int mode,  
									 void * param);



typedef void (* chatUserListUpdated)(CHAT chat,
									 const gsi_char * channel,
									 void * param);



typedef void (* chatNewUserList)(CHAT chat,
								 const gsi_char * channel,
								 int num,
								 const gsi_char ** users,
								 int * modes,
								 void * param);



typedef void (* chatBroadcastKeyChanged)(CHAT chat,
										 const gsi_char * channel,
										 const gsi_char * user,
										 const gsi_char * key,
										 const gsi_char * value,
										 void * param);



typedef struct chatChannelCallbacks
{
	chatChannelMessage channelMessage;
	chatKicked kicked;
	chatUserJoined userJoined;
	chatUserParted userParted;
	chatUserChangedNick userChangedNick;
	chatTopicChanged topicChanged;
	chatChannelModeChanged channelModeChanged;
	chatUserModeChanged userModeChanged;
	chatUserListUpdated userListUpdated;
	chatNewUserList newUserList;
	chatBroadcastKeyChanged broadcastKeyChanged;
	void * param;
} chatChannelCallbacks;

 





typedef void (* chatConnectCallback)(CHAT chat,
									 CHATBool success,
									 int failureReason,  
									 void * param);





typedef void (* chatNickErrorCallback)(CHAT chat,
									   int type,  
									   const gsi_char * nick,
									   int numSuggestedNicks,
									   const gsi_char ** suggestedNicks,
									   void * param);
typedef void (* chatFillInUserCallback)(CHAT chat,
										unsigned int IP, 
										gsi_char user[128],
										void * param);


CHAT chatConnect(const gsi_char * serverAddress,
				 int port,
                 const gsi_char * nick,
				 const gsi_char * user,
				 const gsi_char * name,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking);
CHAT chatConnectSpecial(const gsi_char * serverAddress,
				 int port,
                 const gsi_char * nick,
				 const gsi_char * name,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking);
CHAT chatConnectSecure(const gsi_char * serverAddress,
				 int port,
                 const gsi_char * nick,
				 const gsi_char * name,
				 const gsi_char * gamename,
				 const gsi_char * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking);
CHAT chatConnectLogin(const gsi_char * serverAddress,
				 int port,
				 int namespaceID,
				 const gsi_char * email,
				 const gsi_char * profilenick,
				 const gsi_char * uniquenick,
				 const gsi_char * password,
				 const gsi_char * name,
				 const gsi_char * gamename,
				 const gsi_char * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking);
CHAT chatConnectPreAuth(const gsi_char * serverAddress,
				 int port,
				 const gsi_char * authtoken,
				 const gsi_char * partnerchallenge,
				 const gsi_char * name,
				 const gsi_char * gamename,
				 const gsi_char * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking);






void chatRetryWithNick(CHAT chat,
					   const gsi_char * nick);






void chatRegisterUniqueNick(CHAT chat,
							int namespaceID,
							const gsi_char * uniquenick,
							const gsi_char * cdkey);



void chatDisconnect(CHAT chat);



void chatThink(CHAT chat);



void chatSendRaw(CHAT chat,
				 const gsi_char * command);



typedef void (* chatChangeNickCallback)(CHAT chat,
										CHATBool success,
										const gsi_char * oldNick,
										const gsi_char * newNick,
										void * param);


void chatChangeNick(CHAT chat,
					const gsi_char * newNick,
					chatChangeNickCallback callback,
					void * param,
					CHATBool blocking);



const gsi_char * chatGetNick(CHAT chat);



void chatFixNick(gsi_char * newNick,
				 const gsi_char * oldNick);



const gsi_char * chatTranslateNick(gsi_char * nick,
								   const gsi_char * extension);




int chatGetUserID(CHAT chat);




int chatGetProfileID(CHAT chat);



void chatSetQuietMode(CHAT chat,
					  CHATBool quiet);



typedef void (* chatAuthenticateCDKeyCallback)(CHAT chat,
											   int result,
											   const gsi_char * message,
											   void * param);



void chatAuthenticateCDKey(CHAT chat,
						   const gsi_char * cdkey,
						   chatAuthenticateCDKeyCallback callback,
						   void * param,
						   CHATBool blocking);

 




typedef void (* chatEnumChannelsCallbackEach)(CHAT chat,
											  CHATBool success,
											  int index,
											  const gsi_char * channel,
											  const gsi_char * topic,
											  int numUsers,
											  void * param);


typedef void (* chatEnumChannelsCallbackAll)(CHAT chat,
											 CHATBool success,
											 int numChannels,
											 const gsi_char ** channels,
											 const gsi_char ** topics,
											 int * numUsers,
											 void * param);


void chatEnumChannels(CHAT chat,
					  const gsi_char * filter,
					  chatEnumChannelsCallbackEach callbackEach,
					  chatEnumChannelsCallbackAll callbackAll,
					  void * param,
					  CHATBool blocking);



typedef void (* chatEnumJoinedChannelsCallback)(CHAT chat,
											  int index,
											  const gsi_char * channel,
											  void * param);



void chatEnumJoinedChannels(CHAT chat,
					  chatEnumJoinedChannelsCallback callback,
					  void * param);





typedef void (* chatEnterChannelCallback)(CHAT chat,
										  CHATBool success,
										  CHATEnterResult result,
										  const gsi_char * channel,
										  void * param);


void chatEnterChannel(CHAT chat,
					  const gsi_char * channel,
					  const gsi_char * password,
					  chatChannelCallbacks * callbacks,
					  chatEnterChannelCallback callback,
					  void * param,
					  CHATBool blocking);



void chatLeaveChannel(CHAT chat,
					  const gsi_char * channel,
					  const gsi_char * reason);  



void chatSendChannelMessage(CHAT chat,
							const gsi_char * channel,
							const gsi_char * message,
							int type);



void chatSetChannelTopic(CHAT chat,
						 const gsi_char * channel,
						 const gsi_char * topic);



typedef void (* chatGetChannelTopicCallback)(CHAT chat,
											 CHATBool success,
											 const gsi_char * channel,
											 const gsi_char * topic,
											 void * param);


void chatGetChannelTopic(CHAT chat,
						 const gsi_char * channel,
						 chatGetChannelTopicCallback callback,
						 void * param,
						 CHATBool blocking);



void chatSetChannelMode(CHAT chat,
						const gsi_char * channel,
						CHATChannelMode * mode);



typedef void (* chatGetChannelModeCallback)(CHAT chat,
											CHATBool success,
											const gsi_char * channel,
											CHATChannelMode * mode,
											void * param);


void chatGetChannelMode(CHAT chat,
						const gsi_char * channel,
						chatGetChannelModeCallback callback,
						void * param,
						CHATBool blocking);



void chatSetChannelPassword(CHAT chat,
							const gsi_char * channel,
							CHATBool enable,
							const gsi_char * password);



typedef void (* chatGetChannelPasswordCallback)(CHAT chat,
												CHATBool success,
												const gsi_char * channel,
												CHATBool enabled,
												const gsi_char * password,
												void * param);


void chatGetChannelPassword(CHAT chat,
							const gsi_char * channel,
							chatGetChannelPasswordCallback callback,
							void * param,
							CHATBool blocking);



void chatSetChannelLimit(CHAT chat,
						 const gsi_char * channel,
						 int limit);



typedef void (* chatEnumChannelBansCallback)(CHAT chat,
											 CHATBool success,
											 const gsi_char * channel,
											 int numBans,
											 const gsi_char ** bans,
											 void * param);


void chatEnumChannelBans(CHAT chat,
						 const gsi_char * channel,
						 chatEnumChannelBansCallback callback,
						 void * param,
						 CHATBool blocking);



void chatAddChannelBan(CHAT chat,
					   const gsi_char * channel,
					   const gsi_char * ban);



void chatRemoveChannelBan(CHAT chat,
						  const gsi_char * channel,
						  const gsi_char * ban);



void chatSetChannelGroup(CHAT chat,
						 const gsi_char * channel,
						 const gsi_char * group);




int chatGetChannelNumUsers(CHAT chat,
						   const gsi_char * channel);




CHATBool chatInChannel(CHAT chat,
						   const gsi_char * channel);


 




typedef void (* chatEnumUsersCallback)(CHAT chat,
									   CHATBool success,
									   const gsi_char * channel, 
									   int numUsers,
									   const gsi_char ** users,
									   int * modes,
									   void * param);


void chatEnumUsers(CHAT chat,
				   const gsi_char * channel,
				   chatEnumUsersCallback callback,
				   void * param,
				   CHATBool blocking);



void chatSendUserMessage(CHAT chat,
						 const gsi_char * user,
						 const gsi_char * message,
						 int type);



typedef void (* chatGetUserInfoCallback)(CHAT chat,
										 CHATBool success,
										 const gsi_char * nick,  
										 const gsi_char * user,
										 const gsi_char * name,
										 const gsi_char * address,
										 int numChannels,
										 const gsi_char ** channels,
										 void * param);


void chatGetUserInfo(CHAT chat,
					 const gsi_char * user,
					 chatGetUserInfoCallback callback,
					 void * param,
					 CHATBool blocking);



typedef void (* chatGetBasicUserInfoCallback)(CHAT chat,
											  CHATBool success,
											  const gsi_char * nick,
											  const gsi_char * user,
											  const gsi_char * address,
											  void * param);




void chatGetBasicUserInfo(CHAT chat,
						  const gsi_char * user,
						  chatGetBasicUserInfoCallback callback,
						  void * param,
						  CHATBool blocking);




CHATBool chatGetBasicUserInfoNoWait(CHAT chat,
									const gsi_char * nick,
									const gsi_char ** user,
									const gsi_char ** address);




typedef void (* chatGetChannelBasicUserInfoCallback)(CHAT chat,
													 CHATBool success,
													 const gsi_char * channel,
													 const gsi_char * nick,
													 const gsi_char * user,
													 const gsi_char * address,
													 void * param);




void chatGetChannelBasicUserInfo(CHAT chat,
								 const gsi_char * channel,
								 chatGetChannelBasicUserInfoCallback callback,
								 void * param,
								 CHATBool blocking);



void chatInviteUser(CHAT chat,
					const gsi_char * channel,
					const gsi_char * user);



void chatKickUser(CHAT chat,
				  const gsi_char * channel,
				  const gsi_char * user,
				  const gsi_char * reason);



void chatBanUser(CHAT chat,
				 const gsi_char * channel,
				 const gsi_char * user);



void chatSetUserMode(CHAT chat,
					 const gsi_char * channel,
					 const gsi_char * user,
					 int mode);



typedef void (* chatGetUserModeCallback)(CHAT chat,
										 CHATBool success,
										 const gsi_char * channel,
										 const gsi_char * user,
										 int mode,
										 void * param);


void chatGetUserMode(CHAT chat,
					 const gsi_char * channel,
					 const gsi_char * user,
					 chatGetUserModeCallback callback,
					 void * param,
					 CHATBool blocking);



CHATBool chatGetUserModeNoWait(CHAT chat,
							   const gsi_char * channel,
							   const gsi_char * user,
							   int * mode);




typedef void (* chatGetUdpRelayCallback)(CHAT chat,
										 const gsi_char * channel,
										 const gsi_char * udpIp,
										 unsigned short udpPort,
										 int udpKey,
										 void * param);



void chatGetUdpRelay(CHAT chat,
					 const gsi_char * channel,
					 chatGetUdpRelayCallback callback,
					 void * param,
					 CHATBool blocking);


 





void chatSetGlobalKeys(CHAT chat,
					   int num,
					   const gsi_char ** keys,
					   const gsi_char ** values);





typedef void (* chatGetGlobalKeysCallback)(CHAT chat,
										   CHATBool success,
										   const gsi_char * user,
										   int num,
										   const gsi_char ** keys,
										   const gsi_char ** values,
										   void * param);





void chatGetGlobalKeys(CHAT chat,
					   const gsi_char * target,
					   int num,
					   const gsi_char ** keys,
					   chatGetGlobalKeysCallback callback,
					   void * param,
					   CHATBool blocking);







void chatSetChannelKeys(CHAT chat,
						const gsi_char * channel,
						const gsi_char * user,
						int num,
						const gsi_char ** keys,
						const gsi_char ** values);





typedef void (* chatGetChannelKeysCallback)(CHAT chat,
											CHATBool success,
											const gsi_char * channel,
											const gsi_char * user,
											int num,
											const gsi_char ** keys,
											const gsi_char ** values,
											void * param);





void chatGetChannelKeys(CHAT chat,
						const gsi_char * channel,
						const gsi_char * user,
						int num,
						const gsi_char ** keys,
						chatGetChannelKeysCallback callback,
						void * param,
						CHATBool blocking);





#ifdef GSI_UNICODE
CHATBool chatGetBasicUserInfoNoWaitA(CHAT chat,
									const char * nick,
									const char ** user,
									const char ** address);
#endif
 









#ifdef __cplusplus
}	
#endif




#endif 

 









#ifndef _CHATSOCKET_H_
#define _CHATSOCKET_H_

 


#ifndef _CHATCRYPT_H_
#define _CHATCRYPT_H_
#ifdef __cplusplus
extern "C" {
#endif

	
typedef struct _gs_crypt_key
{      
   unsigned char state[256];       
   unsigned char x;        
   unsigned char y;
} gs_crypt_key;


void gs_prepare_key(const unsigned char *key_data_ptr, int key_data_len, gs_crypt_key *key);
void gs_crypt(unsigned char *buffer_ptr, int buffer_len, gs_crypt_key *key);
void gs_xcode_buf(char *buf, int len, char *enckey);

#ifdef __cplusplus
}
#endif

#endif


 


typedef enum ciConnectState
{
	ciNotConnected,
	ciConnected,
	ciDisconnected
} ciConnectState;

 


typedef struct ciBuffer
{
	char * buffer;
	int length;
	int size;
} ciBuffer;

typedef struct ciServerMessage
{
	char * message;
	char * server;
	char * nick;
	char * user;
	char * host;
	char * command;
	char * middle;
	char * param;
	char ** params;
	int numParams;
} ciServerMessage;

typedef struct ciSocket
{
	SOCKET sock;
	ciConnectState connectState;
	char serverAddress[256];

	ciBuffer inputQueue;
	ciBuffer outputQueue;

	CHATBool secure;
	gs_crypt_key inKey;
	gs_crypt_key outKey;

	ciServerMessage lastMessage;

#ifdef IRC_LOG
	char filename[FILENAME_MAX];
#endif
} ciSocket;

 


CHATBool ciSocketInit(ciSocket * sock, const char * nick);

CHATBool ciSocketConnect(ciSocket * sock,
					 const char * serverAddress,
					 int port);

void ciSocketDisconnect(ciSocket * sock);

void ciSocketThink(ciSocket * sock);

CHATBool ciSocketSend(ciSocket * sock,
				  const char * buffer);

CHATBool ciSocketSendf(ciSocket * sock,
				   const char * format,
				   ...);

ciServerMessage * ciSocketRecv(ciSocket * sock);

#endif

 









#ifndef _CHATHANDLERS_H_
#define _CHATHANDLERS_H_

 




 


typedef struct ciServerMessageType
{
	char * command;
	void (* handler)(CHAT chat, const ciServerMessage * message);
} ciServerMessageType;

typedef char ** ciCommands;
typedef struct ciServerMessageFilter
{
	int type;
	gsi_time timeout;

	char * name;
	char * name2;

	void * callback;
	void * callback2;
	void * param;

	void * data;

	int ID;

	struct ciServerMessageFilter * pnext;
} ciServerMessageFilter;

 


extern ciServerMessageType serverMessageTypes[];
extern int numServerMessageTypes;

 


void ciFilterThink(CHAT chat);
void ciCleanupFilters(CHAT chat);
int ciAddLISTFilter(CHAT chat, chatEnumChannelsCallbackEach callbackEach, chatEnumChannelsCallbackAll callbackAll, void * param);
int ciAddJOINFilter(CHAT chat, const char * channel, chatEnterChannelCallback callback, void * param, chatChannelCallbacks * callbacks, const char * password);
int ciAddTOPICFilter(CHAT chat, const char * channel, chatGetChannelTopicCallback callback, void * param);
int ciAddNAMESFilter(CHAT chat, const char * channel, chatEnumUsersCallback callback, void * param);
int ciAddWHOISFilter(CHAT chat, const char * user, chatGetUserInfoCallback callback, void * param);
int ciAddWHOFilter(CHAT chat, const char * user, chatGetBasicUserInfoCallback callback, void * param);
int ciAddCWHOFilter(CHAT chat, const char * channel, chatGetChannelBasicUserInfoCallback callback, void * param);
int ciAddCMODEFilter(CHAT chat, const char * channel, chatGetChannelModeCallback callback, void * param);
int ciAddUMODEFilter(CHAT chat, const char * user, const char * channel, chatGetUserModeCallback callback, void * param);
int ciAddBANFilter(CHAT chat, const char * user, const char * channel);
int ciAddGETBANFilter(CHAT chat, const char * channel, chatEnumChannelBansCallback callback, void * param);
int ciAddNICKFilter(CHAT chat, const char * oldNick, const char * newNick, chatChangeNickCallback callback, void * param);
int ciAddUNQUIETFilter(CHAT chat, const char * channel);
int ciAddGETKEYFilter(CHAT chat, const char * cookie, int num, const char ** keys, const char * channel, chatGetGlobalKeysCallback callback, void * param);
int ciAddGETCKEYFilter(CHAT chat, const char * cookie, int num, const char ** keys, CHATBool channel, CHATBool getBroadcastKeys, chatGetChannelKeysCallback callback, void * param);
int ciAddGETCHANKEYFilter(CHAT chat, const char * cookie, int num, const char ** keys, CHATBool getBroadcastKeys, chatGetChannelKeysCallback callback, void * param);
int ciAddCDKEYFilter(CHAT chat, chatAuthenticateCDKeyCallback callback, void * param);
int ciAddGETUDPRELAYFilter(CHAT chat, const char * channel, chatGetUdpRelayCallback callback, void * param);
int ciGetNextID(CHAT chat);
CHATBool ciCheckFiltersForID(CHAT chat, int ID);

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


 


#define MAX_NICK               64
#define MAX_CHAT_NICK          21
#define MAX_NAME              128
#define MAX_USER              128
#define MAX_SERVER            128
#define MAX_PARAM             512
#define MAX_SECRETKEY         128
#define MAX_EMAIL              64
#define MAX_PROFILENICK        32
#define MAX_UNIQUENICK         64
#define MAX_PASSWORD           32
#define MAX_AUTHTOKEN         256
#define MAX_PARTNERCHALLENGE  256

#define CONNECTION      ciConnection * connection; 						assert(chat != NULL); 						connection = (ciConnection *)chat; 						GSI_UNUSED(connection);
#define CONNECTED       if(!connection || !connection->connected) return; 
#if 0
ciConnection * connection;  
#endif

#define VALID_NICK_CHARS  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789\"#$%&'()*+,-./:;<=>?@[]^_`{|}~"

#define CI_DEFAULT_SERVER_ADDRESS "peerchat." GSI_DOMAIN_NAME
#define CI_DEFUILT_SERVER_PORT 6667
 


typedef enum
{
	CINoLogin,
	CIUniqueNickLogin,
	CIProfileLogin,
	CIPreAuthLogin
} CILoginType;

typedef struct ciConnection
{
	CHATBool connected;
	CHATBool connecting;
	CHATBool disconnected;
	chatNickErrorCallback nickErrorCallback;
	chatFillInUserCallback fillInUserCallback;
	chatConnectCallback connectCallback;
	void * connectParam;

	ciSocket chatSocket;

	char nick[MAX_NICK];
	char name[MAX_NAME];
	char user[MAX_USER];

	int namespaceID;
	char email[MAX_EMAIL];
	char profilenick[MAX_PROFILENICK];
	char uniquenick[MAX_UNIQUENICK];
	char password[MAX_PASSWORD];

	char authtoken[MAX_AUTHTOKEN];
	char partnerchallenge[MAX_PARTNERCHALLENGE];

#ifdef GSI_UNICODE
	unsigned short nickW[MAX_NICK];
	unsigned short userW[MAX_NAME];
#endif

	unsigned int IP;

	char server[MAX_SERVER];
	int port;

	chatGlobalCallbacks globalCallbacks;

	HashTable channelTable;
	DArray enteringChannelList;

	ciServerMessageFilter * filterList;
	ciServerMessageFilter * lastFilter;

	int nextID;

	DArray callbackList;

	CHATBool quiet;

	char secretKey[MAX_SECRETKEY];

	CILoginType loginType;

	int userID;
	int profileID;
} ciConnection;

void ciSendNickAndUser(CHAT chat);
void ciSendNick(CHAT chat);
void ciSendUser(CHAT chat);
void ciSendLogin(CHAT chat);
void ciHandleDisconnect(CHAT chat, const char * reason);
int ciNickIsValid(const char* nick);
void ciNickError(CHAT chat, int type, const char * nick, int numSuggestedNicks, char ** suggestedNicks);

#define strzcpy(dest, src, len)   { strncpy(dest, src, (len)); (dest)[(len) - 1] = '\0'; }
#define wcszcpy(dest, src, len)   { wcsncpy(dest, src, (len)); (dest)[(len) - 1] = 0; }

#endif

 









#ifndef _CHATCHANNEL_H_
#define _CHATCHANNEL_H_

 



 



 


CHATBool ciInitChannels(ciConnection * connection);
void ciCleanupChannels(CHAT chat);
void ciChannelEntering(CHAT chat, const char * channel);
CHATBool ciIsEnteringChannel(CHAT chat, const char * channel);
void ciChannelEntered(CHAT chat, const char * channel, chatChannelCallbacks * callbacks);
void ciChannelLeft(CHAT chat, const char * channel);
chatChannelCallbacks * ciGetChannelCallbacks(CHAT chat, const char * channel);
typedef void (* ciChannelListUsersCallback)(CHAT chat, const char * channel, int numUsers, const char ** users, int * modes, void * param);
void ciChannelListUsers(CHAT chat, const char * channel, ciChannelListUsersCallback callback, void * param);
CHATBool ciInChannel(CHAT chat, const char * channel);
CHATBool ciGetChannelMode(CHAT chat, const char * channel, CHATChannelMode * mode);
void ciSetChannelMode(CHAT chat, const char * channel, CHATChannelMode * mode);
void ciSetChannelPassword(CHAT chat, const char * channel, const char * password);
const char * ciGetChannelPassword(CHAT chat, const char * channel);
void ciJoinCallbackCalled(CHAT chat, const char * channel);
CHATBool ciWasJoinCallbackCalled(CHAT chat, const char * channel);
void ciSetChannelTopic(CHAT chat, const char * channel, const char * topic);
const char * ciGetChannelTopic(CHAT chat, const char * channel);
int ciGetChannelNumUsers(CHAT chat, const char * channel);

void ciUserEnteredChannel(CHAT chat, const char * nick, const char * channel, int mode, const char * user, const char * address);
void ciUserLeftChannel(CHAT chat, const char * user, const char * channel);
void ciUserChangedNick(CHAT chat, const char * oldNick, const char * newNick);
void ciUserChangedMode(CHAT chat, const char * user, const char * channel, int mode, CHATBool enabled);
typedef void (* ciUserEnumChannelsCallback)(CHAT chat, const char * user, const char * channel, void * param);
void ciUserEnumChannels(CHAT chat, const char * user, ciUserEnumChannelsCallback callback, void * param);
CHATBool ciUserInChannel(CHAT chat, const char * channel, const char * user);
int ciGetUserMode(CHAT chat, const char * channel, const char * user);
void ciEnumJoinedChannels(CHAT chat, chatEnumJoinedChannelsCallback callback, void * param);
void ciSetUserBasicInfo(CHAT chat, const char * nick, const char * user, const char * address);
void ciClearAllUsers(CHAT chat);




CHATBool ciGetUserBasicInfoA(CHAT chat, const char * nick, const char ** user, const char ** address);
CHATBool ciGetUserBasicInfoW(CHAT chat, const char * nick, const unsigned short ** user, const unsigned short ** address);

#endif

 









#ifndef _CHATCALLBACKS_H_
#define _CHATCALLBACKS_H_

 



 


enum
{
	CALLBACK_RAW,
	CALLBACK_DISCONNECTED,
	CALLBACK_PRIVATE_MESSAGE,
	CALLBACK_INVITED,
	CALLBACK_CHANNEL_MESSAGE,
	CALLBACK_KICKED,
	CALLBACK_USER_JOINED,
	CALLBACK_USER_PARTED,
	CALLBACK_USER_CHANGED_NICK,
	CALLBACK_TOPIC_CHANGED,
	CALLBACK_CHANNEL_MODE_CHANGED,
	CALLBACK_USER_MODE_CHANGED,
	CALLBACK_USER_LIST_UPDATED,
	CALLBACK_ENUM_CHANNELS_EACH,
	CALLBACK_ENUM_CHANNELS_ALL,
	CALLBACK_ENTER_CHANNEL,
	CALLBACK_GET_CHANNEL_TOPIC,
	CALLBACK_GET_CHANNEL_MODE,
	CALLBACK_GET_CHANNEL_PASSWORD,
	CALLBACK_ENUM_USERS,
	CALLBACK_GET_USER_INFO,
	CALLBACK_GET_BASIC_USER_INFO,
	CALLBACK_GET_CHANNEL_BASIC_USER_INFO,
	CALLBACK_GET_USER_MODE,
	CALLBACK_ENUM_CHANNEL_BANS,
	CALLBACK_NICK_ERROR,
	CALLBACK_CHANGE_NICK,
	CALLBACK_NEW_USER_LIST,
	CALLBACK_BROADCAST_KEY_CHANGED,
	CALLBACK_GET_GLOBAL_KEYS,
	CALLBACK_GET_CHANNEL_KEYS,
	CALLBACK_AUTHENTICATE_CDKEY,
	CALLBACK_GET_UDPRELAY,
	CALLBACK_NUM
};

 


typedef struct ciCallbackRawParams
{
	char * raw;
} ciCallbackRawParams;

typedef struct ciCallbackDisconnectedParams
{
	char * reason;
} ciCallbackDisconnectedParams;

typedef struct ciCallbackPrivateMessageParams
{
	char * user;
	char * message;
	int type;
} ciCallbackPrivateMessageParams;

typedef struct ciCallbackInvitedParams
{
	char * channel;
	char * user;
} ciCallbackInvitedParams;

typedef struct ciCallbackChannelMessageParams
{
	char * channel;
	char * user;
	char * message;
	int type;
} ciCallbackChannelMessageParams;

typedef struct ciCallbackKickedParams
{
	char * channel;
	char * user;
	char * reason;
} ciCallbackKickedParams;

typedef struct ciCallbackUserJoinedParams
{
	char * channel;
	char * user;
	int mode;
} ciCallbackUserJoinedParams;

typedef struct ciCallbackUserPartedParams
{
	char * channel;
	char * user;
	int why;
	char * reason;
	char * kicker;
} ciCallbackUserPartedParams;

typedef struct ciCallbackUserChangedNickParams
{
	char * channel;
	char * oldNick;
	char * newNick;
} ciCallbackUserChangedNickParams;

typedef struct ciCallbackTopicChangedParams
{
	char * channel;
	char * topic;
} ciCallbackTopicChangedParams;

typedef struct ciCallbackChannelModeChangedParams
{
	char * channel;
	CHATChannelMode * mode;
} ciCallbackChannelModeChangedParams;

typedef struct ciCallbackUserModeChangedParams
{
	char * channel;
	char * user;
	int mode;
} ciCallbackUserModeChangedParams;

typedef struct ciCallbackUserListUpdatedParams
{
	char * channel;
} ciCallbackUserListUpdatedParams;

typedef struct ciCallbackConnectParams
{
	CHATBool success;
} ciCallbackConnectParams;

typedef struct ciCallbackEnumChannelsEachParams
{
	CHATBool success;
	int index;
	char * channel;
	char * topic;
	int numUsers;
	void * param;
} ciCallbackEnumChannelsEachParams;

typedef struct ciCallbackEnumChannelsAllParams
{
	CHATBool success;
	int numChannels;
	char ** channels;
	char ** topics;
	int * numUsers;
} ciCallbackEnumChannelsAllParams;

typedef struct ciCallbackEnterChannelParams
{
	CHATBool success;
	CHATEnterResult result;
	char * channel;
} ciCallbackEnterChannelParams;

typedef struct ciCallbackGetChannelTopicParams
{
	CHATBool success;
	char * channel;
	char * topic;
} ciCallbackGetChannelTopicParams;

typedef struct ciCallbackGetChannelModeParams
{
	CHATBool success;
	char * channel;
	CHATChannelMode * mode;
} ciCallbackGetChannelModeParams;

typedef struct ciCallbackGetChannelPasswordParams
{
	CHATBool success;
	char * channel;
	CHATBool enabled;
	char * password;
} ciCallbackGetChannelPasswordParams;

typedef struct ciCallbackEnumUsersParams
{
	CHATBool success;
	char * channel;
	int numUsers;
	char ** users;
	int * modes;
} ciCallbackEnumUsersParams;

typedef struct ciCallbackGetUserInfoParams
{
	CHATBool success;
	char * nick;
	char * user;
	char * name;
	char * address;
	int numChannels;
	char ** channels;
} ciCallbackGetUserInfoParams;

typedef struct ciCallbackGetBasicUserInfoParams
{
	CHATBool success;
	char * nick;
	char * user;
	char * address;
} ciCallbackGetBasicUserInfoParams;

typedef struct ciCallbackGetChannelBasicUserInfoParams
{
	CHATBool success;
	char * channel;
	char * nick;
	char * user;
	char * address;
} ciCallbackGetChannelBasicUserInfoParams;

typedef struct ciCallbackGetUserModeParams
{
	CHATBool success;
	char * channel;
	char * user;
	int mode;
} ciCallbackGetUserModeParams;

typedef struct ciCallbackEnumChannelBansParams
{
	CHATBool success;
	char * channel;
	int numBans;
	char ** bans;
} ciCallbackEnumChannelBansParams;

typedef struct ciCallbackNickErrorParams
{
	int type;
	char * nick;
	int numSuggestedNicks;
	char ** suggestedNicks;
} ciCallbackNickErrorParams;

typedef struct ciCallbackChangeNickParams
{
	CHATBool success;
	char * oldNick;
	char * newNick;
} ciCallbackChangeNickParams;

typedef struct ciCallbackNewUserListParams
{
	char * channel;
	int numUsers;
	char ** users;
	int * modes;
} ciCallbackNewUserListParams;

typedef struct ciCallbackBroadcastKeyChangedParams
{
	char * channel;
	char * user;
	char * key;
	char * value;
} ciCallbackBroadcastKeyChangedParams;

typedef struct ciCallbackGetGlobalKeysParams
{
	CHATBool success;
	char * user;
	int num;
	char ** keys;
	char ** values;
} ciCallbackGetGlobalKeysParams;

typedef struct ciCallbackGetChannelKeysParams
{
	CHATBool success;
	char * channel;
	char * user;
	int num;
	char ** keys;
	char ** values;
} ciCallbackGetChannelKeysParams;

typedef struct ciCallbackAuthenticateCDKeyParams
{
	int result;
	char * message;
} ciCallbackAuthenticateCDKeyParams;

typedef struct ciCallbackGetUdpRelayParams
{
	char * channel;
	char * udpIp;
	unsigned short udpPort;
	int udpKey;
} ciCallbackGetUdpRelayParams;

 


CHATBool ciInitCallbacks(ciConnection * connection);
void ciCleanupCallbacks(CHAT chat);
#define ciAddCallback(chat, type, callback, callbackParams, param, ID, channel) ciAddCallback_(chat, type, callback, callbackParams, param, ID, channel, sizeof(*callbackParams))
CHATBool ciAddCallback_(CHAT chat, int type, void * callback, void * callbackParams, void * param, int ID, const char * channel, size_t callbackParamsSize);
void ciCallCallbacks(CHAT chat, int ID);
CHATBool ciCheckCallbacksForID(CHAT chat, int ID);

#endif


#if defined(_WIN32)




#endif

 


#define FILTER_TIMEOUT        60000
#define NAMES_ARRAY_INC       100

#define ASSERT_TYPE(type)     assert((type >= 0) && (type < NUM_TYPES));
#define ASSERT_STR(str)       assert(str != NULL); assert(str[0] != '\0');

#define RPL_WELCOME                 "001"
#define RPL_USRIP                   "302"
#define RPL_WHOISUSER               "311"
#define RPL_ENDOFWHO                "315"
#define RPL_ENDOFWHOIS              "318"
#define RPL_WHOISCHANNELS           "319"
#define RPL_LISTSTART               "321"
#define RPL_LIST                    "322"
#define RPL_LISTEND                 "323"
#define RPL_CHANNELMODEIS           "324"
#define RPL_NOTOPIC                 "331"
#define RPL_TOPIC                   "332"
#define RPL_WHOREPLY                "352"
#define RPL_NAMEREPLY               "353"
#define RPL_ENDOFNAMES              "366"
#define RPL_BANLIST                 "367"
#define RPL_ENDOFBANLIST            "368"
#define RPL_GETKEY                  "700"
#define RPL_ENDGETKEY               "701"
#define RPL_GETCKEY                 "702"
#define RPL_ENDGETCKEY              "703"
#define RPL_GETCHANKEY              "704"
#define RPL_SECUREKEY               "705"
#define RPL_CDKEY                   "706"
#define RPL_LOGIN                   "707"
#define RPL_GETUDPRELAY				"712"

#define ERR_NOSUCHNICK              "401"
#define ERR_NOSUCHCHANNEL           "403"
#define ERR_TOOMANYCHANNELS         "405"
#define ERR_ERRONEUSNICKNAME        "432"
#define ERR_NICKNAMEINUSE           "433"
#define ERR_CHANNELISFULL           "471"
#define ERR_INVITEONLYCHAN          "473"
#define ERR_BANNEDFROMCHAN          "474"
#define ERR_BADCHANNELKEY           "475"
#define ERR_BADCHANMASK             "476"
#define ERR_LOGIN_FAILED            "708"
#define ERR_NO_UNIQUE_NICK          "709"
#define ERR_UNIQUE_NICK_EXPIRED     "710"
#define ERR_REGISTER_NICK_FAILED    "711"

#define MODE_END                        0
#define MODE_BAN                        1
#define MODE_INVITE_ONLY                2
#define MODE_LIMIT                      3
#define MODE_PRIVATE                    4
#define MODE_SECRET                     5
#define MODE_KEY                        6
#define MODE_MODERATED                  7
#define MODE_NO_EXTERNAL_MESSAGES       8
#define MODE_ONLY_OPS_CHANGE_TOPIC      9
#define MODE_OP                         10
#define MODE_VOICE                      11
#define MODE_USERS_HIDDEN               12
#define MODE_RECEIVE_WALLOPS            13
#define MODE_OPS_OBEY_CHANNEL_LIMIT     14


#define FINISH_FILTER          ciFinishFilter(chat, filter, &params)
#define IS_ALPHA(c) ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))

enum
{
	TYPE_LIST,
	TYPE_JOIN,
	TYPE_TOPIC,
	TYPE_NAMES,
	TYPE_WHOIS,
	TYPE_CMODE,
	TYPE_UMODE,
	TYPE_BAN,
	TYPE_GETBAN,
	TYPE_NICK,
	TYPE_WHO,
	TYPE_CWHO,
	TYPE_GETKEY,
	TYPE_GETCKEY,
	TYPE_GETCHANKEY,
	TYPE_UNQUIET,
	TYPE_CDKEY,
	TYPE_GETUDPRELAY,
	NUM_TYPES
};

 


typedef struct ciModeChange
{
	int mode;
	CHATBool enable;
	char * param;
} ciModeChange;

typedef struct ciFilterMatch
{
	int type;
	const char * name;
	const char * name2;
} ciFilterMatch;

typedef struct LISTData
{
	CHATBool gotStart;
	int numChannels;
	char ** channels;
	int * numUsers;
	char ** topics;
} LISTData;

typedef struct JOINData
{
	chatChannelCallbacks callbacks;
	CHATBool joined;
	char password[MAX_PASSWORD];
} JOINData;

typedef struct NAMESData
{
	int len;
	int numUsers;
	char ** users;
	int * modes;
} NAMESData;

typedef struct WHOISData
{
	char * user;
	char * name;
	char * address;
	int numChannels;
	char ** channels;
} WHOISData;

typedef struct BANData
{
	char * channel;
} BANData;

typedef struct GETBANData
{
	int numBans;
	char ** bans;
} GETBANData;

typedef struct GETKEYData
{
	int num;
	char ** keys;
	char * channel;
} GETKEYData;

typedef struct GETCKEYData
{
	int num;
	char ** keys;
	CHATBool channel;
	CHATBool allBroadcastKeys;
} GETCKEYData;

typedef struct GETCHANKEYData
{
	int num;
	char ** keys;
	CHATBool allBroadcastKeys;
} GETCHANKEYData;

 


void ciPrivmsgHandler(CHAT chat, const ciServerMessage * message);
void ciNoticeHandler(CHAT chat, const ciServerMessage * message);
void ciUTMHandler(CHAT chat, const ciServerMessage * message);
void ciATMHandler(CHAT chat, const ciServerMessage * message);
void ciPingHandler(CHAT chat, const ciServerMessage * message);
void ciNickHandler(CHAT chat, const ciServerMessage * message);
void ciJoinHandler(CHAT chat, const ciServerMessage * message);
void ciPartHandler(CHAT chat, const ciServerMessage * message);
void ciKickHandler(CHAT chat, const ciServerMessage * message);
void ciQuitHandler(CHAT chat, const ciServerMessage * message);
void ciKillHandler(CHAT chat, const ciServerMessage * message);
void ciTopicHandler(CHAT chat, const ciServerMessage * message);
void ciModeHandler(CHAT chat, const ciServerMessage * message);
void ciErrorHandler(CHAT chat, const ciServerMessage * message);
void ciNameReplyHandler(CHAT chat, const ciServerMessage * message);
void ciEndOfNamesHandler(CHAT chat, const ciServerMessage * message);
void ciInviteHandler(CHAT chat, const ciServerMessage * message);

void ciRplTopicHandler(CHAT chat, const ciServerMessage * message);
void ciRplNoTopicHandler(CHAT chat, const ciServerMessage * message);
void ciErrNickInUseHandler(CHAT chat, const ciServerMessage * message);
void ciRplWhoReplyHandler(CHAT chat, const ciServerMessage * message);
void ciRplUserIPHandler(CHAT chat, const ciServerMessage * message);
void ciRplListStartHandler(CHAT chat, const ciServerMessage * message);
void ciRplListHandler(CHAT chat, const ciServerMessage * message);
void ciRplListEndHandler(CHAT chat, const ciServerMessage * message);
void ciRplChannelModeIsHandler(CHAT chat, const ciServerMessage * message);
void ciRplWhoisUserHandler(CHAT chat, const ciServerMessage * message);
void ciRplWhoisChannelsHandler(CHAT chat, const ciServerMessage * message);
void ciRplEndOfWhoisHandler(CHAT chat, const ciServerMessage * message);
void ciRplBanListHandler(CHAT chat, const ciServerMessage * message);
void ciRplEndOfBanListHandler(CHAT chat, const ciServerMessage * message);
void ciRplWelcomeHandler(CHAT chat, const ciServerMessage * message);
void ciRplEndOfWhoHandler(CHAT chat, const ciServerMessage * message);
void ciRplGetKeyHandler(CHAT chat, const ciServerMessage * message);
void ciRplEndGetKeyHandler(CHAT chat, const ciServerMessage * message);
void ciRplGetCKeyHandler(CHAT chat, const ciServerMessage * message);
void ciRplEndGetCKeyHandler(CHAT chat, const ciServerMessage * message);
void ciRplGetChanKeyHandler(CHAT chat, const ciServerMessage * message);
void ciRplSecureKeyHandler(CHAT chat, const ciServerMessage * message);
void ciRplCDKeyHandler(CHAT chat, const ciServerMessage * message);
void ciRplLoginHandler(CHAT chat, const ciServerMessage * message);
void ciRplGetUdpRelayHandler(CHAT chat, const ciServerMessage * message);

void ciErrNoSuchChannelHandler(CHAT chat, const ciServerMessage * message);
void ciErrTooManyChannelsHandler(CHAT chat, const ciServerMessage * message);
void ciErrChannelIsFullHandler(CHAT chat, const ciServerMessage * message);
void ciErrInviteOnlyChanHandler(CHAT chat, const ciServerMessage * message);
void ciErrBannedFromChanHandler(CHAT chat, const ciServerMessage * message);
void ciErrBadChannelKeyHandler(CHAT chat, const ciServerMessage * message);
void ciErrBadChanMaskHandler(CHAT chat, const ciServerMessage * message);
void ciErrNoSuchNickHandler(CHAT chat, const ciServerMessage * message);
void ciErrErroneusNicknameHandler(CHAT chat, const ciServerMessage * message);
void ciErrLoginFailedHandler(CHAT chat, const ciServerMessage * message);
void ciErrNoUniqueNickHandler(CHAT chat, const ciServerMessage * message);
void ciErrUniqueNickExpiredHandler(CHAT chat, const ciServerMessage * message);
void ciErrRegisterNickFailedHandler(CHAT chat, const ciServerMessage * message);

 


ciServerMessageType serverMessageTypes[] = 
{
	{ "PRIVMSG", ciPrivmsgHandler },
	{ "NOTICE",  ciNoticeHandler },
	{ "UTM",     ciUTMHandler },
	{ "ATM",     ciATMHandler },
	{ "PING",    ciPingHandler },
	{ "NICK",    ciNickHandler },
	{ "JOIN",    ciJoinHandler },
	{ "PART",    ciPartHandler },
	{ "KICK",    ciKickHandler },
	{ "QUIT",    ciQuitHandler },
	{ "KILL",    ciKillHandler },
	{ "TOPIC",   ciTopicHandler },
	{ "MODE",    ciModeHandler },
	{ "ERROR",   ciErrorHandler },
	{ "INVITE",  ciInviteHandler },

	{ RPL_NAMEREPLY,     ciNameReplyHandler },
	{ RPL_ENDOFNAMES,    ciEndOfNamesHandler },
	{ RPL_TOPIC,         ciRplTopicHandler },
	{ RPL_NOTOPIC,       ciRplNoTopicHandler },
	{ RPL_WHOREPLY,      ciRplWhoReplyHandler },
	{ RPL_USRIP,         ciRplUserIPHandler },
	{ RPL_LISTSTART,     ciRplListStartHandler },
	{ RPL_LIST,          ciRplListHandler },
	{ RPL_LISTEND,       ciRplListEndHandler },
	{ RPL_CHANNELMODEIS, ciRplChannelModeIsHandler },
	{ RPL_WHOISUSER,     ciRplWhoisUserHandler },
	{ RPL_WHOISCHANNELS, ciRplWhoisChannelsHandler },
	{ RPL_ENDOFWHOIS,    ciRplEndOfWhoisHandler },
	{ RPL_BANLIST,       ciRplBanListHandler },
	{ RPL_ENDOFBANLIST,  ciRplEndOfBanListHandler },
	{ RPL_WELCOME,       ciRplWelcomeHandler },
	{ RPL_ENDOFWHO,      ciRplEndOfWhoHandler },
	{ RPL_GETKEY,        ciRplGetKeyHandler },
	{ RPL_ENDGETKEY,     ciRplEndGetKeyHandler },
	{ RPL_GETCKEY,       ciRplGetCKeyHandler },
	{ RPL_ENDGETCKEY,    ciRplEndGetCKeyHandler },
	{ RPL_GETCHANKEY,    ciRplGetChanKeyHandler },
	{ RPL_SECUREKEY,     ciRplSecureKeyHandler },
	{ RPL_CDKEY,         ciRplCDKeyHandler },
	{ RPL_LOGIN,         ciRplLoginHandler },
	{ RPL_GETUDPRELAY,   ciRplGetUdpRelayHandler },

	{ ERR_NICKNAMEINUSE,          ciErrNickInUseHandler },
	{ ERR_NOSUCHCHANNEL,          ciErrNoSuchChannelHandler },
	{ ERR_TOOMANYCHANNELS,        ciErrTooManyChannelsHandler },
	{ ERR_CHANNELISFULL,          ciErrChannelIsFullHandler },
	{ ERR_INVITEONLYCHAN,         ciErrInviteOnlyChanHandler },
	{ ERR_BANNEDFROMCHAN,         ciErrBannedFromChanHandler },
	{ ERR_BADCHANNELKEY,          ciErrBadChannelKeyHandler },
	{ ERR_BADCHANMASK,            ciErrBadChanMaskHandler },
	{ ERR_NOSUCHNICK,             ciErrNoSuchNickHandler },
	{ ERR_ERRONEUSNICKNAME,       ciErrErroneusNicknameHandler },
	{ ERR_LOGIN_FAILED,           ciErrLoginFailedHandler },
	{ ERR_NO_UNIQUE_NICK,         ciErrNoUniqueNickHandler },
	{ ERR_UNIQUE_NICK_EXPIRED,    ciErrUniqueNickExpiredHandler },
	{ ERR_REGISTER_NICK_FAILED,   ciErrRegisterNickFailedHandler }
};
int numServerMessageTypes = (sizeof(serverMessageTypes) / sizeof(ciServerMessageType));


 


static ciServerMessageFilter * ciFindFilter(CHAT chat, int numMatches, ciFilterMatch * matches)
{
	int i;
	const char * name;
	const char * name2;
	ciServerMessageFilter * filter;
	CONNECTION;

	assert(numMatches > 0);
	assert(matches);

	for(filter = connection->filterList ; filter != NULL ; filter = filter->pnext)
	{
		for(i = 0 ; i < numMatches ; i++)
		{
			ASSERT_TYPE(matches[i].type);
			if(filter->type == matches[i].type)
			{
				name = matches[i].name;
				name2 = matches[i].name2;
				if((!name && !filter->name) || (name && filter->name && (strcasecmp(name, filter->name) == 0)))
				{
					if((!name2 && !filter->name2) || (name2 && filter->name2 && (strcasecmp(name2, filter->name2) == 0)))
					{
						
						
						filter->timeout = (current_time() + FILTER_TIMEOUT);

						return filter;
					}
				}
			}
		}
	}

	return NULL;
}

static ciServerMessageFilter * ciFindGetKeyFilter(CHAT chat, const char * channel)
{
	GETKEYData * data;
	ciServerMessageFilter * filter;
	CONNECTION;

	assert(channel);
	assert(channel[0]);

	for(filter = connection->filterList ; filter != NULL ; filter = filter->pnext)
	{
		if(filter->type == TYPE_GETKEY)
		{
			data = (GETKEYData *)filter->data;
			if(strcasecmp(data->channel, channel) == 0)
				return filter;
		}
	}

	return NULL;
}

static void ciDestroyFilter(ciServerMessageFilter * filter)
{
	assert(filter != NULL);

	gsifree(filter->data);
	gsifree(filter->name);
	gsifree(filter->name2);
	gsifree(filter);
}

static void ciRemoveFilter(CHAT chat, ciServerMessageFilter * filter)
{
	ciServerMessageFilter * pcurr;
	ciServerMessageFilter * pprev = NULL;
	CONNECTION;

	assert(filter != NULL);

	for(pcurr = connection->filterList ; pcurr != NULL ; pcurr = pcurr->pnext)
	{
		if(pcurr == filter)
		{
			if(connection->filterList == pcurr)
				connection->filterList = pcurr->pnext;

			if(connection->lastFilter == pcurr)
				connection->lastFilter = pprev;

			if(pprev != NULL)
				pprev->pnext = pcurr->pnext;

			ciDestroyFilter(pcurr);

			return;
		}

		pprev = pcurr;
	}

	
}



static void ciFinishFilter(CHAT chat, ciServerMessageFilter * filter, void * params)
{
	int i;

	assert(filter);
	ASSERT_TYPE(filter->type);

	
	
	if(filter->type == TYPE_LIST)
	{
		LISTData * data = (LISTData *)filter->data;
		
		if(filter->callback2)
			ciAddCallback_(chat, CALLBACK_ENUM_CHANNELS_ALL, filter->callback2, params, filter->param, filter->ID, NULL, sizeof(ciCallbackEnumChannelsAllParams));

		for(i = 0 ; i < data->numChannels ; i++)
		{
			gsifree(data->channels[i]);
			gsifree(data->topics[i]);
		}
		gsifree(data->channels);
		gsifree(data->topics);
		gsifree(data->numUsers);
	}
	else if(filter->type == TYPE_JOIN)
	{
		if(filter->callback != NULL)
			ciAddCallback_(chat, CALLBACK_ENTER_CHANNEL, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackEnterChannelParams));
	}
	else if(filter->type == TYPE_TOPIC)
	{
		const char * channel = ((ciCallbackGetChannelTopicParams *)params)->channel;

		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_GET_CHANNEL_TOPIC, filter->callback, params, filter->param, filter->ID, channel, sizeof(ciCallbackGetChannelTopicParams));
	}
	else if(filter->type == TYPE_NAMES)
	{
		NAMESData * data = (NAMESData *)filter->data;

		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_ENUM_USERS, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackEnumUsersParams));

		for(i = 0 ; i < data->numUsers ; i++)
			gsifree(data->users[i]);
		gsifree(data->users);
		gsifree(data->modes);
	}
	else if(filter->type == TYPE_WHOIS)
	{
		WHOISData * data = (WHOISData *)filter->data;

		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_GET_USER_INFO, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackGetUserInfoParams));

		for(i = 0 ; i < data->numChannels ; i++)
			gsifree(data->channels[i]);
		gsifree(data->channels);
		gsifree(data->name);
		gsifree(data->address);
		gsifree(data->user);
	}
	else if(filter->type == TYPE_WHO)
	{
		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_GET_BASIC_USER_INFO, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackGetBasicUserInfoParams));
	}
	else if(filter->type == TYPE_CWHO)
	{
		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_GET_CHANNEL_BASIC_USER_INFO, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackGetBasicUserInfoParams));
	}
	else if(filter->type == TYPE_CMODE)
	{
		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_GET_CHANNEL_MODE, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackGetChannelModeParams));
	}
	else if(filter->type == TYPE_UMODE)
	{
		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_GET_USER_MODE, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackGetUserModeParams));
	}
	else if(filter->type == TYPE_GETUDPRELAY)
	{
		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_GET_UDPRELAY, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackGetUdpRelayParams));
	}
	else if(filter->type == TYPE_BAN)
	{
		BANData * data = (BANData *)filter->data;

		gsifree(data->channel);
	}
	else if(filter->type == TYPE_GETBAN)
	{
		GETBANData * data = (GETBANData *)filter->data;

		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_ENUM_CHANNEL_BANS, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackEnumChannelBansParams));

		
		
		for(i = 0 ; i < data->numBans ; i++)
			gsifree(data->bans[i]);
	}
	else if(filter->type == TYPE_NICK)
	{
		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_CHANGE_NICK, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackChangeNickParams));
	}
	else if(filter->type == TYPE_GETKEY)
	{
		GETKEYData * data = (GETKEYData *)filter->data;

		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_GET_GLOBAL_KEYS, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackGetGlobalKeysParams));

		gsifree(data->channel);
		for(i = 0 ; i < data->num ; i++)
			gsifree(data->keys[i]);
		gsifree(data->keys);
	}
	else if(filter->type == TYPE_GETCKEY)
	{
		GETCKEYData * data = (GETCKEYData *)filter->data;

		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_GET_CHANNEL_KEYS, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackGetChannelKeysParams));

		for(i = 0 ; i < data->num ; i++)
			gsifree(data->keys[i]);
		gsifree(data->keys);
	}
	else if(filter->type == TYPE_GETCHANKEY)
	{
		GETCHANKEYData * data = (GETCHANKEYData *)filter->data;

		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_GET_CHANNEL_KEYS, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackGetChannelKeysParams));

		for(i = 0 ; i < data->num ; i++)
			gsifree(data->keys[i]);
		gsifree(data->keys);
	}
	else if(filter->type == TYPE_UNQUIET)
	{
		NAMESData * data = (NAMESData *)filter->data;

		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_NEW_USER_LIST, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackNewUserListParams));

		for(i = 0 ; i < data->numUsers ; i++)
			gsifree(data->users[i]);
		gsifree(data->users);
		gsifree(data->modes);
	}
	else if(filter->type == TYPE_CDKEY)
	{
		if(filter->callback)
			ciAddCallback_(chat, CALLBACK_AUTHENTICATE_CDKEY, filter->callback, params, filter->param, filter->ID, NULL, sizeof(ciCallbackAuthenticateCDKeyParams));
	}
	else
	{
		assert(0);
	}

	
	
	ciRemoveFilter(chat, filter);
}



static void ciFilterTimedout(CHAT chat, ciServerMessageFilter * filter)
{
	assert(filter);
	ASSERT_TYPE(filter->type);
	
	
	
	if(filter->type == TYPE_LIST)
	{
		ciCallbackEnumChannelsAllParams params;
		params.success = CHATFalse;
		params.numChannels = 0;
		params.channels = NULL;
		params.topics = NULL;
		params.numUsers = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_JOIN)
	{
		ciCallbackEnterChannelParams params;
		params.success = CHATFalse;
		params.result = CHATEnterTimedOut;
		params.channel = filter->name;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_TOPIC)
	{
		ciCallbackGetChannelTopicParams params;
		params.success = CHATFalse;
		params.channel = filter->name;
		params.topic = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_NAMES)
	{
		ciCallbackEnumUsersParams params;
		params.success = CHATFalse;
		params.channel = filter->name;
		params.numUsers = 0;
		params.users = NULL;
		params.modes = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_WHOIS)
	{
		ciCallbackGetUserInfoParams params;
		params.success = CHATFalse;
		params.nick = filter->name;
		params.user = NULL;
		params.name = NULL;
		params.address = NULL;
		params.numChannels = 0;
		params.channels = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_WHO)
	{
		ciCallbackGetBasicUserInfoParams params;
		params.success = CHATFalse;
		params.nick = filter->name;
		params.user = NULL;
		params.address = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_CWHO)
	{
		ciCallbackGetChannelBasicUserInfoParams params;
		params.success = CHATFalse;
		params.channel = filter->name;
		params.nick = NULL;
		params.user = NULL;
		params.address = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_CMODE)
	{
		ciCallbackGetChannelModeParams params;
		params.success = CHATFalse;
		params.channel = filter->name;
		params.mode = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_UMODE)
	{
		ciCallbackGetUserModeParams params;
		params.success = CHATFalse;
		params.channel = filter->name2;
		params.user = filter->name;
		params.mode = 0;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_BAN)
	{
		ciFinishFilter(chat, filter, NULL);
	}
	else if(filter->type == TYPE_GETBAN)
	{
		ciCallbackEnumChannelBansParams params;
		params.channel = filter->name;
		params.numBans = 0;
		params.bans = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_NICK)
	{
		ciCallbackChangeNickParams params;
		params.success = CHATFalse;
		params.oldNick = filter->name;
		params.newNick = filter->name2;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_GETKEY)
	{
		ciCallbackGetGlobalKeysParams params;
		params.success = CHATFalse;
		params.user = NULL;
		params.num = 0;
		params.keys = NULL;
		params.values = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_GETCKEY)
	{
		ciCallbackGetChannelKeysParams params;
		params.success = CHATFalse;
		params.channel = NULL;
		params.user = NULL;
		params.num = 0;
		params.keys = NULL;
		params.values = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_GETCHANKEY)
	{
		ciCallbackGetChannelKeysParams params;
		params.success = CHATFalse;
		params.channel = NULL;
		params.user = NULL;
		params.num = 0;
		params.keys = NULL;
		params.values = NULL;

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_UNQUIET)
	{
		ciRemoveFilter(chat, filter);
	}
	else if(filter->type == TYPE_CDKEY)
	{
		ciCallbackAuthenticateCDKeyParams params;
		params.result = 0;
		params.message = "Timed out";

		FINISH_FILTER;
	}
	else if(filter->type == TYPE_GETUDPRELAY)
	{
		ciCallbackGetUdpRelayParams params;
		params.channel = filter->name;
		params.udpIp = NULL;
		params.udpKey = 0;
		params.udpPort = 0;

		FINISH_FILTER;
	}
	else
	{
		assert(0);
	}
}

void ciFilterThink(CHAT chat)
{
	ciServerMessageFilter * filter;
	ciServerMessageFilter * pnext;
	gsi_time now;
	CONNECTION;

	now = 0;
	now = 2;
	now = current_time();

	for(filter = connection->filterList ; filter != NULL ; filter = pnext)
	{
		pnext = filter->pnext;
		if(now > filter->timeout)
		{
			ciFilterTimedout(chat, filter);
		}
	}
}

int ciGetNextID(CHAT chat)
{
	int rcode;
	CONNECTION;

	
	
	rcode = connection->nextID;

	
	
	if(connection->nextID == INT_MAX)
		connection->nextID = 1;
	else
		connection->nextID++;

	return rcode;
}

CHATBool ciCheckFiltersForID(CHAT chat, int ID)
{
	ciServerMessageFilter * filter;
	CONNECTION;

	assert(ID > 0);

	for(filter = connection->filterList ; filter != NULL ; filter = filter->pnext)
	{
		
		
		if(filter->ID == ID)
			return CHATTrue;
	}

	
	
	return CHATFalse;
}

void ciCleanupFilters(CHAT chat)
{
	CONNECTION;

	while(connection->filterList)
		ciFilterTimedout(chat, connection->filterList);  
}

static int ciAddFilter(CHAT chat, int type, const char * name, const char * name2, void * callback, void * callback2, void * param, void * data)
{
	ciServerMessageFilter * filter;
	CONNECTION;

	
	
	filter = (ciServerMessageFilter *)gsimalloc(sizeof(ciServerMessageFilter));
	if(filter == NULL)
		return 0; 

	
	
	memset(filter, 0, sizeof(ciServerMessageFilter));
	filter->type = type;
	filter->timeout = (current_time() + FILTER_TIMEOUT);
	filter->callback = callback;
	filter->callback2 = callback2;
	filter->param = param;
	filter->data = data;
	if(name)
		filter->name = goastrdup(name);
	else
		filter->name = NULL;
	if(name2)
		filter->name2 = goastrdup(name2);
	else
		filter->name2 = NULL;
	filter->ID = ciGetNextID(chat);

	
	
	if(connection->filterList == NULL)
		connection->filterList = filter;
	else
		connection->lastFilter->pnext = filter;
	connection->lastFilter = filter;

	return filter->ID;
}

int ciAddLISTFilter(CHAT chat, chatEnumChannelsCallbackEach callbackEach, chatEnumChannelsCallbackAll callbackAll, void * param)
{
	LISTData * data = (LISTData *)gsimalloc(sizeof(LISTData));
	if(data == NULL)
		return 0; 
	memset(data, 0, sizeof(LISTData));

	return ciAddFilter(chat, TYPE_LIST, NULL, NULL, (void*)callbackEach, (void*)callbackAll, param, data);
}

int ciAddJOINFilter(CHAT chat, const char * channel, chatEnterChannelCallback callback, void * param, chatChannelCallbacks * callbacks, const char * password)
{
	int rcode;
	JOINData * data;

	assert(password != NULL);
	assert(strlen(password) < MAX_PASSWORD);

	data = (JOINData *)gsimalloc(sizeof(JOINData));
	if(data == NULL)
		return 0; 
	memset(data, 0, sizeof(JOINData));
	data->callbacks = *callbacks;
	strzcpy(data->password, password, MAX_PASSWORD);
	
	rcode = ciAddFilter(chat, TYPE_JOIN, channel, NULL, (void*)callback, NULL, param, data);
	if(rcode == 0)
		gsifree(data);

	return rcode;
}

int ciAddTOPICFilter(CHAT chat, const char * channel, chatGetChannelTopicCallback callback, void * param)
{
	return ciAddFilter(chat, TYPE_TOPIC, channel, NULL, (void*)callback, NULL, param, NULL);
}

int ciAddNAMESFilter(CHAT chat, const char * channel, chatEnumUsersCallback callback, void * param)
{
	NAMESData * data = (NAMESData *)gsimalloc(sizeof(NAMESData));
	if(data == NULL)
		return 0; 
	memset(data, 0, sizeof(NAMESData));

	return ciAddFilter(chat, TYPE_NAMES, channel, NULL, (void*)callback, NULL, param, data);
}

int ciAddWHOISFilter(CHAT chat, const char * user, chatGetUserInfoCallback callback, void * param)
{
	int rcode;
	WHOISData * data = (WHOISData *)gsimalloc(sizeof(WHOISData));
	if(data == NULL)
		return 0; 
	memset(data, 0, sizeof(WHOISData));

	rcode = ciAddFilter(chat, TYPE_WHOIS, user, NULL, (void*)callback, NULL, param, data);
	if(rcode == 0)
		gsifree(data);
	return rcode;
}

int ciAddWHOFilter(CHAT chat, const char * user, chatGetBasicUserInfoCallback callback, void * param)
{
	return ciAddFilter(chat, TYPE_WHO, user, NULL, (void*)callback, NULL, param, NULL);
}

int ciAddCWHOFilter(CHAT chat, const char * channel, chatGetChannelBasicUserInfoCallback callback, void * param)
{
	return ciAddFilter(chat, TYPE_CWHO, channel, NULL, (void*)callback, NULL, param, NULL);
}

int ciAddCMODEFilter(CHAT chat, const char * channel, chatGetChannelModeCallback callback, void * param)
{
	return ciAddFilter(chat, TYPE_CMODE, channel, NULL, (void*)callback, NULL, param, NULL);
}

int ciAddUMODEFilter(CHAT chat, const char * user, const char * channel, chatGetUserModeCallback callback, void * param)
{
	return ciAddFilter(chat, TYPE_UMODE, user, channel, (void*)callback, NULL, param, NULL);
}

int ciAddGETUDPRELAYFilter(CHAT chat, const char * channel, chatGetUdpRelayCallback callback, void * param)
{
	return ciAddFilter(chat, TYPE_GETUDPRELAY, channel, NULL, (void*)callback, NULL, param, NULL);
}


int ciAddBANFilter(CHAT chat, const char * user, const char * channel)
{
	BANData * data = (BANData *)gsimalloc(sizeof(BANData));
	if(data == NULL)
		return 0; 
	memset(data, 0, sizeof(BANData));
	data->channel = goastrdup(channel);
	if(data->channel == NULL)
	{
		gsifree(data);
		return 0; 
	}

	return ciAddFilter(chat, TYPE_BAN, user, NULL, NULL, NULL, NULL, data);
}

int ciAddGETBANFilter(CHAT chat, const char * channel, chatEnumChannelBansCallback callback, void * param)
{
	GETBANData * data = (GETBANData *)gsimalloc(sizeof(GETBANData));
	if(data == NULL)
		return 0; 
	memset(data, 0, sizeof(GETBANData));

	return ciAddFilter(chat, TYPE_GETBAN, channel, NULL, (void*)callback, NULL, param, data);
}

int ciAddNICKFilter(CHAT chat, const char * oldNick, const char * newNick, chatChangeNickCallback callback, void * param)
{
	return ciAddFilter(chat, TYPE_NICK, oldNick, newNick, (void*)callback, NULL, param, NULL);
}

int ciAddGETKEYFilter(CHAT chat, const char * cookie, int num, const char ** keys, const char * channel, chatGetGlobalKeysCallback callback, void * param)
{
	int i;
	GETKEYData * data = (GETKEYData *)gsimalloc(sizeof(GETKEYData));
	if(!data)
		return 0;
	memset(data, 0, sizeof(GETKEYData));

	data->num = num;
	if(channel)
	{
		data->channel = goastrdup(channel);
		if(!data->channel)
		{
			gsifree(data);
			return 0;
		}
	}
	data->keys = (char **)gsimalloc(sizeof(char *) * num);
	if(!data->keys)
	{
		gsifree(data->channel);
		gsifree(data);
		return 0;
	}
	for(i = 0 ; i < num ; i++)
	{
		data->keys[i] = goastrdup(keys[i]);
		if(!data->keys[i])
		{
			for( i-- ; i >= 0 ; i--)
				gsifree(data->keys[i]);
			gsifree(data->keys);
			gsifree(data->channel);
			gsifree(data);
			return 0;
		}
	}

	return ciAddFilter(chat, TYPE_GETKEY, cookie, NULL, (void*)callback, NULL, param, data);
}

int ciAddGETCKEYFilter(CHAT chat, const char * cookie, int num, const char ** keys, CHATBool channel, CHATBool getBroadcastKeys, chatGetChannelKeysCallback callback, void * param)
{
	int src;
	int dest;
	GETCKEYData * data = (GETCKEYData *)gsimalloc(sizeof(GETCKEYData));
	if(!data)
		return 0;
	memset(data, 0, sizeof(GETCKEYData));
	data->allBroadcastKeys = getBroadcastKeys;

	data->num = num;
	data->channel = channel;
	if(getBroadcastKeys)
		data->num--;
	data->keys = (char **)gsimalloc(sizeof(char *) * data->num);
	if(!data->keys)
	{
		gsifree(data);
		return 0;
	}
	for(src = 0, dest = 0 ; src < num ; src++)
	{
		if(strcmp(keys[src], "b_*") != 0)
		{
			data->keys[dest] = goastrdup(keys[src]);
			if(!data->keys[dest])
			{
				for( dest-- ; dest >= 0 ; dest--)
					gsifree(data->keys[dest]);
				gsifree(data->keys);
				gsifree(data);
				return 0;
			}
			dest++;
		}
	}
	data->num = dest;

	return ciAddFilter(chat, TYPE_GETCKEY, cookie, NULL, (void*)callback, NULL, param, data);
}

int ciAddGETCHANKEYFilter(CHAT chat, const char * cookie, int num, const char ** keys, CHATBool getBroadcastKeys, chatGetChannelKeysCallback callback, void * param)
{
	int src;
	int dest;
	GETCHANKEYData * data = (GETCHANKEYData *)gsimalloc(sizeof(GETCHANKEYData));
	if(!data)
		return 0;
	memset(data, 0, sizeof(GETCHANKEYData));
	data->allBroadcastKeys = getBroadcastKeys;

	data->num = num;
	if(getBroadcastKeys)
		data->num--;
	if(data->num)
	{
		data->keys = (char **)gsimalloc(sizeof(char *) * data->num);
		if(!data->keys)
		{
			gsifree(data);
			return 0;
		}
		for(src = 0, dest = 0 ; src < num ; src++)
		{
			if(strcmp(keys[src], "b_*") != 0)
			{
				data->keys[dest] = goastrdup(keys[src]);
				if(!data->keys[dest])
				{
					for( dest-- ; dest >= 0 ; dest--)
						gsifree(data->keys[dest]);
					gsifree(data->keys);
					gsifree(data);
					return 0;
				}
				dest++;
			}
		}
		data->num = dest;
	}

	return ciAddFilter(chat, TYPE_GETCHANKEY, cookie, NULL, (void*)callback, NULL, param, data);
}

int ciAddUNQUIETFilter(CHAT chat, const char * channel)
{
	chatChannelCallbacks * callbacks;
	NAMESData * data;

	callbacks = ciGetChannelCallbacks(chat, channel);
	if(!callbacks || !callbacks->newUserList)
		return 0;

	data = (NAMESData *)gsimalloc(sizeof(NAMESData));
	if(data == NULL)
		return 0; 
	memset(data, 0, sizeof(NAMESData));

	return ciAddFilter(chat, TYPE_UNQUIET, channel, NULL, (void*)callbacks->newUserList, NULL, callbacks->param, data);
}

int ciAddCDKEYFilter(CHAT chat, chatAuthenticateCDKeyCallback callback, void * param)
{
	return ciAddFilter(chat, TYPE_CDKEY, NULL, NULL, (void*)callback, NULL, param, NULL);
}

 


static ciModeChange * ciParseMode(char * mode, char ** params, int numParams)
{
	CHATBool enable;
	int c;
	ciModeChange * changes = NULL;
	int numChanges = 0;
	ciModeChange * change;
	int modeChange;
	CHATBool addParam = CHATFalse;
	void * tempPtr;

	assert(mode != NULL);

	
	
	if(*mode == '+')
		enable = CHATTrue;
	else if(*mode == '-')
		enable = CHATFalse;
	else
		return NULL; 
	mode++;

	
	
	do
	{
		
		
		c = *mode++;

		
		
		switch(c)
		{
		case '+':
			enable = CHATTrue;
			modeChange = -1;
			break;

		case '-':
			enable = CHATFalse;
			modeChange = -1;
			break;

		case '\0':
			modeChange = MODE_END;
			addParam = CHATFalse;
			break;

		case 'i':
			modeChange = MODE_INVITE_ONLY;
			addParam = CHATFalse;
			break;

		case 'l':
			modeChange = MODE_LIMIT;
			addParam = CHATTrue;
			break;

		case 'p':
			modeChange = MODE_PRIVATE;
			addParam = CHATFalse;
			break;

		case 's':
			modeChange = MODE_SECRET;
			addParam = CHATFalse;
			break;

		case 'k':
			modeChange = MODE_KEY;
			addParam = CHATTrue;
			break;

		case 'm':
			modeChange = MODE_MODERATED;
			addParam = CHATFalse;
			break;

		case 'n':
			modeChange = MODE_NO_EXTERNAL_MESSAGES;
			addParam = CHATFalse;
			break;

		case 't':
			modeChange = MODE_ONLY_OPS_CHANGE_TOPIC;
			addParam = CHATFalse;
			break;

		case 'o':
			modeChange = MODE_OP;
			addParam = CHATTrue;
			break;

		case 'v':
			modeChange = MODE_VOICE;
			addParam = CHATTrue;
			break;

		case 'b':
			modeChange = MODE_BAN;
			addParam = CHATTrue;
			break;

		case 'u':
			modeChange = MODE_USERS_HIDDEN;
			addParam = CHATFalse;
			break;

		case 'w':
			modeChange = MODE_RECEIVE_WALLOPS;
			addParam = CHATFalse;
			break;

		case 'e':
			modeChange = MODE_OPS_OBEY_CHANNEL_LIMIT;
			addParam = CHATFalse;
			break;

		default:
			
			
			
			modeChange = -1;
		}

		
		
		if(modeChange != -1)
		{
			tempPtr = gsirealloc(changes, sizeof(ciModeChange) * (numChanges + 1));
			if(tempPtr == NULL)
			{
				gsifree(changes);
				return NULL; 
			}
			changes = (ciModeChange *)tempPtr;
			change = &changes[numChanges++];
			memset(change, 0, sizeof(ciModeChange));
			change->enable = enable;
			change->mode = modeChange;

			
			
			if(addParam)
			{
				
				if(numParams > 0)
				{
					change->param = *params++;
					numParams--;
				}
				else
					change->param = NULL;
			}
		}
	}
	while(c != '\0');

	return changes;
}

static void ciApplyChangesToMode(CHATChannelMode * mode, ciModeChange * changes)
{
	ciModeChange * change;

	
	
	for(change = changes ; change->mode != MODE_END ; change++)
	{
		switch(change->mode)
		{
		case MODE_BAN:
			break;

		case MODE_INVITE_ONLY:
			mode->InviteOnly = change->enable;
			break;

		case MODE_LIMIT:
			if(change->enable && change->param)
				mode->Limit = atoi(change->param);
			else
				mode->Limit = 0;
			break;

		case MODE_PRIVATE:
			mode->Private = change->enable;
			break;

		case MODE_SECRET:
			mode->Secret = change->enable;
			break;

		case MODE_KEY:
			break;

		case MODE_MODERATED:
			mode->Moderated = change->enable;
			break;

		case MODE_NO_EXTERNAL_MESSAGES:
			mode->NoExternalMessages = change->enable;
			break;

		case MODE_ONLY_OPS_CHANGE_TOPIC:
			mode->OnlyOpsChangeTopic = change->enable;
			break;

		case MODE_OP:
			break;

		case MODE_VOICE:
			break;

		case MODE_USERS_HIDDEN:
			break;

		case MODE_RECEIVE_WALLOPS:
			break;

		case MODE_OPS_OBEY_CHANNEL_LIMIT:
			mode->OpsObeyChannelLimit = change->enable;
			break;

		default:
			assert(0);
		}
	}
}

 


void ciPrivmsgHandler(CHAT chat, const ciServerMessage * message)
{
	char * ctcp;
	char * target;
	char * from;
	CHATBool action = CHATFalse;
	char * msg;
	int len;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciPrivmsgHandler called\n");
#endif

	assert(message->numParams == 2);
	if(message->numParams != 2)
		return; 

	target = message->params[0];
	msg = message->params[1];
	from = message->nick;

	
	
	len = (int)strlen(msg);
	ctcp = "";
	if((msg[0] == '\001') && IS_ALPHA(msg[1]) && (msg[len - 1] == '\001'))
	{
		char * str;

		
		
		
		msg[len - 1] = '\0';

		
		
		str = strchr(msg, ' ');
		if(str != NULL)
		{
			
			
			ctcp = &msg[1];

			
			
			*str = '\0';
			msg = (str + 1);
		}
	}

	
	
	if(strcmp(ctcp, "ACTION") == 0)
	{
		
		
		action = CHATTrue;
	}
#if 0
	
	
	else if(strcmp(ctcp, "PING") == 0)
	{
		
		
		ciSocketSendf(&connection->chatSocket, "NOTICE %s :\001PING %s\001", from, msg);

		return;
	}
#endif
	else if(ctcp[0] != '\0')
	{
		
		
		return;
	}

	
	
	if(strcasecmp(target, connection->nick) == 0)
	{
		if(connection->globalCallbacks.privateMessage != NULL)
		{
			ciCallbackPrivateMessageParams params;
			params.user = from;
			params.message = msg;
			if(action)
				params.type = CHAT_ACTION;
			else
				params.type = CHAT_MESSAGE;
			ciAddCallback(chat, CALLBACK_PRIVATE_MESSAGE, (void*)connection->globalCallbacks.privateMessage, &params, connection->globalCallbacks.param, 0, NULL);
		}
	}
	else
	{
		
		
		chatChannelCallbacks * callbacks = ciGetChannelCallbacks(chat, target);
		if((callbacks != NULL) && (callbacks->channelMessage != NULL))
		{
			ciCallbackChannelMessageParams params;
			params.channel = target;
			params.user = from;
			params.message = msg;
			if(action)
				params.type = CHAT_ACTION;
			else
				params.type = CHAT_MESSAGE;
			ciAddCallback(chat, CALLBACK_CHANNEL_MESSAGE, (void*)callbacks->channelMessage, &params, callbacks->param, 0, target);
		}
	}
}

void ciNoticeHandler(CHAT chat, const ciServerMessage * message)
{
	char * target;
	char * msg;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciNoticeHandler called\n");
#endif
	
	assert(message->numParams == 2);
	if(message->numParams != 2)
		return; 
	
	target = message->params[0];
	msg = message->params[1];
	
	
	
	if(strcasecmp(target, connection->nick) == 0)
	{
		if(connection->globalCallbacks.privateMessage != NULL)
		{
			ciCallbackPrivateMessageParams params;
			if(message->nick != NULL)
				params.user = message->nick;
			else
				params.user = NULL;
			params.message = msg;
			params.type = CHAT_NOTICE;
			ciAddCallback(chat, CALLBACK_PRIVATE_MESSAGE, (void*)connection->globalCallbacks.privateMessage, &params, connection->globalCallbacks.param, 0, NULL);
		}
	}
	else
	{
		
		
		chatChannelCallbacks * callbacks = ciGetChannelCallbacks(chat, target);
		if((callbacks != NULL) && (callbacks->channelMessage != NULL))
		{
			ciCallbackChannelMessageParams params;
			params.channel = target;
			if(message->nick != NULL)
				params.user = message->nick;
			else
				params.user = NULL;
			params.message = msg;
			params.type = CHAT_NOTICE;
			ciAddCallback(chat, CALLBACK_CHANNEL_MESSAGE, (void*)callbacks->channelMessage, &params, callbacks->param, 0, target);
		}
	}
}

void ciUTMHandler(CHAT chat, const ciServerMessage * message)
{
	char * target;
	char * msg;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciUTMHandler called\n");
#endif
	
	assert(message->numParams == 2);
	if(message->numParams != 2)
		return; 
	
	target = message->params[0];
	msg = message->params[1];
	
	
	
	if(strcasecmp(target, connection->nick) == 0)
	{
		if(connection->globalCallbacks.privateMessage != NULL)
		{
			ciCallbackPrivateMessageParams params;
			if(message->nick != NULL)
				params.user = message->nick;
			else
				params.user = NULL;
			params.message = msg;
			params.type = CHAT_UTM;
			ciAddCallback(chat, CALLBACK_PRIVATE_MESSAGE, (void*)connection->globalCallbacks.privateMessage, &params, connection->globalCallbacks.param, 0, NULL);
		}
	}
	else
	{
		
		
		chatChannelCallbacks * callbacks = ciGetChannelCallbacks(chat, target);
		if((callbacks != NULL) && (callbacks->channelMessage != NULL))
		{
			ciCallbackChannelMessageParams params;
			params.channel = target;
			if(message->nick != NULL)
				params.user = message->nick;
			else
				params.user = NULL;
			params.message = msg;
			params.type = CHAT_UTM;
			ciAddCallback(chat, CALLBACK_CHANNEL_MESSAGE, (void*)callbacks->channelMessage, &params, callbacks->param, 0, target);
		}
	}
}

void ciATMHandler(CHAT chat, const ciServerMessage * message)
{
	char * target;
	char * msg;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciATMHandler called\n");
#endif
	
	assert(message->numParams == 2);
	if(message->numParams != 2)
		return; 
	
	target = message->params[0];
	msg = message->params[1];
	
	
	
	if(strcasecmp(target, connection->nick) == 0)
	{
		if(connection->globalCallbacks.privateMessage != NULL)
		{
			ciCallbackPrivateMessageParams params;
			if(message->nick != NULL)
				params.user = message->nick;
			else
				params.user = NULL;
			params.message = msg;
			params.type = CHAT_ATM;
			ciAddCallback(chat, CALLBACK_PRIVATE_MESSAGE, (void*)connection->globalCallbacks.privateMessage, &params, connection->globalCallbacks.param, 0, NULL);
		}
	}
	else
	{
		
		
		chatChannelCallbacks * callbacks = ciGetChannelCallbacks(chat, target);
		if((callbacks != NULL) && (callbacks->channelMessage != NULL))
		{
			ciCallbackChannelMessageParams params;
			params.channel = target;
			if(message->nick != NULL)
				params.user = message->nick;
			else
				params.user = NULL;
			params.message = msg;
			params.type = CHAT_ATM;
			ciAddCallback(chat, CALLBACK_CHANNEL_MESSAGE, (void*)callbacks->channelMessage, &params, callbacks->param, 0, target);
		}
	}
}

void ciPingHandler(CHAT chat, const ciServerMessage * message)
{
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciPingHandler called\n");
#endif
	
	ciSocketSendf(&connection->chatSocket, "PONG %s", message->param);
}

void ciNickHandler(CHAT chat, const ciServerMessage * message)
{
	char * oldNick;
	char * newNick;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciNickHandler called\n");
#endif
	
	assert(message->numParams == 1);
	if(message->numParams != 1)
		return; 

	oldNick	= message->nick;
	newNick = message->params[0];

	
	
	if(strcasecmp(oldNick, connection->nick) == 0)
	{
		ciServerMessageFilter * filter;
		ciFilterMatch match;

		
		
		assert(strlen(newNick) < MAX_NICK);
		strzcpy(connection->nick, newNick, MAX_NICK);

		
#ifdef GSI_UNICODE
		AsciiToUCS2String(connection->nick, connection->nickW);
#endif

		
		
		memset(&match, 0, sizeof(ciFilterMatch));
		match.type = TYPE_NICK;
		match.name = oldNick;
		match.name2 = newNick;

		
		
		filter = ciFindFilter(chat, 1, &match);
		if(filter)
		{
			
			
			ciCallbackChangeNickParams params;
			params.success = CHATTrue;
			params.oldNick = oldNick;
			params.newNick = newNick;

			FINISH_FILTER;
		}
	}

	
	
	ciUserChangedNick(chat, oldNick, newNick);
}

void ciJoinHandler(CHAT chat, const ciServerMessage * message)
{
	char * channel;
	char * nick;
	char * user;
	char * address;
	int mode;
	chatChannelCallbacks * callbacks;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciJoinHandler called\n");
#endif
	
	assert(message->numParams == 1);
	if(message->numParams != 1)
		return; 

	channel = message->params[0];
	nick = message->nick;
	user = message->user;
	address = message->host;

	
	
	if(*nick == '@')
	{
		mode = CHAT_OP;
		nick++;
		assert(*nick != '\0');
	}
	else if(*nick == '+')
	{
		mode = CHAT_VOICE;
		nick++;
		assert(*nick != '\0');
	}
	else
	{
		mode = CHAT_NORMAL;
	}

	
	
	if(strcmp(nick, connection->nick) == 0)
	{
		ciServerMessageFilter * filter;
		ciFilterMatch match;

		
		
		if(!ciIsEnteringChannel(chat, channel))
			return;

		
		
		memset(&match, 0, sizeof(ciFilterMatch));
		match.type = TYPE_JOIN;
		match.name = channel;

		
		
		filter = ciFindFilter(chat, 1, &match);
		if(filter != NULL)
		{
			JOINData * data;

			
			
			data = (JOINData *)filter->data;

			
			
			ciChannelEntered(chat, channel, &data->callbacks);

			
			
			ciSetChannelPassword(chat, channel, data->password);

			
			
			data->joined = CHATTrue;

			
			
			ciSocketSendf(&connection->chatSocket, "MODE %s", channel);
		}

		return;
	}

	
	
	if(ciInChannel(chat, channel))
		ciUserEnteredChannel(chat, nick, channel, mode, user, address);

	
	
	if(ciWasJoinCallbackCalled(chat, channel))  
	{
		
		
		callbacks = ciGetChannelCallbacks(chat, channel);
		if(callbacks != NULL)
		{
			if(callbacks->userJoined != NULL)
			{
				ciCallbackUserJoinedParams params;
				params.channel = channel;
				params.user = nick;
				params.mode = mode;
				ciAddCallback(chat, CALLBACK_USER_JOINED, (void*)callbacks->userJoined, &params, callbacks->param, 0, channel);
			}

			
			
			if(callbacks->userListUpdated != NULL)
			{
				ciCallbackUserListUpdatedParams params;
				params.channel = channel;
				ciAddCallback(chat, CALLBACK_USER_LIST_UPDATED, (void*)callbacks->userListUpdated, &params, callbacks->param, 0, channel);
			}
		}
	}
}

void ciPartHandler(CHAT chat, const ciServerMessage * message)
{
	char * nick;
	char * channel;
	char * reason;
	chatChannelCallbacks * callbacks;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciPartHandler called\n");
#endif
	
	nick = message->nick;
	channel = message->params[0];
	if (message->numParams > 1) 
		reason = message->params[1];
	else
		reason = "";

	
	
	if(strcmp(nick, connection->nick) == 0)
	{
		
		
	}
	else
	{
		
		
		ciUserLeftChannel(chat, nick, channel);

		
		
		if(ciWasJoinCallbackCalled(chat, channel))
		{
			
			
			callbacks = ciGetChannelCallbacks(chat, channel);
			if(callbacks != NULL)
			{
				if(callbacks->userParted != NULL)
				{
					ciCallbackUserPartedParams params;
					params.channel = channel;
					params.user = nick;
					params.why = CHAT_LEFT;
					params.reason = reason;
					params.kicker = NULL;
					ciAddCallback(chat, CALLBACK_USER_PARTED, (void*)callbacks->userParted, &params, callbacks->param, 0, channel);
				}

				
				
				if(callbacks->userListUpdated != NULL)
				{
					ciCallbackUserListUpdatedParams params;
					params.channel = channel;
					ciAddCallback(chat, CALLBACK_USER_LIST_UPDATED, (void*)callbacks->userListUpdated, &params, callbacks->param, 0, channel);
				}
			}
		}
	}
}

void ciKickHandler(CHAT chat, const ciServerMessage * message)
{
	char * channel;
	char * kicker;
	char * kickee;
	char * reason;
	chatChannelCallbacks * callbacks;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciKickHandler called\n");
#endif
	
	assert((message->numParams == 2) || (message->numParams == 3));
	if((message->numParams != 2) && (message->numParams != 3))
		return; 

	channel = message->params[0];
	kicker = message->nick;
	kickee = message->params[1];
	if(message->numParams == 3)
		reason = message->params[2];
	else
		reason = "";

	
	
	ciUserLeftChannel(chat, kickee, channel);

	
	
	callbacks = ciGetChannelCallbacks(chat, channel);
	if(callbacks != NULL)
	{	
		
		
		if(strcasecmp(kickee, connection->nick) == 0)
		{
			
			
			if(callbacks->kicked != NULL)
			{
				ciCallbackKickedParams params;
				params.channel = channel;
				params.user = kicker;
				params.reason = reason;
				ciAddCallback(chat, CALLBACK_KICKED, (void*)callbacks->kicked, &params, callbacks->param, 0, NULL);
			}
			
			
			
			ciChannelLeft(chat, channel);
		}
		else
		{
			
			
			if(ciWasJoinCallbackCalled(chat, channel))
			{
				
				
				if(callbacks->userParted != NULL)
				{
					ciCallbackUserPartedParams params;
					params.channel = channel;
					params.user = kickee;
					params.why = CHAT_KICKED;
					params.reason = reason;
					params.kicker = kicker;
					ciAddCallback(chat, CALLBACK_USER_PARTED, (void*)callbacks->userParted, &params, callbacks->param, 0, channel);
				}
				
				
				
				if(callbacks->userListUpdated != NULL)
				{
					ciCallbackUserListUpdatedParams params;
					params.channel = channel;
					ciAddCallback(chat, CALLBACK_USER_LIST_UPDATED, (void*)callbacks->userListUpdated, &params, callbacks->param, 0, channel);
				}
			}
		}
	}
}

static void ciQuitEnumChannelsCallback(CHAT chat, const char * user, const char * channel, void * reason)
{
	chatChannelCallbacks * callbacks;
	
	ASSERT_STR(user);
	ASSERT_STR(channel);
	assert(reason != NULL);

	
	
	ciUserLeftChannel(chat, user, channel);

	
	
	if(ciWasJoinCallbackCalled(chat, channel))
	{
		
		
		callbacks = ciGetChannelCallbacks(chat, channel);
		if(callbacks != NULL)
		{
			
			
			if(callbacks->userParted != NULL)
			{
				ciCallbackUserPartedParams params;
				params.channel = (char *)channel;
				params.user = (char *)user;
				params.why = CHAT_QUIT;
				params.reason = (char *)reason;
				params.kicker = NULL;
				ciAddCallback(chat, CALLBACK_USER_PARTED, (void*)callbacks->userParted, &params, callbacks->param, 0, channel);
			}

			
			
			if(callbacks->userListUpdated != NULL)
			{
				ciCallbackUserListUpdatedParams params;
				params.channel = (char *)channel;
				ciAddCallback(chat, CALLBACK_USER_LIST_UPDATED, (void*)callbacks->userListUpdated, &params, callbacks->param, 0, channel);
			}
		}
	}
}

void ciQuitHandler(CHAT chat, const ciServerMessage * message)
{
	char * reason;
	

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciQuitHandler called\n");
#endif
	
	assert(message->numParams == 1);
	if(message->numParams != 1)
		return; 

	reason = message->params[0];

	
	
	ciUserEnumChannels(chat, message->nick, ciQuitEnumChannelsCallback, reason);
}

static void ciKillEnumChannelsCallback(CHAT chat, const char * user, const char * channel, void * param)
{
	chatChannelCallbacks * callbacks;
	char *reason = (char *)param;
	ASSERT_STR(user);
	ASSERT_STR(channel);
	assert(reason != NULL);

	
	
	ciUserLeftChannel(chat, user, channel);

	
	
	if(ciWasJoinCallbackCalled(chat, channel))
	{
		
		
		callbacks = ciGetChannelCallbacks(chat, channel);
		if(callbacks != NULL)
		{
			if(callbacks->userParted != NULL)
			{
				ciCallbackUserPartedParams params;
				params.channel = (char *)channel;
				params.user = (char *)user;
				params.why = CHAT_KILLED;
				params.reason = (char *)reason;
				params.kicker = NULL;
				ciAddCallback(chat, CALLBACK_USER_PARTED, (void*)callbacks->userParted, &params, callbacks->param, 0, channel);
			}

			
			
			if(callbacks->userListUpdated != NULL)
			{
				ciCallbackUserListUpdatedParams params;
				params.channel = (char *)channel;
				ciAddCallback(chat, CALLBACK_USER_LIST_UPDATED, (void*)callbacks->userListUpdated, &params, callbacks->param, 0, channel);
			}
		}
	}
}

void ciKillHandler(CHAT chat, const ciServerMessage * message)
{
	char * nick;
	char * reason;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciKillHandler called\n");
#endif
	
	assert(message->numParams == 2);
	if(message->numParams != 2)
		return; 

	nick = message->params[0];
	reason = message->params[1];

	
	
	ciUserEnumChannels(chat, nick, ciKillEnumChannelsCallback, reason);
}

void ciTopicHandler(CHAT chat, const ciServerMessage * message)
{
#line 2154
	assert(chat != NULL);
	char * channel;
	char * topic;
	chatChannelCallbacks * callbacks;
	

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciTopicHandler called\n");
#endif
	
#line 2160
	assert(message->numParams == 2);
	if(message->numParams != 2)
		return; 

	channel = message->params[0];
	topic = message->params[1];

	
	
	ciSetChannelTopic(chat, channel, topic);

	
	
	callbacks = ciGetChannelCallbacks(chat, channel);
	if((callbacks != NULL) && (callbacks->topicChanged != NULL))
	{
		ciCallbackTopicChangedParams params;
		params.channel = channel;
		params.topic = topic;
		ciAddCallback(chat, CALLBACK_TOPIC_CHANGED, (void*)callbacks->topicChanged, &params, callbacks->param, 0, channel);
	}
}

void ciModeHandler(CHAT chat, const ciServerMessage * message)
{
	ciModeChange * changes;
	ciModeChange * change;
	CHATChannelMode channelMode;
	char * channel;
	char * mode;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciModeHandler called\n");
#endif
	
	assert(message->numParams >= 2);
	if(message->numParams < 2)
		return; 

	channel = message->params[0];
	mode = message->params[1];

	
	
	if(!ciInChannel(chat, channel))
		return;

	
	
	changes = ciParseMode(mode, message->params + 2, message->numParams - 2);
	if(changes == NULL)
		return; 

	
	
	for(change = changes ; change->mode != MODE_END ; change++)
	{
		switch(change->mode)
		{
		case MODE_BAN:
			break;

		case MODE_INVITE_ONLY:
			break;

		case MODE_LIMIT:
			break;

		case MODE_PRIVATE:
			break;

		case MODE_SECRET:
			break;

		case MODE_KEY:
			if(change->enable)
				ciSetChannelPassword(chat, channel, change->param);
			else
				ciSetChannelPassword(chat, channel, NULL);
			break;

		case MODE_MODERATED:
			break;

		case MODE_NO_EXTERNAL_MESSAGES:
			break;

		case MODE_ONLY_OPS_CHANGE_TOPIC:
			break;

		case MODE_USERS_HIDDEN:
			break;

		case MODE_RECEIVE_WALLOPS:
			break;

		case MODE_OP:
			if(change->param)
				ciUserChangedMode(chat, change->param, channel, CHAT_OP, change->enable);
			break;

		case MODE_VOICE:
			if(change->param)
				ciUserChangedMode(chat, change->param, channel, CHAT_VOICE, change->enable);
			break;
		case MODE_OPS_OBEY_CHANNEL_LIMIT:
			break;
		default:
			assert(0);
		}
	}

	
	
	if(!ciGetChannelMode(chat, channel, &channelMode))
	{
		gsifree(changes);
		return; 
	}
	ciApplyChangesToMode(&channelMode, changes);
	ciSetChannelMode(chat, channel, &channelMode);

	
	
	gsifree(changes);
}

void ciErrorHandler(CHAT chat, const ciServerMessage * message)
{
	

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrorHandler called\n");
#endif

	assert(message->numParams == 1);
	if(message->numParams != 1)
		return; 

	
	
	ciHandleDisconnect(chat, message->params[0]);
}

void ciInviteHandler(CHAT chat, const ciServerMessage * message)
{
	char * nick;
	char * channel;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciInviteHandler called\n");
#endif
	
	assert(message->numParams == 2);
	if(message->numParams != 2)
		return; 

	
	
	nick = message->nick;
	channel = message->params[1];

	
	
	if(connection->globalCallbacks.invited != NULL)
	{
		ciCallbackInvitedParams params;
		params.channel = channel;
		params.user = nick;
		ciAddCallback(chat, CALLBACK_INVITED, (void*)connection->globalCallbacks.invited, &params, connection->globalCallbacks.param, 0, NULL);
	}
}

void ciNameReplyHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch matches[4];
	ciServerMessageFilter * filter;
	char * channel;
	NAMESData * data = NULL;
	char * names;
	char * nick;
	char * str;
	void * tempPtr;
	int mode;
	int len;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciNameReplyHandler called\n");
#endif
	
	assert(message->numParams == 4);
	if(message->numParams != 4)
		return; 

	channel = message->params[2];
	names = message->params[3];

	
	
	memset(matches, 0, sizeof(matches));
	matches[0].type = TYPE_JOIN;
	matches[0].name = channel;
	matches[1].type = TYPE_UNQUIET;
	matches[1].name = channel;
	matches[2].type = TYPE_NAMES;
	matches[2].name = channel;
	matches[3].type = TYPE_NAMES;

	
	
	filter = ciFindFilter(chat, 4, matches);
	if(!filter)
		return;

	
	
	if(filter->type != TYPE_JOIN)
		data = (NAMESData *)filter->data;

	
	
	nick = strtok(names, " ");
	while(nick != NULL)
	{
		assert(nick[0] != '\0');
		
		
		
		if(nick[0] == '@')
		{
			assert(nick[1] != '\0');
			mode = CHAT_OP;
			nick++;
		}
		else if(nick[0] == '+')
		{
			assert(nick[1] != '\0');
			mode = CHAT_VOICE;
			nick++;
		}
		else
			mode = CHAT_NORMAL;

		if(filter->type != TYPE_JOIN)
		{
			
			
			if(data->numUsers == data->len)
			{
				tempPtr = (char **)gsirealloc(data->users, sizeof(char *) * (data->len + NAMES_ARRAY_INC));
				if(tempPtr == NULL)
				{
					assert(0);
					return; 
				}
				data->users = (char **)tempPtr;
				tempPtr = (char **)gsirealloc(data->modes, sizeof(int) * (data->len + NAMES_ARRAY_INC));
				if(tempPtr == NULL)
				{
					assert(0);
					return; 
				}
				data->modes = (int *)tempPtr;
				data->len += NAMES_ARRAY_INC;
			}

			
			
			len = (int)(strlen(nick) + 1);
			str = (char *)gsimalloc((unsigned int)len);
			if(str == NULL)
			{
				assert(0);
				return; 
			}
			memcpy(str, nick, (unsigned int)len);

			
			
			data->users[data->numUsers] = str;
			data->modes[data->numUsers] = mode;
			data->numUsers++;
		}

		if((filter->type == TYPE_JOIN) || (filter->type == TYPE_UNQUIET))
		{
			
			
			ciUserEnteredChannel(chat, nick, channel, mode, NULL, NULL);
		}

		
		
		nick = strtok(NULL, " ");
	}
}

void ciEndOfNamesHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch matches[4];
	ciServerMessageFilter * filter;
	char * channel;
	

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciEndOfNamesHandler called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	
	
	channel = message->params[1];

	
	
	if(strcmp(channel, "*") == 0)
		channel = NULL;

	
	
	memset(matches, 0, sizeof(matches));
	matches[0].type = TYPE_JOIN;
	matches[0].name = channel;
	matches[1].type = TYPE_UNQUIET;
	matches[1].name = channel;
	matches[2].type = TYPE_NAMES;
	matches[2].name = channel;
	matches[3].type = TYPE_NAMES;
	
	
	
	filter = ciFindFilter(chat, 4, matches);
	if(!filter)
		return;

	
	
	if(filter->type == TYPE_JOIN)
	{
		ciCallbackEnterChannelParams params;
		params.success = CHATTrue;
		params.result = CHATEnterSuccess;
		params.channel = channel;

		if(!filter->callback)
		{
			
			
			ciJoinCallbackCalled(chat, channel);
		}

		FINISH_FILTER;

		return;
	}

	
	
	if(filter->type == TYPE_UNQUIET)
	{
		NAMESData * data = (NAMESData *)filter->data;
		ciCallbackNewUserListParams params;
		params.channel = channel;
		params.numUsers = data->numUsers;
		params.users = data->users;
		params.modes = data->modes;

		FINISH_FILTER;

		return;
	}

	
	
	if(filter->type == TYPE_NAMES)
	{
		NAMESData * data = (NAMESData *)filter->data;
		ciCallbackEnumUsersParams params;
		params.success = CHATTrue;
		params.channel = channel;
		params.numUsers = data->numUsers;
		params.users = data->users;
		params.modes = data->modes;

		FINISH_FILTER;

		return;
	}
}

void ciRplTopicHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	char * topic;
	char * channel;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplTopicHandler called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	channel = message->params[1];
	topic = message->params[2];

	
	
	ciSetChannelTopic(chat, channel, topic);

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_TOPIC;
	match.name = channel;

	
	
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		ciCallbackGetChannelTopicParams params;
		params.success = CHATTrue;
		params.channel = channel;
		params.topic = topic;

		FINISH_FILTER;
	}
	else
	{
		
		
		chatChannelCallbacks * callbacks;
		callbacks = ciGetChannelCallbacks(chat, channel);
		if((callbacks != NULL) && (callbacks->topicChanged != NULL))
		{
			ciCallbackTopicChangedParams params;
			params.channel = channel;
			params.topic = topic;
			ciAddCallback(chat, CALLBACK_TOPIC_CHANGED, (void*)callbacks->topicChanged, &params, callbacks->param, 0, channel);
		}
	}
}

void ciRplNoTopicHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	char * channel;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplNoTopicHandler called\n");
#endif
	
	assert(message->numParams >= 2);
	if(message->numParams < 2)
		return; 

	
	
	channel = message->params[1];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_TOPIC;
	match.name = channel;

	
	
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		ciCallbackGetChannelTopicParams params;
		params.success = CHATTrue;
		params.channel = channel;
		params.topic = "";

		FINISH_FILTER;
	}
	else
	{
		
		
		chatChannelCallbacks * callbacks;
		callbacks = ciGetChannelCallbacks(chat, channel);
		if((callbacks != NULL) && (callbacks->topicChanged != NULL))
		{
			ciCallbackTopicChangedParams params;
			params.channel = channel;
			params.topic = "";
			ciAddCallback(chat, CALLBACK_TOPIC_CHANGED, (void*)callbacks->topicChanged, &params, callbacks->param, 0, channel);
		}
	}
}

void ciErrNickInUseHandler(CHAT chat, const ciServerMessage * message)
{
	char * oldNick;
	char * newNick;
	ciServerMessageFilter * filter;
	ciFilterMatch match;
	
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplNickErrorHandler called\n");
#endif

	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	oldNick = message->params[0];
	newNick = message->params[1];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_NICK;
	match.name = oldNick;
	match.name2 = newNick;

	
	
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		
		
		ciCallbackChangeNickParams params;
		params.success = CHATFalse;
		params.oldNick = oldNick;
		params.newNick = newNick;

		FINISH_FILTER;
	}
	else
	{
		
		
		assert(connection->connecting);
		if(connection->connecting)
			ciNickError(chat, CHAT_IN_USE, connection->nick, 0, NULL);
	}
}

void ciRplWhoReplyHandler(CHAT chat, const ciServerMessage * message)
{
	char * channel;
	char * nick;
	char * user;
	char * address;
	ciServerMessageFilter * filter;
	ciFilterMatch matches[3];

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplWhoReplyHandler called\n");
#endif

	assert(message->numParams == 8);
	if(message->numParams != 8)
		return; 

	channel = message->params[1];
	user = message->params[2];
	address = message->params[3];
	nick = message->params[5];

	
	
	ciSetUserBasicInfo(chat, nick, user, address);

	
	
	memset(matches, 0, sizeof(matches));
	matches[0].type = TYPE_UMODE;
	matches[0].name = nick;
	matches[0].name2 = channel;
	matches[1].type = TYPE_WHO;
	matches[1].name = nick;
	matches[2].type = TYPE_CWHO;
	matches[2].name = channel;

	
	
	filter = ciFindFilter(chat, 3, matches);
	if(!filter)
		return;

	
	
	if(filter->type == TYPE_UMODE)
	{
		ciCallbackGetUserModeParams params;
		int mode;

		
		
		mode = 0;
		if(strchr(message->params[6], '@'))
			mode |= CHAT_OP;
		if(strchr(message->params[6], '+'))
			mode |= CHAT_VOICE;

		params.success = CHATTrue;
		params.channel = channel;
		params.user = nick;
		params.mode = mode;

		FINISH_FILTER;

		return;
	}

	
	
	if(filter->type == TYPE_WHO)
	{
		ciCallbackGetBasicUserInfoParams params;

		params.success = CHATTrue;
		params.nick = nick;
		params.user = user;
		params.address = address;
		
		ciAddCallback(chat, CALLBACK_GET_BASIC_USER_INFO, filter->callback, &params, filter->param, filter->ID, NULL);

		
		
		filter->callback = NULL;

		return;
	}

	
	
	if((filter->type == TYPE_CWHO) && filter->callback)
	{
		ciCallbackGetChannelBasicUserInfoParams params;

		params.success = CHATTrue;
		params.channel = filter->name;
		params.nick = nick;
		params.user = user;
		params.address = address;

		ciAddCallback(chat, CALLBACK_GET_CHANNEL_BASIC_USER_INFO, filter->callback, &params, filter->param, filter->ID, NULL);

		return;
	}
}

void ciRplEndOfWhoHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch matches[2];
	ciServerMessageFilter * filter;
	char * name;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplEndOfWhoHandler called\n");
#endif

	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	name = message->params[1];

	
	
	memset(matches, 0, sizeof(matches));
	matches[0].type = TYPE_WHO;
	matches[0].name = name;
	matches[1].type = TYPE_CWHO;
	matches[1].name = name;

	
	
	filter = ciFindFilter(chat, 2, matches);
	if(!filter)
		return;

	
	
	if(filter->type == TYPE_WHO)
	{
		ciCallbackGetBasicUserInfoParams params;

		params.success = CHATFalse;
		params.nick = name;
		params.user = NULL;
		params.address = NULL;

		FINISH_FILTER;

		return;
	}

	
	
	if(filter->type == TYPE_CWHO)
	{
		ciCallbackGetChannelBasicUserInfoParams params;

		params.success = CHATTrue;
		params.channel = name;
		params.nick = NULL;
		params.user = NULL;
		params.address = NULL;

		FINISH_FILTER;

		return;
	}
}

static char * ciParseValue(const char * flags, int * len)
{
	int i;
	char * str;

	assert(flags);
	assert(len);

	
	
	if(!flags || (flags[0] != '\\'))
		return NULL;

	
	
	flags++;

	
	
	for(i = 0 ; flags[i] && (flags[i] != '\\') ; i++)  { };

	
	
	str = (char *)gsimalloc((unsigned int)i + 1);
	if(!str)
		return NULL;

	
	
	memcpy(str, flags, (unsigned int)i);
	str[i] = '\0';

	
	
	*len = (i + 1);
	return str;
}

void ciRplGetKeyHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	const char * nick;
	const char * cookie;
	const char * flags;
	int num;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplGetKeyHandler called\n");
#endif

	assert(message->numParams == 4);
	if(message->numParams != 4)
		return; 

	nick = message->params[1];
	cookie = message->params[2];
	flags = message->params[3];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_GETKEY;
	match.name = cookie;

	
	
	filter = ciFindFilter(chat, 1, &match);
	if(filter)
	{
		GETKEYData * data;
		ciCallbackGetGlobalKeysParams params;
		char ** values;
		char * str;
		int i;
		int len;

		data = (GETKEYData *)filter->data;
		num = data->num;

		
		
		values = (char **)gsimalloc(sizeof(char *) * num);
		if(!values)
			return;

		
		
		for(i = 0 ; i < num ; i++)
		{
			str = ciParseValue(flags, &len);
			if(str)
			{
				values[i] = str;
				flags += len;
			}
			else
			{
				values[i] = goastrdup("");
			}
		}

		
		
		params.success = CHATTrue;
		params.user = (char *)nick;
		params.num = num;
		params.keys = data->keys;
		params.values = values;

		
		
		if(!data->channel)
		{
			FINISH_FILTER;
		}
		else
		{
			ciAddCallback(chat, CALLBACK_GET_GLOBAL_KEYS, filter->callback, &params, filter->param, filter->ID, NULL);
		}

		for(i = 0 ; i < num ; i++)
			gsifree(values[i]);
		gsifree(values);
	}
}

void ciRplEndGetKeyHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	const char * cookie;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplEndGetKeyHandler called\n");
#endif

	assert(message->numParams == 4);
	if(message->numParams != 4)
		return; 

	cookie = message->params[2];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_GETKEY;
	match.name = cookie;

	
	
	filter = ciFindFilter(chat, 1, &match);
	if(filter)
	{
		ciCallbackGetGlobalKeysParams params;
		GETKEYData * data;

		data = (GETKEYData *)filter->data;

		
		
		params.success = CHATTrue;
		params.user = NULL;
		params.num = data->num;
		params.keys = data->keys;
		params.values = NULL;

		FINISH_FILTER;
	}
}

void ciRplGetCKeyHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	const char * nick;
	const char * cookie;
	char * flags;
	const char * channel;
	int num;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplGetCKeyHandler called\n");
#endif

	assert(message->numParams == 5);
	if(message->numParams != 5)
		return; 

	channel = message->params[1];
	nick = message->params[2];
	cookie = message->params[3];
	flags = message->params[4];

	
	
	if(strcmp(cookie, "BCAST") == 0)
	{
		chatChannelCallbacks * callbacks;
		ciCallbackBroadcastKeyChangedParams params;
		char * key;
		char * value;
		int temp;

		callbacks = ciGetChannelCallbacks(chat, channel);
		if(callbacks && callbacks->broadcastKeyChanged)
		{
			memset(&params, 0, sizeof(ciCallbackBroadcastKeyChangedParams));
			params.channel = (char *)channel;
			params.user = (char *)nick;

			while(*flags)
			{
				key = strstr(flags, "b_");
				flags = key;
				while(*flags && (*flags != '\\'))
					flags++;
				if(!*flags)
					break;
				*flags++ = '\0';
				value = flags;
				while(*flags && (*flags != '\\'))
					flags++;
				temp = *flags;
				*flags = '\0';

				
				
				params.key = key;
				params.value = value;
				ciAddCallback(chat, CALLBACK_BROADCAST_KEY_CHANGED, (void*)callbacks->broadcastKeyChanged, &params, callbacks->param, 0, channel);

				*flags = (char)temp;
			}
		}

		return;
	}

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_GETCKEY;
	match.name = cookie;

	
	
	filter = ciFindFilter(chat, 1, &match);
	if(filter)
	{
		GETCKEYData * data;
		ciCallbackGetChannelKeysParams params;
		char ** values;
		char * key;
		char * value;
		int i;
		int len;
		char ** tempPtr;

		data = (GETCKEYData *)filter->data;
		num = data->num;

		
		
		values = (char **)gsimalloc(sizeof(char *) * num);
		if(!values)
			return;

		
		
		for(i = 0 ; i < num ; i++)
		{
			value = ciParseValue(flags, &len);
			values[i] = value;
			if(value)
				flags += len;
		}

		
		
		if(data->allBroadcastKeys)
		{
			while((key = ciParseValue(flags, &len)) != NULL)
			{
				flags += len;
				value = ciParseValue(flags, &len);
				if(value)
				{
					flags += len;

					
					
					tempPtr = (char **)gsirealloc(data->keys, sizeof(char *) * (num + 1));
					if(tempPtr)
					{
						data->keys = tempPtr;
						tempPtr = (char **)gsirealloc(values, sizeof(char *) * (num + 1));
						if(tempPtr)
						{
							values = tempPtr;
							data->keys[num] = key;
							values[num] = value;
							num++;
						}
						else
						{
							gsifree(key);
							gsifree(value);
						}
					}
					else
					{
						gsifree(key);
						gsifree(value);
					}
				}
				else
				{
					gsifree(key);
					break;
				}
			}

			
			
			data->num = num;
		}

		
		
		params.success = CHATTrue;
		params.channel = (char *)channel;
		params.user = (char *)nick;
		params.num = num;
		params.keys = data->keys;
		params.values = values;

		
		
		if(!data->channel)
		{
			FINISH_FILTER;
		}
		else
		{
			ciAddCallback(chat, CALLBACK_GET_CHANNEL_KEYS, filter->callback, &params, filter->param, filter->ID, NULL);
		}

		for(i = 0 ; i < num ; i++)
			gsifree(values[i]);
		gsifree(values);
	}
}

void ciRplEndGetCKeyHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	const char * cookie;
	const char * channel;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplEndGetCKeyHandler called\n");
#endif

	assert(message->numParams == 4);
	if(message->numParams != 4)
		return; 

	channel = message->params[1];
	cookie = message->params[2];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_GETCKEY;
	match.name = cookie;

	
	
	filter = ciFindFilter(chat, 1, &match);
	if(filter)
	{
		GETCKEYData * data;
		ciCallbackGetChannelKeysParams params;

		data = (GETCKEYData *)filter->data;

		
		
		params.success = CHATTrue;
		params.channel = (char *)channel;
		params.user = NULL;
		params.num = data->num;
		params.keys = data->keys;
		params.values = NULL;

		FINISH_FILTER;
	}
}

void ciRplGetChanKeyHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	const char * cookie;
	char * flags;
	const char * channel;
	int num;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplGetChanKeyHandler called\n");
#endif

	assert(message->numParams == 4);
	if(message->numParams != 4)
		return; 

	channel = message->params[1];
	cookie = message->params[2];
	flags = message->params[3];

	
	
	if(strcmp(cookie, "BCAST") == 0)
	{
		chatChannelCallbacks * callbacks;
		ciCallbackBroadcastKeyChangedParams params;
		char * key;
		char * value;
		int temp;

		callbacks = ciGetChannelCallbacks(chat, channel);
		if(callbacks && callbacks->broadcastKeyChanged)
		{
			memset(&params, 0, sizeof(ciCallbackBroadcastKeyChangedParams));
			params.channel = (char *)channel;
			params.user = NULL;

			while(*flags)
			{
				key = strstr(flags, "b_");
				flags = key;
				while(*flags && (*flags != '\\'))
					flags++;
				if(!*flags)
					break;
				*flags++ = '\0';
				value = flags;
				while(*flags && (*flags != '\\'))
					flags++;
				temp = *flags;
				*flags = '\0';

				
				
				params.key = key;
				params.value = value;
				ciAddCallback(chat, CALLBACK_BROADCAST_KEY_CHANGED, (void*)callbacks->broadcastKeyChanged, &params, callbacks->param, 0, channel);

				*flags = (char)temp;
			}
		}

		return;
	}

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_GETCHANKEY;
	match.name = cookie;

	
	
	filter = ciFindFilter(chat, 1, &match);
	if(filter)
	{
		GETCHANKEYData * data;
		ciCallbackGetChannelKeysParams params;
		char ** values;
		char ** keys = NULL;
		char * key;
		char * value;
		int i;
		int len;
		char ** tempPtr;

		data = (GETCHANKEYData *)filter->data;
		num = data->num;

		
		
		if(num)
		{
			values = (char **)gsimalloc(sizeof(char *) * num);
			if(!values)
				return;

			
			
			for(i = 0 ; i < num ; i++)
			{
				value = ciParseValue(flags, &len);
				values[i] = value;
				if(value)
					flags += len;
			}

			
			
			if(data->allBroadcastKeys)
			{
				while((key = ciParseValue(flags, &len)) != NULL)
				{
					flags += len;
					value = ciParseValue(flags, &len);
					if(value)
					{
						flags += len;

						
						
						tempPtr = (char **)gsirealloc(data->keys, sizeof(char *) * (num + 1));
						if(tempPtr)
						{
							data->keys = tempPtr;
							tempPtr = (char **)gsirealloc(values, sizeof(char *) * (num + 1));
							if(tempPtr)
							{
								values = tempPtr;
								data->keys[num] = key;
								values[num] = value;
								num++;
							}
							else
							{
								gsifree(key);
								gsifree(value);
							}
						}
						else
						{
							gsifree(key);
							gsifree(value);
						}
					}
					else
					{
						gsifree(key);
						break;
					}
				}

				
				
				data->num = num;
			}
		}
		else
		{
			char ** keysTemp;
			char ** valuesTemp;

			keys = NULL;
			values = NULL;
			num = 0;
			while(1)
			{
				key = ciParseValue(flags, &len);
				if(!key)
					break;
				flags += len;
				value = ciParseValue(flags, &len);
				if(!value)
				{
					gsifree(key);
					break;
				}
				flags += len;

				keysTemp = (char **)gsirealloc(keys, sizeof(char *) * (num + 1));
				valuesTemp = (char **)gsirealloc(values, sizeof(char *) * (num + 1));
				if(!keysTemp || !valuesTemp)
				{
					gsifree(key);
					gsifree(value);
					while(num--)
					{
						gsifree(keys[num]);
						gsifree(values[num]);
					}
					if(keysTemp)
						gsifree(keysTemp);
					else
						gsifree(keys);
					if(valuesTemp)
						gsifree(valuesTemp);
					else
						gsifree(values);
				}

				keys = keysTemp;
				keys[num] = key;
				values = valuesTemp;
				values[num] = value;

				num++;
			}

			data->num = num;
			data->keys = keys;
		}

		
		
		params.success = CHATTrue;
		params.channel = (char *)channel;
		params.user = NULL;
		params.num = num;
		params.keys = data->keys;
		params.values = values;

		FINISH_FILTER;

		for(i = 0 ; i < num ; i++)
			gsifree(values[i]);
		gsifree(values);
	}
}

void ciRplUserIPHandler(CHAT chat, const ciServerMessage * message)
{
	char * IP;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplUserIPHandler called\n");
#endif

	assert(message->numParams >= 1);
	if(message->numParams < 1)
		return; 

	IP = strchr(message->params[message->numParams - 1], '@');
	if(IP)
	{
		IP++;

		if(connection->fillInUserCallback)
		{
#ifndef GSI_UNICODE
			char user[MAX_USER];
			connection->fillInUserCallback(chat, inet_addr(IP), user, connection->connectParam);
			strzcpy(connection->user, user, MAX_USER);
#else
			unsigned short user[MAX_USER];
			connection->fillInUserCallback(chat, inet_addr(IP), user, connection->connectParam);
			wcszcpy(connection->userW, user, MAX_USER);		
			UCS2ToAsciiString(user, connection->user); 
#endif
		}
	}

	
	
	ciSendNickAndUser(chat);
}

void ciRplListStartHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplListStartHandler called\n");
#endif

	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_LIST;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		LISTData * data = (LISTData *)filter->data;
		assert(data != NULL);
		

		data->gotStart = CHATTrue;
	}
	
	GSI_UNUSED(message);
}

void ciRplListHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplListHandler called\n");
#endif
	
	assert(message->numParams == 4);
	if(message->numParams != 4)
		return; 

	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_LIST;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		if(filter->callback != NULL)
		{
			ciCallbackEnumChannelsEachParams params;
			int index;
			char * channel;
			int numUsers;
			char * topic;
			int len;
			void * tempPtr;
			LISTData * data = (LISTData *)filter->data;

			assert(data != NULL);
			

			
			
			len = (int)(strlen(message->params[1]) + 1);
			channel = (char *)gsimalloc((unsigned int)len);
			if(channel == NULL)
				return; 
			memcpy(channel, message->params[1], (unsigned int)len);

			
			
			numUsers = atoi(message->params[2]);

			
			
			len = (int)(strlen(message->params[3]) + 1);
			topic = (char *)gsimalloc((unsigned int)len);
			if(topic == NULL)
			{
				gsifree(channel);
				return; 
			}
			memcpy(topic, message->params[3], (unsigned int)len);

			
			
			index = data->numChannels;

			
			
			params.success = CHATTrue;
			params.index = index;
			params.channel = channel;
			params.topic = topic;
			params.numUsers = numUsers;
			ciAddCallback(chat, CALLBACK_ENUM_CHANNELS_EACH, filter->callback, &params, filter->param, filter->ID, NULL);

			

			
			
			tempPtr = gsirealloc(data->channels, sizeof(char *) * (data->numChannels + 1));
			if(tempPtr == NULL)
			{
				gsifree(channel);
				gsifree(topic);
				return; 
			}
			data->channels = (char **)tempPtr;
			data->channels[index] = channel;

			
			
			tempPtr = gsirealloc(data->numUsers, sizeof(int) * (data->numChannels + 1));
			if(tempPtr == NULL)
			{
				gsifree(channel);
				gsifree(topic);
				return; 
			}
			data->numUsers = (int *)tempPtr;
			data->numUsers[index] = numUsers;

			
			
			tempPtr = gsirealloc(data->topics, sizeof(char *) * (data->numChannels + 1));
			if(tempPtr == NULL)
			{
				gsifree(channel);
				gsifree(topic);
				return; 
			}
			data->topics = (char **)tempPtr;
			data->topics[index] = topic;

			
			
			data->numChannels++;
		}
	}
}

void ciRplListEndHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplListEndHandler called\n");
#endif

	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_LIST;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		LISTData * data = (LISTData *)filter->data;
		ciCallbackEnumChannelsAllParams params;
		params.success = CHATTrue;
		params.numChannels = data->numChannels;
		params.channels = data->channels;
		params.numUsers = data->numUsers;
		params.topics = data->topics;

		FINISH_FILTER;
	}
	
	GSI_UNUSED(message);
}

void ciRplChannelModeIsHandler(CHAT chat, const ciServerMessage * message)
{
	char * channel;
	char * modes;
	ciModeChange * changes;
	CHATChannelMode mode;
	CHATChannelMode dummyMode;
	ciServerMessageFilter * filter;
	ciFilterMatch match;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplChannelModeIs called\n");
#endif
	
	assert(message->numParams >=3);
	if(message->numParams < 3)
		return; 

	channel = message->params[1];
	modes = message->params[2];

	
	
	changes = ciParseMode(modes, message->params + 3, message->numParams - 3);
	if(changes == NULL)
		return; 

	
	
	memset(&mode, 0, sizeof(CHATChannelMode));
	ciApplyChangesToMode(&mode, changes);

	
	
	if(!ciGetChannelMode(chat, channel, &dummyMode))
	{
		chatChannelCallbacks * callbacks;

		
		
		ciSetChannelMode(chat, channel, &mode);

		
		
		callbacks = ciGetChannelCallbacks(chat, channel);
		if((callbacks != NULL) && (callbacks->channelModeChanged != NULL))
		{
			ciCallbackChannelModeChangedParams params;
			params.channel = channel;
			params.mode = &mode;
			ciAddCallback(chat, CALLBACK_CHANNEL_MODE_CHANGED, (void*)callbacks->channelModeChanged, &params, callbacks->param, 0, channel);
		}
	}

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_CMODE;
	match.name = channel;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		ciCallbackGetChannelModeParams params;
		params.success = CHATTrue;
		params.channel = channel;
		params.mode = &mode;

		FINISH_FILTER;
	}

	
	
	gsifree(changes);
}

void ciRplWhoisUserHandler(CHAT chat, const ciServerMessage * message)
{
	char * nick;
	ciFilterMatch matches[2];
	ciServerMessageFilter * filter;
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplWhoisUserHandler called\n");
#endif
	
	assert(message->numParams == 6);
	if(message->numParams != 6)
		return; 

	
	
	nick = message->params[1];

	
	
	memset(matches, 0, sizeof(matches));
	matches[0].type = TYPE_WHOIS;
	matches[0].name = nick;
	matches[1].type = TYPE_BAN;
	matches[1].name = nick;

	
	
	filter = ciFindFilter(chat, 2, matches);
	if(!filter)
		return;

	
	
	if(filter->type == TYPE_WHOIS)
	{
		char * user;
		char * name;
		char * address;
		
		WHOISData * data = (WHOISData *)filter->data;

		
		
		user = message->params[2];
		name = message->params[5];
		address = message->params[3];

		
		
		data->user = goastrdup(user);
		if(data->user == NULL)
			return; 

		
		
		data->name = goastrdup(name);
		if(data->name == NULL)
			return; 

		
		
		data->address = goastrdup(address);
		if(data->address == NULL)
			return; 

		return;
	}

	
	
	if(filter->type == TYPE_BAN)
	{
		char * host;

		BANData * data = (BANData *)filter->data;
		assert(data != NULL);
		ASSERT_STR(data->channel);

		host = message->params[3];

		
		
		ciSocketSendf(&connection->chatSocket, "MODE %s +b *!*@%s", data->channel, host);

		ciFinishFilter(chat, filter, NULL);
	}
}

void ciRplWhoisChannelsHandler(CHAT chat, const ciServerMessage * message)
{
	char * nick;
	ciServerMessageFilter * filter;
	ciFilterMatch match;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplWhoisChannelsHandler called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	
	
	nick = message->params[1];

	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_WHOIS;
	match.name = nick;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		char * channels;
		char * str;
		char * channel;
		char ** tempPtr;
		WHOISData * data = (WHOISData *)filter->data;

		channels = message->params[2];
		str = strtok(channels, " ");
		while(str != NULL)
		{
			
			
			if(str[0] == '-')
				str++;

			
			
			if((str[0] == '@') || (str[0] == '+'))
				str++;

			
			
			channel = goastrdup(str);
			if(channel == NULL)
				return; 
			tempPtr = (char **)gsirealloc(data->channels, sizeof(char *) * (data->numChannels + 1));
			if(tempPtr == NULL)
			{
				gsifree(channel);
				return; 
			}
			data->channels = tempPtr;
			data->channels[data->numChannels] = channel;
			data->numChannels++;

			
			
			str = strtok(NULL, " ");
		}
	}
}

void ciRplEndOfWhoisHandler(CHAT chat, const ciServerMessage * message)
{
	char * nick;
	ciServerMessageFilter * filter;
	ciFilterMatch match;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplEndOfWhoisHandler called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	
	
	nick = message->params[1];

	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_WHOIS;
	match.name = nick;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		WHOISData * data = (WHOISData *)filter->data;
		ciCallbackGetUserInfoParams params;
		params.success = (CHATBool)(data->user != NULL);  
		params.nick = nick;
		params.user = data->user;
		params.name = data->name;
		params.address = data->address;
		params.numChannels = data->numChannels;
		params.channels = data->channels;

		FINISH_FILTER;
	}
}

void ciRplBanListHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	char * channel;
	char * ban;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplBanListHandler called\n");
#endif

	assert(message->numParams >= 3);
	if(message->numParams < 3)
		return; 

	channel = message->params[1];
	ban = message->params[2];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_GETBAN;
	match.name = channel;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		int len;
		void * tempPtr;
		GETBANData * data = (GETBANData *)filter->data;
		assert(data != NULL);
		assert(data->numBans >= 0);

		
		
		tempPtr = gsirealloc(data->bans, sizeof(char *) * (data->numBans + 1));
		if(tempPtr == NULL)
			return; 
		data->bans = (char **)tempPtr;

		
		
		len = (int)(strlen(ban) + 1);
		tempPtr = gsimalloc((unsigned int)len);
		if(tempPtr == NULL)
			return; 
		memcpy(tempPtr, ban, (unsigned int)len);
		data->bans[data->numBans] = (char *)tempPtr;
		data->numBans++;
	}
}

void ciRplEndOfBanListHandler(CHAT chat, const ciServerMessage * message)
{
	char * channel;
	ciServerMessageFilter * filter;
	ciFilterMatch match;
	
#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplEndOfBanListHandler called\n");
#endif

	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	channel = message->params[1];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_GETBAN;
	match.name = channel;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		GETBANData * data = (GETBANData *)filter->data;
		ciCallbackEnumChannelBansParams params;
		params.success = CHATTrue;
		params.channel = channel;
		params.numBans = data->numBans;
		params.bans = data->bans;

		FINISH_FILTER;
	}
}

void ciRplWelcomeHandler(CHAT chat, const ciServerMessage * message)
{
	char * nick;

	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplWelcomeHandler called\n");
#endif

	assert(message->numParams == 2);
	if(message->numParams != 2)
		return;

	nick = message->params[0];

	
	
	if(strcmp(connection->nick, nick) != 0)
	{
		strzcpy(connection->nick, nick, MAX_NICK);
#ifdef GSI_UNICODE
		
		AsciiToUCS2String(connection->nick, connection->nickW);
#endif
	}

	
	
	connection->connecting = CHATFalse;
	connection->connected = CHATTrue;

	
	
	if(connection->connectCallback != NULL)
		connection->connectCallback(chat, CHATTrue, 0, connection->connectParam);
}

void ciRplSecureKeyHandler(CHAT chat, const ciServerMessage * message)
{
	char * outKeyRand;
	char * inKeyRand;
	int outKeyLen;
	int inKeyLen;

	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplSecureKeyHandler called\n");
#endif

	assert(message->numParams == 3);
	if(message->numParams != 3)
		return;

	outKeyRand = message->params[1];
	inKeyRand = message->params[2];

	
	
	outKeyLen = (int)strlen(outKeyRand);
	inKeyLen = (int)strlen(inKeyRand);
	gs_xcode_buf(outKeyRand, outKeyLen, connection->secretKey);
	gs_xcode_buf(inKeyRand, inKeyLen, connection->secretKey);
	gs_prepare_key((unsigned char *)outKeyRand, outKeyLen, &connection->chatSocket.outKey);
	gs_prepare_key((unsigned char *)inKeyRand, inKeyLen, &connection->chatSocket.inKey);

	
	
	connection->chatSocket.secure = CHATTrue;

	
	
	if(connection->loginType != CINoLogin)
	{
		ciSendLogin(chat);
	}
	
	
	else if(connection->fillInUserCallback)
	{
		ciSocketSend(&connection->chatSocket, "USRIP");
	}
	
	
	else
	{
		ciSendNickAndUser(chat);
	}
}

void ciRplCDKeyHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	int result;
	char * msg;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplCDKeyHandler called\n");
#endif

	assert(message->numParams == 3);
	if(message->numParams != 3)
		return;

	result = atoi(message->params[1]);
	msg = message->params[2];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_CDKEY;

	
	
	filter = ciFindFilter(chat, 1, &match);
	if(filter)
	{
		ciCallbackAuthenticateCDKeyParams params;
		params.result = result;
		params.message = msg;

		FINISH_FILTER;
	}
}

void ciRplLoginHandler(CHAT chat, const ciServerMessage * message)
{
	CONNECTION;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplLoginHandler called\n");
#endif

	assert(message->numParams >= 3);
	if(message->numParams < 3)
		return;

	
	
	connection->userID = atoi(message->params[1]);
	connection->profileID = atoi(message->params[2]);

	
	
	if(connection->fillInUserCallback)
	{
		ciSocketSend(&connection->chatSocket, "USRIP");
	}
	
	
	else
	{
		ciSendNickAndUser(chat);
	}
}

void ciRplGetUdpRelayHandler(CHAT chat, const ciServerMessage * message)
{
	char *channel;
	int udpKey;
	char *udpIp;
	unsigned short udpPort;
	ciServerMessageFilter * filter;
	ciFilterMatch match;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciRplGetUdpRelayHandler called\n");
#endif
	assert(message->numParams >= 5);
	if(message->numParams < 5)
		return;

	channel = message->params[1];
	udpKey = atoi(message->params[2]);
	udpIp = message->params[3];
	udpPort = (unsigned short)atoi(message->params[4]);

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_GETUDPRELAY;
	match.name = channel;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		ciCallbackGetUdpRelayParams params;
		params.channel = channel;
		params.udpIp = udpIp;
		params.udpPort = udpPort;
		params.udpKey = udpKey;
		FINISH_FILTER;
	}


}

void ciErrNoSuchChannelHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch matches[2];
	ciServerMessageFilter * filter;
	char * channel;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrNoSuchChannel called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	
	
	channel = message->params[1];

	
	
	memset(&matches, 0, sizeof(ciFilterMatch));
	matches[0].type = TYPE_JOIN;
	matches[0].name = channel;
	matches[1].type = TYPE_CMODE;
	matches[1].name = channel;

	
	
	filter = ciFindFilter(chat, 2, matches);
	if(filter)
	{
		
		
		if(filter->type == TYPE_JOIN)
		{
			ciCallbackEnterChannelParams params;
			params.success = CHATFalse;
			params.result = CHATBadChannelName;
			params.channel = channel;

			FINISH_FILTER;

			return;
		}

		
		
		if(filter->type == TYPE_CMODE)
		{
			ciCallbackGetChannelModeParams params;
			params.success = CHATFalse;
			params.channel = channel;
			params.mode = NULL;

			FINISH_FILTER;

			return;
		}
	}

	
	
	filter = ciFindGetKeyFilter(chat, channel);
	if(filter)
	{
		ciCallbackGetGlobalKeysParams params;
		params.success = CHATFalse;
		params.user = NULL;
		params.num = 0;
		params.keys = NULL;
		params.values = NULL;

		FINISH_FILTER;

		return;
	}
}

void ciErrTooManyChannelsHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	char * channel;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrTooManyChannels called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	
	
	channel = message->params[1];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_JOIN;
	match.name = channel;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		ciCallbackEnterChannelParams params;
		params.success = CHATFalse;
		params.result = CHATTooManyChannels;
		params.channel = channel;

		FINISH_FILTER;
	}
}

void ciErrChannelIsFullHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	char * channel;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrChannelIsFull called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	
	
	channel = message->params[1];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_JOIN;
	match.name = channel;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		ciCallbackEnterChannelParams params;
		params.success = CHATFalse;
		params.result = CHATChannelIsFull;
		params.channel = channel;

		FINISH_FILTER;
	}
}

void ciErrInviteOnlyChanHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	char * channel;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrInviteOnlyChan called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	
	
	channel = message->params[1];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_JOIN;
	match.name = channel;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		ciCallbackEnterChannelParams params;
		params.success = CHATFalse;
		params.result = CHATInviteOnlyChannel;
		params.channel = channel;

		FINISH_FILTER;
	}
}

void ciErrBannedFromChanHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	char * channel;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrBannedFromChan called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	
	
	channel = message->params[1];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_JOIN;
	match.name = channel;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		ciCallbackEnterChannelParams params;
		params.success = CHATFalse;
		params.result = CHATBannedFromChannel;
		params.channel = channel;

		FINISH_FILTER;
	}
}

void ciErrBadChannelKeyHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	char * channel;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrBadChannelKey called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	
	
	channel = message->params[1];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_JOIN;
	match.name = channel;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		ciCallbackEnterChannelParams params;
		params.success = CHATFalse;
		params.result = CHATBadChannelPassword;
		params.channel = channel;

		FINISH_FILTER;
	}
}

void ciErrBadChanMaskHandler(CHAT chat, const ciServerMessage * message)
{
	ciFilterMatch match;
	ciServerMessageFilter * filter;
	char * channel;

#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrBadChanMask called\n");
#endif
	
	assert(message->numParams == 3);
	if(message->numParams != 3)
		return; 

	
	
	channel = message->params[1];

	
	
	memset(&match, 0, sizeof(ciFilterMatch));
	match.type = TYPE_JOIN;
	match.name = channel;
	filter = ciFindFilter(chat, 1, &match);
	if(filter != NULL)
	{
		ciCallbackEnterChannelParams params;
		params.success = CHATFalse;
		params.result = CHATBadChannelMask;
		params.channel = channel;

		FINISH_FILTER;
	}
}

void ciErrNoSuchNickHandler(CHAT chat, const ciServerMessage * message)
{
#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrNoSuchNickHandler called\n");
#endif

	GSI_UNUSED(chat);
	GSI_UNUSED(message);
}

void ciErrErroneusNicknameHandler(CHAT chat, const ciServerMessage * message)
{
	CONNECTION;
	
#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrErroneusNicknameHandler called\n");
#endif

	
	
	if(connection->connecting)
		ciNickError(chat, CHAT_INVALID, connection->nick, 0, NULL);
		
	GSI_UNUSED(message);
}

void ciErrLoginFailedHandler(CHAT chat, const ciServerMessage * message)
{
	CONNECTION;
	
#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrLoginFailedHandler called\n");
#endif

	
	
	if(connection->connecting)
	{
		
		
		connection->connecting = CHATFalse;

		
		
		if(connection->connectCallback != NULL)
			connection->connectCallback(chat, CHATFalse, CHAT_LOGIN_FAILED, connection->connectParam);
	}
		
	GSI_UNUSED(message);
}

void ciErrNoUniqueNickHandler(CHAT chat, const ciServerMessage * message)
{
	CONNECTION;
	
#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrNoUniqueNickHandler called\n");
#endif

	
	
	if(connection->connecting)
		ciNickError(chat, CHAT_NO_UNIQUENICK, "", 0, NULL);
		
	GSI_UNUSED(message);
}

void ciErrUniqueNickExpiredHandler(CHAT chat, const ciServerMessage * message)
{
	CONNECTION;
	
#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrUniqueNickExpiredHandler called\n");
#endif

	
	
	if(connection->connecting)
		ciNickError(chat, CHAT_UNIQUENICK_EXPIRED, "", 0, NULL);
		
	GSI_UNUSED(message);
}

void ciErrRegisterNickFailedHandler(CHAT chat, const ciServerMessage * message)
{
	int num;
	char * nicks;
	char * nick;
	char ** nickArray;
	int i;
	CONNECTION;
	
#ifdef FEEDBACK_HANDLERS
	OutputDebugString("ciErrRegisterNickFailedHandler called\n");
#endif

	assert(message->numParams == 4);
	if(message->numParams != 4)
		return; 

	
	
	num = atoi(message->params[1]);
	nicks = message->params[2];

	
	
	if(!connection->connecting)
		return;

	
	
	nickArray = (char **)gsimalloc(sizeof(char *) * num);
	if(!nickArray)
		return;

	
	
	nick = strtok(nicks, "\\");
	for(i = 0 ; (i < num) && nick ; i++)
	{
		nickArray[i] = goastrdup(nick);
		if(!nickArray[i])
			break;

		nick = strtok(NULL, "\\");
	}

	
	
	num = i;

	
	
	ciNickError(chat, CHAT_INVALID_UNIQUENICK, connection->uniquenick, num, nickArray);

	
	
	for(i = 0 ; i < num ; i++)
		gsifree(nickArray[i]);
	gsifree(nickArray);
}

