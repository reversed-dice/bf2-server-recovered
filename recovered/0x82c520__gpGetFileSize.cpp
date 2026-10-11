// FUNCTION: BF2 0x82c520
// BF2_FLAGS: -fcrossjumping
// GP file getters family
typedef int GPResult;
struct GPConnection;

extern "C" void *gpiFindTransferByLocalID(GPConnection *connection, int localID);
extern "C" int ArrayLength(void *array);
extern "C" void *ArrayNth(void *array, int index);
extern "C" void gpiSetErrorString(GPConnection *connection, char const *str);

struct GPTransfer {
    void *field0;
    void *fileArray;
};

struct GPFileEntry {
    char *path;
    char *name;
    int progress;
    int size;
    char pad1[0x14];
    int modTime;
};

extern "C" GPResult gpGetFileSize(GPConnection *connection, int localID, int index, int *size)
{
    GPTransfer *transfer = (GPTransfer *)gpiFindTransferByLocalID(connection, localID);
    if (transfer == 0)
    {
        gpiSetErrorString(connection, "Invalid transfer.");
        return 2;
    }
    if (index < 0)
    {
        gpiSetErrorString(connection, "Invalid index.");
        return 2;
    }
    if (index >= ArrayLength(transfer->fileArray))
    {
        gpiSetErrorString(connection, "Invalid index.");
        return 2;
    }
    GPFileEntry *entry = (GPFileEntry *)ArrayNth(transfer->fileArray, index);
    *size = entry->size;
    return 0;
}

