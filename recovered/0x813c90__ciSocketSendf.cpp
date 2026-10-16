// FUNCTION: BF2 0x813c90
// upstream Chat/chatSocket.c ciSocketSendf
#define _LINUX
#define _UNIX
 









 


#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
 









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



#if defined(_WIN32)

#endif

 


#define BUFFER_INC      8192
#define RECV_LEN        4096

 


#define ASSERT_SOCK(sock)   { 								assert((sock) != NULL); 								assert(((sock)->connectState == ciNotConnected) || 									((sock)->connectState == ciConnected) || 									((sock)->connectState == ciDisconnected)); 								ASSERT_BUFFER(&(sock)->inputQueue); 								ASSERT_BUFFER(&(sock)->outputQueue); 							}

#define ASSERT_CONNECTED(sock)  assert((sock)->connectState == ciConnected)

#define ASSERT_BUFFER(buffer)   { 									assert((buffer) != NULL); 									assert((buffer)->size >= 0); 									assert(((buffer)->size % BUFFER_INC) == 0); 									assert((buffer)->length >= 0); 									assert((buffer)->length <= (buffer)->size); 								}
#define RESET(ptr)  {if (ptr) {gsifree(ptr); ptr = NULL;} }

 


#ifdef IRC_LOG
static const char * ciGetTime(void)
{
#if defined(UNDER_CE) || defined(_PS2) || defined(_NITRO)
	return "";
#else
	static char buffer[256];
	time_t timer;
	struct tm * now;

	timer = time(NULL);
	now = localtime(&timer);
	if(now) 
	{
		if(now->tm_year > 99)
			now->tm_year -= 100;
		sprintf(buffer, "%02d.%02d.%02d %02d:%02d.%02d", now->tm_mon + 1, now->tm_mday, now->tm_year, now->tm_hour, now->tm_min, now->tm_sec);
	}
	else
		strcpy(buffer, "00.00.00 00:00.00");

	return buffer;
#endif
}
#endif

 


static CHATBool ciBufferInit(ciBuffer * buffer)
{
	assert(buffer != NULL);

	buffer->length = 0;
	buffer->size = BUFFER_INC;
	buffer->buffer = (char *)gsimalloc((unsigned int)buffer->size + 1);
	if(buffer->buffer == NULL)
		return CHATFalse;

	
	
	buffer->buffer[0] = '\0';

	return CHATTrue;
}

static void ciBufferFree(ciBuffer * buffer)
{
	gsifree(buffer->buffer);
}

static CHATBool ciBufferPreAppend(ciBuffer * buffer, int len)
{
	int total;
	char * tempPtr;

	ASSERT_BUFFER(buffer);
	assert(len >= 0);
	assert(len <= SHRT_MAX); 

	
	
	total = (buffer->length + len);
	if(total <= buffer->size)
		return CHATTrue;

	
	
	total += BUFFER_INC;
	total -= (total % BUFFER_INC);

	
	
	tempPtr = (char *)gsirealloc(buffer->buffer, (unsigned int)total + 1);
	if(tempPtr == NULL)
		return CHATFalse;

	
	
	buffer->buffer = tempPtr;
	buffer->size = total;

	return CHATTrue;
}

static void ciBufferClipFront(ciBuffer * buffer, int len)
{
	ASSERT_BUFFER(buffer);
	assert(len >= 0);
	assert(len <= buffer->length);

	buffer->length -= len;
	memmove(buffer->buffer, &buffer->buffer[len], (unsigned int)buffer->length);
	buffer->buffer[buffer->length] = '\0';
}


#ifdef __MWERKS__ 
 


CHATBool ciParseParam(const char *pText, ciServerMessage * message);
#endif

 


CHATBool ciSocketInit(ciSocket * sock, const char * nick)
{
#ifdef IRC_LOG
	FILE * log;
#endif

	assert(sock != NULL);

	memset(sock, 0, sizeof(ciSocket));

	sock->sock = INVALID_SOCKET;
	if(!ciBufferInit(&sock->inputQueue))
		return CHATFalse;
	if(!ciBufferInit(&sock->outputQueue))
	{
		ciBufferFree(&sock->inputQueue);
		return CHATFalse;
	}
#ifdef IRC_LOG
	sprintf(sock->filename, "%s_irc.log", nick);
	log = fopen(sock->filename, "at");
	if(log != NULL)
	{
		fprintf(log, "\n\n\n\n\nCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC\n");
		fclose(log);
	}
#endif

	GSI_UNUSED(nick);
	return CHATTrue;	
}

