// FUNCTION: BF2 0x82a690
typedef int GPResult;
typedef int GPEnum;
typedef int GPProfile;
typedef int GPTransfer;
struct _GPConnection;
typedef struct _GPConnection * GPConnection;
struct GPIConnection
{
	char pad0[0x108];
	int simulation;
};
struct GPIPeer;
extern "C" GPIPeer * gpiGetConnectedPeer(GPConnection * connection, GPProfile profile);

int gpIsBuddyConnectionOpen(GPConnection * connection, GPProfile profile)
{
	GPIConnection * iconnection;
	GPIPeer * aPeer;

	if ((connection == 0) || (*connection == 0))
		return 0;

	iconnection = (GPIConnection *)*connection;
	if (iconnection->simulation)
		return 0;

	aPeer = gpiGetConnectedPeer(connection, profile);
	if (aPeer == 0)
		return 0;
	else
		return 1;
}
