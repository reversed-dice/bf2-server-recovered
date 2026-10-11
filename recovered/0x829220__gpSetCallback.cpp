// FUNCTION: BF2 0x829220
typedef void* GPConnection;
typedef int GPEnum;
typedef void (*GPCallback)(GPConnection * connection, void * arg, void * param);
typedef int GPResult;
#define GP_NO_ERROR 0
#define GP_PARAMETER_ERROR 2

#define GPI_NUM_CALLBACKS 9

typedef struct
{
	GPCallback callback;
	void * param;
} GPICallback;

struct GPIConnection
{
	char pad[0x1a8];
	GPICallback callbacks[GPI_NUM_CALLBACKS];
};

extern "C" void gpiSetErrorString(GPConnection * connection, const char * string);

extern "C" GPResult gpSetCallback(
  GPConnection * connection,
  GPEnum func,
  GPCallback callback,
  void * param
)
{
	GPIConnection * iconnection;
	int index;

	if((connection == 0) || (*connection == 0))
		return GP_PARAMETER_ERROR;

	iconnection = (GPIConnection *)*connection;

	index = func;
	if((index < 0) || (index >= GPI_NUM_CALLBACKS))
	{
		gpiSetErrorString(connection, "Invalid func.");
		return GP_PARAMETER_ERROR;
	}

	iconnection->callbacks[index].callback = callback;
	iconnection->callbacks[index].param = param;

	return GP_NO_ERROR;
}
