// FUNCTION: BF2 0x78ed90
#include <string>
#include <ostream>

namespace dice { namespace hfe {

class Debug {
public:
    Debug(int type, const std::string& file, int line, const std::string& func);
    ~Debug();
    std::ostream& stream();
private:
    unsigned char _pad[0x180];
};
inline std::ostream& Debug::stream() { return *(std::ostream*)((char*)this + 0x20); }

extern void* gameLogic;

namespace ai {

class AIObjectReal {
public:
    void* getObjectSpawner() const;
};

void* AIObjectReal::getObjectSpawner() const {
    void* q = 0;
    void* p = *(void**)((char*)this + 0x20);
    while (p != 0) {
        q = ((void* (*)(void*, int))(*(void***)p)[3])(p, *(int*)0x00c7ce6c);
        if (q != 0)
            break;
        p = *(void**)((char*)p + 0x50);
    }
    if (q == 0)
        return 0;
    Debug(6, std::string("AI/AIInterface/BFKnowledge/AIObjectReal.cpp"), 0x1b1, std::string("")).stream() << "Does not work!";
    void* o = ((void* (*)(void*, int))(*(void***)gameLogic)[0x3d0 / 8])(gameLogic, ((int (*)(void*))(*(void***)q)[0x178 / 8])(q));
    void* q2 = 0;
    while (o != 0) {
        q2 = ((void* (*)(void*, int))(*(void***)o)[3])(o, *(int*)0x00c7ce6c);
        if (q2 != 0)
            break;
        o = *(void**)((char*)o + 0x50);
    }
    if (q2 == 0)
        return 0;
    void* io = ((void* (*)(void*, int))(*(void***)q2)[3])(q2, *(int*)0x00c7d110);
    return *(void**)((char*)io + 0x68);
}

} } }
