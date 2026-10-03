// FUNCTION: BF2 0x415ec0
namespace dice { namespace hfe {

class GameEvent {
public:
    void* vtable;               // offset 0x00
    unsigned char _pad[0x48];   // offset 0x08
    GameEvent();
};

class PostRemoteEvent : public GameEvent {
public:
    unsigned int m_field;       // offset 0x50
};

template<typename T>
class GameEventMakerMaker {
public:
    T* createEvent();
};

template<typename T>
T* GameEventMakerMaker<T>::createEvent() {
    T* obj = new T();
    obj->vtable = (void*)0xb2d6b0;
    obj->m_field = 0;
    return obj;
}

template class GameEventMakerMaker<PostRemoteEvent>;

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_PostRemoteEvent_createEvent (0x415ec0)