// FUNCTION: BF2 0x818cd0
typedef int SOCKET;
typedef int GHTTPRequest;
#define INVALID_SOCKET ((SOCKET)-1)
struct GHIConnection { char pad0[0x78]; SOCKET socket; char pad1[0x188 - 0x78 - 4]; int completed; };
extern "C" GHIConnection * ghiRequestToConnection(GHTTPRequest request);

SOCKET ghttpGetSocket(GHTTPRequest request)
{
	GHIConnection * connection;
	SOCKET ret;

	connection = ghiRequestToConnection(request);
	if(connection == 0)
		goto err;

	if (connection->completed == 0)
		goto err;

	ret = connection->socket;
	connection->socket = INVALID_SOCKET;

	return ret;
err:
	return INVALID_SOCKET;
}