CHATBool ciSocketConnect(ciSocket * sock,
					 const char * serverAddress,
					 int port)
{
	unsigned int ip;
	HOSTENT * host;
	SOCKADDR_IN address;
	int rcode;

#if !defined(INSOCK) && !defined(_NITRO) && !defined(_REVOLUTION)
	int keepalive;
#endif

	ASSERT_SOCK(sock);
	assert(serverAddress != NULL);
	assert(port >= 0);
	assert(port <= USHRT_MAX);
	assert(sock->connectState == ciNotConnected);

	
	
	strzcpy(sock->serverAddress, serverAddress, 255);

	
	
	ip = inet_addr(serverAddress);
	if(ip == INADDR_NONE)
	{
		
		
		host = gethostbyname((char *)serverAddress);
		if(host == NULL)
			return CHATFalse;

		
		
		ip = *(unsigned int *)host->h_addr_list[0];
	}

	
	
	memset(&address, 0, sizeof(SOCKADDR_IN));
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = ip;
	address.sin_port = htons((unsigned short)port);

	
	
	sock->sock = socket(AF_INET, SOCK_STREAM, 0);
	if(sock->sock == INVALID_SOCKET)
		return CHATFalse;

	
	
#if !defined(INSOCK) && !defined(_NITRO) && !defined(_REVOLUTION)
	keepalive = 1;
	rcode = setsockopt(sock->sock, SOL_SOCKET, SO_KEEPALIVE, (char *)&keepalive, sizeof(int));
	
#endif

	
	
	rcode = connect(sock->sock, (SOCKADDR *)&address, sizeof(SOCKADDR_IN));
	if(gsiSocketIsError(rcode))
	{
		closesocket(sock->sock);
		return CHATFalse;
	}

	
	
	sock->connectState = ciConnected;

	return CHATTrue;
}

void ciSocketDisconnect(ciSocket * sock)
{
	int i;

	ASSERT_SOCK(sock);

	
	
	if(sock->sock != INVALID_SOCKET)
	{
		shutdown(sock->sock, 2);
		closesocket(sock->sock);
	}

	
	
	sock->connectState = ciDisconnected;

	
	
	ciBufferFree(&sock->inputQueue);
	ciBufferFree(&sock->outputQueue);

	
	
	gsifree(sock->lastMessage.message);
	gsifree(sock->lastMessage.server);
	gsifree(sock->lastMessage.nick);
	gsifree(sock->lastMessage.user);
	gsifree(sock->lastMessage.host);
	gsifree(sock->lastMessage.command);
	gsifree(sock->lastMessage.middle);
	gsifree(sock->lastMessage.param);
	for(i = 0 ; i < sock->lastMessage.numParams ; i++)
		gsifree(sock->lastMessage.params[i]);
	gsifree(sock->lastMessage.params);
}

static void ciSocketSelect(SOCKET sock, CHATBool * readFlag, CHATBool * writeFlag, CHATBool * exceptFlag)
{
	int aReadFlag   = 0;
	int aWriteFlag  = 0;
	int aExceptFlag = 0;

	
	GSISocketSelect(sock, &aReadFlag, &aWriteFlag, &aExceptFlag);
	
	
	if (readFlag)
		*readFlag   = (CHATBool)aReadFlag;
	if (writeFlag)
		*writeFlag  = (CHATBool)aWriteFlag;
	if (exceptFlag)
		*exceptFlag = (CHATBool)aExceptFlag;
}

static void ciSocketThinkSend(ciSocket * sock)
{
	int rcode;
	int len;

	ASSERT_SOCK(sock);
	ASSERT_CONNECTED(sock);

	
	
	while(sock->outputQueue.length > 0)
	{
		CHATBool writeFlag;
		
		
		
		ciSocketSelect(sock->sock, NULL, &writeFlag, NULL);
		if(!writeFlag)
			return;

		
		
		len = min(sock->outputQueue.length, 1024);
		rcode = send(sock->sock, sock->outputQueue.buffer, len, 0);

		if(rcode == 0)
			return;
		if(gsiSocketIsError(rcode))
			return; 

		
		
		ciBufferClipFront(&sock->outputQueue, rcode);
	}
}

