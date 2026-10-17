// BF2_FLAGS: -fno-optimize-sibling-calls
// FUNCTION: BF2 0x810fc0
// upstream Chat/chatMain.c chatGetUserModeNoWaitA
#define _LINUX
#define _UNIX
 









 


 









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

 









#ifndef _CHATMAIN_H_
#define _CHATMAIN_H_

 


 









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

 









#ifndef _CHATASCII_H_
#define _CHATASCII_H_







#ifdef __cplusplus
extern "C" {
#endif




CHAT chatConnectA(const char * serverAddress,
				 int port,
                 const char * nick,
				 const char * user,
				 const char * name,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking);
CHAT chatConnectSpecialA(const char * serverAddress,
				 int port,
                 const char * nick,
				 const char * name,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking);
CHAT chatConnectSecureA(const char * serverAddress,
				 int port,
                 const char * nick,
				 const char * name,
				 const char * gamename,
				 const char * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking);
CHAT chatConnectLoginA(const char * serverAddress,
				 int port,
				 int namespaceID,
				 const char * email,
				 const char * profilenick,
				 const char * uniquenick,
				 const char * password,
				 const char * name,
				 const char * gamename,
				 const char * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking);
CHAT chatConnectPreAuthA(const char * serverAddress,
				 int port,
				 const char * authtoken,
				 const char * partnerchallenge,
				 const char * name,
				 const char * gamename,
				 const char * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking);







void chatRetryWithNickA(CHAT chat,
					   const char * nick);







void chatRegisterUniqueNickA(CHAT chat,
							int namespaceID,
							const char * uniquenick,
							const char * cdkey);



void chatSendRawA(CHAT chat,
				 const char * command);



void chatChangeNickA(CHAT chat,
					const char * newNick,
					chatChangeNickCallback callback,
					void * param,
					CHATBool blocking);



const char * chatGetNickA(CHAT chat);



void chatFixNickA(char * newNick,
				 const char * oldNick);



const char * chatTranslateNickA(char * nick,
								const char * extension);



void chatAuthenticateCDKeyA(CHAT chat,
						   const char * cdkey,
						   chatAuthenticateCDKeyCallback callback,
						   void * param,
						   CHATBool blocking);

 




void chatEnumChannelsA(CHAT chat,
					  const char * filter,
					  chatEnumChannelsCallbackEach callbackEach,
					  chatEnumChannelsCallbackAll callbackAll,
					  void * param,
					  CHATBool blocking);



void chatEnterChannelA(CHAT chat,
					  const char * channel,
					  const char * password,
					  chatChannelCallbacks * callbacks,
					  chatEnterChannelCallback callback,
					  void * param,
					  CHATBool blocking);



void chatLeaveChannelA(CHAT chat,
					  const char * channel,
					  const char * reason);  



void chatSendChannelMessageA(CHAT chat,
							const char * channel,
							const char * message,
							int type);



void chatSetChannelTopicA(CHAT chat,
						 const char * channel,
						 const char * topic);



void chatGetChannelTopicA(CHAT chat,
						 const char * channel,
						 chatGetChannelTopicCallback callback,
						 void * param,
						 CHATBool blocking);



void chatSetChannelModeA(CHAT chat,
						const char * channel,
						CHATChannelMode * mode);



void chatGetChannelModeA(CHAT chat,
						const char * channel,
						chatGetChannelModeCallback callback,
						void * param,
						CHATBool blocking);



void chatSetChannelPasswordA(CHAT chat,
							const char * channel,
							CHATBool enable,
							const char * password);



void chatGetChannelPasswordA(CHAT chat,
							const char * channel,
							chatGetChannelPasswordCallback callback,
							void * param,
							CHATBool blocking);



void chatSetChannelLimitA(CHAT chat,
						 const char * channel,
						 int limit);



void chatEnumChannelBansA(CHAT chat,
						 const char * channel,
						 chatEnumChannelBansCallback callback,
						 void * param,
						 CHATBool blocking);



void chatAddChannelBanA(CHAT chat,
					   const char * channel,
					   const char * ban);



void chatRemoveChannelBanA(CHAT chat,
						  const char * channel,
						  const char * ban);



void chatSetChannelGroupA(CHAT chat,
						 const char * channel,
						 const char * group);




int chatGetChannelNumUsersA(CHAT chat,
						   const char * channel);




CHATBool chatInChannelA(CHAT chat,
						   const char * channel);


 




void chatEnumUsersA(CHAT chat,
				   const char * channel,
				   chatEnumUsersCallback callback,
				   void * param,
				   CHATBool blocking);



void chatSendUserMessageA(CHAT chat,
						 const char * user,
						 const char * message,
						 int type);



void chatGetUserInfoA(CHAT chat,
					 const char * user,
					 chatGetUserInfoCallback callback,
					 void * param,
					 CHATBool blocking);





void chatGetBasicUserInfoA(CHAT chat,
						  const char * user,
						  chatGetBasicUserInfoCallback callback,
						  void * param,
						  CHATBool blocking);




CHATBool chatGetBasicUserInfoNoWaitA(CHAT chat,
									const char * nick,
									const char ** user,
									const char ** address);





void chatGetChannelBasicUserInfoA(CHAT chat,
								 const char * channel,
								 chatGetChannelBasicUserInfoCallback callback,
								 void * param,
								 CHATBool blocking);



void chatInviteUserA(CHAT chat,
					const char * channel,
					const char * user);



void chatKickUserA(CHAT chat,
				  const char * channel,
				  const char * user,
				  const char * reason);



void chatBanUserA(CHAT chat,
				 const char * channel,
				 const char * user);



void chatSetUserModeA(CHAT chat,
					 const char * channel,
					 const char * user,
					 int mode);



void chatGetUserModeA(CHAT chat,
					 const char * channel,
					 const char * user,
					 chatGetUserModeCallback callback,
					 void * param,
					 CHATBool blocking);



CHATBool chatGetUserModeNoWaitA(CHAT chat,
							   const char * channel,
							   const char * user,
							   int * mode);



void chatGetUdpRelayA(CHAT chat,
					 const char * channel,
					 chatGetUdpRelayCallback callback,
					 void * param,
					 CHATBool blocking);
 





void chatSetGlobalKeysA(CHAT chat,
					   int num,
					   const char ** keys,
					   const char ** values);






void chatGetGlobalKeysA(CHAT chat,
					   const char * target,
					   int num,
					   const char ** keys,
					   chatGetGlobalKeysCallback callback,
					   void * param,
					   CHATBool blocking);







void chatSetChannelKeysA(CHAT chat,
						const char * channel,
						const char * user,
						int num,
						const char ** keys,
						const char ** values);






void chatGetChannelKeysA(CHAT chat,
						const char * channel,
						const char * user,
						int num,
						const char ** keys,
						chatGetChannelKeysCallback callback,
						void * param,
						CHATBool blocking);





CHATBool chatGetBasicUserInfoNoWaitA(CHAT chat,
									const char * nick,
									const char ** user,
									const char ** address);




#ifdef __cplusplus
}	
#endif




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

 



int ciVersionID = 1;

 


#define CI_DO_BLOCKING      if(blocking) 							{ 								do{ 									ciThink(chat, ID); 									msleep(10); 								}while(ciCheckForID(chat, ID)); 							}

#define ASSERT_CHANNEL()    assert(channel != NULL); assert(channel[0] != '\0');
#define ASSERT_NICK()       assert(nick != NULL); assert(nick[0] != '\0'); assert(strlen(nick) < MAX_NICK);
#define ASSERT_USER(user)   assert(user != NULL); assert(user[0] != '\0'); assert(strlen(user) < MAX_USER);
#define ASSERT_MESSAGE()    assert(message != NULL); assert(message[0] != '\0');
#define ASSERT_TYPE(type)   assert((type == CHAT_MESSAGE) || (type == CHAT_ACTION) || (type == CHAT_NOTICE) || (type == CHAT_UTM) || (type == CHAT_ATM));
#define ASSERT_PASSWORD()   assert(password != NULL); assert(password[0] != '\0');
#define ASSERT_BAN()        assert(ban != NULL); assert(ban [0] != '\0');

#define CI_NUM_TRANSLATED_NICKS   2

 



typedef struct ciEnumUsersData
{
	chatEnumUsersCallback callback;
	void * param;
} ciEnumUsersData;

 


static CHATBool ciProcessServerMessage(CHAT chat, const ciServerMessage * message)
{
	int i;

	assert(message != NULL);

	
	
	for(i = 0 ; i < numServerMessageTypes ; i++)
	{
		
		
		if(strcasecmp(message->command, serverMessageTypes[i].command) == 0)
		{
			
			
			if(serverMessageTypes[i].handler != NULL)
			{
				
				
				serverMessageTypes[i].handler(chat, message);
			}

			return CHATTrue;
		}
	}

	
	
	return CHATFalse;  
}

static CHATBool ciCheckForID(CHAT chat, int ID)
{
	return (CHATBool)(ciCheckFiltersForID(chat, ID) || ciCheckCallbacksForID(chat, ID));
}

void ciHandleDisconnect(CHAT chat, const char * reason)
{
	CHATBool connecting;
	CONNECTION;

	
	
	if(connection->disconnected)
		return;

	
	
	connecting = connection->connecting;

	
	
	connection->connected = CHATFalse;
	connection->connecting = CHATFalse;
	connection->disconnected = CHATTrue;

	
	
	if(connection->connecting)
	{
		
		
		if(connection->connectCallback != NULL)
			connection->connectCallback(chat, CHATFalse, CHAT_DISCONNECTED, connection->connectParam);
	}
	
	
	else if(connection->globalCallbacks.disconnected != NULL)
	{
		ciCallbackDisconnectedParams params;
		params.reason = (char *)reason;
		ciAddCallback(chat, CALLBACK_DISCONNECTED, (void*)connection->globalCallbacks.disconnected, &params, connection->globalCallbacks.param, 0, NULL);
	}
	GSI_UNUSED(connecting);
}

