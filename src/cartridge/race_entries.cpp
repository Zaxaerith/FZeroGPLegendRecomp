// AUTO-GENERATED from gba_recompile cartridge output. DO NOT EDIT.
// Module: race_entries.cpp; functions: 78.
#include "runtime_arm.h"
#include "cartridge_functions.h"

/* 0x08037F42  mode=thumb  end=0x08037F4C  branches=2  indirect */
void gf_race_08037f42(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037F44u: goto L_08037F44;
        case 0x08037F46u: goto L_08037F46;
        case 0x08037F48u: goto L_08037F48;
        case 0x08037F4Au: goto L_08037F4A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037F42u);
    /* 08037F42  08037f42 T ldrb r2,[r5,#0x9] */
    {
    g_cpu.R[15] = 0x08037F42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F42 = 1u;
    _cyc_08037F42 = 2u;
    uint32_t _base_08037F42 = g_cpu.R[5];
    uint32_t _off_08037F42;
    _off_08037F42 = 0x00000009u;
    uint32_t _ea_08037F42 = _base_08037F42 + _off_08037F42;
    uint32_t _post_08037F42 = _base_08037F42 + _off_08037F42;
    _cyc_08037F42 += runtime_mem_cycles(_ea_08037F42, 1u, 0u);
    uint32_t _v_08037F42;
    _v_08037F42 = bus_read_u8(_ea_08037F42);
    g_cpu.R[2] = _v_08037F42;
    g_cpu.R[15] = 0x08037F44u;
    runtime_tick(_cyc_08037F42);
    }
L_08037F44:
    /* 08037F44  08037f44 T adds r1,r3,#0x0 */
    {
    g_cpu.R[15] = 0x08037F44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F44 = 1u;
    _cyc_08037F44 = 1u;
    uint32_t _rn_08037F44 = g_cpu.R[3];
    uint32_t _r_08037F44;
    _r_08037F44 = _rn_08037F44 + 0x00000000u;
    arm_set_nzcv_add(_rn_08037F44, 0x00000000u, _r_08037F44);
    g_cpu.R[1] = _r_08037F44;
    g_cpu.R[15] = 0x08037F46u;
    runtime_tick(_cyc_08037F44);
    }
L_08037F46:
    /* 08037F46  08037f46 T adds r0,r7,#0x0 */
    {
    g_cpu.R[15] = 0x08037F46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F46 = 1u;
    _cyc_08037F46 = 1u;
    uint32_t _rn_08037F46 = g_cpu.R[7];
    uint32_t _r_08037F46;
    _r_08037F46 = _rn_08037F46 + 0x00000000u;
    arm_set_nzcv_add(_rn_08037F46, 0x00000000u, _r_08037F46);
    g_cpu.R[0] = _r_08037F46;
    g_cpu.R[15] = 0x08037F48u;
    runtime_tick(_cyc_08037F46);
    }
L_08037F48:
    /* 08037F48  08037f48 T bl.hi 0x08037f4c */
    {
    g_cpu.R[15] = 0x08037F48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F48 = 1u;
    _cyc_08037F48 = 1u;
    g_cpu.R[14] = 0x08037F4Cu;
    g_cpu.R[15] = 0x08037F4Au;
    runtime_tick(_cyc_08037F48);
    }
L_08037F4A:
    /* 08037F4A  08037f4a T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08037F4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F4A = 1u;
    _cyc_08037F4A = 3u;
    uint32_t _blt_08037F4A = (g_cpu.R[14] + 0x000000B8u) & ~1u;
    g_cpu.R[14] = 0x08037F4Du;
    g_cpu.R[15] = _blt_08037F4A;
    runtime_call_push_return(0x08037F4Cu);
    runtime_tick(_cyc_08037F4A);
    _cyc_08037F4A = 0u;
    runtime_dispatch(_blt_08037F4A);
    if (g_cpu.R[15] != 0x08037F4Cu) { runtime_call_cancel_return(0x08037F4Cu); return; }
    g_cpu.R[15] = 0x08037F4Cu;
    runtime_tick(_cyc_08037F4A);
    }
    /* fall-through to 0x08037F4C */
    g_cpu.R[15] = 0x08037F4Cu;
    runtime_dispatch(0x08037F4Cu);
    return;
}

/* 0x08038DF2  mode=thumb  end=0x08038DFA  branches=3 */
void gf_race_08038df2(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038DF4u: goto L_08038DF4;
        case 0x08038DF6u: goto L_08038DF6;
        case 0x08038DF8u: goto L_08038DF8;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038DF2u);
    /* 08038DF2  08038df2 T movs r0,r6,lsl #24 */
    {
    g_cpu.R[15] = 0x08038DF2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DF2 = 1u;
    _cyc_08038DF2 = 1u;
    uint32_t _rm_08038DF2 = g_cpu.R[6];
    uint32_t _op2_08038DF2;
    uint32_t _co_08038DF2;
    _op2_08038DF2 = _rm_08038DF2 << 24;
    _co_08038DF2 = (_rm_08038DF2 >> 8) & 1u;
    uint32_t _r_08038DF2;
    _r_08038DF2 = _op2_08038DF2;
    arm_set_nzc_logic(_r_08038DF2, _co_08038DF2);
    g_cpu.R[0] = _r_08038DF2;
    g_cpu.R[15] = 0x08038DF4u;
    runtime_tick(_cyc_08038DF2);
    }
L_08038DF4:
    /* 08038DF4  08038df4 T movs r0,r0,lsr #24 */
    {
    g_cpu.R[15] = 0x08038DF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DF4 = 1u;
    _cyc_08038DF4 = 1u;
    uint32_t _rm_08038DF4 = g_cpu.R[0];
    uint32_t _op2_08038DF4;
    uint32_t _co_08038DF4;
    _op2_08038DF4 = _rm_08038DF4 >> 24;
    _co_08038DF4 = (_rm_08038DF4 >> 23) & 1u;
    uint32_t _r_08038DF4;
    _r_08038DF4 = _op2_08038DF4;
    arm_set_nzc_logic(_r_08038DF4, _co_08038DF4);
    g_cpu.R[0] = _r_08038DF4;
    g_cpu.R[15] = 0x08038DF6u;
    runtime_tick(_cyc_08038DF4);
    }
L_08038DF6:
    /* 08038DF6  08038df6 T bl.hi 0x08037dfa */
    {
    g_cpu.R[15] = 0x08038DF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DF6 = 1u;
    _cyc_08038DF6 = 1u;
    g_cpu.R[14] = 0x08037DFAu;
    g_cpu.R[15] = 0x08038DF8u;
    runtime_tick(_cyc_08038DF6);
    }
L_08038DF8:
    /* 08038DF8  08038df8 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08038DF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DF8 = 1u;
    _cyc_08038DF8 = 3u;
    uint32_t _blt_08038DF8 = (g_cpu.R[14] + 0x00000D66u) & ~1u;
    g_cpu.R[14] = 0x08038DFBu;
    g_cpu.R[15] = _blt_08038DF8;
    runtime_call_push_return(0x08038DFAu);
    runtime_tick(_cyc_08038DF8);
    _cyc_08038DF8 = 0u;
    runtime_dispatch(_blt_08038DF8);
    if (g_cpu.R[15] != 0x08038DFAu) { runtime_call_cancel_return(0x08038DFAu); return; }
    g_cpu.R[15] = 0x08038DFAu;
    runtime_tick(_cyc_08038DF8);
    }
    /* fall-through to 0x08038DFA */
    g_cpu.R[15] = 0x08038DFAu;
    runtime_dispatch(0x08038DFAu);
    return;
}

/* 0x08043CA4  mode=thumb  end=0x08043CB0  branches=5  indirect */
void gf_race_08043ca4(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08043CA6u: goto L_08043CA6;
        case 0x08043CA8u: goto L_08043CA8;
        case 0x08043CAAu: goto L_08043CAA;
        case 0x08043CACu: goto L_08043CAC;
        case 0x08043CAEu: goto L_08043CAE;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08043CA4u);
    /* 08043CA4  08043ca4 T stm r13!,{r4,r5,r6,r14} */
    {
    g_cpu.R[15] = 0x08043CA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CA4 = 1u;
    _cyc_08043CA4 = 1u;
    uint32_t _b_08043CA4 = g_cpu.R[13];
    uint32_t _a_08043CA4 = _b_08043CA4 - 16u;
    uint32_t _fb_08043CA4 = _b_08043CA4 - 16u;
    _cyc_08043CA4 += runtime_mem_cycles(_a_08043CA4 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08043CA4u, _a_08043CA4 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_08043CA4 & ~3u, g_cpu.R[4]);
    _a_08043CA4 += 4u;
    _cyc_08043CA4 += runtime_mem_cycles(_a_08043CA4 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08043CA4u, _a_08043CA4 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08043CA4 & ~3u, g_cpu.R[5]);
    _a_08043CA4 += 4u;
    _cyc_08043CA4 += runtime_mem_cycles(_a_08043CA4 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08043CA4u, _a_08043CA4 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_08043CA4 & ~3u, g_cpu.R[6]);
    _a_08043CA4 += 4u;
    _cyc_08043CA4 += runtime_mem_cycles(_a_08043CA4 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08043CA4u, _a_08043CA4 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08043CA4 & ~3u, g_cpu.R[14]);
    _a_08043CA4 += 4u;
    g_cpu.R[13] = _fb_08043CA4;
    g_cpu.R[15] = 0x08043CA6u;
    runtime_tick(_cyc_08043CA4);
    }
L_08043CA6:
    /* 08043CA6  08043ca6 T ldr r6,[r15,#0x1c] */
    {
    g_cpu.R[15] = 0x08043CA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CA6 = 1u;
    _cyc_08043CA6 = 2u;
    uint32_t _base_08043CA6 = 0x08043CAAu & ~3u;
    uint32_t _off_08043CA6;
    _off_08043CA6 = 0x0000001Cu;
    uint32_t _ea_08043CA6 = _base_08043CA6 + _off_08043CA6;
    uint32_t _post_08043CA6 = _base_08043CA6 + _off_08043CA6;
    _cyc_08043CA6 += runtime_mem_cycles(_ea_08043CA6, 4u, 0u);
    uint32_t _v_08043CA6;
    { uint32_t _w = bus_read_u32(_ea_08043CA6 & ~3u); uint32_t _rot = (_ea_08043CA6 & 3u) * 8u; _v_08043CA6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_08043CA6;
    g_cpu.R[15] = 0x08043CA8u;
    runtime_tick(_cyc_08043CA6);
    }
L_08043CA8:
    /* 08043CA8  08043ca8 T ldr r0,[r15,#0x1c] */
    {
    g_cpu.R[15] = 0x08043CA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CA8 = 1u;
    _cyc_08043CA8 = 2u;
    uint32_t _base_08043CA8 = 0x08043CACu & ~3u;
    uint32_t _off_08043CA8;
    _off_08043CA8 = 0x0000001Cu;
    uint32_t _ea_08043CA8 = _base_08043CA8 + _off_08043CA8;
    uint32_t _post_08043CA8 = _base_08043CA8 + _off_08043CA8;
    _cyc_08043CA8 += runtime_mem_cycles(_ea_08043CA8, 4u, 0u);
    uint32_t _v_08043CA8;
    { uint32_t _w = bus_read_u32(_ea_08043CA8 & ~3u); uint32_t _rot = (_ea_08043CA8 & 3u) * 8u; _v_08043CA8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08043CA8;
    g_cpu.R[15] = 0x08043CAAu;
    runtime_tick(_cyc_08043CA8);
    }
L_08043CAA:
    /* 08043CAA  08043caa T ldrh r0,[r0] */
    {
    g_cpu.R[15] = 0x08043CAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CAA = 1u;
    _cyc_08043CAA = 2u;
    uint32_t _base_08043CAA = g_cpu.R[0];
    uint32_t _off_08043CAA;
    _off_08043CAA = 0x00000000u;
    uint32_t _ea_08043CAA = _base_08043CAA + _off_08043CAA;
    uint32_t _post_08043CAA = _base_08043CAA + _off_08043CAA;
    _cyc_08043CAA += runtime_mem_cycles(_ea_08043CAA, 2u, 0u);
    uint32_t _v_08043CAA;
    { uint32_t _h = bus_read_u16(_ea_08043CAA & ~1u); if (_ea_08043CAA & 1u) _v_08043CAA = ((_h >> 8) | (_h << 24)); else _v_08043CAA = _h; }
    g_cpu.R[0] = _v_08043CAA;
    g_cpu.R[15] = 0x08043CACu;
    runtime_tick(_cyc_08043CAA);
    }
L_08043CAC:
    /* 08043CAC  08043cac T bl.hi 0x0803ccb0 */
    {
    g_cpu.R[15] = 0x08043CACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CAC = 1u;
    _cyc_08043CAC = 1u;
    g_cpu.R[14] = 0x0803CCB0u;
    g_cpu.R[15] = 0x08043CAEu;
    runtime_tick(_cyc_08043CAC);
    }
L_08043CAE:
    /* 08043CAE  08043cae T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08043CAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CAE = 1u;
    _cyc_08043CAE = 3u;
    uint32_t _blt_08043CAE = (g_cpu.R[14] + 0x000008E4u) & ~1u;
    g_cpu.R[14] = 0x08043CB1u;
    g_cpu.R[15] = _blt_08043CAE;
    runtime_call_push_return(0x08043CB0u);
    runtime_tick(_cyc_08043CAE);
    _cyc_08043CAE = 0u;
    runtime_dispatch(_blt_08043CAE);
    if (g_cpu.R[15] != 0x08043CB0u) { runtime_call_cancel_return(0x08043CB0u); return; }
    g_cpu.R[15] = 0x08043CB0u;
    runtime_tick(_cyc_08043CAE);
    }
    /* fall-through to 0x08043CB0 */
    g_cpu.R[15] = 0x08043CB0u;
    runtime_dispatch(0x08043CB0u);
    return;
}

/* 0x08043CB0  mode=thumb  end=0x08043CBA  branches=3  indirect */
void gf_race_08043cb0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08043CB2u: goto L_08043CB2;
        case 0x08043CB4u: goto L_08043CB4;
        case 0x08043CB6u: goto L_08043CB6;
        case 0x08043CB8u: goto L_08043CB8;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08043CB0u);
    /* 08043CB0  08043cb0 T ldrb r0,[r6,#0x1f] */
    {
    g_cpu.R[15] = 0x08043CB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CB0 = 1u;
    _cyc_08043CB0 = 2u;
    uint32_t _base_08043CB0 = g_cpu.R[6];
    uint32_t _off_08043CB0;
    _off_08043CB0 = 0x0000001Fu;
    uint32_t _ea_08043CB0 = _base_08043CB0 + _off_08043CB0;
    uint32_t _post_08043CB0 = _base_08043CB0 + _off_08043CB0;
    _cyc_08043CB0 += runtime_mem_cycles(_ea_08043CB0, 1u, 0u);
    uint32_t _v_08043CB0;
    _v_08043CB0 = bus_read_u8(_ea_08043CB0);
    g_cpu.R[0] = _v_08043CB0;
    g_cpu.R[15] = 0x08043CB2u;
    runtime_tick(_cyc_08043CB0);
    }
L_08043CB2:
    /* 08043CB2  08043cb2 T cmps r0,#0x7d */
    {
    g_cpu.R[15] = 0x08043CB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CB2 = 1u;
    _cyc_08043CB2 = 1u;
    uint32_t _rn_08043CB2 = g_cpu.R[0];
    uint32_t _r_08043CB2;
    _r_08043CB2 = _rn_08043CB2 - 0x0000007Du;
    arm_set_nzcv_sub(_rn_08043CB2, 0x0000007Du, _r_08043CB2);
    g_cpu.R[15] = 0x08043CB4u;
    runtime_tick(_cyc_08043CB2);
    }
L_08043CB4:
    /* 08043CB4  08043cb4 T bls 0x08043cba */
    {
    g_cpu.R[15] = 0x08043CB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CB4 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08043CB4 = 3u;
        g_cpu.R[15] = 0x08043CBAu;
        runtime_tick(_cyc_08043CB4);
        gf_race_08043cba();
        return;
    }
    g_cpu.R[15] = 0x08043CB6u;
    runtime_tick(_cyc_08043CB4);
    }
L_08043CB6:
    /* 08043CB6  08043cb6 T bl.hi 0x08043cba */
    {
    g_cpu.R[15] = 0x08043CB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CB6 = 1u;
    _cyc_08043CB6 = 1u;
    g_cpu.R[14] = 0x08043CBAu;
    g_cpu.R[15] = 0x08043CB8u;
    runtime_tick(_cyc_08043CB6);
    }
L_08043CB8:
    /* 08043CB8  08043cb8 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08043CB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CB8 = 1u;
    _cyc_08043CB8 = 3u;
    uint32_t _blt_08043CB8 = (g_cpu.R[14] + 0x00000F72u) & ~1u;
    g_cpu.R[14] = 0x08043CBBu;
    g_cpu.R[15] = _blt_08043CB8;
    runtime_call_push_return(0x08043CBAu);
    runtime_tick(_cyc_08043CB8);
    _cyc_08043CB8 = 0u;
    runtime_dispatch(_blt_08043CB8);
    if (g_cpu.R[15] != 0x08043CBAu) { runtime_call_cancel_return(0x08043CBAu); return; }
    g_cpu.R[15] = 0x08043CBAu;
    runtime_tick(_cyc_08043CB8);
    }
    /* fall-through to 0x08043CBA */
    g_cpu.R[15] = 0x08043CBAu;
    runtime_dispatch(0x08043CBAu);
    return;
}

/* 0x08044252  mode=thumb  end=0x08044262  branches=66 */
void gf_race_08044252(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08044254u: goto L_08044254;
        case 0x08044256u: goto L_08044256;
        case 0x08044258u: goto L_08044258;
        case 0x0804425Au: goto L_0804425A;
        case 0x0804425Cu: goto L_0804425C;
        case 0x0804425Eu: goto L_0804425E;
        case 0x08044260u: goto L_08044260;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08044252u);
    /* 08044252  08044252 T ldr r2,[r15,#0x1c] */
    {
    g_cpu.R[15] = 0x08044252u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044252 = 1u;
    _cyc_08044252 = 2u;
    uint32_t _base_08044252 = 0x08044256u & ~3u;
    uint32_t _off_08044252;
    _off_08044252 = 0x0000001Cu;
    uint32_t _ea_08044252 = _base_08044252 + _off_08044252;
    uint32_t _post_08044252 = _base_08044252 + _off_08044252;
    _cyc_08044252 += runtime_mem_cycles(_ea_08044252, 4u, 0u);
    uint32_t _v_08044252;
    { uint32_t _w = bus_read_u32(_ea_08044252 & ~3u); uint32_t _rot = (_ea_08044252 & 3u) * 8u; _v_08044252 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08044252;
    g_cpu.R[15] = 0x08044254u;
    runtime_tick(_cyc_08044252);
    }
L_08044254:
    /* 08044254  08044254 T ldrh r1,[r2] */
    {
    g_cpu.R[15] = 0x08044254u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044254 = 1u;
    _cyc_08044254 = 2u;
    uint32_t _base_08044254 = g_cpu.R[2];
    uint32_t _off_08044254;
    _off_08044254 = 0x00000000u;
    uint32_t _ea_08044254 = _base_08044254 + _off_08044254;
    uint32_t _post_08044254 = _base_08044254 + _off_08044254;
    _cyc_08044254 += runtime_mem_cycles(_ea_08044254, 2u, 0u);
    uint32_t _v_08044254;
    { uint32_t _h = bus_read_u16(_ea_08044254 & ~1u); if (_ea_08044254 & 1u) _v_08044254 = ((_h >> 8) | (_h << 24)); else _v_08044254 = _h; }
    g_cpu.R[1] = _v_08044254;
    g_cpu.R[15] = 0x08044256u;
    runtime_tick(_cyc_08044254);
    }
L_08044256:
    /* 08044256  08044256 T movs r0,#0x2 */
    {
    g_cpu.R[15] = 0x08044256u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044256 = 1u;
    _cyc_08044256 = 1u;
    uint32_t _r_08044256;
    _r_08044256 = 0x00000002u;
    arm_set_nzc_logic(_r_08044256, cpsr_c());
    g_cpu.R[0] = _r_08044256;
    g_cpu.R[15] = 0x08044258u;
    runtime_tick(_cyc_08044256);
    }
L_08044258:
    /* 08044258  08044258 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08044258u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044258 = 1u;
    _cyc_08044258 = 1u;
    uint32_t _rm_08044258 = g_cpu.R[1];
    uint32_t _op2_08044258;
    uint32_t _co_08044258;
    _op2_08044258 = _rm_08044258;
    _co_08044258 = cpsr_c();
    uint32_t _rn_08044258 = g_cpu.R[0];
    uint32_t _r_08044258;
    _r_08044258 = _rn_08044258 & _op2_08044258;
    arm_set_nzc_logic(_r_08044258, _co_08044258);
    g_cpu.R[0] = _r_08044258;
    g_cpu.R[15] = 0x0804425Au;
    runtime_tick(_cyc_08044258);
    }
L_0804425A:
    /* 0804425A  0804425a T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x0804425Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804425A = 1u;
    _cyc_0804425A = 1u;
    uint32_t _rn_0804425A = g_cpu.R[0];
    uint32_t _r_0804425A;
    _r_0804425A = _rn_0804425A - 0x00000000u;
    arm_set_nzcv_sub(_rn_0804425A, 0x00000000u, _r_0804425A);
    g_cpu.R[15] = 0x0804425Cu;
    runtime_tick(_cyc_0804425A);
    }
L_0804425C:
    /* 0804425C  0804425c T beq 0x08044274 */
    {
    g_cpu.R[15] = 0x0804425Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804425C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0804425C = 3u;
        g_cpu.R[15] = 0x08044274u;
        runtime_tick(_cyc_0804425C);
        gf_tfunc_08044274();
        return;
    }
    g_cpu.R[15] = 0x0804425Eu;
    runtime_tick(_cyc_0804425C);
    }
L_0804425E:
    /* 0804425E  0804425e T bl.hi 0x08041262 */
    {
    g_cpu.R[15] = 0x0804425Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804425E = 1u;
    _cyc_0804425E = 1u;
    g_cpu.R[14] = 0x08041262u;
    g_cpu.R[15] = 0x08044260u;
    runtime_tick(_cyc_0804425E);
    }
L_08044260:
    /* 08044260  08044260 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08044260u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044260 = 1u;
    _cyc_08044260 = 3u;
    uint32_t _blt_08044260 = (g_cpu.R[14] + 0x00000AB6u) & ~1u;
    g_cpu.R[14] = 0x08044263u;
    g_cpu.R[15] = _blt_08044260;
    runtime_call_push_return(0x08044262u);
    runtime_tick(_cyc_08044260);
    _cyc_08044260 = 0u;
    runtime_dispatch(_blt_08044260);
    if (g_cpu.R[15] != 0x08044262u) { runtime_call_cancel_return(0x08044262u); return; }
    g_cpu.R[15] = 0x08044262u;
    runtime_tick(_cyc_08044260);
    }
    /* fall-through to 0x08044262 */
    g_cpu.R[15] = 0x08044262u;
    runtime_dispatch(0x08044262u);
    return;
}

/* 0x08044D4C  mode=thumb  end=0x08044D50  branches=4 */
void gf_race_08044d4c(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08044D4Eu: goto L_08044D4E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08044D4Cu);
    /* 08044D4C  08044d4c T bl.hi 0x08042d50 */
    {
    g_cpu.R[15] = 0x08044D4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044D4C = 1u;
    _cyc_08044D4C = 1u;
    g_cpu.R[14] = 0x08042D50u;
    g_cpu.R[15] = 0x08044D4Eu;
    runtime_tick(_cyc_08044D4C);
    }
L_08044D4E:
    /* 08044D4E  08044d4e T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08044D4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044D4E = 1u;
    _cyc_08044D4E = 3u;
    uint32_t _blt_08044D4E = (g_cpu.R[14] + 0x00000F54u) & ~1u;
    g_cpu.R[14] = 0x08044D51u;
    g_cpu.R[15] = _blt_08044D4E;
    runtime_call_push_return(0x08044D50u);
    runtime_tick(_cyc_08044D4E);
    _cyc_08044D4E = 0u;
    runtime_dispatch(_blt_08044D4E);
    if (g_cpu.R[15] != 0x08044D50u) { runtime_call_cancel_return(0x08044D50u); return; }
    g_cpu.R[15] = 0x08044D50u;
    runtime_tick(_cyc_08044D4E);
    }
    /* fall-through to 0x08044D50 */
    g_cpu.R[15] = 0x08044D50u;
    runtime_dispatch(0x08044D50u);
    return;
}

/* 0x08037FAA  mode=thumb  end=0x08037FB0  branches=1  indirect */
void gf_race_08037faa(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037FACu: goto L_08037FAC;
        case 0x08037FAEu: goto L_08037FAE;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037FAAu);
    /* 08037FAA  08037faa T ldr r1,[r1,#0x34] */
    {
    g_cpu.R[15] = 0x08037FAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037FAA = 1u;
    _cyc_08037FAA = 2u;
    uint32_t _base_08037FAA = g_cpu.R[1];
    uint32_t _off_08037FAA;
    _off_08037FAA = 0x00000034u;
    uint32_t _ea_08037FAA = _base_08037FAA + _off_08037FAA;
    uint32_t _post_08037FAA = _base_08037FAA + _off_08037FAA;
    _cyc_08037FAA += runtime_mem_cycles(_ea_08037FAA, 4u, 0u);
    uint32_t _v_08037FAA;
    { uint32_t _w = bus_read_u32(_ea_08037FAA & ~3u); uint32_t _rot = (_ea_08037FAA & 3u) * 8u; _v_08037FAA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08037FAA;
    g_cpu.R[15] = 0x08037FACu;
    runtime_tick(_cyc_08037FAA);
    }
L_08037FAC:
    /* 08037FAC  08037fac T cmps r1,#0x0 */
    {
    g_cpu.R[15] = 0x08037FACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037FAC = 1u;
    _cyc_08037FAC = 1u;
    uint32_t _rn_08037FAC = g_cpu.R[1];
    uint32_t _r_08037FAC;
    _r_08037FAC = _rn_08037FAC - 0x00000000u;
    arm_set_nzcv_sub(_rn_08037FAC, 0x00000000u, _r_08037FAC);
    g_cpu.R[15] = 0x08037FAEu;
    runtime_tick(_cyc_08037FAC);
    }
L_08037FAE:
    /* 08037FAE  08037fae T bne 0x08037f92 */
    {
    g_cpu.R[15] = 0x08037FAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037FAE = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08037FAE = 3u;
        g_cpu.R[15] = 0x08037F92u;
        runtime_tick(_cyc_08037FAE);
        gf_tfunc_08037F92();
        return;
    }
    g_cpu.R[15] = 0x08037FB0u;
    runtime_tick(_cyc_08037FAE);
    }
    /* fall-through to 0x08037FB0 */
    g_cpu.R[15] = 0x08037FB0u;
    runtime_dispatch(0x08037FB0u);
    return;
}

/* 0x0803805A  mode=thumb  end=0x08038060  branches=0  indirect */
void gf_race_0803805a(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0803805Cu: goto L_0803805C;
        case 0x0803805Eu: goto L_0803805E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0803805Au);
    /* 0803805A  0803805a T ldm r13!,{r4,r5,r6,r7} */
    {
    g_cpu.R[15] = 0x0803805Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803805A = 1u;
    _cyc_0803805A = 2u;
    uint32_t _b_0803805A = g_cpu.R[13];
    uint32_t _a_0803805A = _b_0803805A;
    uint32_t _fb_0803805A = _b_0803805A + 16u;
    _cyc_0803805A += runtime_mem_cycles(_a_0803805A & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_0803805A & ~3u);
    _a_0803805A += 4u;
    _cyc_0803805A += runtime_mem_cycles(_a_0803805A & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_0803805A & ~3u);
    _a_0803805A += 4u;
    _cyc_0803805A += runtime_mem_cycles(_a_0803805A & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_0803805A & ~3u);
    _a_0803805A += 4u;
    _cyc_0803805A += runtime_mem_cycles(_a_0803805A & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_0803805A & ~3u);
    _a_0803805A += 4u;
    g_cpu.R[13] = _fb_0803805A;
    g_cpu.R[15] = 0x0803805Cu;
    runtime_tick(_cyc_0803805A);
    }
L_0803805C:
    /* 0803805C  0803805c T ldm r13!,{r1} */
    {
    g_cpu.R[15] = 0x0803805Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803805C = 1u;
    _cyc_0803805C = 2u;
    uint32_t _b_0803805C = g_cpu.R[13];
    uint32_t _a_0803805C = _b_0803805C;
    uint32_t _fb_0803805C = _b_0803805C + 4u;
    _cyc_0803805C += runtime_mem_cycles(_a_0803805C & ~3u, 4u, 0u);
    g_cpu.R[1] = bus_read_u32(_a_0803805C & ~3u);
    _a_0803805C += 4u;
    g_cpu.R[13] = _fb_0803805C;
    g_cpu.R[15] = 0x0803805Eu;
    runtime_tick(_cyc_0803805C);
    }
L_0803805E:
    /* 0803805E  0803805e T bx r1 */
    {
    g_cpu.R[15] = 0x0803805Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803805E = 1u;
    _cyc_0803805E = 3u;
    uint32_t _bxt_0803805E = g_cpu.R[1];
    g_cpu.R[15] = _bxt_0803805E & ~1u;
    if (_bxt_0803805E & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_0803805E);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_0803805E);
    return;
    g_cpu.R[15] = 0x08038060u;
    runtime_tick(_cyc_0803805E);
    }
    /* fall-through to 0x08038060 */
    g_cpu.R[15] = 0x08038060u;
    runtime_dispatch(0x08038060u);
    return;
}

/* 0x08038C90  mode=thumb  end=0x08038C9A  branches=1 */
void gf_race_08038c90(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038C92u: goto L_08038C92;
        case 0x08038C94u: goto L_08038C94;
        case 0x08038C96u: goto L_08038C96;
        case 0x08038C98u: goto L_08038C98;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038C90u);
    /* 08038C90  08038c90 T ldr r0,[r15,#0x8] */
    {
    g_cpu.R[15] = 0x08038C90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038C90 = 1u;
    _cyc_08038C90 = 2u;
    uint32_t _base_08038C90 = 0x08038C94u & ~3u;
    uint32_t _off_08038C90;
    _off_08038C90 = 0x00000008u;
    uint32_t _ea_08038C90 = _base_08038C90 + _off_08038C90;
    uint32_t _post_08038C90 = _base_08038C90 + _off_08038C90;
    _cyc_08038C90 += runtime_mem_cycles(_ea_08038C90, 4u, 0u);
    uint32_t _v_08038C90;
    { uint32_t _w = bus_read_u32(_ea_08038C90 & ~3u); uint32_t _rot = (_ea_08038C90 & 3u) * 8u; _v_08038C90 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038C90;
    g_cpu.R[15] = 0x08038C92u;
    runtime_tick(_cyc_08038C90);
    }
L_08038C92:
    /* 08038C92  08038c92 T str r0,[r13,#0x8] */
    {
    g_cpu.R[15] = 0x08038C92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038C92 = 1u;
    _cyc_08038C92 = 1u;
    uint32_t _base_08038C92 = g_cpu.R[13];
    uint32_t _off_08038C92;
    _off_08038C92 = 0x00000008u;
    uint32_t _ea_08038C92 = _base_08038C92 + _off_08038C92;
    uint32_t _post_08038C92 = _base_08038C92 + _off_08038C92;
    _cyc_08038C92 += runtime_mem_cycles(_ea_08038C92, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038C92u, _ea_08038C92 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08038C92 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08038C94u;
    runtime_tick(_cyc_08038C92);
    }
L_08038C94:
    /* 08038C94  08038c94 T ldr r7,[r15,#0x8] */
    {
    g_cpu.R[15] = 0x08038C94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038C94 = 1u;
    _cyc_08038C94 = 2u;
    uint32_t _base_08038C94 = 0x08038C98u & ~3u;
    uint32_t _off_08038C94;
    _off_08038C94 = 0x00000008u;
    uint32_t _ea_08038C94 = _base_08038C94 + _off_08038C94;
    uint32_t _post_08038C94 = _base_08038C94 + _off_08038C94;
    _cyc_08038C94 += runtime_mem_cycles(_ea_08038C94, 4u, 0u);
    uint32_t _v_08038C94;
    { uint32_t _w = bus_read_u32(_ea_08038C94 & ~3u); uint32_t _rot = (_ea_08038C94 & 3u) * 8u; _v_08038C94 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[7] = _v_08038C94;
    g_cpu.R[15] = 0x08038C96u;
    runtime_tick(_cyc_08038C94);
    }
L_08038C96:
    /* 08038C96  08038c96 T ldr r2,[r15,#0xc] */
    {
    g_cpu.R[15] = 0x08038C96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038C96 = 1u;
    _cyc_08038C96 = 2u;
    uint32_t _base_08038C96 = 0x08038C9Au & ~3u;
    uint32_t _off_08038C96;
    _off_08038C96 = 0x0000000Cu;
    uint32_t _ea_08038C96 = _base_08038C96 + _off_08038C96;
    uint32_t _post_08038C96 = _base_08038C96 + _off_08038C96;
    _cyc_08038C96 += runtime_mem_cycles(_ea_08038C96, 4u, 0u);
    uint32_t _v_08038C96;
    { uint32_t _w = bus_read_u32(_ea_08038C96 & ~3u); uint32_t _rot = (_ea_08038C96 & 3u) * 8u; _v_08038C96 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08038C96;
    g_cpu.R[15] = 0x08038C98u;
    runtime_tick(_cyc_08038C96);
    }
L_08038C98:
    /* 08038C98  08038c98 T b 0x08038cd0 */
    {
    g_cpu.R[15] = 0x08038C98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038C98 = 1u;
    _cyc_08038C98 = 3u;
    g_cpu.R[15] = 0x08038CD0u;
    runtime_tick(_cyc_08038C98);
    gf_race_08038cd0();
    return;
    g_cpu.R[15] = 0x08038C9Au;
    runtime_tick(_cyc_08038C98);
    }
    /* fall-through to 0x08038C9A */
    g_cpu.R[15] = 0x08038C9Au;
    runtime_dispatch(0x08038C9Au);
    return;
}

/* 0x08038EAA  mode=thumb  end=0x08038EB2  branches=1 */
void gf_race_08038eaa(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038EACu: goto L_08038EAC;
        case 0x08038EAEu: goto L_08038EAE;
        case 0x08038EB0u: goto L_08038EB0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038EAAu);
    /* 08038EAA  08038eaa T ldrb r0,[r4,#0x19] */
    {
    g_cpu.R[15] = 0x08038EAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EAA = 1u;
    _cyc_08038EAA = 2u;
    uint32_t _base_08038EAA = g_cpu.R[4];
    uint32_t _off_08038EAA;
    _off_08038EAA = 0x00000019u;
    uint32_t _ea_08038EAA = _base_08038EAA + _off_08038EAA;
    uint32_t _post_08038EAA = _base_08038EAA + _off_08038EAA;
    _cyc_08038EAA += runtime_mem_cycles(_ea_08038EAA, 1u, 0u);
    uint32_t _v_08038EAA;
    _v_08038EAA = bus_read_u8(_ea_08038EAA);
    g_cpu.R[0] = _v_08038EAA;
    g_cpu.R[15] = 0x08038EACu;
    runtime_tick(_cyc_08038EAA);
    }
L_08038EAC:
    /* 08038EAC  08038eac T strb r0,[r4,#0x9] */
    {
    g_cpu.R[15] = 0x08038EACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EAC = 1u;
    _cyc_08038EAC = 1u;
    uint32_t _base_08038EAC = g_cpu.R[4];
    uint32_t _off_08038EAC;
    _off_08038EAC = 0x00000009u;
    uint32_t _ea_08038EAC = _base_08038EAC + _off_08038EAC;
    uint32_t _post_08038EAC = _base_08038EAC + _off_08038EAC;
    _cyc_08038EAC += runtime_mem_cycles(_ea_08038EAC, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038EACu, _ea_08038EAC, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038EAC, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038EAEu;
    runtime_tick(_cyc_08038EAC);
    }
L_08038EAE:
    /* 08038EAE  08038eae T movs r0,#0x7 */
    {
    g_cpu.R[15] = 0x08038EAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EAE = 1u;
    _cyc_08038EAE = 1u;
    uint32_t _r_08038EAE;
    _r_08038EAE = 0x00000007u;
    arm_set_nzc_logic(_r_08038EAE, cpsr_c());
    g_cpu.R[0] = _r_08038EAE;
    g_cpu.R[15] = 0x08038EB0u;
    runtime_tick(_cyc_08038EAE);
    }
L_08038EB0:
    /* 08038EB0  08038eb0 T b 0x08038f32 */
    {
    g_cpu.R[15] = 0x08038EB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EB0 = 1u;
    _cyc_08038EB0 = 3u;
    g_cpu.R[15] = 0x08038F32u;
    runtime_tick(_cyc_08038EB0);
    gf_race_08038f32();
    return;
    g_cpu.R[15] = 0x08038EB2u;
    runtime_tick(_cyc_08038EB0);
    }
    /* fall-through to 0x08038EB2 */
    g_cpu.R[15] = 0x08038EB2u;
    runtime_dispatch(0x08038EB2u);
    return;
}

/* 0x08038EDA  mode=thumb  end=0x08038EF2  branches=2 */
void gf_race_08038eda(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038EDCu: goto L_08038EDC;
        case 0x08038EDEu: goto L_08038EDE;
        case 0x08038EE0u: goto L_08038EE0;
        case 0x08038EE2u: goto L_08038EE2;
        case 0x08038EE4u: goto L_08038EE4;
        case 0x08038EE6u: goto L_08038EE6;
        case 0x08038EE8u: goto L_08038EE8;
        case 0x08038EEAu: goto L_08038EEA;
        case 0x08038EECu: goto L_08038EEC;
        case 0x08038EEEu: goto L_08038EEE;
        case 0x08038EF0u: goto L_08038EF0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038EDAu);
    /* 08038EDA  08038eda T ldrb r0,[r4] */
    {
    g_cpu.R[15] = 0x08038EDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EDA = 1u;
    _cyc_08038EDA = 2u;
    uint32_t _base_08038EDA = g_cpu.R[4];
    uint32_t _off_08038EDA;
    _off_08038EDA = 0x00000000u;
    uint32_t _ea_08038EDA = _base_08038EDA + _off_08038EDA;
    uint32_t _post_08038EDA = _base_08038EDA + _off_08038EDA;
    _cyc_08038EDA += runtime_mem_cycles(_ea_08038EDA, 1u, 0u);
    uint32_t _v_08038EDA;
    _v_08038EDA = bus_read_u8(_ea_08038EDA);
    g_cpu.R[0] = _v_08038EDA;
    g_cpu.R[15] = 0x08038EDCu;
    runtime_tick(_cyc_08038EDA);
    }
L_08038EDC:
    /* 08038EDC  08038edc T subs r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x08038EDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EDC = 1u;
    _cyc_08038EDC = 1u;
    uint32_t _rn_08038EDC = g_cpu.R[0];
    uint32_t _r_08038EDC;
    _r_08038EDC = _rn_08038EDC - 0x00000001u;
    arm_set_nzcv_sub(_rn_08038EDC, 0x00000001u, _r_08038EDC);
    g_cpu.R[0] = _r_08038EDC;
    g_cpu.R[15] = 0x08038EDEu;
    runtime_tick(_cyc_08038EDC);
    }
L_08038EDE:
    /* 08038EDE  08038ede T strb r0,[r4] */
    {
    g_cpu.R[15] = 0x08038EDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EDE = 1u;
    _cyc_08038EDE = 1u;
    uint32_t _base_08038EDE = g_cpu.R[4];
    uint32_t _off_08038EDE;
    _off_08038EDE = 0x00000000u;
    uint32_t _ea_08038EDE = _base_08038EDE + _off_08038EDE;
    uint32_t _post_08038EDE = _base_08038EDE + _off_08038EDE;
    _cyc_08038EDE += runtime_mem_cycles(_ea_08038EDE, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038EDEu, _ea_08038EDE, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038EDE, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038EE0u;
    runtime_tick(_cyc_08038EDE);
    }
L_08038EE0:
    /* 08038EE0  08038ee0 T movs r0,#0x1 */
    {
    g_cpu.R[15] = 0x08038EE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EE0 = 1u;
    _cyc_08038EE0 = 1u;
    uint32_t _r_08038EE0;
    _r_08038EE0 = 0x00000001u;
    arm_set_nzc_logic(_r_08038EE0, cpsr_c());
    g_cpu.R[0] = _r_08038EE0;
    g_cpu.R[15] = 0x08038EE2u;
    runtime_tick(_cyc_08038EE0);
    }
L_08038EE2:
    /* 08038EE2  08038ee2 T ldrb r2,[r4,#0x1d] */
    {
    g_cpu.R[15] = 0x08038EE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EE2 = 1u;
    _cyc_08038EE2 = 2u;
    uint32_t _base_08038EE2 = g_cpu.R[4];
    uint32_t _off_08038EE2;
    _off_08038EE2 = 0x0000001Du;
    uint32_t _ea_08038EE2 = _base_08038EE2 + _off_08038EE2;
    uint32_t _post_08038EE2 = _base_08038EE2 + _off_08038EE2;
    _cyc_08038EE2 += runtime_mem_cycles(_ea_08038EE2, 1u, 0u);
    uint32_t _v_08038EE2;
    _v_08038EE2 = bus_read_u8(_ea_08038EE2);
    g_cpu.R[2] = _v_08038EE2;
    g_cpu.R[15] = 0x08038EE4u;
    runtime_tick(_cyc_08038EE2);
    }
L_08038EE4:
    /* 08038EE4  08038ee4 T orrs r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038EE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EE4 = 1u;
    _cyc_08038EE4 = 1u;
    uint32_t _rm_08038EE4 = g_cpu.R[2];
    uint32_t _op2_08038EE4;
    uint32_t _co_08038EE4;
    _op2_08038EE4 = _rm_08038EE4;
    _co_08038EE4 = cpsr_c();
    uint32_t _rn_08038EE4 = g_cpu.R[0];
    uint32_t _r_08038EE4;
    _r_08038EE4 = _rn_08038EE4 | _op2_08038EE4;
    arm_set_nzc_logic(_r_08038EE4, _co_08038EE4);
    g_cpu.R[0] = _r_08038EE4;
    g_cpu.R[15] = 0x08038EE6u;
    runtime_tick(_cyc_08038EE4);
    }
L_08038EE6:
    /* 08038EE6  08038ee6 T strb r0,[r4,#0x1d] */
    {
    g_cpu.R[15] = 0x08038EE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EE6 = 1u;
    _cyc_08038EE6 = 1u;
    uint32_t _base_08038EE6 = g_cpu.R[4];
    uint32_t _off_08038EE6;
    _off_08038EE6 = 0x0000001Du;
    uint32_t _ea_08038EE6 = _base_08038EE6 + _off_08038EE6;
    uint32_t _post_08038EE6 = _base_08038EE6 + _off_08038EE6;
    _cyc_08038EE6 += runtime_mem_cycles(_ea_08038EE6, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038EE6u, _ea_08038EE6, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038EE6, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038EE8u;
    runtime_tick(_cyc_08038EE6);
    }
L_08038EE8:
    /* 08038EE8  08038ee8 T cmps r6,#0x3 */
    {
    g_cpu.R[15] = 0x08038EE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EE8 = 1u;
    _cyc_08038EE8 = 1u;
    uint32_t _rn_08038EE8 = g_cpu.R[6];
    uint32_t _r_08038EE8;
    _r_08038EE8 = _rn_08038EE8 - 0x00000003u;
    arm_set_nzcv_sub(_rn_08038EE8, 0x00000003u, _r_08038EE8);
    g_cpu.R[15] = 0x08038EEAu;
    runtime_tick(_cyc_08038EE8);
    }
L_08038EEA:
    /* 08038EEA  08038eea T beq 0x08038eaa */
    {
    g_cpu.R[15] = 0x08038EEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EEA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038EEA = 3u;
        g_cpu.R[15] = 0x08038EAAu;
        runtime_tick(_cyc_08038EEA);
        gf_race_08038eaa();
        return;
    }
    g_cpu.R[15] = 0x08038EECu;
    runtime_tick(_cyc_08038EEA);
    }
L_08038EEC:
    /* 08038EEC  08038eec T movs r0,#0x8 */
    {
    g_cpu.R[15] = 0x08038EECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EEC = 1u;
    _cyc_08038EEC = 1u;
    uint32_t _r_08038EEC;
    _r_08038EEC = 0x00000008u;
    arm_set_nzc_logic(_r_08038EEC, cpsr_c());
    g_cpu.R[0] = _r_08038EEC;
    g_cpu.R[15] = 0x08038EEEu;
    runtime_tick(_cyc_08038EEC);
    }
L_08038EEE:
    /* 08038EEE  08038eee T mov r8,r0 */
    {
    g_cpu.R[15] = 0x08038EEEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EEE = 1u;
    _cyc_08038EEE = 1u;
    uint32_t _rm_08038EEE = g_cpu.R[0];
    uint32_t _op2_08038EEE;
    uint32_t _co_08038EEE;
    _op2_08038EEE = _rm_08038EEE;
    _co_08038EEE = cpsr_c();
    uint32_t _r_08038EEE;
    _r_08038EEE = _op2_08038EEE;
    g_cpu.R[8] = _r_08038EEE;
    g_cpu.R[15] = 0x08038EF0u;
    runtime_tick(_cyc_08038EEE);
    }
L_08038EF0:
    /* 08038EF0  08038ef0 T b 0x08038eaa */
    {
    g_cpu.R[15] = 0x08038EF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EF0 = 1u;
    _cyc_08038EF0 = 3u;
    g_cpu.R[15] = 0x08038EAAu;
    runtime_tick(_cyc_08038EF0);
    gf_race_08038eaa();
    return;
    g_cpu.R[15] = 0x08038EF2u;
    runtime_tick(_cyc_08038EF0);
    }
    /* fall-through to 0x08038EF2 */
    g_cpu.R[15] = 0x08038EF2u;
    runtime_dispatch(0x08038EF2u);
    return;
}

/* 0x08038F06  mode=thumb  end=0x08038F30  branches=3 */
void gf_race_08038f06(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038F08u: goto L_08038F08;
        case 0x08038F0Au: goto L_08038F0A;
        case 0x08038F0Cu: goto L_08038F0C;
        case 0x08038F0Eu: goto L_08038F0E;
        case 0x08038F10u: goto L_08038F10;
        case 0x08038F12u: goto L_08038F12;
        case 0x08038F14u: goto L_08038F14;
        case 0x08038F16u: goto L_08038F16;
        case 0x08038F18u: goto L_08038F18;
        case 0x08038F1Au: goto L_08038F1A;
        case 0x08038F1Cu: goto L_08038F1C;
        case 0x08038F1Eu: goto L_08038F1E;
        case 0x08038F20u: goto L_08038F20;
        case 0x08038F22u: goto L_08038F22;
        case 0x08038F24u: goto L_08038F24;
        case 0x08038F26u: goto L_08038F26;
        case 0x08038F28u: goto L_08038F28;
        case 0x08038F2Au: goto L_08038F2A;
        case 0x08038F2Cu: goto L_08038F2C;
        case 0x08038F2Eu: goto L_08038F2E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038F06u);
    /* 08038F06  08038f06 T ldrb r0,[r4] */
    {
    g_cpu.R[15] = 0x08038F06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F06 = 1u;
    _cyc_08038F06 = 2u;
    uint32_t _base_08038F06 = g_cpu.R[4];
    uint32_t _off_08038F06;
    _off_08038F06 = 0x00000000u;
    uint32_t _ea_08038F06 = _base_08038F06 + _off_08038F06;
    uint32_t _post_08038F06 = _base_08038F06 + _off_08038F06;
    _cyc_08038F06 += runtime_mem_cycles(_ea_08038F06, 1u, 0u);
    uint32_t _v_08038F06;
    _v_08038F06 = bus_read_u8(_ea_08038F06);
    g_cpu.R[0] = _v_08038F06;
    g_cpu.R[15] = 0x08038F08u;
    runtime_tick(_cyc_08038F06);
    }
L_08038F08:
    /* 08038F08  08038f08 T subs r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x08038F08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F08 = 1u;
    _cyc_08038F08 = 1u;
    uint32_t _rn_08038F08 = g_cpu.R[0];
    uint32_t _r_08038F08;
    _r_08038F08 = _rn_08038F08 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08038F08, 0x00000001u, _r_08038F08);
    g_cpu.R[0] = _r_08038F08;
    g_cpu.R[15] = 0x08038F0Au;
    runtime_tick(_cyc_08038F08);
    }
L_08038F0A:
    /* 08038F0A  08038f0a T movs r2,#0x0 */
    {
    g_cpu.R[15] = 0x08038F0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F0A = 1u;
    _cyc_08038F0A = 1u;
    uint32_t _r_08038F0A;
    _r_08038F0A = 0x00000000u;
    arm_set_nzc_logic(_r_08038F0A, cpsr_c());
    g_cpu.R[2] = _r_08038F0A;
    g_cpu.R[15] = 0x08038F0Cu;
    runtime_tick(_cyc_08038F0A);
    }
L_08038F0C:
    /* 08038F0C  08038f0c T strb r0,[r4] */
    {
    g_cpu.R[15] = 0x08038F0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F0C = 1u;
    _cyc_08038F0C = 1u;
    uint32_t _base_08038F0C = g_cpu.R[4];
    uint32_t _off_08038F0C;
    _off_08038F0C = 0x00000000u;
    uint32_t _ea_08038F0C = _base_08038F0C + _off_08038F0C;
    uint32_t _post_08038F0C = _base_08038F0C + _off_08038F0C;
    _cyc_08038F0C += runtime_mem_cycles(_ea_08038F0C, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038F0Cu, _ea_08038F0C, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038F0C, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038F0Eu;
    runtime_tick(_cyc_08038F0C);
    }
L_08038F0E:
    /* 08038F0E  08038f0e T ldrb r1,[r4,#0x5] */
    {
    g_cpu.R[15] = 0x08038F0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F0E = 1u;
    _cyc_08038F0E = 2u;
    uint32_t _base_08038F0E = g_cpu.R[4];
    uint32_t _off_08038F0E;
    _off_08038F0E = 0x00000005u;
    uint32_t _ea_08038F0E = _base_08038F0E + _off_08038F0E;
    uint32_t _post_08038F0E = _base_08038F0E + _off_08038F0E;
    _cyc_08038F0E += runtime_mem_cycles(_ea_08038F0E, 1u, 0u);
    uint32_t _v_08038F0E;
    _v_08038F0E = bus_read_u8(_ea_08038F0E);
    g_cpu.R[1] = _v_08038F0E;
    g_cpu.R[15] = 0x08038F10u;
    runtime_tick(_cyc_08038F0E);
    }
L_08038F10:
    /* 08038F10  08038f10 T strb r1,[r4,#0xb] */
    {
    g_cpu.R[15] = 0x08038F10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F10 = 1u;
    _cyc_08038F10 = 1u;
    uint32_t _base_08038F10 = g_cpu.R[4];
    uint32_t _off_08038F10;
    _off_08038F10 = 0x0000000Bu;
    uint32_t _ea_08038F10 = _base_08038F10 + _off_08038F10;
    uint32_t _post_08038F10 = _base_08038F10 + _off_08038F10;
    _cyc_08038F10 += runtime_mem_cycles(_ea_08038F10, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038F10u, _ea_08038F10, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08038F10, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08038F12u;
    runtime_tick(_cyc_08038F10);
    }
L_08038F12:
    /* 08038F12  08038f12 T movs r0,#0xff */
    {
    g_cpu.R[15] = 0x08038F12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F12 = 1u;
    _cyc_08038F12 = 1u;
    uint32_t _r_08038F12;
    _r_08038F12 = 0x000000FFu;
    arm_set_nzc_logic(_r_08038F12, cpsr_c());
    g_cpu.R[0] = _r_08038F12;
    g_cpu.R[15] = 0x08038F14u;
    runtime_tick(_cyc_08038F12);
    }
L_08038F14:
    /* 08038F14  08038f14 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08038F14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F14 = 1u;
    _cyc_08038F14 = 1u;
    uint32_t _rm_08038F14 = g_cpu.R[1];
    uint32_t _op2_08038F14;
    uint32_t _co_08038F14;
    _op2_08038F14 = _rm_08038F14;
    _co_08038F14 = cpsr_c();
    uint32_t _rn_08038F14 = g_cpu.R[0];
    uint32_t _r_08038F14;
    _r_08038F14 = _rn_08038F14 & _op2_08038F14;
    arm_set_nzc_logic(_r_08038F14, _co_08038F14);
    g_cpu.R[0] = _r_08038F14;
    g_cpu.R[15] = 0x08038F16u;
    runtime_tick(_cyc_08038F14);
    }
L_08038F16:
    /* 08038F16  08038f16 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038F16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F16 = 1u;
    _cyc_08038F16 = 1u;
    uint32_t _rn_08038F16 = g_cpu.R[0];
    uint32_t _r_08038F16;
    _r_08038F16 = _rn_08038F16 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038F16, 0x00000000u, _r_08038F16);
    g_cpu.R[15] = 0x08038F18u;
    runtime_tick(_cyc_08038F16);
    }
L_08038F18:
    /* 08038F18  08038f18 T beq 0x08038eca */
    {
    g_cpu.R[15] = 0x08038F18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F18 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038F18 = 3u;
        g_cpu.R[15] = 0x08038ECAu;
        runtime_tick(_cyc_08038F18);
        gf_race_08038eca();
        return;
    }
    g_cpu.R[15] = 0x08038F1Au;
    runtime_tick(_cyc_08038F18);
    }
L_08038F1A:
    /* 08038F1A  08038f1a T movs r0,#0x1 */
    {
    g_cpu.R[15] = 0x08038F1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F1A = 1u;
    _cyc_08038F1A = 1u;
    uint32_t _r_08038F1A;
    _r_08038F1A = 0x00000001u;
    arm_set_nzc_logic(_r_08038F1A, cpsr_c());
    g_cpu.R[0] = _r_08038F1A;
    g_cpu.R[15] = 0x08038F1Cu;
    runtime_tick(_cyc_08038F1A);
    }
L_08038F1C:
    /* 08038F1C  08038f1c T ldrb r1,[r4,#0x1d] */
    {
    g_cpu.R[15] = 0x08038F1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F1C = 1u;
    _cyc_08038F1C = 2u;
    uint32_t _base_08038F1C = g_cpu.R[4];
    uint32_t _off_08038F1C;
    _off_08038F1C = 0x0000001Du;
    uint32_t _ea_08038F1C = _base_08038F1C + _off_08038F1C;
    uint32_t _post_08038F1C = _base_08038F1C + _off_08038F1C;
    _cyc_08038F1C += runtime_mem_cycles(_ea_08038F1C, 1u, 0u);
    uint32_t _v_08038F1C;
    _v_08038F1C = bus_read_u8(_ea_08038F1C);
    g_cpu.R[1] = _v_08038F1C;
    g_cpu.R[15] = 0x08038F1Eu;
    runtime_tick(_cyc_08038F1C);
    }
L_08038F1E:
    /* 08038F1E  08038f1e T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08038F1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F1E = 1u;
    _cyc_08038F1E = 1u;
    uint32_t _rm_08038F1E = g_cpu.R[1];
    uint32_t _op2_08038F1E;
    uint32_t _co_08038F1E;
    _op2_08038F1E = _rm_08038F1E;
    _co_08038F1E = cpsr_c();
    uint32_t _rn_08038F1E = g_cpu.R[0];
    uint32_t _r_08038F1E;
    _r_08038F1E = _rn_08038F1E | _op2_08038F1E;
    arm_set_nzc_logic(_r_08038F1E, _co_08038F1E);
    g_cpu.R[0] = _r_08038F1E;
    g_cpu.R[15] = 0x08038F20u;
    runtime_tick(_cyc_08038F1E);
    }
L_08038F20:
    /* 08038F20  08038f20 T strb r0,[r4,#0x1d] */
    {
    g_cpu.R[15] = 0x08038F20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F20 = 1u;
    _cyc_08038F20 = 1u;
    uint32_t _base_08038F20 = g_cpu.R[4];
    uint32_t _off_08038F20;
    _off_08038F20 = 0x0000001Du;
    uint32_t _ea_08038F20 = _base_08038F20 + _off_08038F20;
    uint32_t _post_08038F20 = _base_08038F20 + _off_08038F20;
    _cyc_08038F20 += runtime_mem_cycles(_ea_08038F20, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038F20u, _ea_08038F20, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038F20, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038F22u;
    runtime_tick(_cyc_08038F20);
    }
L_08038F22:
    /* 08038F22  08038f22 T ldrb r0,[r4,#0xa] */
    {
    g_cpu.R[15] = 0x08038F22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F22 = 1u;
    _cyc_08038F22 = 2u;
    uint32_t _base_08038F22 = g_cpu.R[4];
    uint32_t _off_08038F22;
    _off_08038F22 = 0x0000000Au;
    uint32_t _ea_08038F22 = _base_08038F22 + _off_08038F22;
    uint32_t _post_08038F22 = _base_08038F22 + _off_08038F22;
    _cyc_08038F22 += runtime_mem_cycles(_ea_08038F22, 1u, 0u);
    uint32_t _v_08038F22;
    _v_08038F22 = bus_read_u8(_ea_08038F22);
    g_cpu.R[0] = _v_08038F22;
    g_cpu.R[15] = 0x08038F24u;
    runtime_tick(_cyc_08038F22);
    }
L_08038F24:
    /* 08038F24  08038f24 T strb r0,[r4,#0x9] */
    {
    g_cpu.R[15] = 0x08038F24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F24 = 1u;
    _cyc_08038F24 = 1u;
    uint32_t _base_08038F24 = g_cpu.R[4];
    uint32_t _off_08038F24;
    _off_08038F24 = 0x00000009u;
    uint32_t _ea_08038F24 = _base_08038F24 + _off_08038F24;
    uint32_t _post_08038F24 = _base_08038F24 + _off_08038F24;
    _cyc_08038F24 += runtime_mem_cycles(_ea_08038F24, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038F24u, _ea_08038F24, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038F24, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038F26u;
    runtime_tick(_cyc_08038F24);
    }
L_08038F26:
    /* 08038F26  08038f26 T cmps r6,#0x3 */
    {
    g_cpu.R[15] = 0x08038F26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F26 = 1u;
    _cyc_08038F26 = 1u;
    uint32_t _rn_08038F26 = g_cpu.R[6];
    uint32_t _r_08038F26;
    _r_08038F26 = _rn_08038F26 - 0x00000003u;
    arm_set_nzcv_sub(_rn_08038F26, 0x00000003u, _r_08038F26);
    g_cpu.R[15] = 0x08038F28u;
    runtime_tick(_cyc_08038F26);
    }
L_08038F28:
    /* 08038F28  08038f28 T beq 0x08038f34 */
    {
    g_cpu.R[15] = 0x08038F28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F28 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038F28 = 3u;
        g_cpu.R[15] = 0x08038F34u;
        runtime_tick(_cyc_08038F28);
        gf_race_08038f34();
        return;
    }
    g_cpu.R[15] = 0x08038F2Au;
    runtime_tick(_cyc_08038F28);
    }
L_08038F2A:
    /* 08038F2A  08038f2a T ldrb r2,[r4,#0x5] */
    {
    g_cpu.R[15] = 0x08038F2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F2A = 1u;
    _cyc_08038F2A = 2u;
    uint32_t _base_08038F2A = g_cpu.R[4];
    uint32_t _off_08038F2A;
    _off_08038F2A = 0x00000005u;
    uint32_t _ea_08038F2A = _base_08038F2A + _off_08038F2A;
    uint32_t _post_08038F2A = _base_08038F2A + _off_08038F2A;
    _cyc_08038F2A += runtime_mem_cycles(_ea_08038F2A, 1u, 0u);
    uint32_t _v_08038F2A;
    _v_08038F2A = bus_read_u8(_ea_08038F2A);
    g_cpu.R[2] = _v_08038F2A;
    g_cpu.R[15] = 0x08038F2Cu;
    runtime_tick(_cyc_08038F2A);
    }
L_08038F2C:
    /* 08038F2C  08038f2c T mov r8,r2 */
    {
    g_cpu.R[15] = 0x08038F2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F2C = 1u;
    _cyc_08038F2C = 1u;
    uint32_t _rm_08038F2C = g_cpu.R[2];
    uint32_t _op2_08038F2C;
    uint32_t _co_08038F2C;
    _op2_08038F2C = _rm_08038F2C;
    _co_08038F2C = cpsr_c();
    uint32_t _r_08038F2C;
    _r_08038F2C = _op2_08038F2C;
    g_cpu.R[8] = _r_08038F2C;
    g_cpu.R[15] = 0x08038F2Eu;
    runtime_tick(_cyc_08038F2C);
    }
L_08038F2E:
    /* 08038F2E  08038f2e T b 0x08038f34 */
    {
    g_cpu.R[15] = 0x08038F2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F2E = 1u;
    _cyc_08038F2E = 3u;
    g_cpu.R[15] = 0x08038F34u;
    runtime_tick(_cyc_08038F2E);
    gf_race_08038f34();
    return;
    g_cpu.R[15] = 0x08038F30u;
    runtime_tick(_cyc_08038F2E);
    }
    /* fall-through to 0x08038F30 */
    g_cpu.R[15] = 0x08038F30u;
    runtime_dispatch(0x08038F30u);
    return;
}

/* 0x08038F46  mode=thumb  end=0x08038F6E  branches=5 */
void gf_race_08038f46(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038F48u: goto L_08038F48;
        case 0x08038F4Au: goto L_08038F4A;
        case 0x08038F4Cu: goto L_08038F4C;
        case 0x08038F4Eu: goto L_08038F4E;
        case 0x08038F50u: goto L_08038F50;
        case 0x08038F52u: goto L_08038F52;
        case 0x08038F54u: goto L_08038F54;
        case 0x08038F56u: goto L_08038F56;
        case 0x08038F58u: goto L_08038F58;
        case 0x08038F5Au: goto L_08038F5A;
        case 0x08038F5Cu: goto L_08038F5C;
        case 0x08038F5Eu: goto L_08038F5E;
        case 0x08038F60u: goto L_08038F60;
        case 0x08038F62u: goto L_08038F62;
        case 0x08038F64u: goto L_08038F64;
        case 0x08038F66u: goto L_08038F66;
        case 0x08038F68u: goto L_08038F68;
        case 0x08038F6Au: goto L_08038F6A;
        case 0x08038F6Cu: goto L_08038F6C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038F46u);
    /* 08038F46  08038f46 T movs r0,#0x2 */
    {
    g_cpu.R[15] = 0x08038F46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F46 = 1u;
    _cyc_08038F46 = 1u;
    uint32_t _r_08038F46;
    _r_08038F46 = 0x00000002u;
    arm_set_nzc_logic(_r_08038F46, cpsr_c());
    g_cpu.R[0] = _r_08038F46;
    g_cpu.R[15] = 0x08038F48u;
    runtime_tick(_cyc_08038F46);
    }
L_08038F48:
    /* 08038F48  08038f48 T ldrb r1,[r4,#0x1d] */
    {
    g_cpu.R[15] = 0x08038F48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F48 = 1u;
    _cyc_08038F48 = 2u;
    uint32_t _base_08038F48 = g_cpu.R[4];
    uint32_t _off_08038F48;
    _off_08038F48 = 0x0000001Du;
    uint32_t _ea_08038F48 = _base_08038F48 + _off_08038F48;
    uint32_t _post_08038F48 = _base_08038F48 + _off_08038F48;
    _cyc_08038F48 += runtime_mem_cycles(_ea_08038F48, 1u, 0u);
    uint32_t _v_08038F48;
    _v_08038F48 = bus_read_u8(_ea_08038F48);
    g_cpu.R[1] = _v_08038F48;
    g_cpu.R[15] = 0x08038F4Au;
    runtime_tick(_cyc_08038F48);
    }
L_08038F4A:
    /* 08038F4A  08038f4a T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08038F4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F4A = 1u;
    _cyc_08038F4A = 1u;
    uint32_t _rm_08038F4A = g_cpu.R[1];
    uint32_t _op2_08038F4A;
    uint32_t _co_08038F4A;
    _op2_08038F4A = _rm_08038F4A;
    _co_08038F4A = cpsr_c();
    uint32_t _rn_08038F4A = g_cpu.R[0];
    uint32_t _r_08038F4A;
    _r_08038F4A = _rn_08038F4A & _op2_08038F4A;
    arm_set_nzc_logic(_r_08038F4A, _co_08038F4A);
    g_cpu.R[0] = _r_08038F4A;
    g_cpu.R[15] = 0x08038F4Cu;
    runtime_tick(_cyc_08038F4A);
    }
L_08038F4C:
    /* 08038F4C  08038f4c T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038F4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F4C = 1u;
    _cyc_08038F4C = 1u;
    uint32_t _rn_08038F4C = g_cpu.R[0];
    uint32_t _r_08038F4C;
    _r_08038F4C = _rn_08038F4C - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038F4C, 0x00000000u, _r_08038F4C);
    g_cpu.R[15] = 0x08038F4Eu;
    runtime_tick(_cyc_08038F4C);
    }
L_08038F4E:
    /* 08038F4E  08038f4e T beq 0x08038fbe */
    {
    g_cpu.R[15] = 0x08038F4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F4E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038F4E = 3u;
        g_cpu.R[15] = 0x08038FBEu;
        runtime_tick(_cyc_08038F4E);
        gf_race_08038fbe();
        return;
    }
    g_cpu.R[15] = 0x08038F50u;
    runtime_tick(_cyc_08038F4E);
    }
L_08038F50:
    /* 08038F50  08038f50 T cmps r6,#0x3 */
    {
    g_cpu.R[15] = 0x08038F50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F50 = 1u;
    _cyc_08038F50 = 1u;
    uint32_t _rn_08038F50 = g_cpu.R[6];
    uint32_t _r_08038F50;
    _r_08038F50 = _rn_08038F50 - 0x00000003u;
    arm_set_nzcv_sub(_rn_08038F50, 0x00000003u, _r_08038F50);
    g_cpu.R[15] = 0x08038F52u;
    runtime_tick(_cyc_08038F50);
    }
L_08038F52:
    /* 08038F52  08038f52 T bgt 0x08038f86 */
    {
    g_cpu.R[15] = 0x08038F52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F52 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_08038F52 = 3u;
        g_cpu.R[15] = 0x08038F86u;
        runtime_tick(_cyc_08038F52);
        gf_race_08038f86();
        return;
    }
    g_cpu.R[15] = 0x08038F54u;
    runtime_tick(_cyc_08038F52);
    }
L_08038F54:
    /* 08038F54  08038f54 T movs r0,#0x8 */
    {
    g_cpu.R[15] = 0x08038F54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F54 = 1u;
    _cyc_08038F54 = 1u;
    uint32_t _r_08038F54;
    _r_08038F54 = 0x00000008u;
    arm_set_nzc_logic(_r_08038F54, cpsr_c());
    g_cpu.R[0] = _r_08038F54;
    g_cpu.R[15] = 0x08038F56u;
    runtime_tick(_cyc_08038F54);
    }
L_08038F56:
    /* 08038F56  08038f56 T ldrb r2,[r4,#0x1] */
    {
    g_cpu.R[15] = 0x08038F56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F56 = 1u;
    _cyc_08038F56 = 2u;
    uint32_t _base_08038F56 = g_cpu.R[4];
    uint32_t _off_08038F56;
    _off_08038F56 = 0x00000001u;
    uint32_t _ea_08038F56 = _base_08038F56 + _off_08038F56;
    uint32_t _post_08038F56 = _base_08038F56 + _off_08038F56;
    _cyc_08038F56 += runtime_mem_cycles(_ea_08038F56, 1u, 0u);
    uint32_t _v_08038F56;
    _v_08038F56 = bus_read_u8(_ea_08038F56);
    g_cpu.R[2] = _v_08038F56;
    g_cpu.R[15] = 0x08038F58u;
    runtime_tick(_cyc_08038F56);
    }
L_08038F58:
    /* 08038F58  08038f58 T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038F58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F58 = 1u;
    _cyc_08038F58 = 1u;
    uint32_t _rm_08038F58 = g_cpu.R[2];
    uint32_t _op2_08038F58;
    uint32_t _co_08038F58;
    _op2_08038F58 = _rm_08038F58;
    _co_08038F58 = cpsr_c();
    uint32_t _rn_08038F58 = g_cpu.R[0];
    uint32_t _r_08038F58;
    _r_08038F58 = _rn_08038F58 & _op2_08038F58;
    arm_set_nzc_logic(_r_08038F58, _co_08038F58);
    g_cpu.R[0] = _r_08038F58;
    g_cpu.R[15] = 0x08038F5Au;
    runtime_tick(_cyc_08038F58);
    }
L_08038F5A:
    /* 08038F5A  08038f5a T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038F5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F5A = 1u;
    _cyc_08038F5A = 1u;
    uint32_t _rn_08038F5A = g_cpu.R[0];
    uint32_t _r_08038F5A;
    _r_08038F5A = _rn_08038F5A - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038F5A, 0x00000000u, _r_08038F5A);
    g_cpu.R[15] = 0x08038F5Cu;
    runtime_tick(_cyc_08038F5A);
    }
L_08038F5C:
    /* 08038F5C  08038f5c T beq 0x08038f86 */
    {
    g_cpu.R[15] = 0x08038F5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F5C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038F5C = 3u;
        g_cpu.R[15] = 0x08038F86u;
        runtime_tick(_cyc_08038F5C);
        gf_race_08038f86();
        return;
    }
    g_cpu.R[15] = 0x08038F5Eu;
    runtime_tick(_cyc_08038F5C);
    }
L_08038F5E:
    /* 08038F5E  08038f5e T ldr r0,[r15,#0x10] */
    {
    g_cpu.R[15] = 0x08038F5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F5E = 1u;
    _cyc_08038F5E = 2u;
    uint32_t _base_08038F5E = 0x08038F62u & ~3u;
    uint32_t _off_08038F5E;
    _off_08038F5E = 0x00000010u;
    uint32_t _ea_08038F5E = _base_08038F5E + _off_08038F5E;
    uint32_t _post_08038F5E = _base_08038F5E + _off_08038F5E;
    _cyc_08038F5E += runtime_mem_cycles(_ea_08038F5E, 4u, 0u);
    uint32_t _v_08038F5E;
    { uint32_t _w = bus_read_u32(_ea_08038F5E & ~3u); uint32_t _rot = (_ea_08038F5E & 3u) * 8u; _v_08038F5E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038F5E;
    g_cpu.R[15] = 0x08038F60u;
    runtime_tick(_cyc_08038F5E);
    }
L_08038F60:
    /* 08038F60  08038f60 T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x08038F60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F60 = 1u;
    _cyc_08038F60 = 2u;
    uint32_t _base_08038F60 = g_cpu.R[0];
    uint32_t _off_08038F60;
    _off_08038F60 = 0x00000000u;
    uint32_t _ea_08038F60 = _base_08038F60 + _off_08038F60;
    uint32_t _post_08038F60 = _base_08038F60 + _off_08038F60;
    _cyc_08038F60 += runtime_mem_cycles(_ea_08038F60, 1u, 0u);
    uint32_t _v_08038F60;
    _v_08038F60 = bus_read_u8(_ea_08038F60);
    g_cpu.R[0] = _v_08038F60;
    g_cpu.R[15] = 0x08038F62u;
    runtime_tick(_cyc_08038F60);
    }
L_08038F62:
    /* 08038F62  08038f62 T cmps r0,#0x3f */
    {
    g_cpu.R[15] = 0x08038F62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F62 = 1u;
    _cyc_08038F62 = 1u;
    uint32_t _rn_08038F62 = g_cpu.R[0];
    uint32_t _r_08038F62;
    _r_08038F62 = _rn_08038F62 - 0x0000003Fu;
    arm_set_nzcv_sub(_rn_08038F62, 0x0000003Fu, _r_08038F62);
    g_cpu.R[15] = 0x08038F64u;
    runtime_tick(_cyc_08038F62);
    }
L_08038F64:
    /* 08038F64  08038f64 T bgt 0x08038f78 */
    {
    g_cpu.R[15] = 0x08038F64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F64 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_08038F64 = 3u;
        g_cpu.R[15] = 0x08038F78u;
        runtime_tick(_cyc_08038F64);
        gf_tfunc_08038F78();
        return;
    }
    g_cpu.R[15] = 0x08038F66u;
    runtime_tick(_cyc_08038F64);
    }
L_08038F66:
    /* 08038F66  08038f66 T ldr r0,[r4,#0x20] */
    {
    g_cpu.R[15] = 0x08038F66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F66 = 1u;
    _cyc_08038F66 = 2u;
    uint32_t _base_08038F66 = g_cpu.R[4];
    uint32_t _off_08038F66;
    _off_08038F66 = 0x00000020u;
    uint32_t _ea_08038F66 = _base_08038F66 + _off_08038F66;
    uint32_t _post_08038F66 = _base_08038F66 + _off_08038F66;
    _cyc_08038F66 += runtime_mem_cycles(_ea_08038F66, 4u, 0u);
    uint32_t _v_08038F66;
    { uint32_t _w = bus_read_u32(_ea_08038F66 & ~3u); uint32_t _rot = (_ea_08038F66 & 3u) * 8u; _v_08038F66 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038F66;
    g_cpu.R[15] = 0x08038F68u;
    runtime_tick(_cyc_08038F66);
    }
L_08038F68:
    /* 08038F68  08038f68 T adds r0,r0,#0x2 */
    {
    g_cpu.R[15] = 0x08038F68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F68 = 1u;
    _cyc_08038F68 = 1u;
    uint32_t _rn_08038F68 = g_cpu.R[0];
    uint32_t _r_08038F68;
    _r_08038F68 = _rn_08038F68 + 0x00000002u;
    arm_set_nzcv_add(_rn_08038F68, 0x00000002u, _r_08038F68);
    g_cpu.R[0] = _r_08038F68;
    g_cpu.R[15] = 0x08038F6Au;
    runtime_tick(_cyc_08038F68);
    }
L_08038F6A:
    /* 08038F6A  08038f6a T ldr r1,[r15,#0x8] */
    {
    g_cpu.R[15] = 0x08038F6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F6A = 1u;
    _cyc_08038F6A = 2u;
    uint32_t _base_08038F6A = 0x08038F6Eu & ~3u;
    uint32_t _off_08038F6A;
    _off_08038F6A = 0x00000008u;
    uint32_t _ea_08038F6A = _base_08038F6A + _off_08038F6A;
    uint32_t _post_08038F6A = _base_08038F6A + _off_08038F6A;
    _cyc_08038F6A += runtime_mem_cycles(_ea_08038F6A, 4u, 0u);
    uint32_t _v_08038F6A;
    { uint32_t _w = bus_read_u32(_ea_08038F6A & ~3u); uint32_t _rot = (_ea_08038F6A & 3u) * 8u; _v_08038F6A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08038F6A;
    g_cpu.R[15] = 0x08038F6Cu;
    runtime_tick(_cyc_08038F6A);
    }
L_08038F6C:
    /* 08038F6C  08038f6c T b 0x08038f82 */
    {
    g_cpu.R[15] = 0x08038F6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F6C = 1u;
    _cyc_08038F6C = 3u;
    g_cpu.R[15] = 0x08038F82u;
    runtime_tick(_cyc_08038F6C);
    gf_tfunc_08038F82();
    return;
    g_cpu.R[15] = 0x08038F6Eu;
    runtime_tick(_cyc_08038F6C);
    }
    /* fall-through to 0x08038F6E */
    g_cpu.R[15] = 0x08038F6Eu;
    runtime_dispatch(0x08038F6Eu);
    return;
}

/* 0x08038FA6  mode=thumb  end=0x08038FBE  branches=4 */
void gf_race_08038fa6(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038FA8u: goto L_08038FA8;
        case 0x08038FAAu: goto L_08038FAA;
        case 0x08038FACu: goto L_08038FAC;
        case 0x08038FAEu: goto L_08038FAE;
        case 0x08038FB0u: goto L_08038FB0;
        case 0x08038FB2u: goto L_08038FB2;
        case 0x08038FB4u: goto L_08038FB4;
        case 0x08038FB6u: goto L_08038FB6;
        case 0x08038FB8u: goto L_08038FB8;
        case 0x08038FBAu: goto L_08038FBA;
        case 0x08038FBCu: goto L_08038FBC;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038FA6u);
    /* 08038FA6  08038fa6 T movs r0,#0xc0 */
    {
    g_cpu.R[15] = 0x08038FA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FA6 = 1u;
    _cyc_08038FA6 = 1u;
    uint32_t _r_08038FA6;
    _r_08038FA6 = 0x000000C0u;
    arm_set_nzc_logic(_r_08038FA6, cpsr_c());
    g_cpu.R[0] = _r_08038FA6;
    g_cpu.R[15] = 0x08038FA8u;
    runtime_tick(_cyc_08038FA6);
    }
L_08038FA8:
    /* 08038FA8  08038fa8 T ldrb r1,[r4,#0x1a] */
    {
    g_cpu.R[15] = 0x08038FA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FA8 = 1u;
    _cyc_08038FA8 = 2u;
    uint32_t _base_08038FA8 = g_cpu.R[4];
    uint32_t _off_08038FA8;
    _off_08038FA8 = 0x0000001Au;
    uint32_t _ea_08038FA8 = _base_08038FA8 + _off_08038FA8;
    uint32_t _post_08038FA8 = _base_08038FA8 + _off_08038FA8;
    _cyc_08038FA8 += runtime_mem_cycles(_ea_08038FA8, 1u, 0u);
    uint32_t _v_08038FA8;
    _v_08038FA8 = bus_read_u8(_ea_08038FA8);
    g_cpu.R[1] = _v_08038FA8;
    g_cpu.R[15] = 0x08038FAAu;
    runtime_tick(_cyc_08038FA8);
    }
L_08038FAA:
    /* 08038FAA  08038faa T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08038FAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FAA = 1u;
    _cyc_08038FAA = 1u;
    uint32_t _rm_08038FAA = g_cpu.R[1];
    uint32_t _op2_08038FAA;
    uint32_t _co_08038FAA;
    _op2_08038FAA = _rm_08038FAA;
    _co_08038FAA = cpsr_c();
    uint32_t _rn_08038FAA = g_cpu.R[0];
    uint32_t _r_08038FAA;
    _r_08038FAA = _rn_08038FAA & _op2_08038FAA;
    arm_set_nzc_logic(_r_08038FAA, _co_08038FAA);
    g_cpu.R[0] = _r_08038FAA;
    g_cpu.R[15] = 0x08038FACu;
    runtime_tick(_cyc_08038FAA);
    }
L_08038FAC:
    /* 08038FAC  08038fac T adds r1,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08038FACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FAC = 1u;
    _cyc_08038FAC = 1u;
    uint32_t _rn_08038FAC = g_cpu.R[4];
    uint32_t _r_08038FAC;
    _r_08038FAC = _rn_08038FAC + 0x00000000u;
    arm_set_nzcv_add(_rn_08038FAC, 0x00000000u, _r_08038FAC);
    g_cpu.R[1] = _r_08038FAC;
    g_cpu.R[15] = 0x08038FAEu;
    runtime_tick(_cyc_08038FAC);
    }
L_08038FAE:
    /* 08038FAE  08038fae T adds r1,r1,#0x21 */
    {
    g_cpu.R[15] = 0x08038FAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FAE = 1u;
    _cyc_08038FAE = 1u;
    uint32_t _rn_08038FAE = g_cpu.R[1];
    uint32_t _r_08038FAE;
    _r_08038FAE = _rn_08038FAE + 0x00000021u;
    arm_set_nzcv_add(_rn_08038FAE, 0x00000021u, _r_08038FAE);
    g_cpu.R[1] = _r_08038FAE;
    g_cpu.R[15] = 0x08038FB0u;
    runtime_tick(_cyc_08038FAE);
    }
L_08038FB0:
    /* 08038FB0  08038fb0 T ldrb r1,[r1] */
    {
    g_cpu.R[15] = 0x08038FB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FB0 = 1u;
    _cyc_08038FB0 = 2u;
    uint32_t _base_08038FB0 = g_cpu.R[1];
    uint32_t _off_08038FB0;
    _off_08038FB0 = 0x00000000u;
    uint32_t _ea_08038FB0 = _base_08038FB0 + _off_08038FB0;
    uint32_t _post_08038FB0 = _base_08038FB0 + _off_08038FB0;
    _cyc_08038FB0 += runtime_mem_cycles(_ea_08038FB0, 1u, 0u);
    uint32_t _v_08038FB0;
    _v_08038FB0 = bus_read_u8(_ea_08038FB0);
    g_cpu.R[1] = _v_08038FB0;
    g_cpu.R[15] = 0x08038FB2u;
    runtime_tick(_cyc_08038FB0);
    }
L_08038FB2:
    /* 08038FB2  08038fb2 T adds r0,r1,r0 */
    {
    g_cpu.R[15] = 0x08038FB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FB2 = 1u;
    _cyc_08038FB2 = 1u;
    uint32_t _rm_08038FB2 = g_cpu.R[0];
    uint32_t _op2_08038FB2;
    uint32_t _co_08038FB2;
    _op2_08038FB2 = _rm_08038FB2;
    _co_08038FB2 = cpsr_c();
    uint32_t _rn_08038FB2 = g_cpu.R[1];
    uint32_t _r_08038FB2;
    _r_08038FB2 = _rn_08038FB2 + _op2_08038FB2;
    arm_set_nzcv_add(_rn_08038FB2, _op2_08038FB2, _r_08038FB2);
    g_cpu.R[0] = _r_08038FB2;
    g_cpu.R[15] = 0x08038FB4u;
    runtime_tick(_cyc_08038FB2);
    }
L_08038FB4:
    /* 08038FB4  08038fb4 T strb r0,[r4,#0x1a] */
    {
    g_cpu.R[15] = 0x08038FB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FB4 = 1u;
    _cyc_08038FB4 = 1u;
    uint32_t _base_08038FB4 = g_cpu.R[4];
    uint32_t _off_08038FB4;
    _off_08038FB4 = 0x0000001Au;
    uint32_t _ea_08038FB4 = _base_08038FB4 + _off_08038FB4;
    uint32_t _post_08038FB4 = _base_08038FB4 + _off_08038FB4;
    _cyc_08038FB4 += runtime_mem_cycles(_ea_08038FB4, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038FB4u, _ea_08038FB4, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038FB4, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038FB6u;
    runtime_tick(_cyc_08038FB4);
    }
L_08038FB6:
    /* 08038FB6  08038fb6 T movs r2,#0xff */
    {
    g_cpu.R[15] = 0x08038FB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FB6 = 1u;
    _cyc_08038FB6 = 1u;
    uint32_t _r_08038FB6;
    _r_08038FB6 = 0x000000FFu;
    arm_set_nzc_logic(_r_08038FB6, cpsr_c());
    g_cpu.R[2] = _r_08038FB6;
    g_cpu.R[15] = 0x08038FB8u;
    runtime_tick(_cyc_08038FB6);
    }
L_08038FB8:
    /* 08038FB8  08038fb8 T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038FB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FB8 = 1u;
    _cyc_08038FB8 = 1u;
    uint32_t _rm_08038FB8 = g_cpu.R[2];
    uint32_t _op2_08038FB8;
    uint32_t _co_08038FB8;
    _op2_08038FB8 = _rm_08038FB8;
    _co_08038FB8 = cpsr_c();
    uint32_t _rn_08038FB8 = g_cpu.R[0];
    uint32_t _r_08038FB8;
    _r_08038FB8 = _rn_08038FB8 & _op2_08038FB8;
    arm_set_nzc_logic(_r_08038FB8, _co_08038FB8);
    g_cpu.R[0] = _r_08038FB8;
    g_cpu.R[15] = 0x08038FBAu;
    runtime_tick(_cyc_08038FB8);
    }
L_08038FBA:
    /* 08038FBA  08038fba T ldr r1,[r13,#0x14] */
    {
    g_cpu.R[15] = 0x08038FBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FBA = 1u;
    _cyc_08038FBA = 2u;
    uint32_t _base_08038FBA = g_cpu.R[13];
    uint32_t _off_08038FBA;
    _off_08038FBA = 0x00000014u;
    uint32_t _ea_08038FBA = _base_08038FBA + _off_08038FBA;
    uint32_t _post_08038FBA = _base_08038FBA + _off_08038FBA;
    _cyc_08038FBA += runtime_mem_cycles(_ea_08038FBA, 4u, 0u);
    uint32_t _v_08038FBA;
    { uint32_t _w = bus_read_u32(_ea_08038FBA & ~3u); uint32_t _rot = (_ea_08038FBA & 3u) * 8u; _v_08038FBA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08038FBA;
    g_cpu.R[15] = 0x08038FBCu;
    runtime_tick(_cyc_08038FBA);
    }
L_08038FBC:
    /* 08038FBC  08038fbc T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08038FBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FBC = 1u;
    _cyc_08038FBC = 1u;
    uint32_t _base_08038FBC = g_cpu.R[1];
    uint32_t _off_08038FBC;
    _off_08038FBC = 0x00000000u;
    uint32_t _ea_08038FBC = _base_08038FBC + _off_08038FBC;
    uint32_t _post_08038FBC = _base_08038FBC + _off_08038FBC;
    _cyc_08038FBC += runtime_mem_cycles(_ea_08038FBC, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038FBCu, _ea_08038FBC, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038FBC, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038FBEu;
    runtime_tick(_cyc_08038FBC);
    }
    /* fall-through to 0x08038FBE */
    g_cpu.R[15] = 0x08038FBEu;
    runtime_dispatch(0x08038FBEu);
    return;
}

/* 0x0804B8DE  mode=thumb  end=0x0804B8E6  branches=1 */
void gf_race_0804b8de(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0804B8E0u: goto L_0804B8E0;
        case 0x0804B8E2u: goto L_0804B8E2;
        case 0x0804B8E4u: goto L_0804B8E4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0804B8DEu);
    /* 0804B8DE  0804b8de T ldrb r0,[r5,#0x1f] */
    {
    g_cpu.R[15] = 0x0804B8DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804B8DE = 1u;
    _cyc_0804B8DE = 2u;
    uint32_t _base_0804B8DE = g_cpu.R[5];
    uint32_t _off_0804B8DE;
    _off_0804B8DE = 0x0000001Fu;
    uint32_t _ea_0804B8DE = _base_0804B8DE + _off_0804B8DE;
    uint32_t _post_0804B8DE = _base_0804B8DE + _off_0804B8DE;
    _cyc_0804B8DE += runtime_mem_cycles(_ea_0804B8DE, 1u, 0u);
    uint32_t _v_0804B8DE;
    _v_0804B8DE = bus_read_u8(_ea_0804B8DE);
    g_cpu.R[0] = _v_0804B8DE;
    g_cpu.R[15] = 0x0804B8E0u;
    runtime_tick(_cyc_0804B8DE);
    }
L_0804B8E0:
    /* 0804B8E0  0804b8e0 T adds r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x0804B8E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804B8E0 = 1u;
    _cyc_0804B8E0 = 1u;
    uint32_t _rn_0804B8E0 = g_cpu.R[0];
    uint32_t _r_0804B8E0;
    _r_0804B8E0 = _rn_0804B8E0 + 0x00000001u;
    arm_set_nzcv_add(_rn_0804B8E0, 0x00000001u, _r_0804B8E0);
    g_cpu.R[0] = _r_0804B8E0;
    g_cpu.R[15] = 0x0804B8E2u;
    runtime_tick(_cyc_0804B8E0);
    }
L_0804B8E2:
    /* 0804B8E2  0804b8e2 T strb r0,[r5,#0x1f] */
    {
    g_cpu.R[15] = 0x0804B8E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804B8E2 = 1u;
    _cyc_0804B8E2 = 1u;
    uint32_t _base_0804B8E2 = g_cpu.R[5];
    uint32_t _off_0804B8E2;
    _off_0804B8E2 = 0x0000001Fu;
    uint32_t _ea_0804B8E2 = _base_0804B8E2 + _off_0804B8E2;
    uint32_t _post_0804B8E2 = _base_0804B8E2 + _off_0804B8E2;
    _cyc_0804B8E2 += runtime_mem_cycles(_ea_0804B8E2, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804B8E2u, _ea_0804B8E2, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0804B8E2, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0804B8E4u;
    runtime_tick(_cyc_0804B8E2);
    }
L_0804B8E4:
    /* 0804B8E4  0804b8e4 T b 0x0804b922 */
    {
    g_cpu.R[15] = 0x0804B8E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804B8E4 = 1u;
    _cyc_0804B8E4 = 3u;
    g_cpu.R[15] = 0x0804B922u;
    runtime_tick(_cyc_0804B8E4);
    gf_tfunc_0804B922();
    return;
    g_cpu.R[15] = 0x0804B8E6u;
    runtime_tick(_cyc_0804B8E4);
    }
    /* fall-through to 0x0804B8E6 */
    g_cpu.R[15] = 0x0804B8E6u;
    runtime_dispatch(0x0804B8E6u);
    return;
}

/* 0x0804D7F6  mode=thumb  end=0x0804D806  branches=23  indirect */
void gf_race_0804d7f6(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0804D7F8u: goto L_0804D7F8;
        case 0x0804D7FAu: goto L_0804D7FA;
        case 0x0804D7FCu: goto L_0804D7FC;
        case 0x0804D7FEu: goto L_0804D7FE;
        case 0x0804D800u: goto L_0804D800;
        case 0x0804D802u: goto L_0804D802;
        case 0x0804D804u: goto L_0804D804;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0804D7F6u);
    /* 0804D7F6  0804d7f6 T movs r2,r2,lsl #1 */
    {
    g_cpu.R[15] = 0x0804D7F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D7F6 = 1u;
    _cyc_0804D7F6 = 1u;
    uint32_t _rm_0804D7F6 = g_cpu.R[2];
    uint32_t _op2_0804D7F6;
    uint32_t _co_0804D7F6;
    _op2_0804D7F6 = _rm_0804D7F6 << 1;
    _co_0804D7F6 = (_rm_0804D7F6 >> 31) & 1u;
    uint32_t _r_0804D7F6;
    _r_0804D7F6 = _op2_0804D7F6;
    arm_set_nzc_logic(_r_0804D7F6, _co_0804D7F6);
    g_cpu.R[2] = _r_0804D7F6;
    g_cpu.R[15] = 0x0804D7F8u;
    runtime_tick(_cyc_0804D7F6);
    }
L_0804D7F8:
    /* 0804D7F8  0804d7f8 T adds r0,r6,#0x0 */
    {
    g_cpu.R[15] = 0x0804D7F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D7F8 = 1u;
    _cyc_0804D7F8 = 1u;
    uint32_t _rn_0804D7F8 = g_cpu.R[6];
    uint32_t _r_0804D7F8;
    _r_0804D7F8 = _rn_0804D7F8 + 0x00000000u;
    arm_set_nzcv_add(_rn_0804D7F8, 0x00000000u, _r_0804D7F8);
    g_cpu.R[0] = _r_0804D7F8;
    g_cpu.R[15] = 0x0804D7FAu;
    runtime_tick(_cyc_0804D7F8);
    }
L_0804D7FA:
    /* 0804D7FA  0804d7fa T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x0804D7FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D7FA = 1u;
    _cyc_0804D7FA = 1u;
    uint32_t _rm_0804D7FA = g_cpu.R[1];
    uint32_t _op2_0804D7FA;
    uint32_t _co_0804D7FA;
    _op2_0804D7FA = _rm_0804D7FA;
    _co_0804D7FA = cpsr_c();
    uint32_t _rn_0804D7FA = g_cpu.R[0];
    uint32_t _r_0804D7FA;
    _r_0804D7FA = _rn_0804D7FA & _op2_0804D7FA;
    arm_set_nzc_logic(_r_0804D7FA, _co_0804D7FA);
    g_cpu.R[0] = _r_0804D7FA;
    g_cpu.R[15] = 0x0804D7FCu;
    runtime_tick(_cyc_0804D7FA);
    }
L_0804D7FC:
    /* 0804D7FC  0804d7fc T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x0804D7FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D7FC = 1u;
    _cyc_0804D7FC = 1u;
    uint32_t _rn_0804D7FC = g_cpu.R[0];
    uint32_t _r_0804D7FC;
    _r_0804D7FC = _rn_0804D7FC - 0x00000000u;
    arm_set_nzcv_sub(_rn_0804D7FC, 0x00000000u, _r_0804D7FC);
    g_cpu.R[15] = 0x0804D7FEu;
    runtime_tick(_cyc_0804D7FC);
    }
L_0804D7FE:
    /* 0804D7FE  0804d7fe T beq 0x0804d806 */
    {
    g_cpu.R[15] = 0x0804D7FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D7FE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0804D7FE = 3u;
        g_cpu.R[15] = 0x0804D806u;
        runtime_tick(_cyc_0804D7FE);
        gf_tfunc_0804D806();
        return;
    }
    g_cpu.R[15] = 0x0804D800u;
    runtime_tick(_cyc_0804D7FE);
    }
L_0804D800:
    /* 0804D800  0804d800 T ldr r0,[r13,#0xc] */
    {
    g_cpu.R[15] = 0x0804D800u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D800 = 1u;
    _cyc_0804D800 = 2u;
    uint32_t _base_0804D800 = g_cpu.R[13];
    uint32_t _off_0804D800;
    _off_0804D800 = 0x0000000Cu;
    uint32_t _ea_0804D800 = _base_0804D800 + _off_0804D800;
    uint32_t _post_0804D800 = _base_0804D800 + _off_0804D800;
    _cyc_0804D800 += runtime_mem_cycles(_ea_0804D800, 4u, 0u);
    uint32_t _v_0804D800;
    { uint32_t _w = bus_read_u32(_ea_0804D800 & ~3u); uint32_t _rot = (_ea_0804D800 & 3u) * 8u; _v_0804D800 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0804D800;
    g_cpu.R[15] = 0x0804D802u;
    runtime_tick(_cyc_0804D800);
    }
L_0804D802:
    /* 0804D802  0804d802 T orrs r0,r0,r2 */
    {
    g_cpu.R[15] = 0x0804D802u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D802 = 1u;
    _cyc_0804D802 = 1u;
    uint32_t _rm_0804D802 = g_cpu.R[2];
    uint32_t _op2_0804D802;
    uint32_t _co_0804D802;
    _op2_0804D802 = _rm_0804D802;
    _co_0804D802 = cpsr_c();
    uint32_t _rn_0804D802 = g_cpu.R[0];
    uint32_t _r_0804D802;
    _r_0804D802 = _rn_0804D802 | _op2_0804D802;
    arm_set_nzc_logic(_r_0804D802, _co_0804D802);
    g_cpu.R[0] = _r_0804D802;
    g_cpu.R[15] = 0x0804D804u;
    runtime_tick(_cyc_0804D802);
    }
L_0804D804:
    /* 0804D804  0804d804 T str r0,[r13,#0xc] */
    {
    g_cpu.R[15] = 0x0804D804u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D804 = 1u;
    _cyc_0804D804 = 1u;
    uint32_t _base_0804D804 = g_cpu.R[13];
    uint32_t _off_0804D804;
    _off_0804D804 = 0x0000000Cu;
    uint32_t _ea_0804D804 = _base_0804D804 + _off_0804D804;
    uint32_t _post_0804D804 = _base_0804D804 + _off_0804D804;
    _cyc_0804D804 += runtime_mem_cycles(_ea_0804D804, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804D804u, _ea_0804D804 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_0804D804 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x0804D806u;
    runtime_tick(_cyc_0804D804);
    }
    /* fall-through to 0x0804D806 */
    g_cpu.R[15] = 0x0804D806u;
    runtime_dispatch(0x0804D806u);
    return;
}

/* 0x08037CCC  mode=thumb  end=0x08037CD6  branches=2  indirect */
void gf_race_08037ccc(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037CCEu: goto L_08037CCE;
        case 0x08037CD0u: goto L_08037CD0;
        case 0x08037CD2u: goto L_08037CD2;
        case 0x08037CD4u: goto L_08037CD4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037CCCu);
    /* 08037CCC  08037ccc T ldrb r0,[r5] */
    {
    g_cpu.R[15] = 0x08037CCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037CCC = 1u;
    _cyc_08037CCC = 2u;
    uint32_t _base_08037CCC = g_cpu.R[5];
    uint32_t _off_08037CCC;
    _off_08037CCC = 0x00000000u;
    uint32_t _ea_08037CCC = _base_08037CCC + _off_08037CCC;
    uint32_t _post_08037CCC = _base_08037CCC + _off_08037CCC;
    _cyc_08037CCC += runtime_mem_cycles(_ea_08037CCC, 1u, 0u);
    uint32_t _v_08037CCC;
    _v_08037CCC = bus_read_u8(_ea_08037CCC);
    g_cpu.R[0] = _v_08037CCC;
    g_cpu.R[15] = 0x08037CCEu;
    runtime_tick(_cyc_08037CCC);
    }
L_08037CCE:
    /* 08037CCE  08037cce T movs r1,#0xf0 */
    {
    g_cpu.R[15] = 0x08037CCEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037CCE = 1u;
    _cyc_08037CCE = 1u;
    uint32_t _r_08037CCE;
    _r_08037CCE = 0x000000F0u;
    arm_set_nzc_logic(_r_08037CCE, cpsr_c());
    g_cpu.R[1] = _r_08037CCE;
    g_cpu.R[15] = 0x08037CD0u;
    runtime_tick(_cyc_08037CCE);
    }
L_08037CD0:
    /* 08037CD0  08037cd0 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08037CD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037CD0 = 1u;
    _cyc_08037CD0 = 1u;
    uint32_t _rm_08037CD0 = g_cpu.R[1];
    uint32_t _op2_08037CD0;
    uint32_t _co_08037CD0;
    _op2_08037CD0 = _rm_08037CD0;
    _co_08037CD0 = cpsr_c();
    uint32_t _rn_08037CD0 = g_cpu.R[0];
    uint32_t _r_08037CD0;
    _r_08037CD0 = _rn_08037CD0 & _op2_08037CD0;
    arm_set_nzc_logic(_r_08037CD0, _co_08037CD0);
    g_cpu.R[0] = _r_08037CD0;
    g_cpu.R[15] = 0x08037CD2u;
    runtime_tick(_cyc_08037CD0);
    }
L_08037CD2:
    /* 08037CD2  08037cd2 T strb r0,[r5] */
    {
    g_cpu.R[15] = 0x08037CD2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037CD2 = 1u;
    _cyc_08037CD2 = 1u;
    uint32_t _base_08037CD2 = g_cpu.R[5];
    uint32_t _off_08037CD2;
    _off_08037CD2 = 0x00000000u;
    uint32_t _ea_08037CD2 = _base_08037CD2 + _off_08037CD2;
    uint32_t _post_08037CD2 = _base_08037CD2 + _off_08037CD2;
    _cyc_08037CD2 += runtime_mem_cycles(_ea_08037CD2, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08037CD2u, _ea_08037CD2, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08037CD2, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08037CD4u;
    runtime_tick(_cyc_08037CD2);
    }
L_08037CD4:
    /* 08037CD4  08037cd4 T mov r2,r9 */
    {
    g_cpu.R[15] = 0x08037CD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037CD4 = 1u;
    _cyc_08037CD4 = 1u;
    uint32_t _rm_08037CD4 = g_cpu.R[9];
    uint32_t _op2_08037CD4;
    uint32_t _co_08037CD4;
    _op2_08037CD4 = _rm_08037CD4;
    _co_08037CD4 = cpsr_c();
    uint32_t _r_08037CD4;
    _r_08037CD4 = _op2_08037CD4;
    g_cpu.R[2] = _r_08037CD4;
    g_cpu.R[15] = 0x08037CD6u;
    runtime_tick(_cyc_08037CD4);
    }
    /* fall-through to 0x08037CD6 */
    g_cpu.R[15] = 0x08037CD6u;
    runtime_dispatch(0x08037CD6u);
    return;
}

/* 0x08037F08  mode=thumb  end=0x08037F14  branches=7 */
void gf_race_08037f08(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037F0Au: goto L_08037F0A;
        case 0x08037F0Cu: goto L_08037F0C;
        case 0x08037F0Eu: goto L_08037F0E;
        case 0x08037F10u: goto L_08037F10;
        case 0x08037F12u: goto L_08037F12;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037F08u);
    /* 08037F08  08037f08 T ldrb r1,[r4,#0x8] */
    {
    g_cpu.R[15] = 0x08037F08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F08 = 1u;
    _cyc_08037F08 = 2u;
    uint32_t _base_08037F08 = g_cpu.R[4];
    uint32_t _off_08037F08;
    _off_08037F08 = 0x00000008u;
    uint32_t _ea_08037F08 = _base_08037F08 + _off_08037F08;
    uint32_t _post_08037F08 = _base_08037F08 + _off_08037F08;
    _cyc_08037F08 += runtime_mem_cycles(_ea_08037F08, 1u, 0u);
    uint32_t _v_08037F08;
    _v_08037F08 = bus_read_u8(_ea_08037F08);
    g_cpu.R[1] = _v_08037F08;
    g_cpu.R[15] = 0x08037F0Au;
    runtime_tick(_cyc_08037F08);
    }
L_08037F0A:
    /* 08037F0A  08037f0a T movs r0,#0x8 */
    {
    g_cpu.R[15] = 0x08037F0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F0A = 1u;
    _cyc_08037F0A = 1u;
    uint32_t _r_08037F0A;
    _r_08037F0A = 0x00000008u;
    arm_set_nzc_logic(_r_08037F0A, cpsr_c());
    g_cpu.R[0] = _r_08037F0A;
    g_cpu.R[15] = 0x08037F0Cu;
    runtime_tick(_cyc_08037F0A);
    }
L_08037F0C:
    /* 08037F0C  08037f0c T ldrsb r0,[r5,+r0] */
    {
    g_cpu.R[15] = 0x08037F0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F0C = 1u;
    _cyc_08037F0C = 2u;
    uint32_t _base_08037F0C = g_cpu.R[5];
    uint32_t _off_08037F0C;
    uint32_t _morm_08037F0C = g_cpu.R[0];
    _off_08037F0C = _morm_08037F0C;
    uint32_t _ea_08037F0C = _base_08037F0C + _off_08037F0C;
    uint32_t _post_08037F0C = _base_08037F0C + _off_08037F0C;
    _cyc_08037F0C += runtime_mem_cycles(_ea_08037F0C, 1u, 0u);
    uint32_t _v_08037F0C;
    _v_08037F0C = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08037F0C);
    g_cpu.R[0] = _v_08037F0C;
    g_cpu.R[15] = 0x08037F0Eu;
    runtime_tick(_cyc_08037F0C);
    }
L_08037F0E:
    /* 08037F0E  08037f0e T adds r3,r1,r0 */
    {
    g_cpu.R[15] = 0x08037F0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F0E = 1u;
    _cyc_08037F0E = 1u;
    uint32_t _rm_08037F0E = g_cpu.R[0];
    uint32_t _op2_08037F0E;
    uint32_t _co_08037F0E;
    _op2_08037F0E = _rm_08037F0E;
    _co_08037F0E = cpsr_c();
    uint32_t _rn_08037F0E = g_cpu.R[1];
    uint32_t _r_08037F0E;
    _r_08037F0E = _rn_08037F0E + _op2_08037F0E;
    arm_set_nzcv_add(_rn_08037F0E, _op2_08037F0E, _r_08037F0E);
    g_cpu.R[3] = _r_08037F0E;
    g_cpu.R[15] = 0x08037F10u;
    runtime_tick(_cyc_08037F0E);
    }
L_08037F10:
    /* 08037F10  08037f10 T bpl 0x08037f14 */
    {
    g_cpu.R[15] = 0x08037F10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F10 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08037F10 = 3u;
        g_cpu.R[15] = 0x08037F14u;
        runtime_tick(_cyc_08037F10);
        gf_race_08037f14();
        return;
    }
    g_cpu.R[15] = 0x08037F12u;
    runtime_tick(_cyc_08037F10);
    }
L_08037F12:
    /* 08037F12  08037f12 T movs r3,#0x0 */
    {
    g_cpu.R[15] = 0x08037F12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F12 = 1u;
    _cyc_08037F12 = 1u;
    uint32_t _r_08037F12;
    _r_08037F12 = 0x00000000u;
    arm_set_nzc_logic(_r_08037F12, cpsr_c());
    g_cpu.R[3] = _r_08037F12;
    g_cpu.R[15] = 0x08037F14u;
    runtime_tick(_cyc_08037F12);
    }
    /* fall-through to 0x08037F14 */
    g_cpu.R[15] = 0x08037F14u;
    runtime_dispatch(0x08037F14u);
    return;
}

/* 0x08038CD0  mode=thumb  end=0x08038CD8  branches=8 */
void gf_race_08038cd0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038CD2u: goto L_08038CD2;
        case 0x08038CD4u: goto L_08038CD4;
        case 0x08038CD6u: goto L_08038CD6;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038CD0u);
    /* 08038CD0  08038cd0 T str r2,[r13,#0xc] */
    {
    g_cpu.R[15] = 0x08038CD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038CD0 = 1u;
    _cyc_08038CD0 = 1u;
    uint32_t _base_08038CD0 = g_cpu.R[13];
    uint32_t _off_08038CD0;
    _off_08038CD0 = 0x0000000Cu;
    uint32_t _ea_08038CD0 = _base_08038CD0 + _off_08038CD0;
    uint32_t _post_08038CD0 = _base_08038CD0 + _off_08038CD0;
    _cyc_08038CD0 += runtime_mem_cycles(_ea_08038CD0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038CD0u, _ea_08038CD0 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_08038CD0 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x08038CD2u;
    runtime_tick(_cyc_08038CD0);
    }
L_08038CD2:
    /* 08038CD2  08038cd2 T adds r0,r0,#0xb */
    {
    g_cpu.R[15] = 0x08038CD2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038CD2 = 1u;
    _cyc_08038CD2 = 1u;
    uint32_t _rn_08038CD2 = g_cpu.R[0];
    uint32_t _r_08038CD2;
    _r_08038CD2 = _rn_08038CD2 + 0x0000000Bu;
    arm_set_nzcv_add(_rn_08038CD2, 0x0000000Bu, _r_08038CD2);
    g_cpu.R[0] = _r_08038CD2;
    g_cpu.R[15] = 0x08038CD4u;
    runtime_tick(_cyc_08038CD2);
    }
L_08038CD4:
    /* 08038CD4  08038cd4 T str r0,[r13,#0x10] */
    {
    g_cpu.R[15] = 0x08038CD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038CD4 = 1u;
    _cyc_08038CD4 = 1u;
    uint32_t _base_08038CD4 = g_cpu.R[13];
    uint32_t _off_08038CD4;
    _off_08038CD4 = 0x00000010u;
    uint32_t _ea_08038CD4 = _base_08038CD4 + _off_08038CD4;
    uint32_t _post_08038CD4 = _base_08038CD4 + _off_08038CD4;
    _cyc_08038CD4 += runtime_mem_cycles(_ea_08038CD4, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038CD4u, _ea_08038CD4 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08038CD4 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08038CD6u;
    runtime_tick(_cyc_08038CD4);
    }
L_08038CD6:
    /* 08038CD6  08038cd6 T adds r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x08038CD6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038CD6 = 1u;
    _cyc_08038CD6 = 1u;
    uint32_t _rn_08038CD6 = g_cpu.R[2];
    uint32_t _r_08038CD6;
    _r_08038CD6 = _rn_08038CD6 + 0x00000004u;
    arm_set_nzcv_add(_rn_08038CD6, 0x00000004u, _r_08038CD6);
    g_cpu.R[2] = _r_08038CD6;
    g_cpu.R[15] = 0x08038CD8u;
    runtime_tick(_cyc_08038CD6);
    }
    /* fall-through to 0x08038CD8 */
    g_cpu.R[15] = 0x08038CD8u;
    runtime_dispatch(0x08038CD8u);
    return;
}

/* 0x08038D40  mode=thumb  end=0x08038D4C  branches=1 */
void gf_race_08038d40(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038D42u: goto L_08038D42;
        case 0x08038D44u: goto L_08038D44;
        case 0x08038D46u: goto L_08038D46;
        case 0x08038D48u: goto L_08038D48;
        case 0x08038D4Au: goto L_08038D4A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038D40u);
    /* 08038D40  08038d40 T ldr r0,[r4,#0x24] */
    {
    g_cpu.R[15] = 0x08038D40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D40 = 1u;
    _cyc_08038D40 = 2u;
    uint32_t _base_08038D40 = g_cpu.R[4];
    uint32_t _off_08038D40;
    _off_08038D40 = 0x00000024u;
    uint32_t _ea_08038D40 = _base_08038D40 + _off_08038D40;
    uint32_t _post_08038D40 = _base_08038D40 + _off_08038D40;
    _cyc_08038D40 += runtime_mem_cycles(_ea_08038D40, 4u, 0u);
    uint32_t _v_08038D40;
    { uint32_t _w = bus_read_u32(_ea_08038D40 & ~3u); uint32_t _rot = (_ea_08038D40 & 3u) * 8u; _v_08038D40 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038D40;
    g_cpu.R[15] = 0x08038D42u;
    runtime_tick(_cyc_08038D40);
    }
L_08038D42:
    /* 08038D42  08038d42 T movs r0,r0,lsl #6 */
    {
    g_cpu.R[15] = 0x08038D42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D42 = 1u;
    _cyc_08038D42 = 1u;
    uint32_t _rm_08038D42 = g_cpu.R[0];
    uint32_t _op2_08038D42;
    uint32_t _co_08038D42;
    _op2_08038D42 = _rm_08038D42 << 6;
    _co_08038D42 = (_rm_08038D42 >> 26) & 1u;
    uint32_t _r_08038D42;
    _r_08038D42 = _op2_08038D42;
    arm_set_nzc_logic(_r_08038D42, _co_08038D42);
    g_cpu.R[0] = _r_08038D42;
    g_cpu.R[15] = 0x08038D44u;
    runtime_tick(_cyc_08038D42);
    }
L_08038D44:
    /* 08038D44  08038d44 T ldrb r1,[r4,#0x1e] */
    {
    g_cpu.R[15] = 0x08038D44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D44 = 1u;
    _cyc_08038D44 = 2u;
    uint32_t _base_08038D44 = g_cpu.R[4];
    uint32_t _off_08038D44;
    _off_08038D44 = 0x0000001Eu;
    uint32_t _ea_08038D44 = _base_08038D44 + _off_08038D44;
    uint32_t _post_08038D44 = _base_08038D44 + _off_08038D44;
    _cyc_08038D44 += runtime_mem_cycles(_ea_08038D44, 1u, 0u);
    uint32_t _v_08038D44;
    _v_08038D44 = bus_read_u8(_ea_08038D44);
    g_cpu.R[1] = _v_08038D44;
    g_cpu.R[15] = 0x08038D46u;
    runtime_tick(_cyc_08038D44);
    }
L_08038D46:
    /* 08038D46  08038d46 T adds r0,r1,r0 */
    {
    g_cpu.R[15] = 0x08038D46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D46 = 1u;
    _cyc_08038D46 = 1u;
    uint32_t _rm_08038D46 = g_cpu.R[0];
    uint32_t _op2_08038D46;
    uint32_t _co_08038D46;
    _op2_08038D46 = _rm_08038D46;
    _co_08038D46 = cpsr_c();
    uint32_t _rn_08038D46 = g_cpu.R[1];
    uint32_t _r_08038D46;
    _r_08038D46 = _rn_08038D46 + _op2_08038D46;
    arm_set_nzcv_add(_rn_08038D46, _op2_08038D46, _r_08038D46);
    g_cpu.R[0] = _r_08038D46;
    g_cpu.R[15] = 0x08038D48u;
    runtime_tick(_cyc_08038D46);
    }
L_08038D48:
    /* 08038D48  08038d48 T strb r0,[r7] */
    {
    g_cpu.R[15] = 0x08038D48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D48 = 1u;
    _cyc_08038D48 = 1u;
    uint32_t _base_08038D48 = g_cpu.R[7];
    uint32_t _off_08038D48;
    _off_08038D48 = 0x00000000u;
    uint32_t _ea_08038D48 = _base_08038D48 + _off_08038D48;
    uint32_t _post_08038D48 = _base_08038D48 + _off_08038D48;
    _cyc_08038D48 += runtime_mem_cycles(_ea_08038D48, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038D48u, _ea_08038D48, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038D48, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038D4Au;
    runtime_tick(_cyc_08038D48);
    }
L_08038D4A:
    /* 08038D4A  08038d4a T b 0x08038da0 */
    {
    g_cpu.R[15] = 0x08038D4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D4A = 1u;
    _cyc_08038D4A = 3u;
    g_cpu.R[15] = 0x08038DA0u;
    runtime_tick(_cyc_08038D4A);
    gf_race_08038da0();
    return;
    g_cpu.R[15] = 0x08038D4Cu;
    runtime_tick(_cyc_08038D4A);
    }
    /* fall-through to 0x08038D4C */
    g_cpu.R[15] = 0x08038D4Cu;
    runtime_dispatch(0x08038D4Cu);
    return;
}

/* 0x08038E52  mode=thumb  end=0x08038E58  branches=7 */
void gf_race_08038e52(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038E54u: goto L_08038E54;
        case 0x08038E56u: goto L_08038E56;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038E52u);
    /* 08038E52  08038e52 T adds r0,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08038E52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E52 = 1u;
    _cyc_08038E52 = 1u;
    uint32_t _rn_08038E52 = g_cpu.R[4];
    uint32_t _r_08038E52;
    _r_08038E52 = _rn_08038E52 + 0x00000000u;
    arm_set_nzcv_add(_rn_08038E52, 0x00000000u, _r_08038E52);
    g_cpu.R[0] = _r_08038E52;
    g_cpu.R[15] = 0x08038E54u;
    runtime_tick(_cyc_08038E52);
    }
L_08038E54:
    /* 08038E54  08038e54 T bl.hi 0x08037e58 */
    {
    g_cpu.R[15] = 0x08038E54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E54 = 1u;
    _cyc_08038E54 = 1u;
    g_cpu.R[14] = 0x08037E58u;
    g_cpu.R[15] = 0x08038E56u;
    runtime_tick(_cyc_08038E54);
    }
L_08038E56:
    /* 08038E56  08038e56 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08038E56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E56 = 1u;
    _cyc_08038E56 = 3u;
    uint32_t _blt_08038E56 = (g_cpu.R[14] + 0x00000D58u) & ~1u;
    g_cpu.R[14] = 0x08038E59u;
    g_cpu.R[15] = _blt_08038E56;
    runtime_call_push_return(0x08038E58u);
    runtime_tick(_cyc_08038E56);
    _cyc_08038E56 = 0u;
    runtime_dispatch(_blt_08038E56);
    if (g_cpu.R[15] != 0x08038E58u) { runtime_call_cancel_return(0x08038E58u); return; }
    g_cpu.R[15] = 0x08038E58u;
    runtime_tick(_cyc_08038E56);
    }
    /* fall-through to 0x08038E58 */
    g_cpu.R[15] = 0x08038E58u;
    runtime_dispatch(0x08038E58u);
    return;
}

/* 0x0804ADA0  mode=thumb  end=0x0804ADA2  branches=2 */
void gf_race_init_0804ada0(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0804ADA0u);
    /* 0804ADA0  0804ada0 T movs r7,#0x0 */
    g_cpu.R[15] = 0x0804ADA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804ADA0 = 1u;
    _cyc_0804ADA0 = 1u;
    uint32_t _r_0804ADA0;
    _r_0804ADA0 = 0x00000000u;
    arm_set_nzc_logic(_r_0804ADA0, cpsr_c());
    g_cpu.R[7] = _r_0804ADA0;
    g_cpu.R[15] = 0x0804ADA2u;
    runtime_tick(_cyc_0804ADA0);
    /* fall-through to 0x0804ADA2 */
    g_cpu.R[15] = 0x0804ADA2u;
    runtime_dispatch(0x0804ADA2u);
    return;
}

/* 0x0804D26C  mode=thumb  end=0x0804D286  branches=29 */
void gf_race_0804d26c(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0804D26Eu: goto L_0804D26E;
        case 0x0804D270u: goto L_0804D270;
        case 0x0804D272u: goto L_0804D272;
        case 0x0804D274u: goto L_0804D274;
        case 0x0804D276u: goto L_0804D276;
        case 0x0804D278u: goto L_0804D278;
        case 0x0804D27Au: goto L_0804D27A;
        case 0x0804D27Cu: goto L_0804D27C;
        case 0x0804D27Eu: goto L_0804D27E;
        case 0x0804D280u: goto L_0804D280;
        case 0x0804D282u: goto L_0804D282;
        case 0x0804D284u: goto L_0804D284;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0804D26Cu);
    /* 0804D26C  0804d26c T ldr r1,[r15,#0x68] */
    {
    g_cpu.R[15] = 0x0804D26Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D26C = 1u;
    _cyc_0804D26C = 2u;
    uint32_t _base_0804D26C = 0x0804D270u & ~3u;
    uint32_t _off_0804D26C;
    _off_0804D26C = 0x00000068u;
    uint32_t _ea_0804D26C = _base_0804D26C + _off_0804D26C;
    uint32_t _post_0804D26C = _base_0804D26C + _off_0804D26C;
    _cyc_0804D26C += runtime_mem_cycles(_ea_0804D26C, 4u, 0u);
    uint32_t _v_0804D26C;
    { uint32_t _w = bus_read_u32(_ea_0804D26C & ~3u); uint32_t _rot = (_ea_0804D26C & 3u) * 8u; _v_0804D26C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0804D26C;
    g_cpu.R[15] = 0x0804D26Eu;
    runtime_tick(_cyc_0804D26C);
    }
L_0804D26E:
    /* 0804D26E  0804d26e T adds r7,r6,r1 */
    {
    g_cpu.R[15] = 0x0804D26Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D26E = 1u;
    _cyc_0804D26E = 1u;
    uint32_t _rm_0804D26E = g_cpu.R[1];
    uint32_t _op2_0804D26E;
    uint32_t _co_0804D26E;
    _op2_0804D26E = _rm_0804D26E;
    _co_0804D26E = cpsr_c();
    uint32_t _rn_0804D26E = g_cpu.R[6];
    uint32_t _r_0804D26E;
    _r_0804D26E = _rn_0804D26E + _op2_0804D26E;
    arm_set_nzcv_add(_rn_0804D26E, _op2_0804D26E, _r_0804D26E);
    g_cpu.R[7] = _r_0804D26E;
    g_cpu.R[15] = 0x0804D270u;
    runtime_tick(_cyc_0804D26E);
    }
L_0804D270:
    /* 0804D270  0804d270 T ldrb r1,[r7] */
    {
    g_cpu.R[15] = 0x0804D270u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D270 = 1u;
    _cyc_0804D270 = 2u;
    uint32_t _base_0804D270 = g_cpu.R[7];
    uint32_t _off_0804D270;
    _off_0804D270 = 0x00000000u;
    uint32_t _ea_0804D270 = _base_0804D270 + _off_0804D270;
    uint32_t _post_0804D270 = _base_0804D270 + _off_0804D270;
    _cyc_0804D270 += runtime_mem_cycles(_ea_0804D270, 1u, 0u);
    uint32_t _v_0804D270;
    _v_0804D270 = bus_read_u8(_ea_0804D270);
    g_cpu.R[1] = _v_0804D270;
    g_cpu.R[15] = 0x0804D272u;
    runtime_tick(_cyc_0804D270);
    }
L_0804D272:
    /* 0804D272  0804d272 T movs r4,#0x3 */
    {
    g_cpu.R[15] = 0x0804D272u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D272 = 1u;
    _cyc_0804D272 = 1u;
    uint32_t _r_0804D272;
    _r_0804D272 = 0x00000003u;
    arm_set_nzc_logic(_r_0804D272, cpsr_c());
    g_cpu.R[4] = _r_0804D272;
    g_cpu.R[15] = 0x0804D274u;
    runtime_tick(_cyc_0804D272);
    }
L_0804D274:
    /* 0804D274  0804d274 T rsbs r4,r4,#0x0 */
    {
    g_cpu.R[15] = 0x0804D274u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D274 = 1u;
    _cyc_0804D274 = 1u;
    uint32_t _rn_0804D274 = g_cpu.R[4];
    uint32_t _r_0804D274;
    _r_0804D274 = 0x00000000u - _rn_0804D274;
    arm_set_nzcv_sub(0x00000000u, _rn_0804D274, _r_0804D274);
    g_cpu.R[4] = _r_0804D274;
    g_cpu.R[15] = 0x0804D276u;
    runtime_tick(_cyc_0804D274);
    }
L_0804D276:
    /* 0804D276  0804d276 T adds r0,r4,#0x0 */
    {
    g_cpu.R[15] = 0x0804D276u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D276 = 1u;
    _cyc_0804D276 = 1u;
    uint32_t _rn_0804D276 = g_cpu.R[4];
    uint32_t _r_0804D276;
    _r_0804D276 = _rn_0804D276 + 0x00000000u;
    arm_set_nzcv_add(_rn_0804D276, 0x00000000u, _r_0804D276);
    g_cpu.R[0] = _r_0804D276;
    g_cpu.R[15] = 0x0804D278u;
    runtime_tick(_cyc_0804D276);
    }
L_0804D278:
    /* 0804D278  0804d278 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x0804D278u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D278 = 1u;
    _cyc_0804D278 = 1u;
    uint32_t _rm_0804D278 = g_cpu.R[1];
    uint32_t _op2_0804D278;
    uint32_t _co_0804D278;
    _op2_0804D278 = _rm_0804D278;
    _co_0804D278 = cpsr_c();
    uint32_t _rn_0804D278 = g_cpu.R[0];
    uint32_t _r_0804D278;
    _r_0804D278 = _rn_0804D278 & _op2_0804D278;
    arm_set_nzc_logic(_r_0804D278, _co_0804D278);
    g_cpu.R[0] = _r_0804D278;
    g_cpu.R[15] = 0x0804D27Au;
    runtime_tick(_cyc_0804D278);
    }
L_0804D27A:
    /* 0804D27A  0804d27a T strb r0,[r7] */
    {
    g_cpu.R[15] = 0x0804D27Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D27A = 1u;
    _cyc_0804D27A = 1u;
    uint32_t _base_0804D27A = g_cpu.R[7];
    uint32_t _off_0804D27A;
    _off_0804D27A = 0x00000000u;
    uint32_t _ea_0804D27A = _base_0804D27A + _off_0804D27A;
    uint32_t _post_0804D27A = _base_0804D27A + _off_0804D27A;
    _cyc_0804D27A += runtime_mem_cycles(_ea_0804D27A, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804D27Au, _ea_0804D27A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0804D27A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0804D27Cu;
    runtime_tick(_cyc_0804D27A);
    }
L_0804D27C:
    /* 0804D27C  0804d27c T ldr r5,[r15,#0x5c] */
    {
    g_cpu.R[15] = 0x0804D27Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D27C = 1u;
    _cyc_0804D27C = 2u;
    uint32_t _base_0804D27C = 0x0804D280u & ~3u;
    uint32_t _off_0804D27C;
    _off_0804D27C = 0x0000005Cu;
    uint32_t _ea_0804D27C = _base_0804D27C + _off_0804D27C;
    uint32_t _post_0804D27C = _base_0804D27C + _off_0804D27C;
    _cyc_0804D27C += runtime_mem_cycles(_ea_0804D27C, 4u, 0u);
    uint32_t _v_0804D27C;
    { uint32_t _w = bus_read_u32(_ea_0804D27C & ~3u); uint32_t _rot = (_ea_0804D27C & 3u) * 8u; _v_0804D27C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_0804D27C;
    g_cpu.R[15] = 0x0804D27Eu;
    runtime_tick(_cyc_0804D27C);
    }
L_0804D27E:
    /* 0804D27E  0804d27e T mov r2,r9 */
    {
    g_cpu.R[15] = 0x0804D27Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D27E = 1u;
    _cyc_0804D27E = 1u;
    uint32_t _rm_0804D27E = g_cpu.R[9];
    uint32_t _op2_0804D27E;
    uint32_t _co_0804D27E;
    _op2_0804D27E = _rm_0804D27E;
    _co_0804D27E = cpsr_c();
    uint32_t _r_0804D27E;
    _r_0804D27E = _op2_0804D27E;
    g_cpu.R[2] = _r_0804D27E;
    g_cpu.R[15] = 0x0804D280u;
    runtime_tick(_cyc_0804D27E);
    }
L_0804D280:
    /* 0804D280  0804d280 T str r2,[r5] */
    {
    g_cpu.R[15] = 0x0804D280u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D280 = 1u;
    _cyc_0804D280 = 1u;
    uint32_t _base_0804D280 = g_cpu.R[5];
    uint32_t _off_0804D280;
    _off_0804D280 = 0x00000000u;
    uint32_t _ea_0804D280 = _base_0804D280 + _off_0804D280;
    uint32_t _post_0804D280 = _base_0804D280 + _off_0804D280;
    _cyc_0804D280 += runtime_mem_cycles(_ea_0804D280, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804D280u, _ea_0804D280 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_0804D280 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x0804D282u;
    runtime_tick(_cyc_0804D280);
    }
L_0804D282:
    /* 0804D282  0804d282 T bl.hi 0x08038286 */
    {
    g_cpu.R[15] = 0x0804D282u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D282 = 1u;
    _cyc_0804D282 = 1u;
    g_cpu.R[14] = 0x08038286u;
    g_cpu.R[15] = 0x0804D284u;
    runtime_tick(_cyc_0804D282);
    }
L_0804D284:
    /* 0804D284  0804d284 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x0804D284u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D284 = 1u;
    _cyc_0804D284 = 3u;
    uint32_t _blt_0804D284 = (g_cpu.R[14] + 0x0000047Eu) & ~1u;
    g_cpu.R[14] = 0x0804D287u;
    g_cpu.R[15] = _blt_0804D284;
    runtime_call_push_return(0x0804D286u);
    runtime_tick(_cyc_0804D284);
    _cyc_0804D284 = 0u;
    runtime_dispatch(_blt_0804D284);
    if (g_cpu.R[15] != 0x0804D286u) { runtime_call_cancel_return(0x0804D286u); return; }
    g_cpu.R[15] = 0x0804D286u;
    runtime_tick(_cyc_0804D284);
    }
    /* fall-through to 0x0804D286 */
    g_cpu.R[15] = 0x0804D286u;
    runtime_dispatch(0x0804D286u);
    return;
}

/* 0x08037C88  mode=thumb  end=0x08037C9C  branches=6 */
void gf_race_08037c88(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037C8Au: goto L_08037C8A;
        case 0x08037C8Cu: goto L_08037C8C;
        case 0x08037C8Eu: goto L_08037C8E;
        case 0x08037C90u: goto L_08037C90;
        case 0x08037C92u: goto L_08037C92;
        case 0x08037C94u: goto L_08037C94;
        case 0x08037C96u: goto L_08037C96;
        case 0x08037C98u: goto L_08037C98;
        case 0x08037C9Au: goto L_08037C9A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037C88u);
    /* 08037C88  08037c88 T ldrb r3,[r5] */
    {
    g_cpu.R[15] = 0x08037C88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C88 = 1u;
    _cyc_08037C88 = 2u;
    uint32_t _base_08037C88 = g_cpu.R[5];
    uint32_t _off_08037C88;
    _off_08037C88 = 0x00000000u;
    uint32_t _ea_08037C88 = _base_08037C88 + _off_08037C88;
    uint32_t _post_08037C88 = _base_08037C88 + _off_08037C88;
    _cyc_08037C88 += runtime_mem_cycles(_ea_08037C88, 1u, 0u);
    uint32_t _v_08037C88;
    _v_08037C88 = bus_read_u8(_ea_08037C88);
    g_cpu.R[3] = _v_08037C88;
    g_cpu.R[15] = 0x08037C8Au;
    runtime_tick(_cyc_08037C88);
    }
L_08037C8A:
    /* 08037C8A  08037c8a T movs r0,#0xc */
    {
    g_cpu.R[15] = 0x08037C8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C8A = 1u;
    _cyc_08037C8A = 1u;
    uint32_t _r_08037C8A;
    _r_08037C8A = 0x0000000Cu;
    arm_set_nzc_logic(_r_08037C8A, cpsr_c());
    g_cpu.R[0] = _r_08037C8A;
    g_cpu.R[15] = 0x08037C8Cu;
    runtime_tick(_cyc_08037C8A);
    }
L_08037C8C:
    /* 08037C8C  08037c8c T tsts r0,r3 */
    {
    g_cpu.R[15] = 0x08037C8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C8C = 1u;
    _cyc_08037C8C = 1u;
    uint32_t _rm_08037C8C = g_cpu.R[3];
    uint32_t _op2_08037C8C;
    uint32_t _co_08037C8C;
    _op2_08037C8C = _rm_08037C8C;
    _co_08037C8C = cpsr_c();
    uint32_t _rn_08037C8C = g_cpu.R[0];
    uint32_t _r_08037C8C;
    _r_08037C8C = _rn_08037C8C & _op2_08037C8C;
    arm_set_nzc_logic(_r_08037C8C, _co_08037C8C);
    g_cpu.R[15] = 0x08037C8Eu;
    runtime_tick(_cyc_08037C8C);
    }
L_08037C8E:
    /* 08037C8E  08037c8e T beq 0x08037cc6 */
    {
    g_cpu.R[15] = 0x08037C8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C8E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08037C8E = 3u;
        g_cpu.R[15] = 0x08037CC6u;
        runtime_tick(_cyc_08037C8E);
        gf_tfunc_08037CC6();
        return;
    }
    g_cpu.R[15] = 0x08037C90u;
    runtime_tick(_cyc_08037C8E);
    }
L_08037C90:
    /* 08037C90  08037c90 T ldrb r1,[r4,#0x8] */
    {
    g_cpu.R[15] = 0x08037C90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C90 = 1u;
    _cyc_08037C90 = 2u;
    uint32_t _base_08037C90 = g_cpu.R[4];
    uint32_t _off_08037C90;
    _off_08037C90 = 0x00000008u;
    uint32_t _ea_08037C90 = _base_08037C90 + _off_08037C90;
    uint32_t _post_08037C90 = _base_08037C90 + _off_08037C90;
    _cyc_08037C90 += runtime_mem_cycles(_ea_08037C90, 1u, 0u);
    uint32_t _v_08037C90;
    _v_08037C90 = bus_read_u8(_ea_08037C90);
    g_cpu.R[1] = _v_08037C90;
    g_cpu.R[15] = 0x08037C92u;
    runtime_tick(_cyc_08037C90);
    }
L_08037C92:
    /* 08037C92  08037c92 T movs r0,#0x8 */
    {
    g_cpu.R[15] = 0x08037C92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C92 = 1u;
    _cyc_08037C92 = 1u;
    uint32_t _r_08037C92;
    _r_08037C92 = 0x00000008u;
    arm_set_nzc_logic(_r_08037C92, cpsr_c());
    g_cpu.R[0] = _r_08037C92;
    g_cpu.R[15] = 0x08037C94u;
    runtime_tick(_cyc_08037C92);
    }
L_08037C94:
    /* 08037C94  08037c94 T ldrsb r0,[r5,+r0] */
    {
    g_cpu.R[15] = 0x08037C94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C94 = 1u;
    _cyc_08037C94 = 2u;
    uint32_t _base_08037C94 = g_cpu.R[5];
    uint32_t _off_08037C94;
    uint32_t _morm_08037C94 = g_cpu.R[0];
    _off_08037C94 = _morm_08037C94;
    uint32_t _ea_08037C94 = _base_08037C94 + _off_08037C94;
    uint32_t _post_08037C94 = _base_08037C94 + _off_08037C94;
    _cyc_08037C94 += runtime_mem_cycles(_ea_08037C94, 1u, 0u);
    uint32_t _v_08037C94;
    _v_08037C94 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08037C94);
    g_cpu.R[0] = _v_08037C94;
    g_cpu.R[15] = 0x08037C96u;
    runtime_tick(_cyc_08037C94);
    }
L_08037C96:
    /* 08037C96  08037c96 T adds r2,r1,r0 */
    {
    g_cpu.R[15] = 0x08037C96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C96 = 1u;
    _cyc_08037C96 = 1u;
    uint32_t _rm_08037C96 = g_cpu.R[0];
    uint32_t _op2_08037C96;
    uint32_t _co_08037C96;
    _op2_08037C96 = _rm_08037C96;
    _co_08037C96 = cpsr_c();
    uint32_t _rn_08037C96 = g_cpu.R[1];
    uint32_t _r_08037C96;
    _r_08037C96 = _rn_08037C96 + _op2_08037C96;
    arm_set_nzcv_add(_rn_08037C96, _op2_08037C96, _r_08037C96);
    g_cpu.R[2] = _r_08037C96;
    g_cpu.R[15] = 0x08037C98u;
    runtime_tick(_cyc_08037C96);
    }
L_08037C98:
    /* 08037C98  08037c98 T bpl 0x08037c9c */
    {
    g_cpu.R[15] = 0x08037C98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C98 = 1u;
    if (arm_cond_passes(0x5u)) {
        _cyc_08037C98 = 3u;
        g_cpu.R[15] = 0x08037C9Cu;
        runtime_tick(_cyc_08037C98);
        gf_tfunc_08037C9C();
        return;
    }
    g_cpu.R[15] = 0x08037C9Au;
    runtime_tick(_cyc_08037C98);
    }
L_08037C9A:
    /* 08037C9A  08037c9a T movs r2,#0x0 */
    {
    g_cpu.R[15] = 0x08037C9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C9A = 1u;
    _cyc_08037C9A = 1u;
    uint32_t _r_08037C9A;
    _r_08037C9A = 0x00000000u;
    arm_set_nzc_logic(_r_08037C9A, cpsr_c());
    g_cpu.R[2] = _r_08037C9A;
    g_cpu.R[15] = 0x08037C9Cu;
    runtime_tick(_cyc_08037C9A);
    }
    /* fall-through to 0x08037C9C */
    g_cpu.R[15] = 0x08037C9Cu;
    runtime_dispatch(0x08037C9Cu);
    return;
}

/* 0x08037F2E  mode=thumb  end=0x08037F30  branches=3 */
void gf_race_08037f2e(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037F2Eu);
    /* 08037F2E  08037f2e T movs r1,#0x8 */
    g_cpu.R[15] = 0x08037F2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F2E = 1u;
    _cyc_08037F2E = 1u;
    uint32_t _r_08037F2E;
    _r_08037F2E = 0x00000008u;
    arm_set_nzc_logic(_r_08037F2E, cpsr_c());
    g_cpu.R[1] = _r_08037F2E;
    g_cpu.R[15] = 0x08037F30u;
    runtime_tick(_cyc_08037F2E);
    /* fall-through to 0x08037F30 */
    g_cpu.R[15] = 0x08037F30u;
    runtime_dispatch(0x08037F30u);
    return;
}

/* 0x08038004  mode=thumb  end=0x08038018  branches=5  indirect */
void gf_race_08038004(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038006u: goto L_08038006;
        case 0x08038008u: goto L_08038008;
        case 0x0803800Au: goto L_0803800A;
        case 0x0803800Cu: goto L_0803800C;
        case 0x0803800Eu: goto L_0803800E;
        case 0x08038010u: goto L_08038010;
        case 0x08038012u: goto L_08038012;
        case 0x08038014u: goto L_08038014;
        case 0x08038016u: goto L_08038016;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038004u);
    /* 08038004  08038004 T stm r13!,{r4,r5,r6,r7,r14} */
    {
    g_cpu.R[15] = 0x08038004u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038004 = 1u;
    _cyc_08038004 = 1u;
    uint32_t _b_08038004 = g_cpu.R[13];
    uint32_t _a_08038004 = _b_08038004 - 20u;
    uint32_t _fb_08038004 = _b_08038004 - 20u;
    _cyc_08038004 += runtime_mem_cycles(_a_08038004 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038004u, _a_08038004 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_08038004 & ~3u, g_cpu.R[4]);
    _a_08038004 += 4u;
    _cyc_08038004 += runtime_mem_cycles(_a_08038004 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038004u, _a_08038004 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08038004 & ~3u, g_cpu.R[5]);
    _a_08038004 += 4u;
    _cyc_08038004 += runtime_mem_cycles(_a_08038004 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038004u, _a_08038004 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_08038004 & ~3u, g_cpu.R[6]);
    _a_08038004 += 4u;
    _cyc_08038004 += runtime_mem_cycles(_a_08038004 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038004u, _a_08038004 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08038004 & ~3u, g_cpu.R[7]);
    _a_08038004 += 4u;
    _cyc_08038004 += runtime_mem_cycles(_a_08038004 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038004u, _a_08038004 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08038004 & ~3u, g_cpu.R[14]);
    _a_08038004 += 4u;
    g_cpu.R[13] = _fb_08038004;
    g_cpu.R[15] = 0x08038006u;
    runtime_tick(_cyc_08038004);
    }
L_08038006:
    /* 08038006  08038006 T mov r12,r0 */
    {
    g_cpu.R[15] = 0x08038006u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038006 = 1u;
    _cyc_08038006 = 1u;
    uint32_t _rm_08038006 = g_cpu.R[0];
    uint32_t _op2_08038006;
    uint32_t _co_08038006;
    _op2_08038006 = _rm_08038006;
    _co_08038006 = cpsr_c();
    uint32_t _r_08038006;
    _r_08038006 = _op2_08038006;
    g_cpu.R[12] = _r_08038006;
    g_cpu.R[15] = 0x08038008u;
    runtime_tick(_cyc_08038006);
    }
L_08038008:
    /* 08038008  08038008 T movs r1,r1,lsl #24 */
    {
    g_cpu.R[15] = 0x08038008u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038008 = 1u;
    _cyc_08038008 = 1u;
    uint32_t _rm_08038008 = g_cpu.R[1];
    uint32_t _op2_08038008;
    uint32_t _co_08038008;
    _op2_08038008 = _rm_08038008 << 24;
    _co_08038008 = (_rm_08038008 >> 8) & 1u;
    uint32_t _r_08038008;
    _r_08038008 = _op2_08038008;
    arm_set_nzc_logic(_r_08038008, _co_08038008);
    g_cpu.R[1] = _r_08038008;
    g_cpu.R[15] = 0x0803800Au;
    runtime_tick(_cyc_08038008);
    }
L_0803800A:
    /* 0803800A  0803800a T movs r6,r1,lsr #24 */
    {
    g_cpu.R[15] = 0x0803800Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803800A = 1u;
    _cyc_0803800A = 1u;
    uint32_t _rm_0803800A = g_cpu.R[1];
    uint32_t _op2_0803800A;
    uint32_t _co_0803800A;
    _op2_0803800A = _rm_0803800A >> 24;
    _co_0803800A = (_rm_0803800A >> 23) & 1u;
    uint32_t _r_0803800A;
    _r_0803800A = _op2_0803800A;
    arm_set_nzc_logic(_r_0803800A, _co_0803800A);
    g_cpu.R[6] = _r_0803800A;
    g_cpu.R[15] = 0x0803800Cu;
    runtime_tick(_cyc_0803800A);
    }
L_0803800C:
    /* 0803800C  0803800c T movs r7,r2,lsl #24 */
    {
    g_cpu.R[15] = 0x0803800Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803800C = 1u;
    _cyc_0803800C = 1u;
    uint32_t _rm_0803800C = g_cpu.R[2];
    uint32_t _op2_0803800C;
    uint32_t _co_0803800C;
    _op2_0803800C = _rm_0803800C << 24;
    _co_0803800C = (_rm_0803800C >> 8) & 1u;
    uint32_t _r_0803800C;
    _r_0803800C = _op2_0803800C;
    arm_set_nzc_logic(_r_0803800C, _co_0803800C);
    g_cpu.R[7] = _r_0803800C;
    g_cpu.R[15] = 0x0803800Eu;
    runtime_tick(_cyc_0803800C);
    }
L_0803800E:
    /* 0803800E  0803800e T cmps r6,#0xb2 */
    {
    g_cpu.R[15] = 0x0803800Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803800E = 1u;
    _cyc_0803800E = 1u;
    uint32_t _rn_0803800E = g_cpu.R[6];
    uint32_t _r_0803800E;
    _r_0803800E = _rn_0803800E - 0x000000B2u;
    arm_set_nzcv_sub(_rn_0803800E, 0x000000B2u, _r_0803800E);
    g_cpu.R[15] = 0x08038010u;
    runtime_tick(_cyc_0803800E);
    }
L_08038010:
    /* 08038010  08038010 T bls 0x08038018 */
    {
    g_cpu.R[15] = 0x08038010u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038010 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08038010 = 3u;
        g_cpu.R[15] = 0x08038018u;
        runtime_tick(_cyc_08038010);
        gf_race_08038018();
        return;
    }
    g_cpu.R[15] = 0x08038012u;
    runtime_tick(_cyc_08038010);
    }
L_08038012:
    /* 08038012  08038012 T movs r6,#0xb2 */
    {
    g_cpu.R[15] = 0x08038012u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038012 = 1u;
    _cyc_08038012 = 1u;
    uint32_t _r_08038012;
    _r_08038012 = 0x000000B2u;
    arm_set_nzc_logic(_r_08038012, cpsr_c());
    g_cpu.R[6] = _r_08038012;
    g_cpu.R[15] = 0x08038014u;
    runtime_tick(_cyc_08038012);
    }
L_08038014:
    /* 08038014  08038014 T movs r7,#0xff */
    {
    g_cpu.R[15] = 0x08038014u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038014 = 1u;
    _cyc_08038014 = 1u;
    uint32_t _r_08038014;
    _r_08038014 = 0x000000FFu;
    arm_set_nzc_logic(_r_08038014, cpsr_c());
    g_cpu.R[7] = _r_08038014;
    g_cpu.R[15] = 0x08038016u;
    runtime_tick(_cyc_08038014);
    }
L_08038016:
    /* 08038016  08038016 T movs r7,r7,lsl #24 */
    {
    g_cpu.R[15] = 0x08038016u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038016 = 1u;
    _cyc_08038016 = 1u;
    uint32_t _rm_08038016 = g_cpu.R[7];
    uint32_t _op2_08038016;
    uint32_t _co_08038016;
    _op2_08038016 = _rm_08038016 << 24;
    _co_08038016 = (_rm_08038016 >> 8) & 1u;
    uint32_t _r_08038016;
    _r_08038016 = _op2_08038016;
    arm_set_nzc_logic(_r_08038016, _co_08038016);
    g_cpu.R[7] = _r_08038016;
    g_cpu.R[15] = 0x08038018u;
    runtime_tick(_cyc_08038016);
    }
    /* fall-through to 0x08038018 */
    g_cpu.R[15] = 0x08038018u;
    runtime_dispatch(0x08038018u);
    return;
}

/* 0x08038018  mode=thumb  end=0x08038050  branches=4  indirect */
void gf_race_08038018(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0803801Au: goto L_0803801A;
        case 0x0803801Cu: goto L_0803801C;
        case 0x0803801Eu: goto L_0803801E;
        case 0x08038020u: goto L_08038020;
        case 0x08038022u: goto L_08038022;
        case 0x08038024u: goto L_08038024;
        case 0x08038026u: goto L_08038026;
        case 0x08038028u: goto L_08038028;
        case 0x0803802Au: goto L_0803802A;
        case 0x0803802Cu: goto L_0803802C;
        case 0x0803802Eu: goto L_0803802E;
        case 0x08038030u: goto L_08038030;
        case 0x08038032u: goto L_08038032;
        case 0x08038034u: goto L_08038034;
        case 0x08038036u: goto L_08038036;
        case 0x08038038u: goto L_08038038;
        case 0x0803803Au: goto L_0803803A;
        case 0x0803803Cu: goto L_0803803C;
        case 0x0803803Eu: goto L_0803803E;
        case 0x08038040u: goto L_08038040;
        case 0x08038042u: goto L_08038042;
        case 0x08038044u: goto L_08038044;
        case 0x08038046u: goto L_08038046;
        case 0x08038048u: goto L_08038048;
        case 0x0803804Au: goto L_0803804A;
        case 0x0803804Cu: goto L_0803804C;
        case 0x0803804Eu: goto L_0803804E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038018u);
    /* 08038018  08038018 T ldr r3,[r15,#0x44] */
    {
    g_cpu.R[15] = 0x08038018u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038018 = 1u;
    _cyc_08038018 = 2u;
    uint32_t _base_08038018 = 0x0803801Cu & ~3u;
    uint32_t _off_08038018;
    _off_08038018 = 0x00000044u;
    uint32_t _ea_08038018 = _base_08038018 + _off_08038018;
    uint32_t _post_08038018 = _base_08038018 + _off_08038018;
    _cyc_08038018 += runtime_mem_cycles(_ea_08038018, 4u, 0u);
    uint32_t _v_08038018;
    { uint32_t _w = bus_read_u32(_ea_08038018 & ~3u); uint32_t _rot = (_ea_08038018 & 3u) * 8u; _v_08038018 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08038018;
    g_cpu.R[15] = 0x0803801Au;
    runtime_tick(_cyc_08038018);
    }
L_0803801A:
    /* 0803801A  0803801a T adds r0,r6,r3 */
    {
    g_cpu.R[15] = 0x0803801Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803801A = 1u;
    _cyc_0803801A = 1u;
    uint32_t _rm_0803801A = g_cpu.R[3];
    uint32_t _op2_0803801A;
    uint32_t _co_0803801A;
    _op2_0803801A = _rm_0803801A;
    _co_0803801A = cpsr_c();
    uint32_t _rn_0803801A = g_cpu.R[6];
    uint32_t _r_0803801A;
    _r_0803801A = _rn_0803801A + _op2_0803801A;
    arm_set_nzcv_add(_rn_0803801A, _op2_0803801A, _r_0803801A);
    g_cpu.R[0] = _r_0803801A;
    g_cpu.R[15] = 0x0803801Cu;
    runtime_tick(_cyc_0803801A);
    }
L_0803801C:
    /* 0803801C  0803801c T ldrb r5,[r0] */
    {
    g_cpu.R[15] = 0x0803801Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803801C = 1u;
    _cyc_0803801C = 2u;
    uint32_t _base_0803801C = g_cpu.R[0];
    uint32_t _off_0803801C;
    _off_0803801C = 0x00000000u;
    uint32_t _ea_0803801C = _base_0803801C + _off_0803801C;
    uint32_t _post_0803801C = _base_0803801C + _off_0803801C;
    _cyc_0803801C += runtime_mem_cycles(_ea_0803801C, 1u, 0u);
    uint32_t _v_0803801C;
    _v_0803801C = bus_read_u8(_ea_0803801C);
    g_cpu.R[5] = _v_0803801C;
    g_cpu.R[15] = 0x0803801Eu;
    runtime_tick(_cyc_0803801C);
    }
L_0803801E:
    /* 0803801E  0803801e T ldr r4,[r15,#0x44] */
    {
    g_cpu.R[15] = 0x0803801Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803801E = 1u;
    _cyc_0803801E = 2u;
    uint32_t _base_0803801E = 0x08038022u & ~3u;
    uint32_t _off_0803801E;
    _off_0803801E = 0x00000044u;
    uint32_t _ea_0803801E = _base_0803801E + _off_0803801E;
    uint32_t _post_0803801E = _base_0803801E + _off_0803801E;
    _cyc_0803801E += runtime_mem_cycles(_ea_0803801E, 4u, 0u);
    uint32_t _v_0803801E;
    { uint32_t _w = bus_read_u32(_ea_0803801E & ~3u); uint32_t _rot = (_ea_0803801E & 3u) * 8u; _v_0803801E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_0803801E;
    g_cpu.R[15] = 0x08038020u;
    runtime_tick(_cyc_0803801E);
    }
L_08038020:
    /* 08038020  08038020 T movs r2,#0xf */
    {
    g_cpu.R[15] = 0x08038020u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038020 = 1u;
    _cyc_08038020 = 1u;
    uint32_t _r_08038020;
    _r_08038020 = 0x0000000Fu;
    arm_set_nzc_logic(_r_08038020, cpsr_c());
    g_cpu.R[2] = _r_08038020;
    g_cpu.R[15] = 0x08038022u;
    runtime_tick(_cyc_08038020);
    }
L_08038022:
    /* 08038022  08038022 T adds r0,r5,#0x0 */
    {
    g_cpu.R[15] = 0x08038022u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038022 = 1u;
    _cyc_08038022 = 1u;
    uint32_t _rn_08038022 = g_cpu.R[5];
    uint32_t _r_08038022;
    _r_08038022 = _rn_08038022 + 0x00000000u;
    arm_set_nzcv_add(_rn_08038022, 0x00000000u, _r_08038022);
    g_cpu.R[0] = _r_08038022;
    g_cpu.R[15] = 0x08038024u;
    runtime_tick(_cyc_08038022);
    }
L_08038024:
    /* 08038024  08038024 T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038024u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038024 = 1u;
    _cyc_08038024 = 1u;
    uint32_t _rm_08038024 = g_cpu.R[2];
    uint32_t _op2_08038024;
    uint32_t _co_08038024;
    _op2_08038024 = _rm_08038024;
    _co_08038024 = cpsr_c();
    uint32_t _rn_08038024 = g_cpu.R[0];
    uint32_t _r_08038024;
    _r_08038024 = _rn_08038024 & _op2_08038024;
    arm_set_nzc_logic(_r_08038024, _co_08038024);
    g_cpu.R[0] = _r_08038024;
    g_cpu.R[15] = 0x08038026u;
    runtime_tick(_cyc_08038024);
    }
L_08038026:
    /* 08038026  08038026 T movs r0,r0,lsl #2 */
    {
    g_cpu.R[15] = 0x08038026u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038026 = 1u;
    _cyc_08038026 = 1u;
    uint32_t _rm_08038026 = g_cpu.R[0];
    uint32_t _op2_08038026;
    uint32_t _co_08038026;
    _op2_08038026 = _rm_08038026 << 2;
    _co_08038026 = (_rm_08038026 >> 30) & 1u;
    uint32_t _r_08038026;
    _r_08038026 = _op2_08038026;
    arm_set_nzc_logic(_r_08038026, _co_08038026);
    g_cpu.R[0] = _r_08038026;
    g_cpu.R[15] = 0x08038028u;
    runtime_tick(_cyc_08038026);
    }
L_08038028:
    /* 08038028  08038028 T adds r0,r0,r4 */
    {
    g_cpu.R[15] = 0x08038028u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038028 = 1u;
    _cyc_08038028 = 1u;
    uint32_t _rm_08038028 = g_cpu.R[4];
    uint32_t _op2_08038028;
    uint32_t _co_08038028;
    _op2_08038028 = _rm_08038028;
    _co_08038028 = cpsr_c();
    uint32_t _rn_08038028 = g_cpu.R[0];
    uint32_t _r_08038028;
    _r_08038028 = _rn_08038028 + _op2_08038028;
    arm_set_nzcv_add(_rn_08038028, _op2_08038028, _r_08038028);
    g_cpu.R[0] = _r_08038028;
    g_cpu.R[15] = 0x0803802Au;
    runtime_tick(_cyc_08038028);
    }
L_0803802A:
    /* 0803802A  0803802a T movs r1,r5,lsr #4 */
    {
    g_cpu.R[15] = 0x0803802Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803802A = 1u;
    _cyc_0803802A = 1u;
    uint32_t _rm_0803802A = g_cpu.R[5];
    uint32_t _op2_0803802A;
    uint32_t _co_0803802A;
    _op2_0803802A = _rm_0803802A >> 4;
    _co_0803802A = (_rm_0803802A >> 3) & 1u;
    uint32_t _r_0803802A;
    _r_0803802A = _op2_0803802A;
    arm_set_nzc_logic(_r_0803802A, _co_0803802A);
    g_cpu.R[1] = _r_0803802A;
    g_cpu.R[15] = 0x0803802Cu;
    runtime_tick(_cyc_0803802A);
    }
L_0803802C:
    /* 0803802C  0803802c T ldr r5,[r0] */
    {
    g_cpu.R[15] = 0x0803802Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803802C = 1u;
    _cyc_0803802C = 2u;
    uint32_t _base_0803802C = g_cpu.R[0];
    uint32_t _off_0803802C;
    _off_0803802C = 0x00000000u;
    uint32_t _ea_0803802C = _base_0803802C + _off_0803802C;
    uint32_t _post_0803802C = _base_0803802C + _off_0803802C;
    _cyc_0803802C += runtime_mem_cycles(_ea_0803802C, 4u, 0u);
    uint32_t _v_0803802C;
    { uint32_t _w = bus_read_u32(_ea_0803802C & ~3u); uint32_t _rot = (_ea_0803802C & 3u) * 8u; _v_0803802C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_0803802C;
    g_cpu.R[15] = 0x0803802Eu;
    runtime_tick(_cyc_0803802C);
    }
L_0803802E:
    /* 0803802E  0803802e T movs r5,r5,lsr r1 */
    {
    g_cpu.R[15] = 0x0803802Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803802E = 1u;
    _cyc_0803802E = 2u;
    uint32_t _rm_0803802E = g_cpu.R[5];
    uint32_t _op2_0803802E;
    uint32_t _co_0803802E;
    uint32_t _cnt_0803802E = (g_cpu.R[1]) & 0xFFu;
    if (_cnt_0803802E == 0)      { _op2_0803802E = _rm_0803802E; _co_0803802E = cpsr_c(); }
    else if (_cnt_0803802E < 32) { _op2_0803802E = _rm_0803802E >> _cnt_0803802E; _co_0803802E = (_rm_0803802E >> (_cnt_0803802E - 1u)) & 1u; }
    else if (_cnt_0803802E == 32){ _op2_0803802E = 0u; _co_0803802E = (_rm_0803802E >> 31) & 1u; }
    else                                { _op2_0803802E = 0u; _co_0803802E = 0u; }
    uint32_t _r_0803802E;
    _r_0803802E = _op2_0803802E;
    arm_set_nzc_logic(_r_0803802E, _co_0803802E);
    g_cpu.R[5] = _r_0803802E;
    g_cpu.R[15] = 0x08038030u;
    runtime_tick(_cyc_0803802E);
    }
L_08038030:
    /* 08038030  08038030 T adds r0,r6,#0x1 */
    {
    g_cpu.R[15] = 0x08038030u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038030 = 1u;
    _cyc_08038030 = 1u;
    uint32_t _rn_08038030 = g_cpu.R[6];
    uint32_t _r_08038030;
    _r_08038030 = _rn_08038030 + 0x00000001u;
    arm_set_nzcv_add(_rn_08038030, 0x00000001u, _r_08038030);
    g_cpu.R[0] = _r_08038030;
    g_cpu.R[15] = 0x08038032u;
    runtime_tick(_cyc_08038030);
    }
L_08038032:
    /* 08038032  08038032 T adds r0,r0,r3 */
    {
    g_cpu.R[15] = 0x08038032u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038032 = 1u;
    _cyc_08038032 = 1u;
    uint32_t _rm_08038032 = g_cpu.R[3];
    uint32_t _op2_08038032;
    uint32_t _co_08038032;
    _op2_08038032 = _rm_08038032;
    _co_08038032 = cpsr_c();
    uint32_t _rn_08038032 = g_cpu.R[0];
    uint32_t _r_08038032;
    _r_08038032 = _rn_08038032 + _op2_08038032;
    arm_set_nzcv_add(_rn_08038032, _op2_08038032, _r_08038032);
    g_cpu.R[0] = _r_08038032;
    g_cpu.R[15] = 0x08038034u;
    runtime_tick(_cyc_08038032);
    }
L_08038034:
    /* 08038034  08038034 T ldrb r1,[r0] */
    {
    g_cpu.R[15] = 0x08038034u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038034 = 1u;
    _cyc_08038034 = 2u;
    uint32_t _base_08038034 = g_cpu.R[0];
    uint32_t _off_08038034;
    _off_08038034 = 0x00000000u;
    uint32_t _ea_08038034 = _base_08038034 + _off_08038034;
    uint32_t _post_08038034 = _base_08038034 + _off_08038034;
    _cyc_08038034 += runtime_mem_cycles(_ea_08038034, 1u, 0u);
    uint32_t _v_08038034;
    _v_08038034 = bus_read_u8(_ea_08038034);
    g_cpu.R[1] = _v_08038034;
    g_cpu.R[15] = 0x08038036u;
    runtime_tick(_cyc_08038034);
    }
L_08038036:
    /* 08038036  08038036 T adds r0,r1,#0x0 */
    {
    g_cpu.R[15] = 0x08038036u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038036 = 1u;
    _cyc_08038036 = 1u;
    uint32_t _rn_08038036 = g_cpu.R[1];
    uint32_t _r_08038036;
    _r_08038036 = _rn_08038036 + 0x00000000u;
    arm_set_nzcv_add(_rn_08038036, 0x00000000u, _r_08038036);
    g_cpu.R[0] = _r_08038036;
    g_cpu.R[15] = 0x08038038u;
    runtime_tick(_cyc_08038036);
    }
L_08038038:
    /* 08038038  08038038 T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038038u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038038 = 1u;
    _cyc_08038038 = 1u;
    uint32_t _rm_08038038 = g_cpu.R[2];
    uint32_t _op2_08038038;
    uint32_t _co_08038038;
    _op2_08038038 = _rm_08038038;
    _co_08038038 = cpsr_c();
    uint32_t _rn_08038038 = g_cpu.R[0];
    uint32_t _r_08038038;
    _r_08038038 = _rn_08038038 & _op2_08038038;
    arm_set_nzc_logic(_r_08038038, _co_08038038);
    g_cpu.R[0] = _r_08038038;
    g_cpu.R[15] = 0x0803803Au;
    runtime_tick(_cyc_08038038);
    }
L_0803803A:
    /* 0803803A  0803803a T movs r0,r0,lsl #2 */
    {
    g_cpu.R[15] = 0x0803803Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803803A = 1u;
    _cyc_0803803A = 1u;
    uint32_t _rm_0803803A = g_cpu.R[0];
    uint32_t _op2_0803803A;
    uint32_t _co_0803803A;
    _op2_0803803A = _rm_0803803A << 2;
    _co_0803803A = (_rm_0803803A >> 30) & 1u;
    uint32_t _r_0803803A;
    _r_0803803A = _op2_0803803A;
    arm_set_nzc_logic(_r_0803803A, _co_0803803A);
    g_cpu.R[0] = _r_0803803A;
    g_cpu.R[15] = 0x0803803Cu;
    runtime_tick(_cyc_0803803A);
    }
L_0803803C:
    /* 0803803C  0803803c T adds r0,r0,r4 */
    {
    g_cpu.R[15] = 0x0803803Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803803C = 1u;
    _cyc_0803803C = 1u;
    uint32_t _rm_0803803C = g_cpu.R[4];
    uint32_t _op2_0803803C;
    uint32_t _co_0803803C;
    _op2_0803803C = _rm_0803803C;
    _co_0803803C = cpsr_c();
    uint32_t _rn_0803803C = g_cpu.R[0];
    uint32_t _r_0803803C;
    _r_0803803C = _rn_0803803C + _op2_0803803C;
    arm_set_nzcv_add(_rn_0803803C, _op2_0803803C, _r_0803803C);
    g_cpu.R[0] = _r_0803803C;
    g_cpu.R[15] = 0x0803803Eu;
    runtime_tick(_cyc_0803803C);
    }
L_0803803E:
    /* 0803803E  0803803e T movs r1,r1,lsr #4 */
    {
    g_cpu.R[15] = 0x0803803Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803803E = 1u;
    _cyc_0803803E = 1u;
    uint32_t _rm_0803803E = g_cpu.R[1];
    uint32_t _op2_0803803E;
    uint32_t _co_0803803E;
    _op2_0803803E = _rm_0803803E >> 4;
    _co_0803803E = (_rm_0803803E >> 3) & 1u;
    uint32_t _r_0803803E;
    _r_0803803E = _op2_0803803E;
    arm_set_nzc_logic(_r_0803803E, _co_0803803E);
    g_cpu.R[1] = _r_0803803E;
    g_cpu.R[15] = 0x08038040u;
    runtime_tick(_cyc_0803803E);
    }
L_08038040:
    /* 08038040  08038040 T ldr r0,[r0] */
    {
    g_cpu.R[15] = 0x08038040u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038040 = 1u;
    _cyc_08038040 = 2u;
    uint32_t _base_08038040 = g_cpu.R[0];
    uint32_t _off_08038040;
    _off_08038040 = 0x00000000u;
    uint32_t _ea_08038040 = _base_08038040 + _off_08038040;
    uint32_t _post_08038040 = _base_08038040 + _off_08038040;
    _cyc_08038040 += runtime_mem_cycles(_ea_08038040, 4u, 0u);
    uint32_t _v_08038040;
    { uint32_t _w = bus_read_u32(_ea_08038040 & ~3u); uint32_t _rot = (_ea_08038040 & 3u) * 8u; _v_08038040 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038040;
    g_cpu.R[15] = 0x08038042u;
    runtime_tick(_cyc_08038040);
    }
L_08038042:
    /* 08038042  08038042 T movs r0,r0,lsr r1 */
    {
    g_cpu.R[15] = 0x08038042u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038042 = 1u;
    _cyc_08038042 = 2u;
    uint32_t _rm_08038042 = g_cpu.R[0];
    uint32_t _op2_08038042;
    uint32_t _co_08038042;
    uint32_t _cnt_08038042 = (g_cpu.R[1]) & 0xFFu;
    if (_cnt_08038042 == 0)      { _op2_08038042 = _rm_08038042; _co_08038042 = cpsr_c(); }
    else if (_cnt_08038042 < 32) { _op2_08038042 = _rm_08038042 >> _cnt_08038042; _co_08038042 = (_rm_08038042 >> (_cnt_08038042 - 1u)) & 1u; }
    else if (_cnt_08038042 == 32){ _op2_08038042 = 0u; _co_08038042 = (_rm_08038042 >> 31) & 1u; }
    else                                { _op2_08038042 = 0u; _co_08038042 = 0u; }
    uint32_t _r_08038042;
    _r_08038042 = _op2_08038042;
    arm_set_nzc_logic(_r_08038042, _co_08038042);
    g_cpu.R[0] = _r_08038042;
    g_cpu.R[15] = 0x08038044u;
    runtime_tick(_cyc_08038042);
    }
L_08038044:
    /* 08038044  08038044 T mov r1,r12 */
    {
    g_cpu.R[15] = 0x08038044u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038044 = 1u;
    _cyc_08038044 = 1u;
    uint32_t _rm_08038044 = g_cpu.R[12];
    uint32_t _op2_08038044;
    uint32_t _co_08038044;
    _op2_08038044 = _rm_08038044;
    _co_08038044 = cpsr_c();
    uint32_t _r_08038044;
    _r_08038044 = _op2_08038044;
    g_cpu.R[1] = _r_08038044;
    g_cpu.R[15] = 0x08038046u;
    runtime_tick(_cyc_08038044);
    }
L_08038046:
    /* 08038046  08038046 T ldr r4,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08038046u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038046 = 1u;
    _cyc_08038046 = 2u;
    uint32_t _base_08038046 = g_cpu.R[1];
    uint32_t _off_08038046;
    _off_08038046 = 0x00000004u;
    uint32_t _ea_08038046 = _base_08038046 + _off_08038046;
    uint32_t _post_08038046 = _base_08038046 + _off_08038046;
    _cyc_08038046 += runtime_mem_cycles(_ea_08038046, 4u, 0u);
    uint32_t _v_08038046;
    { uint32_t _w = bus_read_u32(_ea_08038046 & ~3u); uint32_t _rot = (_ea_08038046 & 3u) * 8u; _v_08038046 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_08038046;
    g_cpu.R[15] = 0x08038048u;
    runtime_tick(_cyc_08038046);
    }
L_08038048:
    /* 08038048  08038048 T subs r0,r0,r5 */
    {
    g_cpu.R[15] = 0x08038048u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038048 = 1u;
    _cyc_08038048 = 1u;
    uint32_t _rm_08038048 = g_cpu.R[5];
    uint32_t _op2_08038048;
    uint32_t _co_08038048;
    _op2_08038048 = _rm_08038048;
    _co_08038048 = cpsr_c();
    uint32_t _rn_08038048 = g_cpu.R[0];
    uint32_t _r_08038048;
    _r_08038048 = _rn_08038048 - _op2_08038048;
    arm_set_nzcv_sub(_rn_08038048, _op2_08038048, _r_08038048);
    g_cpu.R[0] = _r_08038048;
    g_cpu.R[15] = 0x0803804Au;
    runtime_tick(_cyc_08038048);
    }
L_0803804A:
    /* 0803804A  0803804a T adds r1,r7,#0x0 */
    {
    g_cpu.R[15] = 0x0803804Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803804A = 1u;
    _cyc_0803804A = 1u;
    uint32_t _rn_0803804A = g_cpu.R[7];
    uint32_t _r_0803804A;
    _r_0803804A = _rn_0803804A + 0x00000000u;
    arm_set_nzcv_add(_rn_0803804A, 0x00000000u, _r_0803804A);
    g_cpu.R[1] = _r_0803804A;
    g_cpu.R[15] = 0x0803804Cu;
    runtime_tick(_cyc_0803804A);
    }
L_0803804C:
    /* 0803804C  0803804c T bl.hi 0x08037050 */
    {
    g_cpu.R[15] = 0x0803804Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803804C = 1u;
    _cyc_0803804C = 1u;
    g_cpu.R[14] = 0x08037050u;
    g_cpu.R[15] = 0x0803804Eu;
    runtime_tick(_cyc_0803804C);
    }
L_0803804E:
    /* 0803804E  0803804e T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x0803804Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803804E = 1u;
    _cyc_0803804E = 3u;
    uint32_t _blt_0803804E = (g_cpu.R[14] + 0x0000041Cu) & ~1u;
    g_cpu.R[14] = 0x08038051u;
    g_cpu.R[15] = _blt_0803804E;
    runtime_call_push_return(0x08038050u);
    runtime_tick(_cyc_0803804E);
    _cyc_0803804E = 0u;
    runtime_dispatch(_blt_0803804E);
    if (g_cpu.R[15] != 0x08038050u) { runtime_call_cancel_return(0x08038050u); return; }
    g_cpu.R[15] = 0x08038050u;
    runtime_tick(_cyc_0803804E);
    }
    /* fall-through to 0x08038050 */
    g_cpu.R[15] = 0x08038050u;
    runtime_dispatch(0x08038050u);
    return;
}

/* 0x08038B88  mode=thumb  end=0x08038B8C  branches=1 */
void gf_race_08038b88(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038B8Au: goto L_08038B8A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038B88u);
    /* 08038B88  08038b88 T ldr r1,[r15] */
    {
    g_cpu.R[15] = 0x08038B88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B88 = 1u;
    _cyc_08038B88 = 2u;
    uint32_t _base_08038B88 = 0x08038B8Cu & ~3u;
    uint32_t _off_08038B88;
    _off_08038B88 = 0x00000000u;
    uint32_t _ea_08038B88 = _base_08038B88 + _off_08038B88;
    uint32_t _post_08038B88 = _base_08038B88 + _off_08038B88;
    _cyc_08038B88 += runtime_mem_cycles(_ea_08038B88, 4u, 0u);
    uint32_t _v_08038B88;
    { uint32_t _w = bus_read_u32(_ea_08038B88 & ~3u); uint32_t _rot = (_ea_08038B88 & 3u) * 8u; _v_08038B88 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08038B88;
    g_cpu.R[15] = 0x08038B8Au;
    runtime_tick(_cyc_08038B88);
    }
L_08038B8A:
    /* 08038B8A  08038b8a T b 0x08038b9e */
    {
    g_cpu.R[15] = 0x08038B8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B8A = 1u;
    _cyc_08038B8A = 3u;
    g_cpu.R[15] = 0x08038B9Eu;
    runtime_tick(_cyc_08038B8A);
    gf_tfunc_08038B9E();
    return;
    g_cpu.R[15] = 0x08038B8Cu;
    runtime_tick(_cyc_08038B8A);
    }
    /* fall-through to 0x08038B8C */
    g_cpu.R[15] = 0x08038B8Cu;
    runtime_dispatch(0x08038B8Cu);
    return;
}

/* 0x08038D16  mode=thumb  end=0x08038D26  branches=4 */
void gf_race_08038d16(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038D18u: goto L_08038D18;
        case 0x08038D1Au: goto L_08038D1A;
        case 0x08038D1Cu: goto L_08038D1C;
        case 0x08038D1Eu: goto L_08038D1E;
        case 0x08038D20u: goto L_08038D20;
        case 0x08038D22u: goto L_08038D22;
        case 0x08038D24u: goto L_08038D24;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038D16u);
    /* 08038D16  08038d16 T ldr r3,[r13,#0x18] */
    {
    g_cpu.R[15] = 0x08038D16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D16 = 1u;
    _cyc_08038D16 = 2u;
    uint32_t _base_08038D16 = g_cpu.R[13];
    uint32_t _off_08038D16;
    _off_08038D16 = 0x00000018u;
    uint32_t _ea_08038D16 = _base_08038D16 + _off_08038D16;
    uint32_t _post_08038D16 = _base_08038D16 + _off_08038D16;
    _cyc_08038D16 += runtime_mem_cycles(_ea_08038D16, 4u, 0u);
    uint32_t _v_08038D16;
    { uint32_t _w = bus_read_u32(_ea_08038D16 & ~3u); uint32_t _rot = (_ea_08038D16 & 3u) * 8u; _v_08038D16 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08038D16;
    g_cpu.R[15] = 0x08038D18u;
    runtime_tick(_cyc_08038D16);
    }
L_08038D18:
    /* 08038D18  08038d18 T cmps r6,#0x2 */
    {
    g_cpu.R[15] = 0x08038D18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D18 = 1u;
    _cyc_08038D18 = 1u;
    uint32_t _rn_08038D18 = g_cpu.R[6];
    uint32_t _r_08038D18;
    _r_08038D18 = _rn_08038D18 - 0x00000002u;
    arm_set_nzcv_sub(_rn_08038D18, 0x00000002u, _r_08038D18);
    g_cpu.R[15] = 0x08038D1Au;
    runtime_tick(_cyc_08038D18);
    }
L_08038D1A:
    /* 08038D1A  08038d1a T beq 0x08038d40 */
    {
    g_cpu.R[15] = 0x08038D1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D1A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038D1A = 3u;
        g_cpu.R[15] = 0x08038D40u;
        runtime_tick(_cyc_08038D1A);
        gf_race_08038d40();
        return;
    }
    g_cpu.R[15] = 0x08038D1Cu;
    runtime_tick(_cyc_08038D1A);
    }
L_08038D1C:
    /* 08038D1C  08038d1c T cmps r6,#0x2 */
    {
    g_cpu.R[15] = 0x08038D1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D1C = 1u;
    _cyc_08038D1C = 1u;
    uint32_t _rn_08038D1C = g_cpu.R[6];
    uint32_t _r_08038D1C;
    _r_08038D1C = _rn_08038D1C - 0x00000002u;
    arm_set_nzcv_sub(_rn_08038D1C, 0x00000002u, _r_08038D1C);
    g_cpu.R[15] = 0x08038D1Eu;
    runtime_tick(_cyc_08038D1C);
    }
L_08038D1E:
    /* 08038D1E  08038d1e T bgt 0x08038d34 */
    {
    g_cpu.R[15] = 0x08038D1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D1E = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_08038D1E = 3u;
        g_cpu.R[15] = 0x08038D34u;
        runtime_tick(_cyc_08038D1E);
        gf_tfunc_08038D34();
        return;
    }
    g_cpu.R[15] = 0x08038D20u;
    runtime_tick(_cyc_08038D1E);
    }
L_08038D20:
    /* 08038D20  08038d20 T cmps r6,#0x1 */
    {
    g_cpu.R[15] = 0x08038D20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D20 = 1u;
    _cyc_08038D20 = 1u;
    uint32_t _rn_08038D20 = g_cpu.R[6];
    uint32_t _r_08038D20;
    _r_08038D20 = _rn_08038D20 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08038D20, 0x00000001u, _r_08038D20);
    g_cpu.R[15] = 0x08038D22u;
    runtime_tick(_cyc_08038D20);
    }
L_08038D22:
    /* 08038D22  08038d22 T beq 0x08038d3a */
    {
    g_cpu.R[15] = 0x08038D22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D22 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038D22 = 3u;
        g_cpu.R[15] = 0x08038D3Au;
        runtime_tick(_cyc_08038D22);
        gf_race_08038d3a();
        return;
    }
    g_cpu.R[15] = 0x08038D24u;
    runtime_tick(_cyc_08038D22);
    }
L_08038D24:
    /* 08038D24  08038d24 T b 0x08038d94 */
    {
    g_cpu.R[15] = 0x08038D24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D24 = 1u;
    _cyc_08038D24 = 3u;
    g_cpu.R[15] = 0x08038D94u;
    runtime_tick(_cyc_08038D24);
    gf_tfunc_08038D94();
    return;
    g_cpu.R[15] = 0x08038D26u;
    runtime_tick(_cyc_08038D24);
    }
    /* fall-through to 0x08038D26 */
    g_cpu.R[15] = 0x08038D26u;
    runtime_dispatch(0x08038D26u);
    return;
}

/* 0x08038DB0  mode=thumb  end=0x08038DCA  branches=2 */
void gf_race_08038db0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038DB2u: goto L_08038DB2;
        case 0x08038DB4u: goto L_08038DB4;
        case 0x08038DB6u: goto L_08038DB6;
        case 0x08038DB8u: goto L_08038DB8;
        case 0x08038DBAu: goto L_08038DBA;
        case 0x08038DBCu: goto L_08038DBC;
        case 0x08038DBEu: goto L_08038DBE;
        case 0x08038DC0u: goto L_08038DC0;
        case 0x08038DC2u: goto L_08038DC2;
        case 0x08038DC4u: goto L_08038DC4;
        case 0x08038DC6u: goto L_08038DC6;
        case 0x08038DC8u: goto L_08038DC8;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038DB0u);
    /* 08038DB0  08038db0 T ldrb r1,[r4,#0x4] */
    {
    g_cpu.R[15] = 0x08038DB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DB0 = 1u;
    _cyc_08038DB0 = 2u;
    uint32_t _base_08038DB0 = g_cpu.R[4];
    uint32_t _off_08038DB0;
    _off_08038DB0 = 0x00000004u;
    uint32_t _ea_08038DB0 = _base_08038DB0 + _off_08038DB0;
    uint32_t _post_08038DB0 = _base_08038DB0 + _off_08038DB0;
    _cyc_08038DB0 += runtime_mem_cycles(_ea_08038DB0, 1u, 0u);
    uint32_t _v_08038DB0;
    _v_08038DB0 = bus_read_u8(_ea_08038DB0);
    g_cpu.R[1] = _v_08038DB0;
    g_cpu.R[15] = 0x08038DB2u;
    runtime_tick(_cyc_08038DB0);
    }
L_08038DB2:
    /* 08038DB2  08038db2 T movs r2,#0x0 */
    {
    g_cpu.R[15] = 0x08038DB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DB2 = 1u;
    _cyc_08038DB2 = 1u;
    uint32_t _r_08038DB2;
    _r_08038DB2 = 0x00000000u;
    arm_set_nzc_logic(_r_08038DB2, cpsr_c());
    g_cpu.R[2] = _r_08038DB2;
    g_cpu.R[15] = 0x08038DB4u;
    runtime_tick(_cyc_08038DB2);
    }
L_08038DB4:
    /* 08038DB4  08038db4 T strb r1,[r4,#0xb] */
    {
    g_cpu.R[15] = 0x08038DB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DB4 = 1u;
    _cyc_08038DB4 = 1u;
    uint32_t _base_08038DB4 = g_cpu.R[4];
    uint32_t _off_08038DB4;
    _off_08038DB4 = 0x0000000Bu;
    uint32_t _ea_08038DB4 = _base_08038DB4 + _off_08038DB4;
    uint32_t _post_08038DB4 = _base_08038DB4 + _off_08038DB4;
    _cyc_08038DB4 += runtime_mem_cycles(_ea_08038DB4, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038DB4u, _ea_08038DB4, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08038DB4, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08038DB6u;
    runtime_tick(_cyc_08038DB4);
    }
L_08038DB6:
    /* 08038DB6  08038db6 T movs r0,#0xff */
    {
    g_cpu.R[15] = 0x08038DB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DB6 = 1u;
    _cyc_08038DB6 = 1u;
    uint32_t _r_08038DB6;
    _r_08038DB6 = 0x000000FFu;
    arm_set_nzc_logic(_r_08038DB6, cpsr_c());
    g_cpu.R[0] = _r_08038DB6;
    g_cpu.R[15] = 0x08038DB8u;
    runtime_tick(_cyc_08038DB6);
    }
L_08038DB8:
    /* 08038DB8  08038db8 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08038DB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DB8 = 1u;
    _cyc_08038DB8 = 1u;
    uint32_t _rm_08038DB8 = g_cpu.R[1];
    uint32_t _op2_08038DB8;
    uint32_t _co_08038DB8;
    _op2_08038DB8 = _rm_08038DB8;
    _co_08038DB8 = cpsr_c();
    uint32_t _rn_08038DB8 = g_cpu.R[0];
    uint32_t _r_08038DB8;
    _r_08038DB8 = _rn_08038DB8 & _op2_08038DB8;
    arm_set_nzc_logic(_r_08038DB8, _co_08038DB8);
    g_cpu.R[0] = _r_08038DB8;
    g_cpu.R[15] = 0x08038DBAu;
    runtime_tick(_cyc_08038DB8);
    }
L_08038DBA:
    /* 08038DBA  08038dba T adds r1,r6,#0x1 */
    {
    g_cpu.R[15] = 0x08038DBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DBA = 1u;
    _cyc_08038DBA = 1u;
    uint32_t _rn_08038DBA = g_cpu.R[6];
    uint32_t _r_08038DBA;
    _r_08038DBA = _rn_08038DBA + 0x00000001u;
    arm_set_nzcv_add(_rn_08038DBA, 0x00000001u, _r_08038DBA);
    g_cpu.R[1] = _r_08038DBA;
    g_cpu.R[15] = 0x08038DBCu;
    runtime_tick(_cyc_08038DBA);
    }
L_08038DBC:
    /* 08038DBC  08038dbc T mov r10,r1 */
    {
    g_cpu.R[15] = 0x08038DBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DBC = 1u;
    _cyc_08038DBC = 1u;
    uint32_t _rm_08038DBC = g_cpu.R[1];
    uint32_t _op2_08038DBC;
    uint32_t _co_08038DBC;
    _op2_08038DBC = _rm_08038DBC;
    _co_08038DBC = cpsr_c();
    uint32_t _r_08038DBC;
    _r_08038DBC = _op2_08038DBC;
    g_cpu.R[10] = _r_08038DBC;
    g_cpu.R[15] = 0x08038DBEu;
    runtime_tick(_cyc_08038DBC);
    }
L_08038DBE:
    /* 08038DBE  08038dbe T movs r1,#0x40 */
    {
    g_cpu.R[15] = 0x08038DBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DBE = 1u;
    _cyc_08038DBE = 1u;
    uint32_t _r_08038DBE;
    _r_08038DBE = 0x00000040u;
    arm_set_nzc_logic(_r_08038DBE, cpsr_c());
    g_cpu.R[1] = _r_08038DBE;
    g_cpu.R[15] = 0x08038DC0u;
    runtime_tick(_cyc_08038DBE);
    }
L_08038DC0:
    /* 08038DC0  08038dc0 T adds r1,r1,r4 */
    {
    g_cpu.R[15] = 0x08038DC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DC0 = 1u;
    _cyc_08038DC0 = 1u;
    uint32_t _rm_08038DC0 = g_cpu.R[4];
    uint32_t _op2_08038DC0;
    uint32_t _co_08038DC0;
    _op2_08038DC0 = _rm_08038DC0;
    _co_08038DC0 = cpsr_c();
    uint32_t _rn_08038DC0 = g_cpu.R[1];
    uint32_t _r_08038DC0;
    _r_08038DC0 = _rn_08038DC0 + _op2_08038DC0;
    arm_set_nzcv_add(_rn_08038DC0, _op2_08038DC0, _r_08038DC0);
    g_cpu.R[1] = _r_08038DC0;
    g_cpu.R[15] = 0x08038DC2u;
    runtime_tick(_cyc_08038DC0);
    }
L_08038DC2:
    /* 08038DC2  08038dc2 T mov r9,r1 */
    {
    g_cpu.R[15] = 0x08038DC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DC2 = 1u;
    _cyc_08038DC2 = 1u;
    uint32_t _rm_08038DC2 = g_cpu.R[1];
    uint32_t _op2_08038DC2;
    uint32_t _co_08038DC2;
    _op2_08038DC2 = _rm_08038DC2;
    _co_08038DC2 = cpsr_c();
    uint32_t _r_08038DC2;
    _r_08038DC2 = _op2_08038DC2;
    g_cpu.R[9] = _r_08038DC2;
    g_cpu.R[15] = 0x08038DC4u;
    runtime_tick(_cyc_08038DC2);
    }
L_08038DC4:
    /* 08038DC4  08038dc4 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038DC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DC4 = 1u;
    _cyc_08038DC4 = 1u;
    uint32_t _rn_08038DC4 = g_cpu.R[0];
    uint32_t _r_08038DC4;
    _r_08038DC4 = _rn_08038DC4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038DC4, 0x00000000u, _r_08038DC4);
    g_cpu.R[15] = 0x08038DC6u;
    runtime_tick(_cyc_08038DC4);
    }
L_08038DC6:
    /* 08038DC6  08038dc6 T bne 0x08038dca */
    {
    g_cpu.R[15] = 0x08038DC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DC6 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08038DC6 = 3u;
        g_cpu.R[15] = 0x08038DCAu;
        runtime_tick(_cyc_08038DC6);
        gf_tfunc_08038DCA();
        return;
    }
    g_cpu.R[15] = 0x08038DC8u;
    runtime_tick(_cyc_08038DC6);
    }
L_08038DC8:
    /* 08038DC8  08038dc8 T b 0x08038f06 */
    {
    g_cpu.R[15] = 0x08038DC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DC8 = 1u;
    _cyc_08038DC8 = 3u;
    g_cpu.R[15] = 0x08038F06u;
    runtime_tick(_cyc_08038DC8);
    gf_race_08038f06();
    return;
    g_cpu.R[15] = 0x08038DCAu;
    runtime_tick(_cyc_08038DC8);
    }
    /* fall-through to 0x08038DCA */
    g_cpu.R[15] = 0x08038DCAu;
    runtime_dispatch(0x08038DCAu);
    return;
}

/* 0x08038ECA  mode=thumb  end=0x08038EDA  branches=2 */
void gf_race_08038eca(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038ECCu: goto L_08038ECC;
        case 0x08038ECEu: goto L_08038ECE;
        case 0x08038ED0u: goto L_08038ED0;
        case 0x08038ED2u: goto L_08038ED2;
        case 0x08038ED4u: goto L_08038ED4;
        case 0x08038ED6u: goto L_08038ED6;
        case 0x08038ED8u: goto L_08038ED8;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038ECAu);
    /* 08038ECA  08038eca T ldrb r0,[r4,#0x6] */
    {
    g_cpu.R[15] = 0x08038ECAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ECA = 1u;
    _cyc_08038ECA = 2u;
    uint32_t _base_08038ECA = g_cpu.R[4];
    uint32_t _off_08038ECA;
    _off_08038ECA = 0x00000006u;
    uint32_t _ea_08038ECA = _base_08038ECA + _off_08038ECA;
    uint32_t _post_08038ECA = _base_08038ECA + _off_08038ECA;
    _cyc_08038ECA += runtime_mem_cycles(_ea_08038ECA, 1u, 0u);
    uint32_t _v_08038ECA;
    _v_08038ECA = bus_read_u8(_ea_08038ECA);
    g_cpu.R[0] = _v_08038ECA;
    g_cpu.R[15] = 0x08038ECCu;
    runtime_tick(_cyc_08038ECA);
    }
L_08038ECC:
    /* 08038ECC  08038ecc T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038ECCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ECC = 1u;
    _cyc_08038ECC = 1u;
    uint32_t _rn_08038ECC = g_cpu.R[0];
    uint32_t _r_08038ECC;
    _r_08038ECC = _rn_08038ECC - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038ECC, 0x00000000u, _r_08038ECC);
    g_cpu.R[15] = 0x08038ECEu;
    runtime_tick(_cyc_08038ECC);
    }
L_08038ECE:
    /* 08038ECE  08038ece T bne 0x08038eda */
    {
    g_cpu.R[15] = 0x08038ECEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ECE = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08038ECE = 3u;
        g_cpu.R[15] = 0x08038EDAu;
        runtime_tick(_cyc_08038ECE);
        gf_race_08038eda();
        return;
    }
    g_cpu.R[15] = 0x08038ED0u;
    runtime_tick(_cyc_08038ECE);
    }
L_08038ED0:
    /* 08038ED0  08038ed0 T movs r0,#0xfc */
    {
    g_cpu.R[15] = 0x08038ED0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ED0 = 1u;
    _cyc_08038ED0 = 1u;
    uint32_t _r_08038ED0;
    _r_08038ED0 = 0x000000FCu;
    arm_set_nzc_logic(_r_08038ED0, cpsr_c());
    g_cpu.R[0] = _r_08038ED0;
    g_cpu.R[15] = 0x08038ED2u;
    runtime_tick(_cyc_08038ED0);
    }
L_08038ED2:
    /* 08038ED2  08038ed2 T ldrb r1,[r4] */
    {
    g_cpu.R[15] = 0x08038ED2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ED2 = 1u;
    _cyc_08038ED2 = 2u;
    uint32_t _base_08038ED2 = g_cpu.R[4];
    uint32_t _off_08038ED2;
    _off_08038ED2 = 0x00000000u;
    uint32_t _ea_08038ED2 = _base_08038ED2 + _off_08038ED2;
    uint32_t _post_08038ED2 = _base_08038ED2 + _off_08038ED2;
    _cyc_08038ED2 += runtime_mem_cycles(_ea_08038ED2, 1u, 0u);
    uint32_t _v_08038ED2;
    _v_08038ED2 = bus_read_u8(_ea_08038ED2);
    g_cpu.R[1] = _v_08038ED2;
    g_cpu.R[15] = 0x08038ED4u;
    runtime_tick(_cyc_08038ED2);
    }
L_08038ED4:
    /* 08038ED4  08038ed4 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08038ED4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ED4 = 1u;
    _cyc_08038ED4 = 1u;
    uint32_t _rm_08038ED4 = g_cpu.R[1];
    uint32_t _op2_08038ED4;
    uint32_t _co_08038ED4;
    _op2_08038ED4 = _rm_08038ED4;
    _co_08038ED4 = cpsr_c();
    uint32_t _rn_08038ED4 = g_cpu.R[0];
    uint32_t _r_08038ED4;
    _r_08038ED4 = _rn_08038ED4 & _op2_08038ED4;
    arm_set_nzc_logic(_r_08038ED4, _co_08038ED4);
    g_cpu.R[0] = _r_08038ED4;
    g_cpu.R[15] = 0x08038ED6u;
    runtime_tick(_cyc_08038ED4);
    }
L_08038ED6:
    /* 08038ED6  08038ed6 T strb r0,[r4] */
    {
    g_cpu.R[15] = 0x08038ED6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ED6 = 1u;
    _cyc_08038ED6 = 1u;
    uint32_t _base_08038ED6 = g_cpu.R[4];
    uint32_t _off_08038ED6;
    _off_08038ED6 = 0x00000000u;
    uint32_t _ea_08038ED6 = _base_08038ED6 + _off_08038ED6;
    uint32_t _post_08038ED6 = _base_08038ED6 + _off_08038ED6;
    _cyc_08038ED6 += runtime_mem_cycles(_ea_08038ED6, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038ED6u, _ea_08038ED6, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038ED6, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038ED8u;
    runtime_tick(_cyc_08038ED6);
    }
L_08038ED8:
    /* 08038ED8  08038ed8 T b 0x08038e72 */
    {
    g_cpu.R[15] = 0x08038ED8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038ED8 = 1u;
    _cyc_08038ED8 = 3u;
    g_cpu.R[15] = 0x08038E72u;
    runtime_tick(_cyc_08038ED8);
    gf_race_08038e72();
    return;
    g_cpu.R[15] = 0x08038EDAu;
    runtime_tick(_cyc_08038ED8);
    }
    /* fall-through to 0x08038EDA */
    g_cpu.R[15] = 0x08038EDAu;
    runtime_dispatch(0x08038EDAu);
    return;
}

/* 0x0804AE20  mode=thumb  end=0x0804AE36  branches=6 */
void gf_race_init_0804ae20(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0804AE22u: goto L_0804AE22;
        case 0x0804AE24u: goto L_0804AE24;
        case 0x0804AE26u: goto L_0804AE26;
        case 0x0804AE28u: goto L_0804AE28;
        case 0x0804AE2Au: goto L_0804AE2A;
        case 0x0804AE2Cu: goto L_0804AE2C;
        case 0x0804AE2Eu: goto L_0804AE2E;
        case 0x0804AE30u: goto L_0804AE30;
        case 0x0804AE32u: goto L_0804AE32;
        case 0x0804AE34u: goto L_0804AE34;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0804AE20u);
    /* 0804AE20  0804ae20 T cmps r0,#0x1e */
    {
    g_cpu.R[15] = 0x0804AE20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE20 = 1u;
    _cyc_0804AE20 = 1u;
    uint32_t _rn_0804AE20 = g_cpu.R[0];
    uint32_t _r_0804AE20;
    _r_0804AE20 = _rn_0804AE20 - 0x0000001Eu;
    arm_set_nzcv_sub(_rn_0804AE20, 0x0000001Eu, _r_0804AE20);
    g_cpu.R[15] = 0x0804AE22u;
    runtime_tick(_cyc_0804AE20);
    }
L_0804AE22:
    /* 0804AE22  0804ae22 T beq 0x0804af06 */
    {
    g_cpu.R[15] = 0x0804AE22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE22 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0804AE22 = 3u;
        g_cpu.R[15] = 0x0804AF06u;
        runtime_tick(_cyc_0804AE22);
        gf_tfunc_0804AF06();
        return;
    }
    g_cpu.R[15] = 0x0804AE24u;
    runtime_tick(_cyc_0804AE22);
    }
L_0804AE24:
    /* 0804AE24  0804ae24 T cmps r0,#0x1e */
    {
    g_cpu.R[15] = 0x0804AE24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE24 = 1u;
    _cyc_0804AE24 = 1u;
    uint32_t _rn_0804AE24 = g_cpu.R[0];
    uint32_t _r_0804AE24;
    _r_0804AE24 = _rn_0804AE24 - 0x0000001Eu;
    arm_set_nzcv_sub(_rn_0804AE24, 0x0000001Eu, _r_0804AE24);
    g_cpu.R[15] = 0x0804AE26u;
    runtime_tick(_cyc_0804AE24);
    }
L_0804AE26:
    /* 0804AE26  0804ae26 T bgt 0x0804ae3c */
    {
    g_cpu.R[15] = 0x0804AE26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE26 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_0804AE26 = 3u;
        g_cpu.R[15] = 0x0804AE3Cu;
        runtime_tick(_cyc_0804AE26);
        gf_tfunc_0804AE3C();
        return;
    }
    g_cpu.R[15] = 0x0804AE28u;
    runtime_tick(_cyc_0804AE26);
    }
L_0804AE28:
    /* 0804AE28  0804ae28 T cmps r0,#0x14 */
    {
    g_cpu.R[15] = 0x0804AE28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE28 = 1u;
    _cyc_0804AE28 = 1u;
    uint32_t _rn_0804AE28 = g_cpu.R[0];
    uint32_t _r_0804AE28;
    _r_0804AE28 = _rn_0804AE28 - 0x00000014u;
    arm_set_nzcv_sub(_rn_0804AE28, 0x00000014u, _r_0804AE28);
    g_cpu.R[15] = 0x0804AE2Au;
    runtime_tick(_cyc_0804AE28);
    }
L_0804AE2A:
    /* 0804AE2A  0804ae2a T beq 0x0804aeea */
    {
    g_cpu.R[15] = 0x0804AE2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE2A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0804AE2A = 3u;
        g_cpu.R[15] = 0x0804AEEAu;
        runtime_tick(_cyc_0804AE2A);
        gf_tfunc_0804AEEA();
        return;
    }
    g_cpu.R[15] = 0x0804AE2Cu;
    runtime_tick(_cyc_0804AE2A);
    }
L_0804AE2C:
    /* 0804AE2C  0804ae2c T cmps r0,#0x14 */
    {
    g_cpu.R[15] = 0x0804AE2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE2C = 1u;
    _cyc_0804AE2C = 1u;
    uint32_t _rn_0804AE2C = g_cpu.R[0];
    uint32_t _r_0804AE2C;
    _r_0804AE2C = _rn_0804AE2C - 0x00000014u;
    arm_set_nzcv_sub(_rn_0804AE2C, 0x00000014u, _r_0804AE2C);
    g_cpu.R[15] = 0x0804AE2Eu;
    runtime_tick(_cyc_0804AE2C);
    }
L_0804AE2E:
    /* 0804AE2E  0804ae2e T bgt 0x0804ae36 */
    {
    g_cpu.R[15] = 0x0804AE2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE2E = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_0804AE2E = 3u;
        g_cpu.R[15] = 0x0804AE36u;
        runtime_tick(_cyc_0804AE2E);
        gf_tfunc_0804AE36();
        return;
    }
    g_cpu.R[15] = 0x0804AE30u;
    runtime_tick(_cyc_0804AE2E);
    }
L_0804AE30:
    /* 0804AE30  0804ae30 T cmps r0,#0xb */
    {
    g_cpu.R[15] = 0x0804AE30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE30 = 1u;
    _cyc_0804AE30 = 1u;
    uint32_t _rn_0804AE30 = g_cpu.R[0];
    uint32_t _r_0804AE30;
    _r_0804AE30 = _rn_0804AE30 - 0x0000000Bu;
    arm_set_nzcv_sub(_rn_0804AE30, 0x0000000Bu, _r_0804AE30);
    g_cpu.R[15] = 0x0804AE32u;
    runtime_tick(_cyc_0804AE30);
    }
L_0804AE32:
    /* 0804AE32  0804ae32 T beq 0x0804aee4 */
    {
    g_cpu.R[15] = 0x0804AE32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE32 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0804AE32 = 3u;
        g_cpu.R[15] = 0x0804AEE4u;
        runtime_tick(_cyc_0804AE32);
        gf_tfunc_0804AEE4();
        return;
    }
    g_cpu.R[15] = 0x0804AE34u;
    runtime_tick(_cyc_0804AE32);
    }
L_0804AE34:
    /* 0804AE34  0804ae34 T b 0x0804afa8 */
    {
    g_cpu.R[15] = 0x0804AE34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804AE34 = 1u;
    _cyc_0804AE34 = 3u;
    g_cpu.R[15] = 0x0804AFA8u;
    runtime_tick(_cyc_0804AE34);
    gf_tfunc_0804AFA8();
    return;
    g_cpu.R[15] = 0x0804AE36u;
    runtime_tick(_cyc_0804AE34);
    }
    /* fall-through to 0x0804AE36 */
    g_cpu.R[15] = 0x0804AE36u;
    runtime_dispatch(0x0804AE36u);
    return;
}

/* 0x080590C8  mode=thumb  end=0x080590D2  branches=2  indirect */
void gf_race_080590c8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080590CAu: goto L_080590CA;
        case 0x080590CCu: goto L_080590CC;
        case 0x080590CEu: goto L_080590CE;
        case 0x080590D0u: goto L_080590D0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080590C8u);
    /* 080590C8  080590c8 T stm r13!,{r14} */
    {
    g_cpu.R[15] = 0x080590C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080590C8 = 1u;
    _cyc_080590C8 = 1u;
    uint32_t _b_080590C8 = g_cpu.R[13];
    uint32_t _a_080590C8 = _b_080590C8 - 4u;
    uint32_t _fb_080590C8 = _b_080590C8 - 4u;
    _cyc_080590C8 += runtime_mem_cycles(_a_080590C8 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080590C8u, _a_080590C8 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_080590C8 & ~3u, g_cpu.R[14]);
    _a_080590C8 += 4u;
    g_cpu.R[13] = _fb_080590C8;
    g_cpu.R[15] = 0x080590CAu;
    runtime_tick(_cyc_080590C8);
    }
L_080590CA:
    /* 080590CA  080590ca T ldr r0,[r15,#0x14] */
    {
    g_cpu.R[15] = 0x080590CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080590CA = 1u;
    _cyc_080590CA = 2u;
    uint32_t _base_080590CA = 0x080590CEu & ~3u;
    uint32_t _off_080590CA;
    _off_080590CA = 0x00000014u;
    uint32_t _ea_080590CA = _base_080590CA + _off_080590CA;
    uint32_t _post_080590CA = _base_080590CA + _off_080590CA;
    _cyc_080590CA += runtime_mem_cycles(_ea_080590CA, 4u, 0u);
    uint32_t _v_080590CA;
    { uint32_t _w = bus_read_u32(_ea_080590CA & ~3u); uint32_t _rot = (_ea_080590CA & 3u) * 8u; _v_080590CA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080590CA;
    g_cpu.R[15] = 0x080590CCu;
    runtime_tick(_cyc_080590CA);
    }
L_080590CC:
    /* 080590CC  080590cc T ldr r0,[r0] */
    {
    g_cpu.R[15] = 0x080590CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080590CC = 1u;
    _cyc_080590CC = 2u;
    uint32_t _base_080590CC = g_cpu.R[0];
    uint32_t _off_080590CC;
    _off_080590CC = 0x00000000u;
    uint32_t _ea_080590CC = _base_080590CC + _off_080590CC;
    uint32_t _post_080590CC = _base_080590CC + _off_080590CC;
    _cyc_080590CC += runtime_mem_cycles(_ea_080590CC, 4u, 0u);
    uint32_t _v_080590CC;
    { uint32_t _w = bus_read_u32(_ea_080590CC & ~3u); uint32_t _rot = (_ea_080590CC & 3u) * 8u; _v_080590CC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080590CC;
    g_cpu.R[15] = 0x080590CEu;
    runtime_tick(_cyc_080590CC);
    }
L_080590CE:
    /* 080590CE  080590ce T bl.hi 0x0805a0d2 */
    {
    g_cpu.R[15] = 0x080590CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080590CE = 1u;
    _cyc_080590CE = 1u;
    g_cpu.R[14] = 0x0805A0D2u;
    g_cpu.R[15] = 0x080590D0u;
    runtime_tick(_cyc_080590CE);
    }
L_080590D0:
    /* 080590D0  080590d0 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x080590D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080590D0 = 1u;
    _cyc_080590D0 = 3u;
    uint32_t _blt_080590D0 = (g_cpu.R[14] + 0x000008C2u) & ~1u;
    g_cpu.R[14] = 0x080590D3u;
    g_cpu.R[15] = _blt_080590D0;
    runtime_call_push_return(0x080590D2u);
    runtime_tick(_cyc_080590D0);
    _cyc_080590D0 = 0u;
    runtime_dispatch(_blt_080590D0);
    if (g_cpu.R[15] != 0x080590D2u) { runtime_call_cancel_return(0x080590D2u); return; }
    g_cpu.R[15] = 0x080590D2u;
    runtime_tick(_cyc_080590D0);
    }
    /* fall-through to 0x080590D2 */
    g_cpu.R[15] = 0x080590D2u;
    runtime_dispatch(0x080590D2u);
    return;
}

/* 0x080324DC  mode=thumb  end=0x080324EC  branches=2 */
void gf_race_080324dc(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080324DEu: goto L_080324DE;
        case 0x080324E0u: goto L_080324E0;
        case 0x080324E2u: goto L_080324E2;
        case 0x080324E4u: goto L_080324E4;
        case 0x080324E6u: goto L_080324E6;
        case 0x080324E8u: goto L_080324E8;
        case 0x080324EAu: goto L_080324EA;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080324DCu);
    /* 080324DC  080324dc T ldr r1,[r15,#0x54] */
    {
    g_cpu.R[15] = 0x080324DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324DC = 1u;
    _cyc_080324DC = 2u;
    uint32_t _base_080324DC = 0x080324E0u & ~3u;
    uint32_t _off_080324DC;
    _off_080324DC = 0x00000054u;
    uint32_t _ea_080324DC = _base_080324DC + _off_080324DC;
    uint32_t _post_080324DC = _base_080324DC + _off_080324DC;
    _cyc_080324DC += runtime_mem_cycles(_ea_080324DC, 4u, 0u);
    uint32_t _v_080324DC;
    { uint32_t _w = bus_read_u32(_ea_080324DC & ~3u); uint32_t _rot = (_ea_080324DC & 3u) * 8u; _v_080324DC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080324DC;
    g_cpu.R[15] = 0x080324DEu;
    runtime_tick(_cyc_080324DC);
    }
L_080324DE:
    /* 080324DE  080324de T ldr r0,[r15,#0x58] */
    {
    g_cpu.R[15] = 0x080324DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324DE = 1u;
    _cyc_080324DE = 2u;
    uint32_t _base_080324DE = 0x080324E2u & ~3u;
    uint32_t _off_080324DE;
    _off_080324DE = 0x00000058u;
    uint32_t _ea_080324DE = _base_080324DE + _off_080324DE;
    uint32_t _post_080324DE = _base_080324DE + _off_080324DE;
    _cyc_080324DE += runtime_mem_cycles(_ea_080324DE, 4u, 0u);
    uint32_t _v_080324DE;
    { uint32_t _w = bus_read_u32(_ea_080324DE & ~3u); uint32_t _rot = (_ea_080324DE & 3u) * 8u; _v_080324DE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080324DE;
    g_cpu.R[15] = 0x080324E0u;
    runtime_tick(_cyc_080324DE);
    }
L_080324E0:
    /* 080324E0  080324e0 T str r0,[r1] */
    {
    g_cpu.R[15] = 0x080324E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324E0 = 1u;
    _cyc_080324E0 = 1u;
    uint32_t _base_080324E0 = g_cpu.R[1];
    uint32_t _off_080324E0;
    _off_080324E0 = 0x00000000u;
    uint32_t _ea_080324E0 = _base_080324E0 + _off_080324E0;
    uint32_t _post_080324E0 = _base_080324E0 + _off_080324E0;
    _cyc_080324E0 += runtime_mem_cycles(_ea_080324E0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080324E0u, _ea_080324E0 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_080324E0 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x080324E2u;
    runtime_tick(_cyc_080324E0);
    }
L_080324E2:
    /* 080324E2  080324e2 T ldr r0,[r15,#0x58] */
    {
    g_cpu.R[15] = 0x080324E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324E2 = 1u;
    _cyc_080324E2 = 2u;
    uint32_t _base_080324E2 = 0x080324E6u & ~3u;
    uint32_t _off_080324E2;
    _off_080324E2 = 0x00000058u;
    uint32_t _ea_080324E2 = _base_080324E2 + _off_080324E2;
    uint32_t _post_080324E2 = _base_080324E2 + _off_080324E2;
    _cyc_080324E2 += runtime_mem_cycles(_ea_080324E2, 4u, 0u);
    uint32_t _v_080324E2;
    { uint32_t _w = bus_read_u32(_ea_080324E2 & ~3u); uint32_t _rot = (_ea_080324E2 & 3u) * 8u; _v_080324E2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080324E2;
    g_cpu.R[15] = 0x080324E4u;
    runtime_tick(_cyc_080324E2);
    }
L_080324E4:
    /* 080324E4  080324e4 T str r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x080324E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324E4 = 1u;
    _cyc_080324E4 = 1u;
    uint32_t _base_080324E4 = g_cpu.R[1];
    uint32_t _off_080324E4;
    _off_080324E4 = 0x00000004u;
    uint32_t _ea_080324E4 = _base_080324E4 + _off_080324E4;
    uint32_t _post_080324E4 = _base_080324E4 + _off_080324E4;
    _cyc_080324E4 += runtime_mem_cycles(_ea_080324E4, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080324E4u, _ea_080324E4 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_080324E4 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x080324E6u;
    runtime_tick(_cyc_080324E4);
    }
L_080324E6:
    /* 080324E6  080324e6 T ldr r0,[r15,#0x58] */
    {
    g_cpu.R[15] = 0x080324E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324E6 = 1u;
    _cyc_080324E6 = 2u;
    uint32_t _base_080324E6 = 0x080324EAu & ~3u;
    uint32_t _off_080324E6;
    _off_080324E6 = 0x00000058u;
    uint32_t _ea_080324E6 = _base_080324E6 + _off_080324E6;
    uint32_t _post_080324E6 = _base_080324E6 + _off_080324E6;
    _cyc_080324E6 += runtime_mem_cycles(_ea_080324E6, 4u, 0u);
    uint32_t _v_080324E6;
    { uint32_t _w = bus_read_u32(_ea_080324E6 & ~3u); uint32_t _rot = (_ea_080324E6 & 3u) * 8u; _v_080324E6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080324E6;
    g_cpu.R[15] = 0x080324E8u;
    runtime_tick(_cyc_080324E6);
    }
L_080324E8:
    /* 080324E8  080324e8 T str r0,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x080324E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324E8 = 1u;
    _cyc_080324E8 = 1u;
    uint32_t _base_080324E8 = g_cpu.R[1];
    uint32_t _off_080324E8;
    _off_080324E8 = 0x00000008u;
    uint32_t _ea_080324E8 = _base_080324E8 + _off_080324E8;
    uint32_t _post_080324E8 = _base_080324E8 + _off_080324E8;
    _cyc_080324E8 += runtime_mem_cycles(_ea_080324E8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080324E8u, _ea_080324E8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_080324E8 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x080324EAu;
    runtime_tick(_cyc_080324E8);
    }
L_080324EA:
    /* 080324EA  080324ea T ldr r0,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x080324EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324EA = 1u;
    _cyc_080324EA = 2u;
    uint32_t _base_080324EA = g_cpu.R[1];
    uint32_t _off_080324EA;
    _off_080324EA = 0x00000008u;
    uint32_t _ea_080324EA = _base_080324EA + _off_080324EA;
    uint32_t _post_080324EA = _base_080324EA + _off_080324EA;
    _cyc_080324EA += runtime_mem_cycles(_ea_080324EA, 4u, 0u);
    uint32_t _v_080324EA;
    { uint32_t _w = bus_read_u32(_ea_080324EA & ~3u); uint32_t _rot = (_ea_080324EA & 3u) * 8u; _v_080324EA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_080324EA;
    g_cpu.R[15] = 0x080324ECu;
    runtime_tick(_cyc_080324EA);
    }
    /* fall-through to 0x080324EC */
    g_cpu.R[15] = 0x080324ECu;
    runtime_dispatch(0x080324ECu);
    return;
}

/* 0x0803255A  mode=thumb  end=0x080325AA  branches=3 */
void gf_race_0803255a(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0803255Cu: goto L_0803255C;
        case 0x0803255Eu: goto L_0803255E;
        case 0x08032560u: goto L_08032560;
        case 0x08032562u: goto L_08032562;
        case 0x08032564u: goto L_08032564;
        case 0x08032566u: goto L_08032566;
        case 0x08032568u: goto L_08032568;
        case 0x0803256Au: goto L_0803256A;
        case 0x0803256Cu: goto L_0803256C;
        case 0x0803256Eu: goto L_0803256E;
        case 0x08032570u: goto L_08032570;
        case 0x08032572u: goto L_08032572;
        case 0x08032574u: goto L_08032574;
        case 0x08032576u: goto L_08032576;
        case 0x08032578u: goto L_08032578;
        case 0x0803257Au: goto L_0803257A;
        case 0x0803257Cu: goto L_0803257C;
        case 0x0803257Eu: goto L_0803257E;
        case 0x08032580u: goto L_08032580;
        case 0x08032582u: goto L_08032582;
        case 0x08032584u: goto L_08032584;
        case 0x08032586u: goto L_08032586;
        case 0x08032588u: goto L_08032588;
        case 0x0803258Au: goto L_0803258A;
        case 0x0803258Cu: goto L_0803258C;
        case 0x0803258Eu: goto L_0803258E;
        case 0x08032590u: goto L_08032590;
        case 0x08032592u: goto L_08032592;
        case 0x08032594u: goto L_08032594;
        case 0x08032596u: goto L_08032596;
        case 0x08032598u: goto L_08032598;
        case 0x0803259Au: goto L_0803259A;
        case 0x0803259Cu: goto L_0803259C;
        case 0x0803259Eu: goto L_0803259E;
        case 0x080325A0u: goto L_080325A0;
        case 0x080325A2u: goto L_080325A2;
        case 0x080325A4u: goto L_080325A4;
        case 0x080325A6u: goto L_080325A6;
        case 0x080325A8u: goto L_080325A8;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0803255Au);
    /* 0803255A  0803255a T ldr r0,[r15,#0x50] */
    {
    g_cpu.R[15] = 0x0803255Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803255A = 1u;
    _cyc_0803255A = 2u;
    uint32_t _base_0803255A = 0x0803255Eu & ~3u;
    uint32_t _off_0803255A;
    _off_0803255A = 0x00000050u;
    uint32_t _ea_0803255A = _base_0803255A + _off_0803255A;
    uint32_t _post_0803255A = _base_0803255A + _off_0803255A;
    _cyc_0803255A += runtime_mem_cycles(_ea_0803255A, 4u, 0u);
    uint32_t _v_0803255A;
    { uint32_t _w = bus_read_u32(_ea_0803255A & ~3u); uint32_t _rot = (_ea_0803255A & 3u) * 8u; _v_0803255A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0803255A;
    g_cpu.R[15] = 0x0803255Cu;
    runtime_tick(_cyc_0803255A);
    }
L_0803255C:
    /* 0803255C  0803255c T movs r4,#0x0 */
    {
    g_cpu.R[15] = 0x0803255Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803255C = 1u;
    _cyc_0803255C = 1u;
    uint32_t _r_0803255C;
    _r_0803255C = 0x00000000u;
    arm_set_nzc_logic(_r_0803255C, cpsr_c());
    g_cpu.R[4] = _r_0803255C;
    g_cpu.R[15] = 0x0803255Eu;
    runtime_tick(_cyc_0803255C);
    }
L_0803255E:
    /* 0803255E  0803255e T strh r4,[r0] */
    {
    g_cpu.R[15] = 0x0803255Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803255E = 1u;
    _cyc_0803255E = 1u;
    uint32_t _base_0803255E = g_cpu.R[0];
    uint32_t _off_0803255E;
    _off_0803255E = 0x00000000u;
    uint32_t _ea_0803255E = _base_0803255E + _off_0803255E;
    uint32_t _post_0803255E = _base_0803255E + _off_0803255E;
    _cyc_0803255E += runtime_mem_cycles(_ea_0803255E, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0803255Eu, _ea_0803255E & ~1u, (uint32_t)(g_cpu.R[4] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0803255E & ~1u, (uint16_t)(g_cpu.R[4] & 0xFFFFu));
    g_cpu.R[15] = 0x08032560u;
    runtime_tick(_cyc_0803255E);
    }
L_08032560:
    /* 08032560  08032560 T ldr r1,[r15,#0x4c] */
    {
    g_cpu.R[15] = 0x08032560u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032560 = 1u;
    _cyc_08032560 = 2u;
    uint32_t _base_08032560 = 0x08032564u & ~3u;
    uint32_t _off_08032560;
    _off_08032560 = 0x0000004Cu;
    uint32_t _ea_08032560 = _base_08032560 + _off_08032560;
    uint32_t _post_08032560 = _base_08032560 + _off_08032560;
    _cyc_08032560 += runtime_mem_cycles(_ea_08032560, 4u, 0u);
    uint32_t _v_08032560;
    { uint32_t _w = bus_read_u32(_ea_08032560 & ~3u); uint32_t _rot = (_ea_08032560 & 3u) * 8u; _v_08032560 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08032560;
    g_cpu.R[15] = 0x08032562u;
    runtime_tick(_cyc_08032560);
    }
L_08032562:
    /* 08032562  08032562 T ldr r3,[r15,#0x50] */
    {
    g_cpu.R[15] = 0x08032562u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032562 = 1u;
    _cyc_08032562 = 2u;
    uint32_t _base_08032562 = 0x08032566u & ~3u;
    uint32_t _off_08032562;
    _off_08032562 = 0x00000050u;
    uint32_t _ea_08032562 = _base_08032562 + _off_08032562;
    uint32_t _post_08032562 = _base_08032562 + _off_08032562;
    _cyc_08032562 += runtime_mem_cycles(_ea_08032562, 4u, 0u);
    uint32_t _v_08032562;
    { uint32_t _w = bus_read_u32(_ea_08032562 & ~3u); uint32_t _rot = (_ea_08032562 & 3u) * 8u; _v_08032562 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08032562;
    g_cpu.R[15] = 0x08032564u;
    runtime_tick(_cyc_08032562);
    }
L_08032564:
    /* 08032564  08032564 T adds r0,r1,r3 */
    {
    g_cpu.R[15] = 0x08032564u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032564 = 1u;
    _cyc_08032564 = 1u;
    uint32_t _rm_08032564 = g_cpu.R[3];
    uint32_t _op2_08032564;
    uint32_t _co_08032564;
    _op2_08032564 = _rm_08032564;
    _co_08032564 = cpsr_c();
    uint32_t _rn_08032564 = g_cpu.R[1];
    uint32_t _r_08032564;
    _r_08032564 = _rn_08032564 + _op2_08032564;
    arm_set_nzcv_add(_rn_08032564, _op2_08032564, _r_08032564);
    g_cpu.R[0] = _r_08032564;
    g_cpu.R[15] = 0x08032566u;
    runtime_tick(_cyc_08032564);
    }
L_08032566:
    /* 08032566  08032566 T ldrb r2,[r0] */
    {
    g_cpu.R[15] = 0x08032566u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032566 = 1u;
    _cyc_08032566 = 2u;
    uint32_t _base_08032566 = g_cpu.R[0];
    uint32_t _off_08032566;
    _off_08032566 = 0x00000000u;
    uint32_t _ea_08032566 = _base_08032566 + _off_08032566;
    uint32_t _post_08032566 = _base_08032566 + _off_08032566;
    _cyc_08032566 += runtime_mem_cycles(_ea_08032566, 1u, 0u);
    uint32_t _v_08032566;
    _v_08032566 = bus_read_u8(_ea_08032566);
    g_cpu.R[2] = _v_08032566;
    g_cpu.R[15] = 0x08032568u;
    runtime_tick(_cyc_08032566);
    }
L_08032568:
    /* 08032568  08032568 T movs r0,r2,lsl #25 */
    {
    g_cpu.R[15] = 0x08032568u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032568 = 1u;
    _cyc_08032568 = 1u;
    uint32_t _rm_08032568 = g_cpu.R[2];
    uint32_t _op2_08032568;
    uint32_t _co_08032568;
    _op2_08032568 = _rm_08032568 << 25;
    _co_08032568 = (_rm_08032568 >> 7) & 1u;
    uint32_t _r_08032568;
    _r_08032568 = _op2_08032568;
    arm_set_nzc_logic(_r_08032568, _co_08032568);
    g_cpu.R[0] = _r_08032568;
    g_cpu.R[15] = 0x0803256Au;
    runtime_tick(_cyc_08032568);
    }
L_0803256A:
    /* 0803256A  0803256a T movs r7,r0,lsr #31 */
    {
    g_cpu.R[15] = 0x0803256Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803256A = 1u;
    _cyc_0803256A = 1u;
    uint32_t _rm_0803256A = g_cpu.R[0];
    uint32_t _op2_0803256A;
    uint32_t _co_0803256A;
    _op2_0803256A = _rm_0803256A >> 31;
    _co_0803256A = (_rm_0803256A >> 30) & 1u;
    uint32_t _r_0803256A;
    _r_0803256A = _op2_0803256A;
    arm_set_nzc_logic(_r_0803256A, _co_0803256A);
    g_cpu.R[7] = _r_0803256A;
    g_cpu.R[15] = 0x0803256Cu;
    runtime_tick(_cyc_0803256A);
    }
L_0803256C:
    /* 0803256C  0803256c T mov r8,r1 */
    {
    g_cpu.R[15] = 0x0803256Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803256C = 1u;
    _cyc_0803256C = 1u;
    uint32_t _rm_0803256C = g_cpu.R[1];
    uint32_t _op2_0803256C;
    uint32_t _co_0803256C;
    _op2_0803256C = _rm_0803256C;
    _co_0803256C = cpsr_c();
    uint32_t _r_0803256C;
    _r_0803256C = _op2_0803256C;
    g_cpu.R[8] = _r_0803256C;
    g_cpu.R[15] = 0x0803256Eu;
    runtime_tick(_cyc_0803256C);
    }
L_0803256E:
    /* 0803256E  0803256e T cmps r7,#0x0 */
    {
    g_cpu.R[15] = 0x0803256Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803256E = 1u;
    _cyc_0803256E = 1u;
    uint32_t _rn_0803256E = g_cpu.R[7];
    uint32_t _r_0803256E;
    _r_0803256E = _rn_0803256E - 0x00000000u;
    arm_set_nzcv_sub(_rn_0803256E, 0x00000000u, _r_0803256E);
    g_cpu.R[15] = 0x08032570u;
    runtime_tick(_cyc_0803256E);
    }
L_08032570:
    /* 08032570  08032570 T beq 0x08032600 */
    {
    g_cpu.R[15] = 0x08032570u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032570 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08032570 = 3u;
        g_cpu.R[15] = 0x08032600u;
        runtime_tick(_cyc_08032570);
        gf_race_08032600();
        return;
    }
    g_cpu.R[15] = 0x08032572u;
    runtime_tick(_cyc_08032570);
    }
L_08032572:
    /* 08032572  08032572 T movs r3,#0x80 */
    {
    g_cpu.R[15] = 0x08032572u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032572 = 1u;
    _cyc_08032572 = 1u;
    uint32_t _r_08032572;
    _r_08032572 = 0x00000080u;
    arm_set_nzc_logic(_r_08032572, cpsr_c());
    g_cpu.R[3] = _r_08032572;
    g_cpu.R[15] = 0x08032574u;
    runtime_tick(_cyc_08032572);
    }
L_08032574:
    /* 08032574  08032574 T movs r3,r3,lsl #19 */
    {
    g_cpu.R[15] = 0x08032574u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032574 = 1u;
    _cyc_08032574 = 1u;
    uint32_t _rm_08032574 = g_cpu.R[3];
    uint32_t _op2_08032574;
    uint32_t _co_08032574;
    _op2_08032574 = _rm_08032574 << 19;
    _co_08032574 = (_rm_08032574 >> 13) & 1u;
    uint32_t _r_08032574;
    _r_08032574 = _op2_08032574;
    arm_set_nzc_logic(_r_08032574, _co_08032574);
    g_cpu.R[3] = _r_08032574;
    g_cpu.R[15] = 0x08032576u;
    runtime_tick(_cyc_08032574);
    }
L_08032576:
    /* 08032576  08032576 T ldrh r0,[r3] */
    {
    g_cpu.R[15] = 0x08032576u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032576 = 1u;
    _cyc_08032576 = 2u;
    uint32_t _base_08032576 = g_cpu.R[3];
    uint32_t _off_08032576;
    _off_08032576 = 0x00000000u;
    uint32_t _ea_08032576 = _base_08032576 + _off_08032576;
    uint32_t _post_08032576 = _base_08032576 + _off_08032576;
    _cyc_08032576 += runtime_mem_cycles(_ea_08032576, 2u, 0u);
    uint32_t _v_08032576;
    { uint32_t _h = bus_read_u16(_ea_08032576 & ~1u); if (_ea_08032576 & 1u) _v_08032576 = ((_h >> 8) | (_h << 24)); else _v_08032576 = _h; }
    g_cpu.R[0] = _v_08032576;
    g_cpu.R[15] = 0x08032578u;
    runtime_tick(_cyc_08032576);
    }
L_08032578:
    /* 08032578  08032578 T adds r2,r0,#0x0 */
    {
    g_cpu.R[15] = 0x08032578u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032578 = 1u;
    _cyc_08032578 = 1u;
    uint32_t _rn_08032578 = g_cpu.R[0];
    uint32_t _r_08032578;
    _r_08032578 = _rn_08032578 + 0x00000000u;
    arm_set_nzcv_add(_rn_08032578, 0x00000000u, _r_08032578);
    g_cpu.R[2] = _r_08032578;
    g_cpu.R[15] = 0x0803257Au;
    runtime_tick(_cyc_08032578);
    }
L_0803257A:
    /* 0803257A  0803257a T ldr r0,[r15,#0x3c] */
    {
    g_cpu.R[15] = 0x0803257Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803257A = 1u;
    _cyc_0803257A = 2u;
    uint32_t _base_0803257A = 0x0803257Eu & ~3u;
    uint32_t _off_0803257A;
    _off_0803257A = 0x0000003Cu;
    uint32_t _ea_0803257A = _base_0803257A + _off_0803257A;
    uint32_t _post_0803257A = _base_0803257A + _off_0803257A;
    _cyc_0803257A += runtime_mem_cycles(_ea_0803257A, 4u, 0u);
    uint32_t _v_0803257A;
    { uint32_t _w = bus_read_u32(_ea_0803257A & ~3u); uint32_t _rot = (_ea_0803257A & 3u) * 8u; _v_0803257A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0803257A;
    g_cpu.R[15] = 0x0803257Cu;
    runtime_tick(_cyc_0803257A);
    }
L_0803257C:
    /* 0803257C  0803257c T movs r1,#0x17 */
    {
    g_cpu.R[15] = 0x0803257Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803257C = 1u;
    _cyc_0803257C = 1u;
    uint32_t _r_0803257C;
    _r_0803257C = 0x00000017u;
    arm_set_nzc_logic(_r_0803257C, cpsr_c());
    g_cpu.R[1] = _r_0803257C;
    g_cpu.R[15] = 0x0803257Eu;
    runtime_tick(_cyc_0803257C);
    }
L_0803257E:
    /* 0803257E  0803257e T ldrsb r1,[r0,+r1] */
    {
    g_cpu.R[15] = 0x0803257Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803257E = 1u;
    _cyc_0803257E = 2u;
    uint32_t _base_0803257E = g_cpu.R[0];
    uint32_t _off_0803257E;
    uint32_t _morm_0803257E = g_cpu.R[1];
    _off_0803257E = _morm_0803257E;
    uint32_t _ea_0803257E = _base_0803257E + _off_0803257E;
    uint32_t _post_0803257E = _base_0803257E + _off_0803257E;
    _cyc_0803257E += runtime_mem_cycles(_ea_0803257E, 1u, 0u);
    uint32_t _v_0803257E;
    _v_0803257E = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0803257E);
    g_cpu.R[1] = _v_0803257E;
    g_cpu.R[15] = 0x08032580u;
    runtime_tick(_cyc_0803257E);
    }
L_08032580:
    /* 08032580  08032580 T movs r0,#0x10 */
    {
    g_cpu.R[15] = 0x08032580u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032580 = 1u;
    _cyc_08032580 = 1u;
    uint32_t _r_08032580;
    _r_08032580 = 0x00000010u;
    arm_set_nzc_logic(_r_08032580, cpsr_c());
    g_cpu.R[0] = _r_08032580;
    g_cpu.R[15] = 0x08032582u;
    runtime_tick(_cyc_08032580);
    }
L_08032582:
    /* 08032582  08032582 T rsbs r0,r0,#0x0 */
    {
    g_cpu.R[15] = 0x08032582u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032582 = 1u;
    _cyc_08032582 = 1u;
    uint32_t _rn_08032582 = g_cpu.R[0];
    uint32_t _r_08032582;
    _r_08032582 = 0x00000000u - _rn_08032582;
    arm_set_nzcv_sub(0x00000000u, _rn_08032582, _r_08032582);
    g_cpu.R[0] = _r_08032582;
    g_cpu.R[15] = 0x08032584u;
    runtime_tick(_cyc_08032582);
    }
L_08032584:
    /* 08032584  08032584 T cmps r1,r0 */
    {
    g_cpu.R[15] = 0x08032584u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032584 = 1u;
    _cyc_08032584 = 1u;
    uint32_t _rm_08032584 = g_cpu.R[0];
    uint32_t _op2_08032584;
    uint32_t _co_08032584;
    _op2_08032584 = _rm_08032584;
    _co_08032584 = cpsr_c();
    uint32_t _rn_08032584 = g_cpu.R[1];
    uint32_t _r_08032584;
    _r_08032584 = _rn_08032584 - _op2_08032584;
    arm_set_nzcv_sub(_rn_08032584, _op2_08032584, _r_08032584);
    g_cpu.R[15] = 0x08032586u;
    runtime_tick(_cyc_08032584);
    }
L_08032586:
    /* 08032586  08032586 T blt 0x080325d0 */
    {
    g_cpu.R[15] = 0x08032586u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032586 = 1u;
    if (arm_cond_passes(0xbu)) {
        _cyc_08032586 = 3u;
        g_cpu.R[15] = 0x080325D0u;
        runtime_tick(_cyc_08032586);
        gf_tfunc_080325D0();
        return;
    }
    g_cpu.R[15] = 0x08032588u;
    runtime_tick(_cyc_08032586);
    }
L_08032588:
    /* 08032588  08032588 T ldr r1,[r15,#0x30] */
    {
    g_cpu.R[15] = 0x08032588u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032588 = 1u;
    _cyc_08032588 = 2u;
    uint32_t _base_08032588 = 0x0803258Cu & ~3u;
    uint32_t _off_08032588;
    _off_08032588 = 0x00000030u;
    uint32_t _ea_08032588 = _base_08032588 + _off_08032588;
    uint32_t _post_08032588 = _base_08032588 + _off_08032588;
    _cyc_08032588 += runtime_mem_cycles(_ea_08032588, 4u, 0u);
    uint32_t _v_08032588;
    { uint32_t _w = bus_read_u32(_ea_08032588 & ~3u); uint32_t _rot = (_ea_08032588 & 3u) * 8u; _v_08032588 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08032588;
    g_cpu.R[15] = 0x0803258Au;
    runtime_tick(_cyc_08032588);
    }
L_0803258A:
    /* 0803258A  0803258a T ldr r4,[r15,#0x34] */
    {
    g_cpu.R[15] = 0x0803258Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803258A = 1u;
    _cyc_0803258A = 2u;
    uint32_t _base_0803258A = 0x0803258Eu & ~3u;
    uint32_t _off_0803258A;
    _off_0803258A = 0x00000034u;
    uint32_t _ea_0803258A = _base_0803258A + _off_0803258A;
    uint32_t _post_0803258A = _base_0803258A + _off_0803258A;
    _cyc_0803258A += runtime_mem_cycles(_ea_0803258A, 4u, 0u);
    uint32_t _v_0803258A;
    { uint32_t _w = bus_read_u32(_ea_0803258A & ~3u); uint32_t _rot = (_ea_0803258A & 3u) * 8u; _v_0803258A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_0803258A;
    g_cpu.R[15] = 0x0803258Cu;
    runtime_tick(_cyc_0803258A);
    }
L_0803258C:
    /* 0803258C  0803258c T adds r0,r4,#0x0 */
    {
    g_cpu.R[15] = 0x0803258Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803258C = 1u;
    _cyc_0803258C = 1u;
    uint32_t _rn_0803258C = g_cpu.R[4];
    uint32_t _r_0803258C;
    _r_0803258C = _rn_0803258C + 0x00000000u;
    arm_set_nzcv_add(_rn_0803258C, 0x00000000u, _r_0803258C);
    g_cpu.R[0] = _r_0803258C;
    g_cpu.R[15] = 0x0803258Eu;
    runtime_tick(_cyc_0803258C);
    }
L_0803258E:
    /* 0803258E  0803258e T strh r0,[r1] */
    {
    g_cpu.R[15] = 0x0803258Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803258E = 1u;
    _cyc_0803258E = 1u;
    uint32_t _base_0803258E = g_cpu.R[1];
    uint32_t _off_0803258E;
    _off_0803258E = 0x00000000u;
    uint32_t _ea_0803258E = _base_0803258E + _off_0803258E;
    uint32_t _post_0803258E = _base_0803258E + _off_0803258E;
    _cyc_0803258E += runtime_mem_cycles(_ea_0803258E, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0803258Eu, _ea_0803258E & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0803258E & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08032590u;
    runtime_tick(_cyc_0803258E);
    }
L_08032590:
    /* 08032590  08032590 T adds r1,r1,#0x2 */
    {
    g_cpu.R[15] = 0x08032590u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032590 = 1u;
    _cyc_08032590 = 1u;
    uint32_t _rn_08032590 = g_cpu.R[1];
    uint32_t _r_08032590;
    _r_08032590 = _rn_08032590 + 0x00000002u;
    arm_set_nzcv_add(_rn_08032590, 0x00000002u, _r_08032590);
    g_cpu.R[1] = _r_08032590;
    g_cpu.R[15] = 0x08032592u;
    runtime_tick(_cyc_08032590);
    }
L_08032592:
    /* 08032592  08032592 T ldr r0,[r15,#0x30] */
    {
    g_cpu.R[15] = 0x08032592u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032592 = 1u;
    _cyc_08032592 = 2u;
    uint32_t _base_08032592 = 0x08032596u & ~3u;
    uint32_t _off_08032592;
    _off_08032592 = 0x00000030u;
    uint32_t _ea_08032592 = _base_08032592 + _off_08032592;
    uint32_t _post_08032592 = _base_08032592 + _off_08032592;
    _cyc_08032592 += runtime_mem_cycles(_ea_08032592, 4u, 0u);
    uint32_t _v_08032592;
    { uint32_t _w = bus_read_u32(_ea_08032592 & ~3u); uint32_t _rot = (_ea_08032592 & 3u) * 8u; _v_08032592 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08032592;
    g_cpu.R[15] = 0x08032594u;
    runtime_tick(_cyc_08032592);
    }
L_08032594:
    /* 08032594  08032594 T adds r0,r0,#0x40 */
    {
    g_cpu.R[15] = 0x08032594u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032594 = 1u;
    _cyc_08032594 = 1u;
    uint32_t _rn_08032594 = g_cpu.R[0];
    uint32_t _r_08032594;
    _r_08032594 = _rn_08032594 + 0x00000040u;
    arm_set_nzcv_add(_rn_08032594, 0x00000040u, _r_08032594);
    g_cpu.R[0] = _r_08032594;
    g_cpu.R[15] = 0x08032596u;
    runtime_tick(_cyc_08032594);
    }
L_08032596:
    /* 08032596  08032596 T ldrh r0,[r0] */
    {
    g_cpu.R[15] = 0x08032596u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032596 = 1u;
    _cyc_08032596 = 2u;
    uint32_t _base_08032596 = g_cpu.R[0];
    uint32_t _off_08032596;
    _off_08032596 = 0x00000000u;
    uint32_t _ea_08032596 = _base_08032596 + _off_08032596;
    uint32_t _post_08032596 = _base_08032596 + _off_08032596;
    _cyc_08032596 += runtime_mem_cycles(_ea_08032596, 2u, 0u);
    uint32_t _v_08032596;
    { uint32_t _h = bus_read_u16(_ea_08032596 & ~1u); if (_ea_08032596 & 1u) _v_08032596 = ((_h >> 8) | (_h << 24)); else _v_08032596 = _h; }
    g_cpu.R[0] = _v_08032596;
    g_cpu.R[15] = 0x08032598u;
    runtime_tick(_cyc_08032596);
    }
L_08032598:
    /* 08032598  08032598 T strh r0,[r1] */
    {
    g_cpu.R[15] = 0x08032598u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032598 = 1u;
    _cyc_08032598 = 1u;
    uint32_t _base_08032598 = g_cpu.R[1];
    uint32_t _off_08032598;
    _off_08032598 = 0x00000000u;
    uint32_t _ea_08032598 = _base_08032598 + _off_08032598;
    uint32_t _post_08032598 = _base_08032598 + _off_08032598;
    _cyc_08032598 += runtime_mem_cycles(_ea_08032598, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08032598u, _ea_08032598 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08032598 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0803259Au;
    runtime_tick(_cyc_08032598);
    }
L_0803259A:
    /* 0803259A  0803259a T ldr r6,[r15,#0x2c] */
    {
    g_cpu.R[15] = 0x0803259Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803259A = 1u;
    _cyc_0803259A = 2u;
    uint32_t _base_0803259A = 0x0803259Eu & ~3u;
    uint32_t _off_0803259A;
    _off_0803259A = 0x0000002Cu;
    uint32_t _ea_0803259A = _base_0803259A + _off_0803259A;
    uint32_t _post_0803259A = _base_0803259A + _off_0803259A;
    _cyc_0803259A += runtime_mem_cycles(_ea_0803259A, 4u, 0u);
    uint32_t _v_0803259A;
    { uint32_t _w = bus_read_u32(_ea_0803259A & ~3u); uint32_t _rot = (_ea_0803259A & 3u) * 8u; _v_0803259A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_0803259A;
    g_cpu.R[15] = 0x0803259Cu;
    runtime_tick(_cyc_0803259A);
    }
L_0803259C:
    /* 0803259C  0803259c T adds r0,r6,#0x0 */
    {
    g_cpu.R[15] = 0x0803259Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803259C = 1u;
    _cyc_0803259C = 1u;
    uint32_t _rn_0803259C = g_cpu.R[6];
    uint32_t _r_0803259C;
    _r_0803259C = _rn_0803259C + 0x00000000u;
    arm_set_nzcv_add(_rn_0803259C, 0x00000000u, _r_0803259C);
    g_cpu.R[0] = _r_0803259C;
    g_cpu.R[15] = 0x0803259Eu;
    runtime_tick(_cyc_0803259C);
    }
L_0803259E:
    /* 0803259E  0803259e T ands r2,r2,r0 */
    {
    g_cpu.R[15] = 0x0803259Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803259E = 1u;
    _cyc_0803259E = 1u;
    uint32_t _rm_0803259E = g_cpu.R[0];
    uint32_t _op2_0803259E;
    uint32_t _co_0803259E;
    _op2_0803259E = _rm_0803259E;
    _co_0803259E = cpsr_c();
    uint32_t _rn_0803259E = g_cpu.R[2];
    uint32_t _r_0803259E;
    _r_0803259E = _rn_0803259E & _op2_0803259E;
    arm_set_nzc_logic(_r_0803259E, _co_0803259E);
    g_cpu.R[2] = _r_0803259E;
    g_cpu.R[15] = 0x080325A0u;
    runtime_tick(_cyc_0803259E);
    }
L_080325A0:
    /* 080325A0  080325a0 T ldr r1,[r15,#0x28] */
    {
    g_cpu.R[15] = 0x080325A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080325A0 = 1u;
    _cyc_080325A0 = 2u;
    uint32_t _base_080325A0 = 0x080325A4u & ~3u;
    uint32_t _off_080325A0;
    _off_080325A0 = 0x00000028u;
    uint32_t _ea_080325A0 = _base_080325A0 + _off_080325A0;
    uint32_t _post_080325A0 = _base_080325A0 + _off_080325A0;
    _cyc_080325A0 += runtime_mem_cycles(_ea_080325A0, 4u, 0u);
    uint32_t _v_080325A0;
    { uint32_t _w = bus_read_u32(_ea_080325A0 & ~3u); uint32_t _rot = (_ea_080325A0 & 3u) * 8u; _v_080325A0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080325A0;
    g_cpu.R[15] = 0x080325A2u;
    runtime_tick(_cyc_080325A0);
    }
L_080325A2:
    /* 080325A2  080325a2 T adds r0,r1,#0x0 */
    {
    g_cpu.R[15] = 0x080325A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080325A2 = 1u;
    _cyc_080325A2 = 1u;
    uint32_t _rn_080325A2 = g_cpu.R[1];
    uint32_t _r_080325A2;
    _r_080325A2 = _rn_080325A2 + 0x00000000u;
    arm_set_nzcv_add(_rn_080325A2, 0x00000000u, _r_080325A2);
    g_cpu.R[0] = _r_080325A2;
    g_cpu.R[15] = 0x080325A4u;
    runtime_tick(_cyc_080325A2);
    }
L_080325A4:
    /* 080325A4  080325a4 T orrs r2,r2,r0 */
    {
    g_cpu.R[15] = 0x080325A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080325A4 = 1u;
    _cyc_080325A4 = 1u;
    uint32_t _rm_080325A4 = g_cpu.R[0];
    uint32_t _op2_080325A4;
    uint32_t _co_080325A4;
    _op2_080325A4 = _rm_080325A4;
    _co_080325A4 = cpsr_c();
    uint32_t _rn_080325A4 = g_cpu.R[2];
    uint32_t _r_080325A4;
    _r_080325A4 = _rn_080325A4 | _op2_080325A4;
    arm_set_nzc_logic(_r_080325A4, _co_080325A4);
    g_cpu.R[2] = _r_080325A4;
    g_cpu.R[15] = 0x080325A6u;
    runtime_tick(_cyc_080325A4);
    }
L_080325A6:
    /* 080325A6  080325a6 T strh r2,[r3] */
    {
    g_cpu.R[15] = 0x080325A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080325A6 = 1u;
    _cyc_080325A6 = 1u;
    uint32_t _base_080325A6 = g_cpu.R[3];
    uint32_t _off_080325A6;
    _off_080325A6 = 0x00000000u;
    uint32_t _ea_080325A6 = _base_080325A6 + _off_080325A6;
    uint32_t _post_080325A6 = _base_080325A6 + _off_080325A6;
    _cyc_080325A6 += runtime_mem_cycles(_ea_080325A6, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080325A6u, _ea_080325A6 & ~1u, (uint32_t)(g_cpu.R[2] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080325A6 & ~1u, (uint16_t)(g_cpu.R[2] & 0xFFFFu));
    g_cpu.R[15] = 0x080325A8u;
    runtime_tick(_cyc_080325A6);
    }
L_080325A8:
    /* 080325A8  080325a8 T b 0x08032694 */
    {
    g_cpu.R[15] = 0x080325A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080325A8 = 1u;
    _cyc_080325A8 = 3u;
    g_cpu.R[15] = 0x08032694u;
    runtime_tick(_cyc_080325A8);
    gf_tfunc_08032694();
    return;
    g_cpu.R[15] = 0x080325AAu;
    runtime_tick(_cyc_080325A8);
    }
    /* fall-through to 0x080325AA */
    g_cpu.R[15] = 0x080325AAu;
    runtime_dispatch(0x080325AAu);
    return;
}

/* 0x08037470  mode=arm  end=0x0803747C  branches=0  indirect */
void gf_race_08037470(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037474u: goto L_08037474;
        case 0x08037478u: goto L_08037478;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037470u);
    /* 08037470  08037470 A umull raw=0xe0832190 */
    {
    g_cpu.R[15] = 0x08037470u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037470 = 1u;
    _cyc_08037470 = 1u;
    _cyc_08037470 += runtime_mul_cycles(g_cpu.R[1], 0u, 1u);
    uint64_t _p_08037470 = (uint64_t)g_cpu.R[0] * (uint64_t)g_cpu.R[1];
    g_cpu.R[2] = (uint32_t)(_p_08037470 & 0xFFFFFFFFu);
    g_cpu.R[3] = (uint32_t)(_p_08037470 >> 32);
    g_cpu.R[15] = 0x08037474u;
    runtime_tick(_cyc_08037470);
    }
L_08037474:
    /* 08037474  08037474 A add r0,r3,#0x0 */
    {
    g_cpu.R[15] = 0x08037474u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037474 = 1u;
    _cyc_08037474 = 1u;
    uint32_t _rn_08037474 = g_cpu.R[3];
    uint32_t _r_08037474;
    _r_08037474 = _rn_08037474 + 0x00000000u;
    g_cpu.R[0] = _r_08037474;
    g_cpu.R[15] = 0x08037478u;
    runtime_tick(_cyc_08037474);
    }
L_08037478:
    /* 08037478  08037478 A bx r14 */
    {
    g_cpu.R[15] = 0x08037478u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037478 = 1u;
    _cyc_08037478 = 3u;
    uint32_t _bxt_08037478 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08037478 & ~1u;
    if (_bxt_08037478 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08037478);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08037478);
    return;
    g_cpu.R[15] = 0x0803747Cu;
    runtime_tick(_cyc_08037478);
    }
    /* fall-through to 0x0803747C */
    g_cpu.R[15] = 0x0803747Cu;
    runtime_dispatch(0x0803747Cu);
    return;
}

/* 0x08037BE2  mode=thumb  end=0x08037BE6  branches=3 */
void gf_race_08037be2(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037BE4u: goto L_08037BE4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037BE2u);
    /* 08037BE2  08037be2 T movs r0,#0x80 */
    {
    g_cpu.R[15] = 0x08037BE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BE2 = 1u;
    _cyc_08037BE2 = 1u;
    uint32_t _r_08037BE2;
    _r_08037BE2 = 0x00000080u;
    arm_set_nzc_logic(_r_08037BE2, cpsr_c());
    g_cpu.R[0] = _r_08037BE2;
    g_cpu.R[15] = 0x08037BE4u;
    runtime_tick(_cyc_08037BE2);
    }
L_08037BE4:
    /* 08037BE4  08037be4 T subs r2,r0,r1 */
    {
    g_cpu.R[15] = 0x08037BE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BE4 = 1u;
    _cyc_08037BE4 = 1u;
    uint32_t _rm_08037BE4 = g_cpu.R[1];
    uint32_t _op2_08037BE4;
    uint32_t _co_08037BE4;
    _op2_08037BE4 = _rm_08037BE4;
    _co_08037BE4 = cpsr_c();
    uint32_t _rn_08037BE4 = g_cpu.R[0];
    uint32_t _r_08037BE4;
    _r_08037BE4 = _rn_08037BE4 - _op2_08037BE4;
    arm_set_nzcv_sub(_rn_08037BE4, _op2_08037BE4, _r_08037BE4);
    g_cpu.R[2] = _r_08037BE4;
    g_cpu.R[15] = 0x08037BE6u;
    runtime_tick(_cyc_08037BE4);
    }
    /* fall-through to 0x08037BE6 */
    g_cpu.R[15] = 0x08037BE6u;
    runtime_dispatch(0x08037BE6u);
    return;
}

/* 0x08037C5A  mode=thumb  end=0x08037C68  branches=4 */
void gf_race_08037c5a(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037C5Cu: goto L_08037C5C;
        case 0x08037C5Eu: goto L_08037C5E;
        case 0x08037C60u: goto L_08037C60;
        case 0x08037C62u: goto L_08037C62;
        case 0x08037C64u: goto L_08037C64;
        case 0x08037C66u: goto L_08037C66;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037C5Au);
    /* 08037C5A  08037c5a T ldrb r1,[r4] */
    {
    g_cpu.R[15] = 0x08037C5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C5A = 1u;
    _cyc_08037C5A = 2u;
    uint32_t _base_08037C5A = g_cpu.R[4];
    uint32_t _off_08037C5A;
    _off_08037C5A = 0x00000000u;
    uint32_t _ea_08037C5A = _base_08037C5A + _off_08037C5A;
    uint32_t _post_08037C5A = _base_08037C5A + _off_08037C5A;
    _cyc_08037C5A += runtime_mem_cycles(_ea_08037C5A, 1u, 0u);
    uint32_t _v_08037C5A;
    _v_08037C5A = bus_read_u8(_ea_08037C5A);
    g_cpu.R[1] = _v_08037C5A;
    g_cpu.R[15] = 0x08037C5Cu;
    runtime_tick(_cyc_08037C5A);
    }
L_08037C5C:
    /* 08037C5C  08037c5c T movs r0,#0xc7 */
    {
    g_cpu.R[15] = 0x08037C5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C5C = 1u;
    _cyc_08037C5C = 1u;
    uint32_t _r_08037C5C;
    _r_08037C5C = 0x000000C7u;
    arm_set_nzc_logic(_r_08037C5C, cpsr_c());
    g_cpu.R[0] = _r_08037C5C;
    g_cpu.R[15] = 0x08037C5Eu;
    runtime_tick(_cyc_08037C5C);
    }
L_08037C5E:
    /* 08037C5E  08037c5e T tsts r0,r1 */
    {
    g_cpu.R[15] = 0x08037C5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C5E = 1u;
    _cyc_08037C5E = 1u;
    uint32_t _rm_08037C5E = g_cpu.R[1];
    uint32_t _op2_08037C5E;
    uint32_t _co_08037C5E;
    _op2_08037C5E = _rm_08037C5E;
    _co_08037C5E = cpsr_c();
    uint32_t _rn_08037C5E = g_cpu.R[0];
    uint32_t _r_08037C5E;
    _r_08037C5E = _rn_08037C5E & _op2_08037C5E;
    arm_set_nzc_logic(_r_08037C5E, _co_08037C5E);
    g_cpu.R[15] = 0x08037C60u;
    runtime_tick(_cyc_08037C5E);
    }
L_08037C60:
    /* 08037C60  08037c60 T bne 0x08037c6a */
    {
    g_cpu.R[15] = 0x08037C60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C60 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08037C60 = 3u;
        g_cpu.R[15] = 0x08037C6Au;
        runtime_tick(_cyc_08037C60);
        gf_race_08037c6a();
        return;
    }
    g_cpu.R[15] = 0x08037C62u;
    runtime_tick(_cyc_08037C60);
    }
L_08037C62:
    /* 08037C62  08037c62 T adds r0,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08037C62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C62 = 1u;
    _cyc_08037C62 = 1u;
    uint32_t _rn_08037C62 = g_cpu.R[4];
    uint32_t _r_08037C62;
    _r_08037C62 = _rn_08037C62 + 0x00000000u;
    arm_set_nzcv_add(_rn_08037C62, 0x00000000u, _r_08037C62);
    g_cpu.R[0] = _r_08037C62;
    g_cpu.R[15] = 0x08037C64u;
    runtime_tick(_cyc_08037C62);
    }
L_08037C64:
    /* 08037C64  08037c64 T bl.hi 0x08037c68 */
    {
    g_cpu.R[15] = 0x08037C64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C64 = 1u;
    _cyc_08037C64 = 1u;
    g_cpu.R[14] = 0x08037C68u;
    g_cpu.R[15] = 0x08037C66u;
    runtime_tick(_cyc_08037C64);
    }
L_08037C66:
    /* 08037C66  08037c66 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08037C66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C66 = 1u;
    _cyc_08037C66 = 3u;
    uint32_t _blt_08037C66 = (g_cpu.R[14] + 0x00000818u) & ~1u;
    g_cpu.R[14] = 0x08037C69u;
    g_cpu.R[15] = _blt_08037C66;
    runtime_call_push_return(0x08037C68u);
    runtime_tick(_cyc_08037C66);
    _cyc_08037C66 = 0u;
    runtime_dispatch(_blt_08037C66);
    if (g_cpu.R[15] != 0x08037C68u) { runtime_call_cancel_return(0x08037C68u); return; }
    g_cpu.R[15] = 0x08037C68u;
    runtime_tick(_cyc_08037C66);
    }
    /* fall-through to 0x08037C68 */
    g_cpu.R[15] = 0x08037C68u;
    runtime_dispatch(0x08037C68u);
    return;
}

/* 0x08037C6A  mode=thumb  end=0x08037C7C  branches=10 */
void gf_race_08037c6a(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037C6Cu: goto L_08037C6C;
        case 0x08037C6Eu: goto L_08037C6E;
        case 0x08037C70u: goto L_08037C70;
        case 0x08037C72u: goto L_08037C72;
        case 0x08037C74u: goto L_08037C74;
        case 0x08037C76u: goto L_08037C76;
        case 0x08037C78u: goto L_08037C78;
        case 0x08037C7Au: goto L_08037C7A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037C6Au);
    /* 08037C6A  08037c6a T ldrb r0,[r4,#0x1] */
    {
    g_cpu.R[15] = 0x08037C6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C6A = 1u;
    _cyc_08037C6A = 2u;
    uint32_t _base_08037C6A = g_cpu.R[4];
    uint32_t _off_08037C6A;
    _off_08037C6A = 0x00000001u;
    uint32_t _ea_08037C6A = _base_08037C6A + _off_08037C6A;
    uint32_t _post_08037C6A = _base_08037C6A + _off_08037C6A;
    _cyc_08037C6A += runtime_mem_cycles(_ea_08037C6A, 1u, 0u);
    uint32_t _v_08037C6A;
    _v_08037C6A = bus_read_u8(_ea_08037C6A);
    g_cpu.R[0] = _v_08037C6A;
    g_cpu.R[15] = 0x08037C6Cu;
    runtime_tick(_cyc_08037C6A);
    }
L_08037C6C:
    /* 08037C6C  08037c6c T movs r6,#0x7 */
    {
    g_cpu.R[15] = 0x08037C6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C6C = 1u;
    _cyc_08037C6C = 1u;
    uint32_t _r_08037C6C;
    _r_08037C6C = 0x00000007u;
    arm_set_nzc_logic(_r_08037C6C, cpsr_c());
    g_cpu.R[6] = _r_08037C6C;
    g_cpu.R[15] = 0x08037C6Eu;
    runtime_tick(_cyc_08037C6C);
    }
L_08037C6E:
    /* 08037C6E  08037c6e T ands r6,r6,r0 */
    {
    g_cpu.R[15] = 0x08037C6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C6E = 1u;
    _cyc_08037C6E = 1u;
    uint32_t _rm_08037C6E = g_cpu.R[0];
    uint32_t _op2_08037C6E;
    uint32_t _co_08037C6E;
    _op2_08037C6E = _rm_08037C6E;
    _co_08037C6E = cpsr_c();
    uint32_t _rn_08037C6E = g_cpu.R[6];
    uint32_t _r_08037C6E;
    _r_08037C6E = _rn_08037C6E & _op2_08037C6E;
    arm_set_nzc_logic(_r_08037C6E, _co_08037C6E);
    g_cpu.R[6] = _r_08037C6E;
    g_cpu.R[15] = 0x08037C70u;
    runtime_tick(_cyc_08037C6E);
    }
L_08037C70:
    /* 08037C70  08037c70 T ldrb r3,[r5] */
    {
    g_cpu.R[15] = 0x08037C70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C70 = 1u;
    _cyc_08037C70 = 2u;
    uint32_t _base_08037C70 = g_cpu.R[5];
    uint32_t _off_08037C70;
    _off_08037C70 = 0x00000000u;
    uint32_t _ea_08037C70 = _base_08037C70 + _off_08037C70;
    uint32_t _post_08037C70 = _base_08037C70 + _off_08037C70;
    _cyc_08037C70 += runtime_mem_cycles(_ea_08037C70, 1u, 0u);
    uint32_t _v_08037C70;
    _v_08037C70 = bus_read_u8(_ea_08037C70);
    g_cpu.R[3] = _v_08037C70;
    g_cpu.R[15] = 0x08037C72u;
    runtime_tick(_cyc_08037C70);
    }
L_08037C72:
    /* 08037C72  08037c72 T movs r0,#0x3 */
    {
    g_cpu.R[15] = 0x08037C72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C72 = 1u;
    _cyc_08037C72 = 1u;
    uint32_t _r_08037C72;
    _r_08037C72 = 0x00000003u;
    arm_set_nzc_logic(_r_08037C72, cpsr_c());
    g_cpu.R[0] = _r_08037C72;
    g_cpu.R[15] = 0x08037C74u;
    runtime_tick(_cyc_08037C72);
    }
L_08037C74:
    /* 08037C74  08037c74 T tsts r0,r3 */
    {
    g_cpu.R[15] = 0x08037C74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C74 = 1u;
    _cyc_08037C74 = 1u;
    uint32_t _rm_08037C74 = g_cpu.R[3];
    uint32_t _op2_08037C74;
    uint32_t _co_08037C74;
    _op2_08037C74 = _rm_08037C74;
    _co_08037C74 = cpsr_c();
    uint32_t _rn_08037C74 = g_cpu.R[0];
    uint32_t _r_08037C74;
    _r_08037C74 = _rn_08037C74 & _op2_08037C74;
    arm_set_nzc_logic(_r_08037C74, _co_08037C74);
    g_cpu.R[15] = 0x08037C76u;
    runtime_tick(_cyc_08037C74);
    }
L_08037C76:
    /* 08037C76  08037c76 T beq 0x08037c88 */
    {
    g_cpu.R[15] = 0x08037C76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C76 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08037C76 = 3u;
        g_cpu.R[15] = 0x08037C88u;
        runtime_tick(_cyc_08037C76);
        gf_race_08037c88();
        return;
    }
    g_cpu.R[15] = 0x08037C78u;
    runtime_tick(_cyc_08037C76);
    }
L_08037C78:
    /* 08037C78  08037c78 T bl.hi 0x08037c7c */
    {
    g_cpu.R[15] = 0x08037C78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C78 = 1u;
    _cyc_08037C78 = 1u;
    g_cpu.R[14] = 0x08037C7Cu;
    g_cpu.R[15] = 0x08037C7Au;
    runtime_tick(_cyc_08037C78);
    }
L_08037C7A:
    /* 08037C7A  08037c7a T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08037C7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C7A = 1u;
    _cyc_08037C7A = 3u;
    uint32_t _blt_08037C7A = (g_cpu.R[14] + 0x000000C8u) & ~1u;
    g_cpu.R[14] = 0x08037C7Du;
    g_cpu.R[15] = _blt_08037C7A;
    runtime_call_push_return(0x08037C7Cu);
    runtime_tick(_cyc_08037C7A);
    _cyc_08037C7A = 0u;
    runtime_dispatch(_blt_08037C7A);
    if (g_cpu.R[15] != 0x08037C7Cu) { runtime_call_cancel_return(0x08037C7Cu); return; }
    g_cpu.R[15] = 0x08037C7Cu;
    runtime_tick(_cyc_08037C7A);
    }
    /* fall-through to 0x08037C7C */
    g_cpu.R[15] = 0x08037C7Cu;
    runtime_dispatch(0x08037C7Cu);
    return;
}

/* 0x08038050  mode=thumb  end=0x0803805A  branches=2  indirect */
void gf_race_08038050(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038052u: goto L_08038052;
        case 0x08038054u: goto L_08038054;
        case 0x08038056u: goto L_08038056;
        case 0x08038058u: goto L_08038058;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038050u);
    /* 08038050  08038050 T adds r1,r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038050u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038050 = 1u;
    _cyc_08038050 = 1u;
    uint32_t _rn_08038050 = g_cpu.R[0];
    uint32_t _r_08038050;
    _r_08038050 = _rn_08038050 + 0x00000000u;
    arm_set_nzcv_add(_rn_08038050, 0x00000000u, _r_08038050);
    g_cpu.R[1] = _r_08038050;
    g_cpu.R[15] = 0x08038052u;
    runtime_tick(_cyc_08038050);
    }
L_08038052:
    /* 08038052  08038052 T adds r1,r5,r1 */
    {
    g_cpu.R[15] = 0x08038052u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038052 = 1u;
    _cyc_08038052 = 1u;
    uint32_t _rm_08038052 = g_cpu.R[1];
    uint32_t _op2_08038052;
    uint32_t _co_08038052;
    _op2_08038052 = _rm_08038052;
    _co_08038052 = cpsr_c();
    uint32_t _rn_08038052 = g_cpu.R[5];
    uint32_t _r_08038052;
    _r_08038052 = _rn_08038052 + _op2_08038052;
    arm_set_nzcv_add(_rn_08038052, _op2_08038052, _r_08038052);
    g_cpu.R[1] = _r_08038052;
    g_cpu.R[15] = 0x08038054u;
    runtime_tick(_cyc_08038052);
    }
L_08038054:
    /* 08038054  08038054 T adds r0,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08038054u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038054 = 1u;
    _cyc_08038054 = 1u;
    uint32_t _rn_08038054 = g_cpu.R[4];
    uint32_t _r_08038054;
    _r_08038054 = _rn_08038054 + 0x00000000u;
    arm_set_nzcv_add(_rn_08038054, 0x00000000u, _r_08038054);
    g_cpu.R[0] = _r_08038054;
    g_cpu.R[15] = 0x08038056u;
    runtime_tick(_cyc_08038054);
    }
L_08038056:
    /* 08038056  08038056 T bl.hi 0x0803705a */
    {
    g_cpu.R[15] = 0x08038056u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038056 = 1u;
    _cyc_08038056 = 1u;
    g_cpu.R[14] = 0x0803705Au;
    g_cpu.R[15] = 0x08038058u;
    runtime_tick(_cyc_08038056);
    }
L_08038058:
    /* 08038058  08038058 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08038058u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038058 = 1u;
    _cyc_08038058 = 3u;
    uint32_t _blt_08038058 = (g_cpu.R[14] + 0x00000412u) & ~1u;
    g_cpu.R[14] = 0x0803805Bu;
    g_cpu.R[15] = _blt_08038058;
    runtime_call_push_return(0x0803805Au);
    runtime_tick(_cyc_08038058);
    _cyc_08038058 = 0u;
    runtime_dispatch(_blt_08038058);
    if (g_cpu.R[15] != 0x0803805Au) { runtime_call_cancel_return(0x0803805Au); return; }
    g_cpu.R[15] = 0x0803805Au;
    runtime_tick(_cyc_08038058);
    }
    /* fall-through to 0x0803805A */
    g_cpu.R[15] = 0x0803805Au;
    runtime_dispatch(0x0803805Au);
    return;
}

/* 0x08038E58  mode=thumb  end=0x08038E72  branches=5 */
void gf_race_08038e58(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038E5Au: goto L_08038E5A;
        case 0x08038E5Cu: goto L_08038E5C;
        case 0x08038E5Eu: goto L_08038E5E;
        case 0x08038E60u: goto L_08038E60;
        case 0x08038E62u: goto L_08038E62;
        case 0x08038E64u: goto L_08038E64;
        case 0x08038E66u: goto L_08038E66;
        case 0x08038E68u: goto L_08038E68;
        case 0x08038E6Au: goto L_08038E6A;
        case 0x08038E6Cu: goto L_08038E6C;
        case 0x08038E6Eu: goto L_08038E6E;
        case 0x08038E70u: goto L_08038E70;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038E58u);
    /* 08038E58  08038e58 T movs r0,#0x3 */
    {
    g_cpu.R[15] = 0x08038E58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E58 = 1u;
    _cyc_08038E58 = 1u;
    uint32_t _r_08038E58;
    _r_08038E58 = 0x00000003u;
    arm_set_nzc_logic(_r_08038E58, cpsr_c());
    g_cpu.R[0] = _r_08038E58;
    g_cpu.R[15] = 0x08038E5Au;
    runtime_tick(_cyc_08038E58);
    }
L_08038E5A:
    /* 08038E5A  08038e5a T ldrb r2,[r4] */
    {
    g_cpu.R[15] = 0x08038E5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E5A = 1u;
    _cyc_08038E5A = 2u;
    uint32_t _base_08038E5A = g_cpu.R[4];
    uint32_t _off_08038E5A;
    _off_08038E5A = 0x00000000u;
    uint32_t _ea_08038E5A = _base_08038E5A + _off_08038E5A;
    uint32_t _post_08038E5A = _base_08038E5A + _off_08038E5A;
    _cyc_08038E5A += runtime_mem_cycles(_ea_08038E5A, 1u, 0u);
    uint32_t _v_08038E5A;
    _v_08038E5A = bus_read_u8(_ea_08038E5A);
    g_cpu.R[2] = _v_08038E5A;
    g_cpu.R[15] = 0x08038E5Cu;
    runtime_tick(_cyc_08038E5A);
    }
L_08038E5C:
    /* 08038E5C  08038e5c T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038E5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E5C = 1u;
    _cyc_08038E5C = 1u;
    uint32_t _rm_08038E5C = g_cpu.R[2];
    uint32_t _op2_08038E5C;
    uint32_t _co_08038E5C;
    _op2_08038E5C = _rm_08038E5C;
    _co_08038E5C = cpsr_c();
    uint32_t _rn_08038E5C = g_cpu.R[0];
    uint32_t _r_08038E5C;
    _r_08038E5C = _rn_08038E5C & _op2_08038E5C;
    arm_set_nzc_logic(_r_08038E5C, _co_08038E5C);
    g_cpu.R[0] = _r_08038E5C;
    g_cpu.R[15] = 0x08038E5Eu;
    runtime_tick(_cyc_08038E5C);
    }
L_08038E5E:
    /* 08038E5E  08038e5e T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038E5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E5E = 1u;
    _cyc_08038E5E = 1u;
    uint32_t _rn_08038E5E = g_cpu.R[0];
    uint32_t _r_08038E5E;
    _r_08038E5E = _rn_08038E5E - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038E5E, 0x00000000u, _r_08038E5E);
    g_cpu.R[15] = 0x08038E60u;
    runtime_tick(_cyc_08038E5E);
    }
L_08038E60:
    /* 08038E60  08038e60 T bne 0x08038ea6 */
    {
    g_cpu.R[15] = 0x08038E60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E60 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08038E60 = 3u;
        g_cpu.R[15] = 0x08038EA6u;
        runtime_tick(_cyc_08038E60);
        gf_tfunc_08038EA6();
        return;
    }
    g_cpu.R[15] = 0x08038E62u;
    runtime_tick(_cyc_08038E60);
    }
L_08038E62:
    /* 08038E62  08038e62 T ldrb r0,[r4,#0x9] */
    {
    g_cpu.R[15] = 0x08038E62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E62 = 1u;
    _cyc_08038E62 = 2u;
    uint32_t _base_08038E62 = g_cpu.R[4];
    uint32_t _off_08038E62;
    _off_08038E62 = 0x00000009u;
    uint32_t _ea_08038E62 = _base_08038E62 + _off_08038E62;
    uint32_t _post_08038E62 = _base_08038E62 + _off_08038E62;
    _cyc_08038E62 += runtime_mem_cycles(_ea_08038E62, 1u, 0u);
    uint32_t _v_08038E62;
    _v_08038E62 = bus_read_u8(_ea_08038E62);
    g_cpu.R[0] = _v_08038E62;
    g_cpu.R[15] = 0x08038E64u;
    runtime_tick(_cyc_08038E62);
    }
L_08038E64:
    /* 08038E64  08038e64 T subs r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x08038E64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E64 = 1u;
    _cyc_08038E64 = 1u;
    uint32_t _rn_08038E64 = g_cpu.R[0];
    uint32_t _r_08038E64;
    _r_08038E64 = _rn_08038E64 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08038E64, 0x00000001u, _r_08038E64);
    g_cpu.R[0] = _r_08038E64;
    g_cpu.R[15] = 0x08038E66u;
    runtime_tick(_cyc_08038E64);
    }
L_08038E66:
    /* 08038E66  08038e66 T strb r0,[r4,#0x9] */
    {
    g_cpu.R[15] = 0x08038E66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E66 = 1u;
    _cyc_08038E66 = 1u;
    uint32_t _base_08038E66 = g_cpu.R[4];
    uint32_t _off_08038E66;
    _off_08038E66 = 0x00000009u;
    uint32_t _ea_08038E66 = _base_08038E66 + _off_08038E66;
    uint32_t _post_08038E66 = _base_08038E66 + _off_08038E66;
    _cyc_08038E66 += runtime_mem_cycles(_ea_08038E66, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038E66u, _ea_08038E66, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038E66, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038E68u;
    runtime_tick(_cyc_08038E66);
    }
L_08038E68:
    /* 08038E68  08038e68 T movs r1,#0xff */
    {
    g_cpu.R[15] = 0x08038E68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E68 = 1u;
    _cyc_08038E68 = 1u;
    uint32_t _r_08038E68;
    _r_08038E68 = 0x000000FFu;
    arm_set_nzc_logic(_r_08038E68, cpsr_c());
    g_cpu.R[1] = _r_08038E68;
    g_cpu.R[15] = 0x08038E6Au;
    runtime_tick(_cyc_08038E68);
    }
L_08038E6A:
    /* 08038E6A  08038e6a T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08038E6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E6A = 1u;
    _cyc_08038E6A = 1u;
    uint32_t _rm_08038E6A = g_cpu.R[1];
    uint32_t _op2_08038E6A;
    uint32_t _co_08038E6A;
    _op2_08038E6A = _rm_08038E6A;
    _co_08038E6A = cpsr_c();
    uint32_t _rn_08038E6A = g_cpu.R[0];
    uint32_t _r_08038E6A;
    _r_08038E6A = _rn_08038E6A & _op2_08038E6A;
    arm_set_nzc_logic(_r_08038E6A, _co_08038E6A);
    g_cpu.R[0] = _r_08038E6A;
    g_cpu.R[15] = 0x08038E6Cu;
    runtime_tick(_cyc_08038E6A);
    }
L_08038E6C:
    /* 08038E6C  08038e6c T movs r0,r0,lsl #24 */
    {
    g_cpu.R[15] = 0x08038E6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E6C = 1u;
    _cyc_08038E6C = 1u;
    uint32_t _rm_08038E6C = g_cpu.R[0];
    uint32_t _op2_08038E6C;
    uint32_t _co_08038E6C;
    _op2_08038E6C = _rm_08038E6C << 24;
    _co_08038E6C = (_rm_08038E6C >> 8) & 1u;
    uint32_t _r_08038E6C;
    _r_08038E6C = _op2_08038E6C;
    arm_set_nzc_logic(_r_08038E6C, _co_08038E6C);
    g_cpu.R[0] = _r_08038E6C;
    g_cpu.R[15] = 0x08038E6Eu;
    runtime_tick(_cyc_08038E6C);
    }
L_08038E6E:
    /* 08038E6E  08038e6e T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038E6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E6E = 1u;
    _cyc_08038E6E = 1u;
    uint32_t _rn_08038E6E = g_cpu.R[0];
    uint32_t _r_08038E6E;
    _r_08038E6E = _rn_08038E6E - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038E6E, 0x00000000u, _r_08038E6E);
    g_cpu.R[15] = 0x08038E70u;
    runtime_tick(_cyc_08038E6E);
    }
L_08038E70:
    /* 08038E70  08038e70 T bgt 0x08038ea2 */
    {
    g_cpu.R[15] = 0x08038E70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E70 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_08038E70 = 3u;
        g_cpu.R[15] = 0x08038EA2u;
        runtime_tick(_cyc_08038E70);
        gf_tfunc_08038EA2();
        return;
    }
    g_cpu.R[15] = 0x08038E72u;
    runtime_tick(_cyc_08038E70);
    }
    /* fall-through to 0x08038E72 */
    g_cpu.R[15] = 0x08038E72u;
    runtime_dispatch(0x08038E72u);
    return;
}

/* 0x08038FBE  mode=thumb  end=0x08039006  branches=4 */
void gf_race_08038fbe(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038FC0u: goto L_08038FC0;
        case 0x08038FC2u: goto L_08038FC2;
        case 0x08038FC4u: goto L_08038FC4;
        case 0x08038FC6u: goto L_08038FC6;
        case 0x08038FC8u: goto L_08038FC8;
        case 0x08038FCAu: goto L_08038FCA;
        case 0x08038FCCu: goto L_08038FCC;
        case 0x08038FCEu: goto L_08038FCE;
        case 0x08038FD0u: goto L_08038FD0;
        case 0x08038FD2u: goto L_08038FD2;
        case 0x08038FD4u: goto L_08038FD4;
        case 0x08038FD6u: goto L_08038FD6;
        case 0x08038FD8u: goto L_08038FD8;
        case 0x08038FDAu: goto L_08038FDA;
        case 0x08038FDCu: goto L_08038FDC;
        case 0x08038FDEu: goto L_08038FDE;
        case 0x08038FE0u: goto L_08038FE0;
        case 0x08038FE2u: goto L_08038FE2;
        case 0x08038FE4u: goto L_08038FE4;
        case 0x08038FE6u: goto L_08038FE6;
        case 0x08038FE8u: goto L_08038FE8;
        case 0x08038FEAu: goto L_08038FEA;
        case 0x08038FECu: goto L_08038FEC;
        case 0x08038FEEu: goto L_08038FEE;
        case 0x08038FF0u: goto L_08038FF0;
        case 0x08038FF2u: goto L_08038FF2;
        case 0x08038FF4u: goto L_08038FF4;
        case 0x08038FF6u: goto L_08038FF6;
        case 0x08038FF8u: goto L_08038FF8;
        case 0x08038FFAu: goto L_08038FFA;
        case 0x08038FFCu: goto L_08038FFC;
        case 0x08038FFEu: goto L_08038FFE;
        case 0x08039000u: goto L_08039000;
        case 0x08039002u: goto L_08039002;
        case 0x08039004u: goto L_08039004;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038FBEu);
    /* 08038FBE  08038fbe T movs r0,#0x1 */
    {
    g_cpu.R[15] = 0x08038FBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FBE = 1u;
    _cyc_08038FBE = 1u;
    uint32_t _r_08038FBE;
    _r_08038FBE = 0x00000001u;
    arm_set_nzc_logic(_r_08038FBE, cpsr_c());
    g_cpu.R[0] = _r_08038FBE;
    g_cpu.R[15] = 0x08038FC0u;
    runtime_tick(_cyc_08038FBE);
    }
L_08038FC0:
    /* 08038FC0  08038fc0 T ldrb r2,[r4,#0x1d] */
    {
    g_cpu.R[15] = 0x08038FC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FC0 = 1u;
    _cyc_08038FC0 = 2u;
    uint32_t _base_08038FC0 = g_cpu.R[4];
    uint32_t _off_08038FC0;
    _off_08038FC0 = 0x0000001Du;
    uint32_t _ea_08038FC0 = _base_08038FC0 + _off_08038FC0;
    uint32_t _post_08038FC0 = _base_08038FC0 + _off_08038FC0;
    _cyc_08038FC0 += runtime_mem_cycles(_ea_08038FC0, 1u, 0u);
    uint32_t _v_08038FC0;
    _v_08038FC0 = bus_read_u8(_ea_08038FC0);
    g_cpu.R[2] = _v_08038FC0;
    g_cpu.R[15] = 0x08038FC2u;
    runtime_tick(_cyc_08038FC0);
    }
L_08038FC2:
    /* 08038FC2  08038fc2 T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038FC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FC2 = 1u;
    _cyc_08038FC2 = 1u;
    uint32_t _rm_08038FC2 = g_cpu.R[2];
    uint32_t _op2_08038FC2;
    uint32_t _co_08038FC2;
    _op2_08038FC2 = _rm_08038FC2;
    _co_08038FC2 = cpsr_c();
    uint32_t _rn_08038FC2 = g_cpu.R[0];
    uint32_t _r_08038FC2;
    _r_08038FC2 = _rn_08038FC2 & _op2_08038FC2;
    arm_set_nzc_logic(_r_08038FC2, _co_08038FC2);
    g_cpu.R[0] = _r_08038FC2;
    g_cpu.R[15] = 0x08038FC4u;
    runtime_tick(_cyc_08038FC2);
    }
L_08038FC4:
    /* 08038FC4  08038fc4 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038FC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FC4 = 1u;
    _cyc_08038FC4 = 1u;
    uint32_t _rn_08038FC4 = g_cpu.R[0];
    uint32_t _r_08038FC4;
    _r_08038FC4 = _rn_08038FC4 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038FC4, 0x00000000u, _r_08038FC4);
    g_cpu.R[15] = 0x08038FC6u;
    runtime_tick(_cyc_08038FC4);
    }
L_08038FC6:
    /* 08038FC6  08038fc6 T beq 0x08039044 */
    {
    g_cpu.R[15] = 0x08038FC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FC6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038FC6 = 3u;
        g_cpu.R[15] = 0x08039044u;
        runtime_tick(_cyc_08038FC6);
        gf_race_08039044();
        return;
    }
    g_cpu.R[15] = 0x08038FC8u;
    runtime_tick(_cyc_08038FC6);
    }
L_08038FC8:
    /* 08038FC8  08038fc8 T ldr r1,[r15,#0x3c] */
    {
    g_cpu.R[15] = 0x08038FC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FC8 = 1u;
    _cyc_08038FC8 = 2u;
    uint32_t _base_08038FC8 = 0x08038FCCu & ~3u;
    uint32_t _off_08038FC8;
    _off_08038FC8 = 0x0000003Cu;
    uint32_t _ea_08038FC8 = _base_08038FC8 + _off_08038FC8;
    uint32_t _post_08038FC8 = _base_08038FC8 + _off_08038FC8;
    _cyc_08038FC8 += runtime_mem_cycles(_ea_08038FC8, 4u, 0u);
    uint32_t _v_08038FC8;
    { uint32_t _w = bus_read_u32(_ea_08038FC8 & ~3u); uint32_t _rot = (_ea_08038FC8 & 3u) * 8u; _v_08038FC8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08038FC8;
    g_cpu.R[15] = 0x08038FCAu;
    runtime_tick(_cyc_08038FC8);
    }
L_08038FCA:
    /* 08038FCA  08038fca T ldrb r0,[r1] */
    {
    g_cpu.R[15] = 0x08038FCAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FCA = 1u;
    _cyc_08038FCA = 2u;
    uint32_t _base_08038FCA = g_cpu.R[1];
    uint32_t _off_08038FCA;
    _off_08038FCA = 0x00000000u;
    uint32_t _ea_08038FCA = _base_08038FCA + _off_08038FCA;
    uint32_t _post_08038FCA = _base_08038FCA + _off_08038FCA;
    _cyc_08038FCA += runtime_mem_cycles(_ea_08038FCA, 1u, 0u);
    uint32_t _v_08038FCA;
    _v_08038FCA = bus_read_u8(_ea_08038FCA);
    g_cpu.R[0] = _v_08038FCA;
    g_cpu.R[15] = 0x08038FCCu;
    runtime_tick(_cyc_08038FCA);
    }
L_08038FCC:
    /* 08038FCC  08038fcc T ldrb r2,[r4,#0x1c] */
    {
    g_cpu.R[15] = 0x08038FCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FCC = 1u;
    _cyc_08038FCC = 2u;
    uint32_t _base_08038FCC = g_cpu.R[4];
    uint32_t _off_08038FCC;
    _off_08038FCC = 0x0000001Cu;
    uint32_t _ea_08038FCC = _base_08038FCC + _off_08038FCC;
    uint32_t _post_08038FCC = _base_08038FCC + _off_08038FCC;
    _cyc_08038FCC += runtime_mem_cycles(_ea_08038FCC, 1u, 0u);
    uint32_t _v_08038FCC;
    _v_08038FCC = bus_read_u8(_ea_08038FCC);
    g_cpu.R[2] = _v_08038FCC;
    g_cpu.R[15] = 0x08038FCEu;
    runtime_tick(_cyc_08038FCC);
    }
L_08038FCE:
    /* 08038FCE  08038fce T bics r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038FCEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FCE = 1u;
    _cyc_08038FCE = 1u;
    uint32_t _rm_08038FCE = g_cpu.R[2];
    uint32_t _op2_08038FCE;
    uint32_t _co_08038FCE;
    _op2_08038FCE = _rm_08038FCE;
    _co_08038FCE = cpsr_c();
    uint32_t _rn_08038FCE = g_cpu.R[0];
    uint32_t _r_08038FCE;
    _r_08038FCE = _rn_08038FCE & ~(_op2_08038FCE);
    arm_set_nzc_logic(_r_08038FCE, _co_08038FCE);
    g_cpu.R[0] = _r_08038FCE;
    g_cpu.R[15] = 0x08038FD0u;
    runtime_tick(_cyc_08038FCE);
    }
L_08038FD0:
    /* 08038FD0  08038fd0 T ldrb r2,[r4,#0x1b] */
    {
    g_cpu.R[15] = 0x08038FD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FD0 = 1u;
    _cyc_08038FD0 = 2u;
    uint32_t _base_08038FD0 = g_cpu.R[4];
    uint32_t _off_08038FD0;
    _off_08038FD0 = 0x0000001Bu;
    uint32_t _ea_08038FD0 = _base_08038FD0 + _off_08038FD0;
    uint32_t _post_08038FD0 = _base_08038FD0 + _off_08038FD0;
    _cyc_08038FD0 += runtime_mem_cycles(_ea_08038FD0, 1u, 0u);
    uint32_t _v_08038FD0;
    _v_08038FD0 = bus_read_u8(_ea_08038FD0);
    g_cpu.R[2] = _v_08038FD0;
    g_cpu.R[15] = 0x08038FD2u;
    runtime_tick(_cyc_08038FD0);
    }
L_08038FD2:
    /* 08038FD2  08038fd2 T orrs r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038FD2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FD2 = 1u;
    _cyc_08038FD2 = 1u;
    uint32_t _rm_08038FD2 = g_cpu.R[2];
    uint32_t _op2_08038FD2;
    uint32_t _co_08038FD2;
    _op2_08038FD2 = _rm_08038FD2;
    _co_08038FD2 = cpsr_c();
    uint32_t _rn_08038FD2 = g_cpu.R[0];
    uint32_t _r_08038FD2;
    _r_08038FD2 = _rn_08038FD2 | _op2_08038FD2;
    arm_set_nzc_logic(_r_08038FD2, _co_08038FD2);
    g_cpu.R[0] = _r_08038FD2;
    g_cpu.R[15] = 0x08038FD4u;
    runtime_tick(_cyc_08038FD2);
    }
L_08038FD4:
    /* 08038FD4  08038fd4 T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08038FD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FD4 = 1u;
    _cyc_08038FD4 = 1u;
    uint32_t _base_08038FD4 = g_cpu.R[1];
    uint32_t _off_08038FD4;
    _off_08038FD4 = 0x00000000u;
    uint32_t _ea_08038FD4 = _base_08038FD4 + _off_08038FD4;
    uint32_t _post_08038FD4 = _base_08038FD4 + _off_08038FD4;
    _cyc_08038FD4 += runtime_mem_cycles(_ea_08038FD4, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038FD4u, _ea_08038FD4, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038FD4, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038FD6u;
    runtime_tick(_cyc_08038FD4);
    }
L_08038FD6:
    /* 08038FD6  08038fd6 T cmps r6,#0x3 */
    {
    g_cpu.R[15] = 0x08038FD6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FD6 = 1u;
    _cyc_08038FD6 = 1u;
    uint32_t _rn_08038FD6 = g_cpu.R[6];
    uint32_t _r_08038FD6;
    _r_08038FD6 = _rn_08038FD6 - 0x00000003u;
    arm_set_nzcv_sub(_rn_08038FD6, 0x00000003u, _r_08038FD6);
    g_cpu.R[15] = 0x08038FD8u;
    runtime_tick(_cyc_08038FD6);
    }
L_08038FD8:
    /* 08038FD8  08038fd8 T bne 0x08039010 */
    {
    g_cpu.R[15] = 0x08038FD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FD8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08038FD8 = 3u;
        g_cpu.R[15] = 0x08039010u;
        runtime_tick(_cyc_08038FD8);
        gf_race_08039010();
        return;
    }
    g_cpu.R[15] = 0x08038FDAu;
    runtime_tick(_cyc_08038FD8);
    }
L_08038FDA:
    /* 08038FDA  08038fda T ldr r0,[r15,#0x30] */
    {
    g_cpu.R[15] = 0x08038FDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FDA = 1u;
    _cyc_08038FDA = 2u;
    uint32_t _base_08038FDA = 0x08038FDEu & ~3u;
    uint32_t _off_08038FDA;
    _off_08038FDA = 0x00000030u;
    uint32_t _ea_08038FDA = _base_08038FDA + _off_08038FDA;
    uint32_t _post_08038FDA = _base_08038FDA + _off_08038FDA;
    _cyc_08038FDA += runtime_mem_cycles(_ea_08038FDA, 4u, 0u);
    uint32_t _v_08038FDA;
    { uint32_t _w = bus_read_u32(_ea_08038FDA & ~3u); uint32_t _rot = (_ea_08038FDA & 3u) * 8u; _v_08038FDA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038FDA;
    g_cpu.R[15] = 0x08038FDCu;
    runtime_tick(_cyc_08038FDA);
    }
L_08038FDC:
    /* 08038FDC  08038fdc T ldrb r1,[r4,#0x9] */
    {
    g_cpu.R[15] = 0x08038FDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FDC = 1u;
    _cyc_08038FDC = 2u;
    uint32_t _base_08038FDC = g_cpu.R[4];
    uint32_t _off_08038FDC;
    _off_08038FDC = 0x00000009u;
    uint32_t _ea_08038FDC = _base_08038FDC + _off_08038FDC;
    uint32_t _post_08038FDC = _base_08038FDC + _off_08038FDC;
    _cyc_08038FDC += runtime_mem_cycles(_ea_08038FDC, 1u, 0u);
    uint32_t _v_08038FDC;
    _v_08038FDC = bus_read_u8(_ea_08038FDC);
    g_cpu.R[1] = _v_08038FDC;
    g_cpu.R[15] = 0x08038FDEu;
    runtime_tick(_cyc_08038FDC);
    }
L_08038FDE:
    /* 08038FDE  08038fde T adds r0,r1,r0 */
    {
    g_cpu.R[15] = 0x08038FDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FDE = 1u;
    _cyc_08038FDE = 1u;
    uint32_t _rm_08038FDE = g_cpu.R[0];
    uint32_t _op2_08038FDE;
    uint32_t _co_08038FDE;
    _op2_08038FDE = _rm_08038FDE;
    _co_08038FDE = cpsr_c();
    uint32_t _rn_08038FDE = g_cpu.R[1];
    uint32_t _r_08038FDE;
    _r_08038FDE = _rn_08038FDE + _op2_08038FDE;
    arm_set_nzcv_add(_rn_08038FDE, _op2_08038FDE, _r_08038FDE);
    g_cpu.R[0] = _r_08038FDE;
    g_cpu.R[15] = 0x08038FE0u;
    runtime_tick(_cyc_08038FDE);
    }
L_08038FE0:
    /* 08038FE0  08038fe0 T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x08038FE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FE0 = 1u;
    _cyc_08038FE0 = 2u;
    uint32_t _base_08038FE0 = g_cpu.R[0];
    uint32_t _off_08038FE0;
    _off_08038FE0 = 0x00000000u;
    uint32_t _ea_08038FE0 = _base_08038FE0 + _off_08038FE0;
    uint32_t _post_08038FE0 = _base_08038FE0 + _off_08038FE0;
    _cyc_08038FE0 += runtime_mem_cycles(_ea_08038FE0, 1u, 0u);
    uint32_t _v_08038FE0;
    _v_08038FE0 = bus_read_u8(_ea_08038FE0);
    g_cpu.R[0] = _v_08038FE0;
    g_cpu.R[15] = 0x08038FE2u;
    runtime_tick(_cyc_08038FE0);
    }
L_08038FE2:
    /* 08038FE2  08038fe2 T ldr r2,[r13,#0xc] */
    {
    g_cpu.R[15] = 0x08038FE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FE2 = 1u;
    _cyc_08038FE2 = 2u;
    uint32_t _base_08038FE2 = g_cpu.R[13];
    uint32_t _off_08038FE2;
    _off_08038FE2 = 0x0000000Cu;
    uint32_t _ea_08038FE2 = _base_08038FE2 + _off_08038FE2;
    uint32_t _post_08038FE2 = _base_08038FE2 + _off_08038FE2;
    _cyc_08038FE2 += runtime_mem_cycles(_ea_08038FE2, 4u, 0u);
    uint32_t _v_08038FE2;
    { uint32_t _w = bus_read_u32(_ea_08038FE2 & ~3u); uint32_t _rot = (_ea_08038FE2 & 3u) * 8u; _v_08038FE2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08038FE2;
    g_cpu.R[15] = 0x08038FE4u;
    runtime_tick(_cyc_08038FE2);
    }
L_08038FE4:
    /* 08038FE4  08038fe4 T strb r0,[r2] */
    {
    g_cpu.R[15] = 0x08038FE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FE4 = 1u;
    _cyc_08038FE4 = 1u;
    uint32_t _base_08038FE4 = g_cpu.R[2];
    uint32_t _off_08038FE4;
    _off_08038FE4 = 0x00000000u;
    uint32_t _ea_08038FE4 = _base_08038FE4 + _off_08038FE4;
    uint32_t _post_08038FE4 = _base_08038FE4 + _off_08038FE4;
    _cyc_08038FE4 += runtime_mem_cycles(_ea_08038FE4, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038FE4u, _ea_08038FE4, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038FE4, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038FE6u;
    runtime_tick(_cyc_08038FE4);
    }
L_08038FE6:
    /* 08038FE6  08038fe6 T movs r1,#0x80 */
    {
    g_cpu.R[15] = 0x08038FE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FE6 = 1u;
    _cyc_08038FE6 = 1u;
    uint32_t _r_08038FE6;
    _r_08038FE6 = 0x00000080u;
    arm_set_nzc_logic(_r_08038FE6, cpsr_c());
    g_cpu.R[1] = _r_08038FE6;
    g_cpu.R[15] = 0x08038FE8u;
    runtime_tick(_cyc_08038FE6);
    }
L_08038FE8:
    /* 08038FE8  08038fe8 T adds r0,r1,#0x0 */
    {
    g_cpu.R[15] = 0x08038FE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FE8 = 1u;
    _cyc_08038FE8 = 1u;
    uint32_t _rn_08038FE8 = g_cpu.R[1];
    uint32_t _r_08038FE8;
    _r_08038FE8 = _rn_08038FE8 + 0x00000000u;
    arm_set_nzcv_add(_rn_08038FE8, 0x00000000u, _r_08038FE8);
    g_cpu.R[0] = _r_08038FE8;
    g_cpu.R[15] = 0x08038FEAu;
    runtime_tick(_cyc_08038FE8);
    }
L_08038FEA:
    /* 08038FEA  08038fea T ldrb r2,[r4,#0x1a] */
    {
    g_cpu.R[15] = 0x08038FEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FEA = 1u;
    _cyc_08038FEA = 2u;
    uint32_t _base_08038FEA = g_cpu.R[4];
    uint32_t _off_08038FEA;
    _off_08038FEA = 0x0000001Au;
    uint32_t _ea_08038FEA = _base_08038FEA + _off_08038FEA;
    uint32_t _post_08038FEA = _base_08038FEA + _off_08038FEA;
    _cyc_08038FEA += runtime_mem_cycles(_ea_08038FEA, 1u, 0u);
    uint32_t _v_08038FEA;
    _v_08038FEA = bus_read_u8(_ea_08038FEA);
    g_cpu.R[2] = _v_08038FEA;
    g_cpu.R[15] = 0x08038FECu;
    runtime_tick(_cyc_08038FEA);
    }
L_08038FEC:
    /* 08038FEC  08038fec T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038FECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FEC = 1u;
    _cyc_08038FEC = 1u;
    uint32_t _rm_08038FEC = g_cpu.R[2];
    uint32_t _op2_08038FEC;
    uint32_t _co_08038FEC;
    _op2_08038FEC = _rm_08038FEC;
    _co_08038FEC = cpsr_c();
    uint32_t _rn_08038FEC = g_cpu.R[0];
    uint32_t _r_08038FEC;
    _r_08038FEC = _rn_08038FEC & _op2_08038FEC;
    arm_set_nzc_logic(_r_08038FEC, _co_08038FEC);
    g_cpu.R[0] = _r_08038FEC;
    g_cpu.R[15] = 0x08038FEEu;
    runtime_tick(_cyc_08038FEC);
    }
L_08038FEE:
    /* 08038FEE  08038fee T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038FEEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FEE = 1u;
    _cyc_08038FEE = 1u;
    uint32_t _rn_08038FEE = g_cpu.R[0];
    uint32_t _r_08038FEE;
    _r_08038FEE = _rn_08038FEE - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038FEE, 0x00000000u, _r_08038FEE);
    g_cpu.R[15] = 0x08038FF0u;
    runtime_tick(_cyc_08038FEE);
    }
L_08038FF0:
    /* 08038FF0  08038ff0 T beq 0x08039044 */
    {
    g_cpu.R[15] = 0x08038FF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FF0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038FF0 = 3u;
        g_cpu.R[15] = 0x08039044u;
        runtime_tick(_cyc_08038FF0);
        gf_race_08039044();
        return;
    }
    g_cpu.R[15] = 0x08038FF2u;
    runtime_tick(_cyc_08038FF0);
    }
L_08038FF2:
    /* 08038FF2  08038ff2 T ldr r0,[r13,#0x8] */
    {
    g_cpu.R[15] = 0x08038FF2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FF2 = 1u;
    _cyc_08038FF2 = 2u;
    uint32_t _base_08038FF2 = g_cpu.R[13];
    uint32_t _off_08038FF2;
    _off_08038FF2 = 0x00000008u;
    uint32_t _ea_08038FF2 = _base_08038FF2 + _off_08038FF2;
    uint32_t _post_08038FF2 = _base_08038FF2 + _off_08038FF2;
    _cyc_08038FF2 += runtime_mem_cycles(_ea_08038FF2, 4u, 0u);
    uint32_t _v_08038FF2;
    { uint32_t _w = bus_read_u32(_ea_08038FF2 & ~3u); uint32_t _rot = (_ea_08038FF2 & 3u) * 8u; _v_08038FF2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038FF2;
    g_cpu.R[15] = 0x08038FF4u;
    runtime_tick(_cyc_08038FF2);
    }
L_08038FF4:
    /* 08038FF4  08038ff4 T strb r1,[r0] */
    {
    g_cpu.R[15] = 0x08038FF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FF4 = 1u;
    _cyc_08038FF4 = 1u;
    uint32_t _base_08038FF4 = g_cpu.R[0];
    uint32_t _off_08038FF4;
    _off_08038FF4 = 0x00000000u;
    uint32_t _ea_08038FF4 = _base_08038FF4 + _off_08038FF4;
    uint32_t _post_08038FF4 = _base_08038FF4 + _off_08038FF4;
    _cyc_08038FF4 += runtime_mem_cycles(_ea_08038FF4, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038FF4u, _ea_08038FF4, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08038FF4, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08038FF6u;
    runtime_tick(_cyc_08038FF4);
    }
L_08038FF6:
    /* 08038FF6  08038ff6 T ldrb r0,[r4,#0x1a] */
    {
    g_cpu.R[15] = 0x08038FF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FF6 = 1u;
    _cyc_08038FF6 = 2u;
    uint32_t _base_08038FF6 = g_cpu.R[4];
    uint32_t _off_08038FF6;
    _off_08038FF6 = 0x0000001Au;
    uint32_t _ea_08038FF6 = _base_08038FF6 + _off_08038FF6;
    uint32_t _post_08038FF6 = _base_08038FF6 + _off_08038FF6;
    _cyc_08038FF6 += runtime_mem_cycles(_ea_08038FF6, 1u, 0u);
    uint32_t _v_08038FF6;
    _v_08038FF6 = bus_read_u8(_ea_08038FF6);
    g_cpu.R[0] = _v_08038FF6;
    g_cpu.R[15] = 0x08038FF8u;
    runtime_tick(_cyc_08038FF6);
    }
L_08038FF8:
    /* 08038FF8  08038ff8 T ldr r1,[r13,#0x14] */
    {
    g_cpu.R[15] = 0x08038FF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FF8 = 1u;
    _cyc_08038FF8 = 2u;
    uint32_t _base_08038FF8 = g_cpu.R[13];
    uint32_t _off_08038FF8;
    _off_08038FF8 = 0x00000014u;
    uint32_t _ea_08038FF8 = _base_08038FF8 + _off_08038FF8;
    uint32_t _post_08038FF8 = _base_08038FF8 + _off_08038FF8;
    _cyc_08038FF8 += runtime_mem_cycles(_ea_08038FF8, 4u, 0u);
    uint32_t _v_08038FF8;
    { uint32_t _w = bus_read_u32(_ea_08038FF8 & ~3u); uint32_t _rot = (_ea_08038FF8 & 3u) * 8u; _v_08038FF8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08038FF8;
    g_cpu.R[15] = 0x08038FFAu;
    runtime_tick(_cyc_08038FF8);
    }
L_08038FFA:
    /* 08038FFA  08038ffa T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08038FFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FFA = 1u;
    _cyc_08038FFA = 1u;
    uint32_t _base_08038FFA = g_cpu.R[1];
    uint32_t _off_08038FFA;
    _off_08038FFA = 0x00000000u;
    uint32_t _ea_08038FFA = _base_08038FFA + _off_08038FFA;
    uint32_t _post_08038FFA = _base_08038FFA + _off_08038FFA;
    _cyc_08038FFA += runtime_mem_cycles(_ea_08038FFA, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038FFAu, _ea_08038FFA, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038FFA, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038FFCu;
    runtime_tick(_cyc_08038FFA);
    }
L_08038FFC:
    /* 08038FFC  08038ffc T movs r0,#0x7f */
    {
    g_cpu.R[15] = 0x08038FFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FFC = 1u;
    _cyc_08038FFC = 1u;
    uint32_t _r_08038FFC;
    _r_08038FFC = 0x0000007Fu;
    arm_set_nzc_logic(_r_08038FFC, cpsr_c());
    g_cpu.R[0] = _r_08038FFC;
    g_cpu.R[15] = 0x08038FFEu;
    runtime_tick(_cyc_08038FFC);
    }
L_08038FFE:
    /* 08038FFE  08038ffe T ldrb r2,[r4,#0x1a] */
    {
    g_cpu.R[15] = 0x08038FFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038FFE = 1u;
    _cyc_08038FFE = 2u;
    uint32_t _base_08038FFE = g_cpu.R[4];
    uint32_t _off_08038FFE;
    _off_08038FFE = 0x0000001Au;
    uint32_t _ea_08038FFE = _base_08038FFE + _off_08038FFE;
    uint32_t _post_08038FFE = _base_08038FFE + _off_08038FFE;
    _cyc_08038FFE += runtime_mem_cycles(_ea_08038FFE, 1u, 0u);
    uint32_t _v_08038FFE;
    _v_08038FFE = bus_read_u8(_ea_08038FFE);
    g_cpu.R[2] = _v_08038FFE;
    g_cpu.R[15] = 0x08039000u;
    runtime_tick(_cyc_08038FFE);
    }
L_08039000:
    /* 08039000  08039000 T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08039000u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039000 = 1u;
    _cyc_08039000 = 1u;
    uint32_t _rm_08039000 = g_cpu.R[2];
    uint32_t _op2_08039000;
    uint32_t _co_08039000;
    _op2_08039000 = _rm_08039000;
    _co_08039000 = cpsr_c();
    uint32_t _rn_08039000 = g_cpu.R[0];
    uint32_t _r_08039000;
    _r_08039000 = _rn_08039000 & _op2_08039000;
    arm_set_nzc_logic(_r_08039000, _co_08039000);
    g_cpu.R[0] = _r_08039000;
    g_cpu.R[15] = 0x08039002u;
    runtime_tick(_cyc_08039000);
    }
L_08039002:
    /* 08039002  08039002 T strb r0,[r4,#0x1a] */
    {
    g_cpu.R[15] = 0x08039002u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039002 = 1u;
    _cyc_08039002 = 1u;
    uint32_t _base_08039002 = g_cpu.R[4];
    uint32_t _off_08039002;
    _off_08039002 = 0x0000001Au;
    uint32_t _ea_08039002 = _base_08039002 + _off_08039002;
    uint32_t _post_08039002 = _base_08039002 + _off_08039002;
    _cyc_08039002 += runtime_mem_cycles(_ea_08039002, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08039002u, _ea_08039002, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08039002, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08039004u;
    runtime_tick(_cyc_08039002);
    }
L_08039004:
    /* 08039004  08039004 T b 0x08039044 */
    {
    g_cpu.R[15] = 0x08039004u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039004 = 1u;
    _cyc_08039004 = 3u;
    g_cpu.R[15] = 0x08039044u;
    runtime_tick(_cyc_08039004);
    gf_race_08039044();
    return;
    g_cpu.R[15] = 0x08039006u;
    runtime_tick(_cyc_08039004);
    }
    /* fall-through to 0x08039006 */
    g_cpu.R[15] = 0x08039006u;
    runtime_dispatch(0x08039006u);
    return;
}

/* 0x08044D50  mode=thumb  end=0x08044D5A  branches=2 */
void gf_race_08044d50(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08044D52u: goto L_08044D52;
        case 0x08044D54u: goto L_08044D54;
        case 0x08044D56u: goto L_08044D56;
        case 0x08044D58u: goto L_08044D58;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08044D50u);
    /* 08044D50  08044d50 T ldr r0,[r15,#0x10] */
    {
    g_cpu.R[15] = 0x08044D50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044D50 = 1u;
    _cyc_08044D50 = 2u;
    uint32_t _base_08044D50 = 0x08044D54u & ~3u;
    uint32_t _off_08044D50;
    _off_08044D50 = 0x00000010u;
    uint32_t _ea_08044D50 = _base_08044D50 + _off_08044D50;
    uint32_t _post_08044D50 = _base_08044D50 + _off_08044D50;
    _cyc_08044D50 += runtime_mem_cycles(_ea_08044D50, 4u, 0u);
    uint32_t _v_08044D50;
    { uint32_t _w = bus_read_u32(_ea_08044D50 & ~3u); uint32_t _rot = (_ea_08044D50 & 3u) * 8u; _v_08044D50 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08044D50;
    g_cpu.R[15] = 0x08044D52u;
    runtime_tick(_cyc_08044D50);
    }
L_08044D52:
    /* 08044D52  08044d52 T ldrb r1,[r0,#0x1f] */
    {
    g_cpu.R[15] = 0x08044D52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044D52 = 1u;
    _cyc_08044D52 = 2u;
    uint32_t _base_08044D52 = g_cpu.R[0];
    uint32_t _off_08044D52;
    _off_08044D52 = 0x0000001Fu;
    uint32_t _ea_08044D52 = _base_08044D52 + _off_08044D52;
    uint32_t _post_08044D52 = _base_08044D52 + _off_08044D52;
    _cyc_08044D52 += runtime_mem_cycles(_ea_08044D52, 1u, 0u);
    uint32_t _v_08044D52;
    _v_08044D52 = bus_read_u8(_ea_08044D52);
    g_cpu.R[1] = _v_08044D52;
    g_cpu.R[15] = 0x08044D54u;
    runtime_tick(_cyc_08044D52);
    }
L_08044D54:
    /* 08044D54  08044d54 T cmps r1,#0x63 */
    {
    g_cpu.R[15] = 0x08044D54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044D54 = 1u;
    _cyc_08044D54 = 1u;
    uint32_t _rn_08044D54 = g_cpu.R[1];
    uint32_t _r_08044D54;
    _r_08044D54 = _rn_08044D54 - 0x00000063u;
    arm_set_nzcv_sub(_rn_08044D54, 0x00000063u, _r_08044D54);
    g_cpu.R[15] = 0x08044D56u;
    runtime_tick(_cyc_08044D54);
    }
L_08044D56:
    /* 08044D56  08044d56 T beq 0x08044d5a */
    {
    g_cpu.R[15] = 0x08044D56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044D56 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08044D56 = 3u;
        g_cpu.R[15] = 0x08044D5Au;
        runtime_tick(_cyc_08044D56);
        gf_tfunc_08044D5A();
        return;
    }
    g_cpu.R[15] = 0x08044D58u;
    runtime_tick(_cyc_08044D56);
    }
L_08044D58:
    /* 08044D58  08044d58 T b 0x08044f22 */
    {
    g_cpu.R[15] = 0x08044D58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044D58 = 1u;
    _cyc_08044D58 = 3u;
    g_cpu.R[15] = 0x08044F22u;
    runtime_tick(_cyc_08044D58);
    gf_race_08044f22();
    return;
    g_cpu.R[15] = 0x08044D5Au;
    runtime_tick(_cyc_08044D58);
    }
    /* fall-through to 0x08044D5A */
    g_cpu.R[15] = 0x08044D5Au;
    runtime_dispatch(0x08044D5Au);
    return;
}

/* 0x08050D58  mode=thumb  end=0x08050D60  branches=46  indirect */
void gf_race_08050d58(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D5Au: goto L_08050D5A;
        case 0x08050D5Cu: goto L_08050D5C;
        case 0x08050D5Eu: goto L_08050D5E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D58u);
    /* 08050D58  08050d58 T strb r1,[r3] */
    {
    g_cpu.R[15] = 0x08050D58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D58 = 1u;
    _cyc_08050D58 = 1u;
    uint32_t _base_08050D58 = g_cpu.R[3];
    uint32_t _off_08050D58;
    _off_08050D58 = 0x00000000u;
    uint32_t _ea_08050D58 = _base_08050D58 + _off_08050D58;
    uint32_t _post_08050D58 = _base_08050D58 + _off_08050D58;
    _cyc_08050D58 += runtime_mem_cycles(_ea_08050D58, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050D58u, _ea_08050D58, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08050D58, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08050D5Au;
    runtime_tick(_cyc_08050D58);
    }
L_08050D5A:
    /* 08050D5A  08050d5a T ldr r3,[r15,#0x1e8] */
    {
    g_cpu.R[15] = 0x08050D5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D5A = 1u;
    _cyc_08050D5A = 2u;
    uint32_t _base_08050D5A = 0x08050D5Eu & ~3u;
    uint32_t _off_08050D5A;
    _off_08050D5A = 0x000001E8u;
    uint32_t _ea_08050D5A = _base_08050D5A + _off_08050D5A;
    uint32_t _post_08050D5A = _base_08050D5A + _off_08050D5A;
    _cyc_08050D5A += runtime_mem_cycles(_ea_08050D5A, 4u, 0u);
    uint32_t _v_08050D5A;
    { uint32_t _w = bus_read_u32(_ea_08050D5A & ~3u); uint32_t _rot = (_ea_08050D5A & 3u) * 8u; _v_08050D5A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08050D5A;
    g_cpu.R[15] = 0x08050D5Cu;
    runtime_tick(_cyc_08050D5A);
    }
L_08050D5C:
    /* 08050D5C  08050d5c T adds r1,r0,r3 */
    {
    g_cpu.R[15] = 0x08050D5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D5C = 1u;
    _cyc_08050D5C = 1u;
    uint32_t _rm_08050D5C = g_cpu.R[3];
    uint32_t _op2_08050D5C;
    uint32_t _co_08050D5C;
    _op2_08050D5C = _rm_08050D5C;
    _co_08050D5C = cpsr_c();
    uint32_t _rn_08050D5C = g_cpu.R[0];
    uint32_t _r_08050D5C;
    _r_08050D5C = _rn_08050D5C + _op2_08050D5C;
    arm_set_nzcv_add(_rn_08050D5C, _op2_08050D5C, _r_08050D5C);
    g_cpu.R[1] = _r_08050D5C;
    g_cpu.R[15] = 0x08050D5Eu;
    runtime_tick(_cyc_08050D5C);
    }
L_08050D5E:
    /* 08050D5E  08050d5e T strb r2,[r1] */
    {
    g_cpu.R[15] = 0x08050D5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D5E = 1u;
    _cyc_08050D5E = 1u;
    uint32_t _base_08050D5E = g_cpu.R[1];
    uint32_t _off_08050D5E;
    _off_08050D5E = 0x00000000u;
    uint32_t _ea_08050D5E = _base_08050D5E + _off_08050D5E;
    uint32_t _post_08050D5E = _base_08050D5E + _off_08050D5E;
    _cyc_08050D5E += runtime_mem_cycles(_ea_08050D5E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050D5Eu, _ea_08050D5E, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_08050D5E, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x08050D60u;
    runtime_tick(_cyc_08050D5E);
    }
    /* fall-through to 0x08050D60 */
    g_cpu.R[15] = 0x08050D60u;
    runtime_dispatch(0x08050D60u);
    return;
}

/* 0x08032414  mode=thumb  end=0x08032426  branches=2 */
void gf_race_08032414(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08032416u: goto L_08032416;
        case 0x08032418u: goto L_08032418;
        case 0x0803241Au: goto L_0803241A;
        case 0x0803241Cu: goto L_0803241C;
        case 0x0803241Eu: goto L_0803241E;
        case 0x08032420u: goto L_08032420;
        case 0x08032422u: goto L_08032422;
        case 0x08032424u: goto L_08032424;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08032414u);
    /* 08032414  08032414 T stm r13!,{r4,r5,r6,r7,r14} */
    {
    g_cpu.R[15] = 0x08032414u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032414 = 1u;
    _cyc_08032414 = 1u;
    uint32_t _b_08032414 = g_cpu.R[13];
    uint32_t _a_08032414 = _b_08032414 - 20u;
    uint32_t _fb_08032414 = _b_08032414 - 20u;
    _cyc_08032414 += runtime_mem_cycles(_a_08032414 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08032414u, _a_08032414 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_08032414 & ~3u, g_cpu.R[4]);
    _a_08032414 += 4u;
    _cyc_08032414 += runtime_mem_cycles(_a_08032414 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08032414u, _a_08032414 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08032414 & ~3u, g_cpu.R[5]);
    _a_08032414 += 4u;
    _cyc_08032414 += runtime_mem_cycles(_a_08032414 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08032414u, _a_08032414 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_08032414 & ~3u, g_cpu.R[6]);
    _a_08032414 += 4u;
    _cyc_08032414 += runtime_mem_cycles(_a_08032414 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08032414u, _a_08032414 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08032414 & ~3u, g_cpu.R[7]);
    _a_08032414 += 4u;
    _cyc_08032414 += runtime_mem_cycles(_a_08032414 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08032414u, _a_08032414 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08032414 & ~3u, g_cpu.R[14]);
    _a_08032414 += 4u;
    g_cpu.R[13] = _fb_08032414;
    g_cpu.R[15] = 0x08032416u;
    runtime_tick(_cyc_08032414);
    }
L_08032416:
    /* 08032416  08032416 T mov r7,r8 */
    {
    g_cpu.R[15] = 0x08032416u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032416 = 1u;
    _cyc_08032416 = 1u;
    uint32_t _rm_08032416 = g_cpu.R[8];
    uint32_t _op2_08032416;
    uint32_t _co_08032416;
    _op2_08032416 = _rm_08032416;
    _co_08032416 = cpsr_c();
    uint32_t _r_08032416;
    _r_08032416 = _op2_08032416;
    g_cpu.R[7] = _r_08032416;
    g_cpu.R[15] = 0x08032418u;
    runtime_tick(_cyc_08032416);
    }
L_08032418:
    /* 08032418  08032418 T stm r13!,{r7} */
    {
    g_cpu.R[15] = 0x08032418u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032418 = 1u;
    _cyc_08032418 = 1u;
    uint32_t _b_08032418 = g_cpu.R[13];
    uint32_t _a_08032418 = _b_08032418 - 4u;
    uint32_t _fb_08032418 = _b_08032418 - 4u;
    _cyc_08032418 += runtime_mem_cycles(_a_08032418 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08032418u, _a_08032418 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08032418 & ~3u, g_cpu.R[7]);
    _a_08032418 += 4u;
    g_cpu.R[13] = _fb_08032418;
    g_cpu.R[15] = 0x0803241Au;
    runtime_tick(_cyc_08032418);
    }
L_0803241A:
    /* 0803241A  0803241a T ldr r0,[r15,#0x58] */
    {
    g_cpu.R[15] = 0x0803241Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803241A = 1u;
    _cyc_0803241A = 2u;
    uint32_t _base_0803241A = 0x0803241Eu & ~3u;
    uint32_t _off_0803241A;
    _off_0803241A = 0x00000058u;
    uint32_t _ea_0803241A = _base_0803241A + _off_0803241A;
    uint32_t _post_0803241A = _base_0803241A + _off_0803241A;
    _cyc_0803241A += runtime_mem_cycles(_ea_0803241A, 4u, 0u);
    uint32_t _v_0803241A;
    { uint32_t _w = bus_read_u32(_ea_0803241A & ~3u); uint32_t _rot = (_ea_0803241A & 3u) * 8u; _v_0803241A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0803241A;
    g_cpu.R[15] = 0x0803241Cu;
    runtime_tick(_cyc_0803241A);
    }
L_0803241C:
    /* 0803241C  0803241c T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x0803241Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803241C = 1u;
    _cyc_0803241C = 2u;
    uint32_t _base_0803241C = g_cpu.R[0];
    uint32_t _off_0803241C;
    _off_0803241C = 0x00000000u;
    uint32_t _ea_0803241C = _base_0803241C + _off_0803241C;
    uint32_t _post_0803241C = _base_0803241C + _off_0803241C;
    _cyc_0803241C += runtime_mem_cycles(_ea_0803241C, 1u, 0u);
    uint32_t _v_0803241C;
    _v_0803241C = bus_read_u8(_ea_0803241C);
    g_cpu.R[0] = _v_0803241C;
    g_cpu.R[15] = 0x0803241Eu;
    runtime_tick(_cyc_0803241C);
    }
L_0803241E:
    /* 0803241E  0803241e T adds r5,r0,#0x0 */
    {
    g_cpu.R[15] = 0x0803241Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803241E = 1u;
    _cyc_0803241E = 1u;
    uint32_t _rn_0803241E = g_cpu.R[0];
    uint32_t _r_0803241E;
    _r_0803241E = _rn_0803241E + 0x00000000u;
    arm_set_nzcv_add(_rn_0803241E, 0x00000000u, _r_0803241E);
    g_cpu.R[5] = _r_0803241E;
    g_cpu.R[15] = 0x08032420u;
    runtime_tick(_cyc_0803241E);
    }
L_08032420:
    /* 08032420  08032420 T cmps r5,#0xe2 */
    {
    g_cpu.R[15] = 0x08032420u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032420 = 1u;
    _cyc_08032420 = 1u;
    uint32_t _rn_08032420 = g_cpu.R[5];
    uint32_t _r_08032420;
    _r_08032420 = _rn_08032420 - 0x000000E2u;
    arm_set_nzcv_sub(_rn_08032420, 0x000000E2u, _r_08032420);
    g_cpu.R[15] = 0x08032422u;
    runtime_tick(_cyc_08032420);
    }
L_08032422:
    /* 08032422  08032422 T beq 0x08032426 */
    {
    g_cpu.R[15] = 0x08032422u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032422 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08032422 = 3u;
        g_cpu.R[15] = 0x08032426u;
        runtime_tick(_cyc_08032422);
        gf_race_08032426();
        return;
    }
    g_cpu.R[15] = 0x08032424u;
    runtime_tick(_cyc_08032422);
    }
L_08032424:
    /* 08032424  08032424 T b 0x08032554 */
    {
    g_cpu.R[15] = 0x08032424u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032424 = 1u;
    _cyc_08032424 = 3u;
    g_cpu.R[15] = 0x08032554u;
    runtime_tick(_cyc_08032424);
    gf_race_08032554();
    return;
    g_cpu.R[15] = 0x08032426u;
    runtime_tick(_cyc_08032424);
    }
    /* fall-through to 0x08032426 */
    g_cpu.R[15] = 0x08032426u;
    runtime_dispatch(0x08032426u);
    return;
}

/* 0x08038BA4  mode=thumb  end=0x08038BA6  branches=0  indirect */
void gf_race_08038ba4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038BA4u);
    /* 08038BA4  08038ba4 T movs r0,#0x80 */
    g_cpu.R[15] = 0x08038BA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038BA4 = 1u;
    _cyc_08038BA4 = 1u;
    uint32_t _r_08038BA4;
    _r_08038BA4 = 0x00000080u;
    arm_set_nzc_logic(_r_08038BA4, cpsr_c());
    g_cpu.R[0] = _r_08038BA4;
    g_cpu.R[15] = 0x08038BA6u;
    runtime_tick(_cyc_08038BA4);
    /* fall-through to 0x08038BA6 */
    g_cpu.R[15] = 0x08038BA6u;
    runtime_dispatch(0x08038BA6u);
    return;
}

/* 0x08038F34  mode=thumb  end=0x08038F46  branches=2 */
void gf_race_08038f34(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038F36u: goto L_08038F36;
        case 0x08038F38u: goto L_08038F38;
        case 0x08038F3Au: goto L_08038F3A;
        case 0x08038F3Cu: goto L_08038F3C;
        case 0x08038F3Eu: goto L_08038F3E;
        case 0x08038F40u: goto L_08038F40;
        case 0x08038F42u: goto L_08038F42;
        case 0x08038F44u: goto L_08038F44;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038F34u);
    /* 08038F34  08038f34 T ldrb r0,[r4,#0xb] */
    {
    g_cpu.R[15] = 0x08038F34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F34 = 1u;
    _cyc_08038F34 = 2u;
    uint32_t _base_08038F34 = g_cpu.R[4];
    uint32_t _off_08038F34;
    _off_08038F34 = 0x0000000Bu;
    uint32_t _ea_08038F34 = _base_08038F34 + _off_08038F34;
    uint32_t _post_08038F34 = _base_08038F34 + _off_08038F34;
    _cyc_08038F34 += runtime_mem_cycles(_ea_08038F34, 1u, 0u);
    uint32_t _v_08038F34;
    _v_08038F34 = bus_read_u8(_ea_08038F34);
    g_cpu.R[0] = _v_08038F34;
    g_cpu.R[15] = 0x08038F36u;
    runtime_tick(_cyc_08038F34);
    }
L_08038F36:
    /* 08038F36  08038f36 T subs r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x08038F36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F36 = 1u;
    _cyc_08038F36 = 1u;
    uint32_t _rn_08038F36 = g_cpu.R[0];
    uint32_t _r_08038F36;
    _r_08038F36 = _rn_08038F36 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08038F36, 0x00000001u, _r_08038F36);
    g_cpu.R[0] = _r_08038F36;
    g_cpu.R[15] = 0x08038F38u;
    runtime_tick(_cyc_08038F36);
    }
L_08038F38:
    /* 08038F38  08038f38 T strb r0,[r4,#0xb] */
    {
    g_cpu.R[15] = 0x08038F38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F38 = 1u;
    _cyc_08038F38 = 1u;
    uint32_t _base_08038F38 = g_cpu.R[4];
    uint32_t _off_08038F38;
    _off_08038F38 = 0x0000000Bu;
    uint32_t _ea_08038F38 = _base_08038F38 + _off_08038F38;
    uint32_t _post_08038F38 = _base_08038F38 + _off_08038F38;
    _cyc_08038F38 += runtime_mem_cycles(_ea_08038F38, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038F38u, _ea_08038F38, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038F38, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038F3Au;
    runtime_tick(_cyc_08038F38);
    }
L_08038F3A:
    /* 08038F3A  08038f3a T ldr r0,[r13] */
    {
    g_cpu.R[15] = 0x08038F3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F3A = 1u;
    _cyc_08038F3A = 2u;
    uint32_t _base_08038F3A = g_cpu.R[13];
    uint32_t _off_08038F3A;
    _off_08038F3A = 0x00000000u;
    uint32_t _ea_08038F3A = _base_08038F3A + _off_08038F3A;
    uint32_t _post_08038F3A = _base_08038F3A + _off_08038F3A;
    _cyc_08038F3A += runtime_mem_cycles(_ea_08038F3A, 4u, 0u);
    uint32_t _v_08038F3A;
    { uint32_t _w = bus_read_u32(_ea_08038F3A & ~3u); uint32_t _rot = (_ea_08038F3A & 3u) * 8u; _v_08038F3A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038F3A;
    g_cpu.R[15] = 0x08038F3Cu;
    runtime_tick(_cyc_08038F3A);
    }
L_08038F3C:
    /* 08038F3C  08038f3c T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038F3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F3C = 1u;
    _cyc_08038F3C = 1u;
    uint32_t _rn_08038F3C = g_cpu.R[0];
    uint32_t _r_08038F3C;
    _r_08038F3C = _rn_08038F3C - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038F3C, 0x00000000u, _r_08038F3C);
    g_cpu.R[15] = 0x08038F3Eu;
    runtime_tick(_cyc_08038F3C);
    }
L_08038F3E:
    /* 08038F3E  08038f3e T bne 0x08038f46 */
    {
    g_cpu.R[15] = 0x08038F3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F3E = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08038F3E = 3u;
        g_cpu.R[15] = 0x08038F46u;
        runtime_tick(_cyc_08038F3E);
        gf_race_08038f46();
        return;
    }
    g_cpu.R[15] = 0x08038F40u;
    runtime_tick(_cyc_08038F3E);
    }
L_08038F40:
    /* 08038F40  08038f40 T subs r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x08038F40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F40 = 1u;
    _cyc_08038F40 = 1u;
    uint32_t _rn_08038F40 = g_cpu.R[0];
    uint32_t _r_08038F40;
    _r_08038F40 = _rn_08038F40 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08038F40, 0x00000001u, _r_08038F40);
    g_cpu.R[0] = _r_08038F40;
    g_cpu.R[15] = 0x08038F42u;
    runtime_tick(_cyc_08038F40);
    }
L_08038F42:
    /* 08038F42  08038f42 T str r0,[r13] */
    {
    g_cpu.R[15] = 0x08038F42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F42 = 1u;
    _cyc_08038F42 = 1u;
    uint32_t _base_08038F42 = g_cpu.R[13];
    uint32_t _off_08038F42;
    _off_08038F42 = 0x00000000u;
    uint32_t _ea_08038F42 = _base_08038F42 + _off_08038F42;
    uint32_t _post_08038F42 = _base_08038F42 + _off_08038F42;
    _cyc_08038F42 += runtime_mem_cycles(_ea_08038F42, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038F42u, _ea_08038F42 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08038F42 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08038F44u;
    runtime_tick(_cyc_08038F42);
    }
L_08038F44:
    /* 08038F44  08038f44 T b 0x08038e40 */
    {
    g_cpu.R[15] = 0x08038F44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F44 = 1u;
    _cyc_08038F44 = 3u;
    g_cpu.R[15] = 0x08038E40u;
    runtime_tick(_cyc_08038F44);
    gf_tfunc_08038E40();
    return;
    g_cpu.R[15] = 0x08038F46u;
    runtime_tick(_cyc_08038F44);
    }
    /* fall-through to 0x08038F46 */
    g_cpu.R[15] = 0x08038F46u;
    runtime_dispatch(0x08038F46u);
    return;
}

/* 0x0803C5E6  mode=thumb  end=0x0803C5F4  branches=0  indirect */
void gf_menu_race_0803c5e6(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0803C5E8u: goto L_0803C5E8;
        case 0x0803C5EAu: goto L_0803C5EA;
        case 0x0803C5ECu: goto L_0803C5EC;
        case 0x0803C5EEu: goto L_0803C5EE;
        case 0x0803C5F0u: goto L_0803C5F0;
        case 0x0803C5F2u: goto L_0803C5F2;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0803C5E6u);
    /* 0803C5E6  0803c5e6 T add r13,r13,#0x44 */
    {
    g_cpu.R[15] = 0x0803C5E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803C5E6 = 1u;
    _cyc_0803C5E6 = 1u;
    uint32_t _rn_0803C5E6 = g_cpu.R[13];
    uint32_t _r_0803C5E6;
    _r_0803C5E6 = _rn_0803C5E6 + 0x00000044u;
    g_cpu.R[13] = _r_0803C5E6;
    g_cpu.R[15] = 0x0803C5E8u;
    runtime_tick(_cyc_0803C5E6);
    }
L_0803C5E8:
    /* 0803C5E8  0803c5e8 T ldm r13!,{r3,r4} */
    {
    g_cpu.R[15] = 0x0803C5E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803C5E8 = 1u;
    _cyc_0803C5E8 = 2u;
    uint32_t _b_0803C5E8 = g_cpu.R[13];
    uint32_t _a_0803C5E8 = _b_0803C5E8;
    uint32_t _fb_0803C5E8 = _b_0803C5E8 + 8u;
    _cyc_0803C5E8 += runtime_mem_cycles(_a_0803C5E8 & ~3u, 4u, 0u);
    g_cpu.R[3] = bus_read_u32(_a_0803C5E8 & ~3u);
    _a_0803C5E8 += 4u;
    _cyc_0803C5E8 += runtime_mem_cycles(_a_0803C5E8 & ~3u, 4u, 1u);
    g_cpu.R[4] = bus_read_u32(_a_0803C5E8 & ~3u);
    _a_0803C5E8 += 4u;
    g_cpu.R[13] = _fb_0803C5E8;
    g_cpu.R[15] = 0x0803C5EAu;
    runtime_tick(_cyc_0803C5E8);
    }
L_0803C5EA:
    /* 0803C5EA  0803c5ea T mov r8,r3 */
    {
    g_cpu.R[15] = 0x0803C5EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803C5EA = 1u;
    _cyc_0803C5EA = 1u;
    uint32_t _rm_0803C5EA = g_cpu.R[3];
    uint32_t _op2_0803C5EA;
    uint32_t _co_0803C5EA;
    _op2_0803C5EA = _rm_0803C5EA;
    _co_0803C5EA = cpsr_c();
    uint32_t _r_0803C5EA;
    _r_0803C5EA = _op2_0803C5EA;
    g_cpu.R[8] = _r_0803C5EA;
    g_cpu.R[15] = 0x0803C5ECu;
    runtime_tick(_cyc_0803C5EA);
    }
L_0803C5EC:
    /* 0803C5EC  0803c5ec T mov r9,r4 */
    {
    g_cpu.R[15] = 0x0803C5ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803C5EC = 1u;
    _cyc_0803C5EC = 1u;
    uint32_t _rm_0803C5EC = g_cpu.R[4];
    uint32_t _op2_0803C5EC;
    uint32_t _co_0803C5EC;
    _op2_0803C5EC = _rm_0803C5EC;
    _co_0803C5EC = cpsr_c();
    uint32_t _r_0803C5EC;
    _r_0803C5EC = _op2_0803C5EC;
    g_cpu.R[9] = _r_0803C5EC;
    g_cpu.R[15] = 0x0803C5EEu;
    runtime_tick(_cyc_0803C5EC);
    }
L_0803C5EE:
    /* 0803C5EE  0803c5ee T ldm r13!,{r4,r5,r6,r7} */
    {
    g_cpu.R[15] = 0x0803C5EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803C5EE = 1u;
    _cyc_0803C5EE = 2u;
    uint32_t _b_0803C5EE = g_cpu.R[13];
    uint32_t _a_0803C5EE = _b_0803C5EE;
    uint32_t _fb_0803C5EE = _b_0803C5EE + 16u;
    _cyc_0803C5EE += runtime_mem_cycles(_a_0803C5EE & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_0803C5EE & ~3u);
    _a_0803C5EE += 4u;
    _cyc_0803C5EE += runtime_mem_cycles(_a_0803C5EE & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_0803C5EE & ~3u);
    _a_0803C5EE += 4u;
    _cyc_0803C5EE += runtime_mem_cycles(_a_0803C5EE & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_0803C5EE & ~3u);
    _a_0803C5EE += 4u;
    _cyc_0803C5EE += runtime_mem_cycles(_a_0803C5EE & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_0803C5EE & ~3u);
    _a_0803C5EE += 4u;
    g_cpu.R[13] = _fb_0803C5EE;
    g_cpu.R[15] = 0x0803C5F0u;
    runtime_tick(_cyc_0803C5EE);
    }
L_0803C5F0:
    /* 0803C5F0  0803c5f0 T ldm r13!,{r0} */
    {
    g_cpu.R[15] = 0x0803C5F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803C5F0 = 1u;
    _cyc_0803C5F0 = 2u;
    uint32_t _b_0803C5F0 = g_cpu.R[13];
    uint32_t _a_0803C5F0 = _b_0803C5F0;
    uint32_t _fb_0803C5F0 = _b_0803C5F0 + 4u;
    _cyc_0803C5F0 += runtime_mem_cycles(_a_0803C5F0 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_0803C5F0 & ~3u);
    _a_0803C5F0 += 4u;
    g_cpu.R[13] = _fb_0803C5F0;
    g_cpu.R[15] = 0x0803C5F2u;
    runtime_tick(_cyc_0803C5F0);
    }
L_0803C5F2:
    /* 0803C5F2  0803c5f2 T bx r0 */
    {
    g_cpu.R[15] = 0x0803C5F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803C5F2 = 1u;
    _cyc_0803C5F2 = 3u;
    uint32_t _bxt_0803C5F2 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_0803C5F2 & ~1u;
    if (_bxt_0803C5F2 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_0803C5F2);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_0803C5F2);
    return;
    g_cpu.R[15] = 0x0803C5F4u;
    runtime_tick(_cyc_0803C5F2);
    }
    /* fall-through to 0x0803C5F4 */
    g_cpu.R[15] = 0x0803C5F4u;
    runtime_dispatch(0x0803C5F4u);
    return;
}

/* 0x08044F28  mode=thumb  end=0x08044F2C  branches=56  indirect */
void gf_race_08044f28(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08044F2Au: goto L_08044F2A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08044F28u);
    /* 08044F28  08044f28 T bl.hi 0x08040f2c */
    {
    g_cpu.R[15] = 0x08044F28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044F28 = 1u;
    _cyc_08044F28 = 1u;
    g_cpu.R[14] = 0x08040F2Cu;
    g_cpu.R[15] = 0x08044F2Au;
    runtime_tick(_cyc_08044F28);
    }
L_08044F2A:
    /* 08044F2A  08044f2a T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08044F2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044F2A = 1u;
    _cyc_08044F2A = 3u;
    uint32_t _blt_08044F2A = (g_cpu.R[14] + 0x00000898u) & ~1u;
    g_cpu.R[14] = 0x08044F2Du;
    g_cpu.R[15] = _blt_08044F2A;
    runtime_call_push_return(0x08044F2Cu);
    runtime_tick(_cyc_08044F2A);
    _cyc_08044F2A = 0u;
    runtime_dispatch(_blt_08044F2A);
    if (g_cpu.R[15] != 0x08044F2Cu) { runtime_call_cancel_return(0x08044F2Cu); return; }
    g_cpu.R[15] = 0x08044F2Cu;
    runtime_tick(_cyc_08044F2A);
    }
    /* fall-through to 0x08044F2C */
    g_cpu.R[15] = 0x08044F2Cu;
    runtime_dispatch(0x08044F2Cu);
    return;
}

/* 0x08049438  mode=thumb  end=0x08049448  branches=10 */
void gf_pre_race_08049438(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0804943Au: goto L_0804943A;
        case 0x0804943Cu: goto L_0804943C;
        case 0x0804943Eu: goto L_0804943E;
        case 0x08049440u: goto L_08049440;
        case 0x08049442u: goto L_08049442;
        case 0x08049444u: goto L_08049444;
        case 0x08049446u: goto L_08049446;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08049438u);
    /* 08049438  08049438 T stm r13!,{r4,r5,r6,r7,r14} */
    {
    g_cpu.R[15] = 0x08049438u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08049438 = 1u;
    _cyc_08049438 = 1u;
    uint32_t _b_08049438 = g_cpu.R[13];
    uint32_t _a_08049438 = _b_08049438 - 20u;
    uint32_t _fb_08049438 = _b_08049438 - 20u;
    _cyc_08049438 += runtime_mem_cycles(_a_08049438 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08049438u, _a_08049438 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_08049438 & ~3u, g_cpu.R[4]);
    _a_08049438 += 4u;
    _cyc_08049438 += runtime_mem_cycles(_a_08049438 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08049438u, _a_08049438 & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_a_08049438 & ~3u, g_cpu.R[5]);
    _a_08049438 += 4u;
    _cyc_08049438 += runtime_mem_cycles(_a_08049438 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08049438u, _a_08049438 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_a_08049438 & ~3u, g_cpu.R[6]);
    _a_08049438 += 4u;
    _cyc_08049438 += runtime_mem_cycles(_a_08049438 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08049438u, _a_08049438 & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_08049438 & ~3u, g_cpu.R[7]);
    _a_08049438 += 4u;
    _cyc_08049438 += runtime_mem_cycles(_a_08049438 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08049438u, _a_08049438 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_08049438 & ~3u, g_cpu.R[14]);
    _a_08049438 += 4u;
    g_cpu.R[13] = _fb_08049438;
    g_cpu.R[15] = 0x0804943Au;
    runtime_tick(_cyc_08049438);
    }
L_0804943A:
    /* 0804943A  0804943a T mov r7,r8 */
    {
    g_cpu.R[15] = 0x0804943Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804943A = 1u;
    _cyc_0804943A = 1u;
    uint32_t _rm_0804943A = g_cpu.R[8];
    uint32_t _op2_0804943A;
    uint32_t _co_0804943A;
    _op2_0804943A = _rm_0804943A;
    _co_0804943A = cpsr_c();
    uint32_t _r_0804943A;
    _r_0804943A = _op2_0804943A;
    g_cpu.R[7] = _r_0804943A;
    g_cpu.R[15] = 0x0804943Cu;
    runtime_tick(_cyc_0804943A);
    }
L_0804943C:
    /* 0804943C  0804943c T stm r13!,{r7} */
    {
    g_cpu.R[15] = 0x0804943Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804943C = 1u;
    _cyc_0804943C = 1u;
    uint32_t _b_0804943C = g_cpu.R[13];
    uint32_t _a_0804943C = _b_0804943C - 4u;
    uint32_t _fb_0804943C = _b_0804943C - 4u;
    _cyc_0804943C += runtime_mem_cycles(_a_0804943C & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804943Cu, _a_0804943C & ~3u, g_cpu.R[7], 4u);
    bus_write_u32(_a_0804943C & ~3u, g_cpu.R[7]);
    _a_0804943C += 4u;
    g_cpu.R[13] = _fb_0804943C;
    g_cpu.R[15] = 0x0804943Eu;
    runtime_tick(_cyc_0804943C);
    }
L_0804943E:
    /* 0804943E  0804943e T sub r13,r13,#0x18 */
    {
    g_cpu.R[15] = 0x0804943Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804943E = 1u;
    _cyc_0804943E = 1u;
    uint32_t _rn_0804943E = g_cpu.R[13];
    uint32_t _r_0804943E;
    _r_0804943E = _rn_0804943E - 0x00000018u;
    g_cpu.R[13] = _r_0804943E;
    g_cpu.R[15] = 0x08049440u;
    runtime_tick(_cyc_0804943E);
    }
L_08049440:
    /* 08049440  08049440 T movs r7,#0x0 */
    {
    g_cpu.R[15] = 0x08049440u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08049440 = 1u;
    _cyc_08049440 = 1u;
    uint32_t _r_08049440;
    _r_08049440 = 0x00000000u;
    arm_set_nzc_logic(_r_08049440, cpsr_c());
    g_cpu.R[7] = _r_08049440;
    g_cpu.R[15] = 0x08049442u;
    runtime_tick(_cyc_08049440);
    }
L_08049442:
    /* 08049442  08049442 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x08049442u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08049442 = 1u;
    _cyc_08049442 = 1u;
    uint32_t _r_08049442;
    _r_08049442 = 0x00000000u;
    arm_set_nzc_logic(_r_08049442, cpsr_c());
    g_cpu.R[0] = _r_08049442;
    g_cpu.R[15] = 0x08049444u;
    runtime_tick(_cyc_08049442);
    }
L_08049444:
    /* 08049444  08049444 T bl.hi 0x0803d448 */
    {
    g_cpu.R[15] = 0x08049444u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08049444 = 1u;
    _cyc_08049444 = 1u;
    g_cpu.R[14] = 0x0803D448u;
    g_cpu.R[15] = 0x08049446u;
    runtime_tick(_cyc_08049444);
    }
L_08049446:
    /* 08049446  08049446 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08049446u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08049446 = 1u;
    _cyc_08049446 = 3u;
    uint32_t _blt_08049446 = (g_cpu.R[14] + 0x000002E8u) & ~1u;
    g_cpu.R[14] = 0x08049449u;
    g_cpu.R[15] = _blt_08049446;
    runtime_call_push_return(0x08049448u);
    runtime_tick(_cyc_08049446);
    _cyc_08049446 = 0u;
    runtime_dispatch(_blt_08049446);
    if (g_cpu.R[15] != 0x08049448u) { runtime_call_cancel_return(0x08049448u); return; }
    g_cpu.R[15] = 0x08049448u;
    runtime_tick(_cyc_08049446);
    }
    /* fall-through to 0x08049448 */
    g_cpu.R[15] = 0x08049448u;
    runtime_dispatch(0x08049448u);
    return;
}

/* 0x08050C48  mode=thumb  end=0x08050C58  branches=2 */
void gf_race_08050c48(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050C4Au: goto L_08050C4A;
        case 0x08050C4Cu: goto L_08050C4C;
        case 0x08050C4Eu: goto L_08050C4E;
        case 0x08050C50u: goto L_08050C50;
        case 0x08050C52u: goto L_08050C52;
        case 0x08050C54u: goto L_08050C54;
        case 0x08050C56u: goto L_08050C56;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050C48u);
    /* 08050C48  08050c48 T ldr r0,[r15,#0x18] */
    {
    g_cpu.R[15] = 0x08050C48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C48 = 1u;
    _cyc_08050C48 = 2u;
    uint32_t _base_08050C48 = 0x08050C4Cu & ~3u;
    uint32_t _off_08050C48;
    _off_08050C48 = 0x00000018u;
    uint32_t _ea_08050C48 = _base_08050C48 + _off_08050C48;
    uint32_t _post_08050C48 = _base_08050C48 + _off_08050C48;
    _cyc_08050C48 += runtime_mem_cycles(_ea_08050C48, 4u, 0u);
    uint32_t _v_08050C48;
    { uint32_t _w = bus_read_u32(_ea_08050C48 & ~3u); uint32_t _rot = (_ea_08050C48 & 3u) * 8u; _v_08050C48 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050C48;
    g_cpu.R[15] = 0x08050C4Au;
    runtime_tick(_cyc_08050C48);
    }
L_08050C4A:
    /* 08050C4A  08050c4a T movs r1,#0x1e */
    {
    g_cpu.R[15] = 0x08050C4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C4A = 1u;
    _cyc_08050C4A = 1u;
    uint32_t _r_08050C4A;
    _r_08050C4A = 0x0000001Eu;
    arm_set_nzc_logic(_r_08050C4A, cpsr_c());
    g_cpu.R[1] = _r_08050C4A;
    g_cpu.R[15] = 0x08050C4Cu;
    runtime_tick(_cyc_08050C4A);
    }
L_08050C4C:
    /* 08050C4C  08050c4c T ldrsb r1,[r0,+r1] */
    {
    g_cpu.R[15] = 0x08050C4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C4C = 1u;
    _cyc_08050C4C = 2u;
    uint32_t _base_08050C4C = g_cpu.R[0];
    uint32_t _off_08050C4C;
    uint32_t _morm_08050C4C = g_cpu.R[1];
    _off_08050C4C = _morm_08050C4C;
    uint32_t _ea_08050C4C = _base_08050C4C + _off_08050C4C;
    uint32_t _post_08050C4C = _base_08050C4C + _off_08050C4C;
    _cyc_08050C4C += runtime_mem_cycles(_ea_08050C4C, 1u, 0u);
    uint32_t _v_08050C4C;
    _v_08050C4C = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08050C4C);
    g_cpu.R[1] = _v_08050C4C;
    g_cpu.R[15] = 0x08050C4Eu;
    runtime_tick(_cyc_08050C4C);
    }
L_08050C4E:
    /* 08050C4E  08050c4e T adds r2,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050C4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C4E = 1u;
    _cyc_08050C4E = 1u;
    uint32_t _rn_08050C4E = g_cpu.R[4];
    uint32_t _r_08050C4E;
    _r_08050C4E = _rn_08050C4E + 0x00000000u;
    arm_set_nzcv_add(_rn_08050C4E, 0x00000000u, _r_08050C4E);
    g_cpu.R[2] = _r_08050C4E;
    g_cpu.R[15] = 0x08050C50u;
    runtime_tick(_cyc_08050C4E);
    }
L_08050C50:
    /* 08050C50  08050c50 T adds r4,r0,#0x0 */
    {
    g_cpu.R[15] = 0x08050C50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C50 = 1u;
    _cyc_08050C50 = 1u;
    uint32_t _rn_08050C50 = g_cpu.R[0];
    uint32_t _r_08050C50;
    _r_08050C50 = _rn_08050C50 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050C50, 0x00000000u, _r_08050C50);
    g_cpu.R[4] = _r_08050C50;
    g_cpu.R[15] = 0x08050C52u;
    runtime_tick(_cyc_08050C50);
    }
L_08050C52:
    /* 08050C52  08050c52 T cmps r1,#0x9 */
    {
    g_cpu.R[15] = 0x08050C52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C52 = 1u;
    _cyc_08050C52 = 1u;
    uint32_t _rn_08050C52 = g_cpu.R[1];
    uint32_t _r_08050C52;
    _r_08050C52 = _rn_08050C52 - 0x00000009u;
    arm_set_nzcv_sub(_rn_08050C52, 0x00000009u, _r_08050C52);
    g_cpu.R[15] = 0x08050C54u;
    runtime_tick(_cyc_08050C52);
    }
L_08050C54:
    /* 08050C54  08050c54 T bls 0x08050c58 */
    {
    g_cpu.R[15] = 0x08050C54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C54 = 1u;
    if (arm_cond_passes(0x9u)) {
        _cyc_08050C54 = 3u;
        g_cpu.R[15] = 0x08050C58u;
        runtime_tick(_cyc_08050C54);
        gf_tfunc_08050C58();
        return;
    }
    g_cpu.R[15] = 0x08050C56u;
    runtime_tick(_cyc_08050C54);
    }
L_08050C56:
    /* 08050C56  08050c56 T b 0x08050d62 */
    {
    g_cpu.R[15] = 0x08050C56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C56 = 1u;
    _cyc_08050C56 = 3u;
    g_cpu.R[15] = 0x08050D62u;
    runtime_tick(_cyc_08050C56);
    gf_tfunc_08050D62();
    return;
    g_cpu.R[15] = 0x08050C58u;
    runtime_tick(_cyc_08050C56);
    }
    /* fall-through to 0x08050C58 */
    g_cpu.R[15] = 0x08050C58u;
    runtime_dispatch(0x08050C58u);
    return;
}

/* 0x08032498  mode=thumb  end=0x080324A6  branches=2 */
void gf_race_08032498(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0803249Au: goto L_0803249A;
        case 0x0803249Cu: goto L_0803249C;
        case 0x0803249Eu: goto L_0803249E;
        case 0x080324A0u: goto L_080324A0;
        case 0x080324A2u: goto L_080324A2;
        case 0x080324A4u: goto L_080324A4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08032498u);
    /* 08032498  08032498 T ldr r1,[r15,#0x28] */
    {
    g_cpu.R[15] = 0x08032498u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032498 = 1u;
    _cyc_08032498 = 2u;
    uint32_t _base_08032498 = 0x0803249Cu & ~3u;
    uint32_t _off_08032498;
    _off_08032498 = 0x00000028u;
    uint32_t _ea_08032498 = _base_08032498 + _off_08032498;
    uint32_t _post_08032498 = _base_08032498 + _off_08032498;
    _cyc_08032498 += runtime_mem_cycles(_ea_08032498, 4u, 0u);
    uint32_t _v_08032498;
    { uint32_t _w = bus_read_u32(_ea_08032498 & ~3u); uint32_t _rot = (_ea_08032498 & 3u) * 8u; _v_08032498 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08032498;
    g_cpu.R[15] = 0x0803249Au;
    runtime_tick(_cyc_08032498);
    }
L_0803249A:
    /* 0803249A  0803249a T ldr r6,[r15,#0x2c] */
    {
    g_cpu.R[15] = 0x0803249Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803249A = 1u;
    _cyc_0803249A = 2u;
    uint32_t _base_0803249A = 0x0803249Eu & ~3u;
    uint32_t _off_0803249A;
    _off_0803249A = 0x0000002Cu;
    uint32_t _ea_0803249A = _base_0803249A + _off_0803249A;
    uint32_t _post_0803249A = _base_0803249A + _off_0803249A;
    _cyc_0803249A += runtime_mem_cycles(_ea_0803249A, 4u, 0u);
    uint32_t _v_0803249A;
    { uint32_t _w = bus_read_u32(_ea_0803249A & ~3u); uint32_t _rot = (_ea_0803249A & 3u) * 8u; _v_0803249A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_0803249A;
    g_cpu.R[15] = 0x0803249Cu;
    runtime_tick(_cyc_0803249A);
    }
L_0803249C:
    /* 0803249C  0803249c T adds r0,r6,#0x0 */
    {
    g_cpu.R[15] = 0x0803249Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803249C = 1u;
    _cyc_0803249C = 1u;
    uint32_t _rn_0803249C = g_cpu.R[6];
    uint32_t _r_0803249C;
    _r_0803249C = _rn_0803249C + 0x00000000u;
    arm_set_nzcv_add(_rn_0803249C, 0x00000000u, _r_0803249C);
    g_cpu.R[0] = _r_0803249C;
    g_cpu.R[15] = 0x0803249Eu;
    runtime_tick(_cyc_0803249C);
    }
L_0803249E:
    /* 0803249E  0803249e T strh r0,[r1] */
    {
    g_cpu.R[15] = 0x0803249Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803249E = 1u;
    _cyc_0803249E = 1u;
    uint32_t _base_0803249E = g_cpu.R[1];
    uint32_t _off_0803249E;
    _off_0803249E = 0x00000000u;
    uint32_t _ea_0803249E = _base_0803249E + _off_0803249E;
    uint32_t _post_0803249E = _base_0803249E + _off_0803249E;
    _cyc_0803249E += runtime_mem_cycles(_ea_0803249E, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0803249Eu, _ea_0803249E & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0803249E & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x080324A0u;
    runtime_tick(_cyc_0803249E);
    }
L_080324A0:
    /* 080324A0  080324a0 T adds r1,r1,#0x2 */
    {
    g_cpu.R[15] = 0x080324A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324A0 = 1u;
    _cyc_080324A0 = 1u;
    uint32_t _rn_080324A0 = g_cpu.R[1];
    uint32_t _r_080324A0;
    _r_080324A0 = _rn_080324A0 + 0x00000002u;
    arm_set_nzcv_add(_rn_080324A0, 0x00000002u, _r_080324A0);
    g_cpu.R[1] = _r_080324A0;
    g_cpu.R[15] = 0x080324A2u;
    runtime_tick(_cyc_080324A0);
    }
L_080324A2:
    /* 080324A2  080324a2 T ldr r2,[r15,#0x28] */
    {
    g_cpu.R[15] = 0x080324A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324A2 = 1u;
    _cyc_080324A2 = 2u;
    uint32_t _base_080324A2 = 0x080324A6u & ~3u;
    uint32_t _off_080324A2;
    _off_080324A2 = 0x00000028u;
    uint32_t _ea_080324A2 = _base_080324A2 + _off_080324A2;
    uint32_t _post_080324A2 = _base_080324A2 + _off_080324A2;
    _cyc_080324A2 += runtime_mem_cycles(_ea_080324A2, 4u, 0u);
    uint32_t _v_080324A2;
    { uint32_t _w = bus_read_u32(_ea_080324A2 & ~3u); uint32_t _rot = (_ea_080324A2 & 3u) * 8u; _v_080324A2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_080324A2;
    g_cpu.R[15] = 0x080324A4u;
    runtime_tick(_cyc_080324A2);
    }
L_080324A4:
    /* 080324A4  080324a4 T adds r0,r2,#0x0 */
    {
    g_cpu.R[15] = 0x080324A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080324A4 = 1u;
    _cyc_080324A4 = 1u;
    uint32_t _rn_080324A4 = g_cpu.R[2];
    uint32_t _r_080324A4;
    _r_080324A4 = _rn_080324A4 + 0x00000000u;
    arm_set_nzcv_add(_rn_080324A4, 0x00000000u, _r_080324A4);
    g_cpu.R[0] = _r_080324A4;
    g_cpu.R[15] = 0x080324A6u;
    runtime_tick(_cyc_080324A4);
    }
    /* fall-through to 0x080324A6 */
    g_cpu.R[15] = 0x080324A6u;
    runtime_dispatch(0x080324A6u);
    return;
}

/* 0x08037C04  mode=thumb  end=0x08037C08  branches=2 */
void gf_race_08037c04(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037C06u: goto L_08037C06;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037C04u);
    /* 08037C04  08037c04 T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08037C04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C04 = 1u;
    _cyc_08037C04 = 1u;
    uint32_t _rm_08037C04 = g_cpu.R[1];
    uint32_t _op2_08037C04;
    uint32_t _co_08037C04;
    _op2_08037C04 = _rm_08037C04;
    _co_08037C04 = cpsr_c();
    uint32_t _rn_08037C04 = g_cpu.R[0];
    uint32_t _r_08037C04;
    _r_08037C04 = _rn_08037C04 | _op2_08037C04;
    arm_set_nzc_logic(_r_08037C04, _co_08037C04);
    g_cpu.R[0] = _r_08037C04;
    g_cpu.R[15] = 0x08037C06u;
    runtime_tick(_cyc_08037C04);
    }
L_08037C06:
    /* 08037C06  08037c06 T strb r0,[r5] */
    {
    g_cpu.R[15] = 0x08037C06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C06 = 1u;
    _cyc_08037C06 = 1u;
    uint32_t _base_08037C06 = g_cpu.R[5];
    uint32_t _off_08037C06;
    _off_08037C06 = 0x00000000u;
    uint32_t _ea_08037C06 = _base_08037C06 + _off_08037C06;
    uint32_t _post_08037C06 = _base_08037C06 + _off_08037C06;
    _cyc_08037C06 += runtime_mem_cycles(_ea_08037C06, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08037C06u, _ea_08037C06, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08037C06, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08037C08u;
    runtime_tick(_cyc_08037C06);
    }
    /* fall-through to 0x08037C08 */
    g_cpu.R[15] = 0x08037C08u;
    runtime_dispatch(0x08037C08u);
    return;
}

/* 0x08037FB0  mode=thumb  end=0x08037FB4  branches=0  indirect */
void gf_race_08037fb0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037FB2u: goto L_08037FB2;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037FB0u);
    /* 08037FB0  08037fb0 T ldm r13!,{r4,r5} */
    {
    g_cpu.R[15] = 0x08037FB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037FB0 = 1u;
    _cyc_08037FB0 = 2u;
    uint32_t _b_08037FB0 = g_cpu.R[13];
    uint32_t _a_08037FB0 = _b_08037FB0;
    uint32_t _fb_08037FB0 = _b_08037FB0 + 8u;
    _cyc_08037FB0 += runtime_mem_cycles(_a_08037FB0 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08037FB0 & ~3u);
    _a_08037FB0 += 4u;
    _cyc_08037FB0 += runtime_mem_cycles(_a_08037FB0 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08037FB0 & ~3u);
    _a_08037FB0 += 4u;
    g_cpu.R[13] = _fb_08037FB0;
    g_cpu.R[15] = 0x08037FB2u;
    runtime_tick(_cyc_08037FB0);
    }
L_08037FB2:
    /* 08037FB2  08037fb2 T bx r14 */
    {
    g_cpu.R[15] = 0x08037FB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037FB2 = 1u;
    _cyc_08037FB2 = 3u;
    uint32_t _bxt_08037FB2 = g_cpu.R[14];
    g_cpu.R[15] = _bxt_08037FB2 & ~1u;
    if (_bxt_08037FB2 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08037FB2);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08037FB2);
    return;
    g_cpu.R[15] = 0x08037FB4u;
    runtime_tick(_cyc_08037FB2);
    }
    /* fall-through to 0x08037FB4 */
    g_cpu.R[15] = 0x08037FB4u;
    runtime_dispatch(0x08037FB4u);
    return;
}

/* 0x080389F6  mode=thumb  end=0x080389FE  branches=1  indirect */
void gf_race_080389f6(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080389F8u: goto L_080389F8;
        case 0x080389FAu: goto L_080389FA;
        case 0x080389FCu: goto L_080389FC;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080389F6u);
    /* 080389F6  080389f6 T subs r5,r5,#0x1 */
    {
    g_cpu.R[15] = 0x080389F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389F6 = 1u;
    _cyc_080389F6 = 1u;
    uint32_t _rn_080389F6 = g_cpu.R[5];
    uint32_t _r_080389F6;
    _r_080389F6 = _rn_080389F6 - 0x00000001u;
    arm_set_nzcv_sub(_rn_080389F6, 0x00000001u, _r_080389F6);
    g_cpu.R[5] = _r_080389F6;
    g_cpu.R[15] = 0x080389F8u;
    runtime_tick(_cyc_080389F6);
    }
L_080389F8:
    /* 080389F8  080389f8 T adds r4,r4,#0x50 */
    {
    g_cpu.R[15] = 0x080389F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389F8 = 1u;
    _cyc_080389F8 = 1u;
    uint32_t _rn_080389F8 = g_cpu.R[4];
    uint32_t _r_080389F8;
    _r_080389F8 = _rn_080389F8 + 0x00000050u;
    arm_set_nzcv_add(_rn_080389F8, 0x00000050u, _r_080389F8);
    g_cpu.R[4] = _r_080389F8;
    g_cpu.R[15] = 0x080389FAu;
    runtime_tick(_cyc_080389F8);
    }
L_080389FA:
    /* 080389FA  080389fa T cmps r5,#0x0 */
    {
    g_cpu.R[15] = 0x080389FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389FA = 1u;
    _cyc_080389FA = 1u;
    uint32_t _rn_080389FA = g_cpu.R[5];
    uint32_t _r_080389FA;
    _r_080389FA = _rn_080389FA - 0x00000000u;
    arm_set_nzcv_sub(_rn_080389FA, 0x00000000u, _r_080389FA);
    g_cpu.R[15] = 0x080389FCu;
    runtime_tick(_cyc_080389FA);
    }
L_080389FC:
    /* 080389FC  080389fc T bgt 0x080389e0 */
    {
    g_cpu.R[15] = 0x080389FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389FC = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_080389FC = 3u;
        g_cpu.R[15] = 0x080389E0u;
        runtime_tick(_cyc_080389FC);
        gf_race_080389e0();
        return;
    }
    g_cpu.R[15] = 0x080389FEu;
    runtime_tick(_cyc_080389FC);
    }
    /* fall-through to 0x080389FE */
    g_cpu.R[15] = 0x080389FEu;
    runtime_dispatch(0x080389FEu);
    return;
}

/* 0x08038E72  mode=thumb  end=0x08038EA2  branches=3 */
void gf_race_08038e72(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038E74u: goto L_08038E74;
        case 0x08038E76u: goto L_08038E76;
        case 0x08038E78u: goto L_08038E78;
        case 0x08038E7Au: goto L_08038E7A;
        case 0x08038E7Cu: goto L_08038E7C;
        case 0x08038E7Eu: goto L_08038E7E;
        case 0x08038E80u: goto L_08038E80;
        case 0x08038E82u: goto L_08038E82;
        case 0x08038E84u: goto L_08038E84;
        case 0x08038E86u: goto L_08038E86;
        case 0x08038E88u: goto L_08038E88;
        case 0x08038E8Au: goto L_08038E8A;
        case 0x08038E8Cu: goto L_08038E8C;
        case 0x08038E8Eu: goto L_08038E8E;
        case 0x08038E90u: goto L_08038E90;
        case 0x08038E92u: goto L_08038E92;
        case 0x08038E94u: goto L_08038E94;
        case 0x08038E96u: goto L_08038E96;
        case 0x08038E98u: goto L_08038E98;
        case 0x08038E9Au: goto L_08038E9A;
        case 0x08038E9Cu: goto L_08038E9C;
        case 0x08038E9Eu: goto L_08038E9E;
        case 0x08038EA0u: goto L_08038EA0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038E72u);
    /* 08038E72  08038e72 T ldrb r2,[r4,#0xc] */
    {
    g_cpu.R[15] = 0x08038E72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E72 = 1u;
    _cyc_08038E72 = 2u;
    uint32_t _base_08038E72 = g_cpu.R[4];
    uint32_t _off_08038E72;
    _off_08038E72 = 0x0000000Cu;
    uint32_t _ea_08038E72 = _base_08038E72 + _off_08038E72;
    uint32_t _post_08038E72 = _base_08038E72 + _off_08038E72;
    _cyc_08038E72 += runtime_mem_cycles(_ea_08038E72, 1u, 0u);
    uint32_t _v_08038E72;
    _v_08038E72 = bus_read_u8(_ea_08038E72);
    g_cpu.R[2] = _v_08038E72;
    g_cpu.R[15] = 0x08038E74u;
    runtime_tick(_cyc_08038E72);
    }
L_08038E74:
    /* 08038E74  08038e74 T ldrb r1,[r4,#0xa] */
    {
    g_cpu.R[15] = 0x08038E74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E74 = 1u;
    _cyc_08038E74 = 2u;
    uint32_t _base_08038E74 = g_cpu.R[4];
    uint32_t _off_08038E74;
    _off_08038E74 = 0x0000000Au;
    uint32_t _ea_08038E74 = _base_08038E74 + _off_08038E74;
    uint32_t _post_08038E74 = _base_08038E74 + _off_08038E74;
    _cyc_08038E74 += runtime_mem_cycles(_ea_08038E74, 1u, 0u);
    uint32_t _v_08038E74;
    _v_08038E74 = bus_read_u8(_ea_08038E74);
    g_cpu.R[1] = _v_08038E74;
    g_cpu.R[15] = 0x08038E76u;
    runtime_tick(_cyc_08038E74);
    }
L_08038E76:
    /* 08038E76  08038e76 T adds r0,r2,#0x0 */
    {
    g_cpu.R[15] = 0x08038E76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E76 = 1u;
    _cyc_08038E76 = 1u;
    uint32_t _rn_08038E76 = g_cpu.R[2];
    uint32_t _r_08038E76;
    _r_08038E76 = _rn_08038E76 + 0x00000000u;
    arm_set_nzcv_add(_rn_08038E76, 0x00000000u, _r_08038E76);
    g_cpu.R[0] = _r_08038E76;
    g_cpu.R[15] = 0x08038E78u;
    runtime_tick(_cyc_08038E76);
    }
L_08038E78:
    /* 08038E78  08038e78 T muls r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08038E78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E78 = 1u;
    _cyc_08038E78 = 1u;
    _cyc_08038E78 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_08038E78 = g_cpu.R[0] * g_cpu.R[1];
    g_cpu.R[0] = _r_08038E78;
    arm_set_nz(_r_08038E78);
    g_cpu.R[15] = 0x08038E7Au;
    runtime_tick(_cyc_08038E78);
    }
L_08038E7A:
    /* 08038E7A  08038e7a T adds r0,r0,#0xff */
    {
    g_cpu.R[15] = 0x08038E7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E7A = 1u;
    _cyc_08038E7A = 1u;
    uint32_t _rn_08038E7A = g_cpu.R[0];
    uint32_t _r_08038E7A;
    _r_08038E7A = _rn_08038E7A + 0x000000FFu;
    arm_set_nzcv_add(_rn_08038E7A, 0x000000FFu, _r_08038E7A);
    g_cpu.R[0] = _r_08038E7A;
    g_cpu.R[15] = 0x08038E7Cu;
    runtime_tick(_cyc_08038E7A);
    }
L_08038E7C:
    /* 08038E7C  08038e7c T movs r0,r0,asr #8 */
    {
    g_cpu.R[15] = 0x08038E7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E7C = 1u;
    _cyc_08038E7C = 1u;
    uint32_t _rm_08038E7C = g_cpu.R[0];
    uint32_t _op2_08038E7C;
    uint32_t _co_08038E7C;
    _op2_08038E7C = (uint32_t)((int32_t)_rm_08038E7C >> 8);
    _co_08038E7C = (_rm_08038E7C >> 7) & 1u;
    uint32_t _r_08038E7C;
    _r_08038E7C = _op2_08038E7C;
    arm_set_nzc_logic(_r_08038E7C, _co_08038E7C);
    g_cpu.R[0] = _r_08038E7C;
    g_cpu.R[15] = 0x08038E7Eu;
    runtime_tick(_cyc_08038E7C);
    }
L_08038E7E:
    /* 08038E7E  08038e7e T movs r1,#0x0 */
    {
    g_cpu.R[15] = 0x08038E7Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E7E = 1u;
    _cyc_08038E7E = 1u;
    uint32_t _r_08038E7E;
    _r_08038E7E = 0x00000000u;
    arm_set_nzc_logic(_r_08038E7E, cpsr_c());
    g_cpu.R[1] = _r_08038E7E;
    g_cpu.R[15] = 0x08038E80u;
    runtime_tick(_cyc_08038E7E);
    }
L_08038E80:
    /* 08038E80  08038e80 T strb r0,[r4,#0x9] */
    {
    g_cpu.R[15] = 0x08038E80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E80 = 1u;
    _cyc_08038E80 = 1u;
    uint32_t _base_08038E80 = g_cpu.R[4];
    uint32_t _off_08038E80;
    _off_08038E80 = 0x00000009u;
    uint32_t _ea_08038E80 = _base_08038E80 + _off_08038E80;
    uint32_t _post_08038E80 = _base_08038E80 + _off_08038E80;
    _cyc_08038E80 += runtime_mem_cycles(_ea_08038E80, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038E80u, _ea_08038E80, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038E80, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038E82u;
    runtime_tick(_cyc_08038E80);
    }
L_08038E82:
    /* 08038E82  08038e82 T movs r0,r0,lsl #24 */
    {
    g_cpu.R[15] = 0x08038E82u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E82 = 1u;
    _cyc_08038E82 = 1u;
    uint32_t _rm_08038E82 = g_cpu.R[0];
    uint32_t _op2_08038E82;
    uint32_t _co_08038E82;
    _op2_08038E82 = _rm_08038E82 << 24;
    _co_08038E82 = (_rm_08038E82 >> 8) & 1u;
    uint32_t _r_08038E82;
    _r_08038E82 = _op2_08038E82;
    arm_set_nzc_logic(_r_08038E82, _co_08038E82);
    g_cpu.R[0] = _r_08038E82;
    g_cpu.R[15] = 0x08038E84u;
    runtime_tick(_cyc_08038E82);
    }
L_08038E84:
    /* 08038E84  08038e84 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038E84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E84 = 1u;
    _cyc_08038E84 = 1u;
    uint32_t _rn_08038E84 = g_cpu.R[0];
    uint32_t _r_08038E84;
    _r_08038E84 = _rn_08038E84 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038E84, 0x00000000u, _r_08038E84);
    g_cpu.R[15] = 0x08038E86u;
    runtime_tick(_cyc_08038E84);
    }
L_08038E86:
    /* 08038E86  08038e86 T beq 0x08038df2 */
    {
    g_cpu.R[15] = 0x08038E86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E86 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038E86 = 3u;
        g_cpu.R[15] = 0x08038DF2u;
        runtime_tick(_cyc_08038E86);
        gf_race_08038df2();
        return;
    }
    g_cpu.R[15] = 0x08038E88u;
    runtime_tick(_cyc_08038E86);
    }
L_08038E88:
    /* 08038E88  08038e88 T movs r0,#0x4 */
    {
    g_cpu.R[15] = 0x08038E88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E88 = 1u;
    _cyc_08038E88 = 1u;
    uint32_t _r_08038E88;
    _r_08038E88 = 0x00000004u;
    arm_set_nzc_logic(_r_08038E88, cpsr_c());
    g_cpu.R[0] = _r_08038E88;
    g_cpu.R[15] = 0x08038E8Au;
    runtime_tick(_cyc_08038E88);
    }
L_08038E8A:
    /* 08038E8A  08038e8a T ldrb r2,[r4] */
    {
    g_cpu.R[15] = 0x08038E8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E8A = 1u;
    _cyc_08038E8A = 2u;
    uint32_t _base_08038E8A = g_cpu.R[4];
    uint32_t _off_08038E8A;
    _off_08038E8A = 0x00000000u;
    uint32_t _ea_08038E8A = _base_08038E8A + _off_08038E8A;
    uint32_t _post_08038E8A = _base_08038E8A + _off_08038E8A;
    _cyc_08038E8A += runtime_mem_cycles(_ea_08038E8A, 1u, 0u);
    uint32_t _v_08038E8A;
    _v_08038E8A = bus_read_u8(_ea_08038E8A);
    g_cpu.R[2] = _v_08038E8A;
    g_cpu.R[15] = 0x08038E8Cu;
    runtime_tick(_cyc_08038E8A);
    }
L_08038E8C:
    /* 08038E8C  08038e8c T orrs r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08038E8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E8C = 1u;
    _cyc_08038E8C = 1u;
    uint32_t _rm_08038E8C = g_cpu.R[2];
    uint32_t _op2_08038E8C;
    uint32_t _co_08038E8C;
    _op2_08038E8C = _rm_08038E8C;
    _co_08038E8C = cpsr_c();
    uint32_t _rn_08038E8C = g_cpu.R[0];
    uint32_t _r_08038E8C;
    _r_08038E8C = _rn_08038E8C | _op2_08038E8C;
    arm_set_nzc_logic(_r_08038E8C, _co_08038E8C);
    g_cpu.R[0] = _r_08038E8C;
    g_cpu.R[15] = 0x08038E8Eu;
    runtime_tick(_cyc_08038E8C);
    }
L_08038E8E:
    /* 08038E8E  08038e8e T strb r0,[r4] */
    {
    g_cpu.R[15] = 0x08038E8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E8E = 1u;
    _cyc_08038E8E = 1u;
    uint32_t _base_08038E8E = g_cpu.R[4];
    uint32_t _off_08038E8E;
    _off_08038E8E = 0x00000000u;
    uint32_t _ea_08038E8E = _base_08038E8E + _off_08038E8E;
    uint32_t _post_08038E8E = _base_08038E8E + _off_08038E8E;
    _cyc_08038E8E += runtime_mem_cycles(_ea_08038E8E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038E8Eu, _ea_08038E8E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038E8E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038E90u;
    runtime_tick(_cyc_08038E8E);
    }
L_08038E90:
    /* 08038E90  08038e90 T movs r0,#0x1 */
    {
    g_cpu.R[15] = 0x08038E90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E90 = 1u;
    _cyc_08038E90 = 1u;
    uint32_t _r_08038E90;
    _r_08038E90 = 0x00000001u;
    arm_set_nzc_logic(_r_08038E90, cpsr_c());
    g_cpu.R[0] = _r_08038E90;
    g_cpu.R[15] = 0x08038E92u;
    runtime_tick(_cyc_08038E90);
    }
L_08038E92:
    /* 08038E92  08038e92 T ldrb r1,[r4,#0x1d] */
    {
    g_cpu.R[15] = 0x08038E92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E92 = 1u;
    _cyc_08038E92 = 2u;
    uint32_t _base_08038E92 = g_cpu.R[4];
    uint32_t _off_08038E92;
    _off_08038E92 = 0x0000001Du;
    uint32_t _ea_08038E92 = _base_08038E92 + _off_08038E92;
    uint32_t _post_08038E92 = _base_08038E92 + _off_08038E92;
    _cyc_08038E92 += runtime_mem_cycles(_ea_08038E92, 1u, 0u);
    uint32_t _v_08038E92;
    _v_08038E92 = bus_read_u8(_ea_08038E92);
    g_cpu.R[1] = _v_08038E92;
    g_cpu.R[15] = 0x08038E94u;
    runtime_tick(_cyc_08038E92);
    }
L_08038E94:
    /* 08038E94  08038e94 T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08038E94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E94 = 1u;
    _cyc_08038E94 = 1u;
    uint32_t _rm_08038E94 = g_cpu.R[1];
    uint32_t _op2_08038E94;
    uint32_t _co_08038E94;
    _op2_08038E94 = _rm_08038E94;
    _co_08038E94 = cpsr_c();
    uint32_t _rn_08038E94 = g_cpu.R[0];
    uint32_t _r_08038E94;
    _r_08038E94 = _rn_08038E94 | _op2_08038E94;
    arm_set_nzc_logic(_r_08038E94, _co_08038E94);
    g_cpu.R[0] = _r_08038E94;
    g_cpu.R[15] = 0x08038E96u;
    runtime_tick(_cyc_08038E94);
    }
L_08038E96:
    /* 08038E96  08038e96 T strb r0,[r4,#0x1d] */
    {
    g_cpu.R[15] = 0x08038E96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E96 = 1u;
    _cyc_08038E96 = 1u;
    uint32_t _base_08038E96 = g_cpu.R[4];
    uint32_t _off_08038E96;
    _off_08038E96 = 0x0000001Du;
    uint32_t _ea_08038E96 = _base_08038E96 + _off_08038E96;
    uint32_t _post_08038E96 = _base_08038E96 + _off_08038E96;
    _cyc_08038E96 += runtime_mem_cycles(_ea_08038E96, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038E96u, _ea_08038E96, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038E96, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038E98u;
    runtime_tick(_cyc_08038E96);
    }
L_08038E98:
    /* 08038E98  08038e98 T cmps r6,#0x3 */
    {
    g_cpu.R[15] = 0x08038E98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E98 = 1u;
    _cyc_08038E98 = 1u;
    uint32_t _rn_08038E98 = g_cpu.R[6];
    uint32_t _r_08038E98;
    _r_08038E98 = _rn_08038E98 - 0x00000003u;
    arm_set_nzcv_sub(_rn_08038E98, 0x00000003u, _r_08038E98);
    g_cpu.R[15] = 0x08038E9Au;
    runtime_tick(_cyc_08038E98);
    }
L_08038E9A:
    /* 08038E9A  08038e9a T beq 0x08038f46 */
    {
    g_cpu.R[15] = 0x08038E9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E9A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038E9A = 3u;
        g_cpu.R[15] = 0x08038F46u;
        runtime_tick(_cyc_08038E9A);
        gf_race_08038f46();
        return;
    }
    g_cpu.R[15] = 0x08038E9Cu;
    runtime_tick(_cyc_08038E9A);
    }
L_08038E9C:
    /* 08038E9C  08038e9c T movs r2,#0x8 */
    {
    g_cpu.R[15] = 0x08038E9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E9C = 1u;
    _cyc_08038E9C = 1u;
    uint32_t _r_08038E9C;
    _r_08038E9C = 0x00000008u;
    arm_set_nzc_logic(_r_08038E9C, cpsr_c());
    g_cpu.R[2] = _r_08038E9C;
    g_cpu.R[15] = 0x08038E9Eu;
    runtime_tick(_cyc_08038E9C);
    }
L_08038E9E:
    /* 08038E9E  08038e9e T mov r8,r2 */
    {
    g_cpu.R[15] = 0x08038E9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038E9E = 1u;
    _cyc_08038E9E = 1u;
    uint32_t _rm_08038E9E = g_cpu.R[2];
    uint32_t _op2_08038E9E;
    uint32_t _co_08038E9E;
    _op2_08038E9E = _rm_08038E9E;
    _co_08038E9E = cpsr_c();
    uint32_t _r_08038E9E;
    _r_08038E9E = _op2_08038E9E;
    g_cpu.R[8] = _r_08038E9E;
    g_cpu.R[15] = 0x08038EA0u;
    runtime_tick(_cyc_08038E9E);
    }
L_08038EA0:
    /* 08038EA0  08038ea0 T b 0x08038f46 */
    {
    g_cpu.R[15] = 0x08038EA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038EA0 = 1u;
    _cyc_08038EA0 = 3u;
    g_cpu.R[15] = 0x08038F46u;
    runtime_tick(_cyc_08038EA0);
    gf_race_08038f46();
    return;
    g_cpu.R[15] = 0x08038EA2u;
    runtime_tick(_cyc_08038EA0);
    }
    /* fall-through to 0x08038EA2 */
    g_cpu.R[15] = 0x08038EA2u;
    runtime_dispatch(0x08038EA2u);
    return;
}

/* 0x08038F86  mode=thumb  end=0x08038F92  branches=2 */
void gf_race_08038f86(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038F88u: goto L_08038F88;
        case 0x08038F8Au: goto L_08038F8A;
        case 0x08038F8Cu: goto L_08038F8C;
        case 0x08038F8Eu: goto L_08038F8E;
        case 0x08038F90u: goto L_08038F90;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038F86u);
    /* 08038F86  08038f86 T cmps r6,#0x4 */
    {
    g_cpu.R[15] = 0x08038F86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F86 = 1u;
    _cyc_08038F86 = 1u;
    uint32_t _rn_08038F86 = g_cpu.R[6];
    uint32_t _r_08038F86;
    _r_08038F86 = _rn_08038F86 - 0x00000004u;
    arm_set_nzcv_sub(_rn_08038F86, 0x00000004u, _r_08038F86);
    g_cpu.R[15] = 0x08038F88u;
    runtime_tick(_cyc_08038F86);
    }
L_08038F88:
    /* 08038F88  08038f88 T beq 0x08038f98 */
    {
    g_cpu.R[15] = 0x08038F88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F88 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038F88 = 3u;
        g_cpu.R[15] = 0x08038F98u;
        runtime_tick(_cyc_08038F88);
        gf_tfunc_08038F98();
        return;
    }
    g_cpu.R[15] = 0x08038F8Au;
    runtime_tick(_cyc_08038F88);
    }
L_08038F8A:
    /* 08038F8A  08038f8a T ldr r0,[r4,#0x20] */
    {
    g_cpu.R[15] = 0x08038F8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F8A = 1u;
    _cyc_08038F8A = 2u;
    uint32_t _base_08038F8A = g_cpu.R[4];
    uint32_t _off_08038F8A;
    _off_08038F8A = 0x00000020u;
    uint32_t _ea_08038F8A = _base_08038F8A + _off_08038F8A;
    uint32_t _post_08038F8A = _base_08038F8A + _off_08038F8A;
    _cyc_08038F8A += runtime_mem_cycles(_ea_08038F8A, 4u, 0u);
    uint32_t _v_08038F8A;
    { uint32_t _w = bus_read_u32(_ea_08038F8A & ~3u); uint32_t _rot = (_ea_08038F8A & 3u) * 8u; _v_08038F8A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08038F8A;
    g_cpu.R[15] = 0x08038F8Cu;
    runtime_tick(_cyc_08038F8A);
    }
L_08038F8C:
    /* 08038F8C  08038f8c T ldr r1,[r13,#0x10] */
    {
    g_cpu.R[15] = 0x08038F8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F8C = 1u;
    _cyc_08038F8C = 2u;
    uint32_t _base_08038F8C = g_cpu.R[13];
    uint32_t _off_08038F8C;
    _off_08038F8C = 0x00000010u;
    uint32_t _ea_08038F8C = _base_08038F8C + _off_08038F8C;
    uint32_t _post_08038F8C = _base_08038F8C + _off_08038F8C;
    _cyc_08038F8C += runtime_mem_cycles(_ea_08038F8C, 4u, 0u);
    uint32_t _v_08038F8C;
    { uint32_t _w = bus_read_u32(_ea_08038F8C & ~3u); uint32_t _rot = (_ea_08038F8C & 3u) * 8u; _v_08038F8C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08038F8C;
    g_cpu.R[15] = 0x08038F8Eu;
    runtime_tick(_cyc_08038F8C);
    }
L_08038F8E:
    /* 08038F8E  08038f8e T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08038F8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F8E = 1u;
    _cyc_08038F8E = 1u;
    uint32_t _base_08038F8E = g_cpu.R[1];
    uint32_t _off_08038F8E;
    _off_08038F8E = 0x00000000u;
    uint32_t _ea_08038F8E = _base_08038F8E + _off_08038F8E;
    uint32_t _post_08038F8E = _base_08038F8E + _off_08038F8E;
    _cyc_08038F8E += runtime_mem_cycles(_ea_08038F8E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038F8Eu, _ea_08038F8E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038F8E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038F90u;
    runtime_tick(_cyc_08038F8E);
    }
L_08038F90:
    /* 08038F90  08038f90 T b 0x08038fa6 */
    {
    g_cpu.R[15] = 0x08038F90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F90 = 1u;
    _cyc_08038F90 = 3u;
    g_cpu.R[15] = 0x08038FA6u;
    runtime_tick(_cyc_08038F90);
    gf_race_08038fa6();
    return;
    g_cpu.R[15] = 0x08038F92u;
    runtime_tick(_cyc_08038F90);
    }
    /* fall-through to 0x08038F92 */
    g_cpu.R[15] = 0x08038F92u;
    runtime_dispatch(0x08038F92u);
    return;
}

/* 0x08044C8E  mode=thumb  end=0x08044C92  branches=47 */
void gf_race_08044c8e(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08044C90u: goto L_08044C90;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08044C8Eu);
    /* 08044C8E  08044c8e T bl.hi 0x08037c92 */
    {
    g_cpu.R[15] = 0x08044C8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044C8E = 1u;
    _cyc_08044C8E = 1u;
    g_cpu.R[14] = 0x08037C92u;
    g_cpu.R[15] = 0x08044C90u;
    runtime_tick(_cyc_08044C8E);
    }
L_08044C90:
    /* 08044C90  08044c90 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08044C90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044C90 = 1u;
    _cyc_08044C90 = 3u;
    uint32_t _blt_08044C90 = (g_cpu.R[14] + 0x000005CEu) & ~1u;
    g_cpu.R[14] = 0x08044C93u;
    g_cpu.R[15] = _blt_08044C90;
    runtime_call_push_return(0x08044C92u);
    runtime_tick(_cyc_08044C90);
    _cyc_08044C90 = 0u;
    runtime_dispatch(_blt_08044C90);
    if (g_cpu.R[15] != 0x08044C92u) { runtime_call_cancel_return(0x08044C92u); return; }
    g_cpu.R[15] = 0x08044C92u;
    runtime_tick(_cyc_08044C90);
    }
    /* fall-through to 0x08044C92 */
    g_cpu.R[15] = 0x08044C92u;
    runtime_dispatch(0x08044C92u);
    return;
}

/* 0x08032426  mode=thumb  end=0x08032472  branches=2 */
void gf_race_08032426(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08032428u: goto L_08032428;
        case 0x0803242Au: goto L_0803242A;
        case 0x0803242Cu: goto L_0803242C;
        case 0x0803242Eu: goto L_0803242E;
        case 0x08032430u: goto L_08032430;
        case 0x08032432u: goto L_08032432;
        case 0x08032434u: goto L_08032434;
        case 0x08032436u: goto L_08032436;
        case 0x08032438u: goto L_08032438;
        case 0x0803243Au: goto L_0803243A;
        case 0x0803243Cu: goto L_0803243C;
        case 0x0803243Eu: goto L_0803243E;
        case 0x08032440u: goto L_08032440;
        case 0x08032442u: goto L_08032442;
        case 0x08032444u: goto L_08032444;
        case 0x08032446u: goto L_08032446;
        case 0x08032448u: goto L_08032448;
        case 0x0803244Au: goto L_0803244A;
        case 0x0803244Cu: goto L_0803244C;
        case 0x0803244Eu: goto L_0803244E;
        case 0x08032450u: goto L_08032450;
        case 0x08032452u: goto L_08032452;
        case 0x08032454u: goto L_08032454;
        case 0x08032456u: goto L_08032456;
        case 0x08032458u: goto L_08032458;
        case 0x0803245Au: goto L_0803245A;
        case 0x0803245Cu: goto L_0803245C;
        case 0x0803245Eu: goto L_0803245E;
        case 0x08032460u: goto L_08032460;
        case 0x08032462u: goto L_08032462;
        case 0x08032464u: goto L_08032464;
        case 0x08032466u: goto L_08032466;
        case 0x08032468u: goto L_08032468;
        case 0x0803246Au: goto L_0803246A;
        case 0x0803246Cu: goto L_0803246C;
        case 0x0803246Eu: goto L_0803246E;
        case 0x08032470u: goto L_08032470;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08032426u);
    /* 08032426  08032426 T ldr r2,[r15,#0x50] */
    {
    g_cpu.R[15] = 0x08032426u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032426 = 1u;
    _cyc_08032426 = 2u;
    uint32_t _base_08032426 = 0x0803242Au & ~3u;
    uint32_t _off_08032426;
    _off_08032426 = 0x00000050u;
    uint32_t _ea_08032426 = _base_08032426 + _off_08032426;
    uint32_t _post_08032426 = _base_08032426 + _off_08032426;
    _cyc_08032426 += runtime_mem_cycles(_ea_08032426, 4u, 0u);
    uint32_t _v_08032426;
    { uint32_t _w = bus_read_u32(_ea_08032426 & ~3u); uint32_t _rot = (_ea_08032426 & 3u) * 8u; _v_08032426 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08032426;
    g_cpu.R[15] = 0x08032428u;
    runtime_tick(_cyc_08032426);
    }
L_08032428:
    /* 08032428  08032428 T ldrh r1,[r2] */
    {
    g_cpu.R[15] = 0x08032428u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032428 = 1u;
    _cyc_08032428 = 2u;
    uint32_t _base_08032428 = g_cpu.R[2];
    uint32_t _off_08032428;
    _off_08032428 = 0x00000000u;
    uint32_t _ea_08032428 = _base_08032428 + _off_08032428;
    uint32_t _post_08032428 = _base_08032428 + _off_08032428;
    _cyc_08032428 += runtime_mem_cycles(_ea_08032428, 2u, 0u);
    uint32_t _v_08032428;
    { uint32_t _h = bus_read_u16(_ea_08032428 & ~1u); if (_ea_08032428 & 1u) _v_08032428 = ((_h >> 8) | (_h << 24)); else _v_08032428 = _h; }
    g_cpu.R[1] = _v_08032428;
    g_cpu.R[15] = 0x0803242Au;
    runtime_tick(_cyc_08032428);
    }
L_0803242A:
    /* 0803242A  0803242a T movs r0,#0xff */
    {
    g_cpu.R[15] = 0x0803242Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803242A = 1u;
    _cyc_0803242A = 1u;
    uint32_t _r_0803242A;
    _r_0803242A = 0x000000FFu;
    arm_set_nzc_logic(_r_0803242A, cpsr_c());
    g_cpu.R[0] = _r_0803242A;
    g_cpu.R[15] = 0x0803242Cu;
    runtime_tick(_cyc_0803242A);
    }
L_0803242C:
    /* 0803242C  0803242c T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x0803242Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803242C = 1u;
    _cyc_0803242C = 1u;
    uint32_t _rm_0803242C = g_cpu.R[1];
    uint32_t _op2_0803242C;
    uint32_t _co_0803242C;
    _op2_0803242C = _rm_0803242C;
    _co_0803242C = cpsr_c();
    uint32_t _rn_0803242C = g_cpu.R[0];
    uint32_t _r_0803242C;
    _r_0803242C = _rn_0803242C & _op2_0803242C;
    arm_set_nzc_logic(_r_0803242C, _co_0803242C);
    g_cpu.R[0] = _r_0803242C;
    g_cpu.R[15] = 0x0803242Eu;
    runtime_tick(_cyc_0803242C);
    }
L_0803242E:
    /* 0803242E  0803242e T movs r3,#0x80 */
    {
    g_cpu.R[15] = 0x0803242Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803242E = 1u;
    _cyc_0803242E = 1u;
    uint32_t _r_0803242E;
    _r_0803242E = 0x00000080u;
    arm_set_nzc_logic(_r_0803242E, cpsr_c());
    g_cpu.R[3] = _r_0803242E;
    g_cpu.R[15] = 0x08032430u;
    runtime_tick(_cyc_0803242E);
    }
L_08032430:
    /* 08032430  08032430 T movs r3,r3,lsl #6 */
    {
    g_cpu.R[15] = 0x08032430u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032430 = 1u;
    _cyc_08032430 = 1u;
    uint32_t _rm_08032430 = g_cpu.R[3];
    uint32_t _op2_08032430;
    uint32_t _co_08032430;
    _op2_08032430 = _rm_08032430 << 6;
    _co_08032430 = (_rm_08032430 >> 26) & 1u;
    uint32_t _r_08032430;
    _r_08032430 = _op2_08032430;
    arm_set_nzc_logic(_r_08032430, _co_08032430);
    g_cpu.R[3] = _r_08032430;
    g_cpu.R[15] = 0x08032432u;
    runtime_tick(_cyc_08032430);
    }
L_08032432:
    /* 08032432  08032432 T adds r1,r3,#0x0 */
    {
    g_cpu.R[15] = 0x08032432u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032432 = 1u;
    _cyc_08032432 = 1u;
    uint32_t _rn_08032432 = g_cpu.R[3];
    uint32_t _r_08032432;
    _r_08032432 = _rn_08032432 + 0x00000000u;
    arm_set_nzcv_add(_rn_08032432, 0x00000000u, _r_08032432);
    g_cpu.R[1] = _r_08032432;
    g_cpu.R[15] = 0x08032434u;
    runtime_tick(_cyc_08032432);
    }
L_08032434:
    /* 08032434  08032434 T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08032434u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032434 = 1u;
    _cyc_08032434 = 1u;
    uint32_t _rm_08032434 = g_cpu.R[1];
    uint32_t _op2_08032434;
    uint32_t _co_08032434;
    _op2_08032434 = _rm_08032434;
    _co_08032434 = cpsr_c();
    uint32_t _rn_08032434 = g_cpu.R[0];
    uint32_t _r_08032434;
    _r_08032434 = _rn_08032434 | _op2_08032434;
    arm_set_nzc_logic(_r_08032434, _co_08032434);
    g_cpu.R[0] = _r_08032434;
    g_cpu.R[15] = 0x08032436u;
    runtime_tick(_cyc_08032434);
    }
L_08032436:
    /* 08032436  08032436 T strh r0,[r2] */
    {
    g_cpu.R[15] = 0x08032436u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032436 = 1u;
    _cyc_08032436 = 1u;
    uint32_t _base_08032436 = g_cpu.R[2];
    uint32_t _off_08032436;
    _off_08032436 = 0x00000000u;
    uint32_t _ea_08032436 = _base_08032436 + _off_08032436;
    uint32_t _post_08032436 = _base_08032436 + _off_08032436;
    _cyc_08032436 += runtime_mem_cycles(_ea_08032436, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08032436u, _ea_08032436 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08032436 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08032438u;
    runtime_tick(_cyc_08032436);
    }
L_08032438:
    /* 08032438  08032438 T ldr r1,[r15,#0x40] */
    {
    g_cpu.R[15] = 0x08032438u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032438 = 1u;
    _cyc_08032438 = 2u;
    uint32_t _base_08032438 = 0x0803243Cu & ~3u;
    uint32_t _off_08032438;
    _off_08032438 = 0x00000040u;
    uint32_t _ea_08032438 = _base_08032438 + _off_08032438;
    uint32_t _post_08032438 = _base_08032438 + _off_08032438;
    _cyc_08032438 += runtime_mem_cycles(_ea_08032438, 4u, 0u);
    uint32_t _v_08032438;
    { uint32_t _w = bus_read_u32(_ea_08032438 & ~3u); uint32_t _rot = (_ea_08032438 & 3u) * 8u; _v_08032438 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08032438;
    g_cpu.R[15] = 0x0803243Au;
    runtime_tick(_cyc_08032438);
    }
L_0803243A:
    /* 0803243A  0803243a T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x0803243Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803243A = 1u;
    _cyc_0803243A = 1u;
    uint32_t _r_0803243A;
    _r_0803243A = 0x00000000u;
    arm_set_nzc_logic(_r_0803243A, cpsr_c());
    g_cpu.R[0] = _r_0803243A;
    g_cpu.R[15] = 0x0803243Cu;
    runtime_tick(_cyc_0803243A);
    }
L_0803243C:
    /* 0803243C  0803243c T strh r0,[r1] */
    {
    g_cpu.R[15] = 0x0803243Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803243C = 1u;
    _cyc_0803243C = 1u;
    uint32_t _base_0803243C = g_cpu.R[1];
    uint32_t _off_0803243C;
    _off_0803243C = 0x00000000u;
    uint32_t _ea_0803243C = _base_0803243C + _off_0803243C;
    uint32_t _post_0803243C = _base_0803243C + _off_0803243C;
    _cyc_0803243C += runtime_mem_cycles(_ea_0803243C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0803243Cu, _ea_0803243C & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0803243C & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0803243Eu;
    runtime_tick(_cyc_0803243C);
    }
L_0803243E:
    /* 0803243E  0803243e T subs r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x0803243Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803243E = 1u;
    _cyc_0803243E = 1u;
    uint32_t _rn_0803243E = g_cpu.R[2];
    uint32_t _r_0803243E;
    _r_0803243E = _rn_0803243E - 0x00000004u;
    arm_set_nzcv_sub(_rn_0803243E, 0x00000004u, _r_0803243E);
    g_cpu.R[2] = _r_0803243E;
    g_cpu.R[15] = 0x08032440u;
    runtime_tick(_cyc_0803243E);
    }
L_08032440:
    /* 08032440  08032440 T ldrh r1,[r2] */
    {
    g_cpu.R[15] = 0x08032440u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032440 = 1u;
    _cyc_08032440 = 2u;
    uint32_t _base_08032440 = g_cpu.R[2];
    uint32_t _off_08032440;
    _off_08032440 = 0x00000000u;
    uint32_t _ea_08032440 = _base_08032440 + _off_08032440;
    uint32_t _post_08032440 = _base_08032440 + _off_08032440;
    _cyc_08032440 += runtime_mem_cycles(_ea_08032440, 2u, 0u);
    uint32_t _v_08032440;
    { uint32_t _h = bus_read_u16(_ea_08032440 & ~1u); if (_ea_08032440 & 1u) _v_08032440 = ((_h >> 8) | (_h << 24)); else _v_08032440 = _h; }
    g_cpu.R[1] = _v_08032440;
    g_cpu.R[15] = 0x08032442u;
    runtime_tick(_cyc_08032440);
    }
L_08032442:
    /* 08032442  08032442 T ldr r4,[r15,#0x3c] */
    {
    g_cpu.R[15] = 0x08032442u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032442 = 1u;
    _cyc_08032442 = 2u;
    uint32_t _base_08032442 = 0x08032446u & ~3u;
    uint32_t _off_08032442;
    _off_08032442 = 0x0000003Cu;
    uint32_t _ea_08032442 = _base_08032442 + _off_08032442;
    uint32_t _post_08032442 = _base_08032442 + _off_08032442;
    _cyc_08032442 += runtime_mem_cycles(_ea_08032442, 4u, 0u);
    uint32_t _v_08032442;
    { uint32_t _w = bus_read_u32(_ea_08032442 & ~3u); uint32_t _rot = (_ea_08032442 & 3u) * 8u; _v_08032442 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_08032442;
    g_cpu.R[15] = 0x08032444u;
    runtime_tick(_cyc_08032442);
    }
L_08032444:
    /* 08032444  08032444 T adds r0,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08032444u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032444 = 1u;
    _cyc_08032444 = 1u;
    uint32_t _rn_08032444 = g_cpu.R[4];
    uint32_t _r_08032444;
    _r_08032444 = _rn_08032444 + 0x00000000u;
    arm_set_nzcv_add(_rn_08032444, 0x00000000u, _r_08032444);
    g_cpu.R[0] = _r_08032444;
    g_cpu.R[15] = 0x08032446u;
    runtime_tick(_cyc_08032444);
    }
L_08032446:
    /* 08032446  08032446 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08032446u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032446 = 1u;
    _cyc_08032446 = 1u;
    uint32_t _rm_08032446 = g_cpu.R[1];
    uint32_t _op2_08032446;
    uint32_t _co_08032446;
    _op2_08032446 = _rm_08032446;
    _co_08032446 = cpsr_c();
    uint32_t _rn_08032446 = g_cpu.R[0];
    uint32_t _r_08032446;
    _r_08032446 = _rn_08032446 & _op2_08032446;
    arm_set_nzc_logic(_r_08032446, _co_08032446);
    g_cpu.R[0] = _r_08032446;
    g_cpu.R[15] = 0x08032448u;
    runtime_tick(_cyc_08032446);
    }
L_08032448:
    /* 08032448  08032448 T movs r6,#0xe1 */
    {
    g_cpu.R[15] = 0x08032448u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032448 = 1u;
    _cyc_08032448 = 1u;
    uint32_t _r_08032448;
    _r_08032448 = 0x000000E1u;
    arm_set_nzc_logic(_r_08032448, cpsr_c());
    g_cpu.R[6] = _r_08032448;
    g_cpu.R[15] = 0x0803244Au;
    runtime_tick(_cyc_08032448);
    }
L_0803244A:
    /* 0803244A  0803244a T movs r6,r6,lsl #5 */
    {
    g_cpu.R[15] = 0x0803244Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803244A = 1u;
    _cyc_0803244A = 1u;
    uint32_t _rm_0803244A = g_cpu.R[6];
    uint32_t _op2_0803244A;
    uint32_t _co_0803244A;
    _op2_0803244A = _rm_0803244A << 5;
    _co_0803244A = (_rm_0803244A >> 27) & 1u;
    uint32_t _r_0803244A;
    _r_0803244A = _op2_0803244A;
    arm_set_nzc_logic(_r_0803244A, _co_0803244A);
    g_cpu.R[6] = _r_0803244A;
    g_cpu.R[15] = 0x0803244Cu;
    runtime_tick(_cyc_0803244A);
    }
L_0803244C:
    /* 0803244C  0803244c T adds r1,r6,#0x0 */
    {
    g_cpu.R[15] = 0x0803244Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803244C = 1u;
    _cyc_0803244C = 1u;
    uint32_t _rn_0803244C = g_cpu.R[6];
    uint32_t _r_0803244C;
    _r_0803244C = _rn_0803244C + 0x00000000u;
    arm_set_nzcv_add(_rn_0803244C, 0x00000000u, _r_0803244C);
    g_cpu.R[1] = _r_0803244C;
    g_cpu.R[15] = 0x0803244Eu;
    runtime_tick(_cyc_0803244C);
    }
L_0803244E:
    /* 0803244E  0803244e T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x0803244Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803244E = 1u;
    _cyc_0803244E = 1u;
    uint32_t _rm_0803244E = g_cpu.R[1];
    uint32_t _op2_0803244E;
    uint32_t _co_0803244E;
    _op2_0803244E = _rm_0803244E;
    _co_0803244E = cpsr_c();
    uint32_t _rn_0803244E = g_cpu.R[0];
    uint32_t _r_0803244E;
    _r_0803244E = _rn_0803244E | _op2_0803244E;
    arm_set_nzc_logic(_r_0803244E, _co_0803244E);
    g_cpu.R[0] = _r_0803244E;
    g_cpu.R[15] = 0x08032450u;
    runtime_tick(_cyc_0803244E);
    }
L_08032450:
    /* 08032450  08032450 T strh r0,[r2] */
    {
    g_cpu.R[15] = 0x08032450u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032450 = 1u;
    _cyc_08032450 = 1u;
    uint32_t _base_08032450 = g_cpu.R[2];
    uint32_t _off_08032450;
    _off_08032450 = 0x00000000u;
    uint32_t _ea_08032450 = _base_08032450 + _off_08032450;
    uint32_t _post_08032450 = _base_08032450 + _off_08032450;
    _cyc_08032450 += runtime_mem_cycles(_ea_08032450, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08032450u, _ea_08032450 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08032450 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08032452u;
    runtime_tick(_cyc_08032450);
    }
L_08032452:
    /* 08032452  08032452 T ldr r1,[r15,#0x30] */
    {
    g_cpu.R[15] = 0x08032452u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032452 = 1u;
    _cyc_08032452 = 2u;
    uint32_t _base_08032452 = 0x08032456u & ~3u;
    uint32_t _off_08032452;
    _off_08032452 = 0x00000030u;
    uint32_t _ea_08032452 = _base_08032452 + _off_08032452;
    uint32_t _post_08032452 = _base_08032452 + _off_08032452;
    _cyc_08032452 += runtime_mem_cycles(_ea_08032452, 4u, 0u);
    uint32_t _v_08032452;
    { uint32_t _w = bus_read_u32(_ea_08032452 & ~3u); uint32_t _rot = (_ea_08032452 & 3u) * 8u; _v_08032452 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08032452;
    g_cpu.R[15] = 0x08032454u;
    runtime_tick(_cyc_08032452);
    }
L_08032454:
    /* 08032454  08032454 T ldr r2,[r15,#0x30] */
    {
    g_cpu.R[15] = 0x08032454u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032454 = 1u;
    _cyc_08032454 = 2u;
    uint32_t _base_08032454 = 0x08032458u & ~3u;
    uint32_t _off_08032454;
    _off_08032454 = 0x00000030u;
    uint32_t _ea_08032454 = _base_08032454 + _off_08032454;
    uint32_t _post_08032454 = _base_08032454 + _off_08032454;
    _cyc_08032454 += runtime_mem_cycles(_ea_08032454, 4u, 0u);
    uint32_t _v_08032454;
    { uint32_t _w = bus_read_u32(_ea_08032454 & ~3u); uint32_t _rot = (_ea_08032454 & 3u) * 8u; _v_08032454 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08032454;
    g_cpu.R[15] = 0x08032456u;
    runtime_tick(_cyc_08032454);
    }
L_08032456:
    /* 08032456  08032456 T adds r0,r1,r2 */
    {
    g_cpu.R[15] = 0x08032456u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032456 = 1u;
    _cyc_08032456 = 1u;
    uint32_t _rm_08032456 = g_cpu.R[2];
    uint32_t _op2_08032456;
    uint32_t _co_08032456;
    _op2_08032456 = _rm_08032456;
    _co_08032456 = cpsr_c();
    uint32_t _rn_08032456 = g_cpu.R[1];
    uint32_t _r_08032456;
    _r_08032456 = _rn_08032456 + _op2_08032456;
    arm_set_nzcv_add(_rn_08032456, _op2_08032456, _r_08032456);
    g_cpu.R[0] = _r_08032456;
    g_cpu.R[15] = 0x08032458u;
    runtime_tick(_cyc_08032456);
    }
L_08032458:
    /* 08032458  08032458 T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x08032458u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032458 = 1u;
    _cyc_08032458 = 2u;
    uint32_t _base_08032458 = g_cpu.R[0];
    uint32_t _off_08032458;
    _off_08032458 = 0x00000000u;
    uint32_t _ea_08032458 = _base_08032458 + _off_08032458;
    uint32_t _post_08032458 = _base_08032458 + _off_08032458;
    _cyc_08032458 += runtime_mem_cycles(_ea_08032458, 1u, 0u);
    uint32_t _v_08032458;
    _v_08032458 = bus_read_u8(_ea_08032458);
    g_cpu.R[0] = _v_08032458;
    g_cpu.R[15] = 0x0803245Au;
    runtime_tick(_cyc_08032458);
    }
L_0803245A:
    /* 0803245A  0803245a T movs r0,r0,lsl #25 */
    {
    g_cpu.R[15] = 0x0803245Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803245A = 1u;
    _cyc_0803245A = 1u;
    uint32_t _rm_0803245A = g_cpu.R[0];
    uint32_t _op2_0803245A;
    uint32_t _co_0803245A;
    _op2_0803245A = _rm_0803245A << 25;
    _co_0803245A = (_rm_0803245A >> 7) & 1u;
    uint32_t _r_0803245A;
    _r_0803245A = _op2_0803245A;
    arm_set_nzc_logic(_r_0803245A, _co_0803245A);
    g_cpu.R[0] = _r_0803245A;
    g_cpu.R[15] = 0x0803245Cu;
    runtime_tick(_cyc_0803245A);
    }
L_0803245C:
    /* 0803245C  0803245c T mov r8,r1 */
    {
    g_cpu.R[15] = 0x0803245Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803245C = 1u;
    _cyc_0803245C = 1u;
    uint32_t _rm_0803245C = g_cpu.R[1];
    uint32_t _op2_0803245C;
    uint32_t _co_0803245C;
    _op2_0803245C = _rm_0803245C;
    _co_0803245C = cpsr_c();
    uint32_t _r_0803245C;
    _r_0803245C = _op2_0803245C;
    g_cpu.R[8] = _r_0803245C;
    g_cpu.R[15] = 0x0803245Eu;
    runtime_tick(_cyc_0803245C);
    }
L_0803245E:
    /* 0803245E  0803245e T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x0803245Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803245E = 1u;
    _cyc_0803245E = 1u;
    uint32_t _rn_0803245E = g_cpu.R[0];
    uint32_t _r_0803245E;
    _r_0803245E = _rn_0803245E - 0x00000000u;
    arm_set_nzcv_sub(_rn_0803245E, 0x00000000u, _r_0803245E);
    g_cpu.R[15] = 0x08032460u;
    runtime_tick(_cyc_0803245E);
    }
L_08032460:
    /* 08032460  08032460 T bge 0x08032498 */
    {
    g_cpu.R[15] = 0x08032460u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032460 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08032460 = 3u;
        g_cpu.R[15] = 0x08032498u;
        runtime_tick(_cyc_08032460);
        gf_race_08032498();
        return;
    }
    g_cpu.R[15] = 0x08032462u;
    runtime_tick(_cyc_08032460);
    }
L_08032462:
    /* 08032462  08032462 T ldr r1,[r15,#0x28] */
    {
    g_cpu.R[15] = 0x08032462u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032462 = 1u;
    _cyc_08032462 = 2u;
    uint32_t _base_08032462 = 0x08032466u & ~3u;
    uint32_t _off_08032462;
    _off_08032462 = 0x00000028u;
    uint32_t _ea_08032462 = _base_08032462 + _off_08032462;
    uint32_t _post_08032462 = _base_08032462 + _off_08032462;
    _cyc_08032462 += runtime_mem_cycles(_ea_08032462, 4u, 0u);
    uint32_t _v_08032462;
    { uint32_t _w = bus_read_u32(_ea_08032462 & ~3u); uint32_t _rot = (_ea_08032462 & 3u) * 8u; _v_08032462 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08032462;
    g_cpu.R[15] = 0x08032464u;
    runtime_tick(_cyc_08032462);
    }
L_08032464:
    /* 08032464  08032464 T ldr r3,[r15,#0x28] */
    {
    g_cpu.R[15] = 0x08032464u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032464 = 1u;
    _cyc_08032464 = 2u;
    uint32_t _base_08032464 = 0x08032468u & ~3u;
    uint32_t _off_08032464;
    _off_08032464 = 0x00000028u;
    uint32_t _ea_08032464 = _base_08032464 + _off_08032464;
    uint32_t _post_08032464 = _base_08032464 + _off_08032464;
    _cyc_08032464 += runtime_mem_cycles(_ea_08032464, 4u, 0u);
    uint32_t _v_08032464;
    { uint32_t _w = bus_read_u32(_ea_08032464 & ~3u); uint32_t _rot = (_ea_08032464 & 3u) * 8u; _v_08032464 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08032464;
    g_cpu.R[15] = 0x08032466u;
    runtime_tick(_cyc_08032464);
    }
L_08032466:
    /* 08032466  08032466 T adds r0,r3,#0x0 */
    {
    g_cpu.R[15] = 0x08032466u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032466 = 1u;
    _cyc_08032466 = 1u;
    uint32_t _rn_08032466 = g_cpu.R[3];
    uint32_t _r_08032466;
    _r_08032466 = _rn_08032466 + 0x00000000u;
    arm_set_nzcv_add(_rn_08032466, 0x00000000u, _r_08032466);
    g_cpu.R[0] = _r_08032466;
    g_cpu.R[15] = 0x08032468u;
    runtime_tick(_cyc_08032466);
    }
L_08032468:
    /* 08032468  08032468 T strh r0,[r1] */
    {
    g_cpu.R[15] = 0x08032468u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032468 = 1u;
    _cyc_08032468 = 1u;
    uint32_t _base_08032468 = g_cpu.R[1];
    uint32_t _off_08032468;
    _off_08032468 = 0x00000000u;
    uint32_t _ea_08032468 = _base_08032468 + _off_08032468;
    uint32_t _post_08032468 = _base_08032468 + _off_08032468;
    _cyc_08032468 += runtime_mem_cycles(_ea_08032468, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08032468u, _ea_08032468 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08032468 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0803246Au;
    runtime_tick(_cyc_08032468);
    }
L_0803246A:
    /* 0803246A  0803246a T adds r1,r1,#0x2 */
    {
    g_cpu.R[15] = 0x0803246Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803246A = 1u;
    _cyc_0803246A = 1u;
    uint32_t _rn_0803246A = g_cpu.R[1];
    uint32_t _r_0803246A;
    _r_0803246A = _rn_0803246A + 0x00000002u;
    arm_set_nzcv_add(_rn_0803246A, 0x00000002u, _r_0803246A);
    g_cpu.R[1] = _r_0803246A;
    g_cpu.R[15] = 0x0803246Cu;
    runtime_tick(_cyc_0803246A);
    }
L_0803246C:
    /* 0803246C  0803246c T ldr r4,[r15,#0x24] */
    {
    g_cpu.R[15] = 0x0803246Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803246C = 1u;
    _cyc_0803246C = 2u;
    uint32_t _base_0803246C = 0x08032470u & ~3u;
    uint32_t _off_0803246C;
    _off_0803246C = 0x00000024u;
    uint32_t _ea_0803246C = _base_0803246C + _off_0803246C;
    uint32_t _post_0803246C = _base_0803246C + _off_0803246C;
    _cyc_0803246C += runtime_mem_cycles(_ea_0803246C, 4u, 0u);
    uint32_t _v_0803246C;
    { uint32_t _w = bus_read_u32(_ea_0803246C & ~3u); uint32_t _rot = (_ea_0803246C & 3u) * 8u; _v_0803246C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_0803246C;
    g_cpu.R[15] = 0x0803246Eu;
    runtime_tick(_cyc_0803246C);
    }
L_0803246E:
    /* 0803246E  0803246e T adds r0,r4,#0x0 */
    {
    g_cpu.R[15] = 0x0803246Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803246E = 1u;
    _cyc_0803246E = 1u;
    uint32_t _rn_0803246E = g_cpu.R[4];
    uint32_t _r_0803246E;
    _r_0803246E = _rn_0803246E + 0x00000000u;
    arm_set_nzcv_add(_rn_0803246E, 0x00000000u, _r_0803246E);
    g_cpu.R[0] = _r_0803246E;
    g_cpu.R[15] = 0x08032470u;
    runtime_tick(_cyc_0803246E);
    }
L_08032470:
    /* 08032470  08032470 T b 0x080324a6 */
    {
    g_cpu.R[15] = 0x08032470u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032470 = 1u;
    _cyc_08032470 = 3u;
    g_cpu.R[15] = 0x080324A6u;
    runtime_tick(_cyc_08032470);
    gf_tfunc_080324A6();
    return;
    g_cpu.R[15] = 0x08032472u;
    runtime_tick(_cyc_08032470);
    }
    /* fall-through to 0x08032472 */
    g_cpu.R[15] = 0x08032472u;
    runtime_dispatch(0x08032472u);
    return;
}

/* 0x08032554  mode=thumb  end=0x0803255A  branches=2 */
void gf_race_08032554(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08032556u: goto L_08032556;
        case 0x08032558u: goto L_08032558;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08032554u);
    /* 08032554  08032554 T cmps r5,#0x20 */
    {
    g_cpu.R[15] = 0x08032554u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032554 = 1u;
    _cyc_08032554 = 1u;
    uint32_t _rn_08032554 = g_cpu.R[5];
    uint32_t _r_08032554;
    _r_08032554 = _rn_08032554 - 0x00000020u;
    arm_set_nzcv_sub(_rn_08032554, 0x00000020u, _r_08032554);
    g_cpu.R[15] = 0x08032556u;
    runtime_tick(_cyc_08032554);
    }
L_08032556:
    /* 08032556  08032556 T beq 0x0803255a */
    {
    g_cpu.R[15] = 0x08032556u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032556 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08032556 = 3u;
        g_cpu.R[15] = 0x0803255Au;
        runtime_tick(_cyc_08032556);
        gf_race_0803255a();
        return;
    }
    g_cpu.R[15] = 0x08032558u;
    runtime_tick(_cyc_08032556);
    }
L_08032558:
    /* 08032558  08032558 T b 0x080326f4 */
    {
    g_cpu.R[15] = 0x08032558u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032558 = 1u;
    _cyc_08032558 = 3u;
    g_cpu.R[15] = 0x080326F4u;
    runtime_tick(_cyc_08032558);
    gf_tfunc_080326F4();
    return;
    g_cpu.R[15] = 0x0803255Au;
    runtime_tick(_cyc_08032558);
    }
    /* fall-through to 0x0803255A */
    g_cpu.R[15] = 0x0803255Au;
    runtime_dispatch(0x0803255Au);
    return;
}

/* 0x08032600  mode=thumb  end=0x08032612  branches=7 */
void gf_race_08032600(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08032602u: goto L_08032602;
        case 0x08032604u: goto L_08032604;
        case 0x08032606u: goto L_08032606;
        case 0x08032608u: goto L_08032608;
        case 0x0803260Au: goto L_0803260A;
        case 0x0803260Cu: goto L_0803260C;
        case 0x0803260Eu: goto L_0803260E;
        case 0x08032610u: goto L_08032610;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08032600u);
    /* 08032600  08032600 T movs r0,r2,lsl #24 */
    {
    g_cpu.R[15] = 0x08032600u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032600 = 1u;
    _cyc_08032600 = 1u;
    uint32_t _rm_08032600 = g_cpu.R[2];
    uint32_t _op2_08032600;
    uint32_t _co_08032600;
    _op2_08032600 = _rm_08032600 << 24;
    _co_08032600 = (_rm_08032600 >> 8) & 1u;
    uint32_t _r_08032600;
    _r_08032600 = _op2_08032600;
    arm_set_nzc_logic(_r_08032600, _co_08032600);
    g_cpu.R[0] = _r_08032600;
    g_cpu.R[15] = 0x08032602u;
    runtime_tick(_cyc_08032600);
    }
L_08032602:
    /* 08032602  08032602 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08032602u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032602 = 1u;
    _cyc_08032602 = 1u;
    uint32_t _rn_08032602 = g_cpu.R[0];
    uint32_t _r_08032602;
    _r_08032602 = _rn_08032602 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08032602, 0x00000000u, _r_08032602);
    g_cpu.R[15] = 0x08032604u;
    runtime_tick(_cyc_08032602);
    }
L_08032604:
    /* 08032604  08032604 T bge 0x08032680 */
    {
    g_cpu.R[15] = 0x08032604u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032604 = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_08032604 = 3u;
        g_cpu.R[15] = 0x08032680u;
        runtime_tick(_cyc_08032604);
        gf_tfunc_08032680();
        return;
    }
    g_cpu.R[15] = 0x08032606u;
    runtime_tick(_cyc_08032604);
    }
L_08032606:
    /* 08032606  08032606 T ldr r4,[r15,#0x64] */
    {
    g_cpu.R[15] = 0x08032606u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032606 = 1u;
    _cyc_08032606 = 2u;
    uint32_t _base_08032606 = 0x0803260Au & ~3u;
    uint32_t _off_08032606;
    _off_08032606 = 0x00000064u;
    uint32_t _ea_08032606 = _base_08032606 + _off_08032606;
    uint32_t _post_08032606 = _base_08032606 + _off_08032606;
    _cyc_08032606 += runtime_mem_cycles(_ea_08032606, 4u, 0u);
    uint32_t _v_08032606;
    { uint32_t _w = bus_read_u32(_ea_08032606 & ~3u); uint32_t _rot = (_ea_08032606 & 3u) * 8u; _v_08032606 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_08032606;
    g_cpu.R[15] = 0x08032608u;
    runtime_tick(_cyc_08032606);
    }
L_08032608:
    /* 08032608  08032608 T movs r0,#0x17 */
    {
    g_cpu.R[15] = 0x08032608u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032608 = 1u;
    _cyc_08032608 = 1u;
    uint32_t _r_08032608;
    _r_08032608 = 0x00000017u;
    arm_set_nzc_logic(_r_08032608, cpsr_c());
    g_cpu.R[0] = _r_08032608;
    g_cpu.R[15] = 0x0803260Au;
    runtime_tick(_cyc_08032608);
    }
L_0803260A:
    /* 0803260A  0803260a T ldrsb r0,[r4,+r0] */
    {
    g_cpu.R[15] = 0x0803260Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803260A = 1u;
    _cyc_0803260A = 2u;
    uint32_t _base_0803260A = g_cpu.R[4];
    uint32_t _off_0803260A;
    uint32_t _morm_0803260A = g_cpu.R[0];
    _off_0803260A = _morm_0803260A;
    uint32_t _ea_0803260A = _base_0803260A + _off_0803260A;
    uint32_t _post_0803260A = _base_0803260A + _off_0803260A;
    _cyc_0803260A += runtime_mem_cycles(_ea_0803260A, 1u, 0u);
    uint32_t _v_0803260A;
    _v_0803260A = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0803260A);
    g_cpu.R[0] = _v_0803260A;
    g_cpu.R[15] = 0x0803260Cu;
    runtime_tick(_cyc_0803260A);
    }
L_0803260C:
    /* 0803260C  0803260c T movs r1,#0x5 */
    {
    g_cpu.R[15] = 0x0803260Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803260C = 1u;
    _cyc_0803260C = 1u;
    uint32_t _r_0803260C;
    _r_0803260C = 0x00000005u;
    arm_set_nzc_logic(_r_0803260C, cpsr_c());
    g_cpu.R[1] = _r_0803260C;
    g_cpu.R[15] = 0x0803260Eu;
    runtime_tick(_cyc_0803260C);
    }
L_0803260E:
    /* 0803260E  0803260e T bl.hi 0x0805a612 */
    {
    g_cpu.R[15] = 0x0803260Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803260E = 1u;
    _cyc_0803260E = 1u;
    g_cpu.R[14] = 0x0805A612u;
    g_cpu.R[15] = 0x08032610u;
    runtime_tick(_cyc_0803260E);
    }
L_08032610:
    /* 08032610  08032610 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08032610u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08032610 = 1u;
    _cyc_08032610 = 3u;
    uint32_t _blt_08032610 = (g_cpu.R[14] + 0x000003BEu) & ~1u;
    g_cpu.R[14] = 0x08032613u;
    g_cpu.R[15] = _blt_08032610;
    runtime_call_push_return(0x08032612u);
    runtime_tick(_cyc_08032610);
    _cyc_08032610 = 0u;
    runtime_dispatch(_blt_08032610);
    if (g_cpu.R[15] != 0x08032612u) { runtime_call_cancel_return(0x08032612u); return; }
    g_cpu.R[15] = 0x08032612u;
    runtime_tick(_cyc_08032610);
    }
    /* fall-through to 0x08032612 */
    g_cpu.R[15] = 0x08032612u;
    runtime_dispatch(0x08032612u);
    return;
}

/* 0x0803746C  mode=thumb  end=0x08037470  branches=0  indirect */
void gf_race_0803746c(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0803746Eu: goto L_0803746E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0803746Cu);
    /* 0803746C  0803746c T add r2,r15,#0x0 */
    {
    g_cpu.R[15] = 0x0803746Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803746C = 1u;
    _cyc_0803746C = 1u;
    uint32_t _rn_0803746C = 0x08037470u & ~3u;
    uint32_t _r_0803746C;
    _r_0803746C = _rn_0803746C + 0x00000000u;
    g_cpu.R[2] = _r_0803746C;
    g_cpu.R[15] = 0x0803746Eu;
    runtime_tick(_cyc_0803746C);
    }
L_0803746E:
    /* 0803746E  0803746e T bx r2 */
    {
    g_cpu.R[15] = 0x0803746Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803746E = 1u;
    _cyc_0803746E = 3u;
    uint32_t _bxt_0803746E = g_cpu.R[2];
    g_cpu.R[15] = _bxt_0803746E & ~1u;
    if (_bxt_0803746E & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_0803746E);
    runtime_dispatch_with_exchange(_bxt_0803746E);
    return;
    g_cpu.R[15] = 0x08037470u;
    runtime_tick(_cyc_0803746E);
    }
    /* fall-through to 0x08037470 */
    g_cpu.R[15] = 0x08037470u;
    runtime_dispatch(0x08037470u);
    return;
}

/* 0x08037BE6  mode=thumb  end=0x08037C02  branches=3 */
void gf_race_08037be6(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037BE8u: goto L_08037BE8;
        case 0x08037BEAu: goto L_08037BEA;
        case 0x08037BECu: goto L_08037BEC;
        case 0x08037BEEu: goto L_08037BEE;
        case 0x08037BF0u: goto L_08037BF0;
        case 0x08037BF2u: goto L_08037BF2;
        case 0x08037BF4u: goto L_08037BF4;
        case 0x08037BF6u: goto L_08037BF6;
        case 0x08037BF8u: goto L_08037BF8;
        case 0x08037BFAu: goto L_08037BFA;
        case 0x08037BFCu: goto L_08037BFC;
        case 0x08037BFEu: goto L_08037BFE;
        case 0x08037C00u: goto L_08037C00;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037BE6u);
    /* 08037BE6  08037be6 T ldrb r0,[r5,#0x17] */
    {
    g_cpu.R[15] = 0x08037BE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BE6 = 1u;
    _cyc_08037BE6 = 2u;
    uint32_t _base_08037BE6 = g_cpu.R[5];
    uint32_t _off_08037BE6;
    _off_08037BE6 = 0x00000017u;
    uint32_t _ea_08037BE6 = _base_08037BE6 + _off_08037BE6;
    uint32_t _post_08037BE6 = _base_08037BE6 + _off_08037BE6;
    _cyc_08037BE6 += runtime_mem_cycles(_ea_08037BE6, 1u, 0u);
    uint32_t _v_08037BE6;
    _v_08037BE6 = bus_read_u8(_ea_08037BE6);
    g_cpu.R[0] = _v_08037BE6;
    g_cpu.R[15] = 0x08037BE8u;
    runtime_tick(_cyc_08037BE6);
    }
L_08037BE8:
    /* 08037BE8  08037be8 T muls r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08037BE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BE8 = 1u;
    _cyc_08037BE8 = 1u;
    _cyc_08037BE8 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_08037BE8 = g_cpu.R[0] * g_cpu.R[2];
    g_cpu.R[0] = _r_08037BE8;
    arm_set_nz(_r_08037BE8);
    g_cpu.R[15] = 0x08037BEAu;
    runtime_tick(_cyc_08037BE8);
    }
L_08037BEA:
    /* 08037BEA  08037bea T movs r2,r0,asr #6 */
    {
    g_cpu.R[15] = 0x08037BEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BEA = 1u;
    _cyc_08037BEA = 1u;
    uint32_t _rm_08037BEA = g_cpu.R[0];
    uint32_t _op2_08037BEA;
    uint32_t _co_08037BEA;
    _op2_08037BEA = (uint32_t)((int32_t)_rm_08037BEA >> 6);
    _co_08037BEA = (_rm_08037BEA >> 5) & 1u;
    uint32_t _r_08037BEA;
    _r_08037BEA = _op2_08037BEA;
    arm_set_nzc_logic(_r_08037BEA, _co_08037BEA);
    g_cpu.R[2] = _r_08037BEA;
    g_cpu.R[15] = 0x08037BECu;
    runtime_tick(_cyc_08037BEA);
    }
L_08037BEC:
    /* 08037BEC  08037bec T ldrb r0,[r5,#0x16] */
    {
    g_cpu.R[15] = 0x08037BECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BEC = 1u;
    _cyc_08037BEC = 2u;
    uint32_t _base_08037BEC = g_cpu.R[5];
    uint32_t _off_08037BEC;
    _off_08037BEC = 0x00000016u;
    uint32_t _ea_08037BEC = _base_08037BEC + _off_08037BEC;
    uint32_t _post_08037BEC = _base_08037BEC + _off_08037BEC;
    _cyc_08037BEC += runtime_mem_cycles(_ea_08037BEC, 1u, 0u);
    uint32_t _v_08037BEC;
    _v_08037BEC = bus_read_u8(_ea_08037BEC);
    g_cpu.R[0] = _v_08037BEC;
    g_cpu.R[15] = 0x08037BEEu;
    runtime_tick(_cyc_08037BEC);
    }
L_08037BEE:
    /* 08037BEE  08037bee T eors r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08037BEEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BEE = 1u;
    _cyc_08037BEE = 1u;
    uint32_t _rm_08037BEE = g_cpu.R[2];
    uint32_t _op2_08037BEE;
    uint32_t _co_08037BEE;
    _op2_08037BEE = _rm_08037BEE;
    _co_08037BEE = cpsr_c();
    uint32_t _rn_08037BEE = g_cpu.R[0];
    uint32_t _r_08037BEE;
    _r_08037BEE = _rn_08037BEE ^ _op2_08037BEE;
    arm_set_nzc_logic(_r_08037BEE, _co_08037BEE);
    g_cpu.R[0] = _r_08037BEE;
    g_cpu.R[15] = 0x08037BF0u;
    runtime_tick(_cyc_08037BEE);
    }
L_08037BF0:
    /* 08037BF0  08037bf0 T movs r0,r0,lsl #24 */
    {
    g_cpu.R[15] = 0x08037BF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BF0 = 1u;
    _cyc_08037BF0 = 1u;
    uint32_t _rm_08037BF0 = g_cpu.R[0];
    uint32_t _op2_08037BF0;
    uint32_t _co_08037BF0;
    _op2_08037BF0 = _rm_08037BF0 << 24;
    _co_08037BF0 = (_rm_08037BF0 >> 8) & 1u;
    uint32_t _r_08037BF0;
    _r_08037BF0 = _op2_08037BF0;
    arm_set_nzc_logic(_r_08037BF0, _co_08037BF0);
    g_cpu.R[0] = _r_08037BF0;
    g_cpu.R[15] = 0x08037BF2u;
    runtime_tick(_cyc_08037BF0);
    }
L_08037BF2:
    /* 08037BF2  08037bf2 T beq 0x08037c08 */
    {
    g_cpu.R[15] = 0x08037BF2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BF2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08037BF2 = 3u;
        g_cpu.R[15] = 0x08037C08u;
        runtime_tick(_cyc_08037BF2);
        gf_tfunc_08037C08();
        return;
    }
    g_cpu.R[15] = 0x08037BF4u;
    runtime_tick(_cyc_08037BF2);
    }
L_08037BF4:
    /* 08037BF4  08037bf4 T strb r2,[r5,#0x16] */
    {
    g_cpu.R[15] = 0x08037BF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BF4 = 1u;
    _cyc_08037BF4 = 1u;
    uint32_t _base_08037BF4 = g_cpu.R[5];
    uint32_t _off_08037BF4;
    _off_08037BF4 = 0x00000016u;
    uint32_t _ea_08037BF4 = _base_08037BF4 + _off_08037BF4;
    uint32_t _post_08037BF4 = _base_08037BF4 + _off_08037BF4;
    _cyc_08037BF4 += runtime_mem_cycles(_ea_08037BF4, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08037BF4u, _ea_08037BF4, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_08037BF4, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x08037BF6u;
    runtime_tick(_cyc_08037BF4);
    }
L_08037BF6:
    /* 08037BF6  08037bf6 T ldrb r0,[r5] */
    {
    g_cpu.R[15] = 0x08037BF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BF6 = 1u;
    _cyc_08037BF6 = 2u;
    uint32_t _base_08037BF6 = g_cpu.R[5];
    uint32_t _off_08037BF6;
    _off_08037BF6 = 0x00000000u;
    uint32_t _ea_08037BF6 = _base_08037BF6 + _off_08037BF6;
    uint32_t _post_08037BF6 = _base_08037BF6 + _off_08037BF6;
    _cyc_08037BF6 += runtime_mem_cycles(_ea_08037BF6, 1u, 0u);
    uint32_t _v_08037BF6;
    _v_08037BF6 = bus_read_u8(_ea_08037BF6);
    g_cpu.R[0] = _v_08037BF6;
    g_cpu.R[15] = 0x08037BF8u;
    runtime_tick(_cyc_08037BF6);
    }
L_08037BF8:
    /* 08037BF8  08037bf8 T ldrb r1,[r5,#0x18] */
    {
    g_cpu.R[15] = 0x08037BF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BF8 = 1u;
    _cyc_08037BF8 = 2u;
    uint32_t _base_08037BF8 = g_cpu.R[5];
    uint32_t _off_08037BF8;
    _off_08037BF8 = 0x00000018u;
    uint32_t _ea_08037BF8 = _base_08037BF8 + _off_08037BF8;
    uint32_t _post_08037BF8 = _base_08037BF8 + _off_08037BF8;
    _cyc_08037BF8 += runtime_mem_cycles(_ea_08037BF8, 1u, 0u);
    uint32_t _v_08037BF8;
    _v_08037BF8 = bus_read_u8(_ea_08037BF8);
    g_cpu.R[1] = _v_08037BF8;
    g_cpu.R[15] = 0x08037BFAu;
    runtime_tick(_cyc_08037BF8);
    }
L_08037BFA:
    /* 08037BFA  08037bfa T cmps r1,#0x0 */
    {
    g_cpu.R[15] = 0x08037BFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BFA = 1u;
    _cyc_08037BFA = 1u;
    uint32_t _rn_08037BFA = g_cpu.R[1];
    uint32_t _r_08037BFA;
    _r_08037BFA = _rn_08037BFA - 0x00000000u;
    arm_set_nzcv_sub(_rn_08037BFA, 0x00000000u, _r_08037BFA);
    g_cpu.R[15] = 0x08037BFCu;
    runtime_tick(_cyc_08037BFA);
    }
L_08037BFC:
    /* 08037BFC  08037bfc T bne 0x08037c02 */
    {
    g_cpu.R[15] = 0x08037BFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BFC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08037BFC = 3u;
        g_cpu.R[15] = 0x08037C02u;
        runtime_tick(_cyc_08037BFC);
        gf_tfunc_08037C02();
        return;
    }
    g_cpu.R[15] = 0x08037BFEu;
    runtime_tick(_cyc_08037BFC);
    }
L_08037BFE:
    /* 08037BFE  08037bfe T movs r1,#0xc */
    {
    g_cpu.R[15] = 0x08037BFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037BFE = 1u;
    _cyc_08037BFE = 1u;
    uint32_t _r_08037BFE;
    _r_08037BFE = 0x0000000Cu;
    arm_set_nzc_logic(_r_08037BFE, cpsr_c());
    g_cpu.R[1] = _r_08037BFE;
    g_cpu.R[15] = 0x08037C00u;
    runtime_tick(_cyc_08037BFE);
    }
L_08037C00:
    /* 08037C00  08037c00 T b 0x08037c04 */
    {
    g_cpu.R[15] = 0x08037C00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037C00 = 1u;
    _cyc_08037C00 = 3u;
    g_cpu.R[15] = 0x08037C04u;
    runtime_tick(_cyc_08037C00);
    gf_race_08037c04();
    return;
    g_cpu.R[15] = 0x08037C02u;
    runtime_tick(_cyc_08037C00);
    }
    /* fall-through to 0x08037C02 */
    g_cpu.R[15] = 0x08037C02u;
    runtime_dispatch(0x08037C02u);
    return;
}

/* 0x08037F14  mode=thumb  end=0x08037F2E  branches=6 */
void gf_race_08037f14(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08037F16u: goto L_08037F16;
        case 0x08037F18u: goto L_08037F18;
        case 0x08037F1Au: goto L_08037F1A;
        case 0x08037F1Cu: goto L_08037F1C;
        case 0x08037F1Eu: goto L_08037F1E;
        case 0x08037F20u: goto L_08037F20;
        case 0x08037F22u: goto L_08037F22;
        case 0x08037F24u: goto L_08037F24;
        case 0x08037F26u: goto L_08037F26;
        case 0x08037F28u: goto L_08037F28;
        case 0x08037F2Au: goto L_08037F2A;
        case 0x08037F2Cu: goto L_08037F2C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08037F14u);
    /* 08037F14  08037f14 T ldr r6,[r13,#0xc] */
    {
    g_cpu.R[15] = 0x08037F14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F14 = 1u;
    _cyc_08037F14 = 2u;
    uint32_t _base_08037F14 = g_cpu.R[13];
    uint32_t _off_08037F14;
    _off_08037F14 = 0x0000000Cu;
    uint32_t _ea_08037F14 = _base_08037F14 + _off_08037F14;
    uint32_t _post_08037F14 = _base_08037F14 + _off_08037F14;
    _cyc_08037F14 += runtime_mem_cycles(_ea_08037F14, 4u, 0u);
    uint32_t _v_08037F14;
    { uint32_t _w = bus_read_u32(_ea_08037F14 & ~3u); uint32_t _rot = (_ea_08037F14 & 3u) * 8u; _v_08037F14 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_08037F14;
    g_cpu.R[15] = 0x08037F16u;
    runtime_tick(_cyc_08037F14);
    }
L_08037F16:
    /* 08037F16  08037f16 T cmps r6,#0x0 */
    {
    g_cpu.R[15] = 0x08037F16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F16 = 1u;
    _cyc_08037F16 = 1u;
    uint32_t _rn_08037F16 = g_cpu.R[6];
    uint32_t _r_08037F16;
    _r_08037F16 = _rn_08037F16 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08037F16, 0x00000000u, _r_08037F16);
    g_cpu.R[15] = 0x08037F18u;
    runtime_tick(_cyc_08037F16);
    }
L_08037F18:
    /* 08037F18  08037f18 T beq 0x08037f42 */
    {
    g_cpu.R[15] = 0x08037F18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F18 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08037F18 = 3u;
        g_cpu.R[15] = 0x08037F42u;
        runtime_tick(_cyc_08037F18);
        gf_race_08037f42();
        return;
    }
    g_cpu.R[15] = 0x08037F1Au;
    runtime_tick(_cyc_08037F18);
    }
L_08037F1A:
    /* 08037F1A  08037f1a T mov r6,r9 */
    {
    g_cpu.R[15] = 0x08037F1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F1A = 1u;
    _cyc_08037F1A = 1u;
    uint32_t _rm_08037F1A = g_cpu.R[9];
    uint32_t _op2_08037F1A;
    uint32_t _co_08037F1A;
    _op2_08037F1A = _rm_08037F1A;
    _co_08037F1A = cpsr_c();
    uint32_t _r_08037F1A;
    _r_08037F1A = _op2_08037F1A;
    g_cpu.R[6] = _r_08037F1A;
    g_cpu.R[15] = 0x08037F1Cu;
    runtime_tick(_cyc_08037F1A);
    }
L_08037F1C:
    /* 08037F1C  08037f1c T ldrb r0,[r6,#0x2] */
    {
    g_cpu.R[15] = 0x08037F1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F1C = 1u;
    _cyc_08037F1C = 2u;
    uint32_t _base_08037F1C = g_cpu.R[6];
    uint32_t _off_08037F1C;
    _off_08037F1C = 0x00000002u;
    uint32_t _ea_08037F1C = _base_08037F1C + _off_08037F1C;
    uint32_t _post_08037F1C = _base_08037F1C + _off_08037F1C;
    _cyc_08037F1C += runtime_mem_cycles(_ea_08037F1C, 1u, 0u);
    uint32_t _v_08037F1C;
    _v_08037F1C = bus_read_u8(_ea_08037F1C);
    g_cpu.R[0] = _v_08037F1C;
    g_cpu.R[15] = 0x08037F1Eu;
    runtime_tick(_cyc_08037F1C);
    }
L_08037F1E:
    /* 08037F1E  08037f1e T strb r0,[r4,#0x1e] */
    {
    g_cpu.R[15] = 0x08037F1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F1E = 1u;
    _cyc_08037F1E = 1u;
    uint32_t _base_08037F1E = g_cpu.R[4];
    uint32_t _off_08037F1E;
    _off_08037F1E = 0x0000001Eu;
    uint32_t _ea_08037F1E = _base_08037F1E + _off_08037F1E;
    uint32_t _post_08037F1E = _base_08037F1E + _off_08037F1E;
    _cyc_08037F1E += runtime_mem_cycles(_ea_08037F1E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08037F1Eu, _ea_08037F1E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08037F1E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08037F20u;
    runtime_tick(_cyc_08037F1E);
    }
L_08037F20:
    /* 08037F20  08037f20 T ldrb r1,[r6,#0x3] */
    {
    g_cpu.R[15] = 0x08037F20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F20 = 1u;
    _cyc_08037F20 = 2u;
    uint32_t _base_08037F20 = g_cpu.R[6];
    uint32_t _off_08037F20;
    _off_08037F20 = 0x00000003u;
    uint32_t _ea_08037F20 = _base_08037F20 + _off_08037F20;
    uint32_t _post_08037F20 = _base_08037F20 + _off_08037F20;
    _cyc_08037F20 += runtime_mem_cycles(_ea_08037F20, 1u, 0u);
    uint32_t _v_08037F20;
    _v_08037F20 = bus_read_u8(_ea_08037F20);
    g_cpu.R[1] = _v_08037F20;
    g_cpu.R[15] = 0x08037F22u;
    runtime_tick(_cyc_08037F20);
    }
L_08037F22:
    /* 08037F22  08037f22 T movs r0,#0x80 */
    {
    g_cpu.R[15] = 0x08037F22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F22 = 1u;
    _cyc_08037F22 = 1u;
    uint32_t _r_08037F22;
    _r_08037F22 = 0x00000080u;
    arm_set_nzc_logic(_r_08037F22, cpsr_c());
    g_cpu.R[0] = _r_08037F22;
    g_cpu.R[15] = 0x08037F24u;
    runtime_tick(_cyc_08037F22);
    }
L_08037F24:
    /* 08037F24  08037f24 T tsts r0,r1 */
    {
    g_cpu.R[15] = 0x08037F24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F24 = 1u;
    _cyc_08037F24 = 1u;
    uint32_t _rm_08037F24 = g_cpu.R[1];
    uint32_t _op2_08037F24;
    uint32_t _co_08037F24;
    _op2_08037F24 = _rm_08037F24;
    _co_08037F24 = cpsr_c();
    uint32_t _rn_08037F24 = g_cpu.R[0];
    uint32_t _r_08037F24;
    _r_08037F24 = _rn_08037F24 & _op2_08037F24;
    arm_set_nzc_logic(_r_08037F24, _co_08037F24);
    g_cpu.R[15] = 0x08037F26u;
    runtime_tick(_cyc_08037F24);
    }
L_08037F26:
    /* 08037F26  08037f26 T bne 0x08037f2e */
    {
    g_cpu.R[15] = 0x08037F26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F26 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08037F26 = 3u;
        g_cpu.R[15] = 0x08037F2Eu;
        runtime_tick(_cyc_08037F26);
        gf_race_08037f2e();
        return;
    }
    g_cpu.R[15] = 0x08037F28u;
    runtime_tick(_cyc_08037F26);
    }
L_08037F28:
    /* 08037F28  08037f28 T movs r0,#0x70 */
    {
    g_cpu.R[15] = 0x08037F28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F28 = 1u;
    _cyc_08037F28 = 1u;
    uint32_t _r_08037F28;
    _r_08037F28 = 0x00000070u;
    arm_set_nzc_logic(_r_08037F28, cpsr_c());
    g_cpu.R[0] = _r_08037F28;
    g_cpu.R[15] = 0x08037F2Au;
    runtime_tick(_cyc_08037F28);
    }
L_08037F2A:
    /* 08037F2A  08037f2a T tsts r0,r1 */
    {
    g_cpu.R[15] = 0x08037F2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F2A = 1u;
    _cyc_08037F2A = 1u;
    uint32_t _rm_08037F2A = g_cpu.R[1];
    uint32_t _op2_08037F2A;
    uint32_t _co_08037F2A;
    _op2_08037F2A = _rm_08037F2A;
    _co_08037F2A = cpsr_c();
    uint32_t _rn_08037F2A = g_cpu.R[0];
    uint32_t _r_08037F2A;
    _r_08037F2A = _rn_08037F2A & _op2_08037F2A;
    arm_set_nzc_logic(_r_08037F2A, _co_08037F2A);
    g_cpu.R[15] = 0x08037F2Cu;
    runtime_tick(_cyc_08037F2A);
    }
L_08037F2C:
    /* 08037F2C  08037f2c T bne 0x08037f30 */
    {
    g_cpu.R[15] = 0x08037F2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08037F2C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08037F2C = 3u;
        g_cpu.R[15] = 0x08037F30u;
        runtime_tick(_cyc_08037F2C);
        gf_tfunc_08037F30();
        return;
    }
    g_cpu.R[15] = 0x08037F2Eu;
    runtime_tick(_cyc_08037F2C);
    }
    /* fall-through to 0x08037F2E */
    g_cpu.R[15] = 0x08037F2Eu;
    runtime_dispatch(0x08037F2Eu);
    return;
}

/* 0x080389E0  mode=thumb  end=0x080389F6  branches=2  indirect */
void gf_race_080389e0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080389E2u: goto L_080389E2;
        case 0x080389E4u: goto L_080389E4;
        case 0x080389E6u: goto L_080389E6;
        case 0x080389E8u: goto L_080389E8;
        case 0x080389EAu: goto L_080389EA;
        case 0x080389ECu: goto L_080389EC;
        case 0x080389EEu: goto L_080389EE;
        case 0x080389F0u: goto L_080389F0;
        case 0x080389F2u: goto L_080389F2;
        case 0x080389F4u: goto L_080389F4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080389E0u);
    /* 080389E0  080389e0 T ldrb r1,[r4] */
    {
    g_cpu.R[15] = 0x080389E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389E0 = 1u;
    _cyc_080389E0 = 2u;
    uint32_t _base_080389E0 = g_cpu.R[4];
    uint32_t _off_080389E0;
    _off_080389E0 = 0x00000000u;
    uint32_t _ea_080389E0 = _base_080389E0 + _off_080389E0;
    uint32_t _post_080389E0 = _base_080389E0 + _off_080389E0;
    _cyc_080389E0 += runtime_mem_cycles(_ea_080389E0, 1u, 0u);
    uint32_t _v_080389E0;
    _v_080389E0 = bus_read_u8(_ea_080389E0);
    g_cpu.R[1] = _v_080389E0;
    g_cpu.R[15] = 0x080389E2u;
    runtime_tick(_cyc_080389E0);
    }
L_080389E2:
    /* 080389E2  080389e2 T adds r0,r3,#0x0 */
    {
    g_cpu.R[15] = 0x080389E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389E2 = 1u;
    _cyc_080389E2 = 1u;
    uint32_t _rn_080389E2 = g_cpu.R[3];
    uint32_t _r_080389E2;
    _r_080389E2 = _rn_080389E2 + 0x00000000u;
    arm_set_nzcv_add(_rn_080389E2, 0x00000000u, _r_080389E2);
    g_cpu.R[0] = _r_080389E2;
    g_cpu.R[15] = 0x080389E4u;
    runtime_tick(_cyc_080389E2);
    }
L_080389E4:
    /* 080389E4  080389e4 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x080389E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389E4 = 1u;
    _cyc_080389E4 = 1u;
    uint32_t _rm_080389E4 = g_cpu.R[1];
    uint32_t _op2_080389E4;
    uint32_t _co_080389E4;
    _op2_080389E4 = _rm_080389E4;
    _co_080389E4 = cpsr_c();
    uint32_t _rn_080389E4 = g_cpu.R[0];
    uint32_t _r_080389E4;
    _r_080389E4 = _rn_080389E4 & _op2_080389E4;
    arm_set_nzc_logic(_r_080389E4, _co_080389E4);
    g_cpu.R[0] = _r_080389E4;
    g_cpu.R[15] = 0x080389E6u;
    runtime_tick(_cyc_080389E4);
    }
L_080389E6:
    /* 080389E6  080389e6 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x080389E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389E6 = 1u;
    _cyc_080389E6 = 1u;
    uint32_t _rn_080389E6 = g_cpu.R[0];
    uint32_t _r_080389E6;
    _r_080389E6 = _rn_080389E6 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080389E6, 0x00000000u, _r_080389E6);
    g_cpu.R[15] = 0x080389E8u;
    runtime_tick(_cyc_080389E6);
    }
L_080389E8:
    /* 080389E8  080389e8 T beq 0x080389f6 */
    {
    g_cpu.R[15] = 0x080389E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389E8 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_080389E8 = 3u;
        g_cpu.R[15] = 0x080389F6u;
        runtime_tick(_cyc_080389E8);
        gf_race_080389f6();
        return;
    }
    g_cpu.R[15] = 0x080389EAu;
    runtime_tick(_cyc_080389E8);
    }
L_080389EA:
    /* 080389EA  080389ea T ldrh r7,[r6,#0x28] */
    {
    g_cpu.R[15] = 0x080389EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389EA = 1u;
    _cyc_080389EA = 2u;
    uint32_t _base_080389EA = g_cpu.R[6];
    uint32_t _off_080389EA;
    _off_080389EA = 0x00000028u;
    uint32_t _ea_080389EA = _base_080389EA + _off_080389EA;
    uint32_t _post_080389EA = _base_080389EA + _off_080389EA;
    _cyc_080389EA += runtime_mem_cycles(_ea_080389EA, 2u, 0u);
    uint32_t _v_080389EA;
    { uint32_t _h = bus_read_u16(_ea_080389EA & ~1u); if (_ea_080389EA & 1u) _v_080389EA = ((_h >> 8) | (_h << 24)); else _v_080389EA = _h; }
    g_cpu.R[7] = _v_080389EA;
    g_cpu.R[15] = 0x080389ECu;
    runtime_tick(_cyc_080389EA);
    }
L_080389EC:
    /* 080389EC  080389ec T movs r0,r7,lsr #2 */
    {
    g_cpu.R[15] = 0x080389ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389EC = 1u;
    _cyc_080389EC = 1u;
    uint32_t _rm_080389EC = g_cpu.R[7];
    uint32_t _op2_080389EC;
    uint32_t _co_080389EC;
    _op2_080389EC = _rm_080389EC >> 2;
    _co_080389EC = (_rm_080389EC >> 1) & 1u;
    uint32_t _r_080389EC;
    _r_080389EC = _op2_080389EC;
    arm_set_nzc_logic(_r_080389EC, _co_080389EC);
    g_cpu.R[0] = _r_080389EC;
    g_cpu.R[15] = 0x080389EEu;
    runtime_tick(_cyc_080389EC);
    }
L_080389EE:
    /* 080389EE  080389ee T strb r0,[r4,#0x13] */
    {
    g_cpu.R[15] = 0x080389EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389EE = 1u;
    _cyc_080389EE = 1u;
    uint32_t _base_080389EE = g_cpu.R[4];
    uint32_t _off_080389EE;
    _off_080389EE = 0x00000013u;
    uint32_t _ea_080389EE = _base_080389EE + _off_080389EE;
    uint32_t _post_080389EE = _base_080389EE + _off_080389EE;
    _cyc_080389EE += runtime_mem_cycles(_ea_080389EE, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080389EEu, _ea_080389EE, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080389EE, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080389F0u;
    runtime_tick(_cyc_080389EE);
    }
L_080389F0:
    /* 080389F0  080389f0 T adds r0,r1,#0x0 */
    {
    g_cpu.R[15] = 0x080389F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389F0 = 1u;
    _cyc_080389F0 = 1u;
    uint32_t _rn_080389F0 = g_cpu.R[1];
    uint32_t _r_080389F0;
    _r_080389F0 = _rn_080389F0 + 0x00000000u;
    arm_set_nzcv_add(_rn_080389F0, 0x00000000u, _r_080389F0);
    g_cpu.R[0] = _r_080389F0;
    g_cpu.R[15] = 0x080389F2u;
    runtime_tick(_cyc_080389F0);
    }
L_080389F2:
    /* 080389F2  080389f2 T orrs r0,r0,r2 */
    {
    g_cpu.R[15] = 0x080389F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389F2 = 1u;
    _cyc_080389F2 = 1u;
    uint32_t _rm_080389F2 = g_cpu.R[2];
    uint32_t _op2_080389F2;
    uint32_t _co_080389F2;
    _op2_080389F2 = _rm_080389F2;
    _co_080389F2 = cpsr_c();
    uint32_t _rn_080389F2 = g_cpu.R[0];
    uint32_t _r_080389F2;
    _r_080389F2 = _rn_080389F2 | _op2_080389F2;
    arm_set_nzc_logic(_r_080389F2, _co_080389F2);
    g_cpu.R[0] = _r_080389F2;
    g_cpu.R[15] = 0x080389F4u;
    runtime_tick(_cyc_080389F2);
    }
L_080389F4:
    /* 080389F4  080389f4 T strb r0,[r4] */
    {
    g_cpu.R[15] = 0x080389F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080389F4 = 1u;
    _cyc_080389F4 = 1u;
    uint32_t _base_080389F4 = g_cpu.R[4];
    uint32_t _off_080389F4;
    _off_080389F4 = 0x00000000u;
    uint32_t _ea_080389F4 = _base_080389F4 + _off_080389F4;
    uint32_t _post_080389F4 = _base_080389F4 + _off_080389F4;
    _cyc_080389F4 += runtime_mem_cycles(_ea_080389F4, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080389F4u, _ea_080389F4, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080389F4, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080389F6u;
    runtime_tick(_cyc_080389F4);
    }
    /* fall-through to 0x080389F6 */
    g_cpu.R[15] = 0x080389F6u;
    runtime_dispatch(0x080389F6u);
    return;
}

/* 0x08038B7A  mode=thumb  end=0x08038B84  branches=1 */
void gf_race_08038b7a(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038B7Cu: goto L_08038B7C;
        case 0x08038B7Eu: goto L_08038B7E;
        case 0x08038B80u: goto L_08038B80;
        case 0x08038B82u: goto L_08038B82;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038B7Au);
    /* 08038B7A  08038b7a T ldr r1,[r15,#0x8] */
    {
    g_cpu.R[15] = 0x08038B7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B7A = 1u;
    _cyc_08038B7A = 2u;
    uint32_t _base_08038B7A = 0x08038B7Eu & ~3u;
    uint32_t _off_08038B7A;
    _off_08038B7A = 0x00000008u;
    uint32_t _ea_08038B7A = _base_08038B7A + _off_08038B7A;
    uint32_t _post_08038B7A = _base_08038B7A + _off_08038B7A;
    _cyc_08038B7A += runtime_mem_cycles(_ea_08038B7A, 4u, 0u);
    uint32_t _v_08038B7A;
    { uint32_t _w = bus_read_u32(_ea_08038B7A & ~3u); uint32_t _rot = (_ea_08038B7A & 3u) * 8u; _v_08038B7A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08038B7A;
    g_cpu.R[15] = 0x08038B7Cu;
    runtime_tick(_cyc_08038B7A);
    }
L_08038B7C:
    /* 08038B7C  08038b7c T movs r0,#0x8 */
    {
    g_cpu.R[15] = 0x08038B7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B7C = 1u;
    _cyc_08038B7C = 1u;
    uint32_t _r_08038B7C;
    _r_08038B7C = 0x00000008u;
    arm_set_nzc_logic(_r_08038B7C, cpsr_c());
    g_cpu.R[0] = _r_08038B7C;
    g_cpu.R[15] = 0x08038B7Eu;
    runtime_tick(_cyc_08038B7C);
    }
L_08038B7E:
    /* 08038B7E  08038b7e T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08038B7Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B7E = 1u;
    _cyc_08038B7E = 1u;
    uint32_t _base_08038B7E = g_cpu.R[1];
    uint32_t _off_08038B7E;
    _off_08038B7E = 0x00000000u;
    uint32_t _ea_08038B7E = _base_08038B7E + _off_08038B7E;
    uint32_t _post_08038B7E = _base_08038B7E + _off_08038B7E;
    _cyc_08038B7E += runtime_mem_cycles(_ea_08038B7E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038B7Eu, _ea_08038B7E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038B7E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038B80u;
    runtime_tick(_cyc_08038B7E);
    }
L_08038B80:
    /* 08038B80  08038b80 T adds r1,r1,#0x2 */
    {
    g_cpu.R[15] = 0x08038B80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B80 = 1u;
    _cyc_08038B80 = 1u;
    uint32_t _rn_08038B80 = g_cpu.R[1];
    uint32_t _r_08038B80;
    _r_08038B80 = _rn_08038B80 + 0x00000002u;
    arm_set_nzcv_add(_rn_08038B80, 0x00000002u, _r_08038B80);
    g_cpu.R[1] = _r_08038B80;
    g_cpu.R[15] = 0x08038B82u;
    runtime_tick(_cyc_08038B80);
    }
L_08038B82:
    /* 08038B82  08038b82 T b 0x08038ba4 */
    {
    g_cpu.R[15] = 0x08038B82u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038B82 = 1u;
    _cyc_08038B82 = 3u;
    g_cpu.R[15] = 0x08038BA4u;
    runtime_tick(_cyc_08038B82);
    gf_race_08038ba4();
    return;
    g_cpu.R[15] = 0x08038B84u;
    runtime_tick(_cyc_08038B82);
    }
    /* fall-through to 0x08038B84 */
    g_cpu.R[15] = 0x08038B84u;
    runtime_dispatch(0x08038B84u);
    return;
}

/* 0x08038D3A  mode=thumb  end=0x08038D40  branches=1 */
void gf_race_08038d3a(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038D3Cu: goto L_08038D3C;
        case 0x08038D3Eu: goto L_08038D3E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038D3Au);
    /* 08038D3A  08038d3a T ldrb r0,[r4,#0x1f] */
    {
    g_cpu.R[15] = 0x08038D3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D3A = 1u;
    _cyc_08038D3A = 2u;
    uint32_t _base_08038D3A = g_cpu.R[4];
    uint32_t _off_08038D3A;
    _off_08038D3A = 0x0000001Fu;
    uint32_t _ea_08038D3A = _base_08038D3A + _off_08038D3A;
    uint32_t _post_08038D3A = _base_08038D3A + _off_08038D3A;
    _cyc_08038D3A += runtime_mem_cycles(_ea_08038D3A, 1u, 0u);
    uint32_t _v_08038D3A;
    _v_08038D3A = bus_read_u8(_ea_08038D3A);
    g_cpu.R[0] = _v_08038D3A;
    g_cpu.R[15] = 0x08038D3Cu;
    runtime_tick(_cyc_08038D3A);
    }
L_08038D3C:
    /* 08038D3C  08038d3c T ldr r2,[r13,#0x8] */
    {
    g_cpu.R[15] = 0x08038D3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D3C = 1u;
    _cyc_08038D3C = 2u;
    uint32_t _base_08038D3C = g_cpu.R[13];
    uint32_t _off_08038D3C;
    _off_08038D3C = 0x00000008u;
    uint32_t _ea_08038D3C = _base_08038D3C + _off_08038D3C;
    uint32_t _post_08038D3C = _base_08038D3C + _off_08038D3C;
    _cyc_08038D3C += runtime_mem_cycles(_ea_08038D3C, 4u, 0u);
    uint32_t _v_08038D3C;
    { uint32_t _w = bus_read_u32(_ea_08038D3C & ~3u); uint32_t _rot = (_ea_08038D3C & 3u) * 8u; _v_08038D3C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08038D3C;
    g_cpu.R[15] = 0x08038D3Eu;
    runtime_tick(_cyc_08038D3C);
    }
L_08038D3E:
    /* 08038D3E  08038d3e T strb r0,[r2] */
    {
    g_cpu.R[15] = 0x08038D3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038D3E = 1u;
    _cyc_08038D3E = 1u;
    uint32_t _base_08038D3E = g_cpu.R[2];
    uint32_t _off_08038D3E;
    _off_08038D3E = 0x00000000u;
    uint32_t _ea_08038D3E = _base_08038D3E + _off_08038D3E;
    uint32_t _post_08038D3E = _base_08038D3E + _off_08038D3E;
    _cyc_08038D3E += runtime_mem_cycles(_ea_08038D3E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038D3Eu, _ea_08038D3E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038D3E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038D40u;
    runtime_tick(_cyc_08038D3E);
    }
    /* fall-through to 0x08038D40 */
    g_cpu.R[15] = 0x08038D40u;
    runtime_dispatch(0x08038D40u);
    return;
}

/* 0x08038DA0  mode=thumb  end=0x08038DAE  branches=3 */
void gf_race_08038da0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08038DA2u: goto L_08038DA2;
        case 0x08038DA4u: goto L_08038DA4;
        case 0x08038DA6u: goto L_08038DA6;
        case 0x08038DA8u: goto L_08038DA8;
        case 0x08038DAAu: goto L_08038DAA;
        case 0x08038DACu: goto L_08038DAC;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038DA0u);
    /* 08038DA0  08038da0 T ldrb r0,[r4,#0x4] */
    {
    g_cpu.R[15] = 0x08038DA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DA0 = 1u;
    _cyc_08038DA0 = 2u;
    uint32_t _base_08038DA0 = g_cpu.R[4];
    uint32_t _off_08038DA0;
    _off_08038DA0 = 0x00000004u;
    uint32_t _ea_08038DA0 = _base_08038DA0 + _off_08038DA0;
    uint32_t _post_08038DA0 = _base_08038DA0 + _off_08038DA0;
    _cyc_08038DA0 += runtime_mem_cycles(_ea_08038DA0, 1u, 0u);
    uint32_t _v_08038DA0;
    _v_08038DA0 = bus_read_u8(_ea_08038DA0);
    g_cpu.R[0] = _v_08038DA0;
    g_cpu.R[15] = 0x08038DA2u;
    runtime_tick(_cyc_08038DA0);
    }
L_08038DA2:
    /* 08038DA2  08038da2 T adds r0,r0,#0x8 */
    {
    g_cpu.R[15] = 0x08038DA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DA2 = 1u;
    _cyc_08038DA2 = 1u;
    uint32_t _rn_08038DA2 = g_cpu.R[0];
    uint32_t _r_08038DA2;
    _r_08038DA2 = _rn_08038DA2 + 0x00000008u;
    arm_set_nzcv_add(_rn_08038DA2, 0x00000008u, _r_08038DA2);
    g_cpu.R[0] = _r_08038DA2;
    g_cpu.R[15] = 0x08038DA4u;
    runtime_tick(_cyc_08038DA2);
    }
L_08038DA4:
    /* 08038DA4  08038da4 T mov r8,r0 */
    {
    g_cpu.R[15] = 0x08038DA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DA4 = 1u;
    _cyc_08038DA4 = 1u;
    uint32_t _rm_08038DA4 = g_cpu.R[0];
    uint32_t _op2_08038DA4;
    uint32_t _co_08038DA4;
    _op2_08038DA4 = _rm_08038DA4;
    _co_08038DA4 = cpsr_c();
    uint32_t _r_08038DA4;
    _r_08038DA4 = _op2_08038DA4;
    g_cpu.R[8] = _r_08038DA4;
    g_cpu.R[15] = 0x08038DA6u;
    runtime_tick(_cyc_08038DA4);
    }
L_08038DA6:
    /* 08038DA6  08038da6 T ldrb r0,[r4,#0x1e] */
    {
    g_cpu.R[15] = 0x08038DA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DA6 = 1u;
    _cyc_08038DA6 = 2u;
    uint32_t _base_08038DA6 = g_cpu.R[4];
    uint32_t _off_08038DA6;
    _off_08038DA6 = 0x0000001Eu;
    uint32_t _ea_08038DA6 = _base_08038DA6 + _off_08038DA6;
    uint32_t _post_08038DA6 = _base_08038DA6 + _off_08038DA6;
    _cyc_08038DA6 += runtime_mem_cycles(_ea_08038DA6, 1u, 0u);
    uint32_t _v_08038DA6;
    _v_08038DA6 = bus_read_u8(_ea_08038DA6);
    g_cpu.R[0] = _v_08038DA6;
    g_cpu.R[15] = 0x08038DA8u;
    runtime_tick(_cyc_08038DA6);
    }
L_08038DA8:
    /* 08038DA8  08038da8 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08038DA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DA8 = 1u;
    _cyc_08038DA8 = 1u;
    uint32_t _rn_08038DA8 = g_cpu.R[0];
    uint32_t _r_08038DA8;
    _r_08038DA8 = _rn_08038DA8 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08038DA8, 0x00000000u, _r_08038DA8);
    g_cpu.R[15] = 0x08038DAAu;
    runtime_tick(_cyc_08038DA8);
    }
L_08038DAA:
    /* 08038DAA  08038daa T beq 0x08038dae */
    {
    g_cpu.R[15] = 0x08038DAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DAA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08038DAA = 3u;
        g_cpu.R[15] = 0x08038DAEu;
        runtime_tick(_cyc_08038DAA);
        gf_race_08038dae();
        return;
    }
    g_cpu.R[15] = 0x08038DACu;
    runtime_tick(_cyc_08038DAA);
    }
L_08038DAC:
    /* 08038DAC  08038dac T movs r0,#0x40 */
    {
    g_cpu.R[15] = 0x08038DACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DAC = 1u;
    _cyc_08038DAC = 1u;
    uint32_t _r_08038DAC;
    _r_08038DAC = 0x00000040u;
    arm_set_nzc_logic(_r_08038DAC, cpsr_c());
    g_cpu.R[0] = _r_08038DAC;
    g_cpu.R[15] = 0x08038DAEu;
    runtime_tick(_cyc_08038DAC);
    }
    /* fall-through to 0x08038DAE */
    g_cpu.R[15] = 0x08038DAEu;
    runtime_dispatch(0x08038DAEu);
    return;
}

/* 0x08038DAE  mode=thumb  end=0x08038DB0  branches=2 */
void gf_race_08038dae(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038DAEu);
    /* 08038DAE  08038dae T strb r0,[r4,#0x1a] */
    g_cpu.R[15] = 0x08038DAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038DAE = 1u;
    _cyc_08038DAE = 1u;
    uint32_t _base_08038DAE = g_cpu.R[4];
    uint32_t _off_08038DAE;
    _off_08038DAE = 0x0000001Au;
    uint32_t _ea_08038DAE = _base_08038DAE + _off_08038DAE;
    uint32_t _post_08038DAE = _base_08038DAE + _off_08038DAE;
    _cyc_08038DAE += runtime_mem_cycles(_ea_08038DAE, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038DAEu, _ea_08038DAE, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038DAE, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038DB0u;
    runtime_tick(_cyc_08038DAE);
    /* fall-through to 0x08038DB0 */
    g_cpu.R[15] = 0x08038DB0u;
    runtime_dispatch(0x08038DB0u);
    return;
}

/* 0x08038F32  mode=thumb  end=0x08038F34  branches=2 */
void gf_race_08038f32(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08038F32u);
    /* 08038F32  08038f32 T strb r0,[r4,#0xb] */
    g_cpu.R[15] = 0x08038F32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08038F32 = 1u;
    _cyc_08038F32 = 1u;
    uint32_t _base_08038F32 = g_cpu.R[4];
    uint32_t _off_08038F32;
    _off_08038F32 = 0x0000000Bu;
    uint32_t _ea_08038F32 = _base_08038F32 + _off_08038F32;
    uint32_t _post_08038F32 = _base_08038F32 + _off_08038F32;
    _cyc_08038F32 += runtime_mem_cycles(_ea_08038F32, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08038F32u, _ea_08038F32, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08038F32, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08038F34u;
    runtime_tick(_cyc_08038F32);
    /* fall-through to 0x08038F34 */
    g_cpu.R[15] = 0x08038F34u;
    runtime_dispatch(0x08038F34u);
    return;
}

/* 0x08039010  mode=thumb  end=0x08039044  branches=4 */
void gf_race_08039010(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08039012u: goto L_08039012;
        case 0x08039014u: goto L_08039014;
        case 0x08039016u: goto L_08039016;
        case 0x08039018u: goto L_08039018;
        case 0x0803901Au: goto L_0803901A;
        case 0x0803901Cu: goto L_0803901C;
        case 0x0803901Eu: goto L_0803901E;
        case 0x08039020u: goto L_08039020;
        case 0x08039022u: goto L_08039022;
        case 0x08039024u: goto L_08039024;
        case 0x08039026u: goto L_08039026;
        case 0x08039028u: goto L_08039028;
        case 0x0803902Au: goto L_0803902A;
        case 0x0803902Cu: goto L_0803902C;
        case 0x0803902Eu: goto L_0803902E;
        case 0x08039030u: goto L_08039030;
        case 0x08039032u: goto L_08039032;
        case 0x08039034u: goto L_08039034;
        case 0x08039036u: goto L_08039036;
        case 0x08039038u: goto L_08039038;
        case 0x0803903Au: goto L_0803903A;
        case 0x0803903Cu: goto L_0803903C;
        case 0x0803903Eu: goto L_0803903E;
        case 0x08039040u: goto L_08039040;
        case 0x08039042u: goto L_08039042;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08039010u);
    /* 08039010  08039010 T movs r0,#0xf */
    {
    g_cpu.R[15] = 0x08039010u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039010 = 1u;
    _cyc_08039010 = 1u;
    uint32_t _r_08039010;
    _r_08039010 = 0x0000000Fu;
    arm_set_nzc_logic(_r_08039010, cpsr_c());
    g_cpu.R[0] = _r_08039010;
    g_cpu.R[15] = 0x08039012u;
    runtime_tick(_cyc_08039010);
    }
L_08039012:
    /* 08039012  08039012 T mov r1,r8 */
    {
    g_cpu.R[15] = 0x08039012u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039012 = 1u;
    _cyc_08039012 = 1u;
    uint32_t _rm_08039012 = g_cpu.R[8];
    uint32_t _op2_08039012;
    uint32_t _co_08039012;
    _op2_08039012 = _rm_08039012;
    _co_08039012 = cpsr_c();
    uint32_t _r_08039012;
    _r_08039012 = _op2_08039012;
    g_cpu.R[1] = _r_08039012;
    g_cpu.R[15] = 0x08039014u;
    runtime_tick(_cyc_08039012);
    }
L_08039014:
    /* 08039014  08039014 T ands r1,r1,r0 */
    {
    g_cpu.R[15] = 0x08039014u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039014 = 1u;
    _cyc_08039014 = 1u;
    uint32_t _rm_08039014 = g_cpu.R[0];
    uint32_t _op2_08039014;
    uint32_t _co_08039014;
    _op2_08039014 = _rm_08039014;
    _co_08039014 = cpsr_c();
    uint32_t _rn_08039014 = g_cpu.R[1];
    uint32_t _r_08039014;
    _r_08039014 = _rn_08039014 & _op2_08039014;
    arm_set_nzc_logic(_r_08039014, _co_08039014);
    g_cpu.R[1] = _r_08039014;
    g_cpu.R[15] = 0x08039016u;
    runtime_tick(_cyc_08039014);
    }
L_08039016:
    /* 08039016  08039016 T mov r8,r1 */
    {
    g_cpu.R[15] = 0x08039016u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039016 = 1u;
    _cyc_08039016 = 1u;
    uint32_t _rm_08039016 = g_cpu.R[1];
    uint32_t _op2_08039016;
    uint32_t _co_08039016;
    _op2_08039016 = _rm_08039016;
    _co_08039016 = cpsr_c();
    uint32_t _r_08039016;
    _r_08039016 = _op2_08039016;
    g_cpu.R[8] = _r_08039016;
    g_cpu.R[15] = 0x08039018u;
    runtime_tick(_cyc_08039016);
    }
L_08039018:
    /* 08039018  08039018 T ldrb r2,[r4,#0x9] */
    {
    g_cpu.R[15] = 0x08039018u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039018 = 1u;
    _cyc_08039018 = 2u;
    uint32_t _base_08039018 = g_cpu.R[4];
    uint32_t _off_08039018;
    _off_08039018 = 0x00000009u;
    uint32_t _ea_08039018 = _base_08039018 + _off_08039018;
    uint32_t _post_08039018 = _base_08039018 + _off_08039018;
    _cyc_08039018 += runtime_mem_cycles(_ea_08039018, 1u, 0u);
    uint32_t _v_08039018;
    _v_08039018 = bus_read_u8(_ea_08039018);
    g_cpu.R[2] = _v_08039018;
    g_cpu.R[15] = 0x0803901Au;
    runtime_tick(_cyc_08039018);
    }
L_0803901A:
    /* 0803901A  0803901a T movs r0,r2,lsl #4 */
    {
    g_cpu.R[15] = 0x0803901Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803901A = 1u;
    _cyc_0803901A = 1u;
    uint32_t _rm_0803901A = g_cpu.R[2];
    uint32_t _op2_0803901A;
    uint32_t _co_0803901A;
    _op2_0803901A = _rm_0803901A << 4;
    _co_0803901A = (_rm_0803901A >> 28) & 1u;
    uint32_t _r_0803901A;
    _r_0803901A = _op2_0803901A;
    arm_set_nzc_logic(_r_0803901A, _co_0803901A);
    g_cpu.R[0] = _r_0803901A;
    g_cpu.R[15] = 0x0803901Cu;
    runtime_tick(_cyc_0803901A);
    }
L_0803901C:
    /* 0803901C  0803901c T add r0,r0,r8 */
    {
    g_cpu.R[15] = 0x0803901Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803901C = 1u;
    _cyc_0803901C = 1u;
    uint32_t _rm_0803901C = g_cpu.R[8];
    uint32_t _op2_0803901C;
    uint32_t _co_0803901C;
    _op2_0803901C = _rm_0803901C;
    _co_0803901C = cpsr_c();
    uint32_t _rn_0803901C = g_cpu.R[0];
    uint32_t _r_0803901C;
    _r_0803901C = _rn_0803901C + _op2_0803901C;
    g_cpu.R[0] = _r_0803901C;
    g_cpu.R[15] = 0x0803901Eu;
    runtime_tick(_cyc_0803901C);
    }
L_0803901E:
    /* 0803901E  0803901e T ldr r1,[r13,#0xc] */
    {
    g_cpu.R[15] = 0x0803901Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803901E = 1u;
    _cyc_0803901E = 2u;
    uint32_t _base_0803901E = g_cpu.R[13];
    uint32_t _off_0803901E;
    _off_0803901E = 0x0000000Cu;
    uint32_t _ea_0803901E = _base_0803901E + _off_0803901E;
    uint32_t _post_0803901E = _base_0803901E + _off_0803901E;
    _cyc_0803901E += runtime_mem_cycles(_ea_0803901E, 4u, 0u);
    uint32_t _v_0803901E;
    { uint32_t _w = bus_read_u32(_ea_0803901E & ~3u); uint32_t _rot = (_ea_0803901E & 3u) * 8u; _v_0803901E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0803901E;
    g_cpu.R[15] = 0x08039020u;
    runtime_tick(_cyc_0803901E);
    }
L_08039020:
    /* 08039020  08039020 T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08039020u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039020 = 1u;
    _cyc_08039020 = 1u;
    uint32_t _base_08039020 = g_cpu.R[1];
    uint32_t _off_08039020;
    _off_08039020 = 0x00000000u;
    uint32_t _ea_08039020 = _base_08039020 + _off_08039020;
    uint32_t _post_08039020 = _base_08039020 + _off_08039020;
    _cyc_08039020 += runtime_mem_cycles(_ea_08039020, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08039020u, _ea_08039020, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08039020, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08039022u;
    runtime_tick(_cyc_08039020);
    }
L_08039022:
    /* 08039022  08039022 T movs r2,#0x80 */
    {
    g_cpu.R[15] = 0x08039022u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039022 = 1u;
    _cyc_08039022 = 1u;
    uint32_t _r_08039022;
    _r_08039022 = 0x00000080u;
    arm_set_nzc_logic(_r_08039022, cpsr_c());
    g_cpu.R[2] = _r_08039022;
    g_cpu.R[15] = 0x08039024u;
    runtime_tick(_cyc_08039022);
    }
L_08039024:
    /* 08039024  08039024 T ldrb r0,[r4,#0x1a] */
    {
    g_cpu.R[15] = 0x08039024u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039024 = 1u;
    _cyc_08039024 = 2u;
    uint32_t _base_08039024 = g_cpu.R[4];
    uint32_t _off_08039024;
    _off_08039024 = 0x0000001Au;
    uint32_t _ea_08039024 = _base_08039024 + _off_08039024;
    uint32_t _post_08039024 = _base_08039024 + _off_08039024;
    _cyc_08039024 += runtime_mem_cycles(_ea_08039024, 1u, 0u);
    uint32_t _v_08039024;
    _v_08039024 = bus_read_u8(_ea_08039024);
    g_cpu.R[0] = _v_08039024;
    g_cpu.R[15] = 0x08039026u;
    runtime_tick(_cyc_08039024);
    }
L_08039026:
    /* 08039026  08039026 T orrs r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08039026u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039026 = 1u;
    _cyc_08039026 = 1u;
    uint32_t _rm_08039026 = g_cpu.R[2];
    uint32_t _op2_08039026;
    uint32_t _co_08039026;
    _op2_08039026 = _rm_08039026;
    _co_08039026 = cpsr_c();
    uint32_t _rn_08039026 = g_cpu.R[0];
    uint32_t _r_08039026;
    _r_08039026 = _rn_08039026 | _op2_08039026;
    arm_set_nzc_logic(_r_08039026, _co_08039026);
    g_cpu.R[0] = _r_08039026;
    g_cpu.R[15] = 0x08039028u;
    runtime_tick(_cyc_08039026);
    }
L_08039028:
    /* 08039028  08039028 T ldr r1,[r13,#0x14] */
    {
    g_cpu.R[15] = 0x08039028u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039028 = 1u;
    _cyc_08039028 = 2u;
    uint32_t _base_08039028 = g_cpu.R[13];
    uint32_t _off_08039028;
    _off_08039028 = 0x00000014u;
    uint32_t _ea_08039028 = _base_08039028 + _off_08039028;
    uint32_t _post_08039028 = _base_08039028 + _off_08039028;
    _cyc_08039028 += runtime_mem_cycles(_ea_08039028, 4u, 0u);
    uint32_t _v_08039028;
    { uint32_t _w = bus_read_u32(_ea_08039028 & ~3u); uint32_t _rot = (_ea_08039028 & 3u) * 8u; _v_08039028 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08039028;
    g_cpu.R[15] = 0x0803902Au;
    runtime_tick(_cyc_08039028);
    }
L_0803902A:
    /* 0803902A  0803902a T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x0803902Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803902A = 1u;
    _cyc_0803902A = 1u;
    uint32_t _base_0803902A = g_cpu.R[1];
    uint32_t _off_0803902A;
    _off_0803902A = 0x00000000u;
    uint32_t _ea_0803902A = _base_0803902A + _off_0803902A;
    uint32_t _post_0803902A = _base_0803902A + _off_0803902A;
    _cyc_0803902A += runtime_mem_cycles(_ea_0803902A, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0803902Au, _ea_0803902A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0803902A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0803902Cu;
    runtime_tick(_cyc_0803902A);
    }
L_0803902C:
    /* 0803902C  0803902c T cmps r6,#0x1 */
    {
    g_cpu.R[15] = 0x0803902Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803902C = 1u;
    _cyc_0803902C = 1u;
    uint32_t _rn_0803902C = g_cpu.R[6];
    uint32_t _r_0803902C;
    _r_0803902C = _rn_0803902C - 0x00000001u;
    arm_set_nzcv_sub(_rn_0803902C, 0x00000001u, _r_0803902C);
    g_cpu.R[15] = 0x0803902Eu;
    runtime_tick(_cyc_0803902C);
    }
L_0803902E:
    /* 0803902E  0803902e T bne 0x08039044 */
    {
    g_cpu.R[15] = 0x0803902Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803902E = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0803902E = 3u;
        g_cpu.R[15] = 0x08039044u;
        runtime_tick(_cyc_0803902E);
        gf_race_08039044();
        return;
    }
    g_cpu.R[15] = 0x08039030u;
    runtime_tick(_cyc_0803902E);
    }
L_08039030:
    /* 08039030  08039030 T ldr r0,[r13,#0x8] */
    {
    g_cpu.R[15] = 0x08039030u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039030 = 1u;
    _cyc_08039030 = 2u;
    uint32_t _base_08039030 = g_cpu.R[13];
    uint32_t _off_08039030;
    _off_08039030 = 0x00000008u;
    uint32_t _ea_08039030 = _base_08039030 + _off_08039030;
    uint32_t _post_08039030 = _base_08039030 + _off_08039030;
    _cyc_08039030 += runtime_mem_cycles(_ea_08039030, 4u, 0u);
    uint32_t _v_08039030;
    { uint32_t _w = bus_read_u32(_ea_08039030 & ~3u); uint32_t _rot = (_ea_08039030 & 3u) * 8u; _v_08039030 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08039030;
    g_cpu.R[15] = 0x08039032u;
    runtime_tick(_cyc_08039030);
    }
L_08039032:
    /* 08039032  08039032 T ldrb r1,[r0] */
    {
    g_cpu.R[15] = 0x08039032u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039032 = 1u;
    _cyc_08039032 = 2u;
    uint32_t _base_08039032 = g_cpu.R[0];
    uint32_t _off_08039032;
    _off_08039032 = 0x00000000u;
    uint32_t _ea_08039032 = _base_08039032 + _off_08039032;
    uint32_t _post_08039032 = _base_08039032 + _off_08039032;
    _cyc_08039032 += runtime_mem_cycles(_ea_08039032, 1u, 0u);
    uint32_t _v_08039032;
    _v_08039032 = bus_read_u8(_ea_08039032);
    g_cpu.R[1] = _v_08039032;
    g_cpu.R[15] = 0x08039034u;
    runtime_tick(_cyc_08039032);
    }
L_08039034:
    /* 08039034  08039034 T movs r0,#0x8 */
    {
    g_cpu.R[15] = 0x08039034u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039034 = 1u;
    _cyc_08039034 = 1u;
    uint32_t _r_08039034;
    _r_08039034 = 0x00000008u;
    arm_set_nzc_logic(_r_08039034, cpsr_c());
    g_cpu.R[0] = _r_08039034;
    g_cpu.R[15] = 0x08039036u;
    runtime_tick(_cyc_08039034);
    }
L_08039036:
    /* 08039036  08039036 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08039036u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039036 = 1u;
    _cyc_08039036 = 1u;
    uint32_t _rm_08039036 = g_cpu.R[1];
    uint32_t _op2_08039036;
    uint32_t _co_08039036;
    _op2_08039036 = _rm_08039036;
    _co_08039036 = cpsr_c();
    uint32_t _rn_08039036 = g_cpu.R[0];
    uint32_t _r_08039036;
    _r_08039036 = _rn_08039036 & _op2_08039036;
    arm_set_nzc_logic(_r_08039036, _co_08039036);
    g_cpu.R[0] = _r_08039036;
    g_cpu.R[15] = 0x08039038u;
    runtime_tick(_cyc_08039036);
    }
L_08039038:
    /* 08039038  08039038 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x08039038u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039038 = 1u;
    _cyc_08039038 = 1u;
    uint32_t _rn_08039038 = g_cpu.R[0];
    uint32_t _r_08039038;
    _r_08039038 = _rn_08039038 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08039038, 0x00000000u, _r_08039038);
    g_cpu.R[15] = 0x0803903Au;
    runtime_tick(_cyc_08039038);
    }
L_0803903A:
    /* 0803903A  0803903a T bne 0x08039044 */
    {
    g_cpu.R[15] = 0x0803903Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803903A = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0803903A = 3u;
        g_cpu.R[15] = 0x08039044u;
        runtime_tick(_cyc_0803903A);
        gf_race_08039044();
        return;
    }
    g_cpu.R[15] = 0x0803903Cu;
    runtime_tick(_cyc_0803903A);
    }
L_0803903C:
    /* 0803903C  0803903c T ldrb r0,[r4,#0x1a] */
    {
    g_cpu.R[15] = 0x0803903Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803903C = 1u;
    _cyc_0803903C = 2u;
    uint32_t _base_0803903C = g_cpu.R[4];
    uint32_t _off_0803903C;
    _off_0803903C = 0x0000001Au;
    uint32_t _ea_0803903C = _base_0803903C + _off_0803903C;
    uint32_t _post_0803903C = _base_0803903C + _off_0803903C;
    _cyc_0803903C += runtime_mem_cycles(_ea_0803903C, 1u, 0u);
    uint32_t _v_0803903C;
    _v_0803903C = bus_read_u8(_ea_0803903C);
    g_cpu.R[0] = _v_0803903C;
    g_cpu.R[15] = 0x0803903Eu;
    runtime_tick(_cyc_0803903C);
    }
L_0803903E:
    /* 0803903E  0803903e T orrs r0,r0,r2 */
    {
    g_cpu.R[15] = 0x0803903Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0803903E = 1u;
    _cyc_0803903E = 1u;
    uint32_t _rm_0803903E = g_cpu.R[2];
    uint32_t _op2_0803903E;
    uint32_t _co_0803903E;
    _op2_0803903E = _rm_0803903E;
    _co_0803903E = cpsr_c();
    uint32_t _rn_0803903E = g_cpu.R[0];
    uint32_t _r_0803903E;
    _r_0803903E = _rn_0803903E | _op2_0803903E;
    arm_set_nzc_logic(_r_0803903E, _co_0803903E);
    g_cpu.R[0] = _r_0803903E;
    g_cpu.R[15] = 0x08039040u;
    runtime_tick(_cyc_0803903E);
    }
L_08039040:
    /* 08039040  08039040 T ldr r1,[r13,#0x14] */
    {
    g_cpu.R[15] = 0x08039040u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039040 = 1u;
    _cyc_08039040 = 2u;
    uint32_t _base_08039040 = g_cpu.R[13];
    uint32_t _off_08039040;
    _off_08039040 = 0x00000014u;
    uint32_t _ea_08039040 = _base_08039040 + _off_08039040;
    uint32_t _post_08039040 = _base_08039040 + _off_08039040;
    _cyc_08039040 += runtime_mem_cycles(_ea_08039040, 4u, 0u);
    uint32_t _v_08039040;
    { uint32_t _w = bus_read_u32(_ea_08039040 & ~3u); uint32_t _rot = (_ea_08039040 & 3u) * 8u; _v_08039040 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08039040;
    g_cpu.R[15] = 0x08039042u;
    runtime_tick(_cyc_08039040);
    }
L_08039042:
    /* 08039042  08039042 T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08039042u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039042 = 1u;
    _cyc_08039042 = 1u;
    uint32_t _base_08039042 = g_cpu.R[1];
    uint32_t _off_08039042;
    _off_08039042 = 0x00000000u;
    uint32_t _ea_08039042 = _base_08039042 + _off_08039042;
    uint32_t _post_08039042 = _base_08039042 + _off_08039042;
    _cyc_08039042 += runtime_mem_cycles(_ea_08039042, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08039042u, _ea_08039042, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08039042, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08039044u;
    runtime_tick(_cyc_08039042);
    }
    /* fall-through to 0x08039044 */
    g_cpu.R[15] = 0x08039044u;
    runtime_dispatch(0x08039044u);
    return;
}

/* 0x08039044  mode=thumb  end=0x08039048  branches=2 */
void gf_race_08039044(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08039046u: goto L_08039046;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08039044u);
    /* 08039044  08039044 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x08039044u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039044 = 1u;
    _cyc_08039044 = 1u;
    uint32_t _r_08039044;
    _r_08039044 = 0x00000000u;
    arm_set_nzc_logic(_r_08039044, cpsr_c());
    g_cpu.R[0] = _r_08039044;
    g_cpu.R[15] = 0x08039046u;
    runtime_tick(_cyc_08039044);
    }
L_08039046:
    /* 08039046  08039046 T strb r0,[r4,#0x1d] */
    {
    g_cpu.R[15] = 0x08039046u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08039046 = 1u;
    _cyc_08039046 = 1u;
    uint32_t _base_08039046 = g_cpu.R[4];
    uint32_t _off_08039046;
    _off_08039046 = 0x0000001Du;
    uint32_t _ea_08039046 = _base_08039046 + _off_08039046;
    uint32_t _post_08039046 = _base_08039046 + _off_08039046;
    _cyc_08039046 += runtime_mem_cycles(_ea_08039046, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08039046u, _ea_08039046, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08039046, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08039048u;
    runtime_tick(_cyc_08039046);
    }
    /* fall-through to 0x08039048 */
    g_cpu.R[15] = 0x08039048u;
    runtime_dispatch(0x08039048u);
    return;
}

/* 0x08043CBA  mode=thumb  end=0x08043CC4  branches=0  indirect */
void gf_race_08043cba(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08043CBCu: goto L_08043CBC;
        case 0x08043CBEu: goto L_08043CBE;
        case 0x08043CC0u: goto L_08043CC0;
        case 0x08043CC2u: goto L_08043CC2;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08043CBAu);
    /* 08043CBA  08043cba T movs r0,r0,lsl #2 */
    {
    g_cpu.R[15] = 0x08043CBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CBA = 1u;
    _cyc_08043CBA = 1u;
    uint32_t _rm_08043CBA = g_cpu.R[0];
    uint32_t _op2_08043CBA;
    uint32_t _co_08043CBA;
    _op2_08043CBA = _rm_08043CBA << 2;
    _co_08043CBA = (_rm_08043CBA >> 30) & 1u;
    uint32_t _r_08043CBA;
    _r_08043CBA = _op2_08043CBA;
    arm_set_nzc_logic(_r_08043CBA, _co_08043CBA);
    g_cpu.R[0] = _r_08043CBA;
    g_cpu.R[15] = 0x08043CBCu;
    runtime_tick(_cyc_08043CBA);
    }
L_08043CBC:
    /* 08043CBC  08043cbc T ldr r1,[r15,#0xc] */
    {
    g_cpu.R[15] = 0x08043CBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CBC = 1u;
    _cyc_08043CBC = 2u;
    uint32_t _base_08043CBC = 0x08043CC0u & ~3u;
    uint32_t _off_08043CBC;
    _off_08043CBC = 0x0000000Cu;
    uint32_t _ea_08043CBC = _base_08043CBC + _off_08043CBC;
    uint32_t _post_08043CBC = _base_08043CBC + _off_08043CBC;
    _cyc_08043CBC += runtime_mem_cycles(_ea_08043CBC, 4u, 0u);
    uint32_t _v_08043CBC;
    { uint32_t _w = bus_read_u32(_ea_08043CBC & ~3u); uint32_t _rot = (_ea_08043CBC & 3u) * 8u; _v_08043CBC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08043CBC;
    g_cpu.R[15] = 0x08043CBEu;
    runtime_tick(_cyc_08043CBC);
    }
L_08043CBE:
    /* 08043CBE  08043cbe T adds r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08043CBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CBE = 1u;
    _cyc_08043CBE = 1u;
    uint32_t _rm_08043CBE = g_cpu.R[1];
    uint32_t _op2_08043CBE;
    uint32_t _co_08043CBE;
    _op2_08043CBE = _rm_08043CBE;
    _co_08043CBE = cpsr_c();
    uint32_t _rn_08043CBE = g_cpu.R[0];
    uint32_t _r_08043CBE;
    _r_08043CBE = _rn_08043CBE + _op2_08043CBE;
    arm_set_nzcv_add(_rn_08043CBE, _op2_08043CBE, _r_08043CBE);
    g_cpu.R[0] = _r_08043CBE;
    g_cpu.R[15] = 0x08043CC0u;
    runtime_tick(_cyc_08043CBE);
    }
L_08043CC0:
    /* 08043CC0  08043cc0 T ldr r0,[r0] */
    {
    g_cpu.R[15] = 0x08043CC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CC0 = 1u;
    _cyc_08043CC0 = 2u;
    uint32_t _base_08043CC0 = g_cpu.R[0];
    uint32_t _off_08043CC0;
    _off_08043CC0 = 0x00000000u;
    uint32_t _ea_08043CC0 = _base_08043CC0 + _off_08043CC0;
    uint32_t _post_08043CC0 = _base_08043CC0 + _off_08043CC0;
    _cyc_08043CC0 += runtime_mem_cycles(_ea_08043CC0, 4u, 0u);
    uint32_t _v_08043CC0;
    { uint32_t _w = bus_read_u32(_ea_08043CC0 & ~3u); uint32_t _rot = (_ea_08043CC0 & 3u) * 8u; _v_08043CC0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08043CC0;
    g_cpu.R[15] = 0x08043CC2u;
    runtime_tick(_cyc_08043CC0);
    }
L_08043CC2:
    /* 08043CC2  08043cc2 T mov r15,r0 */
    {
    g_cpu.R[15] = 0x08043CC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08043CC2 = 1u;
    _cyc_08043CC2 = 3u;
    uint32_t _rm_08043CC2 = g_cpu.R[0];
    uint32_t _op2_08043CC2;
    uint32_t _co_08043CC2;
    _op2_08043CC2 = _rm_08043CC2;
    _co_08043CC2 = cpsr_c();
    uint32_t _r_08043CC2;
    _r_08043CC2 = _op2_08043CC2;
    uint32_t _pc_08043CC2 = _r_08043CC2 & ~1u;
    g_cpu.R[15] = _pc_08043CC2;
    runtime_tick(_cyc_08043CC2);
    runtime_dispatch(_pc_08043CC2);
    return;
    g_cpu.R[15] = 0x08043CC4u;
    runtime_tick(_cyc_08043CC2);
    }
    /* fall-through to 0x08043CC4 */
    g_cpu.R[15] = 0x08043CC4u;
    runtime_dispatch(0x08043CC4u);
    return;
}

/* 0x08044F22  mode=thumb  end=0x08044F28  branches=2 */
void gf_race_08044f22(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08044F24u: goto L_08044F24;
        case 0x08044F26u: goto L_08044F26;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08044F22u);
    /* 08044F22  08044f22 T cmps r7,#0x0 */
    {
    g_cpu.R[15] = 0x08044F22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044F22 = 1u;
    _cyc_08044F22 = 1u;
    uint32_t _rn_08044F22 = g_cpu.R[7];
    uint32_t _r_08044F22;
    _r_08044F22 = _rn_08044F22 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08044F22, 0x00000000u, _r_08044F22);
    g_cpu.R[15] = 0x08044F24u;
    runtime_tick(_cyc_08044F22);
    }
L_08044F24:
    /* 08044F24  08044f24 T beq 0x08044f28 */
    {
    g_cpu.R[15] = 0x08044F24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044F24 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08044F24 = 3u;
        g_cpu.R[15] = 0x08044F28u;
        runtime_tick(_cyc_08044F24);
        gf_race_08044f28();
        return;
    }
    g_cpu.R[15] = 0x08044F26u;
    runtime_tick(_cyc_08044F24);
    }
L_08044F26:
    /* 08044F26  08044f26 T b 0x080450fe */
    {
    g_cpu.R[15] = 0x08044F26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08044F26 = 1u;
    _cyc_08044F26 = 3u;
    g_cpu.R[15] = 0x080450FEu;
    runtime_tick(_cyc_08044F26);
    gf_tfunc_080450FE();
    return;
    g_cpu.R[15] = 0x08044F28u;
    runtime_tick(_cyc_08044F26);
    }
    /* fall-through to 0x08044F28 */
    g_cpu.R[15] = 0x08044F28u;
    runtime_dispatch(0x08044F28u);
    return;
}

/* 0x0804CFBC  mode=thumb  end=0x0804CFC6  branches=1 */
void gf_race_0804cfbc(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0804CFBEu: goto L_0804CFBE;
        case 0x0804CFC0u: goto L_0804CFC0;
        case 0x0804CFC2u: goto L_0804CFC2;
        case 0x0804CFC4u: goto L_0804CFC4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0804CFBCu);
    /* 0804CFBC  0804cfbc T ldr r0,[r15,#0x8] */
    {
    g_cpu.R[15] = 0x0804CFBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804CFBC = 1u;
    _cyc_0804CFBC = 2u;
    uint32_t _base_0804CFBC = 0x0804CFC0u & ~3u;
    uint32_t _off_0804CFBC;
    _off_0804CFBC = 0x00000008u;
    uint32_t _ea_0804CFBC = _base_0804CFBC + _off_0804CFBC;
    uint32_t _post_0804CFBC = _base_0804CFBC + _off_0804CFBC;
    _cyc_0804CFBC += runtime_mem_cycles(_ea_0804CFBC, 4u, 0u);
    uint32_t _v_0804CFBC;
    { uint32_t _w = bus_read_u32(_ea_0804CFBC & ~3u); uint32_t _rot = (_ea_0804CFBC & 3u) * 8u; _v_0804CFBC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0804CFBC;
    g_cpu.R[15] = 0x0804CFBEu;
    runtime_tick(_cyc_0804CFBC);
    }
L_0804CFBE:
    /* 0804CFBE  0804cfbe T strb r4,[r0,#0x1f] */
    {
    g_cpu.R[15] = 0x0804CFBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804CFBE = 1u;
    _cyc_0804CFBE = 1u;
    uint32_t _base_0804CFBE = g_cpu.R[0];
    uint32_t _off_0804CFBE;
    _off_0804CFBE = 0x0000001Fu;
    uint32_t _ea_0804CFBE = _base_0804CFBE + _off_0804CFBE;
    uint32_t _post_0804CFBE = _base_0804CFBE + _off_0804CFBE;
    _cyc_0804CFBE += runtime_mem_cycles(_ea_0804CFBE, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804CFBEu, _ea_0804CFBE, (uint32_t)(g_cpu.R[4] & 0xFFu), 1u);
    bus_write_u8(_ea_0804CFBE, (uint8_t)(g_cpu.R[4] & 0xFFu));
    g_cpu.R[15] = 0x0804CFC0u;
    runtime_tick(_cyc_0804CFBE);
    }
L_0804CFC0:
    /* 0804CFC0  0804cfc0 T ldrb r0,[r5,#0x1f] */
    {
    g_cpu.R[15] = 0x0804CFC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804CFC0 = 1u;
    _cyc_0804CFC0 = 2u;
    uint32_t _base_0804CFC0 = g_cpu.R[5];
    uint32_t _off_0804CFC0;
    _off_0804CFC0 = 0x0000001Fu;
    uint32_t _ea_0804CFC0 = _base_0804CFC0 + _off_0804CFC0;
    uint32_t _post_0804CFC0 = _base_0804CFC0 + _off_0804CFC0;
    _cyc_0804CFC0 += runtime_mem_cycles(_ea_0804CFC0, 1u, 0u);
    uint32_t _v_0804CFC0;
    _v_0804CFC0 = bus_read_u8(_ea_0804CFC0);
    g_cpu.R[0] = _v_0804CFC0;
    g_cpu.R[15] = 0x0804CFC2u;
    runtime_tick(_cyc_0804CFC0);
    }
L_0804CFC2:
    /* 0804CFC2  0804cfc2 T adds r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x0804CFC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804CFC2 = 1u;
    _cyc_0804CFC2 = 1u;
    uint32_t _rn_0804CFC2 = g_cpu.R[0];
    uint32_t _r_0804CFC2;
    _r_0804CFC2 = _rn_0804CFC2 + 0x00000001u;
    arm_set_nzcv_add(_rn_0804CFC2, 0x00000001u, _r_0804CFC2);
    g_cpu.R[0] = _r_0804CFC2;
    g_cpu.R[15] = 0x0804CFC4u;
    runtime_tick(_cyc_0804CFC2);
    }
L_0804CFC4:
    /* 0804CFC4  0804cfc4 T b 0x0804d044 */
    {
    g_cpu.R[15] = 0x0804CFC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804CFC4 = 1u;
    _cyc_0804CFC4 = 3u;
    g_cpu.R[15] = 0x0804D044u;
    runtime_tick(_cyc_0804CFC4);
    gf_tfunc_0804D044();
    return;
    g_cpu.R[15] = 0x0804CFC6u;
    runtime_tick(_cyc_0804CFC4);
    }
    /* fall-through to 0x0804CFC6 */
    g_cpu.R[15] = 0x0804CFC6u;
    runtime_dispatch(0x0804CFC6u);
    return;
}

/* 0x0804D0E0  mode=thumb  end=0x0804D128  branches=6 */
void gf_race_0804d0e0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0804D0E2u: goto L_0804D0E2;
        case 0x0804D0E4u: goto L_0804D0E4;
        case 0x0804D0E6u: goto L_0804D0E6;
        case 0x0804D0E8u: goto L_0804D0E8;
        case 0x0804D0EAu: goto L_0804D0EA;
        case 0x0804D0ECu: goto L_0804D0EC;
        case 0x0804D0EEu: goto L_0804D0EE;
        case 0x0804D0F0u: goto L_0804D0F0;
        case 0x0804D0F2u: goto L_0804D0F2;
        case 0x0804D0F4u: goto L_0804D0F4;
        case 0x0804D0F6u: goto L_0804D0F6;
        case 0x0804D0F8u: goto L_0804D0F8;
        case 0x0804D0FAu: goto L_0804D0FA;
        case 0x0804D0FCu: goto L_0804D0FC;
        case 0x0804D0FEu: goto L_0804D0FE;
        case 0x0804D100u: goto L_0804D100;
        case 0x0804D102u: goto L_0804D102;
        case 0x0804D104u: goto L_0804D104;
        case 0x0804D106u: goto L_0804D106;
        case 0x0804D108u: goto L_0804D108;
        case 0x0804D10Au: goto L_0804D10A;
        case 0x0804D10Cu: goto L_0804D10C;
        case 0x0804D10Eu: goto L_0804D10E;
        case 0x0804D110u: goto L_0804D110;
        case 0x0804D112u: goto L_0804D112;
        case 0x0804D114u: goto L_0804D114;
        case 0x0804D116u: goto L_0804D116;
        case 0x0804D118u: goto L_0804D118;
        case 0x0804D11Au: goto L_0804D11A;
        case 0x0804D11Cu: goto L_0804D11C;
        case 0x0804D11Eu: goto L_0804D11E;
        case 0x0804D120u: goto L_0804D120;
        case 0x0804D122u: goto L_0804D122;
        case 0x0804D124u: goto L_0804D124;
        case 0x0804D126u: goto L_0804D126;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0804D0E0u);
L_0804D0E0:
    /* 0804D0E0  0804d0e0 T adds r1,r2,r5 */
    {
    g_cpu.R[15] = 0x0804D0E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0E0 = 1u;
    _cyc_0804D0E0 = 1u;
    uint32_t _rm_0804D0E0 = g_cpu.R[5];
    uint32_t _op2_0804D0E0;
    uint32_t _co_0804D0E0;
    _op2_0804D0E0 = _rm_0804D0E0;
    _co_0804D0E0 = cpsr_c();
    uint32_t _rn_0804D0E0 = g_cpu.R[2];
    uint32_t _r_0804D0E0;
    _r_0804D0E0 = _rn_0804D0E0 + _op2_0804D0E0;
    arm_set_nzcv_add(_rn_0804D0E0, _op2_0804D0E0, _r_0804D0E0);
    g_cpu.R[1] = _r_0804D0E0;
    g_cpu.R[15] = 0x0804D0E2u;
    runtime_tick(_cyc_0804D0E0);
    }
L_0804D0E2:
    /* 0804D0E2  0804d0e2 T mov r7,r13 */
    {
    g_cpu.R[15] = 0x0804D0E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0E2 = 1u;
    _cyc_0804D0E2 = 1u;
    uint32_t _rm_0804D0E2 = g_cpu.R[13];
    uint32_t _op2_0804D0E2;
    uint32_t _co_0804D0E2;
    _op2_0804D0E2 = _rm_0804D0E2;
    _co_0804D0E2 = cpsr_c();
    uint32_t _r_0804D0E2;
    _r_0804D0E2 = _op2_0804D0E2;
    g_cpu.R[7] = _r_0804D0E2;
    g_cpu.R[15] = 0x0804D0E4u;
    runtime_tick(_cyc_0804D0E2);
    }
L_0804D0E4:
    /* 0804D0E4  0804d0e4 T adds r0,r7,r2 */
    {
    g_cpu.R[15] = 0x0804D0E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0E4 = 1u;
    _cyc_0804D0E4 = 1u;
    uint32_t _rm_0804D0E4 = g_cpu.R[2];
    uint32_t _op2_0804D0E4;
    uint32_t _co_0804D0E4;
    _op2_0804D0E4 = _rm_0804D0E4;
    _co_0804D0E4 = cpsr_c();
    uint32_t _rn_0804D0E4 = g_cpu.R[7];
    uint32_t _r_0804D0E4;
    _r_0804D0E4 = _rn_0804D0E4 + _op2_0804D0E4;
    arm_set_nzcv_add(_rn_0804D0E4, _op2_0804D0E4, _r_0804D0E4);
    g_cpu.R[0] = _r_0804D0E4;
    g_cpu.R[15] = 0x0804D0E6u;
    runtime_tick(_cyc_0804D0E4);
    }
L_0804D0E6:
    /* 0804D0E6  0804d0e6 T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x0804D0E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0E6 = 1u;
    _cyc_0804D0E6 = 2u;
    uint32_t _base_0804D0E6 = g_cpu.R[0];
    uint32_t _off_0804D0E6;
    _off_0804D0E6 = 0x00000000u;
    uint32_t _ea_0804D0E6 = _base_0804D0E6 + _off_0804D0E6;
    uint32_t _post_0804D0E6 = _base_0804D0E6 + _off_0804D0E6;
    _cyc_0804D0E6 += runtime_mem_cycles(_ea_0804D0E6, 1u, 0u);
    uint32_t _v_0804D0E6;
    _v_0804D0E6 = bus_read_u8(_ea_0804D0E6);
    g_cpu.R[0] = _v_0804D0E6;
    g_cpu.R[15] = 0x0804D0E8u;
    runtime_tick(_cyc_0804D0E6);
    }
L_0804D0E8:
    /* 0804D0E8  0804d0e8 T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x0804D0E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0E8 = 1u;
    _cyc_0804D0E8 = 1u;
    uint32_t _base_0804D0E8 = g_cpu.R[1];
    uint32_t _off_0804D0E8;
    _off_0804D0E8 = 0x00000000u;
    uint32_t _ea_0804D0E8 = _base_0804D0E8 + _off_0804D0E8;
    uint32_t _post_0804D0E8 = _base_0804D0E8 + _off_0804D0E8;
    _cyc_0804D0E8 += runtime_mem_cycles(_ea_0804D0E8, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804D0E8u, _ea_0804D0E8, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0804D0E8, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0804D0EAu;
    runtime_tick(_cyc_0804D0E8);
    }
L_0804D0EA:
    /* 0804D0EA  0804d0ea T adds r0,r6,r2 */
    {
    g_cpu.R[15] = 0x0804D0EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0EA = 1u;
    _cyc_0804D0EA = 1u;
    uint32_t _rm_0804D0EA = g_cpu.R[2];
    uint32_t _op2_0804D0EA;
    uint32_t _co_0804D0EA;
    _op2_0804D0EA = _rm_0804D0EA;
    _co_0804D0EA = cpsr_c();
    uint32_t _rn_0804D0EA = g_cpu.R[6];
    uint32_t _r_0804D0EA;
    _r_0804D0EA = _rn_0804D0EA + _op2_0804D0EA;
    arm_set_nzcv_add(_rn_0804D0EA, _op2_0804D0EA, _r_0804D0EA);
    g_cpu.R[0] = _r_0804D0EA;
    g_cpu.R[15] = 0x0804D0ECu;
    runtime_tick(_cyc_0804D0EA);
    }
L_0804D0EC:
    /* 0804D0EC  0804d0ec T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x0804D0ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0EC = 1u;
    _cyc_0804D0EC = 2u;
    uint32_t _base_0804D0EC = g_cpu.R[0];
    uint32_t _off_0804D0EC;
    _off_0804D0EC = 0x00000000u;
    uint32_t _ea_0804D0EC = _base_0804D0EC + _off_0804D0EC;
    uint32_t _post_0804D0EC = _base_0804D0EC + _off_0804D0EC;
    _cyc_0804D0EC += runtime_mem_cycles(_ea_0804D0EC, 1u, 0u);
    uint32_t _v_0804D0EC;
    _v_0804D0EC = bus_read_u8(_ea_0804D0EC);
    g_cpu.R[0] = _v_0804D0EC;
    g_cpu.R[15] = 0x0804D0EEu;
    runtime_tick(_cyc_0804D0EC);
    }
L_0804D0EE:
    /* 0804D0EE  0804d0ee T strh r0,[r3] */
    {
    g_cpu.R[15] = 0x0804D0EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0EE = 1u;
    _cyc_0804D0EE = 1u;
    uint32_t _base_0804D0EE = g_cpu.R[3];
    uint32_t _off_0804D0EE;
    _off_0804D0EE = 0x00000000u;
    uint32_t _ea_0804D0EE = _base_0804D0EE + _off_0804D0EE;
    uint32_t _post_0804D0EE = _base_0804D0EE + _off_0804D0EE;
    _cyc_0804D0EE += runtime_mem_cycles(_ea_0804D0EE, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804D0EEu, _ea_0804D0EE & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0804D0EE & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0804D0F0u;
    runtime_tick(_cyc_0804D0EE);
    }
L_0804D0F0:
    /* 0804D0F0  0804d0f0 T mov r0,r8 */
    {
    g_cpu.R[15] = 0x0804D0F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0F0 = 1u;
    _cyc_0804D0F0 = 1u;
    uint32_t _rm_0804D0F0 = g_cpu.R[8];
    uint32_t _op2_0804D0F0;
    uint32_t _co_0804D0F0;
    _op2_0804D0F0 = _rm_0804D0F0;
    _co_0804D0F0 = cpsr_c();
    uint32_t _r_0804D0F0;
    _r_0804D0F0 = _op2_0804D0F0;
    g_cpu.R[0] = _r_0804D0F0;
    g_cpu.R[15] = 0x0804D0F2u;
    runtime_tick(_cyc_0804D0F0);
    }
L_0804D0F2:
    /* 0804D0F2  0804d0f2 T adds r1,r2,r0 */
    {
    g_cpu.R[15] = 0x0804D0F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0F2 = 1u;
    _cyc_0804D0F2 = 1u;
    uint32_t _rm_0804D0F2 = g_cpu.R[0];
    uint32_t _op2_0804D0F2;
    uint32_t _co_0804D0F2;
    _op2_0804D0F2 = _rm_0804D0F2;
    _co_0804D0F2 = cpsr_c();
    uint32_t _rn_0804D0F2 = g_cpu.R[2];
    uint32_t _r_0804D0F2;
    _r_0804D0F2 = _rn_0804D0F2 + _op2_0804D0F2;
    arm_set_nzcv_add(_rn_0804D0F2, _op2_0804D0F2, _r_0804D0F2);
    g_cpu.R[1] = _r_0804D0F2;
    g_cpu.R[15] = 0x0804D0F4u;
    runtime_tick(_cyc_0804D0F2);
    }
L_0804D0F4:
    /* 0804D0F4  0804d0f4 T adds r0,r4,r2 */
    {
    g_cpu.R[15] = 0x0804D0F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0F4 = 1u;
    _cyc_0804D0F4 = 1u;
    uint32_t _rm_0804D0F4 = g_cpu.R[2];
    uint32_t _op2_0804D0F4;
    uint32_t _co_0804D0F4;
    _op2_0804D0F4 = _rm_0804D0F4;
    _co_0804D0F4 = cpsr_c();
    uint32_t _rn_0804D0F4 = g_cpu.R[4];
    uint32_t _r_0804D0F4;
    _r_0804D0F4 = _rn_0804D0F4 + _op2_0804D0F4;
    arm_set_nzcv_add(_rn_0804D0F4, _op2_0804D0F4, _r_0804D0F4);
    g_cpu.R[0] = _r_0804D0F4;
    g_cpu.R[15] = 0x0804D0F6u;
    runtime_tick(_cyc_0804D0F4);
    }
L_0804D0F6:
    /* 0804D0F6  0804d0f6 T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x0804D0F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0F6 = 1u;
    _cyc_0804D0F6 = 2u;
    uint32_t _base_0804D0F6 = g_cpu.R[0];
    uint32_t _off_0804D0F6;
    _off_0804D0F6 = 0x00000000u;
    uint32_t _ea_0804D0F6 = _base_0804D0F6 + _off_0804D0F6;
    uint32_t _post_0804D0F6 = _base_0804D0F6 + _off_0804D0F6;
    _cyc_0804D0F6 += runtime_mem_cycles(_ea_0804D0F6, 1u, 0u);
    uint32_t _v_0804D0F6;
    _v_0804D0F6 = bus_read_u8(_ea_0804D0F6);
    g_cpu.R[0] = _v_0804D0F6;
    g_cpu.R[15] = 0x0804D0F8u;
    runtime_tick(_cyc_0804D0F6);
    }
L_0804D0F8:
    /* 0804D0F8  0804d0f8 T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x0804D0F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0F8 = 1u;
    _cyc_0804D0F8 = 1u;
    uint32_t _base_0804D0F8 = g_cpu.R[1];
    uint32_t _off_0804D0F8;
    _off_0804D0F8 = 0x00000000u;
    uint32_t _ea_0804D0F8 = _base_0804D0F8 + _off_0804D0F8;
    uint32_t _post_0804D0F8 = _base_0804D0F8 + _off_0804D0F8;
    _cyc_0804D0F8 += runtime_mem_cycles(_ea_0804D0F8, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804D0F8u, _ea_0804D0F8, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0804D0F8, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0804D0FAu;
    runtime_tick(_cyc_0804D0F8);
    }
L_0804D0FA:
    /* 0804D0FA  0804d0fa T adds r3,r3,#0x2 */
    {
    g_cpu.R[15] = 0x0804D0FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0FA = 1u;
    _cyc_0804D0FA = 1u;
    uint32_t _rn_0804D0FA = g_cpu.R[3];
    uint32_t _r_0804D0FA;
    _r_0804D0FA = _rn_0804D0FA + 0x00000002u;
    arm_set_nzcv_add(_rn_0804D0FA, 0x00000002u, _r_0804D0FA);
    g_cpu.R[3] = _r_0804D0FA;
    g_cpu.R[15] = 0x0804D0FCu;
    runtime_tick(_cyc_0804D0FA);
    }
L_0804D0FC:
    /* 0804D0FC  0804d0fc T adds r2,r2,#0x1 */
    {
    g_cpu.R[15] = 0x0804D0FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0FC = 1u;
    _cyc_0804D0FC = 1u;
    uint32_t _rn_0804D0FC = g_cpu.R[2];
    uint32_t _r_0804D0FC;
    _r_0804D0FC = _rn_0804D0FC + 0x00000001u;
    arm_set_nzcv_add(_rn_0804D0FC, 0x00000001u, _r_0804D0FC);
    g_cpu.R[2] = _r_0804D0FC;
    g_cpu.R[15] = 0x0804D0FEu;
    runtime_tick(_cyc_0804D0FC);
    }
L_0804D0FE:
    /* 0804D0FE  0804d0fe T cmps r2,#0x7 */
    {
    g_cpu.R[15] = 0x0804D0FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D0FE = 1u;
    _cyc_0804D0FE = 1u;
    uint32_t _rn_0804D0FE = g_cpu.R[2];
    uint32_t _r_0804D0FE;
    _r_0804D0FE = _rn_0804D0FE - 0x00000007u;
    arm_set_nzcv_sub(_rn_0804D0FE, 0x00000007u, _r_0804D0FE);
    g_cpu.R[15] = 0x0804D100u;
    runtime_tick(_cyc_0804D0FE);
    }
L_0804D100:
    /* 0804D100  0804d100 T ble 0x0804d0e0 */
    {
    g_cpu.R[15] = 0x0804D100u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D100 = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_0804D100 = 3u;
        g_cpu.R[15] = 0x0804D0E0u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x0804D100u, 0x0804D0E0u, 0u, 0u);
        runtime_tick(_cyc_0804D100);
        goto L_0804D0E0;
    }
    g_cpu.R[15] = 0x0804D102u;
    runtime_tick(_cyc_0804D100);
    }
L_0804D102:
    /* 0804D102  0804d102 T ldr r2,[r15,#0x30] */
    {
    g_cpu.R[15] = 0x0804D102u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D102 = 1u;
    _cyc_0804D102 = 2u;
    uint32_t _base_0804D102 = 0x0804D106u & ~3u;
    uint32_t _off_0804D102;
    _off_0804D102 = 0x00000030u;
    uint32_t _ea_0804D102 = _base_0804D102 + _off_0804D102;
    uint32_t _post_0804D102 = _base_0804D102 + _off_0804D102;
    _cyc_0804D102 += runtime_mem_cycles(_ea_0804D102, 4u, 0u);
    uint32_t _v_0804D102;
    { uint32_t _w = bus_read_u32(_ea_0804D102 & ~3u); uint32_t _rot = (_ea_0804D102 & 3u) * 8u; _v_0804D102 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0804D102;
    g_cpu.R[15] = 0x0804D104u;
    runtime_tick(_cyc_0804D102);
    }
L_0804D104:
    /* 0804D104  0804d104 T ldr r1,[r15,#0x30] */
    {
    g_cpu.R[15] = 0x0804D104u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D104 = 1u;
    _cyc_0804D104 = 2u;
    uint32_t _base_0804D104 = 0x0804D108u & ~3u;
    uint32_t _off_0804D104;
    _off_0804D104 = 0x00000030u;
    uint32_t _ea_0804D104 = _base_0804D104 + _off_0804D104;
    uint32_t _post_0804D104 = _base_0804D104 + _off_0804D104;
    _cyc_0804D104 += runtime_mem_cycles(_ea_0804D104, 4u, 0u);
    uint32_t _v_0804D104;
    { uint32_t _w = bus_read_u32(_ea_0804D104 & ~3u); uint32_t _rot = (_ea_0804D104 & 3u) * 8u; _v_0804D104 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0804D104;
    g_cpu.R[15] = 0x0804D106u;
    runtime_tick(_cyc_0804D104);
    }
L_0804D106:
    /* 0804D106  0804d106 T adds r3,r2,r1 */
    {
    g_cpu.R[15] = 0x0804D106u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D106 = 1u;
    _cyc_0804D106 = 1u;
    uint32_t _rm_0804D106 = g_cpu.R[1];
    uint32_t _op2_0804D106;
    uint32_t _co_0804D106;
    _op2_0804D106 = _rm_0804D106;
    _co_0804D106 = cpsr_c();
    uint32_t _rn_0804D106 = g_cpu.R[2];
    uint32_t _r_0804D106;
    _r_0804D106 = _rn_0804D106 + _op2_0804D106;
    arm_set_nzcv_add(_rn_0804D106, _op2_0804D106, _r_0804D106);
    g_cpu.R[3] = _r_0804D106;
    g_cpu.R[15] = 0x0804D108u;
    runtime_tick(_cyc_0804D106);
    }
L_0804D108:
    /* 0804D108  0804d108 T ldrb r0,[r3] */
    {
    g_cpu.R[15] = 0x0804D108u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D108 = 1u;
    _cyc_0804D108 = 2u;
    uint32_t _base_0804D108 = g_cpu.R[3];
    uint32_t _off_0804D108;
    _off_0804D108 = 0x00000000u;
    uint32_t _ea_0804D108 = _base_0804D108 + _off_0804D108;
    uint32_t _post_0804D108 = _base_0804D108 + _off_0804D108;
    _cyc_0804D108 += runtime_mem_cycles(_ea_0804D108, 1u, 0u);
    uint32_t _v_0804D108;
    _v_0804D108 = bus_read_u8(_ea_0804D108);
    g_cpu.R[0] = _v_0804D108;
    g_cpu.R[15] = 0x0804D10Au;
    runtime_tick(_cyc_0804D108);
    }
L_0804D10A:
    /* 0804D10A  0804d10a T movs r1,#0x7f */
    {
    g_cpu.R[15] = 0x0804D10Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D10A = 1u;
    _cyc_0804D10A = 1u;
    uint32_t _r_0804D10A;
    _r_0804D10A = 0x0000007Fu;
    arm_set_nzc_logic(_r_0804D10A, cpsr_c());
    g_cpu.R[1] = _r_0804D10A;
    g_cpu.R[15] = 0x0804D10Cu;
    runtime_tick(_cyc_0804D10A);
    }
L_0804D10C:
    /* 0804D10C  0804d10c T ands r1,r1,r0 */
    {
    g_cpu.R[15] = 0x0804D10Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D10C = 1u;
    _cyc_0804D10C = 1u;
    uint32_t _rm_0804D10C = g_cpu.R[0];
    uint32_t _op2_0804D10C;
    uint32_t _co_0804D10C;
    _op2_0804D10C = _rm_0804D10C;
    _co_0804D10C = cpsr_c();
    uint32_t _rn_0804D10C = g_cpu.R[1];
    uint32_t _r_0804D10C;
    _r_0804D10C = _rn_0804D10C & _op2_0804D10C;
    arm_set_nzc_logic(_r_0804D10C, _co_0804D10C);
    g_cpu.R[1] = _r_0804D10C;
    g_cpu.R[15] = 0x0804D10Eu;
    runtime_tick(_cyc_0804D10C);
    }
L_0804D10E:
    /* 0804D10E  0804d10e T adds r6,r2,#0x0 */
    {
    g_cpu.R[15] = 0x0804D10Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D10E = 1u;
    _cyc_0804D10E = 1u;
    uint32_t _rn_0804D10E = g_cpu.R[2];
    uint32_t _r_0804D10E;
    _r_0804D10E = _rn_0804D10E + 0x00000000u;
    arm_set_nzcv_add(_rn_0804D10E, 0x00000000u, _r_0804D10E);
    g_cpu.R[6] = _r_0804D10E;
    g_cpu.R[15] = 0x0804D110u;
    runtime_tick(_cyc_0804D10E);
    }
L_0804D110:
    /* 0804D110  0804d110 T cmps r1,#0x2 */
    {
    g_cpu.R[15] = 0x0804D110u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D110 = 1u;
    _cyc_0804D110 = 1u;
    uint32_t _rn_0804D110 = g_cpu.R[1];
    uint32_t _r_0804D110;
    _r_0804D110 = _rn_0804D110 - 0x00000002u;
    arm_set_nzcv_sub(_rn_0804D110, 0x00000002u, _r_0804D110);
    g_cpu.R[15] = 0x0804D112u;
    runtime_tick(_cyc_0804D110);
    }
L_0804D112:
    /* 0804D112  0804d112 T bne 0x0804d164 */
    {
    g_cpu.R[15] = 0x0804D112u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D112 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0804D112 = 3u;
        g_cpu.R[15] = 0x0804D164u;
        runtime_tick(_cyc_0804D112);
        gf_tfunc_0804D164();
        return;
    }
    g_cpu.R[15] = 0x0804D114u;
    runtime_tick(_cyc_0804D112);
    }
L_0804D114:
    /* 0804D114  0804d114 T ldr r2,[r15,#0x24] */
    {
    g_cpu.R[15] = 0x0804D114u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D114 = 1u;
    _cyc_0804D114 = 2u;
    uint32_t _base_0804D114 = 0x0804D118u & ~3u;
    uint32_t _off_0804D114;
    _off_0804D114 = 0x00000024u;
    uint32_t _ea_0804D114 = _base_0804D114 + _off_0804D114;
    uint32_t _post_0804D114 = _base_0804D114 + _off_0804D114;
    _cyc_0804D114 += runtime_mem_cycles(_ea_0804D114, 4u, 0u);
    uint32_t _v_0804D114;
    { uint32_t _w = bus_read_u32(_ea_0804D114 & ~3u); uint32_t _rot = (_ea_0804D114 & 3u) * 8u; _v_0804D114 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0804D114;
    g_cpu.R[15] = 0x0804D116u;
    runtime_tick(_cyc_0804D114);
    }
L_0804D116:
    /* 0804D116  0804d116 T adds r0,r6,r2 */
    {
    g_cpu.R[15] = 0x0804D116u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D116 = 1u;
    _cyc_0804D116 = 1u;
    uint32_t _rm_0804D116 = g_cpu.R[2];
    uint32_t _op2_0804D116;
    uint32_t _co_0804D116;
    _op2_0804D116 = _rm_0804D116;
    _co_0804D116 = cpsr_c();
    uint32_t _rn_0804D116 = g_cpu.R[6];
    uint32_t _r_0804D116;
    _r_0804D116 = _rn_0804D116 + _op2_0804D116;
    arm_set_nzcv_add(_rn_0804D116, _op2_0804D116, _r_0804D116);
    g_cpu.R[0] = _r_0804D116;
    g_cpu.R[15] = 0x0804D118u;
    runtime_tick(_cyc_0804D116);
    }
L_0804D118:
    /* 0804D118  0804d118 T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x0804D118u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D118 = 1u;
    _cyc_0804D118 = 2u;
    uint32_t _base_0804D118 = g_cpu.R[0];
    uint32_t _off_0804D118;
    _off_0804D118 = 0x00000000u;
    uint32_t _ea_0804D118 = _base_0804D118 + _off_0804D118;
    uint32_t _post_0804D118 = _base_0804D118 + _off_0804D118;
    _cyc_0804D118 += runtime_mem_cycles(_ea_0804D118, 1u, 0u);
    uint32_t _v_0804D118;
    _v_0804D118 = bus_read_u8(_ea_0804D118);
    g_cpu.R[0] = _v_0804D118;
    g_cpu.R[15] = 0x0804D11Au;
    runtime_tick(_cyc_0804D118);
    }
L_0804D11A:
    /* 0804D11A  0804d11a T cmps r0,#0x1 */
    {
    g_cpu.R[15] = 0x0804D11Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D11A = 1u;
    _cyc_0804D11A = 1u;
    uint32_t _rn_0804D11A = g_cpu.R[0];
    uint32_t _r_0804D11A;
    _r_0804D11A = _rn_0804D11A - 0x00000001u;
    arm_set_nzcv_sub(_rn_0804D11A, 0x00000001u, _r_0804D11A);
    g_cpu.R[15] = 0x0804D11Cu;
    runtime_tick(_cyc_0804D11A);
    }
L_0804D11C:
    /* 0804D11C  0804d11c T beq 0x0804d152 */
    {
    g_cpu.R[15] = 0x0804D11Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D11C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0804D11C = 3u;
        g_cpu.R[15] = 0x0804D152u;
        runtime_tick(_cyc_0804D11C);
        gf_tfunc_0804D152();
        return;
    }
    g_cpu.R[15] = 0x0804D11Eu;
    runtime_tick(_cyc_0804D11C);
    }
L_0804D11E:
    /* 0804D11E  0804d11e T cmps r0,#0x1 */
    {
    g_cpu.R[15] = 0x0804D11Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D11E = 1u;
    _cyc_0804D11E = 1u;
    uint32_t _rn_0804D11E = g_cpu.R[0];
    uint32_t _r_0804D11E;
    _r_0804D11E = _rn_0804D11E - 0x00000001u;
    arm_set_nzcv_sub(_rn_0804D11E, 0x00000001u, _r_0804D11E);
    g_cpu.R[15] = 0x0804D120u;
    runtime_tick(_cyc_0804D11E);
    }
L_0804D120:
    /* 0804D120  0804d120 T bgt 0x0804d140 */
    {
    g_cpu.R[15] = 0x0804D120u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D120 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_0804D120 = 3u;
        g_cpu.R[15] = 0x0804D140u;
        runtime_tick(_cyc_0804D120);
        gf_tfunc_0804D140();
        return;
    }
    g_cpu.R[15] = 0x0804D122u;
    runtime_tick(_cyc_0804D120);
    }
L_0804D122:
    /* 0804D122  0804d122 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x0804D122u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D122 = 1u;
    _cyc_0804D122 = 1u;
    uint32_t _rn_0804D122 = g_cpu.R[0];
    uint32_t _r_0804D122;
    _r_0804D122 = _rn_0804D122 - 0x00000000u;
    arm_set_nzcv_sub(_rn_0804D122, 0x00000000u, _r_0804D122);
    g_cpu.R[15] = 0x0804D124u;
    runtime_tick(_cyc_0804D122);
    }
L_0804D124:
    /* 0804D124  0804d124 T beq 0x0804d146 */
    {
    g_cpu.R[15] = 0x0804D124u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D124 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0804D124 = 3u;
        g_cpu.R[15] = 0x0804D146u;
        runtime_tick(_cyc_0804D124);
        gf_tfunc_0804D146();
        return;
    }
    g_cpu.R[15] = 0x0804D126u;
    runtime_tick(_cyc_0804D124);
    }
L_0804D126:
    /* 0804D126  0804d126 T b 0x0804d1ca */
    {
    g_cpu.R[15] = 0x0804D126u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D126 = 1u;
    _cyc_0804D126 = 3u;
    g_cpu.R[15] = 0x0804D1CAu;
    runtime_tick(_cyc_0804D126);
    gf_tfunc_0804D1CA();
    return;
    g_cpu.R[15] = 0x0804D128u;
    runtime_tick(_cyc_0804D126);
    }
    /* fall-through to 0x0804D128 */
    g_cpu.R[15] = 0x0804D128u;
    runtime_dispatch(0x0804D128u);
    return;
}

/* 0x0804D314  mode=thumb  end=0x0804D32C  branches=6 */
void gf_race_0804d314(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0804D316u: goto L_0804D316;
        case 0x0804D318u: goto L_0804D318;
        case 0x0804D31Au: goto L_0804D31A;
        case 0x0804D31Cu: goto L_0804D31C;
        case 0x0804D31Eu: goto L_0804D31E;
        case 0x0804D320u: goto L_0804D320;
        case 0x0804D322u: goto L_0804D322;
        case 0x0804D324u: goto L_0804D324;
        case 0x0804D326u: goto L_0804D326;
        case 0x0804D328u: goto L_0804D328;
        case 0x0804D32Au: goto L_0804D32A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0804D314u);
    /* 0804D314  0804d314 T ldr r7,[r15,#0x3c] */
    {
    g_cpu.R[15] = 0x0804D314u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D314 = 1u;
    _cyc_0804D314 = 2u;
    uint32_t _base_0804D314 = 0x0804D318u & ~3u;
    uint32_t _off_0804D314;
    _off_0804D314 = 0x0000003Cu;
    uint32_t _ea_0804D314 = _base_0804D314 + _off_0804D314;
    uint32_t _post_0804D314 = _base_0804D314 + _off_0804D314;
    _cyc_0804D314 += runtime_mem_cycles(_ea_0804D314, 4u, 0u);
    uint32_t _v_0804D314;
    { uint32_t _w = bus_read_u32(_ea_0804D314 & ~3u); uint32_t _rot = (_ea_0804D314 & 3u) * 8u; _v_0804D314 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[7] = _v_0804D314;
    g_cpu.R[15] = 0x0804D316u;
    runtime_tick(_cyc_0804D314);
    }
L_0804D316:
    /* 0804D316  0804d316 T adds r2,r4,r7 */
    {
    g_cpu.R[15] = 0x0804D316u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D316 = 1u;
    _cyc_0804D316 = 1u;
    uint32_t _rm_0804D316 = g_cpu.R[7];
    uint32_t _op2_0804D316;
    uint32_t _co_0804D316;
    _op2_0804D316 = _rm_0804D316;
    _co_0804D316 = cpsr_c();
    uint32_t _rn_0804D316 = g_cpu.R[4];
    uint32_t _r_0804D316;
    _r_0804D316 = _rn_0804D316 + _op2_0804D316;
    arm_set_nzcv_add(_rn_0804D316, _op2_0804D316, _r_0804D316);
    g_cpu.R[2] = _r_0804D316;
    g_cpu.R[15] = 0x0804D318u;
    runtime_tick(_cyc_0804D316);
    }
L_0804D318:
    /* 0804D318  0804d318 T ldrb r1,[r2] */
    {
    g_cpu.R[15] = 0x0804D318u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D318 = 1u;
    _cyc_0804D318 = 2u;
    uint32_t _base_0804D318 = g_cpu.R[2];
    uint32_t _off_0804D318;
    _off_0804D318 = 0x00000000u;
    uint32_t _ea_0804D318 = _base_0804D318 + _off_0804D318;
    uint32_t _post_0804D318 = _base_0804D318 + _off_0804D318;
    _cyc_0804D318 += runtime_mem_cycles(_ea_0804D318, 1u, 0u);
    uint32_t _v_0804D318;
    _v_0804D318 = bus_read_u8(_ea_0804D318);
    g_cpu.R[1] = _v_0804D318;
    g_cpu.R[15] = 0x0804D31Au;
    runtime_tick(_cyc_0804D318);
    }
L_0804D31A:
    /* 0804D31A  0804d31a T movs r0,#0x3 */
    {
    g_cpu.R[15] = 0x0804D31Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D31A = 1u;
    _cyc_0804D31A = 1u;
    uint32_t _r_0804D31A;
    _r_0804D31A = 0x00000003u;
    arm_set_nzc_logic(_r_0804D31A, cpsr_c());
    g_cpu.R[0] = _r_0804D31A;
    g_cpu.R[15] = 0x0804D31Cu;
    runtime_tick(_cyc_0804D31A);
    }
L_0804D31C:
    /* 0804D31C  0804d31c T rsbs r0,r0,#0x0 */
    {
    g_cpu.R[15] = 0x0804D31Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D31C = 1u;
    _cyc_0804D31C = 1u;
    uint32_t _rn_0804D31C = g_cpu.R[0];
    uint32_t _r_0804D31C;
    _r_0804D31C = 0x00000000u - _rn_0804D31C;
    arm_set_nzcv_sub(0x00000000u, _rn_0804D31C, _r_0804D31C);
    g_cpu.R[0] = _r_0804D31C;
    g_cpu.R[15] = 0x0804D31Eu;
    runtime_tick(_cyc_0804D31C);
    }
L_0804D31E:
    /* 0804D31E  0804d31e T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x0804D31Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D31E = 1u;
    _cyc_0804D31E = 1u;
    uint32_t _rm_0804D31E = g_cpu.R[1];
    uint32_t _op2_0804D31E;
    uint32_t _co_0804D31E;
    _op2_0804D31E = _rm_0804D31E;
    _co_0804D31E = cpsr_c();
    uint32_t _rn_0804D31E = g_cpu.R[0];
    uint32_t _r_0804D31E;
    _r_0804D31E = _rn_0804D31E & _op2_0804D31E;
    arm_set_nzc_logic(_r_0804D31E, _co_0804D31E);
    g_cpu.R[0] = _r_0804D31E;
    g_cpu.R[15] = 0x0804D320u;
    runtime_tick(_cyc_0804D31E);
    }
L_0804D320:
    /* 0804D320  0804d320 T strb r0,[r2] */
    {
    g_cpu.R[15] = 0x0804D320u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D320 = 1u;
    _cyc_0804D320 = 1u;
    uint32_t _base_0804D320 = g_cpu.R[2];
    uint32_t _off_0804D320;
    _off_0804D320 = 0x00000000u;
    uint32_t _ea_0804D320 = _base_0804D320 + _off_0804D320;
    uint32_t _post_0804D320 = _base_0804D320 + _off_0804D320;
    _cyc_0804D320 += runtime_mem_cycles(_ea_0804D320, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804D320u, _ea_0804D320, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0804D320, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0804D322u;
    runtime_tick(_cyc_0804D320);
    }
L_0804D322:
    /* 0804D322  0804d322 T ldr r0,[r15,#0x34] */
    {
    g_cpu.R[15] = 0x0804D322u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D322 = 1u;
    _cyc_0804D322 = 2u;
    uint32_t _base_0804D322 = 0x0804D326u & ~3u;
    uint32_t _off_0804D322;
    _off_0804D322 = 0x00000034u;
    uint32_t _ea_0804D322 = _base_0804D322 + _off_0804D322;
    uint32_t _post_0804D322 = _base_0804D322 + _off_0804D322;
    _cyc_0804D322 += runtime_mem_cycles(_ea_0804D322, 4u, 0u);
    uint32_t _v_0804D322;
    { uint32_t _w = bus_read_u32(_ea_0804D322 & ~3u); uint32_t _rot = (_ea_0804D322 & 3u) * 8u; _v_0804D322 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0804D322;
    g_cpu.R[15] = 0x0804D324u;
    runtime_tick(_cyc_0804D322);
    }
L_0804D324:
    /* 0804D324  0804d324 T mov r1,r10 */
    {
    g_cpu.R[15] = 0x0804D324u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D324 = 1u;
    _cyc_0804D324 = 1u;
    uint32_t _rm_0804D324 = g_cpu.R[10];
    uint32_t _op2_0804D324;
    uint32_t _co_0804D324;
    _op2_0804D324 = _rm_0804D324;
    _co_0804D324 = cpsr_c();
    uint32_t _r_0804D324;
    _r_0804D324 = _op2_0804D324;
    g_cpu.R[1] = _r_0804D324;
    g_cpu.R[15] = 0x0804D326u;
    runtime_tick(_cyc_0804D324);
    }
L_0804D326:
    /* 0804D326  0804d326 T str r1,[r0] */
    {
    g_cpu.R[15] = 0x0804D326u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D326 = 1u;
    _cyc_0804D326 = 1u;
    uint32_t _base_0804D326 = g_cpu.R[0];
    uint32_t _off_0804D326;
    _off_0804D326 = 0x00000000u;
    uint32_t _ea_0804D326 = _base_0804D326 + _off_0804D326;
    uint32_t _post_0804D326 = _base_0804D326 + _off_0804D326;
    _cyc_0804D326 += runtime_mem_cycles(_ea_0804D326, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0804D326u, _ea_0804D326 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_ea_0804D326 & ~3u, g_cpu.R[1]);
    g_cpu.R[15] = 0x0804D328u;
    runtime_tick(_cyc_0804D326);
    }
L_0804D328:
    /* 0804D328  0804d328 T bl.hi 0x0803832c */
    {
    g_cpu.R[15] = 0x0804D328u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D328 = 1u;
    _cyc_0804D328 = 1u;
    g_cpu.R[14] = 0x0803832Cu;
    g_cpu.R[15] = 0x0804D32Au;
    runtime_tick(_cyc_0804D328);
    }
L_0804D32A:
    /* 0804D32A  0804d32a T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x0804D32Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804D32A = 1u;
    _cyc_0804D32A = 3u;
    uint32_t _blt_0804D32A = (g_cpu.R[14] + 0x000003D8u) & ~1u;
    g_cpu.R[14] = 0x0804D32Du;
    g_cpu.R[15] = _blt_0804D32A;
    runtime_call_push_return(0x0804D32Cu);
    runtime_tick(_cyc_0804D32A);
    _cyc_0804D32A = 0u;
    runtime_dispatch(_blt_0804D32A);
    if (g_cpu.R[15] != 0x0804D32Cu) { runtime_call_cancel_return(0x0804D32Cu); return; }
    g_cpu.R[15] = 0x0804D32Cu;
    runtime_tick(_cyc_0804D32A);
    }
    /* fall-through to 0x0804D32C */
    g_cpu.R[15] = 0x0804D32Cu;
    runtime_dispatch(0x0804D32Cu);
    return;
}

/* 0x0804F31E  mode=thumb  end=0x0804F32A  branches=6 */
void gf_race_hud_0804f31e(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0804F320u: goto L_0804F320;
        case 0x0804F322u: goto L_0804F322;
        case 0x0804F324u: goto L_0804F324;
        case 0x0804F326u: goto L_0804F326;
        case 0x0804F328u: goto L_0804F328;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0804F31Eu);
    /* 0804F31E  0804f31e T movs r0,r0,lsl #16 */
    {
    g_cpu.R[15] = 0x0804F31Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804F31E = 1u;
    _cyc_0804F31E = 1u;
    uint32_t _rm_0804F31E = g_cpu.R[0];
    uint32_t _op2_0804F31E;
    uint32_t _co_0804F31E;
    _op2_0804F31E = _rm_0804F31E << 16;
    _co_0804F31E = (_rm_0804F31E >> 16) & 1u;
    uint32_t _r_0804F31E;
    _r_0804F31E = _op2_0804F31E;
    arm_set_nzc_logic(_r_0804F31E, _co_0804F31E);
    g_cpu.R[0] = _r_0804F31E;
    g_cpu.R[15] = 0x0804F320u;
    runtime_tick(_cyc_0804F31E);
    }
L_0804F320:
    /* 0804F320  0804f320 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x0804F320u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804F320 = 1u;
    _cyc_0804F320 = 1u;
    uint32_t _rn_0804F320 = g_cpu.R[0];
    uint32_t _r_0804F320;
    _r_0804F320 = _rn_0804F320 - 0x00000000u;
    arm_set_nzcv_sub(_rn_0804F320, 0x00000000u, _r_0804F320);
    g_cpu.R[15] = 0x0804F322u;
    runtime_tick(_cyc_0804F320);
    }
L_0804F322:
    /* 0804F322  0804f322 T beq 0x0804f34a */
    {
    g_cpu.R[15] = 0x0804F322u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804F322 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_0804F322 = 3u;
        g_cpu.R[15] = 0x0804F34Au;
        runtime_tick(_cyc_0804F322);
        gf_tfunc_0804F34A();
        return;
    }
    g_cpu.R[15] = 0x0804F324u;
    runtime_tick(_cyc_0804F322);
    }
L_0804F324:
    /* 0804F324  0804f324 T movs r0,#0x67 */
    {
    g_cpu.R[15] = 0x0804F324u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804F324 = 1u;
    _cyc_0804F324 = 1u;
    uint32_t _r_0804F324;
    _r_0804F324 = 0x00000067u;
    arm_set_nzc_logic(_r_0804F324, cpsr_c());
    g_cpu.R[0] = _r_0804F324;
    g_cpu.R[15] = 0x0804F326u;
    runtime_tick(_cyc_0804F324);
    }
L_0804F326:
    /* 0804F326  0804f326 T bl.hi 0x0803732a */
    {
    g_cpu.R[15] = 0x0804F326u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804F326 = 1u;
    _cyc_0804F326 = 1u;
    g_cpu.R[14] = 0x0803732Au;
    g_cpu.R[15] = 0x0804F328u;
    runtime_tick(_cyc_0804F326);
    }
L_0804F328:
    /* 0804F328  0804f328 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x0804F328u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0804F328 = 1u;
    _cyc_0804F328 = 3u;
    uint32_t _blt_0804F328 = (g_cpu.R[14] + 0x00000E02u) & ~1u;
    g_cpu.R[14] = 0x0804F32Bu;
    g_cpu.R[15] = _blt_0804F328;
    runtime_call_push_return(0x0804F32Au);
    runtime_tick(_cyc_0804F328);
    _cyc_0804F328 = 0u;
    runtime_dispatch(_blt_0804F328);
    if (g_cpu.R[15] != 0x0804F32Au) { runtime_call_cancel_return(0x0804F32Au); return; }
    g_cpu.R[15] = 0x0804F32Au;
    runtime_tick(_cyc_0804F328);
    }
    /* fall-through to 0x0804F32A */
    g_cpu.R[15] = 0x0804F32Au;
    runtime_dispatch(0x0804F32Au);
    return;
}
