// FUNCTION: BF2 0x45f970
namespace dice { namespace hfe {
extern "C" void* fn_4652c0(void* tree, unsigned char const* k);
extern "C" void* fn_407ef8(void* node);
class GameServer {
public:
    void debugShowActiveGhosts(int id);
};
void GameServer::debugShowActiveGhosts(int id) {
    if (id != -1) {
        unsigned char k = (unsigned char)id;
        char* it = (char*)fn_4652c0((char*)this + 0xe8, &k);
        if (it != (char*)this + 0xf0) {
            void* c = *(void**)(it + 0x28);
            if (c != 0) {
                (*(void (**)(void*))(*(char**)c + 0x50))(c);
            }
        }
    } else {
        char* it = *(char**)((char*)this + 0x100);
        while (it != (char*)this + 0xf0) {
            it = (char*)fn_407ef8(it);
        }
    }
}
} }
