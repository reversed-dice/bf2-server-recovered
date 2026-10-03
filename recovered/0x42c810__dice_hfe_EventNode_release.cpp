// FUNCTION: BF2 0x42c810
namespace dice { namespace hfe {

class EventNode {
public:
    void* vtable;
    void release();
};

void EventNode::release() {
    if (this != 0) {
        void (*fn)(void*) = (void(*)(void*))(*(void**)((char*)vtable + 8));
        fn(this);
    }
}

}
}

// REVERSED_FUNCTION: dice_hfe_EventNode_release (0x42c810)
