// FUNCTION: BF2 0x818ba0
typedef int GHTTPRequest;

typedef unsigned int GHTTPState;

struct GHIConnection
{
	char pad0[0x10];
	GHTTPState state;
	char pad1[0xd4];
	char * recvBuffer_data;
	char pad2[0x8c];
	int statusCode;
	int statusStringIndex;
};

extern "C" GHIConnection * ghiRequestToConnection(GHTTPRequest request);

extern "C" const char * ghttpGetResponseStatus
(
	GHTTPRequest request,
	int * statusCode
)
{
	GHIConnection * connection;

	connection = ghiRequestToConnection(request);
	if(!connection)
		return 0;

	if(connection->state <= 6)
		return 0;

	if(statusCode)
		*statusCode = connection->statusCode;

	return (connection->recvBuffer_data + connection->statusStringIndex);
}