static void ciThink(CHAT chat, int ID)
{
	ciServerMessage * message;
	CONNECTION;

	
	
	if(connection->chatSocket.connectState == ciConnected)
	{
		
		
		ciSocketThink(&connection->chatSocket);

		
		
		while((message = ciSocketRecv(&connection->chatSocket)) != NULL)
		{
			
			
			if(connection->globalCallbacks.raw != NULL)
			{
				ciCallbackRawParams params;
				params.raw = message->message;
				ciAddCallback(chat, CALLBACK_RAW, (void*)connection->globalCallbacks.raw, &params, connection->globalCallbacks.param, 0, NULL);
			}

			
			
			ciProcessServerMessage(chat, message);
		}

		
		
		if(connection->chatSocket.connectState == ciDisconnected)
		{
			ciHandleDisconnect(chat, "Disconnected");
		}
	}

	
	
	ciFilterThink(chat);

	
	
	ciCallCallbacks(chat, ID);

}

 


void ciSendNick(CHAT chat)
{
	const char * nick;
	CONNECTION;

	
	
	if(connection->loginType == CINoLogin)
	{
		
		
		
		

		int validateNick = ciNickIsValid(connection->nick);
		if (validateNick != CHAT_NICK_OK)
		{
			ciNickError(chat, validateNick, connection->nick, 0, NULL);
			return;
		}
		
		
		
		nick = connection->nick;
	}
	else if((connection->loginType == CIProfileLogin) && (connection->namespaceID == 0))
	{
		
		
		
		

		int validateNick = ciNickIsValid(connection->profilenick);
		if (validateNick != CHAT_NICK_OK)
		{
			ciNickError(chat, validateNick, connection->profilenick, 0, NULL);
			return;
		}
		
		
		
		nick = connection->profilenick;
	}
	else
	{
		
		
		nick = "*";
	}

	
	
	ciSocketSendf(&connection->chatSocket, "NICK %s", nick);
}

void ciSendUser(CHAT chat)
{
	CONNECTION;

	
	
	ciSocketSendf(&connection->chatSocket, "USER %s %s %s :%s",
		connection->user,
		"127.0.0.1",
		connection->server,
		connection->name);
}

void ciSendNickAndUser(CHAT chat)
{
	ciSendUser(chat);
	ciSendNick(chat);
}

void ciSendLogin(CHAT chat)
{
	char passwordHash[33];
	CONNECTION;

	
	
	if(connection->loginType == CIPreAuthLogin)
	{
		ciSocketSendf(&connection->chatSocket, "LOGINPREAUTH %s %s",
			connection->authtoken,
			connection->partnerchallenge);

		return;
	}

	
	
	MD5Digest((unsigned char *)connection->password, strlen(connection->password), passwordHash);

	
	
	if(connection->loginType == CIUniqueNickLogin)
	{
		ciSocketSendf(&connection->chatSocket, "LOGIN %d %s %s",
			connection->namespaceID,
			connection->uniquenick,
			passwordHash);
	}
	else if(connection->loginType == CIProfileLogin)
	{
		ciSocketSendf(&connection->chatSocket, "LOGIN %d * %s :%s@%s",
			connection->namespaceID,
			passwordHash,
			connection->profilenick,
			connection->email);
	}
	else
	{
		
		
		assert(0);
	}
}

static CHAT chatConnectDoit(CILoginType loginType,
				 const char * serverAddress,
				 int port,
                 const char * nick,
				 const char * user,
				 const char * name,
				 int namespaceID,
				 const char * email,
				 const char * profilenick,
				 const char * uniquenick,
				 const char * password,
				 const char * authtoken,
				 const char * partnerchallenge,
				 const char * gamename,
				 const char * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	ciConnection * connection;
	const char * socketNick = "";
	
	
	
	assert(callbacks != NULL);
	assert(connectCallback != NULL);
	
	
	
	if(loginType == CINoLogin)
	{
		ASSERT_NICK();
		if(!nick || !nick[0])
			return NULL;
		socketNick = nick;
	}
	else if(loginType == CIUniqueNickLogin)
	{
		assert(namespaceID > 0);
		if(namespaceID <= 0)
			return NULL;
		assert(uniquenick && uniquenick[0]);
		if(!uniquenick || !uniquenick[0])
			return NULL;
		assert(password && password[0]);
		if(!password || !password[0])
			return NULL;
		socketNick = uniquenick;
	}
	else if(loginType == CIProfileLogin)
	{
		assert(namespaceID >= 0);
		if(namespaceID < 0)
			return NULL;
		assert(email && email[0]);
		if(!email || !email[0])
			return NULL;
		assert(profilenick && profilenick[0]);
		if(!profilenick || !profilenick[0])
			return NULL;
		assert(password && password[0]);
		if(!password || !password[0])
			return NULL;
		socketNick = profilenick;
	}
	else if(loginType == CIPreAuthLogin)
	{
		assert(authtoken && authtoken[0]);
		if(!authtoken || !authtoken[0])
			return NULL;
		assert(partnerchallenge && partnerchallenge[0]);
		if(!partnerchallenge || !partnerchallenge[0])
			return NULL;
		socketNick = "preauth";
	}
	if(loginType != CINoLogin)
	{
		assert(gamename && gamename[0]);
		if(!gamename || !gamename[0])
			return NULL;
		assert(secretKey && secretKey[0]);
		if(!secretKey || !secretKey[0])
			return NULL;
	}

	
	
	SocketStartUp();

	
	
	connection = (ciConnection *)gsimalloc(sizeof(ciConnection));
	if(connection == NULL)
		return NULL;  

	
	
	memset(connection, 0, sizeof(ciConnection));
	connection->loginType = loginType;
	if(nick)
		strzcpy(connection->nick, nick, MAX_NICK);
	if(user)
		strzcpy(connection->user, user, MAX_USER);
#ifdef GSI_UNICODE 
	UTF8ToUCS2String(connection->nick, connection->nickW);
	UTF8ToUCS2String(connection->user, connection->userW);
#endif
	if(name)
		strzcpy(connection->name, name, MAX_NAME);
	connection->namespaceID = namespaceID;
	if(email)
		strzcpy(connection->email, email, MAX_EMAIL);
	if(profilenick)
		strzcpy(connection->profilenick, profilenick, MAX_PROFILENICK);
	if(uniquenick)
		strzcpy(connection->uniquenick, uniquenick, MAX_UNIQUENICK);
	if(password)
		strzcpy(connection->password, password, MAX_PASSWORD);
	if(authtoken)
		strzcpy(connection->authtoken, authtoken, MAX_AUTHTOKEN);
	if(partnerchallenge)
		strzcpy(connection->partnerchallenge, partnerchallenge, MAX_PARTNERCHALLENGE);
	strzcpy(connection->server, serverAddress?serverAddress:CI_DEFAULT_SERVER_ADDRESS, MAX_SERVER);
	connection->port = port?port:CI_DEFUILT_SERVER_PORT;
	connection->globalCallbacks = *callbacks;
	connection->nextID = 1;
	connection->connecting = CHATTrue;
	connection->quiet = CHATFalse;

	
	
	if(!ciInitChannels(connection))
	{
		gsifree(connection);
		SocketShutDown();
		return NULL; 
	}

	
	
	if(!ciInitCallbacks(connection))
	{
		ciCleanupChannels((CHAT)connection);
		gsifree(connection);
		SocketShutDown();
		return NULL; 
	}

	
	
	if(!ciSocketInit(&connection->chatSocket, socketNick))
	{
		ciCleanupCallbacks((CHAT)connection);
		ciCleanupChannels((CHAT)connection);
		gsifree(connection);
		SocketShutDown();
		return NULL; 
	}

	
	
	if(!ciSocketConnect(&connection->chatSocket, connection->server, connection->port))
	{
		ciSocketDisconnect(&connection->chatSocket);
		ciCleanupCallbacks((CHAT)connection);
		ciCleanupChannels((CHAT)connection);
		gsifree(connection);
		SocketShutDown();
		return NULL; 
	}

	
	
	
	

	
	
	connection->nickErrorCallback = nickErrorCallback;
	connection->fillInUserCallback = fillInUserCallback;
	connection->connectCallback = connectCallback;
	connection->connectParam = param;
	
	
	
	if(gamename && gamename[0] && secretKey && secretKey[0])
	{
		
		
		strzcpy(connection->secretKey, secretKey, MAX_SECRETKEY);

		
		
		ciSocketSendf(&connection->chatSocket, "CRYPT des %d %s", ciVersionID, gamename);
	}
	else if(connection->fillInUserCallback)
	{
		
		
		ciSocketSend(&connection->chatSocket, "USRIP");
	}
	else
	{
		
		
		ciSendNickAndUser((CHAT)connection);
	}

	
	
	if(blocking)
	{
		
		
		do
		{
			ciThink((CHAT)connection, 0);
			msleep(10);
		} while(connection->connecting);

		
		
		if(!connection->connected)
		{
			
			
			chatDisconnect((CHAT)connection);
			connection = NULL;
		}
	}
	
	return (CHAT)connection;
}

CHAT chatConnectA(const char * serverAddress,
				 int port,
                 const char * nick,
				 const char * user,
				 const char * name,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	return chatConnectDoit(CINoLogin,
		serverAddress,
		port,
		nick,
		user,
		name,
		0,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		callbacks,
		nickErrorCallback,
		NULL,
		connectCallback,
		param,
		blocking);
}
#ifdef GSI_UNICODE
CHAT chatConnectW(const unsigned short * serverAddress,
				 int port,
                 const unsigned short * nick,
				 const unsigned short * user,
				 const unsigned short * name,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	char* serverAddress_A = (char*)UCS2ToUTF8StringAlloc(serverAddress);
	char* nick_A = (char*)UCS2ToUTF8StringAlloc(nick);
	char* user_A = (char*)UCS2ToUTF8StringAlloc(user);
	char* name_A = (char*)UCS2ToUTF8StringAlloc(name);

	CHAT aChat = chatConnectA(serverAddress_A,
		port,
		nick_A,
		user_A,
		name_A,
		callbacks,
		nickErrorCallback,
		connectCallback,
		param,
		blocking);

	gsifree(serverAddress_A);
	gsifree(nick_A);
	gsifree(user_A);
	gsifree(name_A);

	return aChat;
}
#endif

