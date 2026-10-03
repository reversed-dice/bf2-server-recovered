// FUNCTION: BF2 0x503ec0
// TemplatePredicator::predicate 0x503ec0 — SETZ
namespace dice { namespace hfe { namespace python {

bool predicate(void* self, void* obj) {
    return *(void**)((char*)obj + 0x28) == *(void**)((char*)self + 8);
}

}}}
