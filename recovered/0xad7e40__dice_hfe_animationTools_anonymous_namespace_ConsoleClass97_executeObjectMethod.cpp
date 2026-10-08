// FUNCTION: BF2 0xad7e40
namespace dice { namespace anim { class RagDollTemplate { public: void writeConstraints(); }; extern RagDollTemplate* ragDollTemplate; } }

namespace dice { namespace hfe { namespace animationTools {

unsigned int pad_0(void* self)
{
    char* p = (char*)self;
    if (*(int*)(p + 0x30) == 0) {
        *(unsigned char*)(p + 0x108) = 0;
        dice::anim::ragDollTemplate->writeConstraints();
    }
    return 0;
}

unsigned int executeObjectMethod_0xad7e40(void* self)
{
    char* p = (char*)self;
    if (*(int*)(p + 0x30) == 0) {
        *(unsigned char*)(p + 0x108) = 0;
        dice::anim::ragDollTemplate->writeConstraints();
    }
    return 0;
}

} } }