CHAT chatConnectSpecialA(const char * serverAddress,
				 int port,
                 const char * nick,
				 const char * name,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	return chatConnectDoit(CINoLogin,
		serverAddress,
		port,
		nick,
		NULL,
		name,
		0,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		callbacks,
		nickErrorCallback,
		fillInUserCallback,
		connectCallback,
		param,
		blocking);
}
#ifdef GSI_UNICODE
CHAT chatConnectSpecialW(const unsigned short * serverAddress,
				 int port,
                 const unsigned short * nick,
				 const unsigned short  * name,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	char* serverAddress_A = (char*)UCS2ToUTF8StringAlloc(serverAddress);
	char* nick_A = (char*)UCS2ToUTF8StringAlloc(nick);
	char* name_A = (char*)UCS2ToUTF8StringAlloc(name);
	CHAT aChat = chatConnectSpecialA(serverAddress_A, port, nick_A, name_A, callbacks, nickErrorCallback, fillInUserCallback, connectCallback, param, blocking);
	gsifree(serverAddress_A);
	gsifree(nick_A);
	gsifree(name_A);

	return aChat;
}
#endif

CHAT chatConnectSecureA(const char * serverAddress,
				 int port,
                 const char * nick,
				 const char * name,
				 const char * gamename,
				 const char * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	return chatConnectDoit(CINoLogin,
		serverAddress,
		port,
		nick,
		NULL,
		name,
		0,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		NULL,
		gamename,
		secretKey,
		callbacks,
		nickErrorCallback,
		fillInUserCallback,
		connectCallback,
		param,
		blocking);
}
#ifdef GSI_UNICODE
CHAT chatConnectSecureW(const unsigned short * serverAddress,
				 int port,
                 const unsigned short * nick,
				 const unsigned short * name,
				 const unsigned short * gamename,
				 const unsigned short * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	char* serverAddress_A = (char*)UCS2ToUTF8StringAlloc(serverAddress);
	char* nick_A = (char*)UCS2ToUTF8StringAlloc(nick);
	char* name_A = (char*)UCS2ToUTF8StringAlloc(name);
	char* gamename_A = (char*)UCS2ToUTF8StringAlloc(gamename);
	char* secretKey_A = (char*)UCS2ToUTF8StringAlloc(secretKey);
	CHAT aChat = chatConnectSecureA(serverAddress_A, port, nick_A, name_A, gamename_A, secretKey_A, callbacks, nickErrorCallback, fillInUserCallback, connectCallback, param, blocking);
	gsifree(serverAddress_A);
	gsifree(nick_A);
	gsifree(name_A);
	gsifree(gamename_A);
	gsifree(secretKey_A);

	return aChat;
}
#endif

CHAT chatConnectLoginA(const char * serverAddress,
				 int port,
				 int namespaceID,
				 const char * email,
				 const char * profilenick,
				 const char * uniquenick,
				 const char * password,
				 const char * name,
				 const char * gamename,
				 const char * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	return chatConnectDoit((uniquenick && uniquenick[0])?CIUniqueNickLogin:CIProfileLogin,
		serverAddress,
		port,
		NULL,
		NULL,
		name,
		namespaceID,
		email,
		profilenick,
		uniquenick,
		password,
		NULL,
		NULL,
		gamename,
		secretKey,
		callbacks,
		nickErrorCallback,
		fillInUserCallback,
		connectCallback,
		param,
		blocking);
}
#ifdef GSI_UNICODE
CHAT chatConnectLoginW(const unsigned short * serverAddress,
				 int port,
				 int namespaceID,
				 const unsigned short * email,
				 const unsigned short * profilenick,
				 const unsigned short * uniquenick,
				 const unsigned short * password,
				 const unsigned short * name,
				 const unsigned short * gamename,
				 const unsigned short * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	char* serverAddress_A = (char*)UCS2ToUTF8StringAlloc(serverAddress);
	char* email_A = (char*)UCS2ToUTF8StringAlloc(email);
	char* profilenick_A = (char*)UCS2ToUTF8StringAlloc(profilenick);
	char* uniquenick_A = (char*)UCS2ToUTF8StringAlloc(uniquenick);
	char* password_A = (char*)UCS2ToUTF8StringAlloc(password);
	char* name_A = (char*)UCS2ToUTF8StringAlloc(name);
	char* gamename_A = (char*)UCS2ToUTF8StringAlloc(gamename);
	char* secretKey_A = (char*)UCS2ToUTF8StringAlloc(secretKey);
	CHAT aChat= chatConnectLoginA(serverAddress_A, port, namespaceID, email_A, profilenick_A, uniquenick_A, password_A, name_A, gamename_A, secretKey_A, callbacks, nickErrorCallback, fillInUserCallback, connectCallback, param, blocking);
	gsifree(serverAddress_A);
	gsifree(email_A);
	gsifree(profilenick_A);
	gsifree(uniquenick_A);
	gsifree(name_A);
	gsifree(gamename_A);
	gsifree(secretKey_A);

	return aChat;
}
#endif

CHAT chatConnectPreAuthA(const char * serverAddress,
				 int port,
				 const char * authtoken,
				 const char * partnerchallenge,
				 const char * name,
				 const char * gamename,
				 const char * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	return chatConnectDoit(CIPreAuthLogin,
		serverAddress,
		port,
		NULL,
		NULL,
		name,
		0,
		NULL,
		NULL,
		NULL,
		NULL,
		authtoken,
		partnerchallenge,
		gamename,
		secretKey,
		callbacks,
		nickErrorCallback,
		fillInUserCallback,
		connectCallback,
		param,
		blocking);
}
#ifdef GSI_UNICODE
CHAT chatConnectPreAuthW(const unsigned short * serverAddress,
				 int port,
				 const unsigned short * authtoken,
				 const unsigned short * partnerchallenge,
				 const unsigned short * name,
				 const unsigned short * gamename,
				 const unsigned short * secretKey,
				 chatGlobalCallbacks * callbacks,
				 chatNickErrorCallback nickErrorCallback,
				 chatFillInUserCallback fillInUserCallback,
                 chatConnectCallback connectCallback,
                 void * param,
                 CHATBool blocking)
{
	char* serverAddress_A = (char*)UCS2ToUTF8StringAlloc(serverAddress);
	char* authtoken_A  = (char*)UCS2ToUTF8StringAlloc(authtoken);
	char* partnerchallenge_A = (char*)UCS2ToUTF8StringAlloc(partnerchallenge);
	char* name_A = (char*)UCS2ToUTF8StringAlloc(name);
	char* gamename_A = (char*)UCS2ToUTF8StringAlloc(gamename);
	char* secretKey_A = (char*)UCS2ToUTF8StringAlloc(secretKey);
	CHAT aChat = chatConnectPreAuthA(serverAddress_A, port, authtoken_A, partnerchallenge_A, name_A, gamename_A, secretKey_A, callbacks, nickErrorCallback, fillInUserCallback, connectCallback, param, blocking);
	gsifree(serverAddress_A);
	gsifree(authtoken_A);
	gsifree(partnerchallenge_A);
	gsifree(name_A);
	gsifree(gamename_A);
	gsifree(secretKey_A);

	return aChat;
}
#endif

void chatRetryWithNickA(CHAT chat,
					   const char * nick)
{
	int validateNick;
	CONNECTION;
	
	
	
	if(connection->connected)
		return;

	
	if (nick == NULL)
	{
		connection->connecting = CHATFalse;

		
		
		if(connection->connectCallback != NULL)
			connection->connectCallback(chat, CHATFalse, CHAT_NICK_ERROR, connection->connectParam);

		return;
	}

	
	
	strzcpy(connection->nick, nick, MAX_NICK);
#ifdef GSI_UNICODE 
	AsciiToUCS2String(connection->nick, connection->nickW);
#endif

	
	
	validateNick = ciNickIsValid(nick);
	if (validateNick != CHAT_NICK_OK)
	{
		ciNickError(chat, validateNick, nick, 0, NULL);
		return;
	}

	
	
	ciSocketSendf(&connection->chatSocket, "NICK :%s", nick);

}
#ifdef GSI_UNICODE
void chatRetryWithNickW(CHAT chat,
					   const unsigned short * nick)
{
	char* nick_A = (char*)UCS2ToUTF8StringAlloc(nick);
	chatRetryWithNickA(chat, nick_A);
	gsifree(nick_A);
}
#endif

void chatRegisterUniqueNickA(CHAT chat,
							int namespaceID,
							const char * uniquenick,
							const char * cdkey)
{
	CONNECTION;

	
	
	if(connection->connected)
		return;

	
	
	if(uniquenick == NULL)
	{
		connection->connecting = CHATFalse;

		
		
		if(connection->connectCallback != NULL)
			connection->connectCallback(chat, CHATFalse, CHAT_NICK_ERROR, connection->connectParam);

		return;
	}

	
	
	if(!cdkey)
		cdkey = "";

	
	
	ciSocketSendf(&connection->chatSocket, "REGISTERNICK %d %s %s", namespaceID, uniquenick, cdkey);

	
	
	strzcpy(connection->uniquenick, uniquenick, MAX_UNIQUENICK);
}
#ifdef GSI_UNICODE
void chatRegisterUniqueNickW(CHAT chat,
							int namespaceID,
							const unsigned short * uniquenick,
							const unsigned short * cdkey)
{
	char* uniquenick_A = (char*)UCS2ToUTF8StringAlloc(uniquenick);
	char* cdkey_A = (char*)UCS2ToUTF8StringAlloc(cdkey);
	chatRegisterUniqueNickA(chat, namespaceID, uniquenick_A, cdkey_A);
	gsifree(uniquenick_A);
	gsifree(cdkey_A);
}
#endif

