// FUNCTION: BF2 0x832a80
// BF2_FLAGS: -fcrossjumping
typedef void* GPConnection;
typedef int GPIBool;
#define GPITrue 1
#define GPIFalse 0

struct GPIOperation
{
	char pad0[0x2c];
	int id;
	char pad1[0x8];
	GPIOperation * pnext;
};

struct GPIConnection
{
	char pad[0x4a8];
	GPIOperation * operationList;
};

extern "C" GPIBool
gpiFindOperationByID(
  const GPConnection * connection,
  GPIOperation ** operation,
  int id
)
{
	GPIOperation * op;
	GPIConnection * iconnection = (GPIConnection*)*connection;

	// Go through the list of operations.
	/////////////////////////////////////
	for(op = iconnection->operationList ; op != 0 ; op = op->pnext)
	{
		// Check the id.
		////////////////
		if(op->id == id)
		{
			// Found it.
			////////////
			if(operation != 0)
				*operation = op;
			return GPITrue;
		}
	}

	// Didn't find it.
	//////////////////
	if(operation != 0)
		*operation = 0;
	return GPIFalse;
}
