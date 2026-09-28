// AUTO-GENERATED from gba_recompile cartridge output. DO NOT EDIT.
// Module: menu_entries.cpp; functions: 2.
#include "runtime_arm.h"
#include "cartridge_functions.h"

/* 0x080408F8  mode=thumb  end=0x08040944  branches=4 */
void gf_menu_080408f8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080408FAu: goto L_080408FA;
        case 0x080408FCu: goto L_080408FC;
        case 0x080408FEu: goto L_080408FE;
        case 0x08040900u: goto L_08040900;
        case 0x08040902u: goto L_08040902;
        case 0x08040904u: goto L_08040904;
        case 0x08040906u: goto L_08040906;
        case 0x08040908u: goto L_08040908;
        case 0x0804090Au: goto L_0804090A;
        case 0x0804090Cu: goto L_0804090C;
        case 0x0804090Eu: goto L_0804090E;
        case 0x08040910u: goto L_08040910;
        case 0x08040912u: goto L_08040912;
        case 0x08040914u: goto L_08040914;
        case 0x08040916u: goto L_08040916;
        case 0x08040918u: goto L_08040918;
        case 0x0804091Au: goto L_0804091A;
        case 0x0804091Cu: goto L_0804091C;
        case 0x0804091Eu: goto L_0804091E;
        case 0x08040920u: goto L_08040920;
        case 0x08040922u: goto L_08040922;
        case 0x08040924u: goto L_08040924;
        case 0x08040926u: goto L_08040926;
        case 0x08040928u: goto L_08040928;
        case 0x0804092Au: goto L_0804092A;
        case 0x0804092Cu: goto L_0804092C;
        case 0x0804092Eu: goto L_0804092E;
        case 0x08040930u: goto L_08040930;
        case 0x08040932u: goto L_08040932;
        case 0x08040934u: goto L_08040934;
        case 0x08040936u: goto L_08040936;
        case 0x08040938u: goto L_08040938;
        case 0x0804093Au: goto L_0804093A;
        case 0x0804093Cu: goto L_0804093C;
        case 0x0804093Eu: goto L_0804093E;
        case 0x08040940u: goto L_08040940;
        case 0x08040942u: goto L_08040942;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080408F8u);
    /* 080408F8  080408f8 T stm r13!,{r4,r5,r6,r7,r14} */
    {
    g_cpu.R[15] = 0x080408F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080408F8 = 1u;
    _cyc_080408F8 = 1u;
    uint32_t _b_080408F8 = g_cpu.R[13];
    uint32_t _a_080408F8 = _b_080408F8 - 20u;
    uint32_t _fb_080408F8 = _b_080408F8 - 20u;
    _cyc_080408F8 += runtime_mem_cycles(_a_080408F8 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080408F8u, _a_080408F8 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_080408F8 & ~3u, g_cpu.R[4]);
    _a_080408F8 += 4u;
    _cyc_080408F8 += runtime_mem_cycles(_a_080408F8 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080408F8u, _a_080408F8 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_080408F8 & ~3u, g_cpu.R[5]);
    _a_080408F8 += 4u;
    _cyc_080408F8 += runtime_mem_cycles(_a_080408F8 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080408F8u, _a_080408F8 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_080408F8 & ~3u, g_cpu.R[6]);
    _a_080408F8 += 4u;
    _cyc_080408F8 += runtime_mem_cycles(_a_080408F8 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080408F8u, _a_080408F8 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_080408F8 & ~3u, g_cpu.R[7]);
    _a_080408F8 += 4u;
    _cyc_080408F8 += runtime_mem_cycles(_a_080408F8 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080408F8u, _a_080408F8 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_080408F8 & ~3u, g_cpu.R[14]);
    _a_080408F8 += 4u;
    g_cpu.R[13] = _fb_080408F8;
    g_cpu.R[15] = 0x080408FAu;
    runtime_tick(_cyc_080408F8);
    }
L_080408FA:
    /* 080408FA  080408fa T mov r7,r10 */
    {
    g_cpu.R[15] = 0x080408FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080408FA = 1u;
    _cyc_080408FA = 1u;
    uint32_t _rm_080408FA = g_cpu.R[10];
    uint32_t _op2_080408FA;
    uint32_t _co_080408FA;
    _op2_080408FA = _rm_080408FA;
    _co_080408FA = cpsr_c();
    uint32_t _r_080408FA;
    _r_080408FA = _op2_080408FA;
    g_cpu.R[7] = _r_080408FA;
    g_cpu.R[15] = 0x080408FCu;
    runtime_tick(_cyc_080408FA);
    }
L_080408FC:
    /* 080408FC  080408fc T mov r6,r9 */
    {
    g_cpu.R[15] = 0x080408FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080408FC = 1u;
    _cyc_080408FC = 1u;
    uint32_t _rm_080408FC = g_cpu.R[9];
    uint32_t _op2_080408FC;
    uint32_t _co_080408FC;
    _op2_080408FC = _rm_080408FC;
    _co_080408FC = cpsr_c();
    uint32_t _r_080408FC;
    _r_080408FC = _op2_080408FC;
    g_cpu.R[6] = _r_080408FC;
    g_cpu.R[15] = 0x080408FEu;
    runtime_tick(_cyc_080408FC);
    }
