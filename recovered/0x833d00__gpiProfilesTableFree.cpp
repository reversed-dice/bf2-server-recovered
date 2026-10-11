// FUNCTION: BF2 0x833d00
extern "C" void gsifree(void* ptr);
extern "C" void gpiFreeInfoCache(void* table);

struct ProfilesSub { char pad0[8]; void* m_data; void* m_extra; };
struct ProfilesTable { char pad0[8]; ProfilesSub* m_profiles; char pad1[8]; void* m_f18; char pad2[8]; void* m_f28; };

void gpiProfilesTableFree(ProfilesTable* table)
{
    if (table->m_profiles != 0) {
        gsifree(table->m_profiles->m_data);
        table->m_profiles->m_data = 0;
        gsifree(table->m_profiles->m_extra);
        table->m_profiles->m_extra = 0;
        gsifree(table->m_profiles);
        table->m_profiles = 0;
    }
    gpiFreeInfoCache(table);
    gsifree(table->m_f18);
    table->m_f18 = 0;
    gsifree(table->m_f28);
    table->m_f28 = 0;
}