void chatDisconnect(CHAT chat)
{
	CONNECTION;

	
	
	ciCleanupFilters(chat);

	
	
	if(!connection->disconnected && connection->globalCallbacks.disconnected)
#ifdef GSI_UNICODE
		connection->globalCallbacks.disconnected(chat, L"", connection->globalCallbacks.param);
#else
		connection->globalCallbacks.disconnected(chat, "", connection->globalCallbacks.param);
#endif

	
	
	if(connection->connected)
	{
		ciSocketSend(&connection->chatSocket, "QUIT :Later!");
		ciSocketThink(&connection->chatSocket);
	}

	
	
	ciCleanupChannels(chat);

	
	
	ciCleanupCallbacks(chat);

	
	
	ciSocketDisconnect(&connection->chatSocket);

	
	
	gsifree(chat);

	
	
	SocketShutDown();
}

void chatThink(CHAT chat)
{
	ciThink(chat, 0);
}

void chatSendRawA(CHAT chat,
				 const char * command)
{
	CONNECTION;
	if(!connection || (!connection->connected && !connection->connecting))
		return;

	ciSocketSend(&connection->chatSocket, command);
}
#ifdef GSI_UNICODE
void chatSendRawW(CHAT chat,
				 const unsigned short* command)
{
	char* command_A = (char*)UCS2ToUTF8StringAlloc(command);
	chatSendRawA(chat, command_A);
	gsifree(command_A);
}
#endif

void chatChangeNickA(CHAT chat,
					const char * newNick,
					chatChangeNickCallback callback,
					void * param,
					CHATBool blocking)
{
	int ID;
	CHATBool success = CHATTrue;
	
	CONNECTION;
	CONNECTED;

	assert(newNick);
	assert(newNick[0]);
	assert(strlen(newNick) < MAX_NICK);
	assert(callback);
	assert(connection->connected);

	
	
	if(!connection->connected)
		return;

	
	
	if(!newNick || !newNick[0])
		success = CHATFalse;
	
	
	
	
	if (ciNickIsValid(newNick) != CHAT_NICK_OK)
	{
		success = CHATFalse;
	}

	
	
	if(success && (strcasecmp(newNick, connection->nick) == 0))
		success = CHATFalse;

	
	
	if(!success)
	{
		if(callback)
		{
			ciCallbackChangeNickParams params;
			params.success = success;
			params.oldNick = connection->nick;
			params.newNick = (char *)newNick;
			ID = ciGetNextID(chat);
			ciAddCallback(chat, CALLBACK_CHANGE_NICK, (void*)callback, &params, param, ID, NULL);

			CI_DO_BLOCKING;
		}

		return;
	}

	
	
	ciSocketSendf(&connection->chatSocket, "NICK :%s", newNick);

	ID = ciAddNICKFilter(chat, connection->nick, newNick, callback, param);

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatChangeNickW(CHAT chat,
					const unsigned short * newNick,
					chatChangeNickCallback callback,
					void * param,
					CHATBool blocking)
{
	char* newNick_A = (char*)UCS2ToUTF8StringAlloc(newNick);
	chatChangeNickA(chat, newNick_A, callback, param, blocking);
	gsifree(newNick_A);
}
#endif

const char * chatGetNickA(CHAT chat)
{
	CONNECTION;

	if(!connection->connected) 
		return "";

	return connection->nick;
}
#ifdef GSI_UNICODE
const unsigned short * chatGetNickW(CHAT chat)
{
	CONNECTION;

	if(!connection->connected) 
		return L"";

	return connection->nickW;
}
#endif

void chatFixNickA(char * newNick,
				 const char * oldNick)
{
	int c;
	char oldNickCopy[MAX_CHAT_NICK];
	char *pOldNick = oldNickCopy;
	assert(oldNick);
	assert(newNick);
	strzcpy(oldNickCopy, oldNick, MAX_CHAT_NICK);
	
	
	
	
	
	if(*pOldNick == '@' || *pOldNick== '#' || *pOldNick== '+' || *pOldNick == ':')
		*newNick++ = '_';

	while((c = *pOldNick++) != '\0')
	{
		if(!strchr(VALID_NICK_CHARS, c))
			c = '_';

		*newNick++ = (char)c;
	}
	*newNick = '\0';

}
#ifdef GSI_UNICODE
void chatFixNickW(unsigned short* newNick,
				  const unsigned short* oldNick)
{
	char* oldNick_A = (char*)UCS2ToUTF8StringAlloc(newNick);
	char newNick_A[MAX_NICK];

	chatFixNickA(newNick_A, oldNick_A);

	UTF8ToUCS2String(newNick_A, newNick);

	gsifree(oldNick_A);
	
	GSI_UNUSED(oldNick);
}
#endif

const char * chatTranslateNickA(char * nick,
								const char * extension)
{
	int nickLen;
	int extensionLen;

	assert(nick);
	assert(extension);

	nickLen = (int)strlen(nick);
	extensionLen = (int)strlen(extension);

	if((extensionLen < nickLen) && (strcasecmp(nick + nickLen - extensionLen, extension) == 0))
	{
		nick[nickLen - extensionLen] = '\0';
		return nick;
	}

	return NULL;
}
#ifdef GSI_UNICODE
const unsigned short * chatTranslateNickW(unsigned short * nick,
										  const unsigned short * extension)
{
	char nick_A[MAX_NICK];
	char extension_A[MAX_NICK];
	const char * translatedNick_A;

	assert(nick);
	assert(extension);

	UCS2ToAsciiString(nick, nick_A);
	UCS2ToAsciiString(extension, extension_A);

	translatedNick_A = chatTranslateNickA(nick_A, extension_A);

	if(translatedNick_A)
	{
		AsciiToUCS2String(translatedNick_A, nick);
		return nick;
	}

	return NULL;
}
#endif

int chatGetUserID(CHAT chat)
{
	CONNECTION;

	return connection->userID;
}

int chatGetProfileID(CHAT chat)
{
	CONNECTION;

	return connection->profileID;
}

static void ciSetQuietModeEnumJoinedChannelsA(CHAT chat,
											 int index,
											 const char * channel,
											 void * param)
{
	
	
	ciAddUNQUIETFilter(chat, channel);
	
	GSI_UNUSED(index);
	GSI_UNUSED(param);
}
#ifdef GSI_UNICODE
static void ciSetQuietModeEnumJoinedChannelsW(CHAT chat,
											 int index,
											 const unsigned short * channel,
											 void * param)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	ciSetQuietModeEnumJoinedChannelsA(chat, index, channel_A, param);
	gsifree(channel_A);
}
#endif

void chatSetQuietMode(CHAT chat,
					  CHATBool quiet)
{
	CONNECTION;
	CONNECTED;

	
	
	if(connection->quiet == quiet)
		return;

	
	
	if(quiet)
		ciSocketSendf(&connection->chatSocket, "MODE %s +q", connection->nick);
	else
		ciSocketSendf(&connection->chatSocket, "MODE %s -q", connection->nick);

	
	
	connection->quiet = quiet;

	
	
	if(!quiet)
	{
		
		
		ciClearAllUsers(chat);

		
		
#ifdef GSI_UNICODE
		ciEnumJoinedChannels(chat, ciSetQuietModeEnumJoinedChannelsW, NULL);
#else
		ciEnumJoinedChannels(chat, ciSetQuietModeEnumJoinedChannelsA, NULL);
#endif
	}
}

