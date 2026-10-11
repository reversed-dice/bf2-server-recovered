// FUNCTION: BF2 0x838170
extern "C" void __assert_fail(const char *assertion, const char *file, unsigned int line, const char *function) __attribute__((__noreturn__));

typedef void* GPConnection;
struct GPITransfer;
struct DArray;

typedef int (* ArrayCompareFn)(const void *elem1, const void *elem2);

extern "C" int ArraySearch(DArray *array, const void *elem, ArrayCompareFn fn, int start, int order);
extern "C" void ArrayDeleteAt(DArray *array, int index);
extern "C" int gpiTransferCompare(const void *elem1, const void *elem2);

struct GPIConnection
{
	char pad[0x508];
	DArray * transfers;
};

#define NOT_FOUND -1

extern "C" void gpiFreeTransfer
(
  GPConnection * connection,
  GPITransfer * transfer
)
{
	GPIConnection * iconnection = (GPIConnection*)*connection;
	int pos;

	pos = ArraySearch(iconnection->transfers, transfer, gpiTransferCompare, 0, 0);
	if (!(pos != NOT_FOUND)) {
		__assert_fail("pos != -1", "External/GameSpy/gp/gpiTransfer.c", 215, __PRETTY_FUNCTION__);
	}
	if(pos == NOT_FOUND)
		return;

	ArrayDeleteAt(iconnection->transfers, pos);
}
