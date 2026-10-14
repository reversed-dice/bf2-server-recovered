// FUNCTION: BF2 0x476ec0
extern "C" void fn_407608(void* self, long a, long b, long c);

namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[0x338];

    void ClearDropVehicles();
};

void GameLogic::ClearDropVehicles() {
    char* self = (char*)this;
    void* v = *(void**)(self + 0x338);
    fn_407608(self + 0x338, 0, *(long*)((char*)v - 0x18), 0);
    v = *(void**)(self + 0x340);
    fn_407608(self + 0x340, 0, *(long*)((char*)v - 0x18), 0);
}

} }
