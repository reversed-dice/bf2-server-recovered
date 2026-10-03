// Donor: the null-guard, the delete, and the store-through-member shapes.
//
// The third-ranked unknown block is a null test on a stack slot followed by a
// constant store; the recovered corpus has the store but almost never the
// guard, because an accessor has nothing to guard.
namespace donors {

struct Node {
    Node* next;
    int value;
};

void delete_if_set(void* self)
{
    Node** slot = reinterpret_cast<Node**>((char*)self + 0x40);
    if (*slot != 0)
        delete *slot;
    *slot = 0;
}

void delete_and_null_two(void* self)
{
    Node** first = reinterpret_cast<Node**>((char*)self + 0x18);
    Node** second = reinterpret_cast<Node**>((char*)self + 0x20);
    delete *first;
    delete *second;
    *first = 0;
    *second = 0;
}

void delete_array_if_set(void* self)
{
    char** buf = reinterpret_cast<char**>((char*)self + 0x30);
    if (*buf != 0)
        delete[] *buf;
    *buf = 0;
}

int guarded_member_read(void* self)
{
    Node* node = *reinterpret_cast<Node**>((char*)self + 0x50);
    if (node == 0)
        return 0;
    return node->value;
}

void guarded_store(void* self, int value)
{
    int* flag = reinterpret_cast<int*>((char*)self + 0x24);
    if (*flag == value)
        return;
    *flag = value;
}

void store_zero_after_check(void* self, void* other)
{
    if (other == 0)
        return;
    *reinterpret_cast<unsigned int*>((char*)self + 0x1c) = 0;
    *reinterpret_cast<void**>((char*)self + 0x28) = other;
}

void walk_list_and_free(Node* head)
{
    while (head != 0) {
        Node* next = head->next;
        delete head;
        head = next;
    }
}

}  // namespace donors
