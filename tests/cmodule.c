#include "../module.h"

extern void doinit_upywraptest(mp_obj_dict_t *);
UPYWRAP_DEFINE_INIT_MODULE(upywraptest, doinit_upywraptest);
MP_REGISTER_MODULE(MP_QSTR_upywraptest, upywraptest_module);
MP_REGISTER_ROOT_POINTER(const mp_map_elem_t* upywraptest_module_globals_table);

// Needs to be done once: Add global type map for micropython-wrap to the micropython state as root pointer
MP_REGISTER_ROOT_POINTER(mp_map_t* micropython_wrap_types_map_table);