void chatAuthenticateCDKeyA(CHAT chat,
						   const char * cdkey,
						   chatAuthenticateCDKeyCallback callback,
						   void * param,
						   CHATBool blocking)
{
	int ID;
	CHATBool success = CHATTrue;

	CONNECTION;
	CONNECTED;

	assert(cdkey);
	assert(cdkey[0]);
	assert(callback);
	assert(connection->connected);

	
	
	if(!connection->connected)
		return;

	
	
	if(!cdkey || !cdkey[0])
		success = CHATFalse;

	
	
	if(!success)
	{
		if(callback)
		{
			ciCallbackAuthenticateCDKeyParams params;
			params.result = 0;
			params.message = "";
			ID = ciGetNextID(chat);
			ciAddCallback(chat, CALLBACK_AUTHENTICATE_CDKEY, (void*)callback, &params, param, ID, NULL);

			CI_DO_BLOCKING;
		}

		return;
	}

	
	
	ciSocketSendf(&connection->chatSocket, "CDKEY %s", cdkey);

	ID = ciAddCDKEYFilter(chat, callback, param);

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatAuthenticateCDKeyW(CHAT chat,
						   const unsigned short* cdkey,
						   chatAuthenticateCDKeyCallback callback,
						   void * param,
						   CHATBool blocking)
{
	char* cdkey_A = (char*)UCS2ToUTF8StringAlloc(cdkey);
	chatAuthenticateCDKeyA(chat, cdkey_A, callback, param, blocking);
	gsifree(cdkey_A);
}
#endif

 


void chatEnumChannelsA(CHAT chat,
					  const char * filter,
					  chatEnumChannelsCallbackEach callbackEach,
					  chatEnumChannelsCallbackAll callbackAll,
					  void * param,
					  CHATBool blocking)
{
	int ID;
	CONNECTION;
	CONNECTED;

	assert((callbackAll != NULL) || (callbackEach != NULL));

	if(!filter)
		filter = "";

	ciSocketSendf(&connection->chatSocket, "LIST %s", filter);

	ID = ciAddLISTFilter(chat, callbackEach, callbackAll, param);

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatEnumChannelsW(CHAT chat,
					  const unsigned short * filter,
					  chatEnumChannelsCallbackEach callbackEach,
					  chatEnumChannelsCallbackAll callbackAll,
					  void * param,
					  CHATBool blocking)
{
	char* filter_A = (char*)UCS2ToUTF8StringAlloc(filter);
	chatEnumChannelsA(chat, filter_A, callbackEach, callbackAll, param, blocking);
	gsifree(filter_A);
}
#endif

void chatEnterChannelA(CHAT chat,
					  const char * channel,
					  const char * password,
					  chatChannelCallbacks * callbacks,
					  chatEnterChannelCallback callback,
					  void * param,
					  CHATBool blocking)
{
	int ID;
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	assert(callbacks != NULL);

	if(password == NULL)
		password = "";

	ciSocketSendf(&connection->chatSocket, "JOIN %s %s", channel, password);

	ID = ciAddJOINFilter(chat, channel, callback, param, callbacks, password);

	
	
	ciChannelEntering(chat, channel);

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatEnterChannelW(CHAT chat,
					  const unsigned short * channel,
					  const unsigned short * password,
					  chatChannelCallbacks * callbacks,
					  chatEnterChannelCallback callback,
					  void * param,
					  CHATBool blocking)
{
	char* channel_A =	(char*)UCS2ToUTF8StringAlloc(channel);
	char* password_A = 	(char*)UCS2ToUTF8StringAlloc(password);
	chatEnterChannelA(chat, channel_A, password_A, callbacks, callback, param, blocking);
	gsifree(channel_A);
	gsifree(password_A);
}
#endif

void chatLeaveChannelA(CHAT chat,
					  const char * channel,
					  const char * reason)
{
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();

	if(!reason)
		reason = "";

	ciSocketSendf(&connection->chatSocket, "PART %s :%s", channel, reason);

	
	
	ciChannelLeft(chat, channel);
}
#ifdef GSI_UNICODE
void chatLeaveChannelW(CHAT chat,
					  const unsigned short * channel,
					  const unsigned short* reason)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* reason_A = (char*)UCS2ToUTF8StringAlloc(reason);
	chatLeaveChannelA(chat, channel_A, reason_A);
	gsifree(channel_A);
	gsifree(reason_A);
}
#endif

void chatSendChannelMessageA(CHAT chat,
							const char * channel,
							const char * message,
							int type)
{
	chatChannelCallbacks * callbacks;
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	ASSERT_TYPE(type);

	if (!message || !message[0])
		return;
	if(type == CHAT_MESSAGE)
		ciSocketSendf(&connection->chatSocket, "PRIVMSG %s :%s", channel, message);
	else if(type == CHAT_ACTION)
		ciSocketSendf(&connection->chatSocket, "PRIVMSG %s :\001ACTION %s\001", channel, message);
	else if(type == CHAT_NOTICE)
		ciSocketSendf(&connection->chatSocket, "NOTICE %s :%s", channel, message);
	else if(type == CHAT_UTM)
		ciSocketSendf(&connection->chatSocket, "UTM %s :%s", channel, message);
	else if(type == CHAT_ATM)
		ciSocketSendf(&connection->chatSocket, "ATM %s :%s", channel, message);
	else
		return;

	
	
	callbacks = ciGetChannelCallbacks(chat, channel);
	if(callbacks != NULL)
	{
		ciCallbackChannelMessageParams params;
		params.channel = (char *)channel;
		params.user = connection->nick;
		params.message = (char *)message;
		params.type = type;
		ciAddCallback(chat, CALLBACK_CHANNEL_MESSAGE, (void*)callbacks->channelMessage, &params, callbacks->param, 0, channel);
	}
}
#ifdef GSI_UNICODE
void chatSendChannelMessageW(CHAT chat,
							const unsigned short * channel,
							const unsigned short * message,
							int type)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* message_A = (char*)UCS2ToUTF8StringAlloc(message);
	chatSendChannelMessageA(chat, channel_A, message_A, type);
	gsifree(channel_A);
	gsifree(message_A);
}
#endif

void chatSetChannelTopicA(CHAT chat,
						 const char * channel,
						 const char * topic)
{
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();

	if(topic == NULL)
		topic = "";

	ciSocketSendf(&connection->chatSocket, "TOPIC %s :%s", channel, topic);
}
#ifdef GSI_UNICODE
void chatSetChannelTopicW(CHAT chat,
						 const unsigned short * channel,
						 const unsigned short * topic)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* topic_A = (char*)UCS2ToUTF8StringAlloc(topic);
	chatSetChannelTopicA(chat, channel_A, topic_A);
	gsifree(channel_A);
	gsifree(topic_A);
}
#endif

void chatGetChannelTopicA(CHAT chat,
						 const char * channel,
						 chatGetChannelTopicCallback callback,
						 void * param,
						 CHATBool blocking)
{
	int ID;
	const char * topic;
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	assert(callback != NULL);

	
	
	topic = ciGetChannelTopic(chat, channel);
	if(topic)
	{
		ciCallbackGetChannelTopicParams params;

		ID = ciGetNextID(chat);

		params.success = CHATTrue;
		params.channel = (char *)channel;
		params.topic = (char *)topic;
		ciAddCallback(chat, CALLBACK_GET_CHANNEL_TOPIC, (void*)callback, &params, param, ID, channel);
	}
	else
	{
		ciSocketSendf(&connection->chatSocket, "TOPIC %s", channel);

		ID = ciAddTOPICFilter(chat, channel, callback, param);
	}

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatGetChannelTopicW(CHAT chat,
						 const unsigned short * channel,
						 chatGetChannelTopicCallback callback,
						 void * param,
						 CHATBool blocking)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	chatGetChannelTopicA(chat, channel_A, callback, param, blocking);
	gsifree(channel_A);
}
#endif

void chatSetChannelModeA(CHAT chat,
						const char * channel,
						CHATChannelMode * mode)
{
	char buffer[64];

	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	assert(mode != NULL);

	
	
	strcpy(buffer, "XiXpXsXmXnXtXlXe");
	if(mode->InviteOnly)
		buffer[0] = '+';
	else
		buffer[0] = '-';
	if(mode->Private)
		buffer[2] = '+';
	else
		buffer[2] = '-';
	if(mode->Secret)
		buffer[4] = '+';
	else
		buffer[4] = '-';
	if(mode->Moderated)
		buffer[6] = '+';
	else
		buffer[6] = '-';
	if(mode->NoExternalMessages)
		buffer[8] = '+';
	else
		buffer[8] = '-';
	if(mode->OnlyOpsChangeTopic)
		buffer[10] = '+';
	else
		buffer[10] = '-';
	if(mode->Limit > 0)
		buffer[12] = '+';
	else
		buffer[12] = '-';
	if(mode->OpsObeyChannelLimit)
		buffer[14] = '+';
	else
		buffer[14] = '-';

	
	
	if(mode->Limit > 0)
		sprintf(&buffer[strlen(buffer)], " %d", mode->Limit);

	ciSocketSendf(&connection->chatSocket, "MODE %s %s", channel, buffer);
}
#ifdef GSI_UNICODE
void chatSetChannelModeW(CHAT chat,
						const unsigned short * channel,
						CHATChannelMode * mode)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	chatSetChannelModeA(chat, channel_A, mode);
	gsifree(channel_A);
}
#endif

void chatGetChannelModeA(CHAT chat,
						const char * channel,
						chatGetChannelModeCallback callback,
						void * param,
						CHATBool blocking)
{
	int ID;
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	assert(callback != NULL);

	
	
	if(ciInChannel(chat, channel))
	{
		CHATChannelMode mode;

		
		
		if(ciGetChannelMode(chat, channel, &mode))
		{
			ciCallbackGetChannelModeParams params;

			
			
			ID = ciGetNextID(chat);

			
			
			params.success = CHATTrue;
			params.channel = (char *)channel;
			params.mode = &mode;
			ciAddCallback(chat, CALLBACK_GET_CHANNEL_MODE, (void*)callback, &params, param, ID, NULL);

			CI_DO_BLOCKING;

			return;
		}
	}

	ciSocketSendf(&connection->chatSocket, "MODE %s", channel);

	ID = ciAddCMODEFilter(chat, channel, callback, param);

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatGetChannelModeW(CHAT chat,
						const unsigned short * channel,
						chatGetChannelModeCallback callback,
						void * param,
						CHATBool blocking)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	chatGetChannelModeA(chat, channel_A, callback, param, blocking);
	gsifree(channel_A);
}
#endif

void chatSetChannelPasswordA(CHAT chat,
							const char * channel,
							CHATBool enable,
							const char * password)
{
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	ASSERT_PASSWORD();

	if(enable)
		ciSocketSendf(&connection->chatSocket, "MODE %s +k %s", channel, password);
	else
		ciSocketSendf(&connection->chatSocket, "MODE %s -k %s", channel, password);
}
#ifdef GSI_UNICODE
void chatSetChannelPasswordW(CHAT chat,
							const unsigned short * channel,
							CHATBool enable,
							const unsigned short * password)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* password_A = (char*)UCS2ToUTF8StringAlloc(password);
	chatSetChannelPasswordA(chat, channel_A, enable, password_A);
	gsifree(channel_A);
	gsifree(password_A);
}
#endif

void chatGetChannelPasswordA(CHAT chat,
							const char * channel,
							chatGetChannelPasswordCallback callback,
							void * param,
							CHATBool blocking)
{
	ciCallbackGetChannelPasswordParams params;
	const char * password;
	int ID;
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	assert(callback != NULL);

	
	
	if(!ciInChannel(chat, channel))
		return; 

	
	
	password = ciGetChannelPassword(chat, channel);
	assert(password != NULL);

	
	
	ID = ciGetNextID(chat);

	
	
	params.success = CHATTrue;
	params.channel = (char *)channel;
	params.enabled = CHATTrue;
	params.password = (char *)password;
	ciAddCallback(chat, CALLBACK_GET_CHANNEL_PASSWORD, (void*)callback, &params, param, ID, NULL);

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatGetChannelPasswordW(CHAT chat,
							const unsigned short * channel,
							chatGetChannelPasswordCallback callback,
							void * param,
							CHATBool blocking)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	chatGetChannelPasswordA(chat, channel_A, callback, param, blocking);
	gsifree(channel_A);
}
#endif

