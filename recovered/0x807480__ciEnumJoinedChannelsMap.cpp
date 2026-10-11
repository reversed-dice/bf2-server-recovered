// FUNCTION: BF2 0x807480
extern "C" void __assert_fail(const char* expr, const char* file, unsigned int line, const char* fn) __attribute__((noreturn));

typedef void (*ciEnumCallback)(void* param, int index, void* elem, void* userData);

struct ciChannelEnumData {
    void* param;
    ciEnumCallback callback;
    void* userData;
    int index;
};

extern "C" void ciEnumJoinedChannelsMap(void* elem, ciChannelEnumData* data)
{
    if (elem == 0)
        __assert_fail("elem != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 1002, "ciEnumJoinedChannelsMap");
    if (data == 0)
        __assert_fail("clientData != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 1003, "ciEnumJoinedChannelsMap");
    if (data->callback == 0)
        __assert_fail("data->callback != ((void *)0)", "External/GameSpy/chat/chatChannel.c", 1012, "ciEnumJoinedChannelsMap");
    data->callback(data->param, data->index++, elem, data->userData);
}
