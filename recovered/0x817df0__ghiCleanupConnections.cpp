// FUNCTION: BF2 0x817df0
extern "C" void gsifree(void *ptr);

typedef int (* ghiEnumConnectionsCallback)(void * connection);
extern "C" void ghiFreeConnection(void * connection);
extern "C" void ghiEnumConnections(ghiEnumConnectionsCallback callback);

extern void ** ghiConnections;
extern int ghiConnectionsLen;
extern int ghiNumConnections;

extern "C" void ghiCleanupConnections(void)
{
	int i;

	if(!ghiConnections)
		return;

	// Cleanup all running connections.
	///////////////////////////////////
	ghiEnumConnections((ghiEnumConnectionsCallback)ghiFreeConnection);

	// Cleanup the connection states.
	/////////////////////////////////
	for(i = 0 ; i < ghiConnectionsLen ; i++)
		gsifree(ghiConnections[i]);
	gsifree(ghiConnections);
	ghiConnections = 0;
	ghiConnectionsLen = 0;
	ghiNumConnections = 0;
}
