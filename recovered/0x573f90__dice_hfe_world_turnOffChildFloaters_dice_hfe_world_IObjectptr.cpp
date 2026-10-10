// FUNCTION: BF2 0x573f90

namespace dice { namespace hfe { namespace world {

class IObject;

extern unsigned int CID_SimpleObjectTemplate;

void turnOffChildFloaters(IObject* object)
{
    typedef void* (*QueryFn)(void*, unsigned int);
    typedef void* (*ChildFn)(void*);

    for (; object != 0; object = *(IObject**)((char*)object + 0x58))
    {
        IObject* tpl = *(IObject**)((char*)object + 0x28);
        QueryFn q = ((QueryFn*)(*(void***)tpl))[20];
        IObject* sub = (IObject*)q(tpl, CID_SimpleObjectTemplate);
        if (sub != 0)
            *(int*)((char*)sub + 0xc4) = 0;

        ChildFn c = ((ChildFn*)(*(void***)object))[60];
        turnOffChildFloaters((IObject*)c(object));
    }
}

} } }
