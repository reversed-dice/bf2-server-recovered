extern "C" void* getVL(void*, void*);
extern "C" void ins_aux_ushort(void*, void*, void*);
extern "C" void dice_hfe_world_CollisionMeshTemplate_addEdgeIndex(void* self, void* a2, int x3, unsigned short idx) {
    void* v = getVL(self, a2);
    void* vec = (char*)v + 0x128;
    unsigned short t = idx;
    unsigned short* finish = *(unsigned short**)((char*)vec + 0x8);
    unsigned short* endp = *(unsigned short**)((char*)vec + 0x10);
    if (finish != endp) {
        if (finish) *finish = idx;
        *(void**)((char*)vec + 0x8) = (char*)*(volatile void**)((char*)vec + 0x8) + 2;
        return;
    }
    ins_aux_ushort(vec, finish, &t);
}
// NOTE: volatile a régressé (90%) - le reload [RDI+8] ne sort pas car GCC
// CSE sa propre écriture. Prochaine piste: deux variables dont la 2e lue
// apres l'ecriture via un helper __attribute__((noinline)).
