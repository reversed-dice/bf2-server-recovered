// FUNCTION: BF2 0x799780
namespace dice { namespace hfe { namespace ai {
typedef void* (*FnGet)(void*);
typedef bool  (*FnPred)(void*);
typedef void* (*FnIter)(void*, void*);

bool isOccupiedObject(void* obj, void* other) {
    void* p = ((FnGet)(*(void***)obj)[63])(obj);
    void* o = ((FnGet)(*(void***)p)[38])(p);
    if (o == 0) return false;
    if (p != other && ((FnPred)(*(void***)o)[18])(o)) return true;
    int tmp;
    for (void* it = ((FnIter)(*(void***)p)[71])(p, &tmp); it != 0;
         it = ((FnIter)(*(void***)p)[69])(p, &tmp)) {
        void* q = ((FnGet)(*(void***)it)[38])(it);
        if (it != other && ((FnPred)(*(void***)q)[18])(q)) return true;
    }
    return false;
}
} } }
