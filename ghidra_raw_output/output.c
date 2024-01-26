typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef ulong size_t;

typedef struct evp_pkey_ctx_st evp_pkey_ctx_st, *Pevp_pkey_ctx_st;

typedef struct evp_pkey_ctx_st EVP_PKEY_CTX;

struct evp_pkey_ctx_st {
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType_AARCH64 {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_AARCH64_ATTRIBUTES=1879048195
} Elf_SectionHeaderType_AARCH64;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType_AARCH64 sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Dyn_AARCH64 Elf64_Dyn_AARCH64, *PElf64_Dyn_AARCH64;

typedef enum Elf64_DynTag_AARCH64 {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag_AARCH64;

struct Elf64_Dyn_AARCH64 {
    enum Elf64_DynTag_AARCH64 d_tag;
    qword d_val;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

typedef enum Elf_ProgramHeaderType_AARCH64 {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482,
    PT_AARCH64_ARCHEXT=1879048192
} Elf_ProgramHeaderType_AARCH64;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType_AARCH64 p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct GnuBuildId GnuBuildId, *PGnuBuildId;

struct GnuBuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Vendor name
    byte hash[20];
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};




int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



void FUN_001023f0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



void _ZSt12__niter_baseIPlET_S1_(void)

{
  _ZSt12__niter_baseIPlET_S1_();
  return;
}



void _ZNSt6vectorIlSaIlEEC2ERKS1_(void)

{
  _ZNSt6vectorIlSaIlEEC2ERKS1_();
  return;
}



void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_(void)

{
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_();
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE17_M_create_storageEm(void)

{
  _ZNSt12_Vector_baseIlSaIlEE17_M_create_storageEm();
  return;
}



void _ZNSaIlED1Ev(void)

{
  _ZNSaIlED1Ev();
  return;
}



void _ZNKSt6vectorIlSaIlEE4sizeEv(void)

{
  _ZNKSt6vectorIlSaIlEE4sizeEv();
  return;
}



void _ZNSt12_Vector_baseIlSaIlEED1Ev(void)

{
  _ZNSt12_Vector_baseIlSaIlEED1Ev();
  return;
}



void _ZN9__gnu_cxx13new_allocatorIlE10deallocateEPlm(void)

{
  _ZN9__gnu_cxx13new_allocatorIlE10deallocateEPlm();
  return;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void _ZNSt12_Vector_baseIlSaIlEEC1EmRKS0_(void)

{
  _ZNSt12_Vector_baseIlSaIlEEC1EmRKS0_();
  return;
}



void _ZSt17__throw_bad_allocv(void)

{
  _ZSt17__throw_bad_allocv();
  return;
}



void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_(void)

{
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_();
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE19_M_get_Tp_allocatorEv(void)

{
  _ZNSt12_Vector_baseIlSaIlEE19_M_get_Tp_allocatorEv();
  return;
}



void _ZNKSt6vectorIlSaIlEE5beginEv(void)

{
  _ZNKSt6vectorIlSaIlEE5beginEv();
  return;
}



void _ZN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEC2ERKS2_(void)

{
  _ZN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEC2ERKS2_();
  return;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



void _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlEET0_T_SC_SB_
               (void)

{
  _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlEET0_T_SC_SB_
            ();
  return;
}



void _ZSt12__niter_wrapIPlET_RKS1_S1_(void)

{
  _ZSt12__niter_wrapIPlET_RKS1_S1_();
  return;
}



void _ZNK9__gnu_cxx13new_allocatorIlE11_M_max_sizeEv(void)

{
  _ZNK9__gnu_cxx13new_allocatorIlE11_M_max_sizeEv();
  return;
}



void _ZNKSt6vectorIlSaIlEE3endEv(void)

{
  _ZNKSt6vectorIlSaIlEE3endEv();
  return;
}



void _ZSt28__throw_bad_array_new_lengthv(void)

{
  _ZSt28__throw_bad_array_new_lengthv();
  return;
}



void _ZNSt12_Vector_baseIlSaIlEEC1Ev(void)

{
  _ZNSt12_Vector_baseIlSaIlEEC1Ev();
  return;
}



void _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET0_T_SA_S9_
               (void)

{
  _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET0_T_SA_S9_();
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE11_M_allocateEm(void)

{
  _ZNSt12_Vector_baseIlSaIlEE11_M_allocateEm();
  return;
}



void _ZNSaIlEC2ERKS_(void)

{
  _ZNSaIlEC2ERKS_();
  return;
}



void _ZNSt16allocator_traitsISaIlEE8allocateERS0_m(void)

{
  _ZNSt16allocator_traitsISaIlEE8allocateERS0_m();
  return;
}



void _ZSt14__copy_move_a2ILb0EPKlPlET1_T0_S4_S3_(void)

{
  _ZSt14__copy_move_a2ILb0EPKlPlET1_T0_S4_S3_();
  return;
}



void _ZNSt6vectorIlSaIlEEC2Ev(void)

{
  _ZNSt6vectorIlSaIlEEC2Ev();
  return;
}



void _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET1_T0_SA_S9_
               (void)

{
  _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET1_T0_SA_S9_();
  return;
}



void _ZN9__gnu_cxx13new_allocatorIlEC2Ev(void)

{
  _ZN9__gnu_cxx13new_allocatorIlEC2Ev();
  return;
}



void _Znwm(void)

{
  _Znwm();
  return;
}



void _ZdlPvm(void)

{
  _ZdlPvm();
  return;
}



void _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIlEEPT_PKS3_S6_S4_(void)

{
  _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIlEEPT_PKS3_S6_S4_();
  return;
}



void _ZNSaIlEC2ERKS_(void)

{
  _ZNSaIlEC2ERKS_();
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE17_Vector_impl_dataC1Ev(void)

{
  _ZNSt12_Vector_baseIlSaIlEE17_Vector_impl_dataC1Ev();
  return;
}



void _ZNSaIlEC1Ev(void)

{
  _ZNSaIlEC1Ev();
  return;
}



void __cxa_atexit(void)

{
  __cxa_atexit();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void _ZN9__gnu_cxx13new_allocatorIlE8allocateEmPKv(void)

{
  _ZN9__gnu_cxx13new_allocatorIlE8allocateEmPKv();
  return;
}



void _ZN9__gnu_cxx13new_allocatorIlED1Ev(void)

{
  _ZN9__gnu_cxx13new_allocatorIlED1Ev();
  return;
}



void _ZN9__gnu_cxx14__alloc_traitsISaIlElE17_S_select_on_copyERKS1_(void)

{
  _ZN9__gnu_cxx14__alloc_traitsISaIlElE17_S_select_on_copyERKS1_();
  return;
}



void _ZSt14__copy_move_a1ILb0EPKlPlET1_T0_S4_S3_(void)

{
  _ZSt14__copy_move_a1ILb0EPKlPlET1_T0_S4_S3_();
  return;
}



void _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev(void)

{
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev();
  return;
}



void _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPllET0_T_SA_S9_RSaIT1_E
               (void)

{
  _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPllET0_T_SA_S9_RSaIT1_E
            ();
  return;
}



void _ZN9__gnu_cxx13new_allocatorIlEC2ERKS1_(void)

{
  _ZN9__gnu_cxx13new_allocatorIlEC2ERKS1_();
  return;
}



void _ZNK9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEE4baseEv(void)

{
  _ZNK9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEE4baseEv();
  return;
}



void _ZNSaIlED1Ev(void)

{
  _ZNSaIlED1Ev();
  return;
}



void _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET0_T_SA_S9_(void)

{
  _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET0_T_SA_S9_();
  return;
}



void _ZNSt8ios_base4InitC1Ev(void)

{
  _ZNSt8ios_base4InitC1Ev();
  return;
}



void _ZNSt16allocator_traitsISaIlEE10deallocateERS0_Plm(void)

{
  _ZNSt16allocator_traitsISaIlEE10deallocateERS0_Plm();
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE12_Vector_implC1Ev(void)

{
  _ZNSt12_Vector_baseIlSaIlEE12_Vector_implC1Ev();
  return;
}



void _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEET_S8_(void)

{
  _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEET_S8_();
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE12_Vector_implC1ERKS0_(void)

{
  _ZNSt12_Vector_baseIlSaIlEE12_Vector_implC1ERKS0_();
  return;
}



void __gxx_personality_v0(void)

{
  __gxx_personality_v0();
  return;
}



void _ZNSt16allocator_traitsISaIlEE37select_on_container_copy_constructionERKS0_(void)

{
  _ZNSt16allocator_traitsISaIlEE37select_on_container_copy_constructionERKS0_();
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE13_M_deallocateEPlm(void)

{
  _ZNSt12_Vector_baseIlSaIlEE13_M_deallocateEPlm();
  return;
}



void _Unwind_Resume(void)

{
                    // WARNING: Subroutine does not return
  _Unwind_Resume();
}



void _ZNSt12_Vector_baseIlSaIlEE12_Vector_implD1Ev(void)

{
  _ZNSt12_Vector_baseIlSaIlEE12_Vector_implD1Ev();
  return;
}



void _ZNKSt12_Vector_baseIlSaIlEE19_M_get_Tp_allocatorEv(void)

{
  _ZNKSt12_Vector_baseIlSaIlEE19_M_get_Tp_allocatorEv();
  return;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



void _ZSt12__niter_baseIPKlSt6vectorIlSaIlEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE(void)

{
  _ZSt12__niter_baseIPKlSt6vectorIlSaIlEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE();
  return;
}



// WARNING: Removing unreachable block (ram,0x001027f0)

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



// WARNING: Removing unreachable block (ram,0x00102818)
// WARNING: Removing unreachable block (ram,0x00102824)

void deregister_tm_clones(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00102854)
// WARNING: Removing unreachable block (ram,0x00102860)

void register_tm_clones(void)

{
  return;
}



void FUN_0010286c(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00102854)
// WARNING: Removing unreachable block (ram,0x00102860)

void frame_dummy(void)

{
  return;
}



void _ZN11SimpleClassC1Ev(long param_1)

{
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev(param_1);
  _ZNSt6vectorIlSaIlEEC2Ev(param_1 + 0x20);
  return;
}



void _ZN11SimpleClassC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
               (long param_1,undefined8 param_2)

{
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_(param_1,param_2);
  _ZNSt6vectorIlSaIlEEC2Ev(param_1 + 0x20);
  return;
}



void _ZN11SimpleClass13add_to_vectorERKl(void)

{
  return;
}



undefined8 _ZN11SimpleClass8get_nameB5cxx11Ev(undefined8 param_1,undefined8 param_2)

{
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_(param_1,param_2);
  return param_1;
}



void _ZN11SimpleClass8set_nameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
               (undefined8 param_1,undefined8 param_2)

{
  _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_(param_1,param_2);
  return;
}



undefined8 _ZN11SimpleClass10get_vectorEv(undefined8 param_1,long param_2)

{
  _ZNSt6vectorIlSaIlEEC2ERKS1_(param_1,param_2 + 0x20);
  return param_1;
}



void _Z41__static_initialization_and_destruction_0ii(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    _ZNSt8ios_base4InitC1Ev(&_ZStL8__ioinit);
    __cxa_atexit(_ZNSt8ios_base4InitD1Ev,&_ZStL8__ioinit,&__dso_handle);
  }
  return;
}



void _GLOBAL__sub_I_simple_class_cpp(void)

{
  _Z41__static_initialization_and_destruction_0ii(1,0xffff);
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE12_Vector_implD1Ev(undefined8 param_1)

{
  _ZNSaIlED1Ev(param_1);
  return;
}



void _ZNSt12_Vector_baseIlSaIlEEC1Ev(undefined8 param_1)

{
  _ZNSt12_Vector_baseIlSaIlEE12_Vector_implC1Ev(param_1);
  return;
}



void _ZNSt6vectorIlSaIlEEC2Ev(undefined8 param_1)

{
  _ZNSt12_Vector_baseIlSaIlEEC1Ev(param_1);
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE12_Vector_implC1Ev(undefined8 param_1)

{
  _ZNSaIlEC1Ev(param_1);
  _ZNSt12_Vector_baseIlSaIlEE17_Vector_impl_dataC1Ev(param_1);
  return;
}



void _ZNSaIlED1Ev(undefined8 param_1)

{
  _ZN9__gnu_cxx13new_allocatorIlED1Ev(param_1);
  return;
}



void _ZNSt12_Vector_baseIlSaIlEED1Ev(long *param_1)

{
  _ZNSt12_Vector_baseIlSaIlEE13_M_deallocateEPlm(param_1,*param_1,param_1[2] - *param_1 >> 3);
  _ZNSt12_Vector_baseIlSaIlEE12_Vector_implD1Ev(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _ZNSt6vectorIlSaIlEEC2ERKS1_(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = _ZNKSt6vectorIlSaIlEE4sizeEv(param_2,0);
  uVar2 = _ZNKSt12_Vector_baseIlSaIlEE19_M_get_Tp_allocatorEv(param_2);
  _ZN9__gnu_cxx14__alloc_traitsISaIlElE17_S_select_on_copyERKS1_(auStack_10,uVar2);
                    // try { // try from 00102bac to 00102baf has its CatchHandler @ 00102c24
  _ZNSt12_Vector_baseIlSaIlEEC1EmRKS0_(param_1,uVar1,auStack_10);
  _ZNSaIlED1Ev(auStack_10);
  uVar1 = _ZNKSt6vectorIlSaIlEE5beginEv(param_2);
  uVar2 = _ZNKSt6vectorIlSaIlEE3endEv(param_2);
  uVar4 = *param_1;
  uVar3 = _ZNSt12_Vector_baseIlSaIlEE19_M_get_Tp_allocatorEv(param_1);
                    // try { // try from 00102bf0 to 00102bf3 has its CatchHandler @ 00102c38
  uVar1 = _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPllET0_T_SA_S9_RSaIT1_E
                    (uVar1,uVar2,uVar4,uVar3);
  param_1[1] = uVar1;
  if (local_8 - ___stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



void _ZNSaIlEC1Ev(undefined8 param_1)

{
  _ZN9__gnu_cxx13new_allocatorIlEC2Ev(param_1);
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE17_Vector_impl_dataC1Ev(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



void _ZN9__gnu_cxx13new_allocatorIlED1Ev(void)

{
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE13_M_deallocateEPlm
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    _ZNSt16allocator_traitsISaIlEE10deallocateERS0_Plm(param_1,param_2,param_3);
  }
  return;
}



undefined8 _ZNSt12_Vector_baseIlSaIlEE19_M_get_Tp_allocatorEv(undefined8 param_1)

{
  return param_1;
}



long _ZNKSt6vectorIlSaIlEE4sizeEv(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
_ZN9__gnu_cxx14__alloc_traitsISaIlElE17_S_select_on_copyERKS1_
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  _ZNSt16allocator_traitsISaIlEE37select_on_container_copy_constructionERKS0_(param_1,param_2,0);
  if (lVar1 - ___stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return param_1;
}



undefined8 _ZNKSt12_Vector_baseIlSaIlEE19_M_get_Tp_allocatorEv(undefined8 param_1)

{
  return param_1;
}



void _ZNSt12_Vector_baseIlSaIlEEC1EmRKS0_(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _ZNSt12_Vector_baseIlSaIlEE12_Vector_implC1ERKS0_(param_1,param_3);
                    // try { // try from 00102ddc to 00102ddf has its CatchHandler @ 00102de4
  _ZNSt12_Vector_baseIlSaIlEE17_M_create_storageEm(param_1,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _ZNKSt6vectorIlSaIlEE5beginEv(undefined8 param_1)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _ZN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEC2ERKS2_(&local_10,param_1);
  if (local_8 - ___stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(&__stack_chk_guard,local_10,0,local_8 - ___stack_chk_guard);
  }
  return local_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _ZNKSt6vectorIlSaIlEE3endEv(long param_1)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _ZN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEC2ERKS2_(&local_10,param_1 + 8);
  if (local_8 - ___stack_chk_guard != 0) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail(&__stack_chk_guard,local_10,0,local_8 - ___stack_chk_guard);
  }
  return local_10;
}



void _ZSt22__uninitialized_copy_aIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPllET0_T_SA_S9_RSaIT1_E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET0_T_SA_S9_
            (param_1,param_2,param_3);
  return;
}



void _ZN9__gnu_cxx13new_allocatorIlEC2Ev(void)

{
  return;
}



void _ZNSt16allocator_traitsISaIlEE10deallocateERS0_Plm
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _ZN9__gnu_cxx13new_allocatorIlE10deallocateEPlm(param_1,param_2,param_3);
  return;
}



undefined8
_ZNSt16allocator_traitsISaIlEE37select_on_container_copy_constructionERKS0_
          (undefined8 param_1,undefined8 param_2)

{
  _ZNSaIlEC2ERKS_(param_1,param_2);
  return param_1;
}



void _ZNSt12_Vector_baseIlSaIlEE12_Vector_implC1ERKS0_(undefined8 param_1,undefined8 param_2)

{
  _ZNSaIlEC2ERKS_(param_1,param_2);
  _ZNSt12_Vector_baseIlSaIlEE17_Vector_impl_dataC1Ev(param_1);
  return;
}



void _ZNSt12_Vector_baseIlSaIlEE17_M_create_storageEm(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = _ZNSt12_Vector_baseIlSaIlEE11_M_allocateEm(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = *param_1 + param_2 * 8;
  return;
}



void _ZN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEC2ERKS2_
               (undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



void _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET0_T_SA_S9_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlEET0_T_SC_SB_
            (param_1,param_2,param_3);
  return;
}



void _ZN9__gnu_cxx13new_allocatorIlE10deallocateEPlm
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  _ZdlPvm(param_2,param_3 << 3);
  return;
}



void _ZNSaIlEC2ERKS_(undefined8 param_1,undefined8 param_2)

{
  _ZN9__gnu_cxx13new_allocatorIlEC2ERKS1_(param_1,param_2);
  return;
}



undefined8 _ZNSt12_Vector_baseIlSaIlEE11_M_allocateEm(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = _ZNSt16allocator_traitsISaIlEE8allocateERS0_m(param_1,param_2);
  }
  return uVar1;
}



void _ZNSt20__uninitialized_copyILb1EE13__uninit_copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlEET0_T_SC_SB_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET0_T_SA_S9_
            (param_1,param_2,param_3);
  return;
}



void _ZN9__gnu_cxx13new_allocatorIlEC2ERKS1_(void)

{
  return;
}



void _ZNSt16allocator_traitsISaIlEE8allocateERS0_m(undefined8 param_1,undefined8 param_2)

{
  _ZN9__gnu_cxx13new_allocatorIlE8allocateEmPKv(param_1,param_2,0);
  return;
}



void _ZSt4copyIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET0_T_SA_S9_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEET_S8_(param_1);
  uVar2 = _ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEET_S8_(param_2);
  _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET1_T0_SA_S9_
            (uVar1,uVar2,param_3);
  return;
}



undefined8 _ZNK9__gnu_cxx13new_allocatorIlE11_M_max_sizeEv(void)

{
  return 0xfffffffffffffff;
}



void _ZN9__gnu_cxx13new_allocatorIlE8allocateEmPKv(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = _ZNK9__gnu_cxx13new_allocatorIlE11_M_max_sizeEv(param_1);
  if (uVar1 < param_2) {
    if (0x1fffffffffffffff < param_2) {
      _ZSt28__throw_bad_array_new_lengthv();
    }
    _ZSt17__throw_bad_allocv();
  }
  _Znwm(param_2 << 3);
  return;
}



undefined8
_ZSt12__miter_baseIN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEET_S8_(undefined8 param_1)

{
  return param_1;
}



void _ZSt13__copy_move_aILb0EN9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEEEPlET1_T0_SA_S9_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_18 = param_3;
  local_10 = param_2;
  local_8 = param_1;
  uVar1 = _ZSt12__niter_baseIPKlSt6vectorIlSaIlEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE(param_1)
  ;
  uVar2 = _ZSt12__niter_baseIPKlSt6vectorIlSaIlEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
                    (local_10);
  uVar3 = _ZSt12__niter_baseIPlET_S1_(local_18);
  uVar1 = _ZSt14__copy_move_a1ILb0EPKlPlET1_T0_S4_S3_(uVar1,uVar2,uVar3);
  _ZSt12__niter_wrapIPlET_RKS1_S1_(&local_18,uVar1);
  return;
}



undefined8
_ZSt12__niter_baseIPKlSt6vectorIlSaIlEEET_N9__gnu_cxx17__normal_iteratorIS5_T0_EE
          (undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
  local_8 = param_1;
  puVar1 = (undefined8 *)_ZNK9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEE4baseEv(&local_8);
  return *puVar1;
}



undefined8 _ZSt12__niter_baseIPlET_S1_(undefined8 param_1)

{
  return param_1;
}



void _ZSt14__copy_move_a1ILb0EPKlPlET1_T0_S4_S3_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _ZSt14__copy_move_a2ILb0EPKlPlET1_T0_S4_S3_(param_1,param_2,param_3);
  return;
}



undefined8 _ZSt12__niter_wrapIPlET_RKS1_S1_(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



undefined8 _ZNK9__gnu_cxx17__normal_iteratorIPKlSt6vectorIlSaIlEEE4baseEv(undefined8 param_1)

{
  return param_1;
}



void _ZSt14__copy_move_a2ILb0EPKlPlET1_T0_S4_S3_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIlEEPT_PKS3_S6_S4_
            (param_1,param_2,param_3);
  return;
}



void * _ZNSt11__copy_moveILb0ELb1ESt26random_access_iterator_tagE8__copy_mIlEEPT_PKS3_S6_S4_
                 (void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 << 3);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}



void _fini(void)

{
  return;
}