static void ciSocketThinkRecv(ciSocket * sock)
{
	CHATBool readFlag;
	int len;
	int rcode;
	char * pos;
	
	ASSERT_SOCK(sock);
	ASSERT_CONNECTED(sock);

	while(CHATTrue)
	{
		
		
		ciSocketSelect(sock->sock, &readFlag, NULL, NULL);

		
		
		if(!readFlag)
			return;

		
		
		if(!ciBufferPreAppend(&sock->inputQueue, RECV_LEN))
			return; 

		
		
		pos = &sock->inputQueue.buffer[sock->inputQueue.length];
		rcode = recv(sock->sock, pos, RECV_LEN, 0);

		
		
		if(rcode <= 0) 
		{
			sock->connectState = ciDisconnected;
			return;
		}

		
		
		len = rcode;

#if 0
{
		char * buffer;
		int i;
		buffer = (char *)gsimalloc(len + 2);
		assert(buffer != NULL);
		memcpy(buffer, &sock->inputQueue.buffer[sock->inputQueue.length], len);
		buffer[len] = '\0';
		OutputDebugString("--->>>XXXRECV\n");
		for(i = 0 ; i < len ; i += 1023)
			OutputDebugString(&buffer[i]);
		OutputDebugString("<<<---XXXRECV\n");
}
#endif

		
		
		if(sock->secure)
			gs_crypt((unsigned char *)pos, len, &sock->inKey);

		
		
		sock->inputQueue.length += len;

		
		
		sock->inputQueue.buffer[sock->inputQueue.length] = '\0';
	}
}

void ciSocketThink(ciSocket * sock)
{
	ASSERT_SOCK(sock);
	ASSERT_CONNECTED(sock);

	
	
	if(sock->connectState == ciDisconnected)
		return;

	
	
	ciSocketThinkSend(sock);

	
	
	ciSocketThinkRecv(sock);
}

CHATBool ciSocketSend(ciSocket * sock,
				  const char * buffer)
{
#ifdef IRC_LOG
	FILE * log;
#endif
	int len;
	char * pos;

	ASSERT_SOCK(sock);
	ASSERT_CONNECTED(sock);
	assert(buffer != NULL);

	
	
	if(sock->connectState == ciDisconnected)
		return CHATTrue;

	
	
	len = (int)strlen(buffer);

	
	
	if(!ciBufferPreAppend(&sock->outputQueue, len + 2))
		return CHATFalse;

	
	
	pos = &sock->outputQueue.buffer[sock->outputQueue.length];
	memcpy(pos, buffer, (unsigned int)len);

	
	
	sock->outputQueue.length += len;

	
	
	sock->outputQueue.buffer[sock->outputQueue.length++] = 0x0D;
	sock->outputQueue.buffer[sock->outputQueue.length++] = 0x0A;

	
	
	if(sock->secure)
		gs_crypt((unsigned char *)pos, len + 2, &sock->outKey);

#ifdef IRC_LOG
	
	
	log = fopen(sock->filename, "at");
	if(log != NULL)
	{
		fprintf(log, "%s | OUT | %s\n", ciGetTime(), buffer);
		fclose(log);
	}
#endif

	return CHATTrue;
}

CHATBool ciSocketSendf(ciSocket * sock,
				   const char * format,
				   ...)
{
	static char buffer[4096];
	int num;
	va_list args;

#line 531
	ASSERT_SOCK(sock);
#line 532
	ASSERT_CONNECTED(sock);

	va_start(args, format);
	num = vsprintf(buffer, format, args);
	if(num != -1)
		buffer[num] = '\0';
	else
		buffer[sizeof(buffer) - 1] = '\0'; 

	return ciSocketSend(sock, buffer);
}