void chatSetChannelLimitA(CHAT chat,
						 const char * channel,
						 int limit)
{
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	assert(limit >= 0);

	if(limit)
		ciSocketSendf(&connection->chatSocket, "MODE %s +l %d", channel, limit);
	else
		ciSocketSendf(&connection->chatSocket, "MODE %s -l", channel);
}
#ifdef GSI_UNICODE
void chatSetChannelLimitW(CHAT chat,
						 const unsigned short * channel,
						 int limit)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	chatSetChannelLimitA(chat, channel_A, limit);
	gsifree(channel_A);
}
#endif

void chatEnumChannelBansA(CHAT chat,
						 const char * channel,
						 chatEnumChannelBansCallback callback,
						 void * param,
						 CHATBool blocking)
{
	int ID;
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	assert(callback != NULL);

	ciSocketSendf(&connection->chatSocket, "MODE %s +b", channel);

	ID = ciAddGETBANFilter(chat, channel, callback, param);

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatEnumChannelBansW(CHAT chat,
						 const unsigned short * channel,
						 chatEnumChannelBansCallback callback,
						 void * param,
						 CHATBool blocking)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	chatEnumChannelBansA(chat, channel_A, callback, param, blocking);
	gsifree(channel_A);
}
#endif

void chatAddChannelBanA(CHAT chat,
					   const char * channel,
					   const char * ban)
{
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	ASSERT_BAN();

	ciSocketSendf(&connection->chatSocket, "MODE %s +b %s", channel, ban);
}
#ifdef GSI_UNICODE
void chatAddChannelBanW(CHAT chat,
					   const unsigned short * channel,
					   const unsigned short * ban)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* ban_A = (char*)UCS2ToUTF8StringAlloc(ban);
	chatAddChannelBanA(chat, channel_A, ban_A);
	gsifree(channel_A);
	gsifree(ban_A);
}
#endif

void chatRemoveChannelBanA(CHAT chat,
						  const char * channel,
						  const char * ban)
{
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	ASSERT_BAN();

	ciSocketSendf(&connection->chatSocket, "MODE %s -b %s", channel, ban);
}
#ifdef GSI_UNICODE
void chatRemoveChannelBanW(CHAT chat,
						  const unsigned short * channel,
						  const unsigned short * ban)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* ban_A = (char*)UCS2ToUTF8StringAlloc(ban);
	chatRemoveChannelBanA(chat, channel_A, ban_A);
	gsifree(channel_A);
	gsifree(ban_A);
}
#endif

void chatSetChannelGroupA(CHAT chat,
						 const char * channel,
						 const char * group)
{
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();

	
	
	if(!group || !group[0])
		return;

	ciSocketSendf(&connection->chatSocket, "SETGROUP %s %s", channel, group);
}
#ifdef GSI_UNICODE
void chatSetChannelGroupW(CHAT chat,
						  const unsigned short * channel,
						  const unsigned short* group)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* group_A = (char*)UCS2ToUTF8StringAlloc(group);
	chatSetChannelGroupA(chat, channel_A, group_A);
	gsifree(channel_A);
	gsifree(group_A);
}
#endif

int chatGetChannelNumUsersA(CHAT chat,
						   const char * channel)
{
	CONNECTION;
	if(!connection->connected)
		return -1;

	ASSERT_CHANNEL();

	if(!channel || !channel[0])
		return -1;

	if(!ciInChannel(chat, channel))
		return -1;

	return ciGetChannelNumUsers(chat, channel);
}
#ifdef GSI_UNICODE
int chatGetChannelNumUsersW(CHAT chat,
						   const unsigned short * channel)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	int result = chatGetChannelNumUsersA(chat, channel_A);
	gsifree(channel_A);

	return result;
}
#endif

CHATBool chatInChannelA(CHAT chat,
					   const char * channel)

{
	CONNECTION;
	if(!connection->connected)
		return CHATFalse;

	ASSERT_CHANNEL();

	if(!channel || !channel[0])
		return CHATFalse;

	return ciInChannel(chat, channel);
}
#ifdef GSI_UNICODE
CHATBool chatInChannelW(CHAT chat,
					    const unsigned short * channel)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	CHATBool result = chatInChannelA(chat, channel_A);
	gsifree(channel_A);

	return result;
}
#endif


 


static void ciEnumUsersCallback(CHAT chat, const char * channel, int numUsers, const char ** users, int * modes, void * param)
{
	ciEnumUsersData * data;
	CONNECTION;

	
	
	ASSERT_CHANNEL();
	assert(numUsers >= 0);
#ifdef _DEBUG
	{
	int i;
	if(numUsers > 0)
	{
		assert(users != NULL);
		assert(modes != NULL);
	}
	for(i = 0 ; i < numUsers ; i++)
	{
		ASSERT_USER(users[i]);
		ASSERT_TYPE(modes[i]);
	}
	}
#endif
	assert(param != NULL);

	
	
	data = (ciEnumUsersData *)param;
	assert(data->callback != NULL);

	
	
#ifdef GSI_UNICODE
	{
		unsigned short* channel_W = UTF8ToUCS2StringAlloc(channel);
		unsigned short** users_W = UTF8ToUCS2StringArrayAlloc(users, numUsers);
		data->callback(chat, CHATTrue, channel_W, numUsers, (const unsigned short**)users_W, modes, data->param);
		gsifree(channel_W);
		while(numUsers-- > 0)
			gsifree(users_W[numUsers]);
		gsifree(users_W);
	}
#else
	data->callback(chat, CHATTrue, channel, numUsers, users, modes, data->param);
#endif
}

// compile-state padding: 20 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
extern "C" int __pad_13(int x) { int y = x * 13 + 3; return y; }
extern "C" int __pad_14(int x) { int y = x * 14 + 3; return y; }
extern "C" int __pad_15(int x) { int y = x * 15 + 3; return y; }
extern "C" int __pad_16(int x) { int y = x * 16 + 3; return y; }
extern "C" int __pad_17(int x) { int y = x * 17 + 3; return y; }
extern "C" int __pad_18(int x) { int y = x * 18 + 3; return y; }
extern "C" int __pad_19(int x) { int y = x * 19 + 3; return y; }
void chatEnumUsersA(CHAT chat,
				   const char * channel,
				   chatEnumUsersCallback callback,
				   void * param,
				   CHATBool blocking)
{
	int ID;
	ciEnumUsersData data;
#line 2117
	CONNECTION;
#line 2118
	CONNECTED;

	
#line 2121
	assert(callback != NULL);

	if(channel == NULL)
		channel = "";

	
	
	if(channel[0] != '\0')
	{
		
		
		if(ciInChannel(chat, channel))
		{
			
			
			data.callback = callback;
			data.param = param;
			ciChannelListUsers(chat, channel, ciEnumUsersCallback, &data);

			return;
		}
	}

	ciSocketSendf(&connection->chatSocket, "NAMES %s", channel);

	
	
	if(!channel[0])
		channel = NULL;

	ID = ciAddNAMESFilter(chat, channel, callback, param);
	
	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatEnumUsersW(CHAT chat,
				   const unsigned short * channel,
				   chatEnumUsersCallback callback,
				   void * param,
				   CHATBool blocking)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	chatEnumUsersA(chat, channel_A, callback, param, blocking);
	gsifree(channel_A);
}
#endif




void chatEnumJoinedChannels(CHAT chat,
					  chatEnumJoinedChannelsCallback callback,
					  void * param)
{
	ciEnumJoinedChannels(chat, callback, param);
}

void chatSendUserMessageA(CHAT chat,
						 const char * user,
						 const char * message,
						 int type)
{
	CONNECTION;
	CONNECTED;

	ASSERT_USER(user);
	ASSERT_TYPE(type);

	if (!message || message[0] == 0)
		return;	

	if(type == CHAT_MESSAGE)
		ciSocketSendf(&connection->chatSocket, "PRIVMSG %s :%s", user, message);
	else if(type == CHAT_ACTION)
		ciSocketSendf(&connection->chatSocket, "PRIVMSG %s :\001ACTION %s\001", user, message);
	else if(type == CHAT_NOTICE)
		ciSocketSendf(&connection->chatSocket, "NOTICE %s :%s", user, message);
	else if(type == CHAT_UTM)
		ciSocketSendf(&connection->chatSocket, "UTM %s :%s", user, message);
	else if(type == CHAT_ATM)
		ciSocketSendf(&connection->chatSocket, "ATM %s :%s", user, message);
}
#ifdef GSI_UNICODE
void chatSendUserMessageW(CHAT chat,
						 const unsigned short * user,
						 const unsigned short * message,
						 int type)
{
	char* user_A = (char*)UCS2ToUTF8StringAlloc(user);
	char* message_A = (char*)UCS2ToUTF8StringAlloc(message);
	chatSendUserMessageA(chat, user_A, message_A, type);
	gsifree(user_A);
	gsifree(message_A);
}
#endif