L_080408FE:
    /* 080408FE  080408fe T mov r5,r8 */
    {
    g_cpu.R[15] = 0x080408FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080408FE = 1u;
    _cyc_080408FE = 1u;
    uint32_t _rm_080408FE = g_cpu.R[8];
    uint32_t _op2_080408FE;
    uint32_t _co_080408FE;
    _op2_080408FE = _rm_080408FE;
    _co_080408FE = cpsr_c();
    uint32_t _r_080408FE;
    _r_080408FE = _op2_080408FE;
    g_cpu.R[5] = _r_080408FE;
    g_cpu.R[15] = 0x08040900u;
    runtime_tick(_cyc_080408FE);
    }
L_08040900:
    /* 08040900  08040900 T stm r13!,{r5,r6,r7} */
    {
    g_cpu.R[15] = 0x08040900u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040900 = 1u;
    _cyc_08040900 = 1u;
    uint32_t _b_08040900 = g_cpu.R[13];
    uint32_t _a_08040900 = _b_08040900 - 12u;
    uint32_t _fb_08040900 = _b_08040900 - 12u;
    _cyc_08040900 += runtime_mem_cycles(_a_08040900 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08040900u, _a_08040900 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08040900 & ~3u, g_cpu.R[5]);
    _a_08040900 += 4u;
    _cyc_08040900 += runtime_mem_cycles(_a_08040900 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08040900u, _a_08040900 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_08040900 & ~3u, g_cpu.R[6]);
    _a_08040900 += 4u;
    _cyc_08040900 += runtime_mem_cycles(_a_08040900 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08040900u, _a_08040900 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08040900 & ~3u, g_cpu.R[7]);
    _a_08040900 += 4u;
    g_cpu.R[13] = _fb_08040900;
    g_cpu.R[15] = 0x08040902u;
    runtime_tick(_cyc_08040900);
    }
L_08040902:
    /* 08040902  08040902 T sub r13,r13,#0x90 */
    {
    g_cpu.R[15] = 0x08040902u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040902 = 1u;
    _cyc_08040902 = 1u;
    uint32_t _rn_08040902 = g_cpu.R[13];
    uint32_t _r_08040902;
    _r_08040902 = _rn_08040902 - 0x00000090u;
    g_cpu.R[13] = _r_08040902;
    g_cpu.R[15] = 0x08040904u;
    runtime_tick(_cyc_08040902);
    }
L_08040904:
    /* 08040904  08040904 T movs r0,r0,lsl #24 */
    {
    g_cpu.R[15] = 0x08040904u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040904 = 1u;
    _cyc_08040904 = 1u;
    uint32_t _rm_08040904 = g_cpu.R[0];
    uint32_t _op2_08040904;
    uint32_t _co_08040904;
    _op2_08040904 = _rm_08040904 << 24;
    _co_08040904 = (_rm_08040904 >> 8) & 1u;
    uint32_t _r_08040904;
    _r_08040904 = _op2_08040904;
    arm_set_nzc_logic(_r_08040904, _co_08040904);
    g_cpu.R[0] = _r_08040904;
    g_cpu.R[15] = 0x08040906u;
    runtime_tick(_cyc_08040904);
    }
L_08040906:
    /* 08040906  08040906 T movs r0,r0,lsr #24 */
    {
    g_cpu.R[15] = 0x08040906u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040906 = 1u;
    _cyc_08040906 = 1u;
    uint32_t _rm_08040906 = g_cpu.R[0];
    uint32_t _op2_08040906;
    uint32_t _co_08040906;
    _op2_08040906 = _rm_08040906 >> 24;
    _co_08040906 = (_rm_08040906 >> 23) & 1u;
    uint32_t _r_08040906;
    _r_08040906 = _op2_08040906;
    arm_set_nzc_logic(_r_08040906, _co_08040906);
    g_cpu.R[0] = _r_08040906;
    g_cpu.R[15] = 0x08040908u;
    runtime_tick(_cyc_08040906);
    }
L_08040908:
    /* 08040908  08040908 T movs r1,r1,lsl #24 */
    {
    g_cpu.R[15] = 0x08040908u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040908 = 1u;
    _cyc_08040908 = 1u;
    uint32_t _rm_08040908 = g_cpu.R[1];
    uint32_t _op2_08040908;
    uint32_t _co_08040908;
    _op2_08040908 = _rm_08040908 << 24;
    _co_08040908 = (_rm_08040908 >> 8) & 1u;
    uint32_t _r_08040908;
    _r_08040908 = _op2_08040908;
    arm_set_nzc_logic(_r_08040908, _co_08040908);
    g_cpu.R[1] = _r_08040908;
    g_cpu.R[15] = 0x0804090Au;
    runtime_tick(_cyc_08040908);
    }
L_0804090A:
    /* 0804090A  0804090a T movs r2,r2,lsl #24 */
    {
    g_cpu.R[15] = 0x0804090Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804090A = 1u;
    _cyc_0804090A = 1u;
    uint32_t _rm_0804090A = g_cpu.R[2];
    uint32_t _op2_0804090A;
    uint32_t _co_0804090A;
    _op2_0804090A = _rm_0804090A << 24;
    _co_0804090A = (_rm_0804090A >> 8) & 1u;
    uint32_t _r_0804090A;
    _r_0804090A = _op2_0804090A;
    arm_set_nzc_logic(_r_0804090A, _co_0804090A);
    g_cpu.R[2] = _r_0804090A;
    g_cpu.R[15] = 0x0804090Cu;
    runtime_tick(_cyc_0804090A);
    }