static CHATBool ciParseUser(const char *pText, ciServerMessage * message)
{
	char *pTmpNick = NULL, *pTmpUsername = NULL, *pTmpHost = NULL;
	int    nNick = 0, nUsername = 0, nHost = 0;
	char *p;
	
	if(pText == NULL || pText[0] == '\0')
	{
		assert(0);
		return CHATFalse; 
	}
	
	p = pTmpNick = (char *)pText;
	
	while(*p != '\0')
	{
		if(*p != '!')
		{
			++p;
			++nNick;
		}
		else
		{
			pTmpUsername = ++p;
			
			while(*p != '\0')
			{
				if(*p != '@')
				{
					++p;
					++nUsername;
				}
				else
				{
					pTmpHost = ++p;
					
					while(*p != '\0')
					{
						++p;
						++nHost;
					}
				}
			}
		}
	}
	
	if(nNick)
	{
		message->nick = (char *)gsimalloc((unsigned int)nNick + 1);
		
		if(message->nick)
		{
			memcpy(message->nick, pTmpNick, (unsigned int)nNick);
			message->nick[nNick] = '\0';
		}
	}
	else
		message->nick = NULL;
	
	if(nUsername)
	{
		message->user = (char *)gsimalloc((unsigned int)nUsername + 1);
		
		if(message->user)
		{
			memcpy(message->user, pTmpUsername, (unsigned int)nUsername);
			message->user[nUsername] = '\0';
		}
	}
	else
		message->user = NULL;
	
	if(nHost)
	{
		message->host = (char *)gsimalloc((unsigned int)nHost + 1);
		
		if(message->host)
		{
			memcpy(message->host, pTmpHost, (unsigned int)nHost);
			message->host[nHost] = '\0';
		}
	}
	else
		message->host = NULL;

	return CHATTrue;
}

static CHATBool ciAddParam(const char *param, ciServerMessage * message)
{
	void * tempPtr;
	
	
	
	tempPtr = gsirealloc(message->params, sizeof(char *) * (message->numParams + 1));
	if(tempPtr == NULL)
		return CHATFalse; 
	message->params = (char **)tempPtr;

	
	
	tempPtr = gsimalloc(strlen(param) + 1);
	if(tempPtr == NULL)
		return CHATFalse; 

	
	
	strcpy((char *)tempPtr, param);
	message->params[message->numParams++] = (char *)tempPtr;

	return CHATTrue;
}

CHATBool ciParseParam(const char *pText, ciServerMessage * message)
{
	char * colon;
	char * str;
	char * p;

	assert(pText != NULL);
	assert(message != NULL);

	
	
	p = (char *)gsimalloc(strlen(pText) + 1);
	if(p == NULL)
		return CHATFalse; 
	strcpy(p, pText);

	
	
	if(p[0] == ':')
	{
		p[0] = '\0';
		colon = &p[1];
	}
	else
	{
		colon = strstr(p, " :");
		if(colon != NULL)
		{
			*colon = '\0';
			colon += 2;
		}
	}

	str = strtok(p, " ");
	while(str != NULL)
	{
		
		
		if(!ciAddParam(str, message))
		{
			gsifree(p);
			return CHATFalse; 
		}

		
		
		str = strtok(NULL, " ");
	}

	if(colon != NULL)
	{
		
		
		if(!ciAddParam(colon, message))
		{
			gsifree(p);
			return CHATFalse; 
		}
	}

	gsifree(p);
	return CHATTrue;
}

