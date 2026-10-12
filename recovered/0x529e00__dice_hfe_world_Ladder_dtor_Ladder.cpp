// FUNCTION: BF2 0x529e00
#include <map>

namespace dice { namespace hfe { namespace world {

class Ladder;

class SimpleObject {
public:
    virtual ~SimpleObject();
};

class Ladder {
public:
    static std::map<int, Ladder*> m_ladders;
    static int globalLadderId;
};

} } }

extern "C" void fn_529e00(void* self)
{
    int id = *(int*)((char*)self + 0x238);
    *(void**)self = (void*)0xb458f0;
    *(void**)((char*)self + 0x100) = (void*)0xb45c00;
    dice::hfe::world::Ladder::m_ladders.erase(dice::hfe::world::Ladder::m_ladders.find(id));
    dice::hfe::world::Ladder::globalLadderId = dice::hfe::world::Ladder::m_ladders.empty() ? 1 : dice::hfe::world::Ladder::globalLadderId;
    ((dice::hfe::world::SimpleObject*)self)->dice::hfe::world::SimpleObject::~SimpleObject();
}
