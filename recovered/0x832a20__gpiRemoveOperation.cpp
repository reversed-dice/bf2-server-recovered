// FUNCTION: BF2 0x832a20
typedef void* GPConnection;

struct GPIOperation
{
	char pad[0x38];
	GPIOperation * pnext;
};

struct GPIConnection
{
	char pad[0x4a8];
	GPIOperation * operationList;
};

extern "C" void gpiDestroyOperation(GPConnection * connection, GPIOperation * operation);

extern "C" void
gpiRemoveOperation(
  GPConnection * connection,
  GPIOperation * operation
)
{
	GPIConnection * iconnection = (GPIConnection*)*connection;
	GPIOperation * pcurr = (GPIOperation *)iconnection->operationList;
	GPIOperation * pprev = 0;

	while(pcurr != 0)
	{
		if(pcurr == operation)
		{
			if(pprev == 0)
				iconnection->operationList = pcurr->pnext;
			else
				pprev->pnext = operation->pnext;

			gpiDestroyOperation(connection, operation);

			return;
		}

		pprev = pcurr;
		pcurr = pcurr->pnext;
	}
}
