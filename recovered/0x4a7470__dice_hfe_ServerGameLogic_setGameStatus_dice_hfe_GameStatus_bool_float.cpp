// FUNCTION: BF2 0x4a7470
// BF2_FLAGS: -fno-strict-aliasing

class PostRemoteEvent {
public:
  PostRemoteEvent(int cat, unsigned int a, bool b, void* c, unsigned int d, float e);
  char _pad[88];
};

typedef void (*SendFn)(void*, void*);
typedef void (*EvFn)(void*, int, int, void*, float);

void set_game_status_4a7470(void* self, int status, bool flag, float t)
{
    *(int*)((char*)self + 0xa8) = status;
    SendFn send = (SendFn)(*(void***)(*(void**)0x010c5420))[0x128/8];
    PostRemoteEvent* e = new PostRemoteEvent(0, 1, false, &status, 4, t);
    send(*(void**)0x010c5420, e);
    EvFn ev = (EvFn)(*(void***)(*(void**)0x010b3730))[0x28/8];
    ev(*(void**)0x010b3730, 0, 1, &status, t);
}
