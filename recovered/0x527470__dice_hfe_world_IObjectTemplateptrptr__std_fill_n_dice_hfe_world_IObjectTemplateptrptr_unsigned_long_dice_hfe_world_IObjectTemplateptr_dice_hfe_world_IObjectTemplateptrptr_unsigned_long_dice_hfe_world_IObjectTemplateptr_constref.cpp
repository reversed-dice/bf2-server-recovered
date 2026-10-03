// FUNCTION: BF2 0x527470
namespace dice { namespace hfe { namespace world {

class IObjectTemplateptrptr {
public:
    void* m_ptr;
    
    static IObjectTemplateptrptr* std_fill_n_dice_hfe_world_IObjectTemplateptrptr_unsigned_long_dice_hfe_world_IObjectTemplateptr_dice_hfe_world_IObjectTemplateptrptr_unsigned_long_dice_hfe_world_IObjectTemplateptr_constref(
        IObjectTemplateptrptr* first, unsigned long long n, IObjectTemplateptrptr const& value);
};

IObjectTemplateptrptr* IObjectTemplateptrptr::std_fill_n_dice_hfe_world_IObjectTemplateptrptr_unsigned_long_dice_hfe_world_IObjectTemplateptr_dice_hfe_world_IObjectTemplateptrptr_unsigned_long_dice_hfe_world_IObjectTemplateptr_constref(
    IObjectTemplateptrptr* first, unsigned long long n, IObjectTemplateptrptr const& value)
{
    IObjectTemplateptrptr v = value;
    if (n != 0) {
        unsigned long long i = 0;
        do {
            i++;
            *first = v;
            ++first;
        } while (i != n);
    }
    return first;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_IObjectTemplateptrptr::std_fill_n_dice_hfe_world_IObjectTemplateptrptr_unsigned_long_dice_hfe_world_IObjectTemplateptr_dice_hfe_world_IObjectTemplateptrptr_unsigned_long_dice_hfe_world_IObjectTemplateptr_constref (0x527470)