L_0804090C:
    /* 0804090C  0804090c T movs r2,r2,lsr #24 */
    {
    g_cpu.R[15] = 0x0804090Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804090C = 1u;
    _cyc_0804090C = 1u;
    uint32_t _rm_0804090C = g_cpu.R[2];
    uint32_t _op2_0804090C;
    uint32_t _co_0804090C;
    _op2_0804090C = _rm_0804090C >> 24;
    _co_0804090C = (_rm_0804090C >> 23) & 1u;
    uint32_t _r_0804090C;
    _r_0804090C = _op2_0804090C;
    arm_set_nzc_logic(_r_0804090C, _co_0804090C);
    g_cpu.R[2] = _r_0804090C;
    g_cpu.R[15] = 0x0804090Eu;
    runtime_tick(_cyc_0804090C);
    }
L_0804090E:
    /* 0804090E  0804090e T str r2,[r13,#0x48] */
    {
    g_cpu.R[15] = 0x0804090Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804090E = 1u;
    _cyc_0804090E = 1u;
    uint32_t _base_0804090E = g_cpu.R[13];
    uint32_t _off_0804090E;
    _off_0804090E = 0x00000048u;
    uint32_t _ea_0804090E = _base_0804090E + _off_0804090E;
    uint32_t _post_0804090E = _base_0804090E + _off_0804090E;
    _cyc_0804090E += runtime_mem_cycles(_ea_0804090E, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804090Eu, _ea_0804090E & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_0804090E & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x08040910u;
    runtime_tick(_cyc_0804090E);
    }
L_08040910:
    /* 08040910  08040910 T movs r3,r3,lsl #24 */
    {
    g_cpu.R[15] = 0x08040910u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040910 = 1u;
    _cyc_08040910 = 1u;
    uint32_t _rm_08040910 = g_cpu.R[3];
    uint32_t _op2_08040910;
    uint32_t _co_08040910;
    _op2_08040910 = _rm_08040910 << 24;
    _co_08040910 = (_rm_08040910 >> 8) & 1u;
    uint32_t _r_08040910;
    _r_08040910 = _op2_08040910;
    arm_set_nzc_logic(_r_08040910, _co_08040910);
    g_cpu.R[3] = _r_08040910;
    g_cpu.R[15] = 0x08040912u;
    runtime_tick(_cyc_08040910);
    }
L_08040912:
    /* 08040912  08040912 T movs r3,r3,lsr #24 */
    {
    g_cpu.R[15] = 0x08040912u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040912 = 1u;
    _cyc_08040912 = 1u;
    uint32_t _rm_08040912 = g_cpu.R[3];
    uint32_t _op2_08040912;
    uint32_t _co_08040912;
    _op2_08040912 = _rm_08040912 >> 24;
    _co_08040912 = (_rm_08040912 >> 23) & 1u;
    uint32_t _r_08040912;
    _r_08040912 = _op2_08040912;
    arm_set_nzc_logic(_r_08040912, _co_08040912);
    g_cpu.R[3] = _r_08040912;
    g_cpu.R[15] = 0x08040914u;
    runtime_tick(_cyc_08040912);
    }
L_08040914:
    /* 08040914  08040914 T movs r2,r0,lsl #1 */
    {
    g_cpu.R[15] = 0x08040914u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040914 = 1u;
    _cyc_08040914 = 1u;
    uint32_t _rm_08040914 = g_cpu.R[0];
    uint32_t _op2_08040914;
    uint32_t _co_08040914;
    _op2_08040914 = _rm_08040914 << 1;
    _co_08040914 = (_rm_08040914 >> 31) & 1u;
    uint32_t _r_08040914;
    _r_08040914 = _op2_08040914;
    arm_set_nzc_logic(_r_08040914, _co_08040914);
    g_cpu.R[2] = _r_08040914;
    g_cpu.R[15] = 0x08040916u;
    runtime_tick(_cyc_08040914);
    }
L_08040916:
    /* 08040916  08040916 T adds r2,r2,r0 */
    {
    g_cpu.R[15] = 0x08040916u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040916 = 1u;
    _cyc_08040916 = 1u;
    uint32_t _rm_08040916 = g_cpu.R[0];
    uint32_t _op2_08040916;
    uint32_t _co_08040916;
    _op2_08040916 = _rm_08040916;
    _co_08040916 = cpsr_c();
    uint32_t _rn_08040916 = g_cpu.R[2];
    uint32_t _r_08040916;
    _r_08040916 = _rn_08040916 + _op2_08040916;
    arm_set_nzcv_add(_rn_08040916, _op2_08040916, _r_08040916);
    g_cpu.R[2] = _r_08040916;
    g_cpu.R[15] = 0x08040918u;
    runtime_tick(_cyc_08040916);
    }
L_08040918:
    /* 08040918  08040918 T movs r2,r2,lsl #3 */
    {
    g_cpu.R[15] = 0x08040918u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040918 = 1u;
    _cyc_08040918 = 1u;
    uint32_t _rm_08040918 = g_cpu.R[2];
    uint32_t _op2_08040918;
    uint32_t _co_08040918;
    _op2_08040918 = _rm_08040918 << 3;
    _co_08040918 = (_rm_08040918 >> 29) & 1u;
    uint32_t _r_08040918;
    _r_08040918 = _op2_08040918;
    arm_set_nzc_logic(_r_08040918, _co_08040918);
    g_cpu.R[2] = _r_08040918;
    g_cpu.R[15] = 0x0804091Au;
    runtime_tick(_cyc_08040918);
    }
L_0804091A:
    /* 0804091A  0804091a T ldr r0,[r15,#0x44] */
    {
    g_cpu.R[15] = 0x0804091Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804091A = 1u;
    _cyc_0804091A = 2u;
    uint32_t _base_0804091A = 0x0804091Eu & ~3u;
    uint32_t _off_0804091A;
    _off_0804091A = 0x00000044u;
    uint32_t _ea_0804091A = _base_0804091A + _off_0804091A;
    uint32_t _post_0804091A = _base_0804091A + _off_0804091A;
    _cyc_0804091A += runtime_mem_cycles(_ea_0804091A, 4u, 0u);
    uint32_t _v_0804091A;
    { uint32_t _w = bus_read_u32(_ea_0804091A & ~3u); uint32_t _rot = (_ea_0804091A & 3u) * 8u; _v_0804091A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0804091A;
    g_cpu.R[15] = 0x0804091Cu;
    runtime_tick(_cyc_0804091A);
    }
L_0804091C:
    /* 0804091C  0804091c T adds r7,r2,r0 */
    {
    g_cpu.R[15] = 0x0804091Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804091C = 1u;
    _cyc_0804091C = 1u;
    uint32_t _rm_0804091C = g_cpu.R[0];
    uint32_t _op2_0804091C;
    uint32_t _co_0804091C;
    _op2_0804091C = _rm_0804091C;
    _co_0804091C = cpsr_c();
    uint32_t _rn_0804091C = g_cpu.R[2];
    uint32_t _r_0804091C;
    _r_0804091C = _rn_0804091C + _op2_0804091C;
    arm_set_nzcv_add(_rn_0804091C, _op2_0804091C, _r_0804091C);
    g_cpu.R[7] = _r_0804091C;
    g_cpu.R[15] = 0x0804091Eu;
    runtime_tick(_cyc_0804091C);
    }
L_0804091E:
    /* 0804091E  0804091e T ldr r0,[r7,#0x8] */
    {
    g_cpu.R[15] = 0x0804091Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804091E = 1u;
    _cyc_0804091E = 2u;
    uint32_t _base_0804091E = g_cpu.R[7];
    uint32_t _off_0804091E;
    _off_0804091E = 0x00000008u;
    uint32_t _ea_0804091E = _base_0804091E + _off_0804091E;
    uint32_t _post_0804091E = _base_0804091E + _off_0804091E;
    _cyc_0804091E += runtime_mem_cycles(_ea_0804091E, 4u, 0u);
    uint32_t _v_0804091E;
    { uint32_t _w = bus_read_u32(_ea_0804091E & ~3u); uint32_t _rot = (_ea_0804091E & 3u) * 8u; _v_0804091E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0804091E;
    g_cpu.R[15] = 0x08040920u;
    runtime_tick(_cyc_0804091E);
    }
L_08040920:
    /* 08040920  08040920 T mov r9,r0 */
    {
    g_cpu.R[15] = 0x08040920u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040920 = 1u;
    _cyc_08040920 = 1u;
    uint32_t _rm_08040920 = g_cpu.R[0];
    uint32_t _op2_08040920;
    uint32_t _co_08040920;
    _op2_08040920 = _rm_08040920;
    _co_08040920 = cpsr_c();
    uint32_t _r_08040920;
    _r_08040920 = _op2_08040920;
    g_cpu.R[9] = _r_08040920;
    g_cpu.R[15] = 0x08040922u;
    runtime_tick(_cyc_08040920);
    }
L_08040922:
    /* 08040922  08040922 T ldrh r0,[r7,#0xc] */
    {
    g_cpu.R[15] = 0x08040922u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040922 = 1u;
    _cyc_08040922 = 2u;
    uint32_t _base_08040922 = g_cpu.R[7];
    uint32_t _off_08040922;
    _off_08040922 = 0x0000000Cu;
    uint32_t _ea_08040922 = _base_08040922 + _off_08040922;
    uint32_t _post_08040922 = _base_08040922 + _off_08040922;
    _cyc_08040922 += runtime_mem_cycles(_ea_08040922, 2u, 0u);
    uint32_t _v_08040922;
    { uint32_t _h = bus_read_u16(_ea_08040922 & ~1u); if (_ea_08040922 & 1u) _v_08040922 = ((_h >> 8) | (_h << 24)); else _v_08040922 = _h; }
    g_cpu.R[0] = _v_08040922;
    g_cpu.R[15] = 0x08040924u;
    runtime_tick(_cyc_08040922);
    }
L_08040924:
    /* 08040924  08040924 T movs r0,r0,lsl #21 */
    {
    g_cpu.R[15] = 0x08040924u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040924 = 1u;
    _cyc_08040924 = 1u;
    uint32_t _rm_08040924 = g_cpu.R[0];
    uint32_t _op2_08040924;
    uint32_t _co_08040924;
    _op2_08040924 = _rm_08040924 << 21;
    _co_08040924 = (_rm_08040924 >> 11) & 1u;
    uint32_t _r_08040924;
    _r_08040924 = _op2_08040924;
    arm_set_nzc_logic(_r_08040924, _co_08040924);
    g_cpu.R[0] = _r_08040924;
    g_cpu.R[15] = 0x08040926u;
    runtime_tick(_cyc_08040924);
    }
L_08040926:
    /* 08040926  08040926 T ldr r2,[r15,#0x3c] */
    {
    g_cpu.R[15] = 0x08040926u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040926 = 1u;
    _cyc_08040926 = 2u;
    uint32_t _base_08040926 = 0x0804092Au & ~3u;
    uint32_t _off_08040926;
    _off_08040926 = 0x0000003Cu;
    uint32_t _ea_08040926 = _base_08040926 + _off_08040926;
    uint32_t _post_08040926 = _base_08040926 + _off_08040926;
    _cyc_08040926 += runtime_mem_cycles(_ea_08040926, 4u, 0u);
    uint32_t _v_08040926;
    { uint32_t _w = bus_read_u32(_ea_08040926 & ~3u); uint32_t _rot = (_ea_08040926 & 3u) * 8u; _v_08040926 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08040926;
    g_cpu.R[15] = 0x08040928u;
    runtime_tick(_cyc_08040926);
    }
L_08040928:
    /* 08040928  08040928 T adds r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08040928u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040928 = 1u;
    _cyc_08040928 = 1u;
    uint32_t _rm_08040928 = g_cpu.R[2];
    uint32_t _op2_08040928;
    uint32_t _co_08040928;
    _op2_08040928 = _rm_08040928;
    _co_08040928 = cpsr_c();
    uint32_t _rn_08040928 = g_cpu.R[0];
    uint32_t _r_08040928;
    _r_08040928 = _rn_08040928 + _op2_08040928;
    arm_set_nzcv_add(_rn_08040928, _op2_08040928, _r_08040928);
    g_cpu.R[0] = _r_08040928;
    g_cpu.R[15] = 0x0804092Au;
    runtime_tick(_cyc_08040928);
    }
L_0804092A:
    /* 0804092A  0804092a T movs r0,r0,lsr #16 */
    {
    g_cpu.R[15] = 0x0804092Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804092A = 1u;
    _cyc_0804092A = 1u;
    uint32_t _rm_0804092A = g_cpu.R[0];
    uint32_t _op2_0804092A;
    uint32_t _co_0804092A;
    _op2_0804092A = _rm_0804092A >> 16;
    _co_0804092A = (_rm_0804092A >> 15) & 1u;
    uint32_t _r_0804092A;
    _r_0804092A = _op2_0804092A;
    arm_set_nzc_logic(_r_0804092A, _co_0804092A);
    g_cpu.R[0] = _r_0804092A;
    g_cpu.R[15] = 0x0804092Cu;
    runtime_tick(_cyc_0804092A);
    }
L_0804092C:
    /* 0804092C  0804092c T mov r8,r0 */
    {
    g_cpu.R[15] = 0x0804092Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804092C = 1u;
    _cyc_0804092C = 1u;
    uint32_t _rm_0804092C = g_cpu.R[0];
    uint32_t _op2_0804092C;
    uint32_t _co_0804092C;
    _op2_0804092C = _rm_0804092C;
    _co_0804092C = cpsr_c();
    uint32_t _r_0804092C;
    _r_0804092C = _op2_0804092C;
    g_cpu.R[8] = _r_0804092C;
    g_cpu.R[15] = 0x0804092Eu;
    runtime_tick(_cyc_0804092C);
    }
L_0804092E:
    /* 0804092E  0804092e T movs r0,#0xc0 */
    {
    g_cpu.R[15] = 0x0804092Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804092E = 1u;
    _cyc_0804092E = 1u;
    uint32_t _r_0804092E;
    _r_0804092E = 0x000000C0u;
    arm_set_nzc_logic(_r_0804092E, cpsr_c());
    g_cpu.R[0] = _r_0804092E;
    g_cpu.R[15] = 0x08040930u;
    runtime_tick(_cyc_0804092E);
    }
L_08040930:
    /* 08040930  08040930 T movs r0,r0,lsl #18 */
    {
    g_cpu.R[15] = 0x08040930u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040930 = 1u;
    _cyc_08040930 = 1u;
    uint32_t _rm_08040930 = g_cpu.R[0];
    uint32_t _op2_08040930;
    uint32_t _co_08040930;
    _op2_08040930 = _rm_08040930 << 18;
    _co_08040930 = (_rm_08040930 >> 14) & 1u;
    uint32_t _r_08040930;
    _r_08040930 = _op2_08040930;
    arm_set_nzc_logic(_r_08040930, _co_08040930);
    g_cpu.R[0] = _r_08040930;
    g_cpu.R[15] = 0x08040932u;
    runtime_tick(_cyc_08040930);
    }
L_08040932:
    /* 08040932  08040932 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08040932u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040932 = 1u;
    _cyc_08040932 = 1u;
    uint32_t _rm_08040932 = g_cpu.R[1];
    uint32_t _op2_08040932;
    uint32_t _co_08040932;
    _op2_08040932 = _rm_08040932;
    _co_08040932 = cpsr_c();
    uint32_t _rn_08040932 = g_cpu.R[0];
    uint32_t _r_08040932;
    _r_08040932 = _rn_08040932 & _op2_08040932;
    arm_set_nzc_logic(_r_08040932, _co_08040932);
    g_cpu.R[0] = _r_08040932;
    g_cpu.R[15] = 0x08040934u;
    runtime_tick(_cyc_08040932);
    }
L_08040934:
    /* 08040934  08040934 T movs r4,r0,lsr #24 */
    {
    g_cpu.R[15] = 0x08040934u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040934 = 1u;
    _cyc_08040934 = 1u;
    uint32_t _rm_08040934 = g_cpu.R[0];
    uint32_t _op2_08040934;
    uint32_t _co_08040934;
    _op2_08040934 = _rm_08040934 >> 24;
    _co_08040934 = (_rm_08040934 >> 23) & 1u;
    uint32_t _r_08040934;
    _r_08040934 = _op2_08040934;
    arm_set_nzc_logic(_r_08040934, _co_08040934);
    g_cpu.R[4] = _r_08040934;
    g_cpu.R[15] = 0x08040936u;
    runtime_tick(_cyc_08040934);
    }
L_08040936:
    /* 08040936  08040936 T movs r1,r1,lsr #25 */
    {
    g_cpu.R[15] = 0x08040936u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040936 = 1u;
    _cyc_08040936 = 1u;
    uint32_t _rm_08040936 = g_cpu.R[1];
    uint32_t _op2_08040936;
    uint32_t _co_08040936;
    _op2_08040936 = _rm_08040936 >> 25;
    _co_08040936 = (_rm_08040936 >> 24) & 1u;
    uint32_t _r_08040936;
    _r_08040936 = _op2_08040936;
    arm_set_nzc_logic(_r_08040936, _co_08040936);
    g_cpu.R[1] = _r_08040936;
    g_cpu.R[15] = 0x08040938u;
    runtime_tick(_cyc_08040936);
    }
L_08040938:
    /* 08040938  08040938 T movs r6,r1,lsl #24 */
    {
    g_cpu.R[15] = 0x08040938u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040938 = 1u;
    _cyc_08040938 = 1u;
    uint32_t _rm_08040938 = g_cpu.R[1];
    uint32_t _op2_08040938;
    uint32_t _co_08040938;
    _op2_08040938 = _rm_08040938 << 24;
    _co_08040938 = (_rm_08040938 >> 8) & 1u;
    uint32_t _r_08040938;
    _r_08040938 = _op2_08040938;
    arm_set_nzc_logic(_r_08040938, _co_08040938);
    g_cpu.R[6] = _r_08040938;
    g_cpu.R[15] = 0x0804093Au;
    runtime_tick(_cyc_08040938);
    }
L_0804093A:
    /* 0804093A  0804093a T movs r5,r6,lsr #24 */
    {
    g_cpu.R[15] = 0x0804093Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804093A = 1u;
    _cyc_0804093A = 1u;
    uint32_t _rm_0804093A = g_cpu.R[6];
    uint32_t _op2_0804093A;
    uint32_t _co_0804093A;
    _op2_0804093A = _rm_0804093A >> 24;
    _co_0804093A = (_rm_0804093A >> 23) & 1u;
    uint32_t _r_0804093A;
    _r_0804093A = _op2_0804093A;
    arm_set_nzc_logic(_r_0804093A, _co_0804093A);
    g_cpu.R[5] = _r_0804093A;
    g_cpu.R[15] = 0x0804093Cu;
    runtime_tick(_cyc_0804093A);
    }
L_0804093C:
    /* 0804093C  0804093c T adds r0,r3,#0x0 */
    {
    g_cpu.R[15] = 0x0804093Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804093C = 1u;
    _cyc_0804093C = 1u;
    uint32_t _rn_0804093C = g_cpu.R[3];
    uint32_t _r_0804093C;
    _r_0804093C = _rn_0804093C + 0x00000000u;
    arm_set_nzcv_add(_rn_0804093C, 0x00000000u, _r_0804093C);
    g_cpu.R[0] = _r_0804093C;
    g_cpu.R[15] = 0x0804093Eu;
    runtime_tick(_cyc_0804093C);
    }
L_0804093E:
    /* 0804093E  0804093e T mov r1,r13 */
    {
    g_cpu.R[15] = 0x0804093Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804093E = 1u;
    _cyc_0804093E = 1u;
    uint32_t _rm_0804093E = g_cpu.R[13];
    uint32_t _op2_0804093E;
    uint32_t _co_0804093E;
    _op2_0804093E = _rm_0804093E;
    _co_0804093E = cpsr_c();
    uint32_t _r_0804093E;
    _r_0804093E = _op2_0804093E;
    g_cpu.R[1] = _r_0804093E;
    g_cpu.R[15] = 0x08040940u;
    runtime_tick(_cyc_0804093E);
    }
L_08040940:
    /* 08040940  08040940 T bl.hi 0x0803f944 */
    {
    g_cpu.R[15] = 0x08040940u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040940 = 1u;
    _cyc_08040940 = 1u;
    g_cpu.R[14] = 0x0803F944u;
    g_cpu.R[15] = 0x08040942u;
    runtime_tick(_cyc_08040940);
    }
L_08040942:
    /* 08040942  08040942 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08040942u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040942 = 1u;
    _cyc_08040942 = 3u;
    uint32_t _blt_08040942 = (g_cpu.R[14] + 0x00000B94u) & ~1u;
    g_cpu.R[14] = 0x08040945u;
    g_cpu.R[15] = _blt_08040942;
    runtime_call_push_return(0x08040944u);
    runtime_tick(_cyc_08040942);
    _cyc_08040942 = 0u;
    runtime_dispatch(_blt_08040942);
    if (g_cpu.R[15] != 0x08040944u) { runtime_call_cancel_return(0x08040944u); return; }
    g_cpu.R[15] = 0x08040944u;
    runtime_tick(_cyc_08040942);
    }
    /* fall-through to 0x08040944 */
    g_cpu.R[15] = 0x08040944u;
    runtime_dispatch(0x08040944u);
    return;
}

/* 0x08040D0A  mode=thumb  end=0x08040D20  branches=0  indirect */
void gf_menu_08040d0a(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08040D0Cu: goto L_08040D0C;
        case 0x08040D0Eu: goto L_08040D0E;
        case 0x08040D10u: goto L_08040D10;
        case 0x08040D12u: goto L_08040D12;
        case 0x08040D14u: goto L_08040D14;
        case 0x08040D16u: goto L_08040D16;
        case 0x08040D18u: goto L_08040D18;
        case 0x08040D1Au: goto L_08040D1A;
        case 0x08040D1Cu: goto L_08040D1C;
        case 0x08040D1Eu: goto L_08040D1E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08040D0Au);
    /* 08040D0A  08040d0a T ldr r0,[r15,#0x18] */
    {
    g_cpu.R[15] = 0x08040D0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D0A = 1u;
    _cyc_08040D0A = 2u;
    uint32_t _base_08040D0A = 0x08040D0Eu & ~3u;
    uint32_t _off_08040D0A;
    _off_08040D0A = 0x00000018u;
    uint32_t _ea_08040D0A = _base_08040D0A + _off_08040D0A;
    uint32_t _post_08040D0A = _base_08040D0A + _off_08040D0A;
    _cyc_08040D0A += runtime_mem_cycles(_ea_08040D0A, 4u, 0u);
    uint32_t _v_08040D0A;
    { uint32_t _w = bus_read_u32(_ea_08040D0A & ~3u); uint32_t _rot = (_ea_08040D0A & 3u) * 8u; _v_08040D0A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08040D0A;
    g_cpu.R[15] = 0x08040D0Cu;
    runtime_tick(_cyc_08040D0A);
    }
L_08040D0C:
    /* 08040D0C  08040d0c T movs r4,r4,lsl #1 */
    {
    g_cpu.R[15] = 0x08040D0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D0C = 1u;
    _cyc_08040D0C = 1u;
    uint32_t _rm_08040D0C = g_cpu.R[4];
    uint32_t _op2_08040D0C;
    uint32_t _co_08040D0C;
    _op2_08040D0C = _rm_08040D0C << 1;
    _co_08040D0C = (_rm_08040D0C >> 31) & 1u;
    uint32_t _r_08040D0C;
    _r_08040D0C = _op2_08040D0C;
    arm_set_nzc_logic(_r_08040D0C, _co_08040D0C);
    g_cpu.R[4] = _r_08040D0C;
    g_cpu.R[15] = 0x08040D0Eu;
    runtime_tick(_cyc_08040D0C);
    }
L_08040D0E:
    /* 08040D0E  08040d0e T adds r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x08040D0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D0E = 1u;
    _cyc_08040D0E = 1u;
    uint32_t _rn_08040D0E = g_cpu.R[0];
    uint32_t _r_08040D0E;
    _r_08040D0E = _rn_08040D0E + 0x00000001u;
    arm_set_nzcv_add(_rn_08040D0E, 0x00000001u, _r_08040D0E);
    g_cpu.R[0] = _r_08040D0E;
    g_cpu.R[15] = 0x08040D10u;
    runtime_tick(_cyc_08040D0E);
    }
L_08040D10:
    /* 08040D10  08040d10 T adds r4,r4,r0 */
    {
    g_cpu.R[15] = 0x08040D10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D10 = 1u;
    _cyc_08040D10 = 1u;
    uint32_t _rm_08040D10 = g_cpu.R[0];
    uint32_t _op2_08040D10;
    uint32_t _co_08040D10;
    _op2_08040D10 = _rm_08040D10;
    _co_08040D10 = cpsr_c();
    uint32_t _rn_08040D10 = g_cpu.R[4];
    uint32_t _r_08040D10;
    _r_08040D10 = _rn_08040D10 + _op2_08040D10;
    arm_set_nzcv_add(_rn_08040D10, _op2_08040D10, _r_08040D10);
    g_cpu.R[4] = _r_08040D10;
    g_cpu.R[15] = 0x08040D12u;
    runtime_tick(_cyc_08040D10);
    }
L_08040D12:
    /* 08040D12  08040d12 T ldrb r0,[r4] */
    {
    g_cpu.R[15] = 0x08040D12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D12 = 1u;
    _cyc_08040D12 = 2u;
    uint32_t _base_08040D12 = g_cpu.R[4];
    uint32_t _off_08040D12;
    _off_08040D12 = 0x00000000u;
    uint32_t _ea_08040D12 = _base_08040D12 + _off_08040D12;
    uint32_t _post_08040D12 = _base_08040D12 + _off_08040D12;
    _cyc_08040D12 += runtime_mem_cycles(_ea_08040D12, 1u, 0u);
    uint32_t _v_08040D12;
    _v_08040D12 = bus_read_u8(_ea_08040D12);
    g_cpu.R[0] = _v_08040D12;
    g_cpu.R[15] = 0x08040D14u;
    runtime_tick(_cyc_08040D12);
    }
L_08040D14:
    /* 08040D14  08040d14 T ldrh r1,[r5,#0x12] */
    {
    g_cpu.R[15] = 0x08040D14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D14 = 1u;
    _cyc_08040D14 = 2u;
    uint32_t _base_08040D14 = g_cpu.R[5];
    uint32_t _off_08040D14;
    _off_08040D14 = 0x00000012u;
    uint32_t _ea_08040D14 = _base_08040D14 + _off_08040D14;
    uint32_t _post_08040D14 = _base_08040D14 + _off_08040D14;
    _cyc_08040D14 += runtime_mem_cycles(_ea_08040D14, 2u, 0u);
    uint32_t _v_08040D14;
    { uint32_t _h = bus_read_u16(_ea_08040D14 & ~1u); if (_ea_08040D14 & 1u) _v_08040D14 = ((_h >> 8) | (_h << 24)); else _v_08040D14 = _h; }
    g_cpu.R[1] = _v_08040D14;
    g_cpu.R[15] = 0x08040D16u;
    runtime_tick(_cyc_08040D14);
    }
L_08040D16:
    /* 08040D16  08040d16 T adds r1,r1,r0 */
    {
    g_cpu.R[15] = 0x08040D16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D16 = 1u;
    _cyc_08040D16 = 1u;
    uint32_t _rm_08040D16 = g_cpu.R[0];
    uint32_t _op2_08040D16;
    uint32_t _co_08040D16;
    _op2_08040D16 = _rm_08040D16;
    _co_08040D16 = cpsr_c();
    uint32_t _rn_08040D16 = g_cpu.R[1];
    uint32_t _r_08040D16;
    _r_08040D16 = _rn_08040D16 + _op2_08040D16;
    arm_set_nzcv_add(_rn_08040D16, _op2_08040D16, _r_08040D16);
    g_cpu.R[1] = _r_08040D16;
    g_cpu.R[15] = 0x08040D18u;
    runtime_tick(_cyc_08040D16);
    }
L_08040D18:
    /* 08040D18  08040d18 T strh r1,[r5,#0x12] */
    {
    g_cpu.R[15] = 0x08040D18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D18 = 1u;
    _cyc_08040D18 = 1u;
    uint32_t _base_08040D18 = g_cpu.R[5];
    uint32_t _off_08040D18;
    _off_08040D18 = 0x00000012u;
    uint32_t _ea_08040D18 = _base_08040D18 + _off_08040D18;
    uint32_t _post_08040D18 = _base_08040D18 + _off_08040D18;
    _cyc_08040D18 += runtime_mem_cycles(_ea_08040D18, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08040D18u, _ea_08040D18 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08040D18 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x08040D1Au;
    runtime_tick(_cyc_08040D18);
    }
L_08040D1A:
    /* 08040D1A  08040d1a T ldm r13!,{r4,r5} */
    {
    g_cpu.R[15] = 0x08040D1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D1A = 1u;
    _cyc_08040D1A = 2u;
    uint32_t _b_08040D1A = g_cpu.R[13];
    uint32_t _a_08040D1A = _b_08040D1A;
    uint32_t _fb_08040D1A = _b_08040D1A + 8u;
    _cyc_08040D1A += runtime_mem_cycles(_a_08040D1A & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08040D1A & ~3u);
    _a_08040D1A += 4u;
    _cyc_08040D1A += runtime_mem_cycles(_a_08040D1A & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08040D1A & ~3u);
    _a_08040D1A += 4u;
    g_cpu.R[13] = _fb_08040D1A;
    g_cpu.R[15] = 0x08040D1Cu;
    runtime_tick(_cyc_08040D1A);
    }
L_08040D1C:
    /* 08040D1C  08040d1c T ldm r13!,{r1} */
    {
    g_cpu.R[15] = 0x08040D1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D1C = 1u;
    _cyc_08040D1C = 2u;
    uint32_t _b_08040D1C = g_cpu.R[13];
    uint32_t _a_08040D1C = _b_08040D1C;
    uint32_t _fb_08040D1C = _b_08040D1C + 4u;
    _cyc_08040D1C += runtime_mem_cycles(_a_08040D1C & ~3u, 4u, 0u);
    g_cpu.R[1] = bus_read_u32(_a_08040D1C & ~3u);
    _a_08040D1C += 4u;
    g_cpu.R[13] = _fb_08040D1C;
    g_cpu.R[15] = 0x08040D1Eu;
    runtime_tick(_cyc_08040D1C);
    }
L_08040D1E:
    /* 08040D1E  08040d1e T bx r1 */
    {
    g_cpu.R[15] = 0x08040D1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08040D1E = 1u;
    _cyc_08040D1E = 3u;
    uint32_t _bxt_08040D1E = g_cpu.R[1];
    g_cpu.R[15] = _bxt_08040D1E & ~1u;
    if (_bxt_08040D1E & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08040D1E);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08040D1E);
    return;
    g_cpu.R[15] = 0x08040D20u;
    runtime_tick(_cyc_08040D1E);
    }
    /* fall-through to 0x08040D20 */
    g_cpu.R[15] = 0x08040D20u;
    runtime_dispatch(0x08040D20u);
    return;
}
