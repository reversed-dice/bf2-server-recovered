// FUNCTION: BF2 0x832880

typedef int GPResult;
typedef struct GPIConnection GPIConnection;
typedef struct GPIOperation GPIOperation;

#define GPI_CONNECT 0
#define GPI_START 0

struct GPIOperation
{
	int type;
	int pad0;
	void * data;
	int blocking;
	int pad1;
	void * callback;
	void * param;
	int state;
	int id;
	int result;
	int pad2;
	GPIOperation * pnext;
};

struct GPIConnection
{
	char pad0[0x288];
	int nextOperationID;
	char pad1[0x4a8 - 0x28c];
	GPIOperation * operationList;
};

void * gsimalloc(unsigned long size);
void gpiSetErrorString(GPIConnection ** connection, const char * errorString);

GPResult gpiAddOperation(GPIConnection ** connection, int type, void * data, GPIOperation ** op, int blocking, void * callback, void * param)
{
	GPIOperation * operation;
	GPIConnection * iconnection = *connection;

	operation = (GPIOperation *)gsimalloc(sizeof(GPIOperation));
	if (operation == 0)
	{
		gpiSetErrorString(connection, "Out of memory.");
		return 1;
	}

	operation->type = type;
	operation->data = data;
	operation->blocking = blocking;
	operation->state = GPI_START;
	if (type == GPI_CONNECT)
	{
		operation->id = 1;
	}
	else
	{
		operation->id = iconnection->nextOperationID++;
		if (iconnection->nextOperationID < 2)
			iconnection->nextOperationID = 2;
	}
	operation->result = 0;
	operation->param = param;
	operation->callback = callback;

	operation->pnext = iconnection->operationList;
	iconnection->operationList = operation;
	*op = operation;

	return 0;
}
