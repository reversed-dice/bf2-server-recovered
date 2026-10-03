// Donor: the loops a destructor and a manager actually contain.
//
// Three of the unknown blocks left after the first donor pass are loop bodies,
// not statements: zeroing a slot and advancing while the count sits in a
// member (36 functions), indexing a pointer array and testing the element
// (22 functions), and the same with the element deleted. The recovered corpus
// is accessors, so it has the members but never the loops over them.
namespace donors {

struct Entry {
    int id;
    float weight;
};

struct Table {
    Entry** slots;      // +0x0
    unsigned int count; // +0x8
};

void clear_slots(Table* t)
{
    for (unsigned int i = 0; i < t->count; ++i)
        t->slots[i] = 0;
}

void delete_slots(Table* t)
{
    for (unsigned int i = 0; i < t->count; ++i) {
        Entry* e = t->slots[i];
        if (e != 0)
            delete e;
    }
}

void delete_and_clear_slots(Table* t)
{
    for (unsigned int i = 0; i < t->count; ++i) {
        Entry* e = t->slots[i];
        if (e != 0) {
            delete e;
            t->slots[i] = 0;
        }
    }
}

int count_live_slots(const Table* t)
{
    int live = 0;
    for (unsigned int i = 0; i < t->count; ++i) {
        if (t->slots[i] != 0)
            ++live;
    }
    return live;
}

Entry* find_slot(const Table* t, int id)
{
    for (unsigned int i = 0; i < t->count; ++i) {
        Entry* e = t->slots[i];
        if (e != 0 && e->id == id)
            return e;
    }
    return 0;
}

void zero_array(void** array, unsigned int count)
{
    for (unsigned int i = 0; i < count; ++i)
        array[i] = 0;
}

void sum_weights(const Table* t, float* out)
{
    float total = 0.0f;
    for (unsigned int i = 0; i < t->count; ++i) {
        Entry* e = t->slots[i];
        if (e != 0)
            total += e->weight;
    }
    *out = total;
}

}  // namespace donors