static CHATBool ciParseMessage(ciSocket * sock, const char *sText)
{	
	
	int    nMessage = 0, nServer = 0, nCommand = 0, nMiddle = 0, nParam = 0;
	char *p, *temp;
	ciServerMessage * message = &sock->lastMessage;
	
	if(sText == NULL || sText[0] == '\0')
	{
		assert(0);
		return CHATFalse; 
	}

	nMessage = (int)strlen(sText);
	message->message = (char *)gsimalloc((unsigned int)nMessage + 1);
	if(message->message == NULL)
		return CHATFalse; 
	memcpy(message->message, sText, (unsigned int)nMessage);
	message->message[nMessage] = '\0';

	p = (char *)sText;
	
	while(*p == '\n' || *p == '\r')
		++p;
	
	if(*p == ':')
	{  
		message->server = ++p;  
		
		if(*p != '\0')
		{
			while(*p != ' ' && *p != '\0')
			{
				++nServer;
				++p;
			}
		}
	}
	
	while(*p == ' ')
		
		++p;
	
	if(*p != '\0')
	{  
		message->command = p;
		
		while(*p != ' ' && *p != '\0')
		{
			++nCommand;
			++p;
		}
	}
	
	while(*p == ' ')
		
		++p;
	
	if(*p != ':' && *p != '\0')
	{  
		message->middle = p;
		
		while(*p != ' ' && *p != '\0')
		{
			++nMiddle;
			++p;
		}
	}
	
	while(*p == ' ')
		
		++p;
	
	
		
	
	
	if(*p != '\0')
	{  
		message->param = p;
		
		while(*p != '\0')
		{
			++nParam;
			++p;
		}
	}
	
	if(nServer)
	{
		temp = message->server;
		message->server = (char *)gsimalloc((unsigned int)nServer + 1);
		
		if(message->server)
		{
			memcpy(message->server, temp, (unsigned int)nServer);
			message->server[nServer] = '\0';
		}

		if(!ciParseUser(message->server, message))
		{
			RESET(message->message);
			RESET(message->server);
			return CHATFalse; 
		}
	}
	else
	{
		message->server = NULL;
		message->nick = NULL;
		message->user = NULL;
		message->host = NULL;
	}

	if(nMiddle)
	{
		if(!ciParseParam(message->middle, message))
		{
			RESET(message->message);
			RESET(message->server);
			RESET(message->nick);
			RESET(message->user);
			RESET(message->host);
			return CHATFalse; 
		}
	}
	else if(nParam)
	{
		if(!ciParseParam(message->param, message))
		{
			RESET(message->message);
			RESET(message->server);
			RESET(message->nick);
			RESET(message->user);
			RESET(message->host);
			return CHATFalse; 
		}
	}
	else
	{
		message->params = NULL;
		message->numParams = 0;
	}
	
	if(nParam)
	{
		temp = message->param;
		message->param = (char *)gsimalloc((unsigned int)nParam + 1);

		if(message->param)
		{
			memcpy(message->param, temp, (unsigned int)nParam);
			message->param[nParam] = '\0';
		}
	}
	else
	{
		message->param = NULL;
	}
	
	if(nCommand)
	{
		temp = message->command;
		message->command = (char *)gsimalloc((unsigned int)nCommand + 1);
		
		if(message->command)
		{
			memcpy(message->command, temp, (unsigned int)nCommand);
			message->command[nCommand] = '\0';
		}
	}
	else
		message->command = NULL;
	
	if(nMiddle)
	{
		temp = message->middle;
		message->middle = (char *)gsimalloc((unsigned int)nMiddle + 1);
		
		if(message->middle)
		{
			memcpy(message->middle, temp, (unsigned int)nMiddle);
			message->middle[nMiddle] = '\0';
		}
	}
	else
		message->middle = NULL;

	return CHATTrue;
}


static CHATBool ciParseInput(ciSocket * sock)
{
	char *p, *q, *r;
	char   temp;
	int i;
	
	p = sock->inputQueue.buffer;  
	
	if(*p != '\0')
	{
		
		while(*p == 13 || *p == 10)
			++p;
		
		
		if(*p != '\0')
		{
			r = q = p;
			
			
			while(*q != 10 && *q != 13 && *q != '\0')
			{
				if(*q != ' ')
					r = q;
				++q;
			}
			
			if(*q != '\0')
			{
				++r;
				temp = *r;
				*r = '\0';

				
				
				RESET(sock->lastMessage.message);
				RESET(sock->lastMessage.server);
				RESET(sock->lastMessage.nick);
				RESET(sock->lastMessage.user);
				RESET(sock->lastMessage.host);
				RESET(sock->lastMessage.command);
				RESET(sock->lastMessage.middle);
				RESET(sock->lastMessage.param);
				for(i = 0 ; i < sock->lastMessage.numParams ; i++)
					RESET(sock->lastMessage.params[i]);
				RESET(sock->lastMessage.params);
				sock->lastMessage.numParams = 0;

				
				
				memset(&sock->lastMessage,0,sizeof(sock->lastMessage));
				if(!ciParseMessage(sock, p))
				{
					memset(&sock->lastMessage,0,sizeof(sock->lastMessage));
					return CHATFalse; 
				}

				
				
				*r = temp;

				
				
				ciBufferClipFront(&sock->inputQueue, (q - sock->inputQueue.buffer));

				return CHATTrue;
			}
		}
	}

	return CHATFalse;
}

ciServerMessage * ciSocketRecv(ciSocket * sock)
{
#ifdef IRC_LOG
	FILE * log;
#endif
	ASSERT_SOCK(sock);

	
	
	
	

	
	
	if(sock->inputQueue.length == 0)
		return NULL;

	
	
	if(!ciParseInput(sock))
	{
		
		
		return NULL;
	}

#ifdef IRC_LOG
	
	
	log = fopen(sock->filename, "at");
	if(log != NULL)
	{
		fprintf(log, "%s | IN  | %s\n", ciGetTime(), sock->lastMessage.message);
		fclose(log);
	}
#endif

	
	
	return &sock->lastMessage;
}