void chatGetUserInfoA(CHAT chat,
					 const char * user,
					 chatGetUserInfoCallback callback,
					 void * param,
					 CHATBool blocking)
{
	int ID;
	CONNECTION;
	CONNECTED;

	ASSERT_USER(user);
	assert(callback != NULL);

	ciSocketSendf(&connection->chatSocket, "WHOIS %s", user);

	ID = ciAddWHOISFilter(chat, user, callback, param);

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatGetUserInfoW(CHAT chat,
					 const unsigned short * user,
					 chatGetUserInfoCallback callback,
					 void * param,
					 CHATBool blocking)
{
	char* user_A = (char*)UCS2ToUTF8StringAlloc(user);
	chatGetUserInfoA(chat, user_A, callback, param, blocking);
	gsifree(user_A);
}
#endif

void chatGetBasicUserInfoA(CHAT chat,
						  const char * nick,
						  chatGetBasicUserInfoCallback callback,
						  void * param,
						  CHATBool blocking)
{
	int ID;
	const char * user;
	const char * address;
	CONNECTION;
	CONNECTED;

	ASSERT_USER(nick);
	assert(callback != NULL);

	
	
	if(ciGetUserBasicInfoA(chat, nick, &user, &address))
	{
		ciCallbackGetBasicUserInfoParams params;

		params.success = CHATTrue;
		params.nick = (char *)nick;
		params.user = (char *)user;
		params.address = (char *)address;

		ID = ciGetNextID(chat);

		ciAddCallback(chat, CALLBACK_GET_BASIC_USER_INFO, (void*)callback, &params, param, ID, NULL);
	}
	else
	{
		ciSocketSendf(&connection->chatSocket, "WHO %s", nick);

		ID = ciAddWHOFilter(chat, nick, callback, param);
	}

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatGetBasicUserInfoW(CHAT chat,
						  const unsigned short * nick,
						  chatGetBasicUserInfoCallback callback,
						  void * param,
						  CHATBool blocking)
{
	char* nick_A = (char*)UCS2ToUTF8StringAlloc(nick);
	chatGetBasicUserInfoA(chat, nick_A, callback, param, blocking);
	gsifree(nick_A);
}
#endif

CHATBool chatGetBasicUserInfoNoWaitA(CHAT chat,
									const char * nick,
									const char ** user,
									const char ** address)
{
	CONNECTION;
	
	if(!connection)
		return CHATFalse;
	if(!connection->connected)
		return CHATFalse;

	ASSERT_USER(nick);

	return ciGetUserBasicInfoA(chat, nick, user, address);
}
#ifdef GSI_UNICODE
CHATBool chatGetBasicUserInfoNoWaitW(CHAT chat,
									const unsigned short * nick, 
									const unsigned short ** user,
									const unsigned short ** address)
{
	char nick_A[MAX_NICK];

	CONNECTION;
	
	if(!connection)
		return CHATFalse;
	if(!connection->connected)
		return CHATFalse;

	assert(nick);

	UCS2ToAsciiString(nick, nick_A);
	return ciGetUserBasicInfoW(chat, nick_A, user, address);
}
#endif

void chatGetChannelBasicUserInfoA(CHAT chat,
								 const char * channel,
								 chatGetChannelBasicUserInfoCallback callback,
								 void * param,
								 CHATBool blocking)
{
	int ID;
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	assert(callback != NULL);

	ciSocketSendf(&connection->chatSocket, "WHO %s", channel);

	ID = ciAddCWHOFilter(chat, channel, callback, param);

	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatGetChannelBasicUserInfoW(CHAT chat,
								 const unsigned short * channel,
								 chatGetChannelBasicUserInfoCallback callback,
								 void * param,
								 CHATBool blocking)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	chatGetChannelBasicUserInfoA(chat, channel_A, callback, param, blocking);
	gsifree(channel_A);
}
#endif

void chatInviteUserA(CHAT chat,
					const char * channel,
					const char * user)
{
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	ASSERT_USER(user);

	ciSocketSendf(&connection->chatSocket, "INVITE %s %s", user, channel);
}
#ifdef GSI_UNICODE
void chatInviteUserW(CHAT chat,
					const unsigned short * channel,
					const unsigned short * user)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* user_A = (char*)UCS2ToUTF8StringAlloc(user);
	chatInviteUserA(chat, channel_A, user_A);
	gsifree(channel_A);
	gsifree(user_A);
}
#endif

void chatKickUserA(CHAT chat,
				  const char * channel,
				  const char * user,
				  const char * reason)
{
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	ASSERT_USER(user);

	if(reason == NULL)
		reason = "";

	ciSocketSendf(&connection->chatSocket, "KICK %s %s :%s", channel, user, reason);
}
#ifdef GSI_UNICODE
void chatKickUserW(CHAT chat,
				  const unsigned short * channel,
				  const unsigned short * user,
				  const unsigned short * reason)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* user_A = (char*)UCS2ToUTF8StringAlloc(user);
	char* reason_A = (char*)UCS2ToUTF8StringAlloc(reason);
	chatKickUserA(chat, channel_A, user_A, reason_A);
	gsifree(channel_A);
	gsifree(user_A);
	gsifree(reason_A);
}
#endif

void chatBanUserA(CHAT chat,
				 const char * channel,
				 const char * user)
{
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	ASSERT_USER(user);

	ciSocketSendf(&connection->chatSocket, "WHOIS %s", user);

	ciAddBANFilter(chat, user, channel);
}
#ifdef GSI_UNICODE
void chatBanUserW(CHAT chat,
				  const unsigned short * channel,
				  const unsigned short * user)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* user_A = (char*)UCS2ToUTF8StringAlloc(user);
	chatBanUserA(chat, channel_A, user_A);
	gsifree(channel_A);
	gsifree(user_A);
}
#endif

void chatSetUserModeA(CHAT chat,
					 const char * channel,
					 const char * user,
					 int mode)
{
	int sign;

	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	ASSERT_USER(user);
	ASSERT_TYPE(mode);

	sign = (mode & CHAT_OP)?'+':'-';
	ciSocketSendf(&connection->chatSocket, "MODE %s %co %s", channel, sign, user);

	sign = (mode & CHAT_VOICE)?'+':'-';
	ciSocketSendf(&connection->chatSocket, "MODE %s %cv %s", channel, sign, user);
}
#ifdef GSI_UNICODE
void chatSetUserModeW(CHAT chat,
					 const unsigned short * channel,
					 const unsigned short * user,
					 int mode)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* user_A = (char*)UCS2ToUTF8StringAlloc(user);
	chatSetUserModeA(chat, channel_A, user_A, mode);
	gsifree(channel_A);
	gsifree(user_A);
}
#endif

void chatGetUserModeA(CHAT chat,
					 const char * channel,
					 const char * user,
					 chatGetUserModeCallback callback,
					 void * param,
					 CHATBool blocking)
{
	int ID;
	int mode;
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	ASSERT_USER(user);
	assert(callback != NULL);

	
	
	mode = ciGetUserMode(chat, channel, user);
	if(mode != -1)
	{
		ciCallbackGetUserModeParams params;
		params.success = CHATTrue;
		params.channel = (char *)channel;
		params.user = (char *)user;
		params.mode = mode;

		ID = ciGetNextID(chat);
		ciAddCallback(chat, CALLBACK_GET_USER_MODE, (void*)callback, &params, param, ID, NULL);

		CI_DO_BLOCKING;
	}

	ciSocketSendf(&connection->chatSocket, "WHO %s", user);

	ID = ciAddUMODEFilter(chat, user, channel, callback, param);
	
	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatGetUserModeW(CHAT chat,
					 const unsigned short * channel,
					 const unsigned short * user,
					 chatGetUserModeCallback callback,
					 void * param,
					 CHATBool blocking)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* user_A = (char*)UCS2ToUTF8StringAlloc(user);
	chatGetUserModeA(chat, channel_A, user_A, callback, param, blocking);
	gsifree(channel_A);
	gsifree(user_A);
}
#endif

CHATBool chatGetUserModeNoWaitA(CHAT chat,
							   const char * channel,
							   const char * user,
							   int * mode)
{
#line 2549
	CONNECTION;
#line 7404
	if(!connection->connected)
		return CHATFalse;

#line 2553
	ASSERT_CHANNEL();
	ASSERT_USER(user);
	assert(mode);
#line 7410

	
	
	*mode = ciGetUserMode(chat, channel, user);

	if(*mode == -1)
		return CHATFalse;
	return CHATTrue;
}
#ifdef GSI_UNICODE
CHATBool chatGetUserModeNoWaitW(CHAT chat,
							   const unsigned short * channel,
							   const unsigned short  * user,
							   int * mode)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	char* user_A	= (char*)UCS2ToUTF8StringAlloc(user);
	CHATBool result = chatGetUserModeNoWaitA(chat, channel_A, user_A, mode);
	gsifree(channel_A);
	gsifree(user_A);
	return result;
}
#endif


void chatGetUdpRelayA(CHAT chat,
					 const char * channel,
					 chatGetUdpRelayCallback callback,
					 void * param,
					 CHATBool blocking)
{
	int ID;
	CONNECTION;
	CONNECTED;

	ASSERT_CHANNEL();
	assert(callback != NULL);

	ciSocketSendf(&connection->chatSocket, "GETUDPRELAY %s", channel);

	ID = ciAddGETUDPRELAYFilter(chat, channel, callback, param);

	CI_DO_BLOCKING;
}

#ifdef GSI_UNICODE
void chatGetUdpRelayW(CHAT chat,
					 const unsigned short * channel,
					 chatGetUdpRelayCallback callback,
					 void * param,
					 CHATBool blocking)
{
	char* channel_A = (char*)UCS2ToUTF8StringAlloc(channel);
	chatGetUdpRelayA(chat, channel_A, callback, param, blocking);
	gsifree(channel_A);
}
#endif

 


void chatSetGlobalKeysA(CHAT chat,
					   int num,
					   const char ** keys,
					   const char ** values)
{
	char buffer[512];
	const char * key;
	const char * value;
	int i;
	CONNECTION;
	CONNECTED;

	if(!keys || !values)
		return;

	strcpy(buffer, "SETKEY :");
	for(i = 0 ; i < num ; i++)
	{
		key = keys[i];
		if(!key || !key[0])
			return;
		value = values[i];
		if(!value)
			value = "";
		sprintf(buffer + strlen(buffer), "\\%s\\%s", key, value);
	}

	ciSocketSend(&connection->chatSocket, buffer);
}
#ifdef GSI_UNICODE
void chatSetGlobalKeysW(CHAT chat,
					   int num,
					   const unsigned short ** keys,
					   const unsigned short ** values)
{
	char** keys_A	= (char**)UCS2ToUTF8StringArrayAlloc(keys, num);
	char** values_A = (char**)UCS2ToUTF8StringArrayAlloc(values, num);
	int i = 0;
	chatSetGlobalKeysA(chat, num, (const char**)keys_A, (const char**)values_A);
	for (; i < num; i++)
	{
		gsifree(keys_A[i]);
		gsifree(values_A[i]);
	}
	gsifree(keys_A);
	gsifree(values_A);
}
#endif

