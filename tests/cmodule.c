#include "../module.h"

extern void doinit_upywraptest(mp_obj_dict_t *);
UPYWRAP_DEFINE_INIT_MODULE(upywraptest, doinit_upywraptest);
MP_REGISTER_MODULE(MP_QSTR_upywraptest, upywraptest_module);
MP_REGISTER_ROOT_POINTER(const mp_map_elem_t* upywraptest_module_globals_table);

//Only required when using the `UPYWRAP_STATICPYOBJ_USE_ROOTPTR` configuration option (opt-in):
//Needs to be done once: Add global type map for micropython-wrap to the micropython state as root pointer
//This enables micropython-wrap to store anonymous type information while preventing visibility of the _StaticPyObjectStore
//in user modules.
MP_REGISTER_ROOT_POINTER(mp_map_t* micropython_wrap_global_storage);