static char * ciRandomCookie()
{
	static char cookie[4];
	static int nextCookie = 0;

	sprintf(cookie, "%03d", nextCookie++);
	nextCookie %= 1000;

	return cookie;
}

static void ciSendGetKey(CHAT chat,
						 const char * target,
						 const char * cookie,
						 int num,
						 const char ** keys)
{
	char buffer[512];
	int len;
	int i;
	int j;
	int keyLen;

	CONNECTION;

	assert(target && target[0]);
	assert(cookie && cookie[0]);
	assert(num >= 1);
	assert(keys);

	
	
	sprintf(buffer, "GETKEY %s %s 0 :", target, cookie);
	len = (int)strlen(buffer);

	
	
	for(i = 0 ; i < num ; i++)
	{
		
		
		if(!keys[i] || !keys[i][0])
			continue;

		
		
		keyLen = (int)strlen(keys[i]);
		if((len + keyLen + 1) >= (int)sizeof(buffer))
			return;

		
		
		buffer[len++] = '\\';
		memcpy(buffer + len, keys[i], (unsigned int)keyLen);
		for(j = len ; j < (len + keyLen) ; j++)
			if(buffer[j] == '\\')
				buffer[j] = '/';
		len += keyLen;
		buffer[len] = '\0';
	}

	
	
	ciSocketSend(&connection->chatSocket, buffer);
}

void chatGetGlobalKeysA(CHAT chat,
					   const char * target,
					   int num,
					   const char ** keys,
					   chatGetGlobalKeysCallback callback,
					   void * param,
					   CHATBool blocking)
{
	char * cookie;
	const char * channel;
	int ID;
	CONNECTION;
	CONNECTED;

	assert(num >= 0);
	assert(keys);

	if(!target || !target[0])
		target = connection->nick;

	
	
	cookie = ciRandomCookie();

	
	
	ciSendGetKey(chat, target, cookie, num, keys);

	
	
	if(target[0] == '#')
		channel = target;
	else
		channel = NULL;

	ID = ciAddGETKEYFilter(chat, cookie, num, keys, channel, callback, param);
	
	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatGetGlobalKeysW(CHAT chat,
					   const unsigned short * target,
					   int num,
					   const unsigned short ** keys,
					   chatGetGlobalKeysCallback callback,
					   void * param,
					   CHATBool blocking)
{
	char* target_A;
	char** keys_A;
	int i = 0;

	assert(target);
	assert(keys);

	target_A	= (char*)UCS2ToUTF8StringAlloc(target);
	keys_A		= (char**)UCS2ToUTF8StringArrayAlloc(keys, num);

	chatGetGlobalKeysA(chat, target_A, num, (const char**)keys_A, callback, param, blocking);
	gsifree(target_A);

	for (; i < num; i++)
		gsifree(keys_A[i]);
	gsifree(keys_A);
}
#endif

void chatSetChannelKeysA(CHAT chat,
						const char * channel,
						const char * user,
						int num,
						const char ** keys,
						const char ** values)
{
	char buffer[512];
	const char * value;
	int i;
	CONNECTION;
	CONNECTED;

	if(!user || !user[0])
		sprintf(buffer, "SETCHANKEY %s :", channel);
	else
		sprintf(buffer, "SETCKEY %s %s :", channel, user);
	for(i = 0 ; i < num ; i++)
	{
		value = values[i];
		if(!value)
			value = "";
		sprintf(buffer + strlen(buffer), "\\%s\\%s", keys[i], value);
	}

	ciSocketSend(&connection->chatSocket, buffer);
}
#ifdef GSI_UNICODE
void chatSetChannelKeysW(CHAT chat,
						const unsigned short * channel,
						const unsigned short * user,
						int num,
						const unsigned short ** keys,
						const unsigned short ** values)
{
	char* channel_A;
	char* user_A;
	char** keys_A;
	char** values_A;
	int i = 0;

	channel_A	= (char*)UCS2ToUTF8StringAlloc(channel);
	user_A		= (char*)UCS2ToUTF8StringAlloc(user);
	keys_A		= (char**)UCS2ToUTF8StringArrayAlloc(keys, num);
	values_A	= (char**)UCS2ToUTF8StringArrayAlloc(values, num);

	chatSetChannelKeysA(chat, channel_A, user_A, num, (const char**)keys_A, (const char**)values_A);

	gsifree(channel_A);
	gsifree(user_A);

	for (; i < num; i++)
	{
		gsifree(keys_A[i]);
		gsifree(values_A[i]);
	}

	gsifree(keys_A);
	gsifree(values_A);
}
#endif

static CHATBool ciSendGetChannelKey(CHAT chat,
									const char * channel,
									const char * nick,
									const char * cookie,
									int num,
									const char ** keys)
{
	char buffer[512];
	int len;
	int i;
	int j;
	int keyLen;
	CHATBool getBrocastKeys = CHATFalse;

	CONNECTION;

	assert(channel && channel[0]);
	assert(cookie && cookie[0]);
	assert(!num || keys);

	
	
	if(!nick || !nick[0])
		sprintf(buffer, "GETCHANKEY %s %s 0 :", channel, cookie);
	else
		sprintf(buffer, "GETCKEY %s %s %s 0 :", channel, nick, cookie);
	len = (int)strlen(buffer);

	
	
	for(i = 0 ; i < num ; i++)
	{
		
		
		if(!keys[i] || !keys[i][0])
			continue;

		
		
		if(strcmp(keys[i], "b_*") == 0)
		{
			getBrocastKeys = CHATTrue;
			continue;
		}

		
		
		keyLen = (int)strlen(keys[i]);
		if((len + keyLen + 1) >= (int)sizeof(buffer))
			continue;

		
		
		buffer[len++] = '\\';
		memcpy(buffer + len, keys[i], (unsigned int)keyLen);
		for(j = len ; j < (len + keyLen) ; j++)
			if(buffer[j] == '\\')
				buffer[j] = '/';
		len += keyLen;
		buffer[len] = '\0';
	}

	
	
	if(getBrocastKeys)
	{
		if((len + 4) < (int)sizeof(buffer))
		{
			strcpy(buffer + len, "\\b_*");
			len += 4;
		}
	}
	
	
	
	if(!num && (!nick || !nick[0]))
	{
		strcpy(buffer + len, "*");
		len++;
	}

	
	
	ciSocketSend(&connection->chatSocket, buffer);

	return getBrocastKeys;
}

void chatGetChannelKeysA(CHAT chat,
						const char * channel,
						const char * user,
						int num,
						const char ** keys,
						chatGetChannelKeysCallback callback,
						void * param,
						CHATBool blocking)
{
	char * cookie;
	int ID;
	CHATBool getBroadcastKeys;
	CONNECTION;
	CONNECTED;

	assert(num >= 0);
	assert(!num || keys);

	
	
	cookie = ciRandomCookie();

	
	
	getBroadcastKeys = ciSendGetChannelKey(chat, channel, user, cookie, num, keys);

	if(!user || !user[0])
		ID = ciAddGETCHANKEYFilter(chat, cookie, num, keys, getBroadcastKeys, callback, param);
	else
		ID = ciAddGETCKEYFilter(chat, cookie, num, keys, (CHATBool)(strcmp(user, "*") == 0), getBroadcastKeys, callback, param);
	
	CI_DO_BLOCKING;
}
#ifdef GSI_UNICODE
void chatGetChannelKeysW(CHAT chat,
						const unsigned short * channel,
						const unsigned short * user,
						int num,
						const unsigned short ** keys,
						chatGetChannelKeysCallback callback,
						void * param,
						CHATBool blocking)
{
	char* channel_A;
	char* user_A;
	char** keys_A;
	int i = 0;

	channel_A	= (char*)UCS2ToUTF8StringAlloc(channel);
	user_A		= (char*)UCS2ToUTF8StringAlloc(user);
	keys_A		= (char**)UCS2ToUTF8StringArrayAlloc(keys, num);

	chatGetChannelKeysA(chat, channel_A, user_A, num, (const char**)keys_A, callback, param, blocking);

	gsifree(channel_A);
	gsifree(user_A);

	for (; i < num; i++)
		gsifree(keys_A[i]);

	gsifree(keys_A);
}
#endif



int ciNickIsValid(const char* nick)
{
	if (strlen(nick) >= MAX_CHAT_NICK)
		return CHAT_NICK_TOO_LONG;

	
	if ((NULL == nick) || ('\0' == *nick))
		return CHAT_INVALID;


	
	
	
	
	
	

	if(*nick == '@' || *nick == '#' || *nick == '+' || *nick == ':')
		return CHAT_INVALID;

	
	while(*nick != '\0') 
	{
		
		if (NULL == strchr(VALID_NICK_CHARS,*nick++))
			return CHAT_INVALID;
	}
	
	return CHAT_NICK_OK;
}

 


void ciNickError(CHAT chat, int type, const char * nick, int numSuggestedNicks, char ** suggestedNicks)
{
	CONNECTION;

	
	
	if(connection->nickErrorCallback)
	{
		ciCallbackNickErrorParams params;

		
		
		memset(&params, 0, sizeof(ciCallbackNickErrorParams));
		params.type = type;
		params.nick = (char *)nick;
		params.numSuggestedNicks = numSuggestedNicks;
		params.suggestedNicks = suggestedNicks;
		ciAddCallback(chat, CALLBACK_NICK_ERROR, (void*)connection->nickErrorCallback, &params, connection->connectParam, 0, NULL);
	}
	else
	{
		
		
		connection->connecting = CHATFalse;

		
		
		if(connection->connectCallback != NULL)
			connection->connectCallback(chat, CHATFalse, CHAT_NICK_ERROR, connection->connectParam);
	}
}


