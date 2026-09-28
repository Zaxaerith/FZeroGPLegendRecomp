// AUTO-GENERATED from gba_recompile cartridge output. DO NOT EDIT.
// Module: rom_08050000_08057fff.cpp; functions: 73.
#include "runtime_arm.h"
#include "cartridge_functions.h"

/* 0x08050050  mode=thumb  end=0x08050070  branches=21 */
void gf_tfunc_08050050(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050052u: goto L_08050052;
        case 0x08050054u: goto L_08050054;
        case 0x08050056u: goto L_08050056;
        case 0x08050058u: goto L_08050058;
        case 0x0805005Au: goto L_0805005A;
        case 0x0805005Cu: goto L_0805005C;
        case 0x0805005Eu: goto L_0805005E;
        case 0x08050060u: goto L_08050060;
        case 0x08050062u: goto L_08050062;
        case 0x08050064u: goto L_08050064;
        case 0x08050066u: goto L_08050066;
        case 0x08050068u: goto L_08050068;
        case 0x0805006Au: goto L_0805006A;
        case 0x0805006Cu: goto L_0805006C;
        case 0x0805006Eu: goto L_0805006E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050050u);
    /* 08050050  08050050 T mov r0,r8 */
    {
    g_cpu.R[15] = 0x08050050u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050050 = 1u;
    _cyc_08050050 = 1u;
    uint32_t _rm_08050050 = g_cpu.R[8];
    uint32_t _op2_08050050;
    uint32_t _co_08050050;
    _op2_08050050 = _rm_08050050;
    _co_08050050 = cpsr_c();
    uint32_t _r_08050050;
    _r_08050050 = _op2_08050050;
    g_cpu.R[0] = _r_08050050;
    g_cpu.R[15] = 0x08050052u;
    runtime_tick(_cyc_08050050);
    }
L_08050052:
    /* 08050052  08050052 T ldrh r1,[r0,#0x2] */
    {
    g_cpu.R[15] = 0x08050052u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050052 = 1u;
    _cyc_08050052 = 2u;
    uint32_t _base_08050052 = g_cpu.R[0];
    uint32_t _off_08050052;
    _off_08050052 = 0x00000002u;
    uint32_t _ea_08050052 = _base_08050052 + _off_08050052;
    uint32_t _post_08050052 = _base_08050052 + _off_08050052;
    _cyc_08050052 += runtime_mem_cycles(_ea_08050052, 2u, 0u);
    uint32_t _v_08050052;
    { uint32_t _h = bus_read_u16(_ea_08050052 & ~1u); if (_ea_08050052 & 1u) _v_08050052 = ((_h >> 8) | (_h << 24)); else _v_08050052 = _h; }
    g_cpu.R[1] = _v_08050052;
    g_cpu.R[15] = 0x08050054u;
    runtime_tick(_cyc_08050052);
    }
L_08050054:
    /* 08050054  08050054 T mov r0,r9 */
    {
    g_cpu.R[15] = 0x08050054u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050054 = 1u;
    _cyc_08050054 = 1u;
    uint32_t _rm_08050054 = g_cpu.R[9];
    uint32_t _op2_08050054;
    uint32_t _co_08050054;
    _op2_08050054 = _rm_08050054;
    _co_08050054 = cpsr_c();
    uint32_t _r_08050054;
    _r_08050054 = _op2_08050054;
    g_cpu.R[0] = _r_08050054;
    g_cpu.R[15] = 0x08050056u;
    runtime_tick(_cyc_08050054);
    }
L_08050056:
    /* 08050056  08050056 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08050056u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050056 = 1u;
    _cyc_08050056 = 1u;
    uint32_t _rm_08050056 = g_cpu.R[1];
    uint32_t _op2_08050056;
    uint32_t _co_08050056;
    _op2_08050056 = _rm_08050056;
    _co_08050056 = cpsr_c();
    uint32_t _rn_08050056 = g_cpu.R[0];
    uint32_t _r_08050056;
    _r_08050056 = _rn_08050056 & _op2_08050056;
    arm_set_nzc_logic(_r_08050056, _co_08050056);
    g_cpu.R[0] = _r_08050056;
    g_cpu.R[15] = 0x08050058u;
    runtime_tick(_cyc_08050056);
    }
L_08050058:
    /* 08050058  08050058 T orrs r0,r0,r4 */
    {
    g_cpu.R[15] = 0x08050058u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050058 = 1u;
    _cyc_08050058 = 1u;
    uint32_t _rm_08050058 = g_cpu.R[4];
    uint32_t _op2_08050058;
    uint32_t _co_08050058;
    _op2_08050058 = _rm_08050058;
    _co_08050058 = cpsr_c();
    uint32_t _rn_08050058 = g_cpu.R[0];
    uint32_t _r_08050058;
    _r_08050058 = _rn_08050058 | _op2_08050058;
    arm_set_nzc_logic(_r_08050058, _co_08050058);
    g_cpu.R[0] = _r_08050058;
    g_cpu.R[15] = 0x0805005Au;
    runtime_tick(_cyc_08050058);
    }
L_0805005A:
    /* 0805005A  0805005a T mov r1,r8 */
    {
    g_cpu.R[15] = 0x0805005Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805005A = 1u;
    _cyc_0805005A = 1u;
    uint32_t _rm_0805005A = g_cpu.R[8];
    uint32_t _op2_0805005A;
    uint32_t _co_0805005A;
    _op2_0805005A = _rm_0805005A;
    _co_0805005A = cpsr_c();
    uint32_t _r_0805005A;
    _r_0805005A = _op2_0805005A;
    g_cpu.R[1] = _r_0805005A;
    g_cpu.R[15] = 0x0805005Cu;
    runtime_tick(_cyc_0805005A);
    }
L_0805005C:
    /* 0805005C  0805005c T strh r0,[r1,#0x2] */
    {
    g_cpu.R[15] = 0x0805005Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805005C = 1u;
    _cyc_0805005C = 1u;
    uint32_t _base_0805005C = g_cpu.R[1];
    uint32_t _off_0805005C;
    _off_0805005C = 0x00000002u;
    uint32_t _ea_0805005C = _base_0805005C + _off_0805005C;
    uint32_t _post_0805005C = _base_0805005C + _off_0805005C;
    _cyc_0805005C += runtime_mem_cycles(_ea_0805005C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805005Cu, _ea_0805005C & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805005C & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0805005Eu;
    runtime_tick(_cyc_0805005C);
    }
L_0805005E:
    /* 0805005E  0805005e T movs r0,#0x43 */
    {
    g_cpu.R[15] = 0x0805005Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805005E = 1u;
    _cyc_0805005E = 1u;
    uint32_t _r_0805005E;
    _r_0805005E = 0x00000043u;
    arm_set_nzc_logic(_r_0805005E, cpsr_c());
    g_cpu.R[0] = _r_0805005E;
    g_cpu.R[15] = 0x08050060u;
    runtime_tick(_cyc_0805005E);
    }
L_08050060:
    /* 08050060  08050060 T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08050060u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050060 = 1u;
    _cyc_08050060 = 1u;
    uint32_t _base_08050060 = g_cpu.R[1];
    uint32_t _off_08050060;
    _off_08050060 = 0x00000000u;
    uint32_t _ea_08050060 = _base_08050060 + _off_08050060;
    uint32_t _post_08050060 = _base_08050060 + _off_08050060;
    _cyc_08050060 += runtime_mem_cycles(_ea_08050060, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050060u, _ea_08050060, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050060, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050062u;
    runtime_tick(_cyc_08050060);
    }
L_08050062:
    /* 08050062  08050062 T movs r0,#0x4 */
    {
    g_cpu.R[15] = 0x08050062u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050062 = 1u;
    _cyc_08050062 = 1u;
    uint32_t _r_08050062;
    _r_08050062 = 0x00000004u;
    arm_set_nzc_logic(_r_08050062, cpsr_c());
    g_cpu.R[0] = _r_08050062;
    g_cpu.R[15] = 0x08050064u;
    runtime_tick(_cyc_08050062);
    }
L_08050064:
    /* 08050064  08050064 T strb r0,[r1,#0xa] */
    {
    g_cpu.R[15] = 0x08050064u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050064 = 1u;
    _cyc_08050064 = 1u;
    uint32_t _base_08050064 = g_cpu.R[1];
    uint32_t _off_08050064;
    _off_08050064 = 0x0000000Au;
    uint32_t _ea_08050064 = _base_08050064 + _off_08050064;
    uint32_t _post_08050064 = _base_08050064 + _off_08050064;
    _cyc_08050064 += runtime_mem_cycles(_ea_08050064, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050064u, _ea_08050064, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050064, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050066u;
    runtime_tick(_cyc_08050064);
    }
L_08050066:
    /* 08050066  08050066 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x08050066u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050066 = 1u;
    _cyc_08050066 = 1u;
    uint32_t _r_08050066;
    _r_08050066 = 0x00000000u;
    arm_set_nzc_logic(_r_08050066, cpsr_c());
    g_cpu.R[0] = _r_08050066;
    g_cpu.R[15] = 0x08050068u;
    runtime_tick(_cyc_08050066);
    }
L_08050068:
    /* 08050068  08050068 T movs r2,#0x2 */
    {
    g_cpu.R[15] = 0x08050068u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050068 = 1u;
    _cyc_08050068 = 1u;
    uint32_t _r_08050068;
    _r_08050068 = 0x00000002u;
    arm_set_nzc_logic(_r_08050068, cpsr_c());
    g_cpu.R[2] = _r_08050068;
    g_cpu.R[15] = 0x0805006Au;
    runtime_tick(_cyc_08050068);
    }
L_0805006A:
    /* 0805006A  0805006a T movs r3,#0x1 */
    {
    g_cpu.R[15] = 0x0805006Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805006A = 1u;
    _cyc_0805006A = 1u;
    uint32_t _r_0805006A;
    _r_0805006A = 0x00000001u;
    arm_set_nzc_logic(_r_0805006A, cpsr_c());
    g_cpu.R[3] = _r_0805006A;
    g_cpu.R[15] = 0x0805006Cu;
    runtime_tick(_cyc_0805006A);
    }
L_0805006C:
    /* 0805006C  0805006c T bl.hi 0x0803d070 */
    {
    g_cpu.R[15] = 0x0805006Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805006C = 1u;
    _cyc_0805006C = 1u;
    g_cpu.R[14] = 0x0803D070u;
    g_cpu.R[15] = 0x0805006Eu;
    runtime_tick(_cyc_0805006C);
    }
L_0805006E:
    /* 0805006E  0805006e T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x0805006Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805006E = 1u;
    _cyc_0805006E = 3u;
    uint32_t _blt_0805006E = (g_cpu.R[14] + 0x000007DCu) & ~1u;
    g_cpu.R[14] = 0x08050071u;
    g_cpu.R[15] = _blt_0805006E;
    runtime_call_push_return(0x08050070u);
    runtime_tick(_cyc_0805006E);
    _cyc_0805006E = 0u;
    runtime_dispatch(_blt_0805006E);
    if (g_cpu.R[15] != 0x08050070u) { runtime_call_cancel_return(0x08050070u); return; }
    g_cpu.R[15] = 0x08050070u;
    runtime_tick(_cyc_0805006E);
    }
    /* fall-through to 0x08050070 */
    g_cpu.R[15] = 0x08050070u;
    runtime_dispatch(0x08050070u);
    return;
}

/* 0x08050070  mode=thumb  end=0x080500A4  branches=19 */
void gf_tfunc_08050070(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050072u: goto L_08050072;
        case 0x08050074u: goto L_08050074;
        case 0x08050076u: goto L_08050076;
        case 0x08050078u: goto L_08050078;
        case 0x0805007Au: goto L_0805007A;
        case 0x0805007Cu: goto L_0805007C;
        case 0x0805007Eu: goto L_0805007E;
        case 0x08050080u: goto L_08050080;
        case 0x08050082u: goto L_08050082;
        case 0x08050084u: goto L_08050084;
        case 0x08050086u: goto L_08050086;
        case 0x08050088u: goto L_08050088;
        case 0x0805008Au: goto L_0805008A;
        case 0x0805008Cu: goto L_0805008C;
        case 0x0805008Eu: goto L_0805008E;
        case 0x08050090u: goto L_08050090;
        case 0x08050092u: goto L_08050092;
        case 0x08050094u: goto L_08050094;
        case 0x08050096u: goto L_08050096;
        case 0x08050098u: goto L_08050098;
        case 0x0805009Au: goto L_0805009A;
        case 0x0805009Cu: goto L_0805009C;
        case 0x0805009Eu: goto L_0805009E;
        case 0x080500A0u: goto L_080500A0;
        case 0x080500A2u: goto L_080500A2;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050070u);
    /* 08050070  08050070 T mov r2,r8 */
    {
    g_cpu.R[15] = 0x08050070u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050070 = 1u;
    _cyc_08050070 = 1u;
    uint32_t _rm_08050070 = g_cpu.R[8];
    uint32_t _op2_08050070;
    uint32_t _co_08050070;
    _op2_08050070 = _rm_08050070;
    _co_08050070 = cpsr_c();
    uint32_t _r_08050070;
    _r_08050070 = _op2_08050070;
    g_cpu.R[2] = _r_08050070;
    g_cpu.R[15] = 0x08050072u;
    runtime_tick(_cyc_08050070);
    }
L_08050072:
    /* 08050072  08050072 T ldrh r1,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x08050072u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050072 = 1u;
    _cyc_08050072 = 2u;
    uint32_t _base_08050072 = g_cpu.R[2];
    uint32_t _off_08050072;
    _off_08050072 = 0x00000002u;
    uint32_t _ea_08050072 = _base_08050072 + _off_08050072;
    uint32_t _post_08050072 = _base_08050072 + _off_08050072;
    _cyc_08050072 += runtime_mem_cycles(_ea_08050072, 2u, 0u);
    uint32_t _v_08050072;
    { uint32_t _h = bus_read_u16(_ea_08050072 & ~1u); if (_ea_08050072 & 1u) _v_08050072 = ((_h >> 8) | (_h << 24)); else _v_08050072 = _h; }
    g_cpu.R[1] = _v_08050072;
    g_cpu.R[15] = 0x08050074u;
    runtime_tick(_cyc_08050072);
    }
L_08050074:
    /* 08050074  08050074 T mov r0,r9 */
    {
    g_cpu.R[15] = 0x08050074u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050074 = 1u;
    _cyc_08050074 = 1u;
    uint32_t _rm_08050074 = g_cpu.R[9];
    uint32_t _op2_08050074;
    uint32_t _co_08050074;
    _op2_08050074 = _rm_08050074;
    _co_08050074 = cpsr_c();
    uint32_t _r_08050074;
    _r_08050074 = _op2_08050074;
    g_cpu.R[0] = _r_08050074;
    g_cpu.R[15] = 0x08050076u;
    runtime_tick(_cyc_08050074);
    }
L_08050076:
    /* 08050076  08050076 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08050076u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050076 = 1u;
    _cyc_08050076 = 1u;
    uint32_t _rm_08050076 = g_cpu.R[1];
    uint32_t _op2_08050076;
    uint32_t _co_08050076;
    _op2_08050076 = _rm_08050076;
    _co_08050076 = cpsr_c();
    uint32_t _rn_08050076 = g_cpu.R[0];
    uint32_t _r_08050076;
    _r_08050076 = _rn_08050076 & _op2_08050076;
    arm_set_nzc_logic(_r_08050076, _co_08050076);
    g_cpu.R[0] = _r_08050076;
    g_cpu.R[15] = 0x08050078u;
    runtime_tick(_cyc_08050076);
    }
L_08050078:
    /* 08050078  08050078 T movs r1,#0x4e */
    {
    g_cpu.R[15] = 0x08050078u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050078 = 1u;
    _cyc_08050078 = 1u;
    uint32_t _r_08050078;
    _r_08050078 = 0x0000004Eu;
    arm_set_nzc_logic(_r_08050078, cpsr_c());
    g_cpu.R[1] = _r_08050078;
    g_cpu.R[15] = 0x0805007Au;
    runtime_tick(_cyc_08050078);
    }
L_0805007A:
    /* 0805007A  0805007a T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x0805007Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805007A = 1u;
    _cyc_0805007A = 1u;
    uint32_t _rm_0805007A = g_cpu.R[1];
    uint32_t _op2_0805007A;
    uint32_t _co_0805007A;
    _op2_0805007A = _rm_0805007A;
    _co_0805007A = cpsr_c();
    uint32_t _rn_0805007A = g_cpu.R[0];
    uint32_t _r_0805007A;
    _r_0805007A = _rn_0805007A | _op2_0805007A;
    arm_set_nzc_logic(_r_0805007A, _co_0805007A);
    g_cpu.R[0] = _r_0805007A;
    g_cpu.R[15] = 0x0805007Cu;
    runtime_tick(_cyc_0805007A);
    }
L_0805007C:
    /* 0805007C  0805007c T strh r0,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x0805007Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805007C = 1u;
    _cyc_0805007C = 1u;
    uint32_t _base_0805007C = g_cpu.R[2];
    uint32_t _off_0805007C;
    _off_0805007C = 0x00000002u;
    uint32_t _ea_0805007C = _base_0805007C + _off_0805007C;
    uint32_t _post_0805007C = _base_0805007C + _off_0805007C;
    _cyc_0805007C += runtime_mem_cycles(_ea_0805007C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805007Cu, _ea_0805007C & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805007C & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0805007Eu;
    runtime_tick(_cyc_0805007C);
    }
L_0805007E:
    /* 0805007E  0805007e T strb r5,[r2] */
    {
    g_cpu.R[15] = 0x0805007Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805007E = 1u;
    _cyc_0805007E = 1u;
    uint32_t _base_0805007E = g_cpu.R[2];
    uint32_t _off_0805007E;
    _off_0805007E = 0x00000000u;
    uint32_t _ea_0805007E = _base_0805007E + _off_0805007E;
    uint32_t _post_0805007E = _base_0805007E + _off_0805007E;
    _cyc_0805007E += runtime_mem_cycles(_ea_0805007E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805007Eu, _ea_0805007E, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_0805007E, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[15] = 0x08050080u;
    runtime_tick(_cyc_0805007E);
    }
L_08050080:
    /* 08050080  08050080 T ldr r6,[r15,#0x150] */
    {
    g_cpu.R[15] = 0x08050080u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050080 = 1u;
    _cyc_08050080 = 2u;
    uint32_t _base_08050080 = 0x08050084u & ~3u;
    uint32_t _off_08050080;
    _off_08050080 = 0x00000150u;
    uint32_t _ea_08050080 = _base_08050080 + _off_08050080;
    uint32_t _post_08050080 = _base_08050080 + _off_08050080;
    _cyc_08050080 += runtime_mem_cycles(_ea_08050080, 4u, 0u);
    uint32_t _v_08050080;
    { uint32_t _w = bus_read_u32(_ea_08050080 & ~3u); uint32_t _rot = (_ea_08050080 & 3u) * 8u; _v_08050080 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_08050080;
    g_cpu.R[15] = 0x08050082u;
    runtime_tick(_cyc_08050080);
    }
L_08050082:
    /* 08050082  08050082 T ldrb r0,[r6] */
    {
    g_cpu.R[15] = 0x08050082u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050082 = 1u;
    _cyc_08050082 = 2u;
    uint32_t _base_08050082 = g_cpu.R[6];
    uint32_t _off_08050082;
    _off_08050082 = 0x00000000u;
    uint32_t _ea_08050082 = _base_08050082 + _off_08050082;
    uint32_t _post_08050082 = _base_08050082 + _off_08050082;
    _cyc_08050082 += runtime_mem_cycles(_ea_08050082, 1u, 0u);
    uint32_t _v_08050082;
    _v_08050082 = bus_read_u8(_ea_08050082);
    g_cpu.R[0] = _v_08050082;
    g_cpu.R[15] = 0x08050084u;
    runtime_tick(_cyc_08050082);
    }
L_08050084:
    /* 08050084  08050084 T movs r4,#0x1 */
    {
    g_cpu.R[15] = 0x08050084u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050084 = 1u;
    _cyc_08050084 = 1u;
    uint32_t _r_08050084;
    _r_08050084 = 0x00000001u;
    arm_set_nzc_logic(_r_08050084, cpsr_c());
    g_cpu.R[4] = _r_08050084;
    g_cpu.R[15] = 0x08050086u;
    runtime_tick(_cyc_08050084);
    }
L_08050086:
    /* 08050086  08050086 T adds r1,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050086u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050086 = 1u;
    _cyc_08050086 = 1u;
    uint32_t _rn_08050086 = g_cpu.R[4];
    uint32_t _r_08050086;
    _r_08050086 = _rn_08050086 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050086, 0x00000000u, _r_08050086);
    g_cpu.R[1] = _r_08050086;
    g_cpu.R[15] = 0x08050088u;
    runtime_tick(_cyc_08050086);
    }
L_08050088:
    /* 08050088  08050088 T ands r1,r1,r0 */
    {
    g_cpu.R[15] = 0x08050088u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050088 = 1u;
    _cyc_08050088 = 1u;
    uint32_t _rm_08050088 = g_cpu.R[0];
    uint32_t _op2_08050088;
    uint32_t _co_08050088;
    _op2_08050088 = _rm_08050088;
    _co_08050088 = cpsr_c();
    uint32_t _rn_08050088 = g_cpu.R[1];
    uint32_t _r_08050088;
    _r_08050088 = _rn_08050088 & _op2_08050088;
    arm_set_nzc_logic(_r_08050088, _co_08050088);
    g_cpu.R[1] = _r_08050088;
    g_cpu.R[15] = 0x0805008Au;
    runtime_tick(_cyc_08050088);
    }
L_0805008A:
    /* 0805008A  0805008a T adds r1,r1,#0x2 */
    {
    g_cpu.R[15] = 0x0805008Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805008A = 1u;
    _cyc_0805008A = 1u;
    uint32_t _rn_0805008A = g_cpu.R[1];
    uint32_t _r_0805008A;
    _r_0805008A = _rn_0805008A + 0x00000002u;
    arm_set_nzcv_add(_rn_0805008A, 0x00000002u, _r_0805008A);
    g_cpu.R[1] = _r_0805008A;
    g_cpu.R[15] = 0x0805008Cu;
    runtime_tick(_cyc_0805008A);
    }
L_0805008C:
    /* 0805008C  0805008c T movs r1,r1,lsl #4 */
    {
    g_cpu.R[15] = 0x0805008Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805008C = 1u;
    _cyc_0805008C = 1u;
    uint32_t _rm_0805008C = g_cpu.R[1];
    uint32_t _op2_0805008C;
    uint32_t _co_0805008C;
    _op2_0805008C = _rm_0805008C << 4;
    _co_0805008C = (_rm_0805008C >> 28) & 1u;
    uint32_t _r_0805008C;
    _r_0805008C = _op2_0805008C;
    arm_set_nzc_logic(_r_0805008C, _co_0805008C);
    g_cpu.R[1] = _r_0805008C;
    g_cpu.R[15] = 0x0805008Eu;
    runtime_tick(_cyc_0805008C);
    }
L_0805008E:
    /* 0805008E  0805008e T ldrb r2,[r2,#0x5] */
    {
    g_cpu.R[15] = 0x0805008Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805008E = 1u;
    _cyc_0805008E = 2u;
    uint32_t _base_0805008E = g_cpu.R[2];
    uint32_t _off_0805008E;
    _off_0805008E = 0x00000005u;
    uint32_t _ea_0805008E = _base_0805008E + _off_0805008E;
    uint32_t _post_0805008E = _base_0805008E + _off_0805008E;
    _cyc_0805008E += runtime_mem_cycles(_ea_0805008E, 1u, 0u);
    uint32_t _v_0805008E;
    _v_0805008E = bus_read_u8(_ea_0805008E);
    g_cpu.R[2] = _v_0805008E;
    g_cpu.R[15] = 0x08050090u;
    runtime_tick(_cyc_0805008E);
    }
L_08050090:
    /* 08050090  08050090 T mov r0,r10 */
    {
    g_cpu.R[15] = 0x08050090u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050090 = 1u;
    _cyc_08050090 = 1u;
    uint32_t _rm_08050090 = g_cpu.R[10];
    uint32_t _op2_08050090;
    uint32_t _co_08050090;
    _op2_08050090 = _rm_08050090;
    _co_08050090 = cpsr_c();
    uint32_t _r_08050090;
    _r_08050090 = _op2_08050090;
    g_cpu.R[0] = _r_08050090;
    g_cpu.R[15] = 0x08050092u;
    runtime_tick(_cyc_08050090);
    }
L_08050092:
    /* 08050092  08050092 T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08050092u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050092 = 1u;
    _cyc_08050092 = 1u;
    uint32_t _rm_08050092 = g_cpu.R[2];
    uint32_t _op2_08050092;
    uint32_t _co_08050092;
    _op2_08050092 = _rm_08050092;
    _co_08050092 = cpsr_c();
    uint32_t _rn_08050092 = g_cpu.R[0];
    uint32_t _r_08050092;
    _r_08050092 = _rn_08050092 & _op2_08050092;
    arm_set_nzc_logic(_r_08050092, _co_08050092);
    g_cpu.R[0] = _r_08050092;
    g_cpu.R[15] = 0x08050094u;
    runtime_tick(_cyc_08050092);
    }
L_08050094:
    /* 08050094  08050094 T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08050094u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050094 = 1u;
    _cyc_08050094 = 1u;
    uint32_t _rm_08050094 = g_cpu.R[1];
    uint32_t _op2_08050094;
    uint32_t _co_08050094;
    _op2_08050094 = _rm_08050094;
    _co_08050094 = cpsr_c();
    uint32_t _rn_08050094 = g_cpu.R[0];
    uint32_t _r_08050094;
    _r_08050094 = _rn_08050094 | _op2_08050094;
    arm_set_nzc_logic(_r_08050094, _co_08050094);
    g_cpu.R[0] = _r_08050094;
    g_cpu.R[15] = 0x08050096u;
    runtime_tick(_cyc_08050094);
    }
L_08050096:
    /* 08050096  08050096 T mov r1,r8 */
    {
    g_cpu.R[15] = 0x08050096u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050096 = 1u;
    _cyc_08050096 = 1u;
    uint32_t _rm_08050096 = g_cpu.R[8];
    uint32_t _op2_08050096;
    uint32_t _co_08050096;
    _op2_08050096 = _rm_08050096;
    _co_08050096 = cpsr_c();
    uint32_t _r_08050096;
    _r_08050096 = _op2_08050096;
    g_cpu.R[1] = _r_08050096;
    g_cpu.R[15] = 0x08050098u;
    runtime_tick(_cyc_08050096);
    }
L_08050098:
    /* 08050098  08050098 T strb r0,[r1,#0x5] */
    {
    g_cpu.R[15] = 0x08050098u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050098 = 1u;
    _cyc_08050098 = 1u;
    uint32_t _base_08050098 = g_cpu.R[1];
    uint32_t _off_08050098;
    _off_08050098 = 0x00000005u;
    uint32_t _ea_08050098 = _base_08050098 + _off_08050098;
    uint32_t _post_08050098 = _base_08050098 + _off_08050098;
    _cyc_08050098 += runtime_mem_cycles(_ea_08050098, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050098u, _ea_08050098, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050098, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0805009Au;
    runtime_tick(_cyc_08050098);
    }
L_0805009A:
    /* 0805009A  0805009a T movs r0,#0x6 */
    {
    g_cpu.R[15] = 0x0805009Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805009A = 1u;
    _cyc_0805009A = 1u;
    uint32_t _r_0805009A;
    _r_0805009A = 0x00000006u;
    arm_set_nzc_logic(_r_0805009A, cpsr_c());
    g_cpu.R[0] = _r_0805009A;
    g_cpu.R[15] = 0x0805009Cu;
    runtime_tick(_cyc_0805009A);
    }
L_0805009C:
    /* 0805009C  0805009c T strb r0,[r1,#0xa] */
    {
    g_cpu.R[15] = 0x0805009Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805009C = 1u;
    _cyc_0805009C = 1u;
    uint32_t _base_0805009C = g_cpu.R[1];
    uint32_t _off_0805009C;
    _off_0805009C = 0x0000000Au;
    uint32_t _ea_0805009C = _base_0805009C + _off_0805009C;
    uint32_t _post_0805009C = _base_0805009C + _off_0805009C;
    _cyc_0805009C += runtime_mem_cycles(_ea_0805009C, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805009Cu, _ea_0805009C, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0805009C, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0805009Eu;
    runtime_tick(_cyc_0805009C);
    }
L_0805009E:
    /* 0805009E  0805009e T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x0805009Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805009E = 1u;
    _cyc_0805009E = 1u;
    uint32_t _r_0805009E;
    _r_0805009E = 0x00000000u;
    arm_set_nzc_logic(_r_0805009E, cpsr_c());
    g_cpu.R[0] = _r_0805009E;
    g_cpu.R[15] = 0x080500A0u;
    runtime_tick(_cyc_0805009E);
    }
L_080500A0:
    /* 080500A0  080500a0 T bl.hi 0x0803d0a4 */
    {
    g_cpu.R[15] = 0x080500A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500A0 = 1u;
    _cyc_080500A0 = 1u;
    g_cpu.R[14] = 0x0803D0A4u;
    g_cpu.R[15] = 0x080500A2u;
    runtime_tick(_cyc_080500A0);
    }
L_080500A2:
    /* 080500A2  080500a2 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x080500A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500A2 = 1u;
    _cyc_080500A2 = 3u;
    uint32_t _blt_080500A2 = (g_cpu.R[14] + 0x00000710u) & ~1u;
    g_cpu.R[14] = 0x080500A5u;
    g_cpu.R[15] = _blt_080500A2;
    runtime_call_push_return(0x080500A4u);
    runtime_tick(_cyc_080500A2);
    _cyc_080500A2 = 0u;
    runtime_dispatch(_blt_080500A2);
    if (g_cpu.R[15] != 0x080500A4u) { runtime_call_cancel_return(0x080500A4u); return; }
    g_cpu.R[15] = 0x080500A4u;
    runtime_tick(_cyc_080500A2);
    }
    /* fall-through to 0x080500A4 */
    g_cpu.R[15] = 0x080500A4u;
    runtime_dispatch(0x080500A4u);
    return;
}

/* 0x080500FC  mode=thumb  end=0x0805010C  branches=14 */
void gf_tfunc_080500FC(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080500FEu: goto L_080500FE;
        case 0x08050100u: goto L_08050100;
        case 0x08050102u: goto L_08050102;
        case 0x08050104u: goto L_08050104;
        case 0x08050106u: goto L_08050106;
        case 0x08050108u: goto L_08050108;
        case 0x0805010Au: goto L_0805010A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080500FCu);
    /* 080500FC  080500fc T mov r2,r8 */
    {
    g_cpu.R[15] = 0x080500FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500FC = 1u;
    _cyc_080500FC = 1u;
    uint32_t _rm_080500FC = g_cpu.R[8];
    uint32_t _op2_080500FC;
    uint32_t _co_080500FC;
    _op2_080500FC = _rm_080500FC;
    _co_080500FC = cpsr_c();
    uint32_t _r_080500FC;
    _r_080500FC = _op2_080500FC;
    g_cpu.R[2] = _r_080500FC;
    g_cpu.R[15] = 0x080500FEu;
    runtime_tick(_cyc_080500FC);
    }
L_080500FE:
    /* 080500FE  080500fe T strb r5,[r2,#0xa] */
    {
    g_cpu.R[15] = 0x080500FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500FE = 1u;
    _cyc_080500FE = 1u;
    uint32_t _base_080500FE = g_cpu.R[2];
    uint32_t _off_080500FE;
    _off_080500FE = 0x0000000Au;
    uint32_t _ea_080500FE = _base_080500FE + _off_080500FE;
    uint32_t _post_080500FE = _base_080500FE + _off_080500FE;
    _cyc_080500FE += runtime_mem_cycles(_ea_080500FE, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080500FEu, _ea_080500FE, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_080500FE, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[15] = 0x08050100u;
    runtime_tick(_cyc_080500FE);
    }
L_08050100:
    /* 08050100  08050100 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x08050100u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050100 = 1u;
    _cyc_08050100 = 1u;
    uint32_t _r_08050100;
    _r_08050100 = 0x00000000u;
    arm_set_nzc_logic(_r_08050100, cpsr_c());
    g_cpu.R[0] = _r_08050100;
    g_cpu.R[15] = 0x08050102u;
    runtime_tick(_cyc_08050100);
    }
L_08050102:
    /* 08050102  08050102 T mov r1,r8 */
    {
    g_cpu.R[15] = 0x08050102u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050102 = 1u;
    _cyc_08050102 = 1u;
    uint32_t _rm_08050102 = g_cpu.R[8];
    uint32_t _op2_08050102;
    uint32_t _co_08050102;
    _op2_08050102 = _rm_08050102;
    _co_08050102 = cpsr_c();
    uint32_t _r_08050102;
    _r_08050102 = _op2_08050102;
    g_cpu.R[1] = _r_08050102;
    g_cpu.R[15] = 0x08050104u;
    runtime_tick(_cyc_08050102);
    }
L_08050104:
    /* 08050104  08050104 T movs r2,#0x2 */
    {
    g_cpu.R[15] = 0x08050104u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050104 = 1u;
    _cyc_08050104 = 1u;
    uint32_t _r_08050104;
    _r_08050104 = 0x00000002u;
    arm_set_nzc_logic(_r_08050104, cpsr_c());
    g_cpu.R[2] = _r_08050104;
    g_cpu.R[15] = 0x08050106u;
    runtime_tick(_cyc_08050104);
    }
L_08050106:
    /* 08050106  08050106 T movs r3,#0x1 */
    {
    g_cpu.R[15] = 0x08050106u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050106 = 1u;
    _cyc_08050106 = 1u;
    uint32_t _r_08050106;
    _r_08050106 = 0x00000001u;
    arm_set_nzc_logic(_r_08050106, cpsr_c());
    g_cpu.R[3] = _r_08050106;
    g_cpu.R[15] = 0x08050108u;
    runtime_tick(_cyc_08050106);
    }
L_08050108:
    /* 08050108  08050108 T bl.hi 0x0803d10c */
    {
    g_cpu.R[15] = 0x08050108u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050108 = 1u;
    _cyc_08050108 = 1u;
    g_cpu.R[14] = 0x0803D10Cu;
    g_cpu.R[15] = 0x0805010Au;
    runtime_tick(_cyc_08050108);
    }
L_0805010A:
    /* 0805010A  0805010a T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x0805010Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805010A = 1u;
    _cyc_0805010A = 3u;
    uint32_t _blt_0805010A = (g_cpu.R[14] + 0x00000740u) & ~1u;
    g_cpu.R[14] = 0x0805010Du;
    g_cpu.R[15] = _blt_0805010A;
    runtime_call_push_return(0x0805010Cu);
    runtime_tick(_cyc_0805010A);
    _cyc_0805010A = 0u;
    runtime_dispatch(_blt_0805010A);
    if (g_cpu.R[15] != 0x0805010Cu) { runtime_call_cancel_return(0x0805010Cu); return; }
    g_cpu.R[15] = 0x0805010Cu;
    runtime_tick(_cyc_0805010A);
    }
    /* fall-through to 0x0805010C */
    g_cpu.R[15] = 0x0805010Cu;
    runtime_dispatch(0x0805010Cu);
    return;
}

/* 0x080501FA  mode=thumb  end=0x080501FC  branches=5 */
void gf_tfunc_080501FA(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080501FAu);
    /* 080501FA  080501fa T movs r3,#0x3b */
    g_cpu.R[15] = 0x080501FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501FA = 1u;
    _cyc_080501FA = 1u;
    uint32_t _r_080501FA;
    _r_080501FA = 0x0000003Bu;
    arm_set_nzc_logic(_r_080501FA, cpsr_c());
    g_cpu.R[3] = _r_080501FA;
    g_cpu.R[15] = 0x080501FCu;
    runtime_tick(_cyc_080501FA);
    /* fall-through to 0x080501FC */
    g_cpu.R[15] = 0x080501FCu;
    runtime_dispatch(0x080501FCu);
    return;
}

/* 0x0805027C  mode=thumb  end=0x08050288  branches=6  indirect */
void gf_tfunc_0805027C(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0805027Eu: goto L_0805027E;
        case 0x08050280u: goto L_08050280;
        case 0x08050282u: goto L_08050282;
        case 0x08050284u: goto L_08050284;
        case 0x08050286u: goto L_08050286;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805027Cu);
    /* 0805027C  0805027c T ldr r1,[r15,#0x34] */
    {
    g_cpu.R[15] = 0x0805027Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805027C = 1u;
    _cyc_0805027C = 2u;
    uint32_t _base_0805027C = 0x08050280u & ~3u;
    uint32_t _off_0805027C;
    _off_0805027C = 0x00000034u;
    uint32_t _ea_0805027C = _base_0805027C + _off_0805027C;
    uint32_t _post_0805027C = _base_0805027C + _off_0805027C;
    _cyc_0805027C += runtime_mem_cycles(_ea_0805027C, 4u, 0u);
    uint32_t _v_0805027C;
    { uint32_t _w = bus_read_u32(_ea_0805027C & ~3u); uint32_t _rot = (_ea_0805027C & 3u) * 8u; _v_0805027C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0805027C;
    g_cpu.R[15] = 0x0805027Eu;
    runtime_tick(_cyc_0805027C);
    }
L_0805027E:
    /* 0805027E  0805027e T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x0805027Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805027E = 1u;
    _cyc_0805027E = 1u;
    uint32_t _base_0805027E = g_cpu.R[1];
    uint32_t _off_0805027E;
    _off_0805027E = 0x00000000u;
    uint32_t _ea_0805027E = _base_0805027E + _off_0805027E;
    uint32_t _post_0805027E = _base_0805027E + _off_0805027E;
    _cyc_0805027E += runtime_mem_cycles(_ea_0805027E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805027Eu, _ea_0805027E, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0805027E, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050280u;
    runtime_tick(_cyc_0805027E);
    }
L_08050280:
    /* 08050280  08050280 T ldr r0,[r15,#0x30] */
    {
    g_cpu.R[15] = 0x08050280u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050280 = 1u;
    _cyc_08050280 = 2u;
    uint32_t _base_08050280 = 0x08050284u & ~3u;
    uint32_t _off_08050280;
    _off_08050280 = 0x00000030u;
    uint32_t _ea_08050280 = _base_08050280 + _off_08050280;
    uint32_t _post_08050280 = _base_08050280 + _off_08050280;
    _cyc_08050280 += runtime_mem_cycles(_ea_08050280, 4u, 0u);
    uint32_t _v_08050280;
    { uint32_t _w = bus_read_u32(_ea_08050280 & ~3u); uint32_t _rot = (_ea_08050280 & 3u) * 8u; _v_08050280 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050280;
    g_cpu.R[15] = 0x08050282u;
    runtime_tick(_cyc_08050280);
    }
L_08050282:
    /* 08050282  08050282 T movs r1,#0x1 */
    {
    g_cpu.R[15] = 0x08050282u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050282 = 1u;
    _cyc_08050282 = 1u;
    uint32_t _r_08050282;
    _r_08050282 = 0x00000001u;
    arm_set_nzc_logic(_r_08050282, cpsr_c());
    g_cpu.R[1] = _r_08050282;
    g_cpu.R[15] = 0x08050284u;
    runtime_tick(_cyc_08050282);
    }
L_08050284:
    /* 08050284  08050284 T bl.hi 0x0803d288 */
    {
    g_cpu.R[15] = 0x08050284u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050284 = 1u;
    _cyc_08050284 = 1u;
    g_cpu.R[14] = 0x0803D288u;
    g_cpu.R[15] = 0x08050286u;
    runtime_tick(_cyc_08050284);
    }
L_08050286:
    /* 08050286  08050286 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08050286u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050286 = 1u;
    _cyc_08050286 = 3u;
    uint32_t _blt_08050286 = (g_cpu.R[14] + 0x00000DE8u) & ~1u;
    g_cpu.R[14] = 0x08050289u;
    g_cpu.R[15] = _blt_08050286;
    runtime_call_push_return(0x08050288u);
    runtime_tick(_cyc_08050286);
    _cyc_08050286 = 0u;
    runtime_dispatch(_blt_08050286);
    if (g_cpu.R[15] != 0x08050288u) { runtime_call_cancel_return(0x08050288u); return; }
    g_cpu.R[15] = 0x08050288u;
    runtime_tick(_cyc_08050286);
    }
    /* fall-through to 0x08050288 */
    g_cpu.R[15] = 0x08050288u;
    runtime_dispatch(0x08050288u);
    return;
}

/* 0x08050CB8  mode=thumb  end=0x08050CC6  branches=1 */
void gf_autojt_08050C6C_01(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050CBAu: goto L_08050CBA;
        case 0x08050CBCu: goto L_08050CBC;
        case 0x08050CBEu: goto L_08050CBE;
        case 0x08050CC0u: goto L_08050CC0;
        case 0x08050CC2u: goto L_08050CC2;
        case 0x08050CC4u: goto L_08050CC4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050CB8u);
    /* 08050CB8  08050cb8 T ldr r0,[r15,#0xc] */
    {
    g_cpu.R[15] = 0x08050CB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CB8 = 1u;
    _cyc_08050CB8 = 2u;
    uint32_t _base_08050CB8 = 0x08050CBCu & ~3u;
    uint32_t _off_08050CB8;
    _off_08050CB8 = 0x0000000Cu;
    uint32_t _ea_08050CB8 = _base_08050CB8 + _off_08050CB8;
    uint32_t _post_08050CB8 = _base_08050CB8 + _off_08050CB8;
    _cyc_08050CB8 += runtime_mem_cycles(_ea_08050CB8, 4u, 0u);
    uint32_t _v_08050CB8;
    { uint32_t _w = bus_read_u32(_ea_08050CB8 & ~3u); uint32_t _rot = (_ea_08050CB8 & 3u) * 8u; _v_08050CB8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050CB8;
    g_cpu.R[15] = 0x08050CBAu;
    runtime_tick(_cyc_08050CB8);
    }
L_08050CBA:
    /* 08050CBA  08050cba T movs r1,#0x8d */
    {
    g_cpu.R[15] = 0x08050CBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CBA = 1u;
    _cyc_08050CBA = 1u;
    uint32_t _r_08050CBA;
    _r_08050CBA = 0x0000008Du;
    arm_set_nzc_logic(_r_08050CBA, cpsr_c());
    g_cpu.R[1] = _r_08050CBA;
    g_cpu.R[15] = 0x08050CBCu;
    runtime_tick(_cyc_08050CBA);
    }
L_08050CBC:
    /* 08050CBC  08050cbc T movs r1,r1,lsl #1 */
    {
    g_cpu.R[15] = 0x08050CBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CBC = 1u;
    _cyc_08050CBC = 1u;
    uint32_t _rm_08050CBC = g_cpu.R[1];
    uint32_t _op2_08050CBC;
    uint32_t _co_08050CBC;
    _op2_08050CBC = _rm_08050CBC << 1;
    _co_08050CBC = (_rm_08050CBC >> 31) & 1u;
    uint32_t _r_08050CBC;
    _r_08050CBC = _op2_08050CBC;
    arm_set_nzc_logic(_r_08050CBC, _co_08050CBC);
    g_cpu.R[1] = _r_08050CBC;
    g_cpu.R[15] = 0x08050CBEu;
    runtime_tick(_cyc_08050CBC);
    }
L_08050CBE:
    /* 08050CBE  08050cbe T adds r3,r0,r1 */
    {
    g_cpu.R[15] = 0x08050CBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CBE = 1u;
    _cyc_08050CBE = 1u;
    uint32_t _rm_08050CBE = g_cpu.R[1];
    uint32_t _op2_08050CBE;
    uint32_t _co_08050CBE;
    _op2_08050CBE = _rm_08050CBE;
    _co_08050CBE = cpsr_c();
    uint32_t _rn_08050CBE = g_cpu.R[0];
    uint32_t _r_08050CBE;
    _r_08050CBE = _rn_08050CBE + _op2_08050CBE;
    arm_set_nzcv_add(_rn_08050CBE, _op2_08050CBE, _r_08050CBE);
    g_cpu.R[3] = _r_08050CBE;
    g_cpu.R[15] = 0x08050CC0u;
    runtime_tick(_cyc_08050CBE);
    }
L_08050CC0:
    /* 08050CC0  08050cc0 T movs r2,#0x0 */
    {
    g_cpu.R[15] = 0x08050CC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CC0 = 1u;
    _cyc_08050CC0 = 1u;
    uint32_t _r_08050CC0;
    _r_08050CC0 = 0x00000000u;
    arm_set_nzc_logic(_r_08050CC0, cpsr_c());
    g_cpu.R[2] = _r_08050CC0;
    g_cpu.R[15] = 0x08050CC2u;
    runtime_tick(_cyc_08050CC0);
    }
L_08050CC2:
    /* 08050CC2  08050cc2 T movs r1,#0x8 */
    {
    g_cpu.R[15] = 0x08050CC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CC2 = 1u;
    _cyc_08050CC2 = 1u;
    uint32_t _r_08050CC2;
    _r_08050CC2 = 0x00000008u;
    arm_set_nzc_logic(_r_08050CC2, cpsr_c());
    g_cpu.R[1] = _r_08050CC2;
    g_cpu.R[15] = 0x08050CC4u;
    runtime_tick(_cyc_08050CC2);
    }
L_08050CC4:
    /* 08050CC4  08050cc4 T b 0x08050d58 */
    {
    g_cpu.R[15] = 0x08050CC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CC4 = 1u;
    _cyc_08050CC4 = 3u;
    g_cpu.R[15] = 0x08050D58u;
    runtime_tick(_cyc_08050CC4);
    gf_race_08050d58();
    return;
    g_cpu.R[15] = 0x08050CC6u;
    runtime_tick(_cyc_08050CC4);
    }
    /* fall-through to 0x08050CC6 */
    g_cpu.R[15] = 0x08050CC6u;
    runtime_dispatch(0x08050CC6u);
    return;
}

/* 0x08050D62  mode=thumb  end=0x08050D7A  branches=46  indirect */
void gf_tfunc_08050D62(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D64u: goto L_08050D64;
        case 0x08050D66u: goto L_08050D66;
        case 0x08050D68u: goto L_08050D68;
        case 0x08050D6Au: goto L_08050D6A;
        case 0x08050D6Cu: goto L_08050D6C;
        case 0x08050D6Eu: goto L_08050D6E;
        case 0x08050D70u: goto L_08050D70;
        case 0x08050D72u: goto L_08050D72;
        case 0x08050D74u: goto L_08050D74;
        case 0x08050D76u: goto L_08050D76;
        case 0x08050D78u: goto L_08050D78;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D62u);
    /* 08050D62  08050d62 T movs r0,#0x94 */
    {
    g_cpu.R[15] = 0x08050D62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D62 = 1u;
    _cyc_08050D62 = 1u;
    uint32_t _r_08050D62;
    _r_08050D62 = 0x00000094u;
    arm_set_nzc_logic(_r_08050D62, cpsr_c());
    g_cpu.R[0] = _r_08050D62;
    g_cpu.R[15] = 0x08050D64u;
    runtime_tick(_cyc_08050D62);
    }
L_08050D64:
    /* 08050D64  08050d64 T movs r0,r0,lsl #1 */
    {
    g_cpu.R[15] = 0x08050D64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D64 = 1u;
    _cyc_08050D64 = 1u;
    uint32_t _rm_08050D64 = g_cpu.R[0];
    uint32_t _op2_08050D64;
    uint32_t _co_08050D64;
    _op2_08050D64 = _rm_08050D64 << 1;
    _co_08050D64 = (_rm_08050D64 >> 31) & 1u;
    uint32_t _r_08050D64;
    _r_08050D64 = _op2_08050D64;
    arm_set_nzc_logic(_r_08050D64, _co_08050D64);
    g_cpu.R[0] = _r_08050D64;
    g_cpu.R[15] = 0x08050D66u;
    runtime_tick(_cyc_08050D64);
    }
L_08050D66:
    /* 08050D66  08050d66 T adds r1,r2,r0 */
    {
    g_cpu.R[15] = 0x08050D66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D66 = 1u;
    _cyc_08050D66 = 1u;
    uint32_t _rm_08050D66 = g_cpu.R[0];
    uint32_t _op2_08050D66;
    uint32_t _co_08050D66;
    _op2_08050D66 = _rm_08050D66;
    _co_08050D66 = cpsr_c();
    uint32_t _rn_08050D66 = g_cpu.R[2];
    uint32_t _r_08050D66;
    _r_08050D66 = _rn_08050D66 + _op2_08050D66;
    arm_set_nzcv_add(_rn_08050D66, _op2_08050D66, _r_08050D66);
    g_cpu.R[1] = _r_08050D66;
    g_cpu.R[15] = 0x08050D68u;
    runtime_tick(_cyc_08050D66);
    }
L_08050D68:
    /* 08050D68  08050d68 T movs r0,#0xc */
    {
    g_cpu.R[15] = 0x08050D68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D68 = 1u;
    _cyc_08050D68 = 1u;
    uint32_t _r_08050D68;
    _r_08050D68 = 0x0000000Cu;
    arm_set_nzc_logic(_r_08050D68, cpsr_c());
    g_cpu.R[0] = _r_08050D68;
    g_cpu.R[15] = 0x08050D6Au;
    runtime_tick(_cyc_08050D68);
    }
L_08050D6A:
    /* 08050D6A  08050d6a T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08050D6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D6A = 1u;
    _cyc_08050D6A = 1u;
    uint32_t _base_08050D6A = g_cpu.R[1];
    uint32_t _off_08050D6A;
    _off_08050D6A = 0x00000000u;
    uint32_t _ea_08050D6A = _base_08050D6A + _off_08050D6A;
    uint32_t _post_08050D6A = _base_08050D6A + _off_08050D6A;
    _cyc_08050D6A += runtime_mem_cycles(_ea_08050D6A, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050D6Au, _ea_08050D6A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050D6A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050D6Cu;
    runtime_tick(_cyc_08050D6A);
    }
L_08050D6C:
    /* 08050D6C  08050d6c T ldrb r0,[r4,#0x1e] */
    {
    g_cpu.R[15] = 0x08050D6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D6C = 1u;
    _cyc_08050D6C = 2u;
    uint32_t _base_08050D6C = g_cpu.R[4];
    uint32_t _off_08050D6C;
    _off_08050D6C = 0x0000001Eu;
    uint32_t _ea_08050D6C = _base_08050D6C + _off_08050D6C;
    uint32_t _post_08050D6C = _base_08050D6C + _off_08050D6C;
    _cyc_08050D6C += runtime_mem_cycles(_ea_08050D6C, 1u, 0u);
    uint32_t _v_08050D6C;
    _v_08050D6C = bus_read_u8(_ea_08050D6C);
    g_cpu.R[0] = _v_08050D6C;
    g_cpu.R[15] = 0x08050D6Eu;
    runtime_tick(_cyc_08050D6C);
    }
L_08050D6E:
    /* 08050D6E  08050d6e T adds r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x08050D6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D6E = 1u;
    _cyc_08050D6E = 1u;
    uint32_t _rn_08050D6E = g_cpu.R[0];
    uint32_t _r_08050D6E;
    _r_08050D6E = _rn_08050D6E + 0x00000001u;
    arm_set_nzcv_add(_rn_08050D6E, 0x00000001u, _r_08050D6E);
    g_cpu.R[0] = _r_08050D6E;
    g_cpu.R[15] = 0x08050D70u;
    runtime_tick(_cyc_08050D6E);
    }
L_08050D70:
    /* 08050D70  08050d70 T ldr r3,[r15,#0x1d4] */
    {
    g_cpu.R[15] = 0x08050D70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D70 = 1u;
    _cyc_08050D70 = 2u;
    uint32_t _base_08050D70 = 0x08050D74u & ~3u;
    uint32_t _off_08050D70;
    _off_08050D70 = 0x000001D4u;
    uint32_t _ea_08050D70 = _base_08050D70 + _off_08050D70;
    uint32_t _post_08050D70 = _base_08050D70 + _off_08050D70;
    _cyc_08050D70 += runtime_mem_cycles(_ea_08050D70, 4u, 0u);
    uint32_t _v_08050D70;
    { uint32_t _w = bus_read_u32(_ea_08050D70 & ~3u); uint32_t _rot = (_ea_08050D70 & 3u) * 8u; _v_08050D70 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08050D70;
    g_cpu.R[15] = 0x08050D72u;
    runtime_tick(_cyc_08050D70);
    }
L_08050D72:
    /* 08050D72  08050d72 T adds r1,r2,r3 */
    {
    g_cpu.R[15] = 0x08050D72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D72 = 1u;
    _cyc_08050D72 = 1u;
    uint32_t _rm_08050D72 = g_cpu.R[3];
    uint32_t _op2_08050D72;
    uint32_t _co_08050D72;
    _op2_08050D72 = _rm_08050D72;
    _co_08050D72 = cpsr_c();
    uint32_t _rn_08050D72 = g_cpu.R[2];
    uint32_t _r_08050D72;
    _r_08050D72 = _rn_08050D72 + _op2_08050D72;
    arm_set_nzcv_add(_rn_08050D72, _op2_08050D72, _r_08050D72);
    g_cpu.R[1] = _r_08050D72;
    g_cpu.R[15] = 0x08050D74u;
    runtime_tick(_cyc_08050D72);
    }
L_08050D74:
    /* 08050D74  08050d74 T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08050D74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D74 = 1u;
    _cyc_08050D74 = 1u;
    uint32_t _base_08050D74 = g_cpu.R[1];
    uint32_t _off_08050D74;
    _off_08050D74 = 0x00000000u;
    uint32_t _ea_08050D74 = _base_08050D74 + _off_08050D74;
    uint32_t _post_08050D74 = _base_08050D74 + _off_08050D74;
    _cyc_08050D74 += runtime_mem_cycles(_ea_08050D74, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050D74u, _ea_08050D74, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050D74, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050D76u;
    runtime_tick(_cyc_08050D74);
    }
L_08050D76:
    /* 08050D76  08050d76 T bl.hi 0x0804dd7a */
    {
    g_cpu.R[15] = 0x08050D76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D76 = 1u;
    _cyc_08050D76 = 1u;
    g_cpu.R[14] = 0x0804DD7Au;
    g_cpu.R[15] = 0x08050D78u;
    runtime_tick(_cyc_08050D76);
    }
L_08050D78:
    /* 08050D78  08050d78 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08050D78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D78 = 1u;
    _cyc_08050D78 = 3u;
    uint32_t _blt_08050D78 = (g_cpu.R[14] + 0x00000186u) & ~1u;
    g_cpu.R[14] = 0x08050D7Bu;
    g_cpu.R[15] = _blt_08050D78;
    runtime_call_push_return(0x08050D7Au);
    runtime_tick(_cyc_08050D78);
    _cyc_08050D78 = 0u;
    runtime_dispatch(_blt_08050D78);
    if (g_cpu.R[15] != 0x08050D7Au) { runtime_call_cancel_return(0x08050D7Au); return; }
    g_cpu.R[15] = 0x08050D7Au;
    runtime_tick(_cyc_08050D78);
    }
    /* fall-through to 0x08050D7A */
    g_cpu.R[15] = 0x08050D7Au;
    runtime_dispatch(0x08050D7Au);
    return;
}

/* 0x08050D7E  mode=thumb  end=0x08050D82  branches=42  indirect */
void gf_tfunc_08050D7E(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D80u: goto L_08050D80;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D7Eu);
    /* 08050D7E  08050d7e T bl.hi 0x0804dd82 */
    {
    g_cpu.R[15] = 0x08050D7Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D7E = 1u;
    _cyc_08050D7E = 1u;
    g_cpu.R[14] = 0x0804DD82u;
    g_cpu.R[15] = 0x08050D80u;
    runtime_tick(_cyc_08050D7E);
    }
L_08050D80:
    /* 08050D80  08050d80 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08050D80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D80 = 1u;
    _cyc_08050D80 = 3u;
    uint32_t _blt_08050D80 = (g_cpu.R[14] + 0x00000316u) & ~1u;
    g_cpu.R[14] = 0x08050D83u;
    g_cpu.R[15] = _blt_08050D80;
    runtime_call_push_return(0x08050D82u);
    runtime_tick(_cyc_08050D80);
    _cyc_08050D80 = 0u;
    runtime_dispatch(_blt_08050D80);
    if (g_cpu.R[15] != 0x08050D82u) { runtime_call_cancel_return(0x08050D82u); return; }
    g_cpu.R[15] = 0x08050D82u;
    runtime_tick(_cyc_08050D80);
    }
    /* fall-through to 0x08050D82 */
    g_cpu.R[15] = 0x08050D82u;
    runtime_dispatch(0x08050D82u);
    return;
}

/* 0x08050DB8  mode=thumb  end=0x08050DC8  branches=31  indirect */
void gf_tfunc_08050DB8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050DBAu: goto L_08050DBA;
        case 0x08050DBCu: goto L_08050DBC;
        case 0x08050DBEu: goto L_08050DBE;
        case 0x08050DC0u: goto L_08050DC0;
        case 0x08050DC2u: goto L_08050DC2;
        case 0x08050DC4u: goto L_08050DC4;
        case 0x08050DC6u: goto L_08050DC6;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050DB8u);
L_08050DB8:
    /* 08050DB8  08050db8 T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050DB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DB8 = 1u;
    _cyc_08050DB8 = 2u;
    uint32_t _base_08050DB8 = g_cpu.R[1];
    uint32_t _off_08050DB8;
    _off_08050DB8 = 0x00000000u;
    uint32_t _ea_08050DB8 = _base_08050DB8 + _off_08050DB8;
    uint32_t _post_08050DB8 = _base_08050DB8 + _off_08050DB8;
    _cyc_08050DB8 += runtime_mem_cycles(_ea_08050DB8, 4u, 0u);
    uint32_t _v_08050DB8;
    { uint32_t _w = bus_read_u32(_ea_08050DB8 & ~3u); uint32_t _rot = (_ea_08050DB8 & 3u) * 8u; _v_08050DB8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050DB8;
    g_cpu.R[15] = 0x08050DBAu;
    runtime_tick(_cyc_08050DB8);
    }
L_08050DBA:
    /* 08050DBA  08050dba T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050DBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DBA = 1u;
    _cyc_08050DBA = 1u;
    uint32_t _base_08050DBA = g_cpu.R[2];
    uint32_t _off_08050DBA;
    _off_08050DBA = 0x00000000u;
    uint32_t _ea_08050DBA = _base_08050DBA + _off_08050DBA;
    uint32_t _post_08050DBA = _base_08050DBA + _off_08050DBA;
    _cyc_08050DBA += runtime_mem_cycles(_ea_08050DBA, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050DBAu, _ea_08050DBA & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050DBA & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050DBCu;
    runtime_tick(_cyc_08050DBA);
    }
L_08050DBC:
    /* 08050DBC  08050dbc T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050DBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DBC = 1u;
    _cyc_08050DBC = 2u;
    uint32_t _base_08050DBC = g_cpu.R[1];
    uint32_t _off_08050DBC;
    _off_08050DBC = 0x00000004u;
    uint32_t _ea_08050DBC = _base_08050DBC + _off_08050DBC;
    uint32_t _post_08050DBC = _base_08050DBC + _off_08050DBC;
    _cyc_08050DBC += runtime_mem_cycles(_ea_08050DBC, 4u, 0u);
    uint32_t _v_08050DBC;
    { uint32_t _w = bus_read_u32(_ea_08050DBC & ~3u); uint32_t _rot = (_ea_08050DBC & 3u) * 8u; _v_08050DBC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050DBC;
    g_cpu.R[15] = 0x08050DBEu;
    runtime_tick(_cyc_08050DBC);
    }
L_08050DBE:
    /* 08050DBE  08050dbe T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050DBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DBE = 1u;
    _cyc_08050DBE = 1u;
    uint32_t _base_08050DBE = g_cpu.R[2];
    uint32_t _off_08050DBE;
    _off_08050DBE = 0x00000004u;
    uint32_t _ea_08050DBE = _base_08050DBE + _off_08050DBE;
    uint32_t _post_08050DBE = _base_08050DBE + _off_08050DBE;
    _cyc_08050DBE += runtime_mem_cycles(_ea_08050DBE, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050DBEu, _ea_08050DBE & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050DBE & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050DC0u;
    runtime_tick(_cyc_08050DBE);
    }
L_08050DC0:
    /* 08050DC0  08050dc0 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050DC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DC0 = 1u;
    _cyc_08050DC0 = 1u;
    uint32_t _rn_08050DC0 = g_cpu.R[2];
    uint32_t _r_08050DC0;
    _r_08050DC0 = _rn_08050DC0 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050DC0, 0x00000008u, _r_08050DC0);
    g_cpu.R[2] = _r_08050DC0;
    g_cpu.R[15] = 0x08050DC2u;
    runtime_tick(_cyc_08050DC0);
    }
L_08050DC2:
    /* 08050DC2  08050dc2 T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050DC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DC2 = 1u;
    _cyc_08050DC2 = 2u;
    uint32_t _base_08050DC2 = g_cpu.R[1];
    uint32_t _off_08050DC2;
    _off_08050DC2 = 0x00000008u;
    uint32_t _ea_08050DC2 = _base_08050DC2 + _off_08050DC2;
    uint32_t _post_08050DC2 = _base_08050DC2 + _off_08050DC2;
    _cyc_08050DC2 += runtime_mem_cycles(_ea_08050DC2, 4u, 0u);
    uint32_t _v_08050DC2;
    { uint32_t _w = bus_read_u32(_ea_08050DC2 & ~3u); uint32_t _rot = (_ea_08050DC2 & 3u) * 8u; _v_08050DC2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050DC2;
    g_cpu.R[15] = 0x08050DC4u;
    runtime_tick(_cyc_08050DC2);
    }
L_08050DC4:
    /* 08050DC4  08050dc4 T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050DC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DC4 = 1u;
    _cyc_08050DC4 = 1u;
    uint32_t _rm_08050DC4 = g_cpu.R[5];
    uint32_t _op2_08050DC4;
    uint32_t _co_08050DC4;
    _op2_08050DC4 = _rm_08050DC4;
    _co_08050DC4 = cpsr_c();
    uint32_t _rn_08050DC4 = g_cpu.R[1];
    uint32_t _r_08050DC4;
    _r_08050DC4 = _rn_08050DC4 - _op2_08050DC4;
    arm_set_nzcv_sub(_rn_08050DC4, _op2_08050DC4, _r_08050DC4);
    g_cpu.R[15] = 0x08050DC6u;
    runtime_tick(_cyc_08050DC4);
    }
L_08050DC6:
    /* 08050DC6  08050dc6 T bne 0x08050db8 */
    {
    g_cpu.R[15] = 0x08050DC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DC6 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050DC6 = 3u;
        g_cpu.R[15] = 0x08050DB8u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050DC6u, 0x08050DB8u, 0u, 0u);
        runtime_tick(_cyc_08050DC6);
        goto L_08050DB8;
    }
    g_cpu.R[15] = 0x08050DC8u;
    runtime_tick(_cyc_08050DC6);
    }
    /* fall-through to 0x08050DC8 */
    g_cpu.R[15] = 0x08050DC8u;
    runtime_dispatch(0x08050DC8u);
    return;
}

/* 0x08050DC8  mode=thumb  end=0x08050DD2  branches=30  indirect */
void gf_tfunc_08050DC8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050DCAu: goto L_08050DCA;
        case 0x08050DCCu: goto L_08050DCC;
        case 0x08050DCEu: goto L_08050DCE;
        case 0x08050DD0u: goto L_08050DD0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050DC8u);
    /* 08050DC8  08050dc8 T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050DC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DC8 = 1u;
    _cyc_08050DC8 = 1u;
    uint32_t _rn_08050DC8 = g_cpu.R[3];
    uint32_t _r_08050DC8;
    _r_08050DC8 = _rn_08050DC8 + 0x00000010u;
    arm_set_nzcv_add(_rn_08050DC8, 0x00000010u, _r_08050DC8);
    g_cpu.R[3] = _r_08050DC8;
    g_cpu.R[15] = 0x08050DCAu;
    runtime_tick(_cyc_08050DC8);
    }
L_08050DCA:
    /* 08050DCA  08050dca T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050DCAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DCA = 1u;
    _cyc_08050DCA = 1u;
    uint32_t _rn_08050DCA = g_cpu.R[4];
    uint32_t _r_08050DCA;
    _r_08050DCA = _rn_08050DCA + 0x00000000u;
    arm_set_nzcv_add(_rn_08050DCA, 0x00000000u, _r_08050DCA);
    g_cpu.R[5] = _r_08050DCA;
    g_cpu.R[15] = 0x08050DCCu;
    runtime_tick(_cyc_08050DCA);
    }
L_08050DCC:
    /* 08050DCC  08050dcc T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050DCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DCC = 1u;
    _cyc_08050DCC = 2u;
    uint32_t _base_08050DCC = g_cpu.R[3];
    uint32_t _off_08050DCC;
    _off_08050DCC = 0x00000008u;
    uint32_t _ea_08050DCC = _base_08050DCC + _off_08050DCC;
    uint32_t _post_08050DCC = _base_08050DCC + _off_08050DCC;
    _cyc_08050DCC += runtime_mem_cycles(_ea_08050DCC, 4u, 0u);
    uint32_t _v_08050DCC;
    { uint32_t _w = bus_read_u32(_ea_08050DCC & ~3u); uint32_t _rot = (_ea_08050DCC & 3u) * 8u; _v_08050DCC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050DCC;
    g_cpu.R[15] = 0x08050DCEu;
    runtime_tick(_cyc_08050DCC);
    }
L_08050DCE:
    /* 08050DCE  08050dce T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050DCEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DCE = 1u;
    _cyc_08050DCE = 1u;
    uint32_t _rm_08050DCE = g_cpu.R[4];
    uint32_t _op2_08050DCE;
    uint32_t _co_08050DCE;
    _op2_08050DCE = _rm_08050DCE;
    _co_08050DCE = cpsr_c();
    uint32_t _rn_08050DCE = g_cpu.R[1];
    uint32_t _r_08050DCE;
    _r_08050DCE = _rn_08050DCE - _op2_08050DCE;
    arm_set_nzcv_sub(_rn_08050DCE, _op2_08050DCE, _r_08050DCE);
    g_cpu.R[15] = 0x08050DD0u;
    runtime_tick(_cyc_08050DCE);
    }
L_08050DD0:
    /* 08050DD0  08050dd0 T beq 0x08050de2 */
    {
    g_cpu.R[15] = 0x08050DD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DD0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050DD0 = 3u;
        g_cpu.R[15] = 0x08050DE2u;
        runtime_tick(_cyc_08050DD0);
        gf_tfunc_08050DE2();
        return;
    }
    g_cpu.R[15] = 0x08050DD2u;
    runtime_tick(_cyc_08050DD0);
    }
    /* fall-through to 0x08050DD2 */
    g_cpu.R[15] = 0x08050DD2u;
    runtime_dispatch(0x08050DD2u);
    return;
}

/* 0x08050DD2  mode=thumb  end=0x08050DE2  branches=29  indirect */
void gf_tfunc_08050DD2(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050DD4u: goto L_08050DD4;
        case 0x08050DD6u: goto L_08050DD6;
        case 0x08050DD8u: goto L_08050DD8;
        case 0x08050DDAu: goto L_08050DDA;
        case 0x08050DDCu: goto L_08050DDC;
        case 0x08050DDEu: goto L_08050DDE;
        case 0x08050DE0u: goto L_08050DE0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050DD2u);
L_08050DD2:
    /* 08050DD2  08050dd2 T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050DD2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DD2 = 1u;
    _cyc_08050DD2 = 2u;
    uint32_t _base_08050DD2 = g_cpu.R[1];
    uint32_t _off_08050DD2;
    _off_08050DD2 = 0x00000000u;
    uint32_t _ea_08050DD2 = _base_08050DD2 + _off_08050DD2;
    uint32_t _post_08050DD2 = _base_08050DD2 + _off_08050DD2;
    _cyc_08050DD2 += runtime_mem_cycles(_ea_08050DD2, 4u, 0u);
    uint32_t _v_08050DD2;
    { uint32_t _w = bus_read_u32(_ea_08050DD2 & ~3u); uint32_t _rot = (_ea_08050DD2 & 3u) * 8u; _v_08050DD2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050DD2;
    g_cpu.R[15] = 0x08050DD4u;
    runtime_tick(_cyc_08050DD2);
    }
L_08050DD4:
    /* 08050DD4  08050dd4 T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050DD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DD4 = 1u;
    _cyc_08050DD4 = 1u;
    uint32_t _base_08050DD4 = g_cpu.R[2];
    uint32_t _off_08050DD4;
    _off_08050DD4 = 0x00000000u;
    uint32_t _ea_08050DD4 = _base_08050DD4 + _off_08050DD4;
    uint32_t _post_08050DD4 = _base_08050DD4 + _off_08050DD4;
    _cyc_08050DD4 += runtime_mem_cycles(_ea_08050DD4, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050DD4u, _ea_08050DD4 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050DD4 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050DD6u;
    runtime_tick(_cyc_08050DD4);
    }
L_08050DD6:
    /* 08050DD6  08050dd6 T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050DD6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DD6 = 1u;
    _cyc_08050DD6 = 2u;
    uint32_t _base_08050DD6 = g_cpu.R[1];
    uint32_t _off_08050DD6;
    _off_08050DD6 = 0x00000004u;
    uint32_t _ea_08050DD6 = _base_08050DD6 + _off_08050DD6;
    uint32_t _post_08050DD6 = _base_08050DD6 + _off_08050DD6;
    _cyc_08050DD6 += runtime_mem_cycles(_ea_08050DD6, 4u, 0u);
    uint32_t _v_08050DD6;
    { uint32_t _w = bus_read_u32(_ea_08050DD6 & ~3u); uint32_t _rot = (_ea_08050DD6 & 3u) * 8u; _v_08050DD6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050DD6;
    g_cpu.R[15] = 0x08050DD8u;
    runtime_tick(_cyc_08050DD6);
    }
L_08050DD8:
    /* 08050DD8  08050dd8 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050DD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DD8 = 1u;
    _cyc_08050DD8 = 1u;
    uint32_t _base_08050DD8 = g_cpu.R[2];
    uint32_t _off_08050DD8;
    _off_08050DD8 = 0x00000004u;
    uint32_t _ea_08050DD8 = _base_08050DD8 + _off_08050DD8;
    uint32_t _post_08050DD8 = _base_08050DD8 + _off_08050DD8;
    _cyc_08050DD8 += runtime_mem_cycles(_ea_08050DD8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050DD8u, _ea_08050DD8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050DD8 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050DDAu;
    runtime_tick(_cyc_08050DD8);
    }
L_08050DDA:
    /* 08050DDA  08050dda T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050DDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DDA = 1u;
    _cyc_08050DDA = 1u;
    uint32_t _rn_08050DDA = g_cpu.R[2];
    uint32_t _r_08050DDA;
    _r_08050DDA = _rn_08050DDA + 0x00000008u;
    arm_set_nzcv_add(_rn_08050DDA, 0x00000008u, _r_08050DDA);
    g_cpu.R[2] = _r_08050DDA;
    g_cpu.R[15] = 0x08050DDCu;
    runtime_tick(_cyc_08050DDA);
    }
L_08050DDC:
    /* 08050DDC  08050ddc T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050DDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DDC = 1u;
    _cyc_08050DDC = 2u;
    uint32_t _base_08050DDC = g_cpu.R[1];
    uint32_t _off_08050DDC;
    _off_08050DDC = 0x00000008u;
    uint32_t _ea_08050DDC = _base_08050DDC + _off_08050DDC;
    uint32_t _post_08050DDC = _base_08050DDC + _off_08050DDC;
    _cyc_08050DDC += runtime_mem_cycles(_ea_08050DDC, 4u, 0u);
    uint32_t _v_08050DDC;
    { uint32_t _w = bus_read_u32(_ea_08050DDC & ~3u); uint32_t _rot = (_ea_08050DDC & 3u) * 8u; _v_08050DDC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050DDC;
    g_cpu.R[15] = 0x08050DDEu;
    runtime_tick(_cyc_08050DDC);
    }
L_08050DDE:
    /* 08050DDE  08050dde T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050DDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DDE = 1u;
    _cyc_08050DDE = 1u;
    uint32_t _rm_08050DDE = g_cpu.R[5];
    uint32_t _op2_08050DDE;
    uint32_t _co_08050DDE;
    _op2_08050DDE = _rm_08050DDE;
    _co_08050DDE = cpsr_c();
    uint32_t _rn_08050DDE = g_cpu.R[1];
    uint32_t _r_08050DDE;
    _r_08050DDE = _rn_08050DDE - _op2_08050DDE;
    arm_set_nzcv_sub(_rn_08050DDE, _op2_08050DDE, _r_08050DDE);
    g_cpu.R[15] = 0x08050DE0u;
    runtime_tick(_cyc_08050DDE);
    }
L_08050DE0:
    /* 08050DE0  08050de0 T bne 0x08050dd2 */
    {
    g_cpu.R[15] = 0x08050DE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DE0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050DE0 = 3u;
        g_cpu.R[15] = 0x08050DD2u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050DE0u, 0x08050DD2u, 0u, 0u);
        runtime_tick(_cyc_08050DE0);
        goto L_08050DD2;
    }
    g_cpu.R[15] = 0x08050DE2u;
    runtime_tick(_cyc_08050DE0);
    }
    /* fall-through to 0x08050DE2 */
    g_cpu.R[15] = 0x08050DE2u;
    runtime_dispatch(0x08050DE2u);
    return;
}

/* 0x08050E20  mode=thumb  end=0x08050E30  branches=23  indirect */
void gf_tfunc_08050E20(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E22u: goto L_08050E22;
        case 0x08050E24u: goto L_08050E24;
        case 0x08050E26u: goto L_08050E26;
        case 0x08050E28u: goto L_08050E28;
        case 0x08050E2Au: goto L_08050E2A;
        case 0x08050E2Cu: goto L_08050E2C;
        case 0x08050E2Eu: goto L_08050E2E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E20u);
L_08050E20:
    /* 08050E20  08050e20 T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050E20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E20 = 1u;
    _cyc_08050E20 = 2u;
    uint32_t _base_08050E20 = g_cpu.R[1];
    uint32_t _off_08050E20;
    _off_08050E20 = 0x00000000u;
    uint32_t _ea_08050E20 = _base_08050E20 + _off_08050E20;
    uint32_t _post_08050E20 = _base_08050E20 + _off_08050E20;
    _cyc_08050E20 += runtime_mem_cycles(_ea_08050E20, 4u, 0u);
    uint32_t _v_08050E20;
    { uint32_t _w = bus_read_u32(_ea_08050E20 & ~3u); uint32_t _rot = (_ea_08050E20 & 3u) * 8u; _v_08050E20 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E20;
    g_cpu.R[15] = 0x08050E22u;
    runtime_tick(_cyc_08050E20);
    }
L_08050E22:
    /* 08050E22  08050e22 T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050E22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E22 = 1u;
    _cyc_08050E22 = 1u;
    uint32_t _base_08050E22 = g_cpu.R[2];
    uint32_t _off_08050E22;
    _off_08050E22 = 0x00000000u;
    uint32_t _ea_08050E22 = _base_08050E22 + _off_08050E22;
    uint32_t _post_08050E22 = _base_08050E22 + _off_08050E22;
    _cyc_08050E22 += runtime_mem_cycles(_ea_08050E22, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E22u, _ea_08050E22 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E22 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E24u;
    runtime_tick(_cyc_08050E22);
    }
L_08050E24:
    /* 08050E24  08050e24 T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050E24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E24 = 1u;
    _cyc_08050E24 = 2u;
    uint32_t _base_08050E24 = g_cpu.R[1];
    uint32_t _off_08050E24;
    _off_08050E24 = 0x00000004u;
    uint32_t _ea_08050E24 = _base_08050E24 + _off_08050E24;
    uint32_t _post_08050E24 = _base_08050E24 + _off_08050E24;
    _cyc_08050E24 += runtime_mem_cycles(_ea_08050E24, 4u, 0u);
    uint32_t _v_08050E24;
    { uint32_t _w = bus_read_u32(_ea_08050E24 & ~3u); uint32_t _rot = (_ea_08050E24 & 3u) * 8u; _v_08050E24 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E24;
    g_cpu.R[15] = 0x08050E26u;
    runtime_tick(_cyc_08050E24);
    }
L_08050E26:
    /* 08050E26  08050e26 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050E26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E26 = 1u;
    _cyc_08050E26 = 1u;
    uint32_t _base_08050E26 = g_cpu.R[2];
    uint32_t _off_08050E26;
    _off_08050E26 = 0x00000004u;
    uint32_t _ea_08050E26 = _base_08050E26 + _off_08050E26;
    uint32_t _post_08050E26 = _base_08050E26 + _off_08050E26;
    _cyc_08050E26 += runtime_mem_cycles(_ea_08050E26, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E26u, _ea_08050E26 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E26 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E28u;
    runtime_tick(_cyc_08050E26);
    }
L_08050E28:
    /* 08050E28  08050e28 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050E28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E28 = 1u;
    _cyc_08050E28 = 1u;
    uint32_t _rn_08050E28 = g_cpu.R[2];
    uint32_t _r_08050E28;
    _r_08050E28 = _rn_08050E28 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050E28, 0x00000008u, _r_08050E28);
    g_cpu.R[2] = _r_08050E28;
    g_cpu.R[15] = 0x08050E2Au;
    runtime_tick(_cyc_08050E28);
    }
L_08050E2A:
    /* 08050E2A  08050e2a T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050E2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E2A = 1u;
    _cyc_08050E2A = 2u;
    uint32_t _base_08050E2A = g_cpu.R[1];
    uint32_t _off_08050E2A;
    _off_08050E2A = 0x00000008u;
    uint32_t _ea_08050E2A = _base_08050E2A + _off_08050E2A;
    uint32_t _post_08050E2A = _base_08050E2A + _off_08050E2A;
    _cyc_08050E2A += runtime_mem_cycles(_ea_08050E2A, 4u, 0u);
    uint32_t _v_08050E2A;
    { uint32_t _w = bus_read_u32(_ea_08050E2A & ~3u); uint32_t _rot = (_ea_08050E2A & 3u) * 8u; _v_08050E2A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E2A;
    g_cpu.R[15] = 0x08050E2Cu;
    runtime_tick(_cyc_08050E2A);
    }
L_08050E2C:
    /* 08050E2C  08050e2c T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050E2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E2C = 1u;
    _cyc_08050E2C = 1u;
    uint32_t _rm_08050E2C = g_cpu.R[5];
    uint32_t _op2_08050E2C;
    uint32_t _co_08050E2C;
    _op2_08050E2C = _rm_08050E2C;
    _co_08050E2C = cpsr_c();
    uint32_t _rn_08050E2C = g_cpu.R[1];
    uint32_t _r_08050E2C;
    _r_08050E2C = _rn_08050E2C - _op2_08050E2C;
    arm_set_nzcv_sub(_rn_08050E2C, _op2_08050E2C, _r_08050E2C);
    g_cpu.R[15] = 0x08050E2Eu;
    runtime_tick(_cyc_08050E2C);
    }
L_08050E2E:
    /* 08050E2E  08050e2e T bne 0x08050e20 */
    {
    g_cpu.R[15] = 0x08050E2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E2E = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050E2E = 3u;
        g_cpu.R[15] = 0x08050E20u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050E2Eu, 0x08050E20u, 0u, 0u);
        runtime_tick(_cyc_08050E2E);
        goto L_08050E20;
    }
    g_cpu.R[15] = 0x08050E30u;
    runtime_tick(_cyc_08050E2E);
    }
    /* fall-through to 0x08050E30 */
    g_cpu.R[15] = 0x08050E30u;
    runtime_dispatch(0x08050E30u);
    return;
}

/* 0x08050ECC  mode=thumb  end=0x08050ED6  branches=10  indirect */
void gf_tfunc_08050ECC(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050ECEu: goto L_08050ECE;
        case 0x08050ED0u: goto L_08050ED0;
        case 0x08050ED2u: goto L_08050ED2;
        case 0x08050ED4u: goto L_08050ED4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050ECCu);
    /* 08050ECC  08050ecc T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050ECCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050ECC = 1u;
    _cyc_08050ECC = 1u;
    uint32_t _rn_08050ECC = g_cpu.R[3];
    uint32_t _r_08050ECC;
    _r_08050ECC = _rn_08050ECC + 0x00000010u;
    arm_set_nzcv_add(_rn_08050ECC, 0x00000010u, _r_08050ECC);
    g_cpu.R[3] = _r_08050ECC;
    g_cpu.R[15] = 0x08050ECEu;
    runtime_tick(_cyc_08050ECC);
    }
L_08050ECE:
    /* 08050ECE  08050ece T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050ECEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050ECE = 1u;
    _cyc_08050ECE = 1u;
    uint32_t _rn_08050ECE = g_cpu.R[4];
    uint32_t _r_08050ECE;
    _r_08050ECE = _rn_08050ECE + 0x00000000u;
    arm_set_nzcv_add(_rn_08050ECE, 0x00000000u, _r_08050ECE);
    g_cpu.R[5] = _r_08050ECE;
    g_cpu.R[15] = 0x08050ED0u;
    runtime_tick(_cyc_08050ECE);
    }
L_08050ED0:
    /* 08050ED0  08050ed0 T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050ED0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050ED0 = 1u;
    _cyc_08050ED0 = 2u;
    uint32_t _base_08050ED0 = g_cpu.R[3];
    uint32_t _off_08050ED0;
    _off_08050ED0 = 0x00000008u;
    uint32_t _ea_08050ED0 = _base_08050ED0 + _off_08050ED0;
    uint32_t _post_08050ED0 = _base_08050ED0 + _off_08050ED0;
    _cyc_08050ED0 += runtime_mem_cycles(_ea_08050ED0, 4u, 0u);
    uint32_t _v_08050ED0;
    { uint32_t _w = bus_read_u32(_ea_08050ED0 & ~3u); uint32_t _rot = (_ea_08050ED0 & 3u) * 8u; _v_08050ED0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050ED0;
    g_cpu.R[15] = 0x08050ED2u;
    runtime_tick(_cyc_08050ED0);
    }
L_08050ED2:
    /* 08050ED2  08050ed2 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050ED2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050ED2 = 1u;
    _cyc_08050ED2 = 1u;
    uint32_t _rm_08050ED2 = g_cpu.R[4];
    uint32_t _op2_08050ED2;
    uint32_t _co_08050ED2;
    _op2_08050ED2 = _rm_08050ED2;
    _co_08050ED2 = cpsr_c();
    uint32_t _rn_08050ED2 = g_cpu.R[1];
    uint32_t _r_08050ED2;
    _r_08050ED2 = _rn_08050ED2 - _op2_08050ED2;
    arm_set_nzcv_sub(_rn_08050ED2, _op2_08050ED2, _r_08050ED2);
    g_cpu.R[15] = 0x08050ED4u;
    runtime_tick(_cyc_08050ED2);
    }
L_08050ED4:
    /* 08050ED4  08050ed4 T beq 0x08050ee6 */
    {
    g_cpu.R[15] = 0x08050ED4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050ED4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050ED4 = 3u;
        g_cpu.R[15] = 0x08050EE6u;
        runtime_tick(_cyc_08050ED4);
        gf_tfunc_08050EE6();
        return;
    }
    g_cpu.R[15] = 0x08050ED6u;
    runtime_tick(_cyc_08050ED4);
    }
    /* fall-through to 0x08050ED6 */
    g_cpu.R[15] = 0x08050ED6u;
    runtime_dispatch(0x08050ED6u);
    return;
}

/* 0x08050EF0  mode=thumb  end=0x08050F00  branches=7  indirect */
void gf_tfunc_08050EF0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050EF2u: goto L_08050EF2;
        case 0x08050EF4u: goto L_08050EF4;
        case 0x08050EF6u: goto L_08050EF6;
        case 0x08050EF8u: goto L_08050EF8;
        case 0x08050EFAu: goto L_08050EFA;
        case 0x08050EFCu: goto L_08050EFC;
        case 0x08050EFEu: goto L_08050EFE;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050EF0u);
L_08050EF0:
    /* 08050EF0  08050ef0 T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050EF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EF0 = 1u;
    _cyc_08050EF0 = 2u;
    uint32_t _base_08050EF0 = g_cpu.R[1];
    uint32_t _off_08050EF0;
    _off_08050EF0 = 0x00000000u;
    uint32_t _ea_08050EF0 = _base_08050EF0 + _off_08050EF0;
    uint32_t _post_08050EF0 = _base_08050EF0 + _off_08050EF0;
    _cyc_08050EF0 += runtime_mem_cycles(_ea_08050EF0, 4u, 0u);
    uint32_t _v_08050EF0;
    { uint32_t _w = bus_read_u32(_ea_08050EF0 & ~3u); uint32_t _rot = (_ea_08050EF0 & 3u) * 8u; _v_08050EF0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050EF0;
    g_cpu.R[15] = 0x08050EF2u;
    runtime_tick(_cyc_08050EF0);
    }
L_08050EF2:
    /* 08050EF2  08050ef2 T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050EF2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EF2 = 1u;
    _cyc_08050EF2 = 1u;
    uint32_t _base_08050EF2 = g_cpu.R[2];
    uint32_t _off_08050EF2;
    _off_08050EF2 = 0x00000000u;
    uint32_t _ea_08050EF2 = _base_08050EF2 + _off_08050EF2;
    uint32_t _post_08050EF2 = _base_08050EF2 + _off_08050EF2;
    _cyc_08050EF2 += runtime_mem_cycles(_ea_08050EF2, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050EF2u, _ea_08050EF2 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050EF2 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050EF4u;
    runtime_tick(_cyc_08050EF2);
    }
L_08050EF4:
    /* 08050EF4  08050ef4 T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050EF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EF4 = 1u;
    _cyc_08050EF4 = 2u;
    uint32_t _base_08050EF4 = g_cpu.R[1];
    uint32_t _off_08050EF4;
    _off_08050EF4 = 0x00000004u;
    uint32_t _ea_08050EF4 = _base_08050EF4 + _off_08050EF4;
    uint32_t _post_08050EF4 = _base_08050EF4 + _off_08050EF4;
    _cyc_08050EF4 += runtime_mem_cycles(_ea_08050EF4, 4u, 0u);
    uint32_t _v_08050EF4;
    { uint32_t _w = bus_read_u32(_ea_08050EF4 & ~3u); uint32_t _rot = (_ea_08050EF4 & 3u) * 8u; _v_08050EF4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050EF4;
    g_cpu.R[15] = 0x08050EF6u;
    runtime_tick(_cyc_08050EF4);
    }
L_08050EF6:
    /* 08050EF6  08050ef6 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050EF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EF6 = 1u;
    _cyc_08050EF6 = 1u;
    uint32_t _base_08050EF6 = g_cpu.R[2];
    uint32_t _off_08050EF6;
    _off_08050EF6 = 0x00000004u;
    uint32_t _ea_08050EF6 = _base_08050EF6 + _off_08050EF6;
    uint32_t _post_08050EF6 = _base_08050EF6 + _off_08050EF6;
    _cyc_08050EF6 += runtime_mem_cycles(_ea_08050EF6, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050EF6u, _ea_08050EF6 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050EF6 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050EF8u;
    runtime_tick(_cyc_08050EF6);
    }
L_08050EF8:
    /* 08050EF8  08050ef8 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050EF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EF8 = 1u;
    _cyc_08050EF8 = 1u;
    uint32_t _rn_08050EF8 = g_cpu.R[2];
    uint32_t _r_08050EF8;
    _r_08050EF8 = _rn_08050EF8 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050EF8, 0x00000008u, _r_08050EF8);
    g_cpu.R[2] = _r_08050EF8;
    g_cpu.R[15] = 0x08050EFAu;
    runtime_tick(_cyc_08050EF8);
    }
L_08050EFA:
    /* 08050EFA  08050efa T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050EFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EFA = 1u;
    _cyc_08050EFA = 2u;
    uint32_t _base_08050EFA = g_cpu.R[1];
    uint32_t _off_08050EFA;
    _off_08050EFA = 0x00000008u;
    uint32_t _ea_08050EFA = _base_08050EFA + _off_08050EFA;
    uint32_t _post_08050EFA = _base_08050EFA + _off_08050EFA;
    _cyc_08050EFA += runtime_mem_cycles(_ea_08050EFA, 4u, 0u);
    uint32_t _v_08050EFA;
    { uint32_t _w = bus_read_u32(_ea_08050EFA & ~3u); uint32_t _rot = (_ea_08050EFA & 3u) * 8u; _v_08050EFA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050EFA;
    g_cpu.R[15] = 0x08050EFCu;
    runtime_tick(_cyc_08050EFA);
    }
L_08050EFC:
    /* 08050EFC  08050efc T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050EFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EFC = 1u;
    _cyc_08050EFC = 1u;
    uint32_t _rm_08050EFC = g_cpu.R[5];
    uint32_t _op2_08050EFC;
    uint32_t _co_08050EFC;
    _op2_08050EFC = _rm_08050EFC;
    _co_08050EFC = cpsr_c();
    uint32_t _rn_08050EFC = g_cpu.R[1];
    uint32_t _r_08050EFC;
    _r_08050EFC = _rn_08050EFC - _op2_08050EFC;
    arm_set_nzcv_sub(_rn_08050EFC, _op2_08050EFC, _r_08050EFC);
    g_cpu.R[15] = 0x08050EFEu;
    runtime_tick(_cyc_08050EFC);
    }
L_08050EFE:
    /* 08050EFE  08050efe T bne 0x08050ef0 */
    {
    g_cpu.R[15] = 0x08050EFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EFE = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050EFE = 3u;
        g_cpu.R[15] = 0x08050EF0u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050EFEu, 0x08050EF0u, 0u, 0u);
        runtime_tick(_cyc_08050EFE);
        goto L_08050EF0;
    }
    g_cpu.R[15] = 0x08050F00u;
    runtime_tick(_cyc_08050EFE);
    }
    /* fall-through to 0x08050F00 */
    g_cpu.R[15] = 0x08050F00u;
    runtime_dispatch(0x08050F00u);
    return;
}

/* 0x08050F1A  mode=thumb  end=0x08050F20  branches=4  indirect */
void gf_tfunc_08050F1A(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050F1Cu: goto L_08050F1C;
        case 0x08050F1Eu: goto L_08050F1E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050F1Au);
    /* 08050F1A  08050f1a T ldr r1,[r3,#0x18] */
    {
    g_cpu.R[15] = 0x08050F1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F1A = 1u;
    _cyc_08050F1A = 2u;
    uint32_t _base_08050F1A = g_cpu.R[3];
    uint32_t _off_08050F1A;
    _off_08050F1A = 0x00000018u;
    uint32_t _ea_08050F1A = _base_08050F1A + _off_08050F1A;
    uint32_t _post_08050F1A = _base_08050F1A + _off_08050F1A;
    _cyc_08050F1A += runtime_mem_cycles(_ea_08050F1A, 4u, 0u);
    uint32_t _v_08050F1A;
    { uint32_t _w = bus_read_u32(_ea_08050F1A & ~3u); uint32_t _rot = (_ea_08050F1A & 3u) * 8u; _v_08050F1A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050F1A;
    g_cpu.R[15] = 0x08050F1Cu;
    runtime_tick(_cyc_08050F1A);
    }
L_08050F1C:
    /* 08050F1C  08050f1c T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050F1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F1C = 1u;
    _cyc_08050F1C = 1u;
    uint32_t _rm_08050F1C = g_cpu.R[4];
    uint32_t _op2_08050F1C;
    uint32_t _co_08050F1C;
    _op2_08050F1C = _rm_08050F1C;
    _co_08050F1C = cpsr_c();
    uint32_t _rn_08050F1C = g_cpu.R[1];
    uint32_t _r_08050F1C;
    _r_08050F1C = _rn_08050F1C - _op2_08050F1C;
    arm_set_nzcv_sub(_rn_08050F1C, _op2_08050F1C, _r_08050F1C);
    g_cpu.R[15] = 0x08050F1Eu;
    runtime_tick(_cyc_08050F1C);
    }
L_08050F1E:
    /* 08050F1E  08050f1e T beq 0x08050f30 */
    {
    g_cpu.R[15] = 0x08050F1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F1E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050F1E = 3u;
        g_cpu.R[15] = 0x08050F30u;
        runtime_tick(_cyc_08050F1E);
        gf_tfunc_08050F30();
        return;
    }
    g_cpu.R[15] = 0x08050F20u;
    runtime_tick(_cyc_08050F1E);
    }
    /* fall-through to 0x08050F20 */
    g_cpu.R[15] = 0x08050F20u;
    runtime_dispatch(0x08050F20u);
    return;
}

/* 0x080500A4  mode=thumb  end=0x080500C0  branches=17 */
void gf_tfunc_080500A4(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080500A6u: goto L_080500A6;
        case 0x080500A8u: goto L_080500A8;
        case 0x080500AAu: goto L_080500AA;
        case 0x080500ACu: goto L_080500AC;
        case 0x080500AEu: goto L_080500AE;
        case 0x080500B0u: goto L_080500B0;
        case 0x080500B2u: goto L_080500B2;
        case 0x080500B4u: goto L_080500B4;
        case 0x080500B6u: goto L_080500B6;
        case 0x080500B8u: goto L_080500B8;
        case 0x080500BAu: goto L_080500BA;
        case 0x080500BCu: goto L_080500BC;
        case 0x080500BEu: goto L_080500BE;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080500A4u);
    /* 080500A4  080500a4 T mov r2,r8 */
    {
    g_cpu.R[15] = 0x080500A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500A4 = 1u;
    _cyc_080500A4 = 1u;
    uint32_t _rm_080500A4 = g_cpu.R[8];
    uint32_t _op2_080500A4;
    uint32_t _co_080500A4;
    _op2_080500A4 = _rm_080500A4;
    _co_080500A4 = cpsr_c();
    uint32_t _r_080500A4;
    _r_080500A4 = _op2_080500A4;
    g_cpu.R[2] = _r_080500A4;
    g_cpu.R[15] = 0x080500A6u;
    runtime_tick(_cyc_080500A4);
    }
L_080500A6:
    /* 080500A6  080500a6 T ldrh r1,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x080500A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500A6 = 1u;
    _cyc_080500A6 = 2u;
    uint32_t _base_080500A6 = g_cpu.R[2];
    uint32_t _off_080500A6;
    _off_080500A6 = 0x00000002u;
    uint32_t _ea_080500A6 = _base_080500A6 + _off_080500A6;
    uint32_t _post_080500A6 = _base_080500A6 + _off_080500A6;
    _cyc_080500A6 += runtime_mem_cycles(_ea_080500A6, 2u, 0u);
    uint32_t _v_080500A6;
    { uint32_t _h = bus_read_u16(_ea_080500A6 & ~1u); if (_ea_080500A6 & 1u) _v_080500A6 = ((_h >> 8) | (_h << 24)); else _v_080500A6 = _h; }
    g_cpu.R[1] = _v_080500A6;
    g_cpu.R[15] = 0x080500A8u;
    runtime_tick(_cyc_080500A6);
    }
L_080500A8:
    /* 080500A8  080500a8 T mov r0,r9 */
    {
    g_cpu.R[15] = 0x080500A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500A8 = 1u;
    _cyc_080500A8 = 1u;
    uint32_t _rm_080500A8 = g_cpu.R[9];
    uint32_t _op2_080500A8;
    uint32_t _co_080500A8;
    _op2_080500A8 = _rm_080500A8;
    _co_080500A8 = cpsr_c();
    uint32_t _r_080500A8;
    _r_080500A8 = _op2_080500A8;
    g_cpu.R[0] = _r_080500A8;
    g_cpu.R[15] = 0x080500AAu;
    runtime_tick(_cyc_080500A8);
    }
L_080500AA:
    /* 080500AA  080500aa T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x080500AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500AA = 1u;
    _cyc_080500AA = 1u;
    uint32_t _rm_080500AA = g_cpu.R[1];
    uint32_t _op2_080500AA;
    uint32_t _co_080500AA;
    _op2_080500AA = _rm_080500AA;
    _co_080500AA = cpsr_c();
    uint32_t _rn_080500AA = g_cpu.R[0];
    uint32_t _r_080500AA;
    _r_080500AA = _rn_080500AA & _op2_080500AA;
    arm_set_nzc_logic(_r_080500AA, _co_080500AA);
    g_cpu.R[0] = _r_080500AA;
    g_cpu.R[15] = 0x080500ACu;
    runtime_tick(_cyc_080500AA);
    }
L_080500AC:
    /* 080500AC  080500ac T movs r1,#0x6d */
    {
    g_cpu.R[15] = 0x080500ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500AC = 1u;
    _cyc_080500AC = 1u;
    uint32_t _r_080500AC;
    _r_080500AC = 0x0000006Du;
    arm_set_nzc_logic(_r_080500AC, cpsr_c());
    g_cpu.R[1] = _r_080500AC;
    g_cpu.R[15] = 0x080500AEu;
    runtime_tick(_cyc_080500AC);
    }
L_080500AE:
    /* 080500AE  080500ae T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x080500AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500AE = 1u;
    _cyc_080500AE = 1u;
    uint32_t _rm_080500AE = g_cpu.R[1];
    uint32_t _op2_080500AE;
    uint32_t _co_080500AE;
    _op2_080500AE = _rm_080500AE;
    _co_080500AE = cpsr_c();
    uint32_t _rn_080500AE = g_cpu.R[0];
    uint32_t _r_080500AE;
    _r_080500AE = _rn_080500AE | _op2_080500AE;
    arm_set_nzc_logic(_r_080500AE, _co_080500AE);
    g_cpu.R[0] = _r_080500AE;
    g_cpu.R[15] = 0x080500B0u;
    runtime_tick(_cyc_080500AE);
    }
L_080500B0:
    /* 080500B0  080500b0 T strh r0,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x080500B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500B0 = 1u;
    _cyc_080500B0 = 1u;
    uint32_t _base_080500B0 = g_cpu.R[2];
    uint32_t _off_080500B0;
    _off_080500B0 = 0x00000002u;
    uint32_t _ea_080500B0 = _base_080500B0 + _off_080500B0;
    uint32_t _post_080500B0 = _base_080500B0 + _off_080500B0;
    _cyc_080500B0 += runtime_mem_cycles(_ea_080500B0, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080500B0u, _ea_080500B0 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080500B0 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x080500B2u;
    runtime_tick(_cyc_080500B0);
    }
L_080500B2:
    /* 080500B2  080500b2 T strb r5,[r2] */
    {
    g_cpu.R[15] = 0x080500B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500B2 = 1u;
    _cyc_080500B2 = 1u;
    uint32_t _base_080500B2 = g_cpu.R[2];
    uint32_t _off_080500B2;
    _off_080500B2 = 0x00000000u;
    uint32_t _ea_080500B2 = _base_080500B2 + _off_080500B2;
    uint32_t _post_080500B2 = _base_080500B2 + _off_080500B2;
    _cyc_080500B2 += runtime_mem_cycles(_ea_080500B2, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080500B2u, _ea_080500B2, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_080500B2, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[15] = 0x080500B4u;
    runtime_tick(_cyc_080500B2);
    }
L_080500B4:
    /* 080500B4  080500b4 T ldrb r0,[r6] */
    {
    g_cpu.R[15] = 0x080500B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500B4 = 1u;
    _cyc_080500B4 = 2u;
    uint32_t _base_080500B4 = g_cpu.R[6];
    uint32_t _off_080500B4;
    _off_080500B4 = 0x00000000u;
    uint32_t _ea_080500B4 = _base_080500B4 + _off_080500B4;
    uint32_t _post_080500B4 = _base_080500B4 + _off_080500B4;
    _cyc_080500B4 += runtime_mem_cycles(_ea_080500B4, 1u, 0u);
    uint32_t _v_080500B4;
    _v_080500B4 = bus_read_u8(_ea_080500B4);
    g_cpu.R[0] = _v_080500B4;
    g_cpu.R[15] = 0x080500B6u;
    runtime_tick(_cyc_080500B4);
    }
L_080500B6:
    /* 080500B6  080500b6 T ands r4,r4,r0 */
    {
    g_cpu.R[15] = 0x080500B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500B6 = 1u;
    _cyc_080500B6 = 1u;
    uint32_t _rm_080500B6 = g_cpu.R[0];
    uint32_t _op2_080500B6;
    uint32_t _co_080500B6;
    _op2_080500B6 = _rm_080500B6;
    _co_080500B6 = cpsr_c();
    uint32_t _rn_080500B6 = g_cpu.R[4];
    uint32_t _r_080500B6;
    _r_080500B6 = _rn_080500B6 & _op2_080500B6;
    arm_set_nzc_logic(_r_080500B6, _co_080500B6);
    g_cpu.R[4] = _r_080500B6;
    g_cpu.R[15] = 0x080500B8u;
    runtime_tick(_cyc_080500B6);
    }
L_080500B8:
    /* 080500B8  080500b8 T movs r2,#0x2 */
    {
    g_cpu.R[15] = 0x080500B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500B8 = 1u;
    _cyc_080500B8 = 1u;
    uint32_t _r_080500B8;
    _r_080500B8 = 0x00000002u;
    arm_set_nzc_logic(_r_080500B8, cpsr_c());
    g_cpu.R[2] = _r_080500B8;
    g_cpu.R[15] = 0x080500BAu;
    runtime_tick(_cyc_080500B8);
    }
L_080500BA:
    /* 080500BA  080500ba T cmps r4,#0x0 */
    {
    g_cpu.R[15] = 0x080500BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500BA = 1u;
    _cyc_080500BA = 1u;
    uint32_t _rn_080500BA = g_cpu.R[4];
    uint32_t _r_080500BA;
    _r_080500BA = _rn_080500BA - 0x00000000u;
    arm_set_nzcv_sub(_rn_080500BA, 0x00000000u, _r_080500BA);
    g_cpu.R[15] = 0x080500BCu;
    runtime_tick(_cyc_080500BA);
    }
L_080500BC:
    /* 080500BC  080500bc T bne 0x080500c0 */
    {
    g_cpu.R[15] = 0x080500BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500BC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080500BC = 3u;
        g_cpu.R[15] = 0x080500C0u;
        runtime_tick(_cyc_080500BC);
        gf_tfunc_080500C0();
        return;
    }
    g_cpu.R[15] = 0x080500BEu;
    runtime_tick(_cyc_080500BC);
    }
L_080500BE:
    /* 080500BE  080500be T movs r2,#0x3 */
    {
    g_cpu.R[15] = 0x080500BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500BE = 1u;
    _cyc_080500BE = 1u;
    uint32_t _r_080500BE;
    _r_080500BE = 0x00000003u;
    arm_set_nzc_logic(_r_080500BE, cpsr_c());
    g_cpu.R[2] = _r_080500BE;
    g_cpu.R[15] = 0x080500C0u;
    runtime_tick(_cyc_080500BE);
    }
    /* fall-through to 0x080500C0 */
    g_cpu.R[15] = 0x080500C0u;
    runtime_dispatch(0x080500C0u);
    return;
}

/* 0x080501EC  mode=thumb  end=0x080501F8  branches=2 */
void gf_tfunc_080501EC(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080501EEu: goto L_080501EE;
        case 0x080501F0u: goto L_080501F0;
        case 0x080501F2u: goto L_080501F2;
        case 0x080501F4u: goto L_080501F4;
        case 0x080501F6u: goto L_080501F6;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080501ECu);
    /* 080501EC  080501ec T movs r1,#0x7 */
    {
    g_cpu.R[15] = 0x080501ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501EC = 1u;
    _cyc_080501EC = 1u;
    uint32_t _r_080501EC;
    _r_080501EC = 0x00000007u;
    arm_set_nzc_logic(_r_080501EC, cpsr_c());
    g_cpu.R[1] = _r_080501EC;
    g_cpu.R[15] = 0x080501EEu;
    runtime_tick(_cyc_080501EC);
    }
L_080501EE:
    /* 080501EE  080501ee T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x080501EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501EE = 1u;
    _cyc_080501EE = 1u;
    uint32_t _rn_080501EE = g_cpu.R[0];
    uint32_t _r_080501EE;
    _r_080501EE = _rn_080501EE - 0x00000000u;
    arm_set_nzcv_sub(_rn_080501EE, 0x00000000u, _r_080501EE);
    g_cpu.R[15] = 0x080501F0u;
    runtime_tick(_cyc_080501EE);
    }
L_080501F0:
    /* 080501F0  080501f0 T bne 0x080501f8 */
    {
    g_cpu.R[15] = 0x080501F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501F0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080501F0 = 3u;
        g_cpu.R[15] = 0x080501F8u;
        runtime_tick(_cyc_080501F0);
        gf_tfunc_080501F8();
        return;
    }
    g_cpu.R[15] = 0x080501F2u;
    runtime_tick(_cyc_080501F0);
    }
L_080501F2:
    /* 080501F2  080501f2 T movs r2,#0x2f */
    {
    g_cpu.R[15] = 0x080501F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501F2 = 1u;
    _cyc_080501F2 = 1u;
    uint32_t _r_080501F2;
    _r_080501F2 = 0x0000002Fu;
    arm_set_nzc_logic(_r_080501F2, cpsr_c());
    g_cpu.R[2] = _r_080501F2;
    g_cpu.R[15] = 0x080501F4u;
    runtime_tick(_cyc_080501F2);
    }
L_080501F4:
    /* 080501F4  080501f4 T movs r3,#0x28 */
    {
    g_cpu.R[15] = 0x080501F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501F4 = 1u;
    _cyc_080501F4 = 1u;
    uint32_t _r_080501F4;
    _r_080501F4 = 0x00000028u;
    arm_set_nzc_logic(_r_080501F4, cpsr_c());
    g_cpu.R[3] = _r_080501F4;
    g_cpu.R[15] = 0x080501F6u;
    runtime_tick(_cyc_080501F4);
    }
L_080501F6:
    /* 080501F6  080501f6 T b 0x080501fc */
    {
    g_cpu.R[15] = 0x080501F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501F6 = 1u;
    _cyc_080501F6 = 3u;
    g_cpu.R[15] = 0x080501FCu;
    runtime_tick(_cyc_080501F6);
    gf_tfunc_080501FC();
    return;
    g_cpu.R[15] = 0x080501F8u;
    runtime_tick(_cyc_080501F6);
    }
    /* fall-through to 0x080501F8 */
    g_cpu.R[15] = 0x080501F8u;
    runtime_dispatch(0x080501F8u);
    return;
}

/* 0x08050250  mode=thumb  end=0x0805027C  branches=6  indirect */
void gf_tfunc_08050250(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050252u: goto L_08050252;
        case 0x08050254u: goto L_08050254;
        case 0x08050256u: goto L_08050256;
        case 0x08050258u: goto L_08050258;
        case 0x0805025Au: goto L_0805025A;
        case 0x0805025Cu: goto L_0805025C;
        case 0x0805025Eu: goto L_0805025E;
        case 0x08050260u: goto L_08050260;
        case 0x08050262u: goto L_08050262;
        case 0x08050264u: goto L_08050264;
        case 0x08050266u: goto L_08050266;
        case 0x08050268u: goto L_08050268;
        case 0x0805026Au: goto L_0805026A;
        case 0x0805026Cu: goto L_0805026C;
        case 0x0805026Eu: goto L_0805026E;
        case 0x08050270u: goto L_08050270;
        case 0x08050272u: goto L_08050272;
        case 0x08050274u: goto L_08050274;
        case 0x08050276u: goto L_08050276;
        case 0x08050278u: goto L_08050278;
        case 0x0805027Au: goto L_0805027A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050250u);
    /* 08050250  08050250 T ldr r0,[r15,#0x60] */
    {
    g_cpu.R[15] = 0x08050250u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050250 = 1u;
    _cyc_08050250 = 2u;
    uint32_t _base_08050250 = 0x08050254u & ~3u;
    uint32_t _off_08050250;
    _off_08050250 = 0x00000060u;
    uint32_t _ea_08050250 = _base_08050250 + _off_08050250;
    uint32_t _post_08050250 = _base_08050250 + _off_08050250;
    _cyc_08050250 += runtime_mem_cycles(_ea_08050250, 4u, 0u);
    uint32_t _v_08050250;
    { uint32_t _w = bus_read_u32(_ea_08050250 & ~3u); uint32_t _rot = (_ea_08050250 & 3u) * 8u; _v_08050250 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050250;
    g_cpu.R[15] = 0x08050252u;
    runtime_tick(_cyc_08050250);
    }
L_08050252:
    /* 08050252  08050252 T ldrh r2,[r0,#0x2] */
    {
    g_cpu.R[15] = 0x08050252u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050252 = 1u;
    _cyc_08050252 = 2u;
    uint32_t _base_08050252 = g_cpu.R[0];
    uint32_t _off_08050252;
    _off_08050252 = 0x00000002u;
    uint32_t _ea_08050252 = _base_08050252 + _off_08050252;
    uint32_t _post_08050252 = _base_08050252 + _off_08050252;
    _cyc_08050252 += runtime_mem_cycles(_ea_08050252, 2u, 0u);
    uint32_t _v_08050252;
    { uint32_t _h = bus_read_u16(_ea_08050252 & ~1u); if (_ea_08050252 & 1u) _v_08050252 = ((_h >> 8) | (_h << 24)); else _v_08050252 = _h; }
    g_cpu.R[2] = _v_08050252;
    g_cpu.R[15] = 0x08050254u;
    runtime_tick(_cyc_08050252);
    }
L_08050254:
    /* 08050254  08050254 T ldr r1,[r15,#0x60] */
    {
    g_cpu.R[15] = 0x08050254u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050254 = 1u;
    _cyc_08050254 = 2u;
    uint32_t _base_08050254 = 0x08050258u & ~3u;
    uint32_t _off_08050254;
    _off_08050254 = 0x00000060u;
    uint32_t _ea_08050254 = _base_08050254 + _off_08050254;
    uint32_t _post_08050254 = _base_08050254 + _off_08050254;
    _cyc_08050254 += runtime_mem_cycles(_ea_08050254, 4u, 0u);
    uint32_t _v_08050254;
    { uint32_t _w = bus_read_u32(_ea_08050254 & ~3u); uint32_t _rot = (_ea_08050254 & 3u) * 8u; _v_08050254 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050254;
    g_cpu.R[15] = 0x08050256u;
    runtime_tick(_cyc_08050254);
    }
L_08050256:
    /* 08050256  08050256 T adds r0,r1,#0x0 */
    {
    g_cpu.R[15] = 0x08050256u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050256 = 1u;
    _cyc_08050256 = 1u;
    uint32_t _rn_08050256 = g_cpu.R[1];
    uint32_t _r_08050256;
    _r_08050256 = _rn_08050256 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050256, 0x00000000u, _r_08050256);
    g_cpu.R[0] = _r_08050256;
    g_cpu.R[15] = 0x08050258u;
    runtime_tick(_cyc_08050256);
    }
L_08050258:
    /* 08050258  08050258 T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08050258u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050258 = 1u;
    _cyc_08050258 = 1u;
    uint32_t _rm_08050258 = g_cpu.R[2];
    uint32_t _op2_08050258;
    uint32_t _co_08050258;
    _op2_08050258 = _rm_08050258;
    _co_08050258 = cpsr_c();
    uint32_t _rn_08050258 = g_cpu.R[0];
    uint32_t _r_08050258;
    _r_08050258 = _rn_08050258 & _op2_08050258;
    arm_set_nzc_logic(_r_08050258, _co_08050258);
    g_cpu.R[0] = _r_08050258;
    g_cpu.R[15] = 0x0805025Au;
    runtime_tick(_cyc_08050258);
    }
L_0805025A:
    /* 0805025A  0805025a T movs r2,#0x92 */
    {
    g_cpu.R[15] = 0x0805025Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805025A = 1u;
    _cyc_0805025A = 1u;
    uint32_t _r_0805025A;
    _r_0805025A = 0x00000092u;
    arm_set_nzc_logic(_r_0805025A, cpsr_c());
    g_cpu.R[2] = _r_0805025A;
    g_cpu.R[15] = 0x0805025Cu;
    runtime_tick(_cyc_0805025A);
    }
L_0805025C:
    /* 0805025C  0805025c T orrs r0,r0,r2 */
    {
    g_cpu.R[15] = 0x0805025Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805025C = 1u;
    _cyc_0805025C = 1u;
    uint32_t _rm_0805025C = g_cpu.R[2];
    uint32_t _op2_0805025C;
    uint32_t _co_0805025C;
    _op2_0805025C = _rm_0805025C;
    _co_0805025C = cpsr_c();
    uint32_t _rn_0805025C = g_cpu.R[0];
    uint32_t _r_0805025C;
    _r_0805025C = _rn_0805025C | _op2_0805025C;
    arm_set_nzc_logic(_r_0805025C, _co_0805025C);
    g_cpu.R[0] = _r_0805025C;
    g_cpu.R[15] = 0x0805025Eu;
    runtime_tick(_cyc_0805025C);
    }
L_0805025E:
    /* 0805025E  0805025e T ldr r2,[r15,#0x54] */
    {
    g_cpu.R[15] = 0x0805025Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805025E = 1u;
    _cyc_0805025E = 2u;
    uint32_t _base_0805025E = 0x08050262u & ~3u;
    uint32_t _off_0805025E;
    _off_0805025E = 0x00000054u;
    uint32_t _ea_0805025E = _base_0805025E + _off_0805025E;
    uint32_t _post_0805025E = _base_0805025E + _off_0805025E;
    _cyc_0805025E += runtime_mem_cycles(_ea_0805025E, 4u, 0u);
    uint32_t _v_0805025E;
    { uint32_t _w = bus_read_u32(_ea_0805025E & ~3u); uint32_t _rot = (_ea_0805025E & 3u) * 8u; _v_0805025E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0805025E;
    g_cpu.R[15] = 0x08050260u;
    runtime_tick(_cyc_0805025E);
    }
L_08050260:
    /* 08050260  08050260 T strh r0,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x08050260u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050260 = 1u;
    _cyc_08050260 = 1u;
    uint32_t _base_08050260 = g_cpu.R[2];
    uint32_t _off_08050260;
    _off_08050260 = 0x00000002u;
    uint32_t _ea_08050260 = _base_08050260 + _off_08050260;
    uint32_t _post_08050260 = _base_08050260 + _off_08050260;
    _cyc_08050260 += runtime_mem_cycles(_ea_08050260, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050260u, _ea_08050260 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08050260 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08050262u;
    runtime_tick(_cyc_08050260);
    }
L_08050262:
    /* 08050262  08050262 T ldr r2,[r15,#0x58] */
    {
    g_cpu.R[15] = 0x08050262u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050262 = 1u;
    _cyc_08050262 = 2u;
    uint32_t _base_08050262 = 0x08050266u & ~3u;
    uint32_t _off_08050262;
    _off_08050262 = 0x00000058u;
    uint32_t _ea_08050262 = _base_08050262 + _off_08050262;
    uint32_t _post_08050262 = _base_08050262 + _off_08050262;
    _cyc_08050262 += runtime_mem_cycles(_ea_08050262, 4u, 0u);
    uint32_t _v_08050262;
    { uint32_t _w = bus_read_u32(_ea_08050262 & ~3u); uint32_t _rot = (_ea_08050262 & 3u) * 8u; _v_08050262 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08050262;
    g_cpu.R[15] = 0x08050264u;
    runtime_tick(_cyc_08050262);
    }
L_08050264:
    /* 08050264  08050264 T ldrh r0,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x08050264u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050264 = 1u;
    _cyc_08050264 = 2u;
    uint32_t _base_08050264 = g_cpu.R[2];
    uint32_t _off_08050264;
    _off_08050264 = 0x00000002u;
    uint32_t _ea_08050264 = _base_08050264 + _off_08050264;
    uint32_t _post_08050264 = _base_08050264 + _off_08050264;
    _cyc_08050264 += runtime_mem_cycles(_ea_08050264, 2u, 0u);
    uint32_t _v_08050264;
    { uint32_t _h = bus_read_u16(_ea_08050264 & ~1u); if (_ea_08050264 & 1u) _v_08050264 = ((_h >> 8) | (_h << 24)); else _v_08050264 = _h; }
    g_cpu.R[0] = _v_08050264;
    g_cpu.R[15] = 0x08050266u;
    runtime_tick(_cyc_08050264);
    }
L_08050266:
    /* 08050266  08050266 T ands r1,r1,r0 */
    {
    g_cpu.R[15] = 0x08050266u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050266 = 1u;
    _cyc_08050266 = 1u;
    uint32_t _rm_08050266 = g_cpu.R[0];
    uint32_t _op2_08050266;
    uint32_t _co_08050266;
    _op2_08050266 = _rm_08050266;
    _co_08050266 = cpsr_c();
    uint32_t _rn_08050266 = g_cpu.R[1];
    uint32_t _r_08050266;
    _r_08050266 = _rn_08050266 & _op2_08050266;
    arm_set_nzc_logic(_r_08050266, _co_08050266);
    g_cpu.R[1] = _r_08050266;
    g_cpu.R[15] = 0x08050268u;
    runtime_tick(_cyc_08050266);
    }
L_08050268:
    /* 08050268  08050268 T movs r0,#0xd7 */
    {
    g_cpu.R[15] = 0x08050268u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050268 = 1u;
    _cyc_08050268 = 1u;
    uint32_t _r_08050268;
    _r_08050268 = 0x000000D7u;
    arm_set_nzc_logic(_r_08050268, cpsr_c());
    g_cpu.R[0] = _r_08050268;
    g_cpu.R[15] = 0x0805026Au;
    runtime_tick(_cyc_08050268);
    }
L_0805026A:
    /* 0805026A  0805026a T orrs r1,r1,r0 */
    {
    g_cpu.R[15] = 0x0805026Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805026A = 1u;
    _cyc_0805026A = 1u;
    uint32_t _rm_0805026A = g_cpu.R[0];
    uint32_t _op2_0805026A;
    uint32_t _co_0805026A;
    _op2_0805026A = _rm_0805026A;
    _co_0805026A = cpsr_c();
    uint32_t _rn_0805026A = g_cpu.R[1];
    uint32_t _r_0805026A;
    _r_0805026A = _rn_0805026A | _op2_0805026A;
    arm_set_nzc_logic(_r_0805026A, _co_0805026A);
    g_cpu.R[1] = _r_0805026A;
    g_cpu.R[15] = 0x0805026Cu;
    runtime_tick(_cyc_0805026A);
    }
L_0805026C:
    /* 0805026C  0805026c T strh r1,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x0805026Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805026C = 1u;
    _cyc_0805026C = 1u;
    uint32_t _base_0805026C = g_cpu.R[2];
    uint32_t _off_0805026C;
    _off_0805026C = 0x00000002u;
    uint32_t _ea_0805026C = _base_0805026C + _off_0805026C;
    uint32_t _post_0805026C = _base_0805026C + _off_0805026C;
    _cyc_0805026C += runtime_mem_cycles(_ea_0805026C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805026Cu, _ea_0805026C & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805026C & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x0805026Eu;
    runtime_tick(_cyc_0805026C);
    }
L_0805026E:
    /* 0805026E  0805026e T adds r0,r7,#0x0 */
    {
    g_cpu.R[15] = 0x0805026Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805026E = 1u;
    _cyc_0805026E = 1u;
    uint32_t _rn_0805026E = g_cpu.R[7];
    uint32_t _r_0805026E;
    _r_0805026E = _rn_0805026E + 0x00000000u;
    arm_set_nzcv_add(_rn_0805026E, 0x00000000u, _r_0805026E);
    g_cpu.R[0] = _r_0805026E;
    g_cpu.R[15] = 0x08050270u;
    runtime_tick(_cyc_0805026E);
    }
L_08050270:
    /* 08050270  08050270 T adds r0,r0,#0x22 */
    {
    g_cpu.R[15] = 0x08050270u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050270 = 1u;
    _cyc_08050270 = 1u;
    uint32_t _rn_08050270 = g_cpu.R[0];
    uint32_t _r_08050270;
    _r_08050270 = _rn_08050270 + 0x00000022u;
    arm_set_nzcv_add(_rn_08050270, 0x00000022u, _r_08050270);
    g_cpu.R[0] = _r_08050270;
    g_cpu.R[15] = 0x08050272u;
    runtime_tick(_cyc_08050270);
    }
L_08050272:
    /* 08050272  08050272 T movs r1,#0x0 */
    {
    g_cpu.R[15] = 0x08050272u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050272 = 1u;
    _cyc_08050272 = 1u;
    uint32_t _r_08050272;
    _r_08050272 = 0x00000000u;
    arm_set_nzc_logic(_r_08050272, cpsr_c());
    g_cpu.R[1] = _r_08050272;
    g_cpu.R[15] = 0x08050274u;
    runtime_tick(_cyc_08050272);
    }
L_08050274:
    /* 08050274  08050274 T ldrsb r1,[r0,+r1] */
    {
    g_cpu.R[15] = 0x08050274u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050274 = 1u;
    _cyc_08050274 = 2u;
    uint32_t _base_08050274 = g_cpu.R[0];
    uint32_t _off_08050274;
    uint32_t _morm_08050274 = g_cpu.R[1];
    _off_08050274 = _morm_08050274;
    uint32_t _ea_08050274 = _base_08050274 + _off_08050274;
    uint32_t _post_08050274 = _base_08050274 + _off_08050274;
    _cyc_08050274 += runtime_mem_cycles(_ea_08050274, 1u, 0u);
    uint32_t _v_08050274;
    _v_08050274 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_08050274);
    g_cpu.R[1] = _v_08050274;
    g_cpu.R[15] = 0x08050276u;
    runtime_tick(_cyc_08050274);
    }
L_08050276:
    /* 08050276  08050276 T movs r0,#0xb */
    {
    g_cpu.R[15] = 0x08050276u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050276 = 1u;
    _cyc_08050276 = 1u;
    uint32_t _r_08050276;
    _r_08050276 = 0x0000000Bu;
    arm_set_nzc_logic(_r_08050276, cpsr_c());
    g_cpu.R[0] = _r_08050276;
    g_cpu.R[15] = 0x08050278u;
    runtime_tick(_cyc_08050276);
    }
L_08050278:
    /* 08050278  08050278 T muls r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08050278u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050278 = 1u;
    _cyc_08050278 = 1u;
    _cyc_08050278 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_08050278 = g_cpu.R[0] * g_cpu.R[1];
    g_cpu.R[0] = _r_08050278;
    arm_set_nz(_r_08050278);
    g_cpu.R[15] = 0x0805027Au;
    runtime_tick(_cyc_08050278);
    }
L_0805027A:
    /* 0805027A  0805027a T adds r0,r0,#0x44 */
    {
    g_cpu.R[15] = 0x0805027Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805027A = 1u;
    _cyc_0805027A = 1u;
    uint32_t _rn_0805027A = g_cpu.R[0];
    uint32_t _r_0805027A;
    _r_0805027A = _rn_0805027A + 0x00000044u;
    arm_set_nzcv_add(_rn_0805027A, 0x00000044u, _r_0805027A);
    g_cpu.R[0] = _r_0805027A;
    g_cpu.R[15] = 0x0805027Cu;
    runtime_tick(_cyc_0805027A);
    }
    /* fall-through to 0x0805027C */
    g_cpu.R[15] = 0x0805027Cu;
    runtime_dispatch(0x0805027Cu);
    return;
}

/* 0x08050C58  mode=thumb  end=0x08050C62  branches=0  indirect */
void gf_tfunc_08050C58(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050C5Au: goto L_08050C5A;
        case 0x08050C5Cu: goto L_08050C5C;
        case 0x08050C5Eu: goto L_08050C5E;
        case 0x08050C60u: goto L_08050C60;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050C58u);
    /* 08050C58  08050c58 T movs r0,r1,lsl #2 */
    {
    g_cpu.R[15] = 0x08050C58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C58 = 1u;
    _cyc_08050C58 = 1u;
    uint32_t _rm_08050C58 = g_cpu.R[1];
    uint32_t _op2_08050C58;
    uint32_t _co_08050C58;
    _op2_08050C58 = _rm_08050C58 << 2;
    _co_08050C58 = (_rm_08050C58 >> 30) & 1u;
    uint32_t _r_08050C58;
    _r_08050C58 = _op2_08050C58;
    arm_set_nzc_logic(_r_08050C58, _co_08050C58);
    g_cpu.R[0] = _r_08050C58;
    g_cpu.R[15] = 0x08050C5Au;
    runtime_tick(_cyc_08050C58);
    }
L_08050C5A:
    /* 08050C5A  08050c5a T ldr r1,[r15,#0xc] */
    {
    g_cpu.R[15] = 0x08050C5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C5A = 1u;
    _cyc_08050C5A = 2u;
    uint32_t _base_08050C5A = 0x08050C5Eu & ~3u;
    uint32_t _off_08050C5A;
    _off_08050C5A = 0x0000000Cu;
    uint32_t _ea_08050C5A = _base_08050C5A + _off_08050C5A;
    uint32_t _post_08050C5A = _base_08050C5A + _off_08050C5A;
    _cyc_08050C5A += runtime_mem_cycles(_ea_08050C5A, 4u, 0u);
    uint32_t _v_08050C5A;
    { uint32_t _w = bus_read_u32(_ea_08050C5A & ~3u); uint32_t _rot = (_ea_08050C5A & 3u) * 8u; _v_08050C5A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050C5A;
    g_cpu.R[15] = 0x08050C5Cu;
    runtime_tick(_cyc_08050C5A);
    }
L_08050C5C:
    /* 08050C5C  08050c5c T adds r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08050C5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C5C = 1u;
    _cyc_08050C5C = 1u;
    uint32_t _rm_08050C5C = g_cpu.R[1];
    uint32_t _op2_08050C5C;
    uint32_t _co_08050C5C;
    _op2_08050C5C = _rm_08050C5C;
    _co_08050C5C = cpsr_c();
    uint32_t _rn_08050C5C = g_cpu.R[0];
    uint32_t _r_08050C5C;
    _r_08050C5C = _rn_08050C5C + _op2_08050C5C;
    arm_set_nzcv_add(_rn_08050C5C, _op2_08050C5C, _r_08050C5C);
    g_cpu.R[0] = _r_08050C5C;
    g_cpu.R[15] = 0x08050C5Eu;
    runtime_tick(_cyc_08050C5C);
    }
L_08050C5E:
    /* 08050C5E  08050c5e T ldr r0,[r0] */
    {
    g_cpu.R[15] = 0x08050C5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C5E = 1u;
    _cyc_08050C5E = 2u;
    uint32_t _base_08050C5E = g_cpu.R[0];
    uint32_t _off_08050C5E;
    _off_08050C5E = 0x00000000u;
    uint32_t _ea_08050C5E = _base_08050C5E + _off_08050C5E;
    uint32_t _post_08050C5E = _base_08050C5E + _off_08050C5E;
    _cyc_08050C5E += runtime_mem_cycles(_ea_08050C5E, 4u, 0u);
    uint32_t _v_08050C5E;
    { uint32_t _w = bus_read_u32(_ea_08050C5E & ~3u); uint32_t _rot = (_ea_08050C5E & 3u) * 8u; _v_08050C5E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050C5E;
    g_cpu.R[15] = 0x08050C60u;
    runtime_tick(_cyc_08050C5E);
    }
L_08050C60:
    /* 08050C60  08050c60 T mov r15,r0 */
    {
    g_cpu.R[15] = 0x08050C60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C60 = 1u;
    _cyc_08050C60 = 3u;
    uint32_t _rm_08050C60 = g_cpu.R[0];
    uint32_t _op2_08050C60;
    uint32_t _co_08050C60;
    _op2_08050C60 = _rm_08050C60;
    _co_08050C60 = cpsr_c();
    uint32_t _r_08050C60;
    _r_08050C60 = _op2_08050C60;
    uint32_t _pc_08050C60 = _r_08050C60 & ~1u;
    g_cpu.R[15] = _pc_08050C60;
    runtime_tick(_cyc_08050C60);
    runtime_dispatch(_pc_08050C60);
    return;
    g_cpu.R[15] = 0x08050C62u;
    runtime_tick(_cyc_08050C60);
    }
    /* fall-through to 0x08050C62 */
    g_cpu.R[15] = 0x08050C62u;
    runtime_dispatch(0x08050C62u);
    return;
}

/* 0x08050C94  mode=thumb  end=0x08050CB0  branches=1 */
void gf_autojt_08050C6C_00(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050C96u: goto L_08050C96;
        case 0x08050C98u: goto L_08050C98;
        case 0x08050C9Au: goto L_08050C9A;
        case 0x08050C9Cu: goto L_08050C9C;
        case 0x08050C9Eu: goto L_08050C9E;
        case 0x08050CA0u: goto L_08050CA0;
        case 0x08050CA2u: goto L_08050CA2;
        case 0x08050CA4u: goto L_08050CA4;
        case 0x08050CA6u: goto L_08050CA6;
        case 0x08050CA8u: goto L_08050CA8;
        case 0x08050CAAu: goto L_08050CAA;
        case 0x08050CACu: goto L_08050CAC;
        case 0x08050CAEu: goto L_08050CAE;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050C94u);
    /* 08050C94  08050c94 T ldr r2,[r15,#0x18] */
    {
    g_cpu.R[15] = 0x08050C94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C94 = 1u;
    _cyc_08050C94 = 2u;
    uint32_t _base_08050C94 = 0x08050C98u & ~3u;
    uint32_t _off_08050C94;
    _off_08050C94 = 0x00000018u;
    uint32_t _ea_08050C94 = _base_08050C94 + _off_08050C94;
    uint32_t _post_08050C94 = _base_08050C94 + _off_08050C94;
    _cyc_08050C94 += runtime_mem_cycles(_ea_08050C94, 4u, 0u);
    uint32_t _v_08050C94;
    { uint32_t _w = bus_read_u32(_ea_08050C94 & ~3u); uint32_t _rot = (_ea_08050C94 & 3u) * 8u; _v_08050C94 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08050C94;
    g_cpu.R[15] = 0x08050C96u;
    runtime_tick(_cyc_08050C94);
    }
L_08050C96:
    /* 08050C96  08050c96 T movs r0,#0x8d */
    {
    g_cpu.R[15] = 0x08050C96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C96 = 1u;
    _cyc_08050C96 = 1u;
    uint32_t _r_08050C96;
    _r_08050C96 = 0x0000008Du;
    arm_set_nzc_logic(_r_08050C96, cpsr_c());
    g_cpu.R[0] = _r_08050C96;
    g_cpu.R[15] = 0x08050C98u;
    runtime_tick(_cyc_08050C96);
    }
L_08050C98:
    /* 08050C98  08050c98 T movs r0,r0,lsl #1 */
    {
    g_cpu.R[15] = 0x08050C98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C98 = 1u;
    _cyc_08050C98 = 1u;
    uint32_t _rm_08050C98 = g_cpu.R[0];
    uint32_t _op2_08050C98;
    uint32_t _co_08050C98;
    _op2_08050C98 = _rm_08050C98 << 1;
    _co_08050C98 = (_rm_08050C98 >> 31) & 1u;
    uint32_t _r_08050C98;
    _r_08050C98 = _op2_08050C98;
    arm_set_nzc_logic(_r_08050C98, _co_08050C98);
    g_cpu.R[0] = _r_08050C98;
    g_cpu.R[15] = 0x08050C9Au;
    runtime_tick(_cyc_08050C98);
    }
L_08050C9A:
    /* 08050C9A  08050c9a T adds r3,r2,r0 */
    {
    g_cpu.R[15] = 0x08050C9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C9A = 1u;
    _cyc_08050C9A = 1u;
    uint32_t _rm_08050C9A = g_cpu.R[0];
    uint32_t _op2_08050C9A;
    uint32_t _co_08050C9A;
    _op2_08050C9A = _rm_08050C9A;
    _co_08050C9A = cpsr_c();
    uint32_t _rn_08050C9A = g_cpu.R[2];
    uint32_t _r_08050C9A;
    _r_08050C9A = _rn_08050C9A + _op2_08050C9A;
    arm_set_nzcv_add(_rn_08050C9A, _op2_08050C9A, _r_08050C9A);
    g_cpu.R[3] = _r_08050C9A;
    g_cpu.R[15] = 0x08050C9Cu;
    runtime_tick(_cyc_08050C9A);
    }
L_08050C9C:
    /* 08050C9C  08050c9c T movs r1,#0x0 */
    {
    g_cpu.R[15] = 0x08050C9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C9C = 1u;
    _cyc_08050C9C = 1u;
    uint32_t _r_08050C9C;
    _r_08050C9C = 0x00000000u;
    arm_set_nzc_logic(_r_08050C9C, cpsr_c());
    g_cpu.R[1] = _r_08050C9C;
    g_cpu.R[15] = 0x08050C9Eu;
    runtime_tick(_cyc_08050C9C);
    }
L_08050C9E:
    /* 08050C9E  08050c9e T movs r0,#0xb */
    {
    g_cpu.R[15] = 0x08050C9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050C9E = 1u;
    _cyc_08050C9E = 1u;
    uint32_t _r_08050C9E;
    _r_08050C9E = 0x0000000Bu;
    arm_set_nzc_logic(_r_08050C9E, cpsr_c());
    g_cpu.R[0] = _r_08050C9E;
    g_cpu.R[15] = 0x08050CA0u;
    runtime_tick(_cyc_08050C9E);
    }
L_08050CA0:
    /* 08050CA0  08050ca0 T strb r0,[r3] */
    {
    g_cpu.R[15] = 0x08050CA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CA0 = 1u;
    _cyc_08050CA0 = 1u;
    uint32_t _base_08050CA0 = g_cpu.R[3];
    uint32_t _off_08050CA0;
    _off_08050CA0 = 0x00000000u;
    uint32_t _ea_08050CA0 = _base_08050CA0 + _off_08050CA0;
    uint32_t _post_08050CA0 = _base_08050CA0 + _off_08050CA0;
    _cyc_08050CA0 += runtime_mem_cycles(_ea_08050CA0, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050CA0u, _ea_08050CA0, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050CA0, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050CA2u;
    runtime_tick(_cyc_08050CA0);
    }
L_08050CA2:
    /* 08050CA2  08050ca2 T ldr r3,[r15,#0x10] */
    {
    g_cpu.R[15] = 0x08050CA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CA2 = 1u;
    _cyc_08050CA2 = 2u;
    uint32_t _base_08050CA2 = 0x08050CA6u & ~3u;
    uint32_t _off_08050CA2;
    _off_08050CA2 = 0x00000010u;
    uint32_t _ea_08050CA2 = _base_08050CA2 + _off_08050CA2;
    uint32_t _post_08050CA2 = _base_08050CA2 + _off_08050CA2;
    _cyc_08050CA2 += runtime_mem_cycles(_ea_08050CA2, 4u, 0u);
    uint32_t _v_08050CA2;
    { uint32_t _w = bus_read_u32(_ea_08050CA2 & ~3u); uint32_t _rot = (_ea_08050CA2 & 3u) * 8u; _v_08050CA2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08050CA2;
    g_cpu.R[15] = 0x08050CA4u;
    runtime_tick(_cyc_08050CA2);
    }
L_08050CA4:
    /* 08050CA4  08050ca4 T adds r0,r2,r3 */
    {
    g_cpu.R[15] = 0x08050CA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CA4 = 1u;
    _cyc_08050CA4 = 1u;
    uint32_t _rm_08050CA4 = g_cpu.R[3];
    uint32_t _op2_08050CA4;
    uint32_t _co_08050CA4;
    _op2_08050CA4 = _rm_08050CA4;
    _co_08050CA4 = cpsr_c();
    uint32_t _rn_08050CA4 = g_cpu.R[2];
    uint32_t _r_08050CA4;
    _r_08050CA4 = _rn_08050CA4 + _op2_08050CA4;
    arm_set_nzcv_add(_rn_08050CA4, _op2_08050CA4, _r_08050CA4);
    g_cpu.R[0] = _r_08050CA4;
    g_cpu.R[15] = 0x08050CA6u;
    runtime_tick(_cyc_08050CA4);
    }
L_08050CA6:
    /* 08050CA6  08050ca6 T strb r1,[r0] */
    {
    g_cpu.R[15] = 0x08050CA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CA6 = 1u;
    _cyc_08050CA6 = 1u;
    uint32_t _base_08050CA6 = g_cpu.R[0];
    uint32_t _off_08050CA6;
    _off_08050CA6 = 0x00000000u;
    uint32_t _ea_08050CA6 = _base_08050CA6 + _off_08050CA6;
    uint32_t _post_08050CA6 = _base_08050CA6 + _off_08050CA6;
    _cyc_08050CA6 += runtime_mem_cycles(_ea_08050CA6, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050CA6u, _ea_08050CA6, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08050CA6, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08050CA8u;
    runtime_tick(_cyc_08050CA6);
    }
L_08050CA8:
    /* 08050CA8  08050ca8 T adds r3,r3,#0x6 */
    {
    g_cpu.R[15] = 0x08050CA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CA8 = 1u;
    _cyc_08050CA8 = 1u;
    uint32_t _rn_08050CA8 = g_cpu.R[3];
    uint32_t _r_08050CA8;
    _r_08050CA8 = _rn_08050CA8 + 0x00000006u;
    arm_set_nzcv_add(_rn_08050CA8, 0x00000006u, _r_08050CA8);
    g_cpu.R[3] = _r_08050CA8;
    g_cpu.R[15] = 0x08050CAAu;
    runtime_tick(_cyc_08050CA8);
    }
L_08050CAA:
    /* 08050CAA  08050caa T adds r0,r2,r3 */
    {
    g_cpu.R[15] = 0x08050CAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CAA = 1u;
    _cyc_08050CAA = 1u;
    uint32_t _rm_08050CAA = g_cpu.R[3];
    uint32_t _op2_08050CAA;
    uint32_t _co_08050CAA;
    _op2_08050CAA = _rm_08050CAA;
    _co_08050CAA = cpsr_c();
    uint32_t _rn_08050CAA = g_cpu.R[2];
    uint32_t _r_08050CAA;
    _r_08050CAA = _rn_08050CAA + _op2_08050CAA;
    arm_set_nzcv_add(_rn_08050CAA, _op2_08050CAA, _r_08050CAA);
    g_cpu.R[0] = _r_08050CAA;
    g_cpu.R[15] = 0x08050CACu;
    runtime_tick(_cyc_08050CAA);
    }
L_08050CAC:
    /* 08050CAC  08050cac T strb r1,[r0] */
    {
    g_cpu.R[15] = 0x08050CACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CAC = 1u;
    _cyc_08050CAC = 1u;
    uint32_t _base_08050CAC = g_cpu.R[0];
    uint32_t _off_08050CAC;
    _off_08050CAC = 0x00000000u;
    uint32_t _ea_08050CAC = _base_08050CAC + _off_08050CAC;
    uint32_t _post_08050CAC = _base_08050CAC + _off_08050CAC;
    _cyc_08050CAC += runtime_mem_cycles(_ea_08050CAC, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050CACu, _ea_08050CAC, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08050CAC, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08050CAEu;
    runtime_tick(_cyc_08050CAC);
    }
L_08050CAE:
    /* 08050CAE  08050cae T b 0x08050d62 */
    {
    g_cpu.R[15] = 0x08050CAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CAE = 1u;
    _cyc_08050CAE = 3u;
    g_cpu.R[15] = 0x08050D62u;
    runtime_tick(_cyc_08050CAE);
    gf_tfunc_08050D62();
    return;
    g_cpu.R[15] = 0x08050CB0u;
    runtime_tick(_cyc_08050CAE);
    }
    /* fall-through to 0x08050CB0 */
    g_cpu.R[15] = 0x08050CB0u;
    runtime_dispatch(0x08050CB0u);
    return;
}

/* 0x08050D8A  mode=thumb  end=0x08050D8E  branches=36  indirect */
void gf_tfunc_08050D8A(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D8Cu: goto L_08050D8C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D8Au);
    /* 08050D8A  08050d8a T bl.hi 0x0804dd8e */
    {
    g_cpu.R[15] = 0x08050D8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D8A = 1u;
    _cyc_08050D8A = 1u;
    g_cpu.R[14] = 0x0804DD8Eu;
    g_cpu.R[15] = 0x08050D8Cu;
    runtime_tick(_cyc_08050D8A);
    }
L_08050D8C:
    /* 08050D8C  08050d8c T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08050D8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D8C = 1u;
    _cyc_08050D8C = 3u;
    uint32_t _blt_08050D8C = (g_cpu.R[14] + 0x0000002Eu) & ~1u;
    g_cpu.R[14] = 0x08050D8Fu;
    g_cpu.R[15] = _blt_08050D8C;
    runtime_call_push_return(0x08050D8Eu);
    runtime_tick(_cyc_08050D8C);
    _cyc_08050D8C = 0u;
    runtime_dispatch(_blt_08050D8C);
    if (g_cpu.R[15] != 0x08050D8Eu) { runtime_call_cancel_return(0x08050D8Eu); return; }
    g_cpu.R[15] = 0x08050D8Eu;
    runtime_tick(_cyc_08050D8C);
    }
    /* fall-through to 0x08050D8E */
    g_cpu.R[15] = 0x08050D8Eu;
    runtime_dispatch(0x08050D8Eu);
    return;
}

/* 0x08050E6E  mode=thumb  end=0x08050E7E  branches=17  indirect */
void gf_tfunc_08050E6E(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E70u: goto L_08050E70;
        case 0x08050E72u: goto L_08050E72;
        case 0x08050E74u: goto L_08050E74;
        case 0x08050E76u: goto L_08050E76;
        case 0x08050E78u: goto L_08050E78;
        case 0x08050E7Au: goto L_08050E7A;
        case 0x08050E7Cu: goto L_08050E7C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E6Eu);
L_08050E6E:
    /* 08050E6E  08050e6e T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050E6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E6E = 1u;
    _cyc_08050E6E = 2u;
    uint32_t _base_08050E6E = g_cpu.R[1];
    uint32_t _off_08050E6E;
    _off_08050E6E = 0x00000000u;
    uint32_t _ea_08050E6E = _base_08050E6E + _off_08050E6E;
    uint32_t _post_08050E6E = _base_08050E6E + _off_08050E6E;
    _cyc_08050E6E += runtime_mem_cycles(_ea_08050E6E, 4u, 0u);
    uint32_t _v_08050E6E;
    { uint32_t _w = bus_read_u32(_ea_08050E6E & ~3u); uint32_t _rot = (_ea_08050E6E & 3u) * 8u; _v_08050E6E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E6E;
    g_cpu.R[15] = 0x08050E70u;
    runtime_tick(_cyc_08050E6E);
    }
L_08050E70:
    /* 08050E70  08050e70 T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050E70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E70 = 1u;
    _cyc_08050E70 = 1u;
    uint32_t _base_08050E70 = g_cpu.R[2];
    uint32_t _off_08050E70;
    _off_08050E70 = 0x00000000u;
    uint32_t _ea_08050E70 = _base_08050E70 + _off_08050E70;
    uint32_t _post_08050E70 = _base_08050E70 + _off_08050E70;
    _cyc_08050E70 += runtime_mem_cycles(_ea_08050E70, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E70u, _ea_08050E70 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E70 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E72u;
    runtime_tick(_cyc_08050E70);
    }
L_08050E72:
    /* 08050E72  08050e72 T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050E72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E72 = 1u;
    _cyc_08050E72 = 2u;
    uint32_t _base_08050E72 = g_cpu.R[1];
    uint32_t _off_08050E72;
    _off_08050E72 = 0x00000004u;
    uint32_t _ea_08050E72 = _base_08050E72 + _off_08050E72;
    uint32_t _post_08050E72 = _base_08050E72 + _off_08050E72;
    _cyc_08050E72 += runtime_mem_cycles(_ea_08050E72, 4u, 0u);
    uint32_t _v_08050E72;
    { uint32_t _w = bus_read_u32(_ea_08050E72 & ~3u); uint32_t _rot = (_ea_08050E72 & 3u) * 8u; _v_08050E72 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E72;
    g_cpu.R[15] = 0x08050E74u;
    runtime_tick(_cyc_08050E72);
    }
L_08050E74:
    /* 08050E74  08050e74 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050E74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E74 = 1u;
    _cyc_08050E74 = 1u;
    uint32_t _base_08050E74 = g_cpu.R[2];
    uint32_t _off_08050E74;
    _off_08050E74 = 0x00000004u;
    uint32_t _ea_08050E74 = _base_08050E74 + _off_08050E74;
    uint32_t _post_08050E74 = _base_08050E74 + _off_08050E74;
    _cyc_08050E74 += runtime_mem_cycles(_ea_08050E74, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E74u, _ea_08050E74 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E74 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E76u;
    runtime_tick(_cyc_08050E74);
    }
L_08050E76:
    /* 08050E76  08050e76 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050E76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E76 = 1u;
    _cyc_08050E76 = 1u;
    uint32_t _rn_08050E76 = g_cpu.R[2];
    uint32_t _r_08050E76;
    _r_08050E76 = _rn_08050E76 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050E76, 0x00000008u, _r_08050E76);
    g_cpu.R[2] = _r_08050E76;
    g_cpu.R[15] = 0x08050E78u;
    runtime_tick(_cyc_08050E76);
    }
L_08050E78:
    /* 08050E78  08050e78 T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050E78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E78 = 1u;
    _cyc_08050E78 = 2u;
    uint32_t _base_08050E78 = g_cpu.R[1];
    uint32_t _off_08050E78;
    _off_08050E78 = 0x00000008u;
    uint32_t _ea_08050E78 = _base_08050E78 + _off_08050E78;
    uint32_t _post_08050E78 = _base_08050E78 + _off_08050E78;
    _cyc_08050E78 += runtime_mem_cycles(_ea_08050E78, 4u, 0u);
    uint32_t _v_08050E78;
    { uint32_t _w = bus_read_u32(_ea_08050E78 & ~3u); uint32_t _rot = (_ea_08050E78 & 3u) * 8u; _v_08050E78 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E78;
    g_cpu.R[15] = 0x08050E7Au;
    runtime_tick(_cyc_08050E78);
    }
L_08050E7A:
    /* 08050E7A  08050e7a T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050E7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E7A = 1u;
    _cyc_08050E7A = 1u;
    uint32_t _rm_08050E7A = g_cpu.R[5];
    uint32_t _op2_08050E7A;
    uint32_t _co_08050E7A;
    _op2_08050E7A = _rm_08050E7A;
    _co_08050E7A = cpsr_c();
    uint32_t _rn_08050E7A = g_cpu.R[1];
    uint32_t _r_08050E7A;
    _r_08050E7A = _rn_08050E7A - _op2_08050E7A;
    arm_set_nzcv_sub(_rn_08050E7A, _op2_08050E7A, _r_08050E7A);
    g_cpu.R[15] = 0x08050E7Cu;
    runtime_tick(_cyc_08050E7A);
    }
L_08050E7C:
    /* 08050E7C  08050e7c T bne 0x08050e6e */
    {
    g_cpu.R[15] = 0x08050E7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E7C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050E7C = 3u;
        g_cpu.R[15] = 0x08050E6Eu;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050E7Cu, 0x08050E6Eu, 0u, 0u);
        runtime_tick(_cyc_08050E7C);
        goto L_08050E6E;
    }
    g_cpu.R[15] = 0x08050E7Eu;
    runtime_tick(_cyc_08050E7C);
    }
    /* fall-through to 0x08050E7E */
    g_cpu.R[15] = 0x08050E7Eu;
    runtime_dispatch(0x08050E7Eu);
    return;
}

/* 0x08050E7E  mode=thumb  end=0x08050E88  branches=16  indirect */
void gf_tfunc_08050E7E(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E80u: goto L_08050E80;
        case 0x08050E82u: goto L_08050E82;
        case 0x08050E84u: goto L_08050E84;
        case 0x08050E86u: goto L_08050E86;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E7Eu);
    /* 08050E7E  08050e7e T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050E7Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E7E = 1u;
    _cyc_08050E7E = 1u;
    uint32_t _rn_08050E7E = g_cpu.R[3];
    uint32_t _r_08050E7E;
    _r_08050E7E = _rn_08050E7E + 0x00000010u;
    arm_set_nzcv_add(_rn_08050E7E, 0x00000010u, _r_08050E7E);
    g_cpu.R[3] = _r_08050E7E;
    g_cpu.R[15] = 0x08050E80u;
    runtime_tick(_cyc_08050E7E);
    }
L_08050E80:
    /* 08050E80  08050e80 T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050E80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E80 = 1u;
    _cyc_08050E80 = 1u;
    uint32_t _rn_08050E80 = g_cpu.R[4];
    uint32_t _r_08050E80;
    _r_08050E80 = _rn_08050E80 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050E80, 0x00000000u, _r_08050E80);
    g_cpu.R[5] = _r_08050E80;
    g_cpu.R[15] = 0x08050E82u;
    runtime_tick(_cyc_08050E80);
    }
L_08050E82:
    /* 08050E82  08050e82 T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050E82u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E82 = 1u;
    _cyc_08050E82 = 2u;
    uint32_t _base_08050E82 = g_cpu.R[3];
    uint32_t _off_08050E82;
    _off_08050E82 = 0x00000008u;
    uint32_t _ea_08050E82 = _base_08050E82 + _off_08050E82;
    uint32_t _post_08050E82 = _base_08050E82 + _off_08050E82;
    _cyc_08050E82 += runtime_mem_cycles(_ea_08050E82, 4u, 0u);
    uint32_t _v_08050E82;
    { uint32_t _w = bus_read_u32(_ea_08050E82 & ~3u); uint32_t _rot = (_ea_08050E82 & 3u) * 8u; _v_08050E82 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E82;
    g_cpu.R[15] = 0x08050E84u;
    runtime_tick(_cyc_08050E82);
    }
L_08050E84:
    /* 08050E84  08050e84 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050E84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E84 = 1u;
    _cyc_08050E84 = 1u;
    uint32_t _rm_08050E84 = g_cpu.R[4];
    uint32_t _op2_08050E84;
    uint32_t _co_08050E84;
    _op2_08050E84 = _rm_08050E84;
    _co_08050E84 = cpsr_c();
    uint32_t _rn_08050E84 = g_cpu.R[1];
    uint32_t _r_08050E84;
    _r_08050E84 = _rn_08050E84 - _op2_08050E84;
    arm_set_nzcv_sub(_rn_08050E84, _op2_08050E84, _r_08050E84);
    g_cpu.R[15] = 0x08050E86u;
    runtime_tick(_cyc_08050E84);
    }
L_08050E86:
    /* 08050E86  08050e86 T beq 0x08050e98 */
    {
    g_cpu.R[15] = 0x08050E86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E86 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050E86 = 3u;
        g_cpu.R[15] = 0x08050E98u;
        runtime_tick(_cyc_08050E86);
        gf_tfunc_08050E98();
        return;
    }
    g_cpu.R[15] = 0x08050E88u;
    runtime_tick(_cyc_08050E86);
    }
    /* fall-through to 0x08050E88 */
    g_cpu.R[15] = 0x08050E88u;
    runtime_dispatch(0x08050E88u);
    return;
}

/* 0x08050D4C  mode=thumb  end=0x08050D58  branches=46  indirect */
void gf_autojt_08050C6C_09(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D4Eu: goto L_08050D4E;
        case 0x08050D50u: goto L_08050D50;
        case 0x08050D52u: goto L_08050D52;
        case 0x08050D54u: goto L_08050D54;
        case 0x08050D56u: goto L_08050D56;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D4Cu);
    /* 08050D4C  08050d4c T ldr r0,[r15,#0x1f0] */
    {
    g_cpu.R[15] = 0x08050D4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D4C = 1u;
    _cyc_08050D4C = 2u;
    uint32_t _base_08050D4C = 0x08050D50u & ~3u;
    uint32_t _off_08050D4C;
    _off_08050D4C = 0x000001F0u;
    uint32_t _ea_08050D4C = _base_08050D4C + _off_08050D4C;
    uint32_t _post_08050D4C = _base_08050D4C + _off_08050D4C;
    _cyc_08050D4C += runtime_mem_cycles(_ea_08050D4C, 4u, 0u);
    uint32_t _v_08050D4C;
    { uint32_t _w = bus_read_u32(_ea_08050D4C & ~3u); uint32_t _rot = (_ea_08050D4C & 3u) * 8u; _v_08050D4C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050D4C;
    g_cpu.R[15] = 0x08050D4Eu;
    runtime_tick(_cyc_08050D4C);
    }
L_08050D4E:
    /* 08050D4E  08050d4e T movs r1,#0x8d */
    {
    g_cpu.R[15] = 0x08050D4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D4E = 1u;
    _cyc_08050D4E = 1u;
    uint32_t _r_08050D4E;
    _r_08050D4E = 0x0000008Du;
    arm_set_nzc_logic(_r_08050D4E, cpsr_c());
    g_cpu.R[1] = _r_08050D4E;
    g_cpu.R[15] = 0x08050D50u;
    runtime_tick(_cyc_08050D4E);
    }
L_08050D50:
    /* 08050D50  08050d50 T movs r1,r1,lsl #1 */
    {
    g_cpu.R[15] = 0x08050D50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D50 = 1u;
    _cyc_08050D50 = 1u;
    uint32_t _rm_08050D50 = g_cpu.R[1];
    uint32_t _op2_08050D50;
    uint32_t _co_08050D50;
    _op2_08050D50 = _rm_08050D50 << 1;
    _co_08050D50 = (_rm_08050D50 >> 31) & 1u;
    uint32_t _r_08050D50;
    _r_08050D50 = _op2_08050D50;
    arm_set_nzc_logic(_r_08050D50, _co_08050D50);
    g_cpu.R[1] = _r_08050D50;
    g_cpu.R[15] = 0x08050D52u;
    runtime_tick(_cyc_08050D50);
    }
L_08050D52:
    /* 08050D52  08050d52 T adds r3,r0,r1 */
    {
    g_cpu.R[15] = 0x08050D52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D52 = 1u;
    _cyc_08050D52 = 1u;
    uint32_t _rm_08050D52 = g_cpu.R[1];
    uint32_t _op2_08050D52;
    uint32_t _co_08050D52;
    _op2_08050D52 = _rm_08050D52;
    _co_08050D52 = cpsr_c();
    uint32_t _rn_08050D52 = g_cpu.R[0];
    uint32_t _r_08050D52;
    _r_08050D52 = _rn_08050D52 + _op2_08050D52;
    arm_set_nzcv_add(_rn_08050D52, _op2_08050D52, _r_08050D52);
    g_cpu.R[3] = _r_08050D52;
    g_cpu.R[15] = 0x08050D54u;
    runtime_tick(_cyc_08050D52);
    }
L_08050D54:
    /* 08050D54  08050d54 T movs r2,#0x0 */
    {
    g_cpu.R[15] = 0x08050D54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D54 = 1u;
    _cyc_08050D54 = 1u;
    uint32_t _r_08050D54;
    _r_08050D54 = 0x00000000u;
    arm_set_nzc_logic(_r_08050D54, cpsr_c());
    g_cpu.R[2] = _r_08050D54;
    g_cpu.R[15] = 0x08050D56u;
    runtime_tick(_cyc_08050D54);
    }
L_08050D56:
    /* 08050D56  08050d56 T movs r1,#0x11 */
    {
    g_cpu.R[15] = 0x08050D56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D56 = 1u;
    _cyc_08050D56 = 1u;
    uint32_t _r_08050D56;
    _r_08050D56 = 0x00000011u;
    arm_set_nzc_logic(_r_08050D56, cpsr_c());
    g_cpu.R[1] = _r_08050D56;
    g_cpu.R[15] = 0x08050D58u;
    runtime_tick(_cyc_08050D56);
    }
    /* fall-through to 0x08050D58 */
    g_cpu.R[15] = 0x08050D58u;
    runtime_dispatch(0x08050D58u);
    return;
}

/* 0x08050EBC  mode=thumb  end=0x08050ECC  branches=11  indirect */
void gf_tfunc_08050EBC(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050EBEu: goto L_08050EBE;
        case 0x08050EC0u: goto L_08050EC0;
        case 0x08050EC2u: goto L_08050EC2;
        case 0x08050EC4u: goto L_08050EC4;
        case 0x08050EC6u: goto L_08050EC6;
        case 0x08050EC8u: goto L_08050EC8;
        case 0x08050ECAu: goto L_08050ECA;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050EBCu);
L_08050EBC:
    /* 08050EBC  08050ebc T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050EBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EBC = 1u;
    _cyc_08050EBC = 2u;
    uint32_t _base_08050EBC = g_cpu.R[1];
    uint32_t _off_08050EBC;
    _off_08050EBC = 0x00000000u;
    uint32_t _ea_08050EBC = _base_08050EBC + _off_08050EBC;
    uint32_t _post_08050EBC = _base_08050EBC + _off_08050EBC;
    _cyc_08050EBC += runtime_mem_cycles(_ea_08050EBC, 4u, 0u);
    uint32_t _v_08050EBC;
    { uint32_t _w = bus_read_u32(_ea_08050EBC & ~3u); uint32_t _rot = (_ea_08050EBC & 3u) * 8u; _v_08050EBC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050EBC;
    g_cpu.R[15] = 0x08050EBEu;
    runtime_tick(_cyc_08050EBC);
    }
L_08050EBE:
    /* 08050EBE  08050ebe T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050EBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EBE = 1u;
    _cyc_08050EBE = 1u;
    uint32_t _base_08050EBE = g_cpu.R[2];
    uint32_t _off_08050EBE;
    _off_08050EBE = 0x00000000u;
    uint32_t _ea_08050EBE = _base_08050EBE + _off_08050EBE;
    uint32_t _post_08050EBE = _base_08050EBE + _off_08050EBE;
    _cyc_08050EBE += runtime_mem_cycles(_ea_08050EBE, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050EBEu, _ea_08050EBE & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050EBE & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050EC0u;
    runtime_tick(_cyc_08050EBE);
    }
L_08050EC0:
    /* 08050EC0  08050ec0 T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050EC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EC0 = 1u;
    _cyc_08050EC0 = 2u;
    uint32_t _base_08050EC0 = g_cpu.R[1];
    uint32_t _off_08050EC0;
    _off_08050EC0 = 0x00000004u;
    uint32_t _ea_08050EC0 = _base_08050EC0 + _off_08050EC0;
    uint32_t _post_08050EC0 = _base_08050EC0 + _off_08050EC0;
    _cyc_08050EC0 += runtime_mem_cycles(_ea_08050EC0, 4u, 0u);
    uint32_t _v_08050EC0;
    { uint32_t _w = bus_read_u32(_ea_08050EC0 & ~3u); uint32_t _rot = (_ea_08050EC0 & 3u) * 8u; _v_08050EC0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050EC0;
    g_cpu.R[15] = 0x08050EC2u;
    runtime_tick(_cyc_08050EC0);
    }
L_08050EC2:
    /* 08050EC2  08050ec2 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050EC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EC2 = 1u;
    _cyc_08050EC2 = 1u;
    uint32_t _base_08050EC2 = g_cpu.R[2];
    uint32_t _off_08050EC2;
    _off_08050EC2 = 0x00000004u;
    uint32_t _ea_08050EC2 = _base_08050EC2 + _off_08050EC2;
    uint32_t _post_08050EC2 = _base_08050EC2 + _off_08050EC2;
    _cyc_08050EC2 += runtime_mem_cycles(_ea_08050EC2, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050EC2u, _ea_08050EC2 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050EC2 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050EC4u;
    runtime_tick(_cyc_08050EC2);
    }
L_08050EC4:
    /* 08050EC4  08050ec4 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050EC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EC4 = 1u;
    _cyc_08050EC4 = 1u;
    uint32_t _rn_08050EC4 = g_cpu.R[2];
    uint32_t _r_08050EC4;
    _r_08050EC4 = _rn_08050EC4 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050EC4, 0x00000008u, _r_08050EC4);
    g_cpu.R[2] = _r_08050EC4;
    g_cpu.R[15] = 0x08050EC6u;
    runtime_tick(_cyc_08050EC4);
    }
L_08050EC6:
    /* 08050EC6  08050ec6 T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050EC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EC6 = 1u;
    _cyc_08050EC6 = 2u;
    uint32_t _base_08050EC6 = g_cpu.R[1];
    uint32_t _off_08050EC6;
    _off_08050EC6 = 0x00000008u;
    uint32_t _ea_08050EC6 = _base_08050EC6 + _off_08050EC6;
    uint32_t _post_08050EC6 = _base_08050EC6 + _off_08050EC6;
    _cyc_08050EC6 += runtime_mem_cycles(_ea_08050EC6, 4u, 0u);
    uint32_t _v_08050EC6;
    { uint32_t _w = bus_read_u32(_ea_08050EC6 & ~3u); uint32_t _rot = (_ea_08050EC6 & 3u) * 8u; _v_08050EC6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050EC6;
    g_cpu.R[15] = 0x08050EC8u;
    runtime_tick(_cyc_08050EC6);
    }
L_08050EC8:
    /* 08050EC8  08050ec8 T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050EC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EC8 = 1u;
    _cyc_08050EC8 = 1u;
    uint32_t _rm_08050EC8 = g_cpu.R[5];
    uint32_t _op2_08050EC8;
    uint32_t _co_08050EC8;
    _op2_08050EC8 = _rm_08050EC8;
    _co_08050EC8 = cpsr_c();
    uint32_t _rn_08050EC8 = g_cpu.R[1];
    uint32_t _r_08050EC8;
    _r_08050EC8 = _rn_08050EC8 - _op2_08050EC8;
    arm_set_nzcv_sub(_rn_08050EC8, _op2_08050EC8, _r_08050EC8);
    g_cpu.R[15] = 0x08050ECAu;
    runtime_tick(_cyc_08050EC8);
    }
L_08050ECA:
    /* 08050ECA  08050eca T bne 0x08050ebc */
    {
    g_cpu.R[15] = 0x08050ECAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050ECA = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050ECA = 3u;
        g_cpu.R[15] = 0x08050EBCu;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050ECAu, 0x08050EBCu, 0u, 0u);
        runtime_tick(_cyc_08050ECA);
        goto L_08050EBC;
    }
    g_cpu.R[15] = 0x08050ECCu;
    runtime_tick(_cyc_08050ECA);
    }
    /* fall-through to 0x08050ECC */
    g_cpu.R[15] = 0x08050ECCu;
    runtime_dispatch(0x08050ECCu);
    return;
}

/* 0x0805002E  mode=thumb  end=0x08050050  branches=23 */
void gf_tfunc_0805002E(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050030u: goto L_08050030;
        case 0x08050032u: goto L_08050032;
        case 0x08050034u: goto L_08050034;
        case 0x08050036u: goto L_08050036;
        case 0x08050038u: goto L_08050038;
        case 0x0805003Au: goto L_0805003A;
        case 0x0805003Cu: goto L_0805003C;
        case 0x0805003Eu: goto L_0805003E;
        case 0x08050040u: goto L_08050040;
        case 0x08050042u: goto L_08050042;
        case 0x08050044u: goto L_08050044;
        case 0x08050046u: goto L_08050046;
        case 0x08050048u: goto L_08050048;
        case 0x0805004Au: goto L_0805004A;
        case 0x0805004Cu: goto L_0805004C;
        case 0x0805004Eu: goto L_0805004E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805002Eu);
    /* 0805002E  0805002e T mov r2,r8 */
    {
    g_cpu.R[15] = 0x0805002Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805002E = 1u;
    _cyc_0805002E = 1u;
    uint32_t _rm_0805002E = g_cpu.R[8];
    uint32_t _op2_0805002E;
    uint32_t _co_0805002E;
    _op2_0805002E = _rm_0805002E;
    _co_0805002E = cpsr_c();
    uint32_t _r_0805002E;
    _r_0805002E = _op2_0805002E;
    g_cpu.R[2] = _r_0805002E;
    g_cpu.R[15] = 0x08050030u;
    runtime_tick(_cyc_0805002E);
    }
L_08050030:
    /* 08050030  08050030 T ldrh r1,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x08050030u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050030 = 1u;
    _cyc_08050030 = 2u;
    uint32_t _base_08050030 = g_cpu.R[2];
    uint32_t _off_08050030;
    _off_08050030 = 0x00000002u;
    uint32_t _ea_08050030 = _base_08050030 + _off_08050030;
    uint32_t _post_08050030 = _base_08050030 + _off_08050030;
    _cyc_08050030 += runtime_mem_cycles(_ea_08050030, 2u, 0u);
    uint32_t _v_08050030;
    { uint32_t _h = bus_read_u16(_ea_08050030 & ~1u); if (_ea_08050030 & 1u) _v_08050030 = ((_h >> 8) | (_h << 24)); else _v_08050030 = _h; }
    g_cpu.R[1] = _v_08050030;
    g_cpu.R[15] = 0x08050032u;
    runtime_tick(_cyc_08050030);
    }
L_08050032:
    /* 08050032  08050032 T mov r0,r9 */
    {
    g_cpu.R[15] = 0x08050032u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050032 = 1u;
    _cyc_08050032 = 1u;
    uint32_t _rm_08050032 = g_cpu.R[9];
    uint32_t _op2_08050032;
    uint32_t _co_08050032;
    _op2_08050032 = _rm_08050032;
    _co_08050032 = cpsr_c();
    uint32_t _r_08050032;
    _r_08050032 = _op2_08050032;
    g_cpu.R[0] = _r_08050032;
    g_cpu.R[15] = 0x08050034u;
    runtime_tick(_cyc_08050032);
    }
L_08050034:
    /* 08050034  08050034 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08050034u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050034 = 1u;
    _cyc_08050034 = 1u;
    uint32_t _rm_08050034 = g_cpu.R[1];
    uint32_t _op2_08050034;
    uint32_t _co_08050034;
    _op2_08050034 = _rm_08050034;
    _co_08050034 = cpsr_c();
    uint32_t _rn_08050034 = g_cpu.R[0];
    uint32_t _r_08050034;
    _r_08050034 = _rn_08050034 & _op2_08050034;
    arm_set_nzc_logic(_r_08050034, _co_08050034);
    g_cpu.R[0] = _r_08050034;
    g_cpu.R[15] = 0x08050036u;
    runtime_tick(_cyc_08050034);
    }
L_08050036:
    /* 08050036  08050036 T movs r4,#0xc */
    {
    g_cpu.R[15] = 0x08050036u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050036 = 1u;
    _cyc_08050036 = 1u;
    uint32_t _r_08050036;
    _r_08050036 = 0x0000000Cu;
    arm_set_nzc_logic(_r_08050036, cpsr_c());
    g_cpu.R[4] = _r_08050036;
    g_cpu.R[15] = 0x08050038u;
    runtime_tick(_cyc_08050036);
    }
L_08050038:
    /* 08050038  08050038 T orrs r0,r0,r4 */
    {
    g_cpu.R[15] = 0x08050038u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050038 = 1u;
    _cyc_08050038 = 1u;
    uint32_t _rm_08050038 = g_cpu.R[4];
    uint32_t _op2_08050038;
    uint32_t _co_08050038;
    _op2_08050038 = _rm_08050038;
    _co_08050038 = cpsr_c();
    uint32_t _rn_08050038 = g_cpu.R[0];
    uint32_t _r_08050038;
    _r_08050038 = _rn_08050038 | _op2_08050038;
    arm_set_nzc_logic(_r_08050038, _co_08050038);
    g_cpu.R[0] = _r_08050038;
    g_cpu.R[15] = 0x0805003Au;
    runtime_tick(_cyc_08050038);
    }
L_0805003A:
    /* 0805003A  0805003a T strh r0,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x0805003Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805003A = 1u;
    _cyc_0805003A = 1u;
    uint32_t _base_0805003A = g_cpu.R[2];
    uint32_t _off_0805003A;
    _off_0805003A = 0x00000002u;
    uint32_t _ea_0805003A = _base_0805003A + _off_0805003A;
    uint32_t _post_0805003A = _base_0805003A + _off_0805003A;
    _cyc_0805003A += runtime_mem_cycles(_ea_0805003A, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805003Au, _ea_0805003A & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805003A & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0805003Cu;
    runtime_tick(_cyc_0805003A);
    }
L_0805003C:
    /* 0805003C  0805003c T movs r5,#0x33 */
    {
    g_cpu.R[15] = 0x0805003Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805003C = 1u;
    _cyc_0805003C = 1u;
    uint32_t _r_0805003C;
    _r_0805003C = 0x00000033u;
    arm_set_nzc_logic(_r_0805003C, cpsr_c());
    g_cpu.R[5] = _r_0805003C;
    g_cpu.R[15] = 0x0805003Eu;
    runtime_tick(_cyc_0805003C);
    }
L_0805003E:
    /* 0805003E  0805003e T strb r5,[r2] */
    {
    g_cpu.R[15] = 0x0805003Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805003E = 1u;
    _cyc_0805003E = 1u;
    uint32_t _base_0805003E = g_cpu.R[2];
    uint32_t _off_0805003E;
    _off_0805003E = 0x00000000u;
    uint32_t _ea_0805003E = _base_0805003E + _off_0805003E;
    uint32_t _post_0805003E = _base_0805003E + _off_0805003E;
    _cyc_0805003E += runtime_mem_cycles(_ea_0805003E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805003Eu, _ea_0805003E, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_0805003E, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[15] = 0x08050040u;
    runtime_tick(_cyc_0805003E);
    }
L_08050040:
    /* 08050040  08050040 T movs r0,#0x2 */
    {
    g_cpu.R[15] = 0x08050040u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050040 = 1u;
    _cyc_08050040 = 1u;
    uint32_t _r_08050040;
    _r_08050040 = 0x00000002u;
    arm_set_nzc_logic(_r_08050040, cpsr_c());
    g_cpu.R[0] = _r_08050040;
    g_cpu.R[15] = 0x08050042u;
    runtime_tick(_cyc_08050040);
    }
L_08050042:
    /* 08050042  08050042 T strb r0,[r2,#0xa] */
    {
    g_cpu.R[15] = 0x08050042u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050042 = 1u;
    _cyc_08050042 = 1u;
    uint32_t _base_08050042 = g_cpu.R[2];
    uint32_t _off_08050042;
    _off_08050042 = 0x0000000Au;
    uint32_t _ea_08050042 = _base_08050042 + _off_08050042;
    uint32_t _post_08050042 = _base_08050042 + _off_08050042;
    _cyc_08050042 += runtime_mem_cycles(_ea_08050042, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050042u, _ea_08050042, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050042, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050044u;
    runtime_tick(_cyc_08050042);
    }
L_08050044:
    /* 08050044  08050044 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x08050044u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050044 = 1u;
    _cyc_08050044 = 1u;
    uint32_t _r_08050044;
    _r_08050044 = 0x00000000u;
    arm_set_nzc_logic(_r_08050044, cpsr_c());
    g_cpu.R[0] = _r_08050044;
    g_cpu.R[15] = 0x08050046u;
    runtime_tick(_cyc_08050044);
    }
L_08050046:
    /* 08050046  08050046 T mov r1,r8 */
    {
    g_cpu.R[15] = 0x08050046u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050046 = 1u;
    _cyc_08050046 = 1u;
    uint32_t _rm_08050046 = g_cpu.R[8];
    uint32_t _op2_08050046;
    uint32_t _co_08050046;
    _op2_08050046 = _rm_08050046;
    _co_08050046 = cpsr_c();
    uint32_t _r_08050046;
    _r_08050046 = _op2_08050046;
    g_cpu.R[1] = _r_08050046;
    g_cpu.R[15] = 0x08050048u;
    runtime_tick(_cyc_08050046);
    }
L_08050048:
    /* 08050048  08050048 T movs r2,#0x2 */
    {
    g_cpu.R[15] = 0x08050048u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050048 = 1u;
    _cyc_08050048 = 1u;
    uint32_t _r_08050048;
    _r_08050048 = 0x00000002u;
    arm_set_nzc_logic(_r_08050048, cpsr_c());
    g_cpu.R[2] = _r_08050048;
    g_cpu.R[15] = 0x0805004Au;
    runtime_tick(_cyc_08050048);
    }
L_0805004A:
    /* 0805004A  0805004a T movs r3,#0x1 */
    {
    g_cpu.R[15] = 0x0805004Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805004A = 1u;
    _cyc_0805004A = 1u;
    uint32_t _r_0805004A;
    _r_0805004A = 0x00000001u;
    arm_set_nzc_logic(_r_0805004A, cpsr_c());
    g_cpu.R[3] = _r_0805004A;
    g_cpu.R[15] = 0x0805004Cu;
    runtime_tick(_cyc_0805004A);
    }
L_0805004C:
    /* 0805004C  0805004c T bl.hi 0x0803d050 */
    {
    g_cpu.R[15] = 0x0805004Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805004C = 1u;
    _cyc_0805004C = 1u;
    g_cpu.R[14] = 0x0803D050u;
    g_cpu.R[15] = 0x0805004Eu;
    runtime_tick(_cyc_0805004C);
    }
L_0805004E:
    /* 0805004E  0805004e T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x0805004Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805004E = 1u;
    _cyc_0805004E = 3u;
    uint32_t _blt_0805004E = (g_cpu.R[14] + 0x000007FCu) & ~1u;
    g_cpu.R[14] = 0x08050051u;
    g_cpu.R[15] = _blt_0805004E;
    runtime_call_push_return(0x08050050u);
    runtime_tick(_cyc_0805004E);
    _cyc_0805004E = 0u;
    runtime_dispatch(_blt_0805004E);
    if (g_cpu.R[15] != 0x08050050u) { runtime_call_cancel_return(0x08050050u); return; }
    g_cpu.R[15] = 0x08050050u;
    runtime_tick(_cyc_0805004E);
    }
    /* fall-through to 0x08050050 */
    g_cpu.R[15] = 0x08050050u;
    runtime_dispatch(0x08050050u);
    return;
}

/* 0x080500C0  mode=thumb  end=0x080500DA  branches=16 */
void gf_tfunc_080500C0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080500C2u: goto L_080500C2;
        case 0x080500C4u: goto L_080500C4;
        case 0x080500C6u: goto L_080500C6;
        case 0x080500C8u: goto L_080500C8;
        case 0x080500CAu: goto L_080500CA;
        case 0x080500CCu: goto L_080500CC;
        case 0x080500CEu: goto L_080500CE;
        case 0x080500D0u: goto L_080500D0;
        case 0x080500D2u: goto L_080500D2;
        case 0x080500D4u: goto L_080500D4;
        case 0x080500D6u: goto L_080500D6;
        case 0x080500D8u: goto L_080500D8;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080500C0u);
    /* 080500C0  080500c0 T movs r2,r2,lsl #4 */
    {
    g_cpu.R[15] = 0x080500C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500C0 = 1u;
    _cyc_080500C0 = 1u;
    uint32_t _rm_080500C0 = g_cpu.R[2];
    uint32_t _op2_080500C0;
    uint32_t _co_080500C0;
    _op2_080500C0 = _rm_080500C0 << 4;
    _co_080500C0 = (_rm_080500C0 >> 28) & 1u;
    uint32_t _r_080500C0;
    _r_080500C0 = _op2_080500C0;
    arm_set_nzc_logic(_r_080500C0, _co_080500C0);
    g_cpu.R[2] = _r_080500C0;
    g_cpu.R[15] = 0x080500C2u;
    runtime_tick(_cyc_080500C0);
    }
L_080500C2:
    /* 080500C2  080500c2 T mov r0,r8 */
    {
    g_cpu.R[15] = 0x080500C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500C2 = 1u;
    _cyc_080500C2 = 1u;
    uint32_t _rm_080500C2 = g_cpu.R[8];
    uint32_t _op2_080500C2;
    uint32_t _co_080500C2;
    _op2_080500C2 = _rm_080500C2;
    _co_080500C2 = cpsr_c();
    uint32_t _r_080500C2;
    _r_080500C2 = _op2_080500C2;
    g_cpu.R[0] = _r_080500C2;
    g_cpu.R[15] = 0x080500C4u;
    runtime_tick(_cyc_080500C2);
    }
L_080500C4:
    /* 080500C4  080500c4 T ldrb r1,[r0,#0x5] */
    {
    g_cpu.R[15] = 0x080500C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500C4 = 1u;
    _cyc_080500C4 = 2u;
    uint32_t _base_080500C4 = g_cpu.R[0];
    uint32_t _off_080500C4;
    _off_080500C4 = 0x00000005u;
    uint32_t _ea_080500C4 = _base_080500C4 + _off_080500C4;
    uint32_t _post_080500C4 = _base_080500C4 + _off_080500C4;
    _cyc_080500C4 += runtime_mem_cycles(_ea_080500C4, 1u, 0u);
    uint32_t _v_080500C4;
    _v_080500C4 = bus_read_u8(_ea_080500C4);
    g_cpu.R[1] = _v_080500C4;
    g_cpu.R[15] = 0x080500C6u;
    runtime_tick(_cyc_080500C4);
    }
L_080500C6:
    /* 080500C6  080500c6 T mov r0,r10 */
    {
    g_cpu.R[15] = 0x080500C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500C6 = 1u;
    _cyc_080500C6 = 1u;
    uint32_t _rm_080500C6 = g_cpu.R[10];
    uint32_t _op2_080500C6;
    uint32_t _co_080500C6;
    _op2_080500C6 = _rm_080500C6;
    _co_080500C6 = cpsr_c();
    uint32_t _r_080500C6;
    _r_080500C6 = _op2_080500C6;
    g_cpu.R[0] = _r_080500C6;
    g_cpu.R[15] = 0x080500C8u;
    runtime_tick(_cyc_080500C6);
    }
L_080500C8:
    /* 080500C8  080500c8 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x080500C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500C8 = 1u;
    _cyc_080500C8 = 1u;
    uint32_t _rm_080500C8 = g_cpu.R[1];
    uint32_t _op2_080500C8;
    uint32_t _co_080500C8;
    _op2_080500C8 = _rm_080500C8;
    _co_080500C8 = cpsr_c();
    uint32_t _rn_080500C8 = g_cpu.R[0];
    uint32_t _r_080500C8;
    _r_080500C8 = _rn_080500C8 & _op2_080500C8;
    arm_set_nzc_logic(_r_080500C8, _co_080500C8);
    g_cpu.R[0] = _r_080500C8;
    g_cpu.R[15] = 0x080500CAu;
    runtime_tick(_cyc_080500C8);
    }
L_080500CA:
    /* 080500CA  080500ca T orrs r0,r0,r2 */
    {
    g_cpu.R[15] = 0x080500CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500CA = 1u;
    _cyc_080500CA = 1u;
    uint32_t _rm_080500CA = g_cpu.R[2];
    uint32_t _op2_080500CA;
    uint32_t _co_080500CA;
    _op2_080500CA = _rm_080500CA;
    _co_080500CA = cpsr_c();
    uint32_t _rn_080500CA = g_cpu.R[0];
    uint32_t _r_080500CA;
    _r_080500CA = _rn_080500CA | _op2_080500CA;
    arm_set_nzc_logic(_r_080500CA, _co_080500CA);
    g_cpu.R[0] = _r_080500CA;
    g_cpu.R[15] = 0x080500CCu;
    runtime_tick(_cyc_080500CA);
    }
L_080500CC:
    /* 080500CC  080500cc T mov r1,r8 */
    {
    g_cpu.R[15] = 0x080500CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500CC = 1u;
    _cyc_080500CC = 1u;
    uint32_t _rm_080500CC = g_cpu.R[8];
    uint32_t _op2_080500CC;
    uint32_t _co_080500CC;
    _op2_080500CC = _rm_080500CC;
    _co_080500CC = cpsr_c();
    uint32_t _r_080500CC;
    _r_080500CC = _op2_080500CC;
    g_cpu.R[1] = _r_080500CC;
    g_cpu.R[15] = 0x080500CEu;
    runtime_tick(_cyc_080500CC);
    }
L_080500CE:
    /* 080500CE  080500ce T strb r0,[r1,#0x5] */
    {
    g_cpu.R[15] = 0x080500CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500CE = 1u;
    _cyc_080500CE = 1u;
    uint32_t _base_080500CE = g_cpu.R[1];
    uint32_t _off_080500CE;
    _off_080500CE = 0x00000005u;
    uint32_t _ea_080500CE = _base_080500CE + _off_080500CE;
    uint32_t _post_080500CE = _base_080500CE + _off_080500CE;
    _cyc_080500CE += runtime_mem_cycles(_ea_080500CE, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080500CEu, _ea_080500CE, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080500CE, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080500D0u;
    runtime_tick(_cyc_080500CE);
    }
L_080500D0:
    /* 080500D0  080500d0 T movs r0,#0x7 */
    {
    g_cpu.R[15] = 0x080500D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500D0 = 1u;
    _cyc_080500D0 = 1u;
    uint32_t _r_080500D0;
    _r_080500D0 = 0x00000007u;
    arm_set_nzc_logic(_r_080500D0, cpsr_c());
    g_cpu.R[0] = _r_080500D0;
    g_cpu.R[15] = 0x080500D2u;
    runtime_tick(_cyc_080500D0);
    }
L_080500D2:
    /* 080500D2  080500d2 T strb r0,[r1,#0xa] */
    {
    g_cpu.R[15] = 0x080500D2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500D2 = 1u;
    _cyc_080500D2 = 1u;
    uint32_t _base_080500D2 = g_cpu.R[1];
    uint32_t _off_080500D2;
    _off_080500D2 = 0x0000000Au;
    uint32_t _ea_080500D2 = _base_080500D2 + _off_080500D2;
    uint32_t _post_080500D2 = _base_080500D2 + _off_080500D2;
    _cyc_080500D2 += runtime_mem_cycles(_ea_080500D2, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080500D2u, _ea_080500D2, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080500D2, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080500D4u;
    runtime_tick(_cyc_080500D2);
    }
L_080500D4:
    /* 080500D4  080500d4 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x080500D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500D4 = 1u;
    _cyc_080500D4 = 1u;
    uint32_t _r_080500D4;
    _r_080500D4 = 0x00000000u;
    arm_set_nzc_logic(_r_080500D4, cpsr_c());
    g_cpu.R[0] = _r_080500D4;
    g_cpu.R[15] = 0x080500D6u;
    runtime_tick(_cyc_080500D4);
    }
L_080500D6:
    /* 080500D6  080500d6 T bl.hi 0x0803d0da */
    {
    g_cpu.R[15] = 0x080500D6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500D6 = 1u;
    _cyc_080500D6 = 1u;
    g_cpu.R[14] = 0x0803D0DAu;
    g_cpu.R[15] = 0x080500D8u;
    runtime_tick(_cyc_080500D6);
    }
L_080500D8:
    /* 080500D8  080500d8 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x080500D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500D8 = 1u;
    _cyc_080500D8 = 3u;
    uint32_t _blt_080500D8 = (g_cpu.R[14] + 0x000006DAu) & ~1u;
    g_cpu.R[14] = 0x080500DBu;
    g_cpu.R[15] = _blt_080500D8;
    runtime_call_push_return(0x080500DAu);
    runtime_tick(_cyc_080500D8);
    _cyc_080500D8 = 0u;
    runtime_dispatch(_blt_080500D8);
    if (g_cpu.R[15] != 0x080500DAu) { runtime_call_cancel_return(0x080500DAu); return; }
    g_cpu.R[15] = 0x080500DAu;
    runtime_tick(_cyc_080500D8);
    }
    /* fall-through to 0x080500DA */
    g_cpu.R[15] = 0x080500DAu;
    runtime_dispatch(0x080500DAu);
    return;
}

/* 0x08050288  mode=thumb  end=0x08050290  branches=4  indirect */
void gf_tfunc_08050288(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0805028Au: goto L_0805028A;
        case 0x0805028Cu: goto L_0805028C;
        case 0x0805028Eu: goto L_0805028E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050288u);
    /* 08050288  08050288 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x08050288u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050288 = 1u;
    _cyc_08050288 = 1u;
    uint32_t _r_08050288;
    _r_08050288 = 0x00000000u;
    arm_set_nzc_logic(_r_08050288, cpsr_c());
    g_cpu.R[0] = _r_08050288;
    g_cpu.R[15] = 0x0805028Au;
    runtime_tick(_cyc_08050288);
    }
L_0805028A:
    /* 0805028A  0805028a T ldr r1,[r15,#0x28] */
    {
    g_cpu.R[15] = 0x0805028Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805028A = 1u;
    _cyc_0805028A = 2u;
    uint32_t _base_0805028A = 0x0805028Eu & ~3u;
    uint32_t _off_0805028A;
    _off_0805028A = 0x00000028u;
    uint32_t _ea_0805028A = _base_0805028A + _off_0805028A;
    uint32_t _post_0805028A = _base_0805028A + _off_0805028A;
    _cyc_0805028A += runtime_mem_cycles(_ea_0805028A, 4u, 0u);
    uint32_t _v_0805028A;
    { uint32_t _w = bus_read_u32(_ea_0805028A & ~3u); uint32_t _rot = (_ea_0805028A & 3u) * 8u; _v_0805028A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0805028A;
    g_cpu.R[15] = 0x0805028Cu;
    runtime_tick(_cyc_0805028A);
    }
L_0805028C:
    /* 0805028C  0805028c T bl.hi 0x0803d290 */
    {
    g_cpu.R[15] = 0x0805028Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805028C = 1u;
    _cyc_0805028C = 1u;
    g_cpu.R[14] = 0x0803D290u;
    g_cpu.R[15] = 0x0805028Eu;
    runtime_tick(_cyc_0805028C);
    }
L_0805028E:
    /* 0805028E  0805028e T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x0805028Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805028E = 1u;
    _cyc_0805028E = 3u;
    uint32_t _blt_0805028E = (g_cpu.R[14] + 0x00000524u) & ~1u;
    g_cpu.R[14] = 0x08050291u;
    g_cpu.R[15] = _blt_0805028E;
    runtime_call_push_return(0x08050290u);
    runtime_tick(_cyc_0805028E);
    _cyc_0805028E = 0u;
    runtime_dispatch(_blt_0805028E);
    if (g_cpu.R[15] != 0x08050290u) { runtime_call_cancel_return(0x08050290u); return; }
    g_cpu.R[15] = 0x08050290u;
    runtime_tick(_cyc_0805028E);
    }
    /* fall-through to 0x08050290 */
    g_cpu.R[15] = 0x08050290u;
    runtime_dispatch(0x08050290u);
    return;
}

/* 0x080502A2  mode=thumb  end=0x080502B2  branches=0  indirect */
void gf_tfunc_080502A2(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080502A4u: goto L_080502A4;
        case 0x080502A6u: goto L_080502A6;
        case 0x080502A8u: goto L_080502A8;
        case 0x080502AAu: goto L_080502AA;
        case 0x080502ACu: goto L_080502AC;
        case 0x080502AEu: goto L_080502AE;
        case 0x080502B0u: goto L_080502B0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080502A2u);
    /* 080502A2  080502a2 T add r13,r13,#0x14 */
    {
    g_cpu.R[15] = 0x080502A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080502A2 = 1u;
    _cyc_080502A2 = 1u;
    uint32_t _rn_080502A2 = g_cpu.R[13];
    uint32_t _r_080502A2;
    _r_080502A2 = _rn_080502A2 + 0x00000014u;
    g_cpu.R[13] = _r_080502A2;
    g_cpu.R[15] = 0x080502A4u;
    runtime_tick(_cyc_080502A2);
    }
L_080502A4:
    /* 080502A4  080502a4 T ldm r13!,{r3,r4,r5} */
    {
    g_cpu.R[15] = 0x080502A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080502A4 = 1u;
    _cyc_080502A4 = 2u;
    uint32_t _b_080502A4 = g_cpu.R[13];
    uint32_t _a_080502A4 = _b_080502A4;
    uint32_t _fb_080502A4 = _b_080502A4 + 12u;
    _cyc_080502A4 += runtime_mem_cycles(_a_080502A4 & ~3u, 4u, 0u);
    g_cpu.R[3] = bus_read_u32(_a_080502A4 & ~3u);
    _a_080502A4 += 4u;
    _cyc_080502A4 += runtime_mem_cycles(_a_080502A4 & ~3u, 4u, 1u);
    g_cpu.R[4] = bus_read_u32(_a_080502A4 & ~3u);
    _a_080502A4 += 4u;
    _cyc_080502A4 += runtime_mem_cycles(_a_080502A4 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_080502A4 & ~3u);
    _a_080502A4 += 4u;
    g_cpu.R[13] = _fb_080502A4;
    g_cpu.R[15] = 0x080502A6u;
    runtime_tick(_cyc_080502A4);
    }
L_080502A6:
    /* 080502A6  080502a6 T mov r8,r3 */
    {
    g_cpu.R[15] = 0x080502A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080502A6 = 1u;
    _cyc_080502A6 = 1u;
    uint32_t _rm_080502A6 = g_cpu.R[3];
    uint32_t _op2_080502A6;
    uint32_t _co_080502A6;
    _op2_080502A6 = _rm_080502A6;
    _co_080502A6 = cpsr_c();
    uint32_t _r_080502A6;
    _r_080502A6 = _op2_080502A6;
    g_cpu.R[8] = _r_080502A6;
    g_cpu.R[15] = 0x080502A8u;
    runtime_tick(_cyc_080502A6);
    }
L_080502A8:
    /* 080502A8  080502a8 T mov r9,r4 */
    {
    g_cpu.R[15] = 0x080502A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080502A8 = 1u;
    _cyc_080502A8 = 1u;
    uint32_t _rm_080502A8 = g_cpu.R[4];
    uint32_t _op2_080502A8;
    uint32_t _co_080502A8;
    _op2_080502A8 = _rm_080502A8;
    _co_080502A8 = cpsr_c();
    uint32_t _r_080502A8;
    _r_080502A8 = _op2_080502A8;
    g_cpu.R[9] = _r_080502A8;
    g_cpu.R[15] = 0x080502AAu;
    runtime_tick(_cyc_080502A8);
    }
L_080502AA:
    /* 080502AA  080502aa T mov r10,r5 */
    {
    g_cpu.R[15] = 0x080502AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080502AA = 1u;
    _cyc_080502AA = 1u;
    uint32_t _rm_080502AA = g_cpu.R[5];
    uint32_t _op2_080502AA;
    uint32_t _co_080502AA;
    _op2_080502AA = _rm_080502AA;
    _co_080502AA = cpsr_c();
    uint32_t _r_080502AA;
    _r_080502AA = _op2_080502AA;
    g_cpu.R[10] = _r_080502AA;
    g_cpu.R[15] = 0x080502ACu;
    runtime_tick(_cyc_080502AA);
    }
L_080502AC:
    /* 080502AC  080502ac T ldm r13!,{r4,r5,r6,r7} */
    {
    g_cpu.R[15] = 0x080502ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080502AC = 1u;
    _cyc_080502AC = 2u;
    uint32_t _b_080502AC = g_cpu.R[13];
    uint32_t _a_080502AC = _b_080502AC;
    uint32_t _fb_080502AC = _b_080502AC + 16u;
    _cyc_080502AC += runtime_mem_cycles(_a_080502AC & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_080502AC & ~3u);
    _a_080502AC += 4u;
    _cyc_080502AC += runtime_mem_cycles(_a_080502AC & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_080502AC & ~3u);
    _a_080502AC += 4u;
    _cyc_080502AC += runtime_mem_cycles(_a_080502AC & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_080502AC & ~3u);
    _a_080502AC += 4u;
    _cyc_080502AC += runtime_mem_cycles(_a_080502AC & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_080502AC & ~3u);
    _a_080502AC += 4u;
    g_cpu.R[13] = _fb_080502AC;
    g_cpu.R[15] = 0x080502AEu;
    runtime_tick(_cyc_080502AC);
    }
L_080502AE:
    /* 080502AE  080502ae T ldm r13!,{r0} */
    {
    g_cpu.R[15] = 0x080502AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080502AE = 1u;
    _cyc_080502AE = 2u;
    uint32_t _b_080502AE = g_cpu.R[13];
    uint32_t _a_080502AE = _b_080502AE;
    uint32_t _fb_080502AE = _b_080502AE + 4u;
    _cyc_080502AE += runtime_mem_cycles(_a_080502AE & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_080502AE & ~3u);
    _a_080502AE += 4u;
    g_cpu.R[13] = _fb_080502AE;
    g_cpu.R[15] = 0x080502B0u;
    runtime_tick(_cyc_080502AE);
    }
L_080502B0:
    /* 080502B0  080502b0 T bx r0 */
    {
    g_cpu.R[15] = 0x080502B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080502B0 = 1u;
    _cyc_080502B0 = 3u;
    uint32_t _bxt_080502B0 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_080502B0 & ~1u;
    if (_bxt_080502B0 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_080502B0);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_080502B0);
    return;
    g_cpu.R[15] = 0x080502B2u;
    runtime_tick(_cyc_080502B0);
    }
    /* fall-through to 0x080502B2 */
    g_cpu.R[15] = 0x080502B2u;
    runtime_dispatch(0x080502B2u);
    return;
}

/* 0x08050D08  mode=thumb  end=0x08050D1C  branches=1 */
void gf_autojt_08050C6C_08(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D0Au: goto L_08050D0A;
        case 0x08050D0Cu: goto L_08050D0C;
        case 0x08050D0Eu: goto L_08050D0E;
        case 0x08050D10u: goto L_08050D10;
        case 0x08050D12u: goto L_08050D12;
        case 0x08050D14u: goto L_08050D14;
        case 0x08050D16u: goto L_08050D16;
        case 0x08050D18u: goto L_08050D18;
        case 0x08050D1Au: goto L_08050D1A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D08u);
    /* 08050D08  08050d08 T ldr r0,[r15,#0x10] */
    {
    g_cpu.R[15] = 0x08050D08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D08 = 1u;
    _cyc_08050D08 = 2u;
    uint32_t _base_08050D08 = 0x08050D0Cu & ~3u;
    uint32_t _off_08050D08;
    _off_08050D08 = 0x00000010u;
    uint32_t _ea_08050D08 = _base_08050D08 + _off_08050D08;
    uint32_t _post_08050D08 = _base_08050D08 + _off_08050D08;
    _cyc_08050D08 += runtime_mem_cycles(_ea_08050D08, 4u, 0u);
    uint32_t _v_08050D08;
    { uint32_t _w = bus_read_u32(_ea_08050D08 & ~3u); uint32_t _rot = (_ea_08050D08 & 3u) * 8u; _v_08050D08 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050D08;
    g_cpu.R[15] = 0x08050D0Au;
    runtime_tick(_cyc_08050D08);
    }
L_08050D0A:
    /* 08050D0A  08050d0a T movs r1,#0x8d */
    {
    g_cpu.R[15] = 0x08050D0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D0A = 1u;
    _cyc_08050D0A = 1u;
    uint32_t _r_08050D0A;
    _r_08050D0A = 0x0000008Du;
    arm_set_nzc_logic(_r_08050D0A, cpsr_c());
    g_cpu.R[1] = _r_08050D0A;
    g_cpu.R[15] = 0x08050D0Cu;
    runtime_tick(_cyc_08050D0A);
    }
L_08050D0C:
    /* 08050D0C  08050d0c T movs r1,r1,lsl #1 */
    {
    g_cpu.R[15] = 0x08050D0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D0C = 1u;
    _cyc_08050D0C = 1u;
    uint32_t _rm_08050D0C = g_cpu.R[1];
    uint32_t _op2_08050D0C;
    uint32_t _co_08050D0C;
    _op2_08050D0C = _rm_08050D0C << 1;
    _co_08050D0C = (_rm_08050D0C >> 31) & 1u;
    uint32_t _r_08050D0C;
    _r_08050D0C = _op2_08050D0C;
    arm_set_nzc_logic(_r_08050D0C, _co_08050D0C);
    g_cpu.R[1] = _r_08050D0C;
    g_cpu.R[15] = 0x08050D0Eu;
    runtime_tick(_cyc_08050D0C);
    }
L_08050D0E:
    /* 08050D0E  08050d0e T adds r2,r0,r1 */
    {
    g_cpu.R[15] = 0x08050D0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D0E = 1u;
    _cyc_08050D0E = 1u;
    uint32_t _rm_08050D0E = g_cpu.R[1];
    uint32_t _op2_08050D0E;
    uint32_t _co_08050D0E;
    _op2_08050D0E = _rm_08050D0E;
    _co_08050D0E = cpsr_c();
    uint32_t _rn_08050D0E = g_cpu.R[0];
    uint32_t _r_08050D0E;
    _r_08050D0E = _rn_08050D0E + _op2_08050D0E;
    arm_set_nzcv_add(_rn_08050D0E, _op2_08050D0E, _r_08050D0E);
    g_cpu.R[2] = _r_08050D0E;
    g_cpu.R[15] = 0x08050D10u;
    runtime_tick(_cyc_08050D0E);
    }
L_08050D10:
    /* 08050D10  08050d10 T movs r1,#0x0 */
    {
    g_cpu.R[15] = 0x08050D10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D10 = 1u;
    _cyc_08050D10 = 1u;
    uint32_t _r_08050D10;
    _r_08050D10 = 0x00000000u;
    arm_set_nzc_logic(_r_08050D10, cpsr_c());
    g_cpu.R[1] = _r_08050D10;
    g_cpu.R[15] = 0x08050D12u;
    runtime_tick(_cyc_08050D10);
    }
L_08050D12:
    /* 08050D12  08050d12 T strb r1,[r2] */
    {
    g_cpu.R[15] = 0x08050D12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D12 = 1u;
    _cyc_08050D12 = 1u;
    uint32_t _base_08050D12 = g_cpu.R[2];
    uint32_t _off_08050D12;
    _off_08050D12 = 0x00000000u;
    uint32_t _ea_08050D12 = _base_08050D12 + _off_08050D12;
    uint32_t _post_08050D12 = _base_08050D12 + _off_08050D12;
    _cyc_08050D12 += runtime_mem_cycles(_ea_08050D12, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050D12u, _ea_08050D12, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08050D12, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08050D14u;
    runtime_tick(_cyc_08050D12);
    }
L_08050D14:
    /* 08050D14  08050d14 T ldr r3,[r15,#0x8] */
    {
    g_cpu.R[15] = 0x08050D14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D14 = 1u;
    _cyc_08050D14 = 2u;
    uint32_t _base_08050D14 = 0x08050D18u & ~3u;
    uint32_t _off_08050D14;
    _off_08050D14 = 0x00000008u;
    uint32_t _ea_08050D14 = _base_08050D14 + _off_08050D14;
    uint32_t _post_08050D14 = _base_08050D14 + _off_08050D14;
    _cyc_08050D14 += runtime_mem_cycles(_ea_08050D14, 4u, 0u);
    uint32_t _v_08050D14;
    { uint32_t _w = bus_read_u32(_ea_08050D14 & ~3u); uint32_t _rot = (_ea_08050D14 & 3u) * 8u; _v_08050D14 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08050D14;
    g_cpu.R[15] = 0x08050D16u;
    runtime_tick(_cyc_08050D14);
    }
L_08050D16:
    /* 08050D16  08050d16 T adds r2,r0,r3 */
    {
    g_cpu.R[15] = 0x08050D16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D16 = 1u;
    _cyc_08050D16 = 1u;
    uint32_t _rm_08050D16 = g_cpu.R[3];
    uint32_t _op2_08050D16;
    uint32_t _co_08050D16;
    _op2_08050D16 = _rm_08050D16;
    _co_08050D16 = cpsr_c();
    uint32_t _rn_08050D16 = g_cpu.R[0];
    uint32_t _r_08050D16;
    _r_08050D16 = _rn_08050D16 + _op2_08050D16;
    arm_set_nzcv_add(_rn_08050D16, _op2_08050D16, _r_08050D16);
    g_cpu.R[2] = _r_08050D16;
    g_cpu.R[15] = 0x08050D18u;
    runtime_tick(_cyc_08050D16);
    }
L_08050D18:
    /* 08050D18  08050d18 T strb r1,[r2] */
    {
    g_cpu.R[15] = 0x08050D18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D18 = 1u;
    _cyc_08050D18 = 1u;
    uint32_t _base_08050D18 = g_cpu.R[2];
    uint32_t _off_08050D18;
    _off_08050D18 = 0x00000000u;
    uint32_t _ea_08050D18 = _base_08050D18 + _off_08050D18;
    uint32_t _post_08050D18 = _base_08050D18 + _off_08050D18;
    _cyc_08050D18 += runtime_mem_cycles(_ea_08050D18, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050D18u, _ea_08050D18, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08050D18, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08050D1Au;
    runtime_tick(_cyc_08050D18);
    }
L_08050D1A:
    /* 08050D1A  08050d1a T b 0x08050d60 */
    {
    g_cpu.R[15] = 0x08050D1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D1A = 1u;
    _cyc_08050D1A = 3u;
    g_cpu.R[15] = 0x08050D60u;
    runtime_tick(_cyc_08050D1A);
    gf_tfunc_08050D60();
    return;
    g_cpu.R[15] = 0x08050D1Cu;
    runtime_tick(_cyc_08050D1A);
    }
    /* fall-through to 0x08050D1C */
    g_cpu.R[15] = 0x08050D1Cu;
    runtime_dispatch(0x08050D1Cu);
    return;
}

/* 0x08050D7A  mode=thumb  end=0x08050D7E  branches=44  indirect */
void gf_tfunc_08050D7A(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D7Cu: goto L_08050D7C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D7Au);
    /* 08050D7A  08050d7a T bl.hi 0x0804dd7e */
    {
    g_cpu.R[15] = 0x08050D7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D7A = 1u;
    _cyc_08050D7A = 1u;
    g_cpu.R[14] = 0x0804DD7Eu;
    g_cpu.R[15] = 0x08050D7Cu;
    runtime_tick(_cyc_08050D7A);
    }
L_08050D7C:
    /* 08050D7C  08050d7c T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08050D7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D7C = 1u;
    _cyc_08050D7C = 3u;
    uint32_t _blt_08050D7C = (g_cpu.R[14] + 0x000006A6u) & ~1u;
    g_cpu.R[14] = 0x08050D7Fu;
    g_cpu.R[15] = _blt_08050D7C;
    runtime_call_push_return(0x08050D7Eu);
    runtime_tick(_cyc_08050D7C);
    _cyc_08050D7C = 0u;
    runtime_dispatch(_blt_08050D7C);
    if (g_cpu.R[15] != 0x08050D7Eu) { runtime_call_cancel_return(0x08050D7Eu); return; }
    g_cpu.R[15] = 0x08050D7Eu;
    runtime_tick(_cyc_08050D7C);
    }
    /* fall-through to 0x08050D7E */
    g_cpu.R[15] = 0x08050D7Eu;
    runtime_dispatch(0x08050D7Eu);
    return;
}

/* 0x08050D86  mode=thumb  end=0x08050D8A  branches=38  indirect */
void gf_tfunc_08050D86(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D88u: goto L_08050D88;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D86u);
    /* 08050D86  08050d86 T bl.hi 0x0804ed8a */
    {
    g_cpu.R[15] = 0x08050D86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D86 = 1u;
    _cyc_08050D86 = 1u;
    g_cpu.R[14] = 0x0804ED8Au;
    g_cpu.R[15] = 0x08050D88u;
    runtime_tick(_cyc_08050D86);
    }
L_08050D88:
    /* 08050D88  08050d88 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08050D88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D88 = 1u;
    _cyc_08050D88 = 3u;
    uint32_t _blt_08050D88 = (g_cpu.R[14] + 0x00000C36u) & ~1u;
    g_cpu.R[14] = 0x08050D8Bu;
    g_cpu.R[15] = _blt_08050D88;
    runtime_call_push_return(0x08050D8Au);
    runtime_tick(_cyc_08050D88);
    _cyc_08050D88 = 0u;
    runtime_dispatch(_blt_08050D88);
    if (g_cpu.R[15] != 0x08050D8Au) { runtime_call_cancel_return(0x08050D8Au); return; }
    g_cpu.R[15] = 0x08050D8Au;
    runtime_tick(_cyc_08050D88);
    }
    /* fall-through to 0x08050D8A */
    g_cpu.R[15] = 0x08050D8Au;
    runtime_dispatch(0x08050D8Au);
    return;
}

/* 0x08050D8E  mode=thumb  end=0x08050D9A  branches=34  indirect */
void gf_tfunc_08050D8E(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D90u: goto L_08050D90;
        case 0x08050D92u: goto L_08050D92;
        case 0x08050D94u: goto L_08050D94;
        case 0x08050D96u: goto L_08050D96;
        case 0x08050D98u: goto L_08050D98;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D8Eu);
    /* 08050D8E  08050d8e T ldr r2,[r15,#0x1bc] */
    {
    g_cpu.R[15] = 0x08050D8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D8E = 1u;
    _cyc_08050D8E = 2u;
    uint32_t _base_08050D8E = 0x08050D92u & ~3u;
    uint32_t _off_08050D8E;
    _off_08050D8E = 0x000001BCu;
    uint32_t _ea_08050D8E = _base_08050D8E + _off_08050D8E;
    uint32_t _post_08050D8E = _base_08050D8E + _off_08050D8E;
    _cyc_08050D8E += runtime_mem_cycles(_ea_08050D8E, 4u, 0u);
    uint32_t _v_08050D8E;
    { uint32_t _w = bus_read_u32(_ea_08050D8E & ~3u); uint32_t _rot = (_ea_08050D8E & 3u) * 8u; _v_08050D8E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08050D8E;
    g_cpu.R[15] = 0x08050D90u;
    runtime_tick(_cyc_08050D8E);
    }
L_08050D90:
    /* 08050D90  08050d90 T ldr r3,[r15,#0x1bc] */
    {
    g_cpu.R[15] = 0x08050D90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D90 = 1u;
    _cyc_08050D90 = 2u;
    uint32_t _base_08050D90 = 0x08050D94u & ~3u;
    uint32_t _off_08050D90;
    _off_08050D90 = 0x000001BCu;
    uint32_t _ea_08050D90 = _base_08050D90 + _off_08050D90;
    uint32_t _post_08050D90 = _base_08050D90 + _off_08050D90;
    _cyc_08050D90 += runtime_mem_cycles(_ea_08050D90, 4u, 0u);
    uint32_t _v_08050D90;
    { uint32_t _w = bus_read_u32(_ea_08050D90 & ~3u); uint32_t _rot = (_ea_08050D90 & 3u) * 8u; _v_08050D90 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08050D90;
    g_cpu.R[15] = 0x08050D92u;
    runtime_tick(_cyc_08050D90);
    }
L_08050D92:
    /* 08050D92  08050d92 T ldr r4,[r15,#0x1c0] */
    {
    g_cpu.R[15] = 0x08050D92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D92 = 1u;
    _cyc_08050D92 = 2u;
    uint32_t _base_08050D92 = 0x08050D96u & ~3u;
    uint32_t _off_08050D92;
    _off_08050D92 = 0x000001C0u;
    uint32_t _ea_08050D92 = _base_08050D92 + _off_08050D92;
    uint32_t _post_08050D92 = _base_08050D92 + _off_08050D92;
    _cyc_08050D92 += runtime_mem_cycles(_ea_08050D92, 4u, 0u);
    uint32_t _v_08050D92;
    { uint32_t _w = bus_read_u32(_ea_08050D92 & ~3u); uint32_t _rot = (_ea_08050D92 & 3u) * 8u; _v_08050D92 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_08050D92;
    g_cpu.R[15] = 0x08050D94u;
    runtime_tick(_cyc_08050D92);
    }
L_08050D94:
    /* 08050D94  08050d94 T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050D94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D94 = 1u;
    _cyc_08050D94 = 2u;
    uint32_t _base_08050D94 = g_cpu.R[3];
    uint32_t _off_08050D94;
    _off_08050D94 = 0x00000008u;
    uint32_t _ea_08050D94 = _base_08050D94 + _off_08050D94;
    uint32_t _post_08050D94 = _base_08050D94 + _off_08050D94;
    _cyc_08050D94 += runtime_mem_cycles(_ea_08050D94, 4u, 0u);
    uint32_t _v_08050D94;
    { uint32_t _w = bus_read_u32(_ea_08050D94 & ~3u); uint32_t _rot = (_ea_08050D94 & 3u) * 8u; _v_08050D94 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050D94;
    g_cpu.R[15] = 0x08050D96u;
    runtime_tick(_cyc_08050D94);
    }
L_08050D96:
    /* 08050D96  08050d96 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050D96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D96 = 1u;
    _cyc_08050D96 = 1u;
    uint32_t _rm_08050D96 = g_cpu.R[4];
    uint32_t _op2_08050D96;
    uint32_t _co_08050D96;
    _op2_08050D96 = _rm_08050D96;
    _co_08050D96 = cpsr_c();
    uint32_t _rn_08050D96 = g_cpu.R[1];
    uint32_t _r_08050D96;
    _r_08050D96 = _rn_08050D96 - _op2_08050D96;
    arm_set_nzcv_sub(_rn_08050D96, _op2_08050D96, _r_08050D96);
    g_cpu.R[15] = 0x08050D98u;
    runtime_tick(_cyc_08050D96);
    }
L_08050D98:
    /* 08050D98  08050d98 T beq 0x08050daa */
    {
    g_cpu.R[15] = 0x08050D98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D98 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050D98 = 3u;
        g_cpu.R[15] = 0x08050DAAu;
        runtime_tick(_cyc_08050D98);
        gf_tfunc_08050DAA();
        return;
    }
    g_cpu.R[15] = 0x08050D9Au;
    runtime_tick(_cyc_08050D98);
    }
    /* fall-through to 0x08050D9A */
    g_cpu.R[15] = 0x08050D9Au;
    runtime_dispatch(0x08050D9Au);
    return;
}

/* 0x08050DAA  mode=thumb  end=0x08050DB8  branches=32  indirect */
void gf_tfunc_08050DAA(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050DACu: goto L_08050DAC;
        case 0x08050DAEu: goto L_08050DAE;
        case 0x08050DB0u: goto L_08050DB0;
        case 0x08050DB2u: goto L_08050DB2;
        case 0x08050DB4u: goto L_08050DB4;
        case 0x08050DB6u: goto L_08050DB6;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050DAAu);
    /* 08050DAA  08050daa T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050DAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DAA = 1u;
    _cyc_08050DAA = 1u;
    uint32_t _rn_08050DAA = g_cpu.R[3];
    uint32_t _r_08050DAA;
    _r_08050DAA = _rn_08050DAA + 0x00000010u;
    arm_set_nzcv_add(_rn_08050DAA, 0x00000010u, _r_08050DAA);
    g_cpu.R[3] = _r_08050DAA;
    g_cpu.R[15] = 0x08050DACu;
    runtime_tick(_cyc_08050DAA);
    }
L_08050DAC:
    /* 08050DAC  08050dac T ldr r5,[r15,#0x1a4] */
    {
    g_cpu.R[15] = 0x08050DACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DAC = 1u;
    _cyc_08050DAC = 2u;
    uint32_t _base_08050DAC = 0x08050DB0u & ~3u;
    uint32_t _off_08050DAC;
    _off_08050DAC = 0x000001A4u;
    uint32_t _ea_08050DAC = _base_08050DAC + _off_08050DAC;
    uint32_t _post_08050DAC = _base_08050DAC + _off_08050DAC;
    _cyc_08050DAC += runtime_mem_cycles(_ea_08050DAC, 4u, 0u);
    uint32_t _v_08050DAC;
    { uint32_t _w = bus_read_u32(_ea_08050DAC & ~3u); uint32_t _rot = (_ea_08050DAC & 3u) * 8u; _v_08050DAC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_08050DAC;
    g_cpu.R[15] = 0x08050DAEu;
    runtime_tick(_cyc_08050DAC);
    }
L_08050DAE:
    /* 08050DAE  08050dae T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050DAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DAE = 1u;
    _cyc_08050DAE = 2u;
    uint32_t _base_08050DAE = g_cpu.R[3];
    uint32_t _off_08050DAE;
    _off_08050DAE = 0x00000008u;
    uint32_t _ea_08050DAE = _base_08050DAE + _off_08050DAE;
    uint32_t _post_08050DAE = _base_08050DAE + _off_08050DAE;
    _cyc_08050DAE += runtime_mem_cycles(_ea_08050DAE, 4u, 0u);
    uint32_t _v_08050DAE;
    { uint32_t _w = bus_read_u32(_ea_08050DAE & ~3u); uint32_t _rot = (_ea_08050DAE & 3u) * 8u; _v_08050DAE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050DAE;
    g_cpu.R[15] = 0x08050DB0u;
    runtime_tick(_cyc_08050DAE);
    }
L_08050DB0:
    /* 08050DB0  08050db0 T ldr r6,[r15,#0x198] */
    {
    g_cpu.R[15] = 0x08050DB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DB0 = 1u;
    _cyc_08050DB0 = 2u;
    uint32_t _base_08050DB0 = 0x08050DB4u & ~3u;
    uint32_t _off_08050DB0;
    _off_08050DB0 = 0x00000198u;
    uint32_t _ea_08050DB0 = _base_08050DB0 + _off_08050DB0;
    uint32_t _post_08050DB0 = _base_08050DB0 + _off_08050DB0;
    _cyc_08050DB0 += runtime_mem_cycles(_ea_08050DB0, 4u, 0u);
    uint32_t _v_08050DB0;
    { uint32_t _w = bus_read_u32(_ea_08050DB0 & ~3u); uint32_t _rot = (_ea_08050DB0 & 3u) * 8u; _v_08050DB0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_08050DB0;
    g_cpu.R[15] = 0x08050DB2u;
    runtime_tick(_cyc_08050DB0);
    }
L_08050DB2:
    /* 08050DB2  08050db2 T adds r4,r5,#0x0 */
    {
    g_cpu.R[15] = 0x08050DB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DB2 = 1u;
    _cyc_08050DB2 = 1u;
    uint32_t _rn_08050DB2 = g_cpu.R[5];
    uint32_t _r_08050DB2;
    _r_08050DB2 = _rn_08050DB2 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050DB2, 0x00000000u, _r_08050DB2);
    g_cpu.R[4] = _r_08050DB2;
    g_cpu.R[15] = 0x08050DB4u;
    runtime_tick(_cyc_08050DB2);
    }
L_08050DB4:
    /* 08050DB4  08050db4 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050DB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DB4 = 1u;
    _cyc_08050DB4 = 1u;
    uint32_t _rm_08050DB4 = g_cpu.R[4];
    uint32_t _op2_08050DB4;
    uint32_t _co_08050DB4;
    _op2_08050DB4 = _rm_08050DB4;
    _co_08050DB4 = cpsr_c();
    uint32_t _rn_08050DB4 = g_cpu.R[1];
    uint32_t _r_08050DB4;
    _r_08050DB4 = _rn_08050DB4 - _op2_08050DB4;
    arm_set_nzcv_sub(_rn_08050DB4, _op2_08050DB4, _r_08050DB4);
    g_cpu.R[15] = 0x08050DB6u;
    runtime_tick(_cyc_08050DB4);
    }
L_08050DB6:
    /* 08050DB6  08050db6 T beq 0x08050dc8 */
    {
    g_cpu.R[15] = 0x08050DB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DB6 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050DB6 = 3u;
        g_cpu.R[15] = 0x08050DC8u;
        runtime_tick(_cyc_08050DB6);
        gf_tfunc_08050DC8();
        return;
    }
    g_cpu.R[15] = 0x08050DB8u;
    runtime_tick(_cyc_08050DB6);
    }
    /* fall-through to 0x08050DB8 */
    g_cpu.R[15] = 0x08050DB8u;
    runtime_dispatch(0x08050DB8u);
    return;
}

/* 0x08050DE2  mode=thumb  end=0x08050DEC  branches=28  indirect */
void gf_tfunc_08050DE2(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050DE4u: goto L_08050DE4;
        case 0x08050DE6u: goto L_08050DE6;
        case 0x08050DE8u: goto L_08050DE8;
        case 0x08050DEAu: goto L_08050DEA;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050DE2u);
    /* 08050DE2  08050de2 T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050DE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DE2 = 1u;
    _cyc_08050DE2 = 1u;
    uint32_t _rn_08050DE2 = g_cpu.R[3];
    uint32_t _r_08050DE2;
    _r_08050DE2 = _rn_08050DE2 + 0x00000010u;
    arm_set_nzcv_add(_rn_08050DE2, 0x00000010u, _r_08050DE2);
    g_cpu.R[3] = _r_08050DE2;
    g_cpu.R[15] = 0x08050DE4u;
    runtime_tick(_cyc_08050DE2);
    }
L_08050DE4:
    /* 08050DE4  08050de4 T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050DE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DE4 = 1u;
    _cyc_08050DE4 = 1u;
    uint32_t _rn_08050DE4 = g_cpu.R[4];
    uint32_t _r_08050DE4;
    _r_08050DE4 = _rn_08050DE4 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050DE4, 0x00000000u, _r_08050DE4);
    g_cpu.R[5] = _r_08050DE4;
    g_cpu.R[15] = 0x08050DE6u;
    runtime_tick(_cyc_08050DE4);
    }
L_08050DE6:
    /* 08050DE6  08050de6 T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050DE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DE6 = 1u;
    _cyc_08050DE6 = 2u;
    uint32_t _base_08050DE6 = g_cpu.R[3];
    uint32_t _off_08050DE6;
    _off_08050DE6 = 0x00000008u;
    uint32_t _ea_08050DE6 = _base_08050DE6 + _off_08050DE6;
    uint32_t _post_08050DE6 = _base_08050DE6 + _off_08050DE6;
    _cyc_08050DE6 += runtime_mem_cycles(_ea_08050DE6, 4u, 0u);
    uint32_t _v_08050DE6;
    { uint32_t _w = bus_read_u32(_ea_08050DE6 & ~3u); uint32_t _rot = (_ea_08050DE6 & 3u) * 8u; _v_08050DE6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050DE6;
    g_cpu.R[15] = 0x08050DE8u;
    runtime_tick(_cyc_08050DE6);
    }
L_08050DE8:
    /* 08050DE8  08050de8 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050DE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DE8 = 1u;
    _cyc_08050DE8 = 1u;
    uint32_t _rm_08050DE8 = g_cpu.R[4];
    uint32_t _op2_08050DE8;
    uint32_t _co_08050DE8;
    _op2_08050DE8 = _rm_08050DE8;
    _co_08050DE8 = cpsr_c();
    uint32_t _rn_08050DE8 = g_cpu.R[1];
    uint32_t _r_08050DE8;
    _r_08050DE8 = _rn_08050DE8 - _op2_08050DE8;
    arm_set_nzcv_sub(_rn_08050DE8, _op2_08050DE8, _r_08050DE8);
    g_cpu.R[15] = 0x08050DEAu;
    runtime_tick(_cyc_08050DE8);
    }
L_08050DEA:
    /* 08050DEA  08050dea T beq 0x08050dfc */
    {
    g_cpu.R[15] = 0x08050DEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DEA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050DEA = 3u;
        g_cpu.R[15] = 0x08050DFCu;
        runtime_tick(_cyc_08050DEA);
        gf_tfunc_08050DFC();
        return;
    }
    g_cpu.R[15] = 0x08050DECu;
    runtime_tick(_cyc_08050DEA);
    }
    /* fall-through to 0x08050DEC */
    g_cpu.R[15] = 0x08050DECu;
    runtime_dispatch(0x08050DECu);
    return;
}

/* 0x08050DEC  mode=thumb  end=0x08050DFC  branches=27  indirect */
void gf_tfunc_08050DEC(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050DEEu: goto L_08050DEE;
        case 0x08050DF0u: goto L_08050DF0;
        case 0x08050DF2u: goto L_08050DF2;
        case 0x08050DF4u: goto L_08050DF4;
        case 0x08050DF6u: goto L_08050DF6;
        case 0x08050DF8u: goto L_08050DF8;
        case 0x08050DFAu: goto L_08050DFA;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050DECu);
L_08050DEC:
    /* 08050DEC  08050dec T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050DECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DEC = 1u;
    _cyc_08050DEC = 2u;
    uint32_t _base_08050DEC = g_cpu.R[1];
    uint32_t _off_08050DEC;
    _off_08050DEC = 0x00000000u;
    uint32_t _ea_08050DEC = _base_08050DEC + _off_08050DEC;
    uint32_t _post_08050DEC = _base_08050DEC + _off_08050DEC;
    _cyc_08050DEC += runtime_mem_cycles(_ea_08050DEC, 4u, 0u);
    uint32_t _v_08050DEC;
    { uint32_t _w = bus_read_u32(_ea_08050DEC & ~3u); uint32_t _rot = (_ea_08050DEC & 3u) * 8u; _v_08050DEC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050DEC;
    g_cpu.R[15] = 0x08050DEEu;
    runtime_tick(_cyc_08050DEC);
    }
L_08050DEE:
    /* 08050DEE  08050dee T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050DEEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DEE = 1u;
    _cyc_08050DEE = 1u;
    uint32_t _base_08050DEE = g_cpu.R[2];
    uint32_t _off_08050DEE;
    _off_08050DEE = 0x00000000u;
    uint32_t _ea_08050DEE = _base_08050DEE + _off_08050DEE;
    uint32_t _post_08050DEE = _base_08050DEE + _off_08050DEE;
    _cyc_08050DEE += runtime_mem_cycles(_ea_08050DEE, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050DEEu, _ea_08050DEE & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050DEE & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050DF0u;
    runtime_tick(_cyc_08050DEE);
    }
L_08050DF0:
    /* 08050DF0  08050df0 T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050DF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DF0 = 1u;
    _cyc_08050DF0 = 2u;
    uint32_t _base_08050DF0 = g_cpu.R[1];
    uint32_t _off_08050DF0;
    _off_08050DF0 = 0x00000004u;
    uint32_t _ea_08050DF0 = _base_08050DF0 + _off_08050DF0;
    uint32_t _post_08050DF0 = _base_08050DF0 + _off_08050DF0;
    _cyc_08050DF0 += runtime_mem_cycles(_ea_08050DF0, 4u, 0u);
    uint32_t _v_08050DF0;
    { uint32_t _w = bus_read_u32(_ea_08050DF0 & ~3u); uint32_t _rot = (_ea_08050DF0 & 3u) * 8u; _v_08050DF0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050DF0;
    g_cpu.R[15] = 0x08050DF2u;
    runtime_tick(_cyc_08050DF0);
    }
L_08050DF2:
    /* 08050DF2  08050df2 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050DF2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DF2 = 1u;
    _cyc_08050DF2 = 1u;
    uint32_t _base_08050DF2 = g_cpu.R[2];
    uint32_t _off_08050DF2;
    _off_08050DF2 = 0x00000004u;
    uint32_t _ea_08050DF2 = _base_08050DF2 + _off_08050DF2;
    uint32_t _post_08050DF2 = _base_08050DF2 + _off_08050DF2;
    _cyc_08050DF2 += runtime_mem_cycles(_ea_08050DF2, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050DF2u, _ea_08050DF2 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050DF2 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050DF4u;
    runtime_tick(_cyc_08050DF2);
    }
L_08050DF4:
    /* 08050DF4  08050df4 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050DF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DF4 = 1u;
    _cyc_08050DF4 = 1u;
    uint32_t _rn_08050DF4 = g_cpu.R[2];
    uint32_t _r_08050DF4;
    _r_08050DF4 = _rn_08050DF4 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050DF4, 0x00000008u, _r_08050DF4);
    g_cpu.R[2] = _r_08050DF4;
    g_cpu.R[15] = 0x08050DF6u;
    runtime_tick(_cyc_08050DF4);
    }
L_08050DF6:
    /* 08050DF6  08050df6 T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050DF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DF6 = 1u;
    _cyc_08050DF6 = 2u;
    uint32_t _base_08050DF6 = g_cpu.R[1];
    uint32_t _off_08050DF6;
    _off_08050DF6 = 0x00000008u;
    uint32_t _ea_08050DF6 = _base_08050DF6 + _off_08050DF6;
    uint32_t _post_08050DF6 = _base_08050DF6 + _off_08050DF6;
    _cyc_08050DF6 += runtime_mem_cycles(_ea_08050DF6, 4u, 0u);
    uint32_t _v_08050DF6;
    { uint32_t _w = bus_read_u32(_ea_08050DF6 & ~3u); uint32_t _rot = (_ea_08050DF6 & 3u) * 8u; _v_08050DF6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050DF6;
    g_cpu.R[15] = 0x08050DF8u;
    runtime_tick(_cyc_08050DF6);
    }
L_08050DF8:
    /* 08050DF8  08050df8 T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050DF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DF8 = 1u;
    _cyc_08050DF8 = 1u;
    uint32_t _rm_08050DF8 = g_cpu.R[5];
    uint32_t _op2_08050DF8;
    uint32_t _co_08050DF8;
    _op2_08050DF8 = _rm_08050DF8;
    _co_08050DF8 = cpsr_c();
    uint32_t _rn_08050DF8 = g_cpu.R[1];
    uint32_t _r_08050DF8;
    _r_08050DF8 = _rn_08050DF8 - _op2_08050DF8;
    arm_set_nzcv_sub(_rn_08050DF8, _op2_08050DF8, _r_08050DF8);
    g_cpu.R[15] = 0x08050DFAu;
    runtime_tick(_cyc_08050DF8);
    }
L_08050DFA:
    /* 08050DFA  08050dfa T bne 0x08050dec */
    {
    g_cpu.R[15] = 0x08050DFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DFA = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050DFA = 3u;
        g_cpu.R[15] = 0x08050DECu;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050DFAu, 0x08050DECu, 0u, 0u);
        runtime_tick(_cyc_08050DFA);
        goto L_08050DEC;
    }
    g_cpu.R[15] = 0x08050DFCu;
    runtime_tick(_cyc_08050DFA);
    }
    /* fall-through to 0x08050DFC */
    g_cpu.R[15] = 0x08050DFCu;
    runtime_dispatch(0x08050DFCu);
    return;
}

/* 0x08050E16  mode=thumb  end=0x08050E20  branches=24  indirect */
void gf_tfunc_08050E16(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E18u: goto L_08050E18;
        case 0x08050E1Au: goto L_08050E1A;
        case 0x08050E1Cu: goto L_08050E1C;
        case 0x08050E1Eu: goto L_08050E1E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E16u);
    /* 08050E16  08050e16 T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050E16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E16 = 1u;
    _cyc_08050E16 = 1u;
    uint32_t _rn_08050E16 = g_cpu.R[3];
    uint32_t _r_08050E16;
    _r_08050E16 = _rn_08050E16 + 0x00000010u;
    arm_set_nzcv_add(_rn_08050E16, 0x00000010u, _r_08050E16);
    g_cpu.R[3] = _r_08050E16;
    g_cpu.R[15] = 0x08050E18u;
    runtime_tick(_cyc_08050E16);
    }
L_08050E18:
    /* 08050E18  08050e18 T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050E18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E18 = 1u;
    _cyc_08050E18 = 1u;
    uint32_t _rn_08050E18 = g_cpu.R[4];
    uint32_t _r_08050E18;
    _r_08050E18 = _rn_08050E18 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050E18, 0x00000000u, _r_08050E18);
    g_cpu.R[5] = _r_08050E18;
    g_cpu.R[15] = 0x08050E1Au;
    runtime_tick(_cyc_08050E18);
    }
L_08050E1A:
    /* 08050E1A  08050e1a T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050E1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E1A = 1u;
    _cyc_08050E1A = 2u;
    uint32_t _base_08050E1A = g_cpu.R[3];
    uint32_t _off_08050E1A;
    _off_08050E1A = 0x00000008u;
    uint32_t _ea_08050E1A = _base_08050E1A + _off_08050E1A;
    uint32_t _post_08050E1A = _base_08050E1A + _off_08050E1A;
    _cyc_08050E1A += runtime_mem_cycles(_ea_08050E1A, 4u, 0u);
    uint32_t _v_08050E1A;
    { uint32_t _w = bus_read_u32(_ea_08050E1A & ~3u); uint32_t _rot = (_ea_08050E1A & 3u) * 8u; _v_08050E1A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E1A;
    g_cpu.R[15] = 0x08050E1Cu;
    runtime_tick(_cyc_08050E1A);
    }
L_08050E1C:
    /* 08050E1C  08050e1c T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050E1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E1C = 1u;
    _cyc_08050E1C = 1u;
    uint32_t _rm_08050E1C = g_cpu.R[4];
    uint32_t _op2_08050E1C;
    uint32_t _co_08050E1C;
    _op2_08050E1C = _rm_08050E1C;
    _co_08050E1C = cpsr_c();
    uint32_t _rn_08050E1C = g_cpu.R[1];
    uint32_t _r_08050E1C;
    _r_08050E1C = _rn_08050E1C - _op2_08050E1C;
    arm_set_nzcv_sub(_rn_08050E1C, _op2_08050E1C, _r_08050E1C);
    g_cpu.R[15] = 0x08050E1Eu;
    runtime_tick(_cyc_08050E1C);
    }
L_08050E1E:
    /* 08050E1E  08050e1e T beq 0x08050e30 */
    {
    g_cpu.R[15] = 0x08050E1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E1E = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050E1E = 3u;
        g_cpu.R[15] = 0x08050E30u;
        runtime_tick(_cyc_08050E1E);
        gf_tfunc_08050E30();
        return;
    }
    g_cpu.R[15] = 0x08050E20u;
    runtime_tick(_cyc_08050E1E);
    }
    /* fall-through to 0x08050E20 */
    g_cpu.R[15] = 0x08050E20u;
    runtime_dispatch(0x08050E20u);
    return;
}

/* 0x0805010C  mode=thumb  end=0x08050134  branches=12 */
void gf_tfunc_0805010C(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0805010Eu: goto L_0805010E;
        case 0x08050110u: goto L_08050110;
        case 0x08050112u: goto L_08050112;
        case 0x08050114u: goto L_08050114;
        case 0x08050116u: goto L_08050116;
        case 0x08050118u: goto L_08050118;
        case 0x0805011Au: goto L_0805011A;
        case 0x0805011Cu: goto L_0805011C;
        case 0x0805011Eu: goto L_0805011E;
        case 0x08050120u: goto L_08050120;
        case 0x08050122u: goto L_08050122;
        case 0x08050124u: goto L_08050124;
        case 0x08050126u: goto L_08050126;
        case 0x08050128u: goto L_08050128;
        case 0x0805012Au: goto L_0805012A;
        case 0x0805012Cu: goto L_0805012C;
        case 0x0805012Eu: goto L_0805012E;
        case 0x08050130u: goto L_08050130;
        case 0x08050132u: goto L_08050132;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0805010Cu);
    /* 0805010C  0805010c T mov r1,r8 */
    {
    g_cpu.R[15] = 0x0805010Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805010C = 1u;
    _cyc_0805010C = 1u;
    uint32_t _rm_0805010C = g_cpu.R[8];
    uint32_t _op2_0805010C;
    uint32_t _co_0805010C;
    _op2_0805010C = _rm_0805010C;
    _co_0805010C = cpsr_c();
    uint32_t _r_0805010C;
    _r_0805010C = _op2_0805010C;
    g_cpu.R[1] = _r_0805010C;
    g_cpu.R[15] = 0x0805010Eu;
    runtime_tick(_cyc_0805010C);
    }
L_0805010E:
    /* 0805010E  0805010e T ldrb r0,[r1] */
    {
    g_cpu.R[15] = 0x0805010Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805010E = 1u;
    _cyc_0805010E = 2u;
    uint32_t _base_0805010E = g_cpu.R[1];
    uint32_t _off_0805010E;
    _off_0805010E = 0x00000000u;
    uint32_t _ea_0805010E = _base_0805010E + _off_0805010E;
    uint32_t _post_0805010E = _base_0805010E + _off_0805010E;
    _cyc_0805010E += runtime_mem_cycles(_ea_0805010E, 1u, 0u);
    uint32_t _v_0805010E;
    _v_0805010E = bus_read_u8(_ea_0805010E);
    g_cpu.R[0] = _v_0805010E;
    g_cpu.R[15] = 0x08050110u;
    runtime_tick(_cyc_0805010E);
    }
L_08050110:
    /* 08050110  08050110 T adds r0,r0,#0xb */
    {
    g_cpu.R[15] = 0x08050110u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050110 = 1u;
    _cyc_08050110 = 1u;
    uint32_t _rn_08050110 = g_cpu.R[0];
    uint32_t _r_08050110;
    _r_08050110 = _rn_08050110 + 0x0000000Bu;
    arm_set_nzcv_add(_rn_08050110, 0x0000000Bu, _r_08050110);
    g_cpu.R[0] = _r_08050110;
    g_cpu.R[15] = 0x08050112u;
    runtime_tick(_cyc_08050110);
    }
L_08050112:
    /* 08050112  08050112 T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08050112u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050112 = 1u;
    _cyc_08050112 = 1u;
    uint32_t _base_08050112 = g_cpu.R[1];
    uint32_t _off_08050112;
    _off_08050112 = 0x00000000u;
    uint32_t _ea_08050112 = _base_08050112 + _off_08050112;
    uint32_t _post_08050112 = _base_08050112 + _off_08050112;
    _cyc_08050112 += runtime_mem_cycles(_ea_08050112, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050112u, _ea_08050112, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050112, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050114u;
    runtime_tick(_cyc_08050112);
    }
L_08050114:
    /* 08050114  08050114 T adds r5,r5,#0x2 */
    {
    g_cpu.R[15] = 0x08050114u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050114 = 1u;
    _cyc_08050114 = 1u;
    uint32_t _rn_08050114 = g_cpu.R[5];
    uint32_t _r_08050114;
    _r_08050114 = _rn_08050114 + 0x00000002u;
    arm_set_nzcv_add(_rn_08050114, 0x00000002u, _r_08050114);
    g_cpu.R[5] = _r_08050114;
    g_cpu.R[15] = 0x08050116u;
    runtime_tick(_cyc_08050114);
    }
L_08050116:
    /* 08050116  08050116 T subs r4,r4,#0x1 */
    {
    g_cpu.R[15] = 0x08050116u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050116 = 1u;
    _cyc_08050116 = 1u;
    uint32_t _rn_08050116 = g_cpu.R[4];
    uint32_t _r_08050116;
    _r_08050116 = _rn_08050116 - 0x00000001u;
    arm_set_nzcv_sub(_rn_08050116, 0x00000001u, _r_08050116);
    g_cpu.R[4] = _r_08050116;
    g_cpu.R[15] = 0x08050118u;
    runtime_tick(_cyc_08050116);
    }
L_08050118:
    /* 08050118  08050118 T cmps r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050118u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050118 = 1u;
    _cyc_08050118 = 1u;
    uint32_t _rn_08050118 = g_cpu.R[4];
    uint32_t _r_08050118;
    _r_08050118 = _rn_08050118 - 0x00000000u;
    arm_set_nzcv_sub(_rn_08050118, 0x00000000u, _r_08050118);
    g_cpu.R[15] = 0x0805011Au;
    runtime_tick(_cyc_08050118);
    }
L_0805011A:
    /* 0805011A  0805011a T bge 0x080500fc */
    {
    g_cpu.R[15] = 0x0805011Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805011A = 1u;
    if (arm_cond_passes(0xau)) {
        _cyc_0805011A = 3u;
        g_cpu.R[15] = 0x080500FCu;
        runtime_tick(_cyc_0805011A);
        gf_tfunc_080500FC();
        return;
    }
    g_cpu.R[15] = 0x0805011Cu;
    runtime_tick(_cyc_0805011A);
    }
L_0805011C:
    /* 0805011C  0805011c T ldr r2,[r15,#0xb8] */
    {
    g_cpu.R[15] = 0x0805011Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805011C = 1u;
    _cyc_0805011C = 2u;
    uint32_t _base_0805011C = 0x08050120u & ~3u;
    uint32_t _off_0805011C;
    _off_0805011C = 0x000000B8u;
    uint32_t _ea_0805011C = _base_0805011C + _off_0805011C;
    uint32_t _post_0805011C = _base_0805011C + _off_0805011C;
    _cyc_0805011C += runtime_mem_cycles(_ea_0805011C, 4u, 0u);
    uint32_t _v_0805011C;
    { uint32_t _w = bus_read_u32(_ea_0805011C & ~3u); uint32_t _rot = (_ea_0805011C & 3u) * 8u; _v_0805011C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0805011C;
    g_cpu.R[15] = 0x0805011Eu;
    runtime_tick(_cyc_0805011C);
    }
L_0805011E:
    /* 0805011E  0805011e T ldrh r1,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x0805011Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805011E = 1u;
    _cyc_0805011E = 2u;
    uint32_t _base_0805011E = g_cpu.R[2];
    uint32_t _off_0805011E;
    _off_0805011E = 0x00000002u;
    uint32_t _ea_0805011E = _base_0805011E + _off_0805011E;
    uint32_t _post_0805011E = _base_0805011E + _off_0805011E;
    _cyc_0805011E += runtime_mem_cycles(_ea_0805011E, 2u, 0u);
    uint32_t _v_0805011E;
    { uint32_t _h = bus_read_u16(_ea_0805011E & ~1u); if (_ea_0805011E & 1u) _v_0805011E = ((_h >> 8) | (_h << 24)); else _v_0805011E = _h; }
    g_cpu.R[1] = _v_0805011E;
    g_cpu.R[15] = 0x08050120u;
    runtime_tick(_cyc_0805011E);
    }
L_08050120:
    /* 08050120  08050120 T ldr r0,[r15,#0xac] */
    {
    g_cpu.R[15] = 0x08050120u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050120 = 1u;
    _cyc_08050120 = 2u;
    uint32_t _base_08050120 = 0x08050124u & ~3u;
    uint32_t _off_08050120;
    _off_08050120 = 0x000000ACu;
    uint32_t _ea_08050120 = _base_08050120 + _off_08050120;
    uint32_t _post_08050120 = _base_08050120 + _off_08050120;
    _cyc_08050120 += runtime_mem_cycles(_ea_08050120, 4u, 0u);
    uint32_t _v_08050120;
    { uint32_t _w = bus_read_u32(_ea_08050120 & ~3u); uint32_t _rot = (_ea_08050120 & 3u) * 8u; _v_08050120 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050120;
    g_cpu.R[15] = 0x08050122u;
    runtime_tick(_cyc_08050120);
    }
L_08050122:
    /* 08050122  08050122 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08050122u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050122 = 1u;
    _cyc_08050122 = 1u;
    uint32_t _rm_08050122 = g_cpu.R[1];
    uint32_t _op2_08050122;
    uint32_t _co_08050122;
    _op2_08050122 = _rm_08050122;
    _co_08050122 = cpsr_c();
    uint32_t _rn_08050122 = g_cpu.R[0];
    uint32_t _r_08050122;
    _r_08050122 = _rn_08050122 & _op2_08050122;
    arm_set_nzc_logic(_r_08050122, _co_08050122);
    g_cpu.R[0] = _r_08050122;
    g_cpu.R[15] = 0x08050124u;
    runtime_tick(_cyc_08050122);
    }
L_08050124:
    /* 08050124  08050124 T movs r1,#0x9d */
    {
    g_cpu.R[15] = 0x08050124u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050124 = 1u;
    _cyc_08050124 = 1u;
    uint32_t _r_08050124;
    _r_08050124 = 0x0000009Du;
    arm_set_nzc_logic(_r_08050124, cpsr_c());
    g_cpu.R[1] = _r_08050124;
    g_cpu.R[15] = 0x08050126u;
    runtime_tick(_cyc_08050124);
    }
L_08050126:
    /* 08050126  08050126 T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08050126u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050126 = 1u;
    _cyc_08050126 = 1u;
    uint32_t _rm_08050126 = g_cpu.R[1];
    uint32_t _op2_08050126;
    uint32_t _co_08050126;
    _op2_08050126 = _rm_08050126;
    _co_08050126 = cpsr_c();
    uint32_t _rn_08050126 = g_cpu.R[0];
    uint32_t _r_08050126;
    _r_08050126 = _rn_08050126 | _op2_08050126;
    arm_set_nzc_logic(_r_08050126, _co_08050126);
    g_cpu.R[0] = _r_08050126;
    g_cpu.R[15] = 0x08050128u;
    runtime_tick(_cyc_08050126);
    }
L_08050128:
    /* 08050128  08050128 T strh r0,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x08050128u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050128 = 1u;
    _cyc_08050128 = 1u;
    uint32_t _base_08050128 = g_cpu.R[2];
    uint32_t _off_08050128;
    _off_08050128 = 0x00000002u;
    uint32_t _ea_08050128 = _base_08050128 + _off_08050128;
    uint32_t _post_08050128 = _base_08050128 + _off_08050128;
    _cyc_08050128 += runtime_mem_cycles(_ea_08050128, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050128u, _ea_08050128 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08050128 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0805012Au;
    runtime_tick(_cyc_08050128);
    }
L_0805012A:
    /* 0805012A  0805012a T movs r0,#0x43 */
    {
    g_cpu.R[15] = 0x0805012Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805012A = 1u;
    _cyc_0805012A = 1u;
    uint32_t _r_0805012A;
    _r_0805012A = 0x00000043u;
    arm_set_nzc_logic(_r_0805012A, cpsr_c());
    g_cpu.R[0] = _r_0805012A;
    g_cpu.R[15] = 0x0805012Cu;
    runtime_tick(_cyc_0805012A);
    }
L_0805012C:
    /* 0805012C  0805012c T strb r0,[r2] */
    {
    g_cpu.R[15] = 0x0805012Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805012C = 1u;
    _cyc_0805012C = 1u;
    uint32_t _base_0805012C = g_cpu.R[2];
    uint32_t _off_0805012C;
    _off_0805012C = 0x00000000u;
    uint32_t _ea_0805012C = _base_0805012C + _off_0805012C;
    uint32_t _post_0805012C = _base_0805012C + _off_0805012C;
    _cyc_0805012C += runtime_mem_cycles(_ea_0805012C, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805012Cu, _ea_0805012C, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0805012C, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0805012Eu;
    runtime_tick(_cyc_0805012C);
    }
L_0805012E:
    /* 0805012E  0805012e T movs r4,#0x0 */
    {
    g_cpu.R[15] = 0x0805012Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805012E = 1u;
    _cyc_0805012E = 1u;
    uint32_t _r_0805012E;
    _r_0805012E = 0x00000000u;
    arm_set_nzc_logic(_r_0805012E, cpsr_c());
    g_cpu.R[4] = _r_0805012E;
    g_cpu.R[15] = 0x08050130u;
    runtime_tick(_cyc_0805012E);
    }
L_08050130:
    /* 08050130  08050130 T ldr r6,[r15,#0xa8] */
    {
    g_cpu.R[15] = 0x08050130u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050130 = 1u;
    _cyc_08050130 = 2u;
    uint32_t _base_08050130 = 0x08050134u & ~3u;
    uint32_t _off_08050130;
    _off_08050130 = 0x000000A8u;
    uint32_t _ea_08050130 = _base_08050130 + _off_08050130;
    uint32_t _post_08050130 = _base_08050130 + _off_08050130;
    _cyc_08050130 += runtime_mem_cycles(_ea_08050130, 4u, 0u);
    uint32_t _v_08050130;
    { uint32_t _w = bus_read_u32(_ea_08050130 & ~3u); uint32_t _rot = (_ea_08050130 & 3u) * 8u; _v_08050130 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_08050130;
    g_cpu.R[15] = 0x08050132u;
    runtime_tick(_cyc_08050130);
    }
L_08050132:
    /* 08050132  08050132 T movs r5,#0x1 */
    {
    g_cpu.R[15] = 0x08050132u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050132 = 1u;
    _cyc_08050132 = 1u;
    uint32_t _r_08050132;
    _r_08050132 = 0x00000001u;
    arm_set_nzc_logic(_r_08050132, cpsr_c());
    g_cpu.R[5] = _r_08050132;
    g_cpu.R[15] = 0x08050134u;
    runtime_tick(_cyc_08050132);
    }
    /* fall-through to 0x08050134 */
    g_cpu.R[15] = 0x08050134u;
    runtime_dispatch(0x08050134u);
    return;
}

/* 0x08050150  mode=thumb  end=0x08050184  branches=9 */
void gf_tfunc_08050150(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050152u: goto L_08050152;
        case 0x08050154u: goto L_08050154;
        case 0x08050156u: goto L_08050156;
        case 0x08050158u: goto L_08050158;
        case 0x0805015Au: goto L_0805015A;
        case 0x0805015Cu: goto L_0805015C;
        case 0x0805015Eu: goto L_0805015E;
        case 0x08050160u: goto L_08050160;
        case 0x08050162u: goto L_08050162;
        case 0x08050164u: goto L_08050164;
        case 0x08050166u: goto L_08050166;
        case 0x08050168u: goto L_08050168;
        case 0x0805016Au: goto L_0805016A;
        case 0x0805016Cu: goto L_0805016C;
        case 0x0805016Eu: goto L_0805016E;
        case 0x08050170u: goto L_08050170;
        case 0x08050172u: goto L_08050172;
        case 0x08050174u: goto L_08050174;
        case 0x08050176u: goto L_08050176;
        case 0x08050178u: goto L_08050178;
        case 0x0805017Au: goto L_0805017A;
        case 0x0805017Cu: goto L_0805017C;
        case 0x0805017Eu: goto L_0805017E;
        case 0x08050180u: goto L_08050180;
        case 0x08050182u: goto L_08050182;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050150u);
    /* 08050150  08050150 T ldr r2,[r15,#0x84] */
    {
    g_cpu.R[15] = 0x08050150u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050150 = 1u;
    _cyc_08050150 = 2u;
    uint32_t _base_08050150 = 0x08050154u & ~3u;
    uint32_t _off_08050150;
    _off_08050150 = 0x00000084u;
    uint32_t _ea_08050150 = _base_08050150 + _off_08050150;
    uint32_t _post_08050150 = _base_08050150 + _off_08050150;
    _cyc_08050150 += runtime_mem_cycles(_ea_08050150, 4u, 0u);
    uint32_t _v_08050150;
    { uint32_t _w = bus_read_u32(_ea_08050150 & ~3u); uint32_t _rot = (_ea_08050150 & 3u) * 8u; _v_08050150 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08050150;
    g_cpu.R[15] = 0x08050152u;
    runtime_tick(_cyc_08050150);
    }
L_08050152:
    /* 08050152  08050152 T ldrb r0,[r2] */
    {
    g_cpu.R[15] = 0x08050152u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050152 = 1u;
    _cyc_08050152 = 2u;
    uint32_t _base_08050152 = g_cpu.R[2];
    uint32_t _off_08050152;
    _off_08050152 = 0x00000000u;
    uint32_t _ea_08050152 = _base_08050152 + _off_08050152;
    uint32_t _post_08050152 = _base_08050152 + _off_08050152;
    _cyc_08050152 += runtime_mem_cycles(_ea_08050152, 1u, 0u);
    uint32_t _v_08050152;
    _v_08050152 = bus_read_u8(_ea_08050152);
    g_cpu.R[0] = _v_08050152;
    g_cpu.R[15] = 0x08050154u;
    runtime_tick(_cyc_08050152);
    }
L_08050154:
    /* 08050154  08050154 T adds r0,r0,#0xb */
    {
    g_cpu.R[15] = 0x08050154u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050154 = 1u;
    _cyc_08050154 = 1u;
    uint32_t _rn_08050154 = g_cpu.R[0];
    uint32_t _r_08050154;
    _r_08050154 = _rn_08050154 + 0x0000000Bu;
    arm_set_nzcv_add(_rn_08050154, 0x0000000Bu, _r_08050154);
    g_cpu.R[0] = _r_08050154;
    g_cpu.R[15] = 0x08050156u;
    runtime_tick(_cyc_08050154);
    }
L_08050156:
    /* 08050156  08050156 T strb r0,[r2] */
    {
    g_cpu.R[15] = 0x08050156u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050156 = 1u;
    _cyc_08050156 = 1u;
    uint32_t _base_08050156 = g_cpu.R[2];
    uint32_t _off_08050156;
    _off_08050156 = 0x00000000u;
    uint32_t _ea_08050156 = _base_08050156 + _off_08050156;
    uint32_t _post_08050156 = _base_08050156 + _off_08050156;
    _cyc_08050156 += runtime_mem_cycles(_ea_08050156, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050156u, _ea_08050156, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050156, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050158u;
    runtime_tick(_cyc_08050156);
    }
L_08050158:
    /* 08050158  08050158 T adds r5,r5,#0x6 */
    {
    g_cpu.R[15] = 0x08050158u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050158 = 1u;
    _cyc_08050158 = 1u;
    uint32_t _rn_08050158 = g_cpu.R[5];
    uint32_t _r_08050158;
    _r_08050158 = _rn_08050158 + 0x00000006u;
    arm_set_nzcv_add(_rn_08050158, 0x00000006u, _r_08050158);
    g_cpu.R[5] = _r_08050158;
    g_cpu.R[15] = 0x0805015Au;
    runtime_tick(_cyc_08050158);
    }
L_0805015A:
    /* 0805015A  0805015a T adds r4,r4,#0x1 */
    {
    g_cpu.R[15] = 0x0805015Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805015A = 1u;
    _cyc_0805015A = 1u;
    uint32_t _rn_0805015A = g_cpu.R[4];
    uint32_t _r_0805015A;
    _r_0805015A = _rn_0805015A + 0x00000001u;
    arm_set_nzcv_add(_rn_0805015A, 0x00000001u, _r_0805015A);
    g_cpu.R[4] = _r_0805015A;
    g_cpu.R[15] = 0x0805015Cu;
    runtime_tick(_cyc_0805015A);
    }
L_0805015C:
    /* 0805015C  0805015c T cmps r4,#0x3 */
    {
    g_cpu.R[15] = 0x0805015Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805015C = 1u;
    _cyc_0805015C = 1u;
    uint32_t _rn_0805015C = g_cpu.R[4];
    uint32_t _r_0805015C;
    _r_0805015C = _rn_0805015C - 0x00000003u;
    arm_set_nzcv_sub(_rn_0805015C, 0x00000003u, _r_0805015C);
    g_cpu.R[15] = 0x0805015Eu;
    runtime_tick(_cyc_0805015C);
    }
L_0805015E:
    /* 0805015E  0805015e T ble 0x08050134 */
    {
    g_cpu.R[15] = 0x0805015Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805015E = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_0805015E = 3u;
        g_cpu.R[15] = 0x08050134u;
        runtime_tick(_cyc_0805015E);
        gf_tfunc_08050134();
        return;
    }
    g_cpu.R[15] = 0x08050160u;
    runtime_tick(_cyc_0805015E);
    }
L_08050160:
    /* 08050160  08050160 T ldr r0,[r15,#0x80] */
    {
    g_cpu.R[15] = 0x08050160u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050160 = 1u;
    _cyc_08050160 = 2u;
    uint32_t _base_08050160 = 0x08050164u & ~3u;
    uint32_t _off_08050160;
    _off_08050160 = 0x00000080u;
    uint32_t _ea_08050160 = _base_08050160 + _off_08050160;
    uint32_t _post_08050160 = _base_08050160 + _off_08050160;
    _cyc_08050160 += runtime_mem_cycles(_ea_08050160, 4u, 0u);
    uint32_t _v_08050160;
    { uint32_t _w = bus_read_u32(_ea_08050160 & ~3u); uint32_t _rot = (_ea_08050160 & 3u) * 8u; _v_08050160 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050160;
    g_cpu.R[15] = 0x08050162u;
    runtime_tick(_cyc_08050160);
    }
L_08050162:
    /* 08050162  08050162 T ldrh r1,[r0,#0x2] */
    {
    g_cpu.R[15] = 0x08050162u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050162 = 1u;
    _cyc_08050162 = 2u;
    uint32_t _base_08050162 = g_cpu.R[0];
    uint32_t _off_08050162;
    _off_08050162 = 0x00000002u;
    uint32_t _ea_08050162 = _base_08050162 + _off_08050162;
    uint32_t _post_08050162 = _base_08050162 + _off_08050162;
    _cyc_08050162 += runtime_mem_cycles(_ea_08050162, 2u, 0u);
    uint32_t _v_08050162;
    { uint32_t _h = bus_read_u16(_ea_08050162 & ~1u); if (_ea_08050162 & 1u) _v_08050162 = ((_h >> 8) | (_h << 24)); else _v_08050162 = _h; }
    g_cpu.R[1] = _v_08050162;
    g_cpu.R[15] = 0x08050164u;
    runtime_tick(_cyc_08050162);
    }
L_08050164:
    /* 08050164  08050164 T ldr r4,[r15,#0x68] */
    {
    g_cpu.R[15] = 0x08050164u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050164 = 1u;
    _cyc_08050164 = 2u;
    uint32_t _base_08050164 = 0x08050168u & ~3u;
    uint32_t _off_08050164;
    _off_08050164 = 0x00000068u;
    uint32_t _ea_08050164 = _base_08050164 + _off_08050164;
    uint32_t _post_08050164 = _base_08050164 + _off_08050164;
    _cyc_08050164 += runtime_mem_cycles(_ea_08050164, 4u, 0u);
    uint32_t _v_08050164;
    { uint32_t _w = bus_read_u32(_ea_08050164 & ~3u); uint32_t _rot = (_ea_08050164 & 3u) * 8u; _v_08050164 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_08050164;
    g_cpu.R[15] = 0x08050166u;
    runtime_tick(_cyc_08050164);
    }
L_08050166:
    /* 08050166  08050166 T adds r0,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050166u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050166 = 1u;
    _cyc_08050166 = 1u;
    uint32_t _rn_08050166 = g_cpu.R[4];
    uint32_t _r_08050166;
    _r_08050166 = _rn_08050166 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050166, 0x00000000u, _r_08050166);
    g_cpu.R[0] = _r_08050166;
    g_cpu.R[15] = 0x08050168u;
    runtime_tick(_cyc_08050166);
    }
L_08050168:
    /* 08050168  08050168 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x08050168u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050168 = 1u;
    _cyc_08050168 = 1u;
    uint32_t _rm_08050168 = g_cpu.R[1];
    uint32_t _op2_08050168;
    uint32_t _co_08050168;
    _op2_08050168 = _rm_08050168;
    _co_08050168 = cpsr_c();
    uint32_t _rn_08050168 = g_cpu.R[0];
    uint32_t _r_08050168;
    _r_08050168 = _rn_08050168 & _op2_08050168;
    arm_set_nzc_logic(_r_08050168, _co_08050168);
    g_cpu.R[0] = _r_08050168;
    g_cpu.R[15] = 0x0805016Au;
    runtime_tick(_cyc_08050168);
    }
L_0805016A:
    /* 0805016A  0805016a T movs r1,#0x50 */
    {
    g_cpu.R[15] = 0x0805016Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805016A = 1u;
    _cyc_0805016A = 1u;
    uint32_t _r_0805016A;
    _r_0805016A = 0x00000050u;
    arm_set_nzc_logic(_r_0805016A, cpsr_c());
    g_cpu.R[1] = _r_0805016A;
    g_cpu.R[15] = 0x0805016Cu;
    runtime_tick(_cyc_0805016A);
    }
L_0805016C:
    /* 0805016C  0805016c T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x0805016Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805016C = 1u;
    _cyc_0805016C = 1u;
    uint32_t _rm_0805016C = g_cpu.R[1];
    uint32_t _op2_0805016C;
    uint32_t _co_0805016C;
    _op2_0805016C = _rm_0805016C;
    _co_0805016C = cpsr_c();
    uint32_t _rn_0805016C = g_cpu.R[0];
    uint32_t _r_0805016C;
    _r_0805016C = _rn_0805016C | _op2_0805016C;
    arm_set_nzc_logic(_r_0805016C, _co_0805016C);
    g_cpu.R[0] = _r_0805016C;
    g_cpu.R[15] = 0x0805016Eu;
    runtime_tick(_cyc_0805016C);
    }
L_0805016E:
    /* 0805016E  0805016e T ldr r1,[r15,#0x74] */
    {
    g_cpu.R[15] = 0x0805016Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805016E = 1u;
    _cyc_0805016E = 2u;
    uint32_t _base_0805016E = 0x08050172u & ~3u;
    uint32_t _off_0805016E;
    _off_0805016E = 0x00000074u;
    uint32_t _ea_0805016E = _base_0805016E + _off_0805016E;
    uint32_t _post_0805016E = _base_0805016E + _off_0805016E;
    _cyc_0805016E += runtime_mem_cycles(_ea_0805016E, 4u, 0u);
    uint32_t _v_0805016E;
    { uint32_t _w = bus_read_u32(_ea_0805016E & ~3u); uint32_t _rot = (_ea_0805016E & 3u) * 8u; _v_0805016E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0805016E;
    g_cpu.R[15] = 0x08050170u;
    runtime_tick(_cyc_0805016E);
    }
L_08050170:
    /* 08050170  08050170 T strh r0,[r1,#0x2] */
    {
    g_cpu.R[15] = 0x08050170u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050170 = 1u;
    _cyc_08050170 = 1u;
    uint32_t _base_08050170 = g_cpu.R[1];
    uint32_t _off_08050170;
    _off_08050170 = 0x00000002u;
    uint32_t _ea_08050170 = _base_08050170 + _off_08050170;
    uint32_t _post_08050170 = _base_08050170 + _off_08050170;
    _cyc_08050170 += runtime_mem_cycles(_ea_08050170, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050170u, _ea_08050170 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08050170 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08050172u;
    runtime_tick(_cyc_08050170);
    }
L_08050172:
    /* 08050172  08050172 T movs r5,#0x80 */
    {
    g_cpu.R[15] = 0x08050172u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050172 = 1u;
    _cyc_08050172 = 1u;
    uint32_t _r_08050172;
    _r_08050172 = 0x00000080u;
    arm_set_nzc_logic(_r_08050172, cpsr_c());
    g_cpu.R[5] = _r_08050172;
    g_cpu.R[15] = 0x08050174u;
    runtime_tick(_cyc_08050172);
    }
L_08050174:
    /* 08050174  08050174 T strb r5,[r1] */
    {
    g_cpu.R[15] = 0x08050174u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050174 = 1u;
    _cyc_08050174 = 1u;
    uint32_t _base_08050174 = g_cpu.R[1];
    uint32_t _off_08050174;
    _off_08050174 = 0x00000000u;
    uint32_t _ea_08050174 = _base_08050174 + _off_08050174;
    uint32_t _post_08050174 = _base_08050174 + _off_08050174;
    _cyc_08050174 += runtime_mem_cycles(_ea_08050174, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050174u, _ea_08050174, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_08050174, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[15] = 0x08050176u;
    runtime_tick(_cyc_08050174);
    }
L_08050176:
    /* 08050176  08050176 T movs r0,#0x3 */
    {
    g_cpu.R[15] = 0x08050176u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050176 = 1u;
    _cyc_08050176 = 1u;
    uint32_t _r_08050176;
    _r_08050176 = 0x00000003u;
    arm_set_nzc_logic(_r_08050176, cpsr_c());
    g_cpu.R[0] = _r_08050176;
    g_cpu.R[15] = 0x08050178u;
    runtime_tick(_cyc_08050176);
    }
L_08050178:
    /* 08050178  08050178 T strb r0,[r1,#0xa] */
    {
    g_cpu.R[15] = 0x08050178u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050178 = 1u;
    _cyc_08050178 = 1u;
    uint32_t _base_08050178 = g_cpu.R[1];
    uint32_t _off_08050178;
    _off_08050178 = 0x0000000Au;
    uint32_t _ea_08050178 = _base_08050178 + _off_08050178;
    uint32_t _post_08050178 = _base_08050178 + _off_08050178;
    _cyc_08050178 += runtime_mem_cycles(_ea_08050178, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050178u, _ea_08050178, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050178, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0805017Au;
    runtime_tick(_cyc_08050178);
    }
L_0805017A:
    /* 0805017A  0805017a T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x0805017Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805017A = 1u;
    _cyc_0805017A = 1u;
    uint32_t _r_0805017A;
    _r_0805017A = 0x00000000u;
    arm_set_nzc_logic(_r_0805017A, cpsr_c());
    g_cpu.R[0] = _r_0805017A;
    g_cpu.R[15] = 0x0805017Cu;
    runtime_tick(_cyc_0805017A);
    }
L_0805017C:
    /* 0805017C  0805017c T movs r2,#0x3 */
    {
    g_cpu.R[15] = 0x0805017Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805017C = 1u;
    _cyc_0805017C = 1u;
    uint32_t _r_0805017C;
    _r_0805017C = 0x00000003u;
    arm_set_nzc_logic(_r_0805017C, cpsr_c());
    g_cpu.R[2] = _r_0805017C;
    g_cpu.R[15] = 0x0805017Eu;
    runtime_tick(_cyc_0805017C);
    }
L_0805017E:
    /* 0805017E  0805017e T movs r3,#0x1 */
    {
    g_cpu.R[15] = 0x0805017Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805017E = 1u;
    _cyc_0805017E = 1u;
    uint32_t _r_0805017E;
    _r_0805017E = 0x00000001u;
    arm_set_nzc_logic(_r_0805017E, cpsr_c());
    g_cpu.R[3] = _r_0805017E;
    g_cpu.R[15] = 0x08050180u;
    runtime_tick(_cyc_0805017E);
    }
L_08050180:
    /* 08050180  08050180 T bl.hi 0x0803d184 */
    {
    g_cpu.R[15] = 0x08050180u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050180 = 1u;
    _cyc_08050180 = 1u;
    g_cpu.R[14] = 0x0803D184u;
    g_cpu.R[15] = 0x08050182u;
    runtime_tick(_cyc_08050180);
    }
L_08050182:
    /* 08050182  08050182 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08050182u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050182 = 1u;
    _cyc_08050182 = 3u;
    uint32_t _blt_08050182 = (g_cpu.R[14] + 0x000006C8u) & ~1u;
    g_cpu.R[14] = 0x08050185u;
    g_cpu.R[15] = _blt_08050182;
    runtime_call_push_return(0x08050184u);
    runtime_tick(_cyc_08050182);
    _cyc_08050182 = 0u;
    runtime_dispatch(_blt_08050182);
    if (g_cpu.R[15] != 0x08050184u) { runtime_call_cancel_return(0x08050184u); return; }
    g_cpu.R[15] = 0x08050184u;
    runtime_tick(_cyc_08050182);
    }
    /* fall-through to 0x08050184 */
    g_cpu.R[15] = 0x08050184u;
    runtime_dispatch(0x08050184u);
    return;
}

/* 0x08050184  mode=thumb  end=0x080501A2  branches=6 */
void gf_tfunc_08050184(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050186u: goto L_08050186;
        case 0x08050188u: goto L_08050188;
        case 0x0805018Au: goto L_0805018A;
        case 0x0805018Cu: goto L_0805018C;
        case 0x0805018Eu: goto L_0805018E;
        case 0x08050190u: goto L_08050190;
        case 0x08050192u: goto L_08050192;
        case 0x08050194u: goto L_08050194;
        case 0x08050196u: goto L_08050196;
        case 0x08050198u: goto L_08050198;
        case 0x0805019Au: goto L_0805019A;
        case 0x0805019Cu: goto L_0805019C;
        case 0x0805019Eu: goto L_0805019E;
        case 0x080501A0u: goto L_080501A0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050184u);
    /* 08050184  08050184 T ldr r2,[r15,#0x5c] */
    {
    g_cpu.R[15] = 0x08050184u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050184 = 1u;
    _cyc_08050184 = 2u;
    uint32_t _base_08050184 = 0x08050188u & ~3u;
    uint32_t _off_08050184;
    _off_08050184 = 0x0000005Cu;
    uint32_t _ea_08050184 = _base_08050184 + _off_08050184;
    uint32_t _post_08050184 = _base_08050184 + _off_08050184;
    _cyc_08050184 += runtime_mem_cycles(_ea_08050184, 4u, 0u);
    uint32_t _v_08050184;
    { uint32_t _w = bus_read_u32(_ea_08050184 & ~3u); uint32_t _rot = (_ea_08050184 & 3u) * 8u; _v_08050184 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08050184;
    g_cpu.R[15] = 0x08050186u;
    runtime_tick(_cyc_08050184);
    }
L_08050186:
    /* 08050186  08050186 T ldrh r0,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x08050186u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050186 = 1u;
    _cyc_08050186 = 2u;
    uint32_t _base_08050186 = g_cpu.R[2];
    uint32_t _off_08050186;
    _off_08050186 = 0x00000002u;
    uint32_t _ea_08050186 = _base_08050186 + _off_08050186;
    uint32_t _post_08050186 = _base_08050186 + _off_08050186;
    _cyc_08050186 += runtime_mem_cycles(_ea_08050186, 2u, 0u);
    uint32_t _v_08050186;
    { uint32_t _h = bus_read_u16(_ea_08050186 & ~1u); if (_ea_08050186 & 1u) _v_08050186 = ((_h >> 8) | (_h << 24)); else _v_08050186 = _h; }
    g_cpu.R[0] = _v_08050186;
    g_cpu.R[15] = 0x08050188u;
    runtime_tick(_cyc_08050186);
    }
L_08050188:
    /* 08050188  08050188 T ands r4,r4,r0 */
    {
    g_cpu.R[15] = 0x08050188u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050188 = 1u;
    _cyc_08050188 = 1u;
    uint32_t _rm_08050188 = g_cpu.R[0];
    uint32_t _op2_08050188;
    uint32_t _co_08050188;
    _op2_08050188 = _rm_08050188;
    _co_08050188 = cpsr_c();
    uint32_t _rn_08050188 = g_cpu.R[4];
    uint32_t _r_08050188;
    _r_08050188 = _rn_08050188 & _op2_08050188;
    arm_set_nzc_logic(_r_08050188, _co_08050188);
    g_cpu.R[4] = _r_08050188;
    g_cpu.R[15] = 0x0805018Au;
    runtime_tick(_cyc_08050188);
    }
L_0805018A:
    /* 0805018A  0805018a T movs r0,#0x7a */
    {
    g_cpu.R[15] = 0x0805018Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805018A = 1u;
    _cyc_0805018A = 1u;
    uint32_t _r_0805018A;
    _r_0805018A = 0x0000007Au;
    arm_set_nzc_logic(_r_0805018A, cpsr_c());
    g_cpu.R[0] = _r_0805018A;
    g_cpu.R[15] = 0x0805018Cu;
    runtime_tick(_cyc_0805018A);
    }
L_0805018C:
    /* 0805018C  0805018c T orrs r4,r4,r0 */
    {
    g_cpu.R[15] = 0x0805018Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805018C = 1u;
    _cyc_0805018C = 1u;
    uint32_t _rm_0805018C = g_cpu.R[0];
    uint32_t _op2_0805018C;
    uint32_t _co_0805018C;
    _op2_0805018C = _rm_0805018C;
    _co_0805018C = cpsr_c();
    uint32_t _rn_0805018C = g_cpu.R[4];
    uint32_t _r_0805018C;
    _r_0805018C = _rn_0805018C | _op2_0805018C;
    arm_set_nzc_logic(_r_0805018C, _co_0805018C);
    g_cpu.R[4] = _r_0805018C;
    g_cpu.R[15] = 0x0805018Eu;
    runtime_tick(_cyc_0805018C);
    }
L_0805018E:
    /* 0805018E  0805018e T strh r4,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x0805018Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805018E = 1u;
    _cyc_0805018E = 1u;
    uint32_t _base_0805018E = g_cpu.R[2];
    uint32_t _off_0805018E;
    _off_0805018E = 0x00000002u;
    uint32_t _ea_0805018E = _base_0805018E + _off_0805018E;
    uint32_t _post_0805018E = _base_0805018E + _off_0805018E;
    _cyc_0805018E += runtime_mem_cycles(_ea_0805018E, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805018Eu, _ea_0805018E & ~1u, (uint32_t)(g_cpu.R[4] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805018E & ~1u, (uint16_t)(g_cpu.R[4] & 0xFFFFu));
    g_cpu.R[15] = 0x08050190u;
    runtime_tick(_cyc_0805018E);
    }
L_08050190:
    /* 08050190  08050190 T strb r5,[r2] */
    {
    g_cpu.R[15] = 0x08050190u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050190 = 1u;
    _cyc_08050190 = 1u;
    uint32_t _base_08050190 = g_cpu.R[2];
    uint32_t _off_08050190;
    _off_08050190 = 0x00000000u;
    uint32_t _ea_08050190 = _base_08050190 + _off_08050190;
    uint32_t _post_08050190 = _base_08050190 + _off_08050190;
    _cyc_08050190 += runtime_mem_cycles(_ea_08050190, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050190u, _ea_08050190, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_08050190, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[15] = 0x08050192u;
    runtime_tick(_cyc_08050190);
    }
L_08050192:
    /* 08050192  08050192 T movs r0,#0x6 */
    {
    g_cpu.R[15] = 0x08050192u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050192 = 1u;
    _cyc_08050192 = 1u;
    uint32_t _r_08050192;
    _r_08050192 = 0x00000006u;
    arm_set_nzc_logic(_r_08050192, cpsr_c());
    g_cpu.R[0] = _r_08050192;
    g_cpu.R[15] = 0x08050194u;
    runtime_tick(_cyc_08050192);
    }
L_08050194:
    /* 08050194  08050194 T strb r0,[r2,#0xa] */
    {
    g_cpu.R[15] = 0x08050194u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050194 = 1u;
    _cyc_08050194 = 1u;
    uint32_t _base_08050194 = g_cpu.R[2];
    uint32_t _off_08050194;
    _off_08050194 = 0x0000000Au;
    uint32_t _ea_08050194 = _base_08050194 + _off_08050194;
    uint32_t _post_08050194 = _base_08050194 + _off_08050194;
    _cyc_08050194 += runtime_mem_cycles(_ea_08050194, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050194u, _ea_08050194, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050194, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050196u;
    runtime_tick(_cyc_08050194);
    }
L_08050196:
    /* 08050196  08050196 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x08050196u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050196 = 1u;
    _cyc_08050196 = 1u;
    uint32_t _r_08050196;
    _r_08050196 = 0x00000000u;
    arm_set_nzc_logic(_r_08050196, cpsr_c());
    g_cpu.R[0] = _r_08050196;
    g_cpu.R[15] = 0x08050198u;
    runtime_tick(_cyc_08050196);
    }
L_08050198:
    /* 08050198  08050198 T adds r1,r2,#0x0 */
    {
    g_cpu.R[15] = 0x08050198u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050198 = 1u;
    _cyc_08050198 = 1u;
    uint32_t _rn_08050198 = g_cpu.R[2];
    uint32_t _r_08050198;
    _r_08050198 = _rn_08050198 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050198, 0x00000000u, _r_08050198);
    g_cpu.R[1] = _r_08050198;
    g_cpu.R[15] = 0x0805019Au;
    runtime_tick(_cyc_08050198);
    }
L_0805019A:
    /* 0805019A  0805019a T movs r2,#0x3 */
    {
    g_cpu.R[15] = 0x0805019Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805019A = 1u;
    _cyc_0805019A = 1u;
    uint32_t _r_0805019A;
    _r_0805019A = 0x00000003u;
    arm_set_nzc_logic(_r_0805019A, cpsr_c());
    g_cpu.R[2] = _r_0805019A;
    g_cpu.R[15] = 0x0805019Cu;
    runtime_tick(_cyc_0805019A);
    }
L_0805019C:
    /* 0805019C  0805019c T movs r3,#0x1 */
    {
    g_cpu.R[15] = 0x0805019Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805019C = 1u;
    _cyc_0805019C = 1u;
    uint32_t _r_0805019C;
    _r_0805019C = 0x00000001u;
    arm_set_nzc_logic(_r_0805019C, cpsr_c());
    g_cpu.R[3] = _r_0805019C;
    g_cpu.R[15] = 0x0805019Eu;
    runtime_tick(_cyc_0805019C);
    }
L_0805019E:
    /* 0805019E  0805019e T bl.hi 0x0803d1a2 */
    {
    g_cpu.R[15] = 0x0805019Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805019E = 1u;
    _cyc_0805019E = 1u;
    g_cpu.R[14] = 0x0803D1A2u;
    g_cpu.R[15] = 0x080501A0u;
    runtime_tick(_cyc_0805019E);
    }
L_080501A0:
    /* 080501A0  080501a0 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x080501A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501A0 = 1u;
    _cyc_080501A0 = 3u;
    uint32_t _blt_080501A0 = (g_cpu.R[14] + 0x000006AAu) & ~1u;
    g_cpu.R[14] = 0x080501A3u;
    g_cpu.R[15] = _blt_080501A0;
    runtime_call_push_return(0x080501A2u);
    runtime_tick(_cyc_080501A0);
    _cyc_080501A0 = 0u;
    runtime_dispatch(_blt_080501A0);
    if (g_cpu.R[15] != 0x080501A2u) { runtime_call_cancel_return(0x080501A2u); return; }
    g_cpu.R[15] = 0x080501A2u;
    runtime_tick(_cyc_080501A0);
    }
    /* fall-through to 0x080501A2 */
    g_cpu.R[15] = 0x080501A2u;
    runtime_dispatch(0x080501A2u);
    return;
}

/* 0x08050CCC  mode=thumb  end=0x08050CDA  branches=1 */
void gf_autojt_08050C6C_02(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050CCEu: goto L_08050CCE;
        case 0x08050CD0u: goto L_08050CD0;
        case 0x08050CD2u: goto L_08050CD2;
        case 0x08050CD4u: goto L_08050CD4;
        case 0x08050CD6u: goto L_08050CD6;
        case 0x08050CD8u: goto L_08050CD8;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050CCCu);
    /* 08050CCC  08050ccc T ldr r0,[r15,#0xc] */
    {
    g_cpu.R[15] = 0x08050CCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CCC = 1u;
    _cyc_08050CCC = 2u;
    uint32_t _base_08050CCC = 0x08050CD0u & ~3u;
    uint32_t _off_08050CCC;
    _off_08050CCC = 0x0000000Cu;
    uint32_t _ea_08050CCC = _base_08050CCC + _off_08050CCC;
    uint32_t _post_08050CCC = _base_08050CCC + _off_08050CCC;
    _cyc_08050CCC += runtime_mem_cycles(_ea_08050CCC, 4u, 0u);
    uint32_t _v_08050CCC;
    { uint32_t _w = bus_read_u32(_ea_08050CCC & ~3u); uint32_t _rot = (_ea_08050CCC & 3u) * 8u; _v_08050CCC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050CCC;
    g_cpu.R[15] = 0x08050CCEu;
    runtime_tick(_cyc_08050CCC);
    }
L_08050CCE:
    /* 08050CCE  08050cce T movs r1,#0x8d */
    {
    g_cpu.R[15] = 0x08050CCEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CCE = 1u;
    _cyc_08050CCE = 1u;
    uint32_t _r_08050CCE;
    _r_08050CCE = 0x0000008Du;
    arm_set_nzc_logic(_r_08050CCE, cpsr_c());
    g_cpu.R[1] = _r_08050CCE;
    g_cpu.R[15] = 0x08050CD0u;
    runtime_tick(_cyc_08050CCE);
    }
L_08050CD0:
    /* 08050CD0  08050cd0 T movs r1,r1,lsl #1 */
    {
    g_cpu.R[15] = 0x08050CD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CD0 = 1u;
    _cyc_08050CD0 = 1u;
    uint32_t _rm_08050CD0 = g_cpu.R[1];
    uint32_t _op2_08050CD0;
    uint32_t _co_08050CD0;
    _op2_08050CD0 = _rm_08050CD0 << 1;
    _co_08050CD0 = (_rm_08050CD0 >> 31) & 1u;
    uint32_t _r_08050CD0;
    _r_08050CD0 = _op2_08050CD0;
    arm_set_nzc_logic(_r_08050CD0, _co_08050CD0);
    g_cpu.R[1] = _r_08050CD0;
    g_cpu.R[15] = 0x08050CD2u;
    runtime_tick(_cyc_08050CD0);
    }
L_08050CD2:
    /* 08050CD2  08050cd2 T adds r3,r0,r1 */
    {
    g_cpu.R[15] = 0x08050CD2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CD2 = 1u;
    _cyc_08050CD2 = 1u;
    uint32_t _rm_08050CD2 = g_cpu.R[1];
    uint32_t _op2_08050CD2;
    uint32_t _co_08050CD2;
    _op2_08050CD2 = _rm_08050CD2;
    _co_08050CD2 = cpsr_c();
    uint32_t _rn_08050CD2 = g_cpu.R[0];
    uint32_t _r_08050CD2;
    _r_08050CD2 = _rn_08050CD2 + _op2_08050CD2;
    arm_set_nzcv_add(_rn_08050CD2, _op2_08050CD2, _r_08050CD2);
    g_cpu.R[3] = _r_08050CD2;
    g_cpu.R[15] = 0x08050CD4u;
    runtime_tick(_cyc_08050CD2);
    }
L_08050CD4:
    /* 08050CD4  08050cd4 T movs r2,#0x0 */
    {
    g_cpu.R[15] = 0x08050CD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CD4 = 1u;
    _cyc_08050CD4 = 1u;
    uint32_t _r_08050CD4;
    _r_08050CD4 = 0x00000000u;
    arm_set_nzc_logic(_r_08050CD4, cpsr_c());
    g_cpu.R[2] = _r_08050CD4;
    g_cpu.R[15] = 0x08050CD6u;
    runtime_tick(_cyc_08050CD4);
    }
L_08050CD6:
    /* 08050CD6  08050cd6 T movs r1,#0xf */
    {
    g_cpu.R[15] = 0x08050CD6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CD6 = 1u;
    _cyc_08050CD6 = 1u;
    uint32_t _r_08050CD6;
    _r_08050CD6 = 0x0000000Fu;
    arm_set_nzc_logic(_r_08050CD6, cpsr_c());
    g_cpu.R[1] = _r_08050CD6;
    g_cpu.R[15] = 0x08050CD8u;
    runtime_tick(_cyc_08050CD6);
    }
L_08050CD8:
    /* 08050CD8  08050cd8 T b 0x08050d58 */
    {
    g_cpu.R[15] = 0x08050CD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CD8 = 1u;
    _cyc_08050CD8 = 3u;
    g_cpu.R[15] = 0x08050D58u;
    runtime_tick(_cyc_08050CD8);
    gf_race_08050d58();
    return;
    g_cpu.R[15] = 0x08050CDAu;
    runtime_tick(_cyc_08050CD8);
    }
    /* fall-through to 0x08050CDA */
    g_cpu.R[15] = 0x08050CDAu;
    runtime_dispatch(0x08050CDAu);
    return;
}

/* 0x08050D82  mode=thumb  end=0x08050D86  branches=40  indirect */
void gf_tfunc_08050D82(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D84u: goto L_08050D84;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D82u);
    /* 08050D82  08050d82 T bl.hi 0x0804ed86 */
    {
    g_cpu.R[15] = 0x08050D82u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D82 = 1u;
    _cyc_08050D82 = 1u;
    g_cpu.R[14] = 0x0804ED86u;
    g_cpu.R[15] = 0x08050D84u;
    runtime_tick(_cyc_08050D82);
    }
L_08050D84:
    /* 08050D84  08050d84 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08050D84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D84 = 1u;
    _cyc_08050D84 = 3u;
    uint32_t _blt_08050D84 = (g_cpu.R[14] + 0x000002E2u) & ~1u;
    g_cpu.R[14] = 0x08050D87u;
    g_cpu.R[15] = _blt_08050D84;
    runtime_call_push_return(0x08050D86u);
    runtime_tick(_cyc_08050D84);
    _cyc_08050D84 = 0u;
    runtime_dispatch(_blt_08050D84);
    if (g_cpu.R[15] != 0x08050D86u) { runtime_call_cancel_return(0x08050D86u); return; }
    g_cpu.R[15] = 0x08050D86u;
    runtime_tick(_cyc_08050D84);
    }
    /* fall-through to 0x08050D86 */
    g_cpu.R[15] = 0x08050D86u;
    runtime_dispatch(0x08050D86u);
    return;
}

/* 0x08050DFC  mode=thumb  end=0x08050E06  branches=26  indirect */
void gf_tfunc_08050DFC(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050DFEu: goto L_08050DFE;
        case 0x08050E00u: goto L_08050E00;
        case 0x08050E02u: goto L_08050E02;
        case 0x08050E04u: goto L_08050E04;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050DFCu);
    /* 08050DFC  08050dfc T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050DFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DFC = 1u;
    _cyc_08050DFC = 1u;
    uint32_t _rn_08050DFC = g_cpu.R[3];
    uint32_t _r_08050DFC;
    _r_08050DFC = _rn_08050DFC + 0x00000010u;
    arm_set_nzcv_add(_rn_08050DFC, 0x00000010u, _r_08050DFC);
    g_cpu.R[3] = _r_08050DFC;
    g_cpu.R[15] = 0x08050DFEu;
    runtime_tick(_cyc_08050DFC);
    }
L_08050DFE:
    /* 08050DFE  08050dfe T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050DFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DFE = 1u;
    _cyc_08050DFE = 1u;
    uint32_t _rn_08050DFE = g_cpu.R[4];
    uint32_t _r_08050DFE;
    _r_08050DFE = _rn_08050DFE + 0x00000000u;
    arm_set_nzcv_add(_rn_08050DFE, 0x00000000u, _r_08050DFE);
    g_cpu.R[5] = _r_08050DFE;
    g_cpu.R[15] = 0x08050E00u;
    runtime_tick(_cyc_08050DFE);
    }
L_08050E00:
    /* 08050E00  08050e00 T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050E00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E00 = 1u;
    _cyc_08050E00 = 2u;
    uint32_t _base_08050E00 = g_cpu.R[3];
    uint32_t _off_08050E00;
    _off_08050E00 = 0x00000008u;
    uint32_t _ea_08050E00 = _base_08050E00 + _off_08050E00;
    uint32_t _post_08050E00 = _base_08050E00 + _off_08050E00;
    _cyc_08050E00 += runtime_mem_cycles(_ea_08050E00, 4u, 0u);
    uint32_t _v_08050E00;
    { uint32_t _w = bus_read_u32(_ea_08050E00 & ~3u); uint32_t _rot = (_ea_08050E00 & 3u) * 8u; _v_08050E00 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E00;
    g_cpu.R[15] = 0x08050E02u;
    runtime_tick(_cyc_08050E00);
    }
L_08050E02:
    /* 08050E02  08050e02 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050E02u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E02 = 1u;
    _cyc_08050E02 = 1u;
    uint32_t _rm_08050E02 = g_cpu.R[4];
    uint32_t _op2_08050E02;
    uint32_t _co_08050E02;
    _op2_08050E02 = _rm_08050E02;
    _co_08050E02 = cpsr_c();
    uint32_t _rn_08050E02 = g_cpu.R[1];
    uint32_t _r_08050E02;
    _r_08050E02 = _rn_08050E02 - _op2_08050E02;
    arm_set_nzcv_sub(_rn_08050E02, _op2_08050E02, _r_08050E02);
    g_cpu.R[15] = 0x08050E04u;
    runtime_tick(_cyc_08050E02);
    }
L_08050E04:
    /* 08050E04  08050e04 T beq 0x08050e16 */
    {
    g_cpu.R[15] = 0x08050E04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E04 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050E04 = 3u;
        g_cpu.R[15] = 0x08050E16u;
        runtime_tick(_cyc_08050E04);
        gf_tfunc_08050E16();
        return;
    }
    g_cpu.R[15] = 0x08050E06u;
    runtime_tick(_cyc_08050E04);
    }
    /* fall-through to 0x08050E06 */
    g_cpu.R[15] = 0x08050E06u;
    runtime_dispatch(0x08050E06u);
    return;
}

/* 0x08050E54  mode=thumb  end=0x08050E64  branches=19  indirect */
void gf_tfunc_08050E54(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E56u: goto L_08050E56;
        case 0x08050E58u: goto L_08050E58;
        case 0x08050E5Au: goto L_08050E5A;
        case 0x08050E5Cu: goto L_08050E5C;
        case 0x08050E5Eu: goto L_08050E5E;
        case 0x08050E60u: goto L_08050E60;
        case 0x08050E62u: goto L_08050E62;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E54u);
L_08050E54:
    /* 08050E54  08050e54 T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050E54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E54 = 1u;
    _cyc_08050E54 = 2u;
    uint32_t _base_08050E54 = g_cpu.R[1];
    uint32_t _off_08050E54;
    _off_08050E54 = 0x00000000u;
    uint32_t _ea_08050E54 = _base_08050E54 + _off_08050E54;
    uint32_t _post_08050E54 = _base_08050E54 + _off_08050E54;
    _cyc_08050E54 += runtime_mem_cycles(_ea_08050E54, 4u, 0u);
    uint32_t _v_08050E54;
    { uint32_t _w = bus_read_u32(_ea_08050E54 & ~3u); uint32_t _rot = (_ea_08050E54 & 3u) * 8u; _v_08050E54 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E54;
    g_cpu.R[15] = 0x08050E56u;
    runtime_tick(_cyc_08050E54);
    }
L_08050E56:
    /* 08050E56  08050e56 T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050E56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E56 = 1u;
    _cyc_08050E56 = 1u;
    uint32_t _base_08050E56 = g_cpu.R[2];
    uint32_t _off_08050E56;
    _off_08050E56 = 0x00000000u;
    uint32_t _ea_08050E56 = _base_08050E56 + _off_08050E56;
    uint32_t _post_08050E56 = _base_08050E56 + _off_08050E56;
    _cyc_08050E56 += runtime_mem_cycles(_ea_08050E56, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E56u, _ea_08050E56 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E56 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E58u;
    runtime_tick(_cyc_08050E56);
    }
L_08050E58:
    /* 08050E58  08050e58 T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050E58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E58 = 1u;
    _cyc_08050E58 = 2u;
    uint32_t _base_08050E58 = g_cpu.R[1];
    uint32_t _off_08050E58;
    _off_08050E58 = 0x00000004u;
    uint32_t _ea_08050E58 = _base_08050E58 + _off_08050E58;
    uint32_t _post_08050E58 = _base_08050E58 + _off_08050E58;
    _cyc_08050E58 += runtime_mem_cycles(_ea_08050E58, 4u, 0u);
    uint32_t _v_08050E58;
    { uint32_t _w = bus_read_u32(_ea_08050E58 & ~3u); uint32_t _rot = (_ea_08050E58 & 3u) * 8u; _v_08050E58 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E58;
    g_cpu.R[15] = 0x08050E5Au;
    runtime_tick(_cyc_08050E58);
    }
L_08050E5A:
    /* 08050E5A  08050e5a T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050E5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E5A = 1u;
    _cyc_08050E5A = 1u;
    uint32_t _base_08050E5A = g_cpu.R[2];
    uint32_t _off_08050E5A;
    _off_08050E5A = 0x00000004u;
    uint32_t _ea_08050E5A = _base_08050E5A + _off_08050E5A;
    uint32_t _post_08050E5A = _base_08050E5A + _off_08050E5A;
    _cyc_08050E5A += runtime_mem_cycles(_ea_08050E5A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E5Au, _ea_08050E5A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E5A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E5Cu;
    runtime_tick(_cyc_08050E5A);
    }
L_08050E5C:
    /* 08050E5C  08050e5c T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050E5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E5C = 1u;
    _cyc_08050E5C = 1u;
    uint32_t _rn_08050E5C = g_cpu.R[2];
    uint32_t _r_08050E5C;
    _r_08050E5C = _rn_08050E5C + 0x00000008u;
    arm_set_nzcv_add(_rn_08050E5C, 0x00000008u, _r_08050E5C);
    g_cpu.R[2] = _r_08050E5C;
    g_cpu.R[15] = 0x08050E5Eu;
    runtime_tick(_cyc_08050E5C);
    }
L_08050E5E:
    /* 08050E5E  08050e5e T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050E5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E5E = 1u;
    _cyc_08050E5E = 2u;
    uint32_t _base_08050E5E = g_cpu.R[1];
    uint32_t _off_08050E5E;
    _off_08050E5E = 0x00000008u;
    uint32_t _ea_08050E5E = _base_08050E5E + _off_08050E5E;
    uint32_t _post_08050E5E = _base_08050E5E + _off_08050E5E;
    _cyc_08050E5E += runtime_mem_cycles(_ea_08050E5E, 4u, 0u);
    uint32_t _v_08050E5E;
    { uint32_t _w = bus_read_u32(_ea_08050E5E & ~3u); uint32_t _rot = (_ea_08050E5E & 3u) * 8u; _v_08050E5E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E5E;
    g_cpu.R[15] = 0x08050E60u;
    runtime_tick(_cyc_08050E5E);
    }
L_08050E60:
    /* 08050E60  08050e60 T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050E60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E60 = 1u;
    _cyc_08050E60 = 1u;
    uint32_t _rm_08050E60 = g_cpu.R[5];
    uint32_t _op2_08050E60;
    uint32_t _co_08050E60;
    _op2_08050E60 = _rm_08050E60;
    _co_08050E60 = cpsr_c();
    uint32_t _rn_08050E60 = g_cpu.R[1];
    uint32_t _r_08050E60;
    _r_08050E60 = _rn_08050E60 - _op2_08050E60;
    arm_set_nzcv_sub(_rn_08050E60, _op2_08050E60, _r_08050E60);
    g_cpu.R[15] = 0x08050E62u;
    runtime_tick(_cyc_08050E60);
    }
L_08050E62:
    /* 08050E62  08050e62 T bne 0x08050e54 */
    {
    g_cpu.R[15] = 0x08050E62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E62 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050E62 = 3u;
        g_cpu.R[15] = 0x08050E54u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050E62u, 0x08050E54u, 0u, 0u);
        runtime_tick(_cyc_08050E62);
        goto L_08050E54;
    }
    g_cpu.R[15] = 0x08050E64u;
    runtime_tick(_cyc_08050E62);
    }
    /* fall-through to 0x08050E64 */
    g_cpu.R[15] = 0x08050E64u;
    runtime_dispatch(0x08050E64u);
    return;
}

/* 0x08050E98  mode=thumb  end=0x08050EA2  branches=14  indirect */
void gf_tfunc_08050E98(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E9Au: goto L_08050E9A;
        case 0x08050E9Cu: goto L_08050E9C;
        case 0x08050E9Eu: goto L_08050E9E;
        case 0x08050EA0u: goto L_08050EA0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E98u);
    /* 08050E98  08050e98 T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050E98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E98 = 1u;
    _cyc_08050E98 = 1u;
    uint32_t _rn_08050E98 = g_cpu.R[3];
    uint32_t _r_08050E98;
    _r_08050E98 = _rn_08050E98 + 0x00000010u;
    arm_set_nzcv_add(_rn_08050E98, 0x00000010u, _r_08050E98);
    g_cpu.R[3] = _r_08050E98;
    g_cpu.R[15] = 0x08050E9Au;
    runtime_tick(_cyc_08050E98);
    }
L_08050E9A:
    /* 08050E9A  08050e9a T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050E9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E9A = 1u;
    _cyc_08050E9A = 1u;
    uint32_t _rn_08050E9A = g_cpu.R[4];
    uint32_t _r_08050E9A;
    _r_08050E9A = _rn_08050E9A + 0x00000000u;
    arm_set_nzcv_add(_rn_08050E9A, 0x00000000u, _r_08050E9A);
    g_cpu.R[5] = _r_08050E9A;
    g_cpu.R[15] = 0x08050E9Cu;
    runtime_tick(_cyc_08050E9A);
    }
L_08050E9C:
    /* 08050E9C  08050e9c T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050E9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E9C = 1u;
    _cyc_08050E9C = 2u;
    uint32_t _base_08050E9C = g_cpu.R[3];
    uint32_t _off_08050E9C;
    _off_08050E9C = 0x00000008u;
    uint32_t _ea_08050E9C = _base_08050E9C + _off_08050E9C;
    uint32_t _post_08050E9C = _base_08050E9C + _off_08050E9C;
    _cyc_08050E9C += runtime_mem_cycles(_ea_08050E9C, 4u, 0u);
    uint32_t _v_08050E9C;
    { uint32_t _w = bus_read_u32(_ea_08050E9C & ~3u); uint32_t _rot = (_ea_08050E9C & 3u) * 8u; _v_08050E9C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E9C;
    g_cpu.R[15] = 0x08050E9Eu;
    runtime_tick(_cyc_08050E9C);
    }
L_08050E9E:
    /* 08050E9E  08050e9e T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050E9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E9E = 1u;
    _cyc_08050E9E = 1u;
    uint32_t _rm_08050E9E = g_cpu.R[4];
    uint32_t _op2_08050E9E;
    uint32_t _co_08050E9E;
    _op2_08050E9E = _rm_08050E9E;
    _co_08050E9E = cpsr_c();
    uint32_t _rn_08050E9E = g_cpu.R[1];
    uint32_t _r_08050E9E;
    _r_08050E9E = _rn_08050E9E - _op2_08050E9E;
    arm_set_nzcv_sub(_rn_08050E9E, _op2_08050E9E, _r_08050E9E);
    g_cpu.R[15] = 0x08050EA0u;
    runtime_tick(_cyc_08050E9E);
    }
L_08050EA0:
    /* 08050EA0  08050ea0 T beq 0x08050eb2 */
    {
    g_cpu.R[15] = 0x08050EA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EA0 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050EA0 = 3u;
        g_cpu.R[15] = 0x08050EB2u;
        runtime_tick(_cyc_08050EA0);
        gf_tfunc_08050EB2();
        return;
    }
    g_cpu.R[15] = 0x08050EA2u;
    runtime_tick(_cyc_08050EA0);
    }
    /* fall-through to 0x08050EA2 */
    g_cpu.R[15] = 0x08050EA2u;
    runtime_dispatch(0x08050EA2u);
    return;
}

/* 0x08050F00  mode=thumb  end=0x08050F0A  branches=6  indirect */
void gf_tfunc_08050F00(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050F02u: goto L_08050F02;
        case 0x08050F04u: goto L_08050F04;
        case 0x08050F06u: goto L_08050F06;
        case 0x08050F08u: goto L_08050F08;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050F00u);
    /* 08050F00  08050f00 T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050F00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F00 = 1u;
    _cyc_08050F00 = 1u;
    uint32_t _rn_08050F00 = g_cpu.R[3];
    uint32_t _r_08050F00;
    _r_08050F00 = _rn_08050F00 + 0x00000010u;
    arm_set_nzcv_add(_rn_08050F00, 0x00000010u, _r_08050F00);
    g_cpu.R[3] = _r_08050F00;
    g_cpu.R[15] = 0x08050F02u;
    runtime_tick(_cyc_08050F00);
    }
L_08050F02:
    /* 08050F02  08050f02 T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050F02u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F02 = 1u;
    _cyc_08050F02 = 1u;
    uint32_t _rn_08050F02 = g_cpu.R[4];
    uint32_t _r_08050F02;
    _r_08050F02 = _rn_08050F02 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050F02, 0x00000000u, _r_08050F02);
    g_cpu.R[5] = _r_08050F02;
    g_cpu.R[15] = 0x08050F04u;
    runtime_tick(_cyc_08050F02);
    }
L_08050F04:
    /* 08050F04  08050f04 T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050F04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F04 = 1u;
    _cyc_08050F04 = 2u;
    uint32_t _base_08050F04 = g_cpu.R[3];
    uint32_t _off_08050F04;
    _off_08050F04 = 0x00000008u;
    uint32_t _ea_08050F04 = _base_08050F04 + _off_08050F04;
    uint32_t _post_08050F04 = _base_08050F04 + _off_08050F04;
    _cyc_08050F04 += runtime_mem_cycles(_ea_08050F04, 4u, 0u);
    uint32_t _v_08050F04;
    { uint32_t _w = bus_read_u32(_ea_08050F04 & ~3u); uint32_t _rot = (_ea_08050F04 & 3u) * 8u; _v_08050F04 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050F04;
    g_cpu.R[15] = 0x08050F06u;
    runtime_tick(_cyc_08050F04);
    }
L_08050F06:
    /* 08050F06  08050f06 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050F06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F06 = 1u;
    _cyc_08050F06 = 1u;
    uint32_t _rm_08050F06 = g_cpu.R[4];
    uint32_t _op2_08050F06;
    uint32_t _co_08050F06;
    _op2_08050F06 = _rm_08050F06;
    _co_08050F06 = cpsr_c();
    uint32_t _rn_08050F06 = g_cpu.R[1];
    uint32_t _r_08050F06;
    _r_08050F06 = _rn_08050F06 - _op2_08050F06;
    arm_set_nzcv_sub(_rn_08050F06, _op2_08050F06, _r_08050F06);
    g_cpu.R[15] = 0x08050F08u;
    runtime_tick(_cyc_08050F06);
    }
L_08050F08:
    /* 08050F08  08050f08 T beq 0x08050f1a */
    {
    g_cpu.R[15] = 0x08050F08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F08 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050F08 = 3u;
        g_cpu.R[15] = 0x08050F1Au;
        runtime_tick(_cyc_08050F08);
        gf_tfunc_08050F1A();
        return;
    }
    g_cpu.R[15] = 0x08050F0Au;
    runtime_tick(_cyc_08050F08);
    }
    /* fall-through to 0x08050F0A */
    g_cpu.R[15] = 0x08050F0Au;
    runtime_dispatch(0x08050F0Au);
    return;
}

/* 0x080501A2  mode=thumb  end=0x080501D0  branches=4 */
void gf_tfunc_080501A2(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080501A4u: goto L_080501A4;
        case 0x080501A6u: goto L_080501A6;
        case 0x080501A8u: goto L_080501A8;
        case 0x080501AAu: goto L_080501AA;
        case 0x080501ACu: goto L_080501AC;
        case 0x080501AEu: goto L_080501AE;
        case 0x080501B0u: goto L_080501B0;
        case 0x080501B2u: goto L_080501B2;
        case 0x080501B4u: goto L_080501B4;
        case 0x080501B6u: goto L_080501B6;
        case 0x080501B8u: goto L_080501B8;
        case 0x080501BAu: goto L_080501BA;
        case 0x080501BCu: goto L_080501BC;
        case 0x080501BEu: goto L_080501BE;
        case 0x080501C0u: goto L_080501C0;
        case 0x080501C2u: goto L_080501C2;
        case 0x080501C4u: goto L_080501C4;
        case 0x080501C6u: goto L_080501C6;
        case 0x080501C8u: goto L_080501C8;
        case 0x080501CAu: goto L_080501CA;
        case 0x080501CCu: goto L_080501CC;
        case 0x080501CEu: goto L_080501CE;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080501A2u);
    /* 080501A2  080501a2 T ldr r1,[r13,#0x10] */
    {
    g_cpu.R[15] = 0x080501A2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501A2 = 1u;
    _cyc_080501A2 = 2u;
    uint32_t _base_080501A2 = g_cpu.R[13];
    uint32_t _off_080501A2;
    _off_080501A2 = 0x00000010u;
    uint32_t _ea_080501A2 = _base_080501A2 + _off_080501A2;
    uint32_t _post_080501A2 = _base_080501A2 + _off_080501A2;
    _cyc_080501A2 += runtime_mem_cycles(_ea_080501A2, 4u, 0u);
    uint32_t _v_080501A2;
    { uint32_t _w = bus_read_u32(_ea_080501A2 & ~3u); uint32_t _rot = (_ea_080501A2 & 3u) * 8u; _v_080501A2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_080501A2;
    g_cpu.R[15] = 0x080501A4u;
    runtime_tick(_cyc_080501A2);
    }
L_080501A4:
    /* 080501A4  080501a4 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x080501A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501A4 = 1u;
    _cyc_080501A4 = 1u;
    uint32_t _r_080501A4;
    _r_080501A4 = 0x00000000u;
    arm_set_nzc_logic(_r_080501A4, cpsr_c());
    g_cpu.R[0] = _r_080501A4;
    g_cpu.R[15] = 0x080501A6u;
    runtime_tick(_cyc_080501A4);
    }
L_080501A6:
    /* 080501A6  080501a6 T ldrsb r0,[r1,+r0] */
    {
    g_cpu.R[15] = 0x080501A6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501A6 = 1u;
    _cyc_080501A6 = 2u;
    uint32_t _base_080501A6 = g_cpu.R[1];
    uint32_t _off_080501A6;
    uint32_t _morm_080501A6 = g_cpu.R[0];
    _off_080501A6 = _morm_080501A6;
    uint32_t _ea_080501A6 = _base_080501A6 + _off_080501A6;
    uint32_t _post_080501A6 = _base_080501A6 + _off_080501A6;
    _cyc_080501A6 += runtime_mem_cycles(_ea_080501A6, 1u, 0u);
    uint32_t _v_080501A6;
    _v_080501A6 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_080501A6);
    g_cpu.R[0] = _v_080501A6;
    g_cpu.R[15] = 0x080501A8u;
    runtime_tick(_cyc_080501A6);
    }
L_080501A8:
    /* 080501A8  080501a8 T cmps r0,#0x1 */
    {
    g_cpu.R[15] = 0x080501A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501A8 = 1u;
    _cyc_080501A8 = 1u;
    uint32_t _rn_080501A8 = g_cpu.R[0];
    uint32_t _r_080501A8;
    _r_080501A8 = _rn_080501A8 - 0x00000001u;
    arm_set_nzcv_sub(_rn_080501A8, 0x00000001u, _r_080501A8);
    g_cpu.R[15] = 0x080501AAu;
    runtime_tick(_cyc_080501A8);
    }
L_080501AA:
    /* 080501AA  080501aa T ble 0x08050208 */
    {
    g_cpu.R[15] = 0x080501AAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501AA = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_080501AA = 3u;
        g_cpu.R[15] = 0x08050208u;
        runtime_tick(_cyc_080501AA);
        gf_tfunc_08050208();
        return;
    }
    g_cpu.R[15] = 0x080501ACu;
    runtime_tick(_cyc_080501AA);
    }
L_080501AC:
    /* 080501AC  080501ac T adds r0,r7,#0x0 */
    {
    g_cpu.R[15] = 0x080501ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501AC = 1u;
    _cyc_080501AC = 1u;
    uint32_t _rn_080501AC = g_cpu.R[7];
    uint32_t _r_080501AC;
    _r_080501AC = _rn_080501AC + 0x00000000u;
    arm_set_nzcv_add(_rn_080501AC, 0x00000000u, _r_080501AC);
    g_cpu.R[0] = _r_080501AC;
    g_cpu.R[15] = 0x080501AEu;
    runtime_tick(_cyc_080501AC);
    }
L_080501AE:
    /* 080501AE  080501ae T adds r0,r0,#0x20 */
    {
    g_cpu.R[15] = 0x080501AEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501AE = 1u;
    _cyc_080501AE = 1u;
    uint32_t _rn_080501AE = g_cpu.R[0];
    uint32_t _r_080501AE;
    _r_080501AE = _rn_080501AE + 0x00000020u;
    arm_set_nzcv_add(_rn_080501AE, 0x00000020u, _r_080501AE);
    g_cpu.R[0] = _r_080501AE;
    g_cpu.R[15] = 0x080501B0u;
    runtime_tick(_cyc_080501AE);
    }
L_080501B0:
    /* 080501B0  080501b0 T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x080501B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501B0 = 1u;
    _cyc_080501B0 = 2u;
    uint32_t _base_080501B0 = g_cpu.R[0];
    uint32_t _off_080501B0;
    _off_080501B0 = 0x00000000u;
    uint32_t _ea_080501B0 = _base_080501B0 + _off_080501B0;
    uint32_t _post_080501B0 = _base_080501B0 + _off_080501B0;
    _cyc_080501B0 += runtime_mem_cycles(_ea_080501B0, 1u, 0u);
    uint32_t _v_080501B0;
    _v_080501B0 = bus_read_u8(_ea_080501B0);
    g_cpu.R[0] = _v_080501B0;
    g_cpu.R[15] = 0x080501B2u;
    runtime_tick(_cyc_080501B0);
    }
L_080501B2:
    /* 080501B2  080501b2 T movs r0,r0,lsl #24 */
    {
    g_cpu.R[15] = 0x080501B2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501B2 = 1u;
    _cyc_080501B2 = 1u;
    uint32_t _rm_080501B2 = g_cpu.R[0];
    uint32_t _op2_080501B2;
    uint32_t _co_080501B2;
    _op2_080501B2 = _rm_080501B2 << 24;
    _co_080501B2 = (_rm_080501B2 >> 8) & 1u;
    uint32_t _r_080501B2;
    _r_080501B2 = _op2_080501B2;
    arm_set_nzc_logic(_r_080501B2, _co_080501B2);
    g_cpu.R[0] = _r_080501B2;
    g_cpu.R[15] = 0x080501B4u;
    runtime_tick(_cyc_080501B2);
    }
L_080501B4:
    /* 080501B4  080501b4 T movs r0,r0,asr #24 */
    {
    g_cpu.R[15] = 0x080501B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501B4 = 1u;
    _cyc_080501B4 = 1u;
    uint32_t _rm_080501B4 = g_cpu.R[0];
    uint32_t _op2_080501B4;
    uint32_t _co_080501B4;
    _op2_080501B4 = (uint32_t)((int32_t)_rm_080501B4 >> 24);
    _co_080501B4 = (_rm_080501B4 >> 23) & 1u;
    uint32_t _r_080501B4;
    _r_080501B4 = _op2_080501B4;
    arm_set_nzc_logic(_r_080501B4, _co_080501B4);
    g_cpu.R[0] = _r_080501B4;
    g_cpu.R[15] = 0x080501B6u;
    runtime_tick(_cyc_080501B4);
    }
L_080501B6:
    /* 080501B6  080501b6 T cmps r0,#0x2 */
    {
    g_cpu.R[15] = 0x080501B6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501B6 = 1u;
    _cyc_080501B6 = 1u;
    uint32_t _rn_080501B6 = g_cpu.R[0];
    uint32_t _r_080501B6;
    _r_080501B6 = _rn_080501B6 - 0x00000002u;
    arm_set_nzcv_sub(_rn_080501B6, 0x00000002u, _r_080501B6);
    g_cpu.R[15] = 0x080501B8u;
    runtime_tick(_cyc_080501B6);
    }
L_080501B8:
    /* 080501B8  080501b8 T bne 0x080501ec */
    {
    g_cpu.R[15] = 0x080501B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501B8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080501B8 = 3u;
        g_cpu.R[15] = 0x080501ECu;
        runtime_tick(_cyc_080501B8);
        gf_tfunc_080501EC();
        return;
    }
    g_cpu.R[15] = 0x080501BAu;
    runtime_tick(_cyc_080501B8);
    }
L_080501BA:
    /* 080501BA  080501ba T movs r2,#0x7c */
    {
    g_cpu.R[15] = 0x080501BAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501BA = 1u;
    _cyc_080501BA = 1u;
    uint32_t _r_080501BA;
    _r_080501BA = 0x0000007Cu;
    arm_set_nzc_logic(_r_080501BA, cpsr_c());
    g_cpu.R[2] = _r_080501BA;
    g_cpu.R[15] = 0x080501BCu;
    runtime_tick(_cyc_080501BA);
    }
L_080501BC:
    /* 080501BC  080501bc T adds r0,r7,#0x0 */
    {
    g_cpu.R[15] = 0x080501BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501BC = 1u;
    _cyc_080501BC = 1u;
    uint32_t _rn_080501BC = g_cpu.R[7];
    uint32_t _r_080501BC;
    _r_080501BC = _rn_080501BC + 0x00000000u;
    arm_set_nzcv_add(_rn_080501BC, 0x00000000u, _r_080501BC);
    g_cpu.R[0] = _r_080501BC;
    g_cpu.R[15] = 0x080501BEu;
    runtime_tick(_cyc_080501BC);
    }
L_080501BE:
    /* 080501BE  080501be T adds r0,r0,#0x21 */
    {
    g_cpu.R[15] = 0x080501BEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501BE = 1u;
    _cyc_080501BE = 1u;
    uint32_t _rn_080501BE = g_cpu.R[0];
    uint32_t _r_080501BE;
    _r_080501BE = _rn_080501BE + 0x00000021u;
    arm_set_nzcv_add(_rn_080501BE, 0x00000021u, _r_080501BE);
    g_cpu.R[0] = _r_080501BE;
    g_cpu.R[15] = 0x080501C0u;
    runtime_tick(_cyc_080501BE);
    }
L_080501C0:
    /* 080501C0  080501c0 T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x080501C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501C0 = 1u;
    _cyc_080501C0 = 2u;
    uint32_t _base_080501C0 = g_cpu.R[0];
    uint32_t _off_080501C0;
    _off_080501C0 = 0x00000000u;
    uint32_t _ea_080501C0 = _base_080501C0 + _off_080501C0;
    uint32_t _post_080501C0 = _base_080501C0 + _off_080501C0;
    _cyc_080501C0 += runtime_mem_cycles(_ea_080501C0, 1u, 0u);
    uint32_t _v_080501C0;
    _v_080501C0 = bus_read_u8(_ea_080501C0);
    g_cpu.R[0] = _v_080501C0;
    g_cpu.R[15] = 0x080501C2u;
    runtime_tick(_cyc_080501C0);
    }
L_080501C2:
    /* 080501C2  080501c2 T movs r0,r0,lsl #24 */
    {
    g_cpu.R[15] = 0x080501C2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501C2 = 1u;
    _cyc_080501C2 = 1u;
    uint32_t _rm_080501C2 = g_cpu.R[0];
    uint32_t _op2_080501C2;
    uint32_t _co_080501C2;
    _op2_080501C2 = _rm_080501C2 << 24;
    _co_080501C2 = (_rm_080501C2 >> 8) & 1u;
    uint32_t _r_080501C2;
    _r_080501C2 = _op2_080501C2;
    arm_set_nzc_logic(_r_080501C2, _co_080501C2);
    g_cpu.R[0] = _r_080501C2;
    g_cpu.R[15] = 0x080501C4u;
    runtime_tick(_cyc_080501C2);
    }
L_080501C4:
    /* 080501C4  080501c4 T movs r0,r0,asr #24 */
    {
    g_cpu.R[15] = 0x080501C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501C4 = 1u;
    _cyc_080501C4 = 1u;
    uint32_t _rm_080501C4 = g_cpu.R[0];
    uint32_t _op2_080501C4;
    uint32_t _co_080501C4;
    _op2_080501C4 = (uint32_t)((int32_t)_rm_080501C4 >> 24);
    _co_080501C4 = (_rm_080501C4 >> 23) & 1u;
    uint32_t _r_080501C4;
    _r_080501C4 = _op2_080501C4;
    arm_set_nzc_logic(_r_080501C4, _co_080501C4);
    g_cpu.R[0] = _r_080501C4;
    g_cpu.R[15] = 0x080501C6u;
    runtime_tick(_cyc_080501C4);
    }
L_080501C6:
    /* 080501C6  080501c6 T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x080501C6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501C6 = 1u;
    _cyc_080501C6 = 1u;
    uint32_t _rn_080501C6 = g_cpu.R[0];
    uint32_t _r_080501C6;
    _r_080501C6 = _rn_080501C6 - 0x00000000u;
    arm_set_nzcv_sub(_rn_080501C6, 0x00000000u, _r_080501C6);
    g_cpu.R[15] = 0x080501C8u;
    runtime_tick(_cyc_080501C6);
    }
L_080501C8:
    /* 080501C8  080501c8 T bne 0x080501e8 */
    {
    g_cpu.R[15] = 0x080501C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501C8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_080501C8 = 3u;
        g_cpu.R[15] = 0x080501E8u;
        runtime_tick(_cyc_080501C8);
        gf_tfunc_080501E8();
        return;
    }
    g_cpu.R[15] = 0x080501CAu;
    runtime_tick(_cyc_080501C8);
    }
L_080501CA:
    /* 080501CA  080501ca T movs r1,#0x47 */
    {
    g_cpu.R[15] = 0x080501CAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501CA = 1u;
    _cyc_080501CA = 1u;
    uint32_t _r_080501CA;
    _r_080501CA = 0x00000047u;
    arm_set_nzc_logic(_r_080501CA, cpsr_c());
    g_cpu.R[1] = _r_080501CA;
    g_cpu.R[15] = 0x080501CCu;
    runtime_tick(_cyc_080501CA);
    }
L_080501CC:
    /* 080501CC  080501cc T movs r3,#0x28 */
    {
    g_cpu.R[15] = 0x080501CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501CC = 1u;
    _cyc_080501CC = 1u;
    uint32_t _r_080501CC;
    _r_080501CC = 0x00000028u;
    arm_set_nzc_logic(_r_080501CC, cpsr_c());
    g_cpu.R[3] = _r_080501CC;
    g_cpu.R[15] = 0x080501CEu;
    runtime_tick(_cyc_080501CC);
    }
L_080501CE:
    /* 080501CE  080501ce T b 0x080501fc */
    {
    g_cpu.R[15] = 0x080501CEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501CE = 1u;
    _cyc_080501CE = 3u;
    g_cpu.R[15] = 0x080501FCu;
    runtime_tick(_cyc_080501CE);
    gf_tfunc_080501FC();
    return;
    g_cpu.R[15] = 0x080501D0u;
    runtime_tick(_cyc_080501CE);
    }
    /* fall-through to 0x080501D0 */
    g_cpu.R[15] = 0x080501D0u;
    runtime_dispatch(0x080501D0u);
    return;
}

/* 0x080501E8  mode=thumb  end=0x080501EC  branches=1 */
void gf_tfunc_080501E8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080501EAu: goto L_080501EA;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080501E8u);
    /* 080501E8  080501e8 T movs r1,#0x72 */
    {
    g_cpu.R[15] = 0x080501E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501E8 = 1u;
    _cyc_080501E8 = 1u;
    uint32_t _r_080501E8;
    _r_080501E8 = 0x00000072u;
    arm_set_nzc_logic(_r_080501E8, cpsr_c());
    g_cpu.R[1] = _r_080501E8;
    g_cpu.R[15] = 0x080501EAu;
    runtime_tick(_cyc_080501E8);
    }
L_080501EA:
    /* 080501EA  080501ea T b 0x080501fa */
    {
    g_cpu.R[15] = 0x080501EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501EA = 1u;
    _cyc_080501EA = 3u;
    g_cpu.R[15] = 0x080501FAu;
    runtime_tick(_cyc_080501EA);
    gf_tfunc_080501FA();
    return;
    g_cpu.R[15] = 0x080501ECu;
    runtime_tick(_cyc_080501EA);
    }
    /* fall-through to 0x080501EC */
    g_cpu.R[15] = 0x080501ECu;
    runtime_dispatch(0x080501ECu);
    return;
}

/* 0x080501F8  mode=thumb  end=0x080501FA  branches=5 */
void gf_tfunc_080501F8(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080501F8u);
    /* 080501F8  080501f8 T movs r2,#0x3f */
    g_cpu.R[15] = 0x080501F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501F8 = 1u;
    _cyc_080501F8 = 1u;
    uint32_t _r_080501F8;
    _r_080501F8 = 0x0000003Fu;
    arm_set_nzc_logic(_r_080501F8, cpsr_c());
    g_cpu.R[2] = _r_080501F8;
    g_cpu.R[15] = 0x080501FAu;
    runtime_tick(_cyc_080501F8);
    /* fall-through to 0x080501FA */
    g_cpu.R[15] = 0x080501FAu;
    runtime_dispatch(0x080501FAu);
    return;
}

/* 0x08050208  mode=thumb  end=0x08050242  branches=3 */
void gf_tfunc_08050208(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0805020Au: goto L_0805020A;
        case 0x0805020Cu: goto L_0805020C;
        case 0x0805020Eu: goto L_0805020E;
        case 0x08050210u: goto L_08050210;
        case 0x08050212u: goto L_08050212;
        case 0x08050214u: goto L_08050214;
        case 0x08050216u: goto L_08050216;
        case 0x08050218u: goto L_08050218;
        case 0x0805021Au: goto L_0805021A;
        case 0x0805021Cu: goto L_0805021C;
        case 0x0805021Eu: goto L_0805021E;
        case 0x08050220u: goto L_08050220;
        case 0x08050222u: goto L_08050222;
        case 0x08050224u: goto L_08050224;
        case 0x08050226u: goto L_08050226;
        case 0x08050228u: goto L_08050228;
        case 0x0805022Au: goto L_0805022A;
        case 0x0805022Cu: goto L_0805022C;
        case 0x0805022Eu: goto L_0805022E;
        case 0x08050230u: goto L_08050230;
        case 0x08050232u: goto L_08050232;
        case 0x08050234u: goto L_08050234;
        case 0x08050236u: goto L_08050236;
        case 0x08050238u: goto L_08050238;
        case 0x0805023Au: goto L_0805023A;
        case 0x0805023Cu: goto L_0805023C;
        case 0x0805023Eu: goto L_0805023E;
        case 0x08050240u: goto L_08050240;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050208u);
    /* 08050208  08050208 T ldr r2,[r13,#0x10] */
    {
    g_cpu.R[15] = 0x08050208u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050208 = 1u;
    _cyc_08050208 = 2u;
    uint32_t _base_08050208 = g_cpu.R[13];
    uint32_t _off_08050208;
    _off_08050208 = 0x00000010u;
    uint32_t _ea_08050208 = _base_08050208 + _off_08050208;
    uint32_t _post_08050208 = _base_08050208 + _off_08050208;
    _cyc_08050208 += runtime_mem_cycles(_ea_08050208, 4u, 0u);
    uint32_t _v_08050208;
    { uint32_t _w = bus_read_u32(_ea_08050208 & ~3u); uint32_t _rot = (_ea_08050208 & 3u) * 8u; _v_08050208 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08050208;
    g_cpu.R[15] = 0x0805020Au;
    runtime_tick(_cyc_08050208);
    }
L_0805020A:
    /* 0805020A  0805020a T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x0805020Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805020A = 1u;
    _cyc_0805020A = 1u;
    uint32_t _r_0805020A;
    _r_0805020A = 0x00000000u;
    arm_set_nzc_logic(_r_0805020A, cpsr_c());
    g_cpu.R[0] = _r_0805020A;
    g_cpu.R[15] = 0x0805020Cu;
    runtime_tick(_cyc_0805020A);
    }
L_0805020C:
    /* 0805020C  0805020c T ldrsb r0,[r2,+r0] */
    {
    g_cpu.R[15] = 0x0805020Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805020C = 1u;
    _cyc_0805020C = 2u;
    uint32_t _base_0805020C = g_cpu.R[2];
    uint32_t _off_0805020C;
    uint32_t _morm_0805020C = g_cpu.R[0];
    _off_0805020C = _morm_0805020C;
    uint32_t _ea_0805020C = _base_0805020C + _off_0805020C;
    uint32_t _post_0805020C = _base_0805020C + _off_0805020C;
    _cyc_0805020C += runtime_mem_cycles(_ea_0805020C, 1u, 0u);
    uint32_t _v_0805020C;
    _v_0805020C = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_0805020C);
    g_cpu.R[0] = _v_0805020C;
    g_cpu.R[15] = 0x0805020Eu;
    runtime_tick(_cyc_0805020C);
    }
L_0805020E:
    /* 0805020E  0805020e T cmps r0,#0x3 */
    {
    g_cpu.R[15] = 0x0805020Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805020E = 1u;
    _cyc_0805020E = 1u;
    uint32_t _rn_0805020E = g_cpu.R[0];
    uint32_t _r_0805020E;
    _r_0805020E = _rn_0805020E - 0x00000003u;
    arm_set_nzcv_sub(_rn_0805020E, 0x00000003u, _r_0805020E);
    g_cpu.R[15] = 0x08050210u;
    runtime_tick(_cyc_0805020E);
    }
L_08050210:
    /* 08050210  08050210 T bne 0x080502a2 */
    {
    g_cpu.R[15] = 0x08050210u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050210 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050210 = 3u;
        g_cpu.R[15] = 0x080502A2u;
        runtime_tick(_cyc_08050210);
        gf_tfunc_080502A2();
        return;
    }
    g_cpu.R[15] = 0x08050212u;
    runtime_tick(_cyc_08050210);
    }
L_08050212:
    /* 08050212  08050212 T adds r0,r7,#0x0 */
    {
    g_cpu.R[15] = 0x08050212u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050212 = 1u;
    _cyc_08050212 = 1u;
    uint32_t _rn_08050212 = g_cpu.R[7];
    uint32_t _r_08050212;
    _r_08050212 = _rn_08050212 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050212, 0x00000000u, _r_08050212);
    g_cpu.R[0] = _r_08050212;
    g_cpu.R[15] = 0x08050214u;
    runtime_tick(_cyc_08050212);
    }
L_08050214:
    /* 08050214  08050214 T adds r0,r0,#0x20 */
    {
    g_cpu.R[15] = 0x08050214u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050214 = 1u;
    _cyc_08050214 = 1u;
    uint32_t _rn_08050214 = g_cpu.R[0];
    uint32_t _r_08050214;
    _r_08050214 = _rn_08050214 + 0x00000020u;
    arm_set_nzcv_add(_rn_08050214, 0x00000020u, _r_08050214);
    g_cpu.R[0] = _r_08050214;
    g_cpu.R[15] = 0x08050216u;
    runtime_tick(_cyc_08050214);
    }
L_08050216:
    /* 08050216  08050216 T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x08050216u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050216 = 1u;
    _cyc_08050216 = 2u;
    uint32_t _base_08050216 = g_cpu.R[0];
    uint32_t _off_08050216;
    _off_08050216 = 0x00000000u;
    uint32_t _ea_08050216 = _base_08050216 + _off_08050216;
    uint32_t _post_08050216 = _base_08050216 + _off_08050216;
    _cyc_08050216 += runtime_mem_cycles(_ea_08050216, 1u, 0u);
    uint32_t _v_08050216;
    _v_08050216 = bus_read_u8(_ea_08050216);
    g_cpu.R[0] = _v_08050216;
    g_cpu.R[15] = 0x08050218u;
    runtime_tick(_cyc_08050216);
    }
L_08050218:
    /* 08050218  08050218 T movs r0,r0,lsl #24 */
    {
    g_cpu.R[15] = 0x08050218u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050218 = 1u;
    _cyc_08050218 = 1u;
    uint32_t _rm_08050218 = g_cpu.R[0];
    uint32_t _op2_08050218;
    uint32_t _co_08050218;
    _op2_08050218 = _rm_08050218 << 24;
    _co_08050218 = (_rm_08050218 >> 8) & 1u;
    uint32_t _r_08050218;
    _r_08050218 = _op2_08050218;
    arm_set_nzc_logic(_r_08050218, _co_08050218);
    g_cpu.R[0] = _r_08050218;
    g_cpu.R[15] = 0x0805021Au;
    runtime_tick(_cyc_08050218);
    }
L_0805021A:
    /* 0805021A  0805021a T movs r0,r0,asr #24 */
    {
    g_cpu.R[15] = 0x0805021Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805021A = 1u;
    _cyc_0805021A = 1u;
    uint32_t _rm_0805021A = g_cpu.R[0];
    uint32_t _op2_0805021A;
    uint32_t _co_0805021A;
    _op2_0805021A = (uint32_t)((int32_t)_rm_0805021A >> 24);
    _co_0805021A = (_rm_0805021A >> 23) & 1u;
    uint32_t _r_0805021A;
    _r_0805021A = _op2_0805021A;
    arm_set_nzc_logic(_r_0805021A, _co_0805021A);
    g_cpu.R[0] = _r_0805021A;
    g_cpu.R[15] = 0x0805021Cu;
    runtime_tick(_cyc_0805021A);
    }
L_0805021C:
    /* 0805021C  0805021c T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x0805021Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805021C = 1u;
    _cyc_0805021C = 1u;
    uint32_t _rn_0805021C = g_cpu.R[0];
    uint32_t _r_0805021C;
    _r_0805021C = _rn_0805021C - 0x00000000u;
    arm_set_nzcv_sub(_rn_0805021C, 0x00000000u, _r_0805021C);
    g_cpu.R[15] = 0x0805021Eu;
    runtime_tick(_cyc_0805021C);
    }
L_0805021E:
    /* 0805021E  0805021e T bne 0x08050250 */
    {
    g_cpu.R[15] = 0x0805021Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805021E = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0805021E = 3u;
        g_cpu.R[15] = 0x08050250u;
        runtime_tick(_cyc_0805021E);
        gf_tfunc_08050250();
        return;
    }
    g_cpu.R[15] = 0x08050220u;
    runtime_tick(_cyc_0805021E);
    }
L_08050220:
    /* 08050220  08050220 T ldr r0,[r15,#0x20] */
    {
    g_cpu.R[15] = 0x08050220u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050220 = 1u;
    _cyc_08050220 = 2u;
    uint32_t _base_08050220 = 0x08050224u & ~3u;
    uint32_t _off_08050220;
    _off_08050220 = 0x00000020u;
    uint32_t _ea_08050220 = _base_08050220 + _off_08050220;
    uint32_t _post_08050220 = _base_08050220 + _off_08050220;
    _cyc_08050220 += runtime_mem_cycles(_ea_08050220, 4u, 0u);
    uint32_t _v_08050220;
    { uint32_t _w = bus_read_u32(_ea_08050220 & ~3u); uint32_t _rot = (_ea_08050220 & 3u) * 8u; _v_08050220 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050220;
    g_cpu.R[15] = 0x08050222u;
    runtime_tick(_cyc_08050220);
    }
L_08050222:
    /* 08050222  08050222 T ldrh r2,[r0,#0x2] */
    {
    g_cpu.R[15] = 0x08050222u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050222 = 1u;
    _cyc_08050222 = 2u;
    uint32_t _base_08050222 = g_cpu.R[0];
    uint32_t _off_08050222;
    _off_08050222 = 0x00000002u;
    uint32_t _ea_08050222 = _base_08050222 + _off_08050222;
    uint32_t _post_08050222 = _base_08050222 + _off_08050222;
    _cyc_08050222 += runtime_mem_cycles(_ea_08050222, 2u, 0u);
    uint32_t _v_08050222;
    { uint32_t _h = bus_read_u16(_ea_08050222 & ~1u); if (_ea_08050222 & 1u) _v_08050222 = ((_h >> 8) | (_h << 24)); else _v_08050222 = _h; }
    g_cpu.R[2] = _v_08050222;
    g_cpu.R[15] = 0x08050224u;
    runtime_tick(_cyc_08050222);
    }
L_08050224:
    /* 08050224  08050224 T ldr r1,[r15,#0x20] */
    {
    g_cpu.R[15] = 0x08050224u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050224 = 1u;
    _cyc_08050224 = 2u;
    uint32_t _base_08050224 = 0x08050228u & ~3u;
    uint32_t _off_08050224;
    _off_08050224 = 0x00000020u;
    uint32_t _ea_08050224 = _base_08050224 + _off_08050224;
    uint32_t _post_08050224 = _base_08050224 + _off_08050224;
    _cyc_08050224 += runtime_mem_cycles(_ea_08050224, 4u, 0u);
    uint32_t _v_08050224;
    { uint32_t _w = bus_read_u32(_ea_08050224 & ~3u); uint32_t _rot = (_ea_08050224 & 3u) * 8u; _v_08050224 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050224;
    g_cpu.R[15] = 0x08050226u;
    runtime_tick(_cyc_08050224);
    }
L_08050226:
    /* 08050226  08050226 T adds r0,r1,#0x0 */
    {
    g_cpu.R[15] = 0x08050226u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050226 = 1u;
    _cyc_08050226 = 1u;
    uint32_t _rn_08050226 = g_cpu.R[1];
    uint32_t _r_08050226;
    _r_08050226 = _rn_08050226 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050226, 0x00000000u, _r_08050226);
    g_cpu.R[0] = _r_08050226;
    g_cpu.R[15] = 0x08050228u;
    runtime_tick(_cyc_08050226);
    }
L_08050228:
    /* 08050228  08050228 T ands r0,r0,r2 */
    {
    g_cpu.R[15] = 0x08050228u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050228 = 1u;
    _cyc_08050228 = 1u;
    uint32_t _rm_08050228 = g_cpu.R[2];
    uint32_t _op2_08050228;
    uint32_t _co_08050228;
    _op2_08050228 = _rm_08050228;
    _co_08050228 = cpsr_c();
    uint32_t _rn_08050228 = g_cpu.R[0];
    uint32_t _r_08050228;
    _r_08050228 = _rn_08050228 & _op2_08050228;
    arm_set_nzc_logic(_r_08050228, _co_08050228);
    g_cpu.R[0] = _r_08050228;
    g_cpu.R[15] = 0x0805022Au;
    runtime_tick(_cyc_08050228);
    }
L_0805022A:
    /* 0805022A  0805022a T movs r2,#0x44 */
    {
    g_cpu.R[15] = 0x0805022Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805022A = 1u;
    _cyc_0805022A = 1u;
    uint32_t _r_0805022A;
    _r_0805022A = 0x00000044u;
    arm_set_nzc_logic(_r_0805022A, cpsr_c());
    g_cpu.R[2] = _r_0805022A;
    g_cpu.R[15] = 0x0805022Cu;
    runtime_tick(_cyc_0805022A);
    }
L_0805022C:
    /* 0805022C  0805022c T orrs r0,r0,r2 */
    {
    g_cpu.R[15] = 0x0805022Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805022C = 1u;
    _cyc_0805022C = 1u;
    uint32_t _rm_0805022C = g_cpu.R[2];
    uint32_t _op2_0805022C;
    uint32_t _co_0805022C;
    _op2_0805022C = _rm_0805022C;
    _co_0805022C = cpsr_c();
    uint32_t _rn_0805022C = g_cpu.R[0];
    uint32_t _r_0805022C;
    _r_0805022C = _rn_0805022C | _op2_0805022C;
    arm_set_nzc_logic(_r_0805022C, _co_0805022C);
    g_cpu.R[0] = _r_0805022C;
    g_cpu.R[15] = 0x0805022Eu;
    runtime_tick(_cyc_0805022C);
    }
L_0805022E:
    /* 0805022E  0805022e T ldr r2,[r15,#0x14] */
    {
    g_cpu.R[15] = 0x0805022Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805022E = 1u;
    _cyc_0805022E = 2u;
    uint32_t _base_0805022E = 0x08050232u & ~3u;
    uint32_t _off_0805022E;
    _off_0805022E = 0x00000014u;
    uint32_t _ea_0805022E = _base_0805022E + _off_0805022E;
    uint32_t _post_0805022E = _base_0805022E + _off_0805022E;
    _cyc_0805022E += runtime_mem_cycles(_ea_0805022E, 4u, 0u);
    uint32_t _v_0805022E;
    { uint32_t _w = bus_read_u32(_ea_0805022E & ~3u); uint32_t _rot = (_ea_0805022E & 3u) * 8u; _v_0805022E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_0805022E;
    g_cpu.R[15] = 0x08050230u;
    runtime_tick(_cyc_0805022E);
    }
L_08050230:
    /* 08050230  08050230 T strh r0,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x08050230u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050230 = 1u;
    _cyc_08050230 = 1u;
    uint32_t _base_08050230 = g_cpu.R[2];
    uint32_t _off_08050230;
    _off_08050230 = 0x00000002u;
    uint32_t _ea_08050230 = _base_08050230 + _off_08050230;
    uint32_t _post_08050230 = _base_08050230 + _off_08050230;
    _cyc_08050230 += runtime_mem_cycles(_ea_08050230, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050230u, _ea_08050230 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_08050230 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x08050232u;
    runtime_tick(_cyc_08050230);
    }
L_08050232:
    /* 08050232  08050232 T ldr r2,[r15,#0x18] */
    {
    g_cpu.R[15] = 0x08050232u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050232 = 1u;
    _cyc_08050232 = 2u;
    uint32_t _base_08050232 = 0x08050236u & ~3u;
    uint32_t _off_08050232;
    _off_08050232 = 0x00000018u;
    uint32_t _ea_08050232 = _base_08050232 + _off_08050232;
    uint32_t _post_08050232 = _base_08050232 + _off_08050232;
    _cyc_08050232 += runtime_mem_cycles(_ea_08050232, 4u, 0u);
    uint32_t _v_08050232;
    { uint32_t _w = bus_read_u32(_ea_08050232 & ~3u); uint32_t _rot = (_ea_08050232 & 3u) * 8u; _v_08050232 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08050232;
    g_cpu.R[15] = 0x08050234u;
    runtime_tick(_cyc_08050232);
    }
L_08050234:
    /* 08050234  08050234 T ldrh r0,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x08050234u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050234 = 1u;
    _cyc_08050234 = 2u;
    uint32_t _base_08050234 = g_cpu.R[2];
    uint32_t _off_08050234;
    _off_08050234 = 0x00000002u;
    uint32_t _ea_08050234 = _base_08050234 + _off_08050234;
    uint32_t _post_08050234 = _base_08050234 + _off_08050234;
    _cyc_08050234 += runtime_mem_cycles(_ea_08050234, 2u, 0u);
    uint32_t _v_08050234;
    { uint32_t _h = bus_read_u16(_ea_08050234 & ~1u); if (_ea_08050234 & 1u) _v_08050234 = ((_h >> 8) | (_h << 24)); else _v_08050234 = _h; }
    g_cpu.R[0] = _v_08050234;
    g_cpu.R[15] = 0x08050236u;
    runtime_tick(_cyc_08050234);
    }
L_08050236:
    /* 08050236  08050236 T ands r1,r1,r0 */
    {
    g_cpu.R[15] = 0x08050236u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050236 = 1u;
    _cyc_08050236 = 1u;
    uint32_t _rm_08050236 = g_cpu.R[0];
    uint32_t _op2_08050236;
    uint32_t _co_08050236;
    _op2_08050236 = _rm_08050236;
    _co_08050236 = cpsr_c();
    uint32_t _rn_08050236 = g_cpu.R[1];
    uint32_t _r_08050236;
    _r_08050236 = _rn_08050236 & _op2_08050236;
    arm_set_nzc_logic(_r_08050236, _co_08050236);
    g_cpu.R[1] = _r_08050236;
    g_cpu.R[15] = 0x08050238u;
    runtime_tick(_cyc_08050236);
    }
L_08050238:
    /* 08050238  08050238 T movs r0,#0x84 */
    {
    g_cpu.R[15] = 0x08050238u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050238 = 1u;
    _cyc_08050238 = 1u;
    uint32_t _r_08050238;
    _r_08050238 = 0x00000084u;
    arm_set_nzc_logic(_r_08050238, cpsr_c());
    g_cpu.R[0] = _r_08050238;
    g_cpu.R[15] = 0x0805023Au;
    runtime_tick(_cyc_08050238);
    }
L_0805023A:
    /* 0805023A  0805023a T orrs r1,r1,r0 */
    {
    g_cpu.R[15] = 0x0805023Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805023A = 1u;
    _cyc_0805023A = 1u;
    uint32_t _rm_0805023A = g_cpu.R[0];
    uint32_t _op2_0805023A;
    uint32_t _co_0805023A;
    _op2_0805023A = _rm_0805023A;
    _co_0805023A = cpsr_c();
    uint32_t _rn_0805023A = g_cpu.R[1];
    uint32_t _r_0805023A;
    _r_0805023A = _rn_0805023A | _op2_0805023A;
    arm_set_nzc_logic(_r_0805023A, _co_0805023A);
    g_cpu.R[1] = _r_0805023A;
    g_cpu.R[15] = 0x0805023Cu;
    runtime_tick(_cyc_0805023A);
    }
L_0805023C:
    /* 0805023C  0805023c T strh r1,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x0805023Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805023C = 1u;
    _cyc_0805023C = 1u;
    uint32_t _base_0805023C = g_cpu.R[2];
    uint32_t _off_0805023C;
    _off_0805023C = 0x00000002u;
    uint32_t _ea_0805023C = _base_0805023C + _off_0805023C;
    uint32_t _post_0805023C = _base_0805023C + _off_0805023C;
    _cyc_0805023C += runtime_mem_cycles(_ea_0805023C, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805023Cu, _ea_0805023C & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_0805023C & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x0805023Eu;
    runtime_tick(_cyc_0805023C);
    }
L_0805023E:
    /* 0805023E  0805023e T movs r0,#0x34 */
    {
    g_cpu.R[15] = 0x0805023Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805023E = 1u;
    _cyc_0805023E = 1u;
    uint32_t _r_0805023E;
    _r_0805023E = 0x00000034u;
    arm_set_nzc_logic(_r_0805023E, cpsr_c());
    g_cpu.R[0] = _r_0805023E;
    g_cpu.R[15] = 0x08050240u;
    runtime_tick(_cyc_0805023E);
    }
L_08050240:
    /* 08050240  08050240 T b 0x0805027c */
    {
    g_cpu.R[15] = 0x08050240u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050240 = 1u;
    _cyc_08050240 = 3u;
    g_cpu.R[15] = 0x0805027Cu;
    runtime_tick(_cyc_08050240);
    gf_tfunc_0805027C();
    return;
    g_cpu.R[15] = 0x08050242u;
    runtime_tick(_cyc_08050240);
    }
    /* fall-through to 0x08050242 */
    g_cpu.R[15] = 0x08050242u;
    runtime_dispatch(0x08050242u);
    return;
}

/* 0x08050290  mode=thumb  end=0x080502A2  branches=2  indirect */
void gf_tfunc_08050290(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050292u: goto L_08050292;
        case 0x08050294u: goto L_08050294;
        case 0x08050296u: goto L_08050296;
        case 0x08050298u: goto L_08050298;
        case 0x0805029Au: goto L_0805029A;
        case 0x0805029Cu: goto L_0805029C;
        case 0x0805029Eu: goto L_0805029E;
        case 0x080502A0u: goto L_080502A0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050290u);
    /* 08050290  08050290 T ldr r2,[r15,#0x20] */
    {
    g_cpu.R[15] = 0x08050290u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050290 = 1u;
    _cyc_08050290 = 2u;
    uint32_t _base_08050290 = 0x08050294u & ~3u;
    uint32_t _off_08050290;
    _off_08050290 = 0x00000020u;
    uint32_t _ea_08050290 = _base_08050290 + _off_08050290;
    uint32_t _post_08050290 = _base_08050290 + _off_08050290;
    _cyc_08050290 += runtime_mem_cycles(_ea_08050290, 4u, 0u);
    uint32_t _v_08050290;
    { uint32_t _w = bus_read_u32(_ea_08050290 & ~3u); uint32_t _rot = (_ea_08050290 & 3u) * 8u; _v_08050290 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08050290;
    g_cpu.R[15] = 0x08050292u;
    runtime_tick(_cyc_08050290);
    }
L_08050292:
    /* 08050292  08050292 T ldrb r0,[r2,#0xa] */
    {
    g_cpu.R[15] = 0x08050292u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050292 = 1u;
    _cyc_08050292 = 2u;
    uint32_t _base_08050292 = g_cpu.R[2];
    uint32_t _off_08050292;
    _off_08050292 = 0x0000000Au;
    uint32_t _ea_08050292 = _base_08050292 + _off_08050292;
    uint32_t _post_08050292 = _base_08050292 + _off_08050292;
    _cyc_08050292 += runtime_mem_cycles(_ea_08050292, 1u, 0u);
    uint32_t _v_08050292;
    _v_08050292 = bus_read_u8(_ea_08050292);
    g_cpu.R[0] = _v_08050292;
    g_cpu.R[15] = 0x08050294u;
    runtime_tick(_cyc_08050292);
    }
L_08050294:
    /* 08050294  08050294 T ldr r1,[r15,#0x24] */
    {
    g_cpu.R[15] = 0x08050294u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050294 = 1u;
    _cyc_08050294 = 2u;
    uint32_t _base_08050294 = 0x08050298u & ~3u;
    uint32_t _off_08050294;
    _off_08050294 = 0x00000024u;
    uint32_t _ea_08050294 = _base_08050294 + _off_08050294;
    uint32_t _post_08050294 = _base_08050294 + _off_08050294;
    _cyc_08050294 += runtime_mem_cycles(_ea_08050294, 4u, 0u);
    uint32_t _v_08050294;
    { uint32_t _w = bus_read_u32(_ea_08050294 & ~3u); uint32_t _rot = (_ea_08050294 & 3u) * 8u; _v_08050294 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050294;
    g_cpu.R[15] = 0x08050296u;
    runtime_tick(_cyc_08050294);
    }
L_08050296:
    /* 08050296  08050296 T strb r0,[r1,#0xa] */
    {
    g_cpu.R[15] = 0x08050296u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050296 = 1u;
    _cyc_08050296 = 1u;
    uint32_t _base_08050296 = g_cpu.R[1];
    uint32_t _off_08050296;
    _off_08050296 = 0x0000000Au;
    uint32_t _ea_08050296 = _base_08050296 + _off_08050296;
    uint32_t _post_08050296 = _base_08050296 + _off_08050296;
    _cyc_08050296 += runtime_mem_cycles(_ea_08050296, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050296u, _ea_08050296, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050296, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050298u;
    runtime_tick(_cyc_08050296);
    }
L_08050298:
    /* 08050298  08050298 T ldrb r0,[r2] */
    {
    g_cpu.R[15] = 0x08050298u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050298 = 1u;
    _cyc_08050298 = 2u;
    uint32_t _base_08050298 = g_cpu.R[2];
    uint32_t _off_08050298;
    _off_08050298 = 0x00000000u;
    uint32_t _ea_08050298 = _base_08050298 + _off_08050298;
    uint32_t _post_08050298 = _base_08050298 + _off_08050298;
    _cyc_08050298 += runtime_mem_cycles(_ea_08050298, 1u, 0u);
    uint32_t _v_08050298;
    _v_08050298 = bus_read_u8(_ea_08050298);
    g_cpu.R[0] = _v_08050298;
    g_cpu.R[15] = 0x0805029Au;
    runtime_tick(_cyc_08050298);
    }
L_0805029A:
    /* 0805029A  0805029a T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x0805029Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805029A = 1u;
    _cyc_0805029A = 1u;
    uint32_t _base_0805029A = g_cpu.R[1];
    uint32_t _off_0805029A;
    _off_0805029A = 0x00000000u;
    uint32_t _ea_0805029A = _base_0805029A + _off_0805029A;
    uint32_t _post_0805029A = _base_0805029A + _off_0805029A;
    _cyc_0805029A += runtime_mem_cycles(_ea_0805029A, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x0805029Au, _ea_0805029A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_0805029A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x0805029Cu;
    runtime_tick(_cyc_0805029A);
    }
L_0805029C:
    /* 0805029C  0805029c T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x0805029Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805029C = 1u;
    _cyc_0805029C = 1u;
    uint32_t _r_0805029C;
    _r_0805029C = 0x00000000u;
    arm_set_nzc_logic(_r_0805029C, cpsr_c());
    g_cpu.R[0] = _r_0805029C;
    g_cpu.R[15] = 0x0805029Eu;
    runtime_tick(_cyc_0805029C);
    }
L_0805029E:
    /* 0805029E  0805029e T bl.hi 0x0803d2a2 */
    {
    g_cpu.R[15] = 0x0805029Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805029E = 1u;
    _cyc_0805029E = 1u;
    g_cpu.R[14] = 0x0803D2A2u;
    g_cpu.R[15] = 0x080502A0u;
    runtime_tick(_cyc_0805029E);
    }
L_080502A0:
    /* 080502A0  080502a0 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x080502A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080502A0 = 1u;
    _cyc_080502A0 = 3u;
    uint32_t _blt_080502A0 = (g_cpu.R[14] + 0x00000512u) & ~1u;
    g_cpu.R[14] = 0x080502A3u;
    g_cpu.R[15] = _blt_080502A0;
    runtime_call_push_return(0x080502A2u);
    runtime_tick(_cyc_080502A0);
    _cyc_080502A0 = 0u;
    runtime_dispatch(_blt_080502A0);
    if (g_cpu.R[15] != 0x080502A2u) { runtime_call_cancel_return(0x080502A2u); return; }
    g_cpu.R[15] = 0x080502A2u;
    runtime_tick(_cyc_080502A0);
    }
    /* fall-through to 0x080502A2 */
    g_cpu.R[15] = 0x080502A2u;
    runtime_dispatch(0x080502A2u);
    return;
}

/* 0x08050CE0  mode=thumb  end=0x08050CEE  branches=1 */
void gf_autojt_08050C6C_03(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050CE2u: goto L_08050CE2;
        case 0x08050CE4u: goto L_08050CE4;
        case 0x08050CE6u: goto L_08050CE6;
        case 0x08050CE8u: goto L_08050CE8;
        case 0x08050CEAu: goto L_08050CEA;
        case 0x08050CECu: goto L_08050CEC;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050CE0u);
    /* 08050CE0  08050ce0 T ldr r0,[r15,#0xc] */
    {
    g_cpu.R[15] = 0x08050CE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CE0 = 1u;
    _cyc_08050CE0 = 2u;
    uint32_t _base_08050CE0 = 0x08050CE4u & ~3u;
    uint32_t _off_08050CE0;
    _off_08050CE0 = 0x0000000Cu;
    uint32_t _ea_08050CE0 = _base_08050CE0 + _off_08050CE0;
    uint32_t _post_08050CE0 = _base_08050CE0 + _off_08050CE0;
    _cyc_08050CE0 += runtime_mem_cycles(_ea_08050CE0, 4u, 0u);
    uint32_t _v_08050CE0;
    { uint32_t _w = bus_read_u32(_ea_08050CE0 & ~3u); uint32_t _rot = (_ea_08050CE0 & 3u) * 8u; _v_08050CE0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050CE0;
    g_cpu.R[15] = 0x08050CE2u;
    runtime_tick(_cyc_08050CE0);
    }
L_08050CE2:
    /* 08050CE2  08050ce2 T movs r1,#0x8d */
    {
    g_cpu.R[15] = 0x08050CE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CE2 = 1u;
    _cyc_08050CE2 = 1u;
    uint32_t _r_08050CE2;
    _r_08050CE2 = 0x0000008Du;
    arm_set_nzc_logic(_r_08050CE2, cpsr_c());
    g_cpu.R[1] = _r_08050CE2;
    g_cpu.R[15] = 0x08050CE4u;
    runtime_tick(_cyc_08050CE2);
    }
L_08050CE4:
    /* 08050CE4  08050ce4 T movs r1,r1,lsl #1 */
    {
    g_cpu.R[15] = 0x08050CE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CE4 = 1u;
    _cyc_08050CE4 = 1u;
    uint32_t _rm_08050CE4 = g_cpu.R[1];
    uint32_t _op2_08050CE4;
    uint32_t _co_08050CE4;
    _op2_08050CE4 = _rm_08050CE4 << 1;
    _co_08050CE4 = (_rm_08050CE4 >> 31) & 1u;
    uint32_t _r_08050CE4;
    _r_08050CE4 = _op2_08050CE4;
    arm_set_nzc_logic(_r_08050CE4, _co_08050CE4);
    g_cpu.R[1] = _r_08050CE4;
    g_cpu.R[15] = 0x08050CE6u;
    runtime_tick(_cyc_08050CE4);
    }
L_08050CE6:
    /* 08050CE6  08050ce6 T adds r3,r0,r1 */
    {
    g_cpu.R[15] = 0x08050CE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CE6 = 1u;
    _cyc_08050CE6 = 1u;
    uint32_t _rm_08050CE6 = g_cpu.R[1];
    uint32_t _op2_08050CE6;
    uint32_t _co_08050CE6;
    _op2_08050CE6 = _rm_08050CE6;
    _co_08050CE6 = cpsr_c();
    uint32_t _rn_08050CE6 = g_cpu.R[0];
    uint32_t _r_08050CE6;
    _r_08050CE6 = _rn_08050CE6 + _op2_08050CE6;
    arm_set_nzcv_add(_rn_08050CE6, _op2_08050CE6, _r_08050CE6);
    g_cpu.R[3] = _r_08050CE6;
    g_cpu.R[15] = 0x08050CE8u;
    runtime_tick(_cyc_08050CE6);
    }
L_08050CE8:
    /* 08050CE8  08050ce8 T movs r2,#0x0 */
    {
    g_cpu.R[15] = 0x08050CE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CE8 = 1u;
    _cyc_08050CE8 = 1u;
    uint32_t _r_08050CE8;
    _r_08050CE8 = 0x00000000u;
    arm_set_nzc_logic(_r_08050CE8, cpsr_c());
    g_cpu.R[2] = _r_08050CE8;
    g_cpu.R[15] = 0x08050CEAu;
    runtime_tick(_cyc_08050CE8);
    }
L_08050CEA:
    /* 08050CEA  08050cea T movs r1,#0xd */
    {
    g_cpu.R[15] = 0x08050CEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CEA = 1u;
    _cyc_08050CEA = 1u;
    uint32_t _r_08050CEA;
    _r_08050CEA = 0x0000000Du;
    arm_set_nzc_logic(_r_08050CEA, cpsr_c());
    g_cpu.R[1] = _r_08050CEA;
    g_cpu.R[15] = 0x08050CECu;
    runtime_tick(_cyc_08050CEA);
    }
L_08050CEC:
    /* 08050CEC  08050cec T b 0x08050d58 */
    {
    g_cpu.R[15] = 0x08050CECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CEC = 1u;
    _cyc_08050CEC = 3u;
    g_cpu.R[15] = 0x08050D58u;
    runtime_tick(_cyc_08050CEC);
    gf_race_08050d58();
    return;
    g_cpu.R[15] = 0x08050CEEu;
    runtime_tick(_cyc_08050CEC);
    }
    /* fall-through to 0x08050CEE */
    g_cpu.R[15] = 0x08050CEEu;
    runtime_dispatch(0x08050CEEu);
    return;
}

/* 0x08050D9A  mode=thumb  end=0x08050DAA  branches=33  indirect */
void gf_tfunc_08050D9A(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D9Cu: goto L_08050D9C;
        case 0x08050D9Eu: goto L_08050D9E;
        case 0x08050DA0u: goto L_08050DA0;
        case 0x08050DA2u: goto L_08050DA2;
        case 0x08050DA4u: goto L_08050DA4;
        case 0x08050DA6u: goto L_08050DA6;
        case 0x08050DA8u: goto L_08050DA8;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D9Au);
L_08050D9A:
    /* 08050D9A  08050d9a T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050D9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D9A = 1u;
    _cyc_08050D9A = 2u;
    uint32_t _base_08050D9A = g_cpu.R[1];
    uint32_t _off_08050D9A;
    _off_08050D9A = 0x00000000u;
    uint32_t _ea_08050D9A = _base_08050D9A + _off_08050D9A;
    uint32_t _post_08050D9A = _base_08050D9A + _off_08050D9A;
    _cyc_08050D9A += runtime_mem_cycles(_ea_08050D9A, 4u, 0u);
    uint32_t _v_08050D9A;
    { uint32_t _w = bus_read_u32(_ea_08050D9A & ~3u); uint32_t _rot = (_ea_08050D9A & 3u) * 8u; _v_08050D9A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050D9A;
    g_cpu.R[15] = 0x08050D9Cu;
    runtime_tick(_cyc_08050D9A);
    }
L_08050D9C:
    /* 08050D9C  08050d9c T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050D9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D9C = 1u;
    _cyc_08050D9C = 1u;
    uint32_t _base_08050D9C = g_cpu.R[2];
    uint32_t _off_08050D9C;
    _off_08050D9C = 0x00000000u;
    uint32_t _ea_08050D9C = _base_08050D9C + _off_08050D9C;
    uint32_t _post_08050D9C = _base_08050D9C + _off_08050D9C;
    _cyc_08050D9C += runtime_mem_cycles(_ea_08050D9C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050D9Cu, _ea_08050D9C & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050D9C & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050D9Eu;
    runtime_tick(_cyc_08050D9C);
    }
L_08050D9E:
    /* 08050D9E  08050d9e T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050D9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D9E = 1u;
    _cyc_08050D9E = 2u;
    uint32_t _base_08050D9E = g_cpu.R[1];
    uint32_t _off_08050D9E;
    _off_08050D9E = 0x00000004u;
    uint32_t _ea_08050D9E = _base_08050D9E + _off_08050D9E;
    uint32_t _post_08050D9E = _base_08050D9E + _off_08050D9E;
    _cyc_08050D9E += runtime_mem_cycles(_ea_08050D9E, 4u, 0u);
    uint32_t _v_08050D9E;
    { uint32_t _w = bus_read_u32(_ea_08050D9E & ~3u); uint32_t _rot = (_ea_08050D9E & 3u) * 8u; _v_08050D9E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050D9E;
    g_cpu.R[15] = 0x08050DA0u;
    runtime_tick(_cyc_08050D9E);
    }
L_08050DA0:
    /* 08050DA0  08050da0 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050DA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DA0 = 1u;
    _cyc_08050DA0 = 1u;
    uint32_t _base_08050DA0 = g_cpu.R[2];
    uint32_t _off_08050DA0;
    _off_08050DA0 = 0x00000004u;
    uint32_t _ea_08050DA0 = _base_08050DA0 + _off_08050DA0;
    uint32_t _post_08050DA0 = _base_08050DA0 + _off_08050DA0;
    _cyc_08050DA0 += runtime_mem_cycles(_ea_08050DA0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050DA0u, _ea_08050DA0 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050DA0 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050DA2u;
    runtime_tick(_cyc_08050DA0);
    }
L_08050DA2:
    /* 08050DA2  08050da2 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050DA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DA2 = 1u;
    _cyc_08050DA2 = 1u;
    uint32_t _rn_08050DA2 = g_cpu.R[2];
    uint32_t _r_08050DA2;
    _r_08050DA2 = _rn_08050DA2 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050DA2, 0x00000008u, _r_08050DA2);
    g_cpu.R[2] = _r_08050DA2;
    g_cpu.R[15] = 0x08050DA4u;
    runtime_tick(_cyc_08050DA2);
    }
L_08050DA4:
    /* 08050DA4  08050da4 T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050DA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DA4 = 1u;
    _cyc_08050DA4 = 2u;
    uint32_t _base_08050DA4 = g_cpu.R[1];
    uint32_t _off_08050DA4;
    _off_08050DA4 = 0x00000008u;
    uint32_t _ea_08050DA4 = _base_08050DA4 + _off_08050DA4;
    uint32_t _post_08050DA4 = _base_08050DA4 + _off_08050DA4;
    _cyc_08050DA4 += runtime_mem_cycles(_ea_08050DA4, 4u, 0u);
    uint32_t _v_08050DA4;
    { uint32_t _w = bus_read_u32(_ea_08050DA4 & ~3u); uint32_t _rot = (_ea_08050DA4 & 3u) * 8u; _v_08050DA4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050DA4;
    g_cpu.R[15] = 0x08050DA6u;
    runtime_tick(_cyc_08050DA4);
    }
L_08050DA6:
    /* 08050DA6  08050da6 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050DA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DA6 = 1u;
    _cyc_08050DA6 = 1u;
    uint32_t _rm_08050DA6 = g_cpu.R[4];
    uint32_t _op2_08050DA6;
    uint32_t _co_08050DA6;
    _op2_08050DA6 = _rm_08050DA6;
    _co_08050DA6 = cpsr_c();
    uint32_t _rn_08050DA6 = g_cpu.R[1];
    uint32_t _r_08050DA6;
    _r_08050DA6 = _rn_08050DA6 - _op2_08050DA6;
    arm_set_nzcv_sub(_rn_08050DA6, _op2_08050DA6, _r_08050DA6);
    g_cpu.R[15] = 0x08050DA8u;
    runtime_tick(_cyc_08050DA6);
    }
L_08050DA8:
    /* 08050DA8  08050da8 T bne 0x08050d9a */
    {
    g_cpu.R[15] = 0x08050DA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050DA8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050DA8 = 3u;
        g_cpu.R[15] = 0x08050D9Au;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050DA8u, 0x08050D9Au, 0u, 0u);
        runtime_tick(_cyc_08050DA8);
        goto L_08050D9A;
    }
    g_cpu.R[15] = 0x08050DAAu;
    runtime_tick(_cyc_08050DA8);
    }
    /* fall-through to 0x08050DAA */
    g_cpu.R[15] = 0x08050DAAu;
    runtime_dispatch(0x08050DAAu);
    return;
}

/* 0x08050E06  mode=thumb  end=0x08050E16  branches=25  indirect */
void gf_tfunc_08050E06(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E08u: goto L_08050E08;
        case 0x08050E0Au: goto L_08050E0A;
        case 0x08050E0Cu: goto L_08050E0C;
        case 0x08050E0Eu: goto L_08050E0E;
        case 0x08050E10u: goto L_08050E10;
        case 0x08050E12u: goto L_08050E12;
        case 0x08050E14u: goto L_08050E14;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E06u);
L_08050E06:
    /* 08050E06  08050e06 T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050E06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E06 = 1u;
    _cyc_08050E06 = 2u;
    uint32_t _base_08050E06 = g_cpu.R[1];
    uint32_t _off_08050E06;
    _off_08050E06 = 0x00000000u;
    uint32_t _ea_08050E06 = _base_08050E06 + _off_08050E06;
    uint32_t _post_08050E06 = _base_08050E06 + _off_08050E06;
    _cyc_08050E06 += runtime_mem_cycles(_ea_08050E06, 4u, 0u);
    uint32_t _v_08050E06;
    { uint32_t _w = bus_read_u32(_ea_08050E06 & ~3u); uint32_t _rot = (_ea_08050E06 & 3u) * 8u; _v_08050E06 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E06;
    g_cpu.R[15] = 0x08050E08u;
    runtime_tick(_cyc_08050E06);
    }
L_08050E08:
    /* 08050E08  08050e08 T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050E08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E08 = 1u;
    _cyc_08050E08 = 1u;
    uint32_t _base_08050E08 = g_cpu.R[2];
    uint32_t _off_08050E08;
    _off_08050E08 = 0x00000000u;
    uint32_t _ea_08050E08 = _base_08050E08 + _off_08050E08;
    uint32_t _post_08050E08 = _base_08050E08 + _off_08050E08;
    _cyc_08050E08 += runtime_mem_cycles(_ea_08050E08, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E08u, _ea_08050E08 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E08 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E0Au;
    runtime_tick(_cyc_08050E08);
    }
L_08050E0A:
    /* 08050E0A  08050e0a T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050E0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E0A = 1u;
    _cyc_08050E0A = 2u;
    uint32_t _base_08050E0A = g_cpu.R[1];
    uint32_t _off_08050E0A;
    _off_08050E0A = 0x00000004u;
    uint32_t _ea_08050E0A = _base_08050E0A + _off_08050E0A;
    uint32_t _post_08050E0A = _base_08050E0A + _off_08050E0A;
    _cyc_08050E0A += runtime_mem_cycles(_ea_08050E0A, 4u, 0u);
    uint32_t _v_08050E0A;
    { uint32_t _w = bus_read_u32(_ea_08050E0A & ~3u); uint32_t _rot = (_ea_08050E0A & 3u) * 8u; _v_08050E0A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E0A;
    g_cpu.R[15] = 0x08050E0Cu;
    runtime_tick(_cyc_08050E0A);
    }
L_08050E0C:
    /* 08050E0C  08050e0c T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050E0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E0C = 1u;
    _cyc_08050E0C = 1u;
    uint32_t _base_08050E0C = g_cpu.R[2];
    uint32_t _off_08050E0C;
    _off_08050E0C = 0x00000004u;
    uint32_t _ea_08050E0C = _base_08050E0C + _off_08050E0C;
    uint32_t _post_08050E0C = _base_08050E0C + _off_08050E0C;
    _cyc_08050E0C += runtime_mem_cycles(_ea_08050E0C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E0Cu, _ea_08050E0C & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E0C & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E0Eu;
    runtime_tick(_cyc_08050E0C);
    }
L_08050E0E:
    /* 08050E0E  08050e0e T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050E0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E0E = 1u;
    _cyc_08050E0E = 1u;
    uint32_t _rn_08050E0E = g_cpu.R[2];
    uint32_t _r_08050E0E;
    _r_08050E0E = _rn_08050E0E + 0x00000008u;
    arm_set_nzcv_add(_rn_08050E0E, 0x00000008u, _r_08050E0E);
    g_cpu.R[2] = _r_08050E0E;
    g_cpu.R[15] = 0x08050E10u;
    runtime_tick(_cyc_08050E0E);
    }
L_08050E10:
    /* 08050E10  08050e10 T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050E10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E10 = 1u;
    _cyc_08050E10 = 2u;
    uint32_t _base_08050E10 = g_cpu.R[1];
    uint32_t _off_08050E10;
    _off_08050E10 = 0x00000008u;
    uint32_t _ea_08050E10 = _base_08050E10 + _off_08050E10;
    uint32_t _post_08050E10 = _base_08050E10 + _off_08050E10;
    _cyc_08050E10 += runtime_mem_cycles(_ea_08050E10, 4u, 0u);
    uint32_t _v_08050E10;
    { uint32_t _w = bus_read_u32(_ea_08050E10 & ~3u); uint32_t _rot = (_ea_08050E10 & 3u) * 8u; _v_08050E10 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E10;
    g_cpu.R[15] = 0x08050E12u;
    runtime_tick(_cyc_08050E10);
    }
L_08050E12:
    /* 08050E12  08050e12 T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050E12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E12 = 1u;
    _cyc_08050E12 = 1u;
    uint32_t _rm_08050E12 = g_cpu.R[5];
    uint32_t _op2_08050E12;
    uint32_t _co_08050E12;
    _op2_08050E12 = _rm_08050E12;
    _co_08050E12 = cpsr_c();
    uint32_t _rn_08050E12 = g_cpu.R[1];
    uint32_t _r_08050E12;
    _r_08050E12 = _rn_08050E12 - _op2_08050E12;
    arm_set_nzcv_sub(_rn_08050E12, _op2_08050E12, _r_08050E12);
    g_cpu.R[15] = 0x08050E14u;
    runtime_tick(_cyc_08050E12);
    }
L_08050E14:
    /* 08050E14  08050e14 T bne 0x08050e06 */
    {
    g_cpu.R[15] = 0x08050E14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E14 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050E14 = 3u;
        g_cpu.R[15] = 0x08050E06u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050E14u, 0x08050E06u, 0u, 0u);
        runtime_tick(_cyc_08050E14);
        goto L_08050E06;
    }
    g_cpu.R[15] = 0x08050E16u;
    runtime_tick(_cyc_08050E14);
    }
    /* fall-through to 0x08050E16 */
    g_cpu.R[15] = 0x08050E16u;
    runtime_dispatch(0x08050E16u);
    return;
}

/* 0x08050E64  mode=thumb  end=0x08050E6E  branches=18  indirect */
void gf_tfunc_08050E64(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E66u: goto L_08050E66;
        case 0x08050E68u: goto L_08050E68;
        case 0x08050E6Au: goto L_08050E6A;
        case 0x08050E6Cu: goto L_08050E6C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E64u);
    /* 08050E64  08050e64 T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050E64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E64 = 1u;
    _cyc_08050E64 = 1u;
    uint32_t _rn_08050E64 = g_cpu.R[3];
    uint32_t _r_08050E64;
    _r_08050E64 = _rn_08050E64 + 0x00000010u;
    arm_set_nzcv_add(_rn_08050E64, 0x00000010u, _r_08050E64);
    g_cpu.R[3] = _r_08050E64;
    g_cpu.R[15] = 0x08050E66u;
    runtime_tick(_cyc_08050E64);
    }
L_08050E66:
    /* 08050E66  08050e66 T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050E66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E66 = 1u;
    _cyc_08050E66 = 1u;
    uint32_t _rn_08050E66 = g_cpu.R[4];
    uint32_t _r_08050E66;
    _r_08050E66 = _rn_08050E66 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050E66, 0x00000000u, _r_08050E66);
    g_cpu.R[5] = _r_08050E66;
    g_cpu.R[15] = 0x08050E68u;
    runtime_tick(_cyc_08050E66);
    }
L_08050E68:
    /* 08050E68  08050e68 T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050E68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E68 = 1u;
    _cyc_08050E68 = 2u;
    uint32_t _base_08050E68 = g_cpu.R[3];
    uint32_t _off_08050E68;
    _off_08050E68 = 0x00000008u;
    uint32_t _ea_08050E68 = _base_08050E68 + _off_08050E68;
    uint32_t _post_08050E68 = _base_08050E68 + _off_08050E68;
    _cyc_08050E68 += runtime_mem_cycles(_ea_08050E68, 4u, 0u);
    uint32_t _v_08050E68;
    { uint32_t _w = bus_read_u32(_ea_08050E68 & ~3u); uint32_t _rot = (_ea_08050E68 & 3u) * 8u; _v_08050E68 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E68;
    g_cpu.R[15] = 0x08050E6Au;
    runtime_tick(_cyc_08050E68);
    }
L_08050E6A:
    /* 08050E6A  08050e6a T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050E6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E6A = 1u;
    _cyc_08050E6A = 1u;
    uint32_t _rm_08050E6A = g_cpu.R[4];
    uint32_t _op2_08050E6A;
    uint32_t _co_08050E6A;
    _op2_08050E6A = _rm_08050E6A;
    _co_08050E6A = cpsr_c();
    uint32_t _rn_08050E6A = g_cpu.R[1];
    uint32_t _r_08050E6A;
    _r_08050E6A = _rn_08050E6A - _op2_08050E6A;
    arm_set_nzcv_sub(_rn_08050E6A, _op2_08050E6A, _r_08050E6A);
    g_cpu.R[15] = 0x08050E6Cu;
    runtime_tick(_cyc_08050E6A);
    }
L_08050E6C:
    /* 08050E6C  08050e6c T beq 0x08050e7e */
    {
    g_cpu.R[15] = 0x08050E6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E6C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050E6C = 3u;
        g_cpu.R[15] = 0x08050E7Eu;
        runtime_tick(_cyc_08050E6C);
        gf_tfunc_08050E7E();
        return;
    }
    g_cpu.R[15] = 0x08050E6Eu;
    runtime_tick(_cyc_08050E6C);
    }
    /* fall-through to 0x08050E6E */
    g_cpu.R[15] = 0x08050E6Eu;
    runtime_dispatch(0x08050E6Eu);
    return;
}

/* 0x08050F20  mode=thumb  end=0x08050F30  branches=3  indirect */
void gf_tfunc_08050F20(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050F22u: goto L_08050F22;
        case 0x08050F24u: goto L_08050F24;
        case 0x08050F26u: goto L_08050F26;
        case 0x08050F28u: goto L_08050F28;
        case 0x08050F2Au: goto L_08050F2A;
        case 0x08050F2Cu: goto L_08050F2C;
        case 0x08050F2Eu: goto L_08050F2E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050F20u);
L_08050F20:
    /* 08050F20  08050f20 T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050F20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F20 = 1u;
    _cyc_08050F20 = 2u;
    uint32_t _base_08050F20 = g_cpu.R[1];
    uint32_t _off_08050F20;
    _off_08050F20 = 0x00000000u;
    uint32_t _ea_08050F20 = _base_08050F20 + _off_08050F20;
    uint32_t _post_08050F20 = _base_08050F20 + _off_08050F20;
    _cyc_08050F20 += runtime_mem_cycles(_ea_08050F20, 4u, 0u);
    uint32_t _v_08050F20;
    { uint32_t _w = bus_read_u32(_ea_08050F20 & ~3u); uint32_t _rot = (_ea_08050F20 & 3u) * 8u; _v_08050F20 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050F20;
    g_cpu.R[15] = 0x08050F22u;
    runtime_tick(_cyc_08050F20);
    }
L_08050F22:
    /* 08050F22  08050f22 T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050F22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F22 = 1u;
    _cyc_08050F22 = 1u;
    uint32_t _base_08050F22 = g_cpu.R[2];
    uint32_t _off_08050F22;
    _off_08050F22 = 0x00000000u;
    uint32_t _ea_08050F22 = _base_08050F22 + _off_08050F22;
    uint32_t _post_08050F22 = _base_08050F22 + _off_08050F22;
    _cyc_08050F22 += runtime_mem_cycles(_ea_08050F22, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050F22u, _ea_08050F22 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050F22 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050F24u;
    runtime_tick(_cyc_08050F22);
    }
L_08050F24:
    /* 08050F24  08050f24 T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050F24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F24 = 1u;
    _cyc_08050F24 = 2u;
    uint32_t _base_08050F24 = g_cpu.R[1];
    uint32_t _off_08050F24;
    _off_08050F24 = 0x00000004u;
    uint32_t _ea_08050F24 = _base_08050F24 + _off_08050F24;
    uint32_t _post_08050F24 = _base_08050F24 + _off_08050F24;
    _cyc_08050F24 += runtime_mem_cycles(_ea_08050F24, 4u, 0u);
    uint32_t _v_08050F24;
    { uint32_t _w = bus_read_u32(_ea_08050F24 & ~3u); uint32_t _rot = (_ea_08050F24 & 3u) * 8u; _v_08050F24 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050F24;
    g_cpu.R[15] = 0x08050F26u;
    runtime_tick(_cyc_08050F24);
    }
L_08050F26:
    /* 08050F26  08050f26 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050F26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F26 = 1u;
    _cyc_08050F26 = 1u;
    uint32_t _base_08050F26 = g_cpu.R[2];
    uint32_t _off_08050F26;
    _off_08050F26 = 0x00000004u;
    uint32_t _ea_08050F26 = _base_08050F26 + _off_08050F26;
    uint32_t _post_08050F26 = _base_08050F26 + _off_08050F26;
    _cyc_08050F26 += runtime_mem_cycles(_ea_08050F26, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050F26u, _ea_08050F26 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050F26 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050F28u;
    runtime_tick(_cyc_08050F26);
    }
L_08050F28:
    /* 08050F28  08050f28 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050F28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F28 = 1u;
    _cyc_08050F28 = 1u;
    uint32_t _rn_08050F28 = g_cpu.R[2];
    uint32_t _r_08050F28;
    _r_08050F28 = _rn_08050F28 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050F28, 0x00000008u, _r_08050F28);
    g_cpu.R[2] = _r_08050F28;
    g_cpu.R[15] = 0x08050F2Au;
    runtime_tick(_cyc_08050F28);
    }
L_08050F2A:
    /* 08050F2A  08050f2a T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050F2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F2A = 1u;
    _cyc_08050F2A = 2u;
    uint32_t _base_08050F2A = g_cpu.R[1];
    uint32_t _off_08050F2A;
    _off_08050F2A = 0x00000008u;
    uint32_t _ea_08050F2A = _base_08050F2A + _off_08050F2A;
    uint32_t _post_08050F2A = _base_08050F2A + _off_08050F2A;
    _cyc_08050F2A += runtime_mem_cycles(_ea_08050F2A, 4u, 0u);
    uint32_t _v_08050F2A;
    { uint32_t _w = bus_read_u32(_ea_08050F2A & ~3u); uint32_t _rot = (_ea_08050F2A & 3u) * 8u; _v_08050F2A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050F2A;
    g_cpu.R[15] = 0x08050F2Cu;
    runtime_tick(_cyc_08050F2A);
    }
L_08050F2C:
    /* 08050F2C  08050f2c T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050F2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F2C = 1u;
    _cyc_08050F2C = 1u;
    uint32_t _rm_08050F2C = g_cpu.R[4];
    uint32_t _op2_08050F2C;
    uint32_t _co_08050F2C;
    _op2_08050F2C = _rm_08050F2C;
    _co_08050F2C = cpsr_c();
    uint32_t _rn_08050F2C = g_cpu.R[1];
    uint32_t _r_08050F2C;
    _r_08050F2C = _rn_08050F2C - _op2_08050F2C;
    arm_set_nzcv_sub(_rn_08050F2C, _op2_08050F2C, _r_08050F2C);
    g_cpu.R[15] = 0x08050F2Eu;
    runtime_tick(_cyc_08050F2C);
    }
L_08050F2E:
    /* 08050F2E  08050f2e T bne 0x08050f20 */
    {
    g_cpu.R[15] = 0x08050F2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F2E = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050F2E = 3u;
        g_cpu.R[15] = 0x08050F20u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050F2Eu, 0x08050F20u, 0u, 0u);
        runtime_tick(_cyc_08050F2E);
        goto L_08050F20;
    }
    g_cpu.R[15] = 0x08050F30u;
    runtime_tick(_cyc_08050F2E);
    }
    /* fall-through to 0x08050F30 */
    g_cpu.R[15] = 0x08050F30u;
    runtime_dispatch(0x08050F30u);
    return;
}

/* 0x08050F30  mode=thumb  end=0x08050F38  branches=2  indirect */
void gf_tfunc_08050F30(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050F32u: goto L_08050F32;
        case 0x08050F34u: goto L_08050F34;
        case 0x08050F36u: goto L_08050F36;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050F30u);
    /* 08050F30  08050f30 T adds r2,r6,#0x0 */
    {
    g_cpu.R[15] = 0x08050F30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F30 = 1u;
    _cyc_08050F30 = 1u;
    uint32_t _rn_08050F30 = g_cpu.R[6];
    uint32_t _r_08050F30;
    _r_08050F30 = _rn_08050F30 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050F30, 0x00000000u, _r_08050F30);
    g_cpu.R[2] = _r_08050F30;
    g_cpu.R[15] = 0x08050F32u;
    runtime_tick(_cyc_08050F30);
    }
L_08050F32:
    /* 08050F32  08050f32 T adds r0,r2,#0x0 */
    {
    g_cpu.R[15] = 0x08050F32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F32 = 1u;
    _cyc_08050F32 = 1u;
    uint32_t _rn_08050F32 = g_cpu.R[2];
    uint32_t _r_08050F32;
    _r_08050F32 = _rn_08050F32 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050F32, 0x00000000u, _r_08050F32);
    g_cpu.R[0] = _r_08050F32;
    g_cpu.R[15] = 0x08050F34u;
    runtime_tick(_cyc_08050F32);
    }
L_08050F34:
    /* 08050F34  08050f34 T bl.hi 0x08058f38 */
    {
    g_cpu.R[15] = 0x08050F34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F34 = 1u;
    _cyc_08050F34 = 1u;
    g_cpu.R[14] = 0x08058F38u;
    g_cpu.R[15] = 0x08050F36u;
    runtime_tick(_cyc_08050F34);
    }
L_08050F36:
    /* 08050F36  08050f36 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08050F36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F36 = 1u;
    _cyc_08050F36 = 3u;
    uint32_t _blt_08050F36 = (g_cpu.R[14] + 0x0000073Cu) & ~1u;
    g_cpu.R[14] = 0x08050F39u;
    g_cpu.R[15] = _blt_08050F36;
    runtime_call_push_return(0x08050F38u);
    runtime_tick(_cyc_08050F36);
    _cyc_08050F36 = 0u;
    runtime_dispatch(_blt_08050F36);
    if (g_cpu.R[15] != 0x08050F38u) { runtime_call_cancel_return(0x08050F38u); return; }
    g_cpu.R[15] = 0x08050F38u;
    runtime_tick(_cyc_08050F36);
    }
    /* fall-through to 0x08050F38 */
    g_cpu.R[15] = 0x08050F38u;
    runtime_dispatch(0x08050F38u);
    return;
}

/* 0x08050F38  mode=thumb  end=0x08050F3E  branches=0  indirect */
void gf_tfunc_08050F38(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050F3Au: goto L_08050F3A;
        case 0x08050F3Cu: goto L_08050F3C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050F38u);
    /* 08050F38  08050f38 T ldm r13!,{r4,r5,r6,r7} */
    {
    g_cpu.R[15] = 0x08050F38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F38 = 1u;
    _cyc_08050F38 = 2u;
    uint32_t _b_08050F38 = g_cpu.R[13];
    uint32_t _a_08050F38 = _b_08050F38;
    uint32_t _fb_08050F38 = _b_08050F38 + 16u;
    _cyc_08050F38 += runtime_mem_cycles(_a_08050F38 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_08050F38 & ~3u);
    _a_08050F38 += 4u;
    _cyc_08050F38 += runtime_mem_cycles(_a_08050F38 & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_08050F38 & ~3u);
    _a_08050F38 += 4u;
    _cyc_08050F38 += runtime_mem_cycles(_a_08050F38 & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_08050F38 & ~3u);
    _a_08050F38 += 4u;
    _cyc_08050F38 += runtime_mem_cycles(_a_08050F38 & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_08050F38 & ~3u);
    _a_08050F38 += 4u;
    g_cpu.R[13] = _fb_08050F38;
    g_cpu.R[15] = 0x08050F3Au;
    runtime_tick(_cyc_08050F38);
    }
L_08050F3A:
    /* 08050F3A  08050f3a T ldm r13!,{r0} */
    {
    g_cpu.R[15] = 0x08050F3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F3A = 1u;
    _cyc_08050F3A = 2u;
    uint32_t _b_08050F3A = g_cpu.R[13];
    uint32_t _a_08050F3A = _b_08050F3A;
    uint32_t _fb_08050F3A = _b_08050F3A + 4u;
    _cyc_08050F3A += runtime_mem_cycles(_a_08050F3A & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_08050F3A & ~3u);
    _a_08050F3A += 4u;
    g_cpu.R[13] = _fb_08050F3A;
    g_cpu.R[15] = 0x08050F3Cu;
    runtime_tick(_cyc_08050F3A);
    }
L_08050F3C:
    /* 08050F3C  08050f3c T bx r0 */
    {
    g_cpu.R[15] = 0x08050F3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F3C = 1u;
    _cyc_08050F3C = 3u;
    uint32_t _bxt_08050F3C = g_cpu.R[0];
    g_cpu.R[15] = _bxt_08050F3C & ~1u;
    if (_bxt_08050F3C & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_08050F3C);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_08050F3C);
    return;
    g_cpu.R[15] = 0x08050F3Eu;
    runtime_tick(_cyc_08050F3C);
    }
    /* fall-through to 0x08050F3E */
    g_cpu.R[15] = 0x08050F3Eu;
    runtime_dispatch(0x08050F3Eu);
    return;
}

/* 0x080500DA  mode=thumb  end=0x080500FC  branches=14 */
void gf_tfunc_080500DA(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080500DCu: goto L_080500DC;
        case 0x080500DEu: goto L_080500DE;
        case 0x080500E0u: goto L_080500E0;
        case 0x080500E2u: goto L_080500E2;
        case 0x080500E4u: goto L_080500E4;
        case 0x080500E6u: goto L_080500E6;
        case 0x080500E8u: goto L_080500E8;
        case 0x080500EAu: goto L_080500EA;
        case 0x080500ECu: goto L_080500EC;
        case 0x080500EEu: goto L_080500EE;
        case 0x080500F0u: goto L_080500F0;
        case 0x080500F2u: goto L_080500F2;
        case 0x080500F4u: goto L_080500F4;
        case 0x080500F6u: goto L_080500F6;
        case 0x080500F8u: goto L_080500F8;
        case 0x080500FAu: goto L_080500FA;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080500DAu);
    /* 080500DA  080500da T mov r2,r8 */
    {
    g_cpu.R[15] = 0x080500DAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500DA = 1u;
    _cyc_080500DA = 1u;
    uint32_t _rm_080500DA = g_cpu.R[8];
    uint32_t _op2_080500DA;
    uint32_t _co_080500DA;
    _op2_080500DA = _rm_080500DA;
    _co_080500DA = cpsr_c();
    uint32_t _r_080500DA;
    _r_080500DA = _op2_080500DA;
    g_cpu.R[2] = _r_080500DA;
    g_cpu.R[15] = 0x080500DCu;
    runtime_tick(_cyc_080500DA);
    }
L_080500DC:
    /* 080500DC  080500dc T ldrb r1,[r2,#0x5] */
    {
    g_cpu.R[15] = 0x080500DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500DC = 1u;
    _cyc_080500DC = 2u;
    uint32_t _base_080500DC = g_cpu.R[2];
    uint32_t _off_080500DC;
    _off_080500DC = 0x00000005u;
    uint32_t _ea_080500DC = _base_080500DC + _off_080500DC;
    uint32_t _post_080500DC = _base_080500DC + _off_080500DC;
    _cyc_080500DC += runtime_mem_cycles(_ea_080500DC, 1u, 0u);
    uint32_t _v_080500DC;
    _v_080500DC = bus_read_u8(_ea_080500DC);
    g_cpu.R[1] = _v_080500DC;
    g_cpu.R[15] = 0x080500DEu;
    runtime_tick(_cyc_080500DC);
    }
L_080500DE:
    /* 080500DE  080500de T mov r0,r10 */
    {
    g_cpu.R[15] = 0x080500DEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500DE = 1u;
    _cyc_080500DE = 1u;
    uint32_t _rm_080500DE = g_cpu.R[10];
    uint32_t _op2_080500DE;
    uint32_t _co_080500DE;
    _op2_080500DE = _rm_080500DE;
    _co_080500DE = cpsr_c();
    uint32_t _r_080500DE;
    _r_080500DE = _op2_080500DE;
    g_cpu.R[0] = _r_080500DE;
    g_cpu.R[15] = 0x080500E0u;
    runtime_tick(_cyc_080500DE);
    }
L_080500E0:
    /* 080500E0  080500e0 T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x080500E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500E0 = 1u;
    _cyc_080500E0 = 1u;
    uint32_t _rm_080500E0 = g_cpu.R[1];
    uint32_t _op2_080500E0;
    uint32_t _co_080500E0;
    _op2_080500E0 = _rm_080500E0;
    _co_080500E0 = cpsr_c();
    uint32_t _rn_080500E0 = g_cpu.R[0];
    uint32_t _r_080500E0;
    _r_080500E0 = _rn_080500E0 & _op2_080500E0;
    arm_set_nzc_logic(_r_080500E0, _co_080500E0);
    g_cpu.R[0] = _r_080500E0;
    g_cpu.R[15] = 0x080500E2u;
    runtime_tick(_cyc_080500E0);
    }
L_080500E2:
    /* 080500E2  080500e2 T movs r1,#0x20 */
    {
    g_cpu.R[15] = 0x080500E2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500E2 = 1u;
    _cyc_080500E2 = 1u;
    uint32_t _r_080500E2;
    _r_080500E2 = 0x00000020u;
    arm_set_nzc_logic(_r_080500E2, cpsr_c());
    g_cpu.R[1] = _r_080500E2;
    g_cpu.R[15] = 0x080500E4u;
    runtime_tick(_cyc_080500E2);
    }
L_080500E4:
    /* 080500E4  080500e4 T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x080500E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500E4 = 1u;
    _cyc_080500E4 = 1u;
    uint32_t _rm_080500E4 = g_cpu.R[1];
    uint32_t _op2_080500E4;
    uint32_t _co_080500E4;
    _op2_080500E4 = _rm_080500E4;
    _co_080500E4 = cpsr_c();
    uint32_t _rn_080500E4 = g_cpu.R[0];
    uint32_t _r_080500E4;
    _r_080500E4 = _rn_080500E4 | _op2_080500E4;
    arm_set_nzc_logic(_r_080500E4, _co_080500E4);
    g_cpu.R[0] = _r_080500E4;
    g_cpu.R[15] = 0x080500E6u;
    runtime_tick(_cyc_080500E4);
    }
L_080500E6:
    /* 080500E6  080500e6 T strb r0,[r2,#0x5] */
    {
    g_cpu.R[15] = 0x080500E6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500E6 = 1u;
    _cyc_080500E6 = 1u;
    uint32_t _base_080500E6 = g_cpu.R[2];
    uint32_t _off_080500E6;
    _off_080500E6 = 0x00000005u;
    uint32_t _ea_080500E6 = _base_080500E6 + _off_080500E6;
    uint32_t _post_080500E6 = _base_080500E6 + _off_080500E6;
    _cyc_080500E6 += runtime_mem_cycles(_ea_080500E6, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080500E6u, _ea_080500E6, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080500E6, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080500E8u;
    runtime_tick(_cyc_080500E6);
    }
L_080500E8:
    /* 080500E8  080500e8 T ldrh r1,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x080500E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500E8 = 1u;
    _cyc_080500E8 = 2u;
    uint32_t _base_080500E8 = g_cpu.R[2];
    uint32_t _off_080500E8;
    _off_080500E8 = 0x00000002u;
    uint32_t _ea_080500E8 = _base_080500E8 + _off_080500E8;
    uint32_t _post_080500E8 = _base_080500E8 + _off_080500E8;
    _cyc_080500E8 += runtime_mem_cycles(_ea_080500E8, 2u, 0u);
    uint32_t _v_080500E8;
    { uint32_t _h = bus_read_u16(_ea_080500E8 & ~1u); if (_ea_080500E8 & 1u) _v_080500E8 = ((_h >> 8) | (_h << 24)); else _v_080500E8 = _h; }
    g_cpu.R[1] = _v_080500E8;
    g_cpu.R[15] = 0x080500EAu;
    runtime_tick(_cyc_080500E8);
    }
L_080500EA:
    /* 080500EA  080500ea T mov r0,r9 */
    {
    g_cpu.R[15] = 0x080500EAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500EA = 1u;
    _cyc_080500EA = 1u;
    uint32_t _rm_080500EA = g_cpu.R[9];
    uint32_t _op2_080500EA;
    uint32_t _co_080500EA;
    _op2_080500EA = _rm_080500EA;
    _co_080500EA = cpsr_c();
    uint32_t _r_080500EA;
    _r_080500EA = _op2_080500EA;
    g_cpu.R[0] = _r_080500EA;
    g_cpu.R[15] = 0x080500ECu;
    runtime_tick(_cyc_080500EA);
    }
L_080500EC:
    /* 080500EC  080500ec T ands r0,r0,r1 */
    {
    g_cpu.R[15] = 0x080500ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500EC = 1u;
    _cyc_080500EC = 1u;
    uint32_t _rm_080500EC = g_cpu.R[1];
    uint32_t _op2_080500EC;
    uint32_t _co_080500EC;
    _op2_080500EC = _rm_080500EC;
    _co_080500EC = cpsr_c();
    uint32_t _rn_080500EC = g_cpu.R[0];
    uint32_t _r_080500EC;
    _r_080500EC = _rn_080500EC & _op2_080500EC;
    arm_set_nzc_logic(_r_080500EC, _co_080500EC);
    g_cpu.R[0] = _r_080500EC;
    g_cpu.R[15] = 0x080500EEu;
    runtime_tick(_cyc_080500EC);
    }
L_080500EE:
    /* 080500EE  080500ee T movs r1,#0x4c */
    {
    g_cpu.R[15] = 0x080500EEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500EE = 1u;
    _cyc_080500EE = 1u;
    uint32_t _r_080500EE;
    _r_080500EE = 0x0000004Cu;
    arm_set_nzc_logic(_r_080500EE, cpsr_c());
    g_cpu.R[1] = _r_080500EE;
    g_cpu.R[15] = 0x080500F0u;
    runtime_tick(_cyc_080500EE);
    }
L_080500F0:
    /* 080500F0  080500f0 T orrs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x080500F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500F0 = 1u;
    _cyc_080500F0 = 1u;
    uint32_t _rm_080500F0 = g_cpu.R[1];
    uint32_t _op2_080500F0;
    uint32_t _co_080500F0;
    _op2_080500F0 = _rm_080500F0;
    _co_080500F0 = cpsr_c();
    uint32_t _rn_080500F0 = g_cpu.R[0];
    uint32_t _r_080500F0;
    _r_080500F0 = _rn_080500F0 | _op2_080500F0;
    arm_set_nzc_logic(_r_080500F0, _co_080500F0);
    g_cpu.R[0] = _r_080500F0;
    g_cpu.R[15] = 0x080500F2u;
    runtime_tick(_cyc_080500F0);
    }
L_080500F2:
    /* 080500F2  080500f2 T strh r0,[r2,#0x2] */
    {
    g_cpu.R[15] = 0x080500F2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500F2 = 1u;
    _cyc_080500F2 = 1u;
    uint32_t _base_080500F2 = g_cpu.R[2];
    uint32_t _off_080500F2;
    _off_080500F2 = 0x00000002u;
    uint32_t _ea_080500F2 = _base_080500F2 + _off_080500F2;
    uint32_t _post_080500F2 = _base_080500F2 + _off_080500F2;
    _cyc_080500F2 += runtime_mem_cycles(_ea_080500F2, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080500F2u, _ea_080500F2 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_080500F2 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x080500F4u;
    runtime_tick(_cyc_080500F2);
    }
L_080500F4:
    /* 080500F4  080500f4 T movs r0,#0x42 */
    {
    g_cpu.R[15] = 0x080500F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500F4 = 1u;
    _cyc_080500F4 = 1u;
    uint32_t _r_080500F4;
    _r_080500F4 = 0x00000042u;
    arm_set_nzc_logic(_r_080500F4, cpsr_c());
    g_cpu.R[0] = _r_080500F4;
    g_cpu.R[15] = 0x080500F6u;
    runtime_tick(_cyc_080500F4);
    }
L_080500F6:
    /* 080500F6  080500f6 T strb r0,[r2] */
    {
    g_cpu.R[15] = 0x080500F6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500F6 = 1u;
    _cyc_080500F6 = 1u;
    uint32_t _base_080500F6 = g_cpu.R[2];
    uint32_t _off_080500F6;
    _off_080500F6 = 0x00000000u;
    uint32_t _ea_080500F6 = _base_080500F6 + _off_080500F6;
    uint32_t _post_080500F6 = _base_080500F6 + _off_080500F6;
    _cyc_080500F6 += runtime_mem_cycles(_ea_080500F6, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x080500F6u, _ea_080500F6, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_080500F6, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x080500F8u;
    runtime_tick(_cyc_080500F6);
    }
L_080500F8:
    /* 080500F8  080500f8 T movs r5,#0x8 */
    {
    g_cpu.R[15] = 0x080500F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500F8 = 1u;
    _cyc_080500F8 = 1u;
    uint32_t _r_080500F8;
    _r_080500F8 = 0x00000008u;
    arm_set_nzc_logic(_r_080500F8, cpsr_c());
    g_cpu.R[5] = _r_080500F8;
    g_cpu.R[15] = 0x080500FAu;
    runtime_tick(_cyc_080500F8);
    }
L_080500FA:
    /* 080500FA  080500fa T movs r4,#0x3 */
    {
    g_cpu.R[15] = 0x080500FAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080500FA = 1u;
    _cyc_080500FA = 1u;
    uint32_t _r_080500FA;
    _r_080500FA = 0x00000003u;
    arm_set_nzc_logic(_r_080500FA, cpsr_c());
    g_cpu.R[4] = _r_080500FA;
    g_cpu.R[15] = 0x080500FCu;
    runtime_tick(_cyc_080500FA);
    }
    /* fall-through to 0x080500FC */
    g_cpu.R[15] = 0x080500FCu;
    runtime_dispatch(0x080500FCu);
    return;
}

/* 0x08050134  mode=thumb  end=0x08050150  branches=11 */
void gf_tfunc_08050134(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050136u: goto L_08050136;
        case 0x08050138u: goto L_08050138;
        case 0x0805013Au: goto L_0805013A;
        case 0x0805013Cu: goto L_0805013C;
        case 0x0805013Eu: goto L_0805013E;
        case 0x08050140u: goto L_08050140;
        case 0x08050142u: goto L_08050142;
        case 0x08050144u: goto L_08050144;
        case 0x08050146u: goto L_08050146;
        case 0x08050148u: goto L_08050148;
        case 0x0805014Au: goto L_0805014A;
        case 0x0805014Cu: goto L_0805014C;
        case 0x0805014Eu: goto L_0805014E;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050134u);
    /* 08050134  08050134 T ldr r0,[r15,#0xa8] */
    {
    g_cpu.R[15] = 0x08050134u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050134 = 1u;
    _cyc_08050134 = 2u;
    uint32_t _base_08050134 = 0x08050138u & ~3u;
    uint32_t _off_08050134;
    _off_08050134 = 0x000000A8u;
    uint32_t _ea_08050134 = _base_08050134 + _off_08050134;
    uint32_t _post_08050134 = _base_08050134 + _off_08050134;
    _cyc_08050134 += runtime_mem_cycles(_ea_08050134, 4u, 0u);
    uint32_t _v_08050134;
    { uint32_t _w = bus_read_u32(_ea_08050134 & ~3u); uint32_t _rot = (_ea_08050134 & 3u) * 8u; _v_08050134 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050134;
    g_cpu.R[15] = 0x08050136u;
    runtime_tick(_cyc_08050134);
    }
L_08050136:
    /* 08050136  08050136 T adds r0,r4,r0 */
    {
    g_cpu.R[15] = 0x08050136u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050136 = 1u;
    _cyc_08050136 = 1u;
    uint32_t _rm_08050136 = g_cpu.R[0];
    uint32_t _op2_08050136;
    uint32_t _co_08050136;
    _op2_08050136 = _rm_08050136;
    _co_08050136 = cpsr_c();
    uint32_t _rn_08050136 = g_cpu.R[4];
    uint32_t _r_08050136;
    _r_08050136 = _rn_08050136 + _op2_08050136;
    arm_set_nzcv_add(_rn_08050136, _op2_08050136, _r_08050136);
    g_cpu.R[0] = _r_08050136;
    g_cpu.R[15] = 0x08050138u;
    runtime_tick(_cyc_08050136);
    }
L_08050138:
    /* 08050138  08050138 T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x08050138u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050138 = 1u;
    _cyc_08050138 = 2u;
    uint32_t _base_08050138 = g_cpu.R[0];
    uint32_t _off_08050138;
    _off_08050138 = 0x00000000u;
    uint32_t _ea_08050138 = _base_08050138 + _off_08050138;
    uint32_t _post_08050138 = _base_08050138 + _off_08050138;
    _cyc_08050138 += runtime_mem_cycles(_ea_08050138, 1u, 0u);
    uint32_t _v_08050138;
    _v_08050138 = bus_read_u8(_ea_08050138);
    g_cpu.R[0] = _v_08050138;
    g_cpu.R[15] = 0x0805013Au;
    runtime_tick(_cyc_08050138);
    }
L_0805013A:
    /* 0805013A  0805013a T adds r0,r0,r5 */
    {
    g_cpu.R[15] = 0x0805013Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805013A = 1u;
    _cyc_0805013A = 1u;
    uint32_t _rm_0805013A = g_cpu.R[5];
    uint32_t _op2_0805013A;
    uint32_t _co_0805013A;
    _op2_0805013A = _rm_0805013A;
    _co_0805013A = cpsr_c();
    uint32_t _rn_0805013A = g_cpu.R[0];
    uint32_t _r_0805013A;
    _r_0805013A = _rn_0805013A + _op2_0805013A;
    arm_set_nzcv_add(_rn_0805013A, _op2_0805013A, _r_0805013A);
    g_cpu.R[0] = _r_0805013A;
    g_cpu.R[15] = 0x0805013Cu;
    runtime_tick(_cyc_0805013A);
    }
L_0805013C:
    /* 0805013C  0805013c T adds r0,r0,r6 */
    {
    g_cpu.R[15] = 0x0805013Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805013C = 1u;
    _cyc_0805013C = 1u;
    uint32_t _rm_0805013C = g_cpu.R[6];
    uint32_t _op2_0805013C;
    uint32_t _co_0805013C;
    _op2_0805013C = _rm_0805013C;
    _co_0805013C = cpsr_c();
    uint32_t _rn_0805013C = g_cpu.R[0];
    uint32_t _r_0805013C;
    _r_0805013C = _rn_0805013C + _op2_0805013C;
    arm_set_nzcv_add(_rn_0805013C, _op2_0805013C, _r_0805013C);
    g_cpu.R[0] = _r_0805013C;
    g_cpu.R[15] = 0x0805013Eu;
    runtime_tick(_cyc_0805013C);
    }
L_0805013E:
    /* 0805013E  0805013e T ldrb r0,[r0] */
    {
    g_cpu.R[15] = 0x0805013Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805013E = 1u;
    _cyc_0805013E = 2u;
    uint32_t _base_0805013E = g_cpu.R[0];
    uint32_t _off_0805013E;
    _off_0805013E = 0x00000000u;
    uint32_t _ea_0805013E = _base_0805013E + _off_0805013E;
    uint32_t _post_0805013E = _base_0805013E + _off_0805013E;
    _cyc_0805013E += runtime_mem_cycles(_ea_0805013E, 1u, 0u);
    uint32_t _v_0805013E;
    _v_0805013E = bus_read_u8(_ea_0805013E);
    g_cpu.R[0] = _v_0805013E;
    g_cpu.R[15] = 0x08050140u;
    runtime_tick(_cyc_0805013E);
    }
L_08050140:
    /* 08050140  08050140 T movs r0,r0,lsl #1 */
    {
    g_cpu.R[15] = 0x08050140u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050140 = 1u;
    _cyc_08050140 = 1u;
    uint32_t _rm_08050140 = g_cpu.R[0];
    uint32_t _op2_08050140;
    uint32_t _co_08050140;
    _op2_08050140 = _rm_08050140 << 1;
    _co_08050140 = (_rm_08050140 >> 31) & 1u;
    uint32_t _r_08050140;
    _r_08050140 = _op2_08050140;
    arm_set_nzc_logic(_r_08050140, _co_08050140);
    g_cpu.R[0] = _r_08050140;
    g_cpu.R[15] = 0x08050142u;
    runtime_tick(_cyc_08050140);
    }
L_08050142:
    /* 08050142  08050142 T ldr r1,[r15,#0x94] */
    {
    g_cpu.R[15] = 0x08050142u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050142 = 1u;
    _cyc_08050142 = 2u;
    uint32_t _base_08050142 = 0x08050146u & ~3u;
    uint32_t _off_08050142;
    _off_08050142 = 0x00000094u;
    uint32_t _ea_08050142 = _base_08050142 + _off_08050142;
    uint32_t _post_08050142 = _base_08050142 + _off_08050142;
    _cyc_08050142 += runtime_mem_cycles(_ea_08050142, 4u, 0u);
    uint32_t _v_08050142;
    { uint32_t _w = bus_read_u32(_ea_08050142 & ~3u); uint32_t _rot = (_ea_08050142 & 3u) * 8u; _v_08050142 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050142;
    g_cpu.R[15] = 0x08050144u;
    runtime_tick(_cyc_08050142);
    }
L_08050144:
    /* 08050144  08050144 T strb r0,[r1,#0xa] */
    {
    g_cpu.R[15] = 0x08050144u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050144 = 1u;
    _cyc_08050144 = 1u;
    uint32_t _base_08050144 = g_cpu.R[1];
    uint32_t _off_08050144;
    _off_08050144 = 0x0000000Au;
    uint32_t _ea_08050144 = _base_08050144 + _off_08050144;
    uint32_t _post_08050144 = _base_08050144 + _off_08050144;
    _cyc_08050144 += runtime_mem_cycles(_ea_08050144, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050144u, _ea_08050144, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050144, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050146u;
    runtime_tick(_cyc_08050144);
    }
L_08050146:
    /* 08050146  08050146 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x08050146u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050146 = 1u;
    _cyc_08050146 = 1u;
    uint32_t _r_08050146;
    _r_08050146 = 0x00000000u;
    arm_set_nzc_logic(_r_08050146, cpsr_c());
    g_cpu.R[0] = _r_08050146;
    g_cpu.R[15] = 0x08050148u;
    runtime_tick(_cyc_08050146);
    }
L_08050148:
    /* 08050148  08050148 T movs r2,#0x2 */
    {
    g_cpu.R[15] = 0x08050148u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050148 = 1u;
    _cyc_08050148 = 1u;
    uint32_t _r_08050148;
    _r_08050148 = 0x00000002u;
    arm_set_nzc_logic(_r_08050148, cpsr_c());
    g_cpu.R[2] = _r_08050148;
    g_cpu.R[15] = 0x0805014Au;
    runtime_tick(_cyc_08050148);
    }
L_0805014A:
    /* 0805014A  0805014a T movs r3,#0x1 */
    {
    g_cpu.R[15] = 0x0805014Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805014A = 1u;
    _cyc_0805014A = 1u;
    uint32_t _r_0805014A;
    _r_0805014A = 0x00000001u;
    arm_set_nzc_logic(_r_0805014A, cpsr_c());
    g_cpu.R[3] = _r_0805014A;
    g_cpu.R[15] = 0x0805014Cu;
    runtime_tick(_cyc_0805014A);
    }
L_0805014C:
    /* 0805014C  0805014c T bl.hi 0x0803d150 */
    {
    g_cpu.R[15] = 0x0805014Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805014C = 1u;
    _cyc_0805014C = 1u;
    g_cpu.R[14] = 0x0803D150u;
    g_cpu.R[15] = 0x0805014Eu;
    runtime_tick(_cyc_0805014C);
    }
L_0805014E:
    /* 0805014E  0805014e T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x0805014Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0805014E = 1u;
    _cyc_0805014E = 3u;
    uint32_t _blt_0805014E = (g_cpu.R[14] + 0x000006FCu) & ~1u;
    g_cpu.R[14] = 0x08050151u;
    g_cpu.R[15] = _blt_0805014E;
    runtime_call_push_return(0x08050150u);
    runtime_tick(_cyc_0805014E);
    _cyc_0805014E = 0u;
    runtime_dispatch(_blt_0805014E);
    if (g_cpu.R[15] != 0x08050150u) { runtime_call_cancel_return(0x08050150u); return; }
    g_cpu.R[15] = 0x08050150u;
    runtime_tick(_cyc_0805014E);
    }
    /* fall-through to 0x08050150 */
    g_cpu.R[15] = 0x08050150u;
    runtime_dispatch(0x08050150u);
    return;
}

/* 0x080501FC  mode=thumb  end=0x08050208  branches=5 */
void gf_tfunc_080501FC(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x080501FEu: goto L_080501FE;
        case 0x08050200u: goto L_08050200;
        case 0x08050202u: goto L_08050202;
        case 0x08050204u: goto L_08050204;
        case 0x08050206u: goto L_08050206;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x080501FCu);
    /* 080501FC  080501fc T adds r1,r1,#0x4 */
    {
    g_cpu.R[15] = 0x080501FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501FC = 1u;
    _cyc_080501FC = 1u;
    uint32_t _rn_080501FC = g_cpu.R[1];
    uint32_t _r_080501FC;
    _r_080501FC = _rn_080501FC + 0x00000004u;
    arm_set_nzcv_add(_rn_080501FC, 0x00000004u, _r_080501FC);
    g_cpu.R[1] = _r_080501FC;
    g_cpu.R[15] = 0x080501FEu;
    runtime_tick(_cyc_080501FC);
    }
L_080501FE:
    /* 080501FE  080501fe T adds r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x080501FEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_080501FE = 1u;
    _cyc_080501FE = 1u;
    uint32_t _rn_080501FE = g_cpu.R[2];
    uint32_t _r_080501FE;
    _r_080501FE = _rn_080501FE + 0x00000004u;
    arm_set_nzcv_add(_rn_080501FE, 0x00000004u, _r_080501FE);
    g_cpu.R[2] = _r_080501FE;
    g_cpu.R[15] = 0x08050200u;
    runtime_tick(_cyc_080501FE);
    }
L_08050200:
    /* 08050200  08050200 T subs r3,r3,#0x2 */
    {
    g_cpu.R[15] = 0x08050200u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050200 = 1u;
    _cyc_08050200 = 1u;
    uint32_t _rn_08050200 = g_cpu.R[3];
    uint32_t _r_08050200;
    _r_08050200 = _rn_08050200 - 0x00000002u;
    arm_set_nzcv_sub(_rn_08050200, 0x00000002u, _r_08050200);
    g_cpu.R[3] = _r_08050200;
    g_cpu.R[15] = 0x08050202u;
    runtime_tick(_cyc_08050200);
    }
L_08050202:
    /* 08050202  08050202 T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x08050202u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050202 = 1u;
    _cyc_08050202 = 1u;
    uint32_t _r_08050202;
    _r_08050202 = 0x00000000u;
    arm_set_nzc_logic(_r_08050202, cpsr_c());
    g_cpu.R[0] = _r_08050202;
    g_cpu.R[15] = 0x08050204u;
    runtime_tick(_cyc_08050202);
    }
L_08050204:
    /* 08050204  08050204 T bl.hi 0x0804d208 */
    {
    g_cpu.R[15] = 0x08050204u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050204 = 1u;
    _cyc_08050204 = 1u;
    g_cpu.R[14] = 0x0804D208u;
    g_cpu.R[15] = 0x08050206u;
    runtime_tick(_cyc_08050204);
    }
L_08050206:
    /* 08050206  08050206 T bl.lo 0x00000000 */
    {
    g_cpu.R[15] = 0x08050206u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050206 = 1u;
    _cyc_08050206 = 3u;
    uint32_t _blt_08050206 = (g_cpu.R[14] + 0x00000E14u) & ~1u;
    g_cpu.R[14] = 0x08050209u;
    g_cpu.R[15] = _blt_08050206;
    runtime_call_push_return(0x08050208u);
    runtime_tick(_cyc_08050206);
    _cyc_08050206 = 0u;
    runtime_dispatch(_blt_08050206);
    if (g_cpu.R[15] != 0x08050208u) { runtime_call_cancel_return(0x08050208u); return; }
    g_cpu.R[15] = 0x08050208u;
    runtime_tick(_cyc_08050206);
    }
    /* fall-through to 0x08050208 */
    g_cpu.R[15] = 0x08050208u;
    runtime_dispatch(0x08050208u);
    return;
}

/* 0x08050CF4  mode=thumb  end=0x08050D02  branches=1 */
void gf_autojt_08050C6C_04(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050CF6u: goto L_08050CF6;
        case 0x08050CF8u: goto L_08050CF8;
        case 0x08050CFAu: goto L_08050CFA;
        case 0x08050CFCu: goto L_08050CFC;
        case 0x08050CFEu: goto L_08050CFE;
        case 0x08050D00u: goto L_08050D00;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050CF4u);
    /* 08050CF4  08050cf4 T ldr r0,[r15,#0xc] */
    {
    g_cpu.R[15] = 0x08050CF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CF4 = 1u;
    _cyc_08050CF4 = 2u;
    uint32_t _base_08050CF4 = 0x08050CF8u & ~3u;
    uint32_t _off_08050CF4;
    _off_08050CF4 = 0x0000000Cu;
    uint32_t _ea_08050CF4 = _base_08050CF4 + _off_08050CF4;
    uint32_t _post_08050CF4 = _base_08050CF4 + _off_08050CF4;
    _cyc_08050CF4 += runtime_mem_cycles(_ea_08050CF4, 4u, 0u);
    uint32_t _v_08050CF4;
    { uint32_t _w = bus_read_u32(_ea_08050CF4 & ~3u); uint32_t _rot = (_ea_08050CF4 & 3u) * 8u; _v_08050CF4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050CF4;
    g_cpu.R[15] = 0x08050CF6u;
    runtime_tick(_cyc_08050CF4);
    }
L_08050CF6:
    /* 08050CF6  08050cf6 T movs r1,#0x8d */
    {
    g_cpu.R[15] = 0x08050CF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CF6 = 1u;
    _cyc_08050CF6 = 1u;
    uint32_t _r_08050CF6;
    _r_08050CF6 = 0x0000008Du;
    arm_set_nzc_logic(_r_08050CF6, cpsr_c());
    g_cpu.R[1] = _r_08050CF6;
    g_cpu.R[15] = 0x08050CF8u;
    runtime_tick(_cyc_08050CF6);
    }
L_08050CF8:
    /* 08050CF8  08050cf8 T movs r1,r1,lsl #1 */
    {
    g_cpu.R[15] = 0x08050CF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CF8 = 1u;
    _cyc_08050CF8 = 1u;
    uint32_t _rm_08050CF8 = g_cpu.R[1];
    uint32_t _op2_08050CF8;
    uint32_t _co_08050CF8;
    _op2_08050CF8 = _rm_08050CF8 << 1;
    _co_08050CF8 = (_rm_08050CF8 >> 31) & 1u;
    uint32_t _r_08050CF8;
    _r_08050CF8 = _op2_08050CF8;
    arm_set_nzc_logic(_r_08050CF8, _co_08050CF8);
    g_cpu.R[1] = _r_08050CF8;
    g_cpu.R[15] = 0x08050CFAu;
    runtime_tick(_cyc_08050CF8);
    }
L_08050CFA:
    /* 08050CFA  08050cfa T adds r3,r0,r1 */
    {
    g_cpu.R[15] = 0x08050CFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CFA = 1u;
    _cyc_08050CFA = 1u;
    uint32_t _rm_08050CFA = g_cpu.R[1];
    uint32_t _op2_08050CFA;
    uint32_t _co_08050CFA;
    _op2_08050CFA = _rm_08050CFA;
    _co_08050CFA = cpsr_c();
    uint32_t _rn_08050CFA = g_cpu.R[0];
    uint32_t _r_08050CFA;
    _r_08050CFA = _rn_08050CFA + _op2_08050CFA;
    arm_set_nzcv_add(_rn_08050CFA, _op2_08050CFA, _r_08050CFA);
    g_cpu.R[3] = _r_08050CFA;
    g_cpu.R[15] = 0x08050CFCu;
    runtime_tick(_cyc_08050CFA);
    }
L_08050CFC:
    /* 08050CFC  08050cfc T movs r2,#0x0 */
    {
    g_cpu.R[15] = 0x08050CFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CFC = 1u;
    _cyc_08050CFC = 1u;
    uint32_t _r_08050CFC;
    _r_08050CFC = 0x00000000u;
    arm_set_nzc_logic(_r_08050CFC, cpsr_c());
    g_cpu.R[2] = _r_08050CFC;
    g_cpu.R[15] = 0x08050CFEu;
    runtime_tick(_cyc_08050CFC);
    }
L_08050CFE:
    /* 08050CFE  08050cfe T movs r1,#0xe */
    {
    g_cpu.R[15] = 0x08050CFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050CFE = 1u;
    _cyc_08050CFE = 1u;
    uint32_t _r_08050CFE;
    _r_08050CFE = 0x0000000Eu;
    arm_set_nzc_logic(_r_08050CFE, cpsr_c());
    g_cpu.R[1] = _r_08050CFE;
    g_cpu.R[15] = 0x08050D00u;
    runtime_tick(_cyc_08050CFE);
    }
L_08050D00:
    /* 08050D00  08050d00 T b 0x08050d58 */
    {
    g_cpu.R[15] = 0x08050D00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D00 = 1u;
    _cyc_08050D00 = 3u;
    g_cpu.R[15] = 0x08050D58u;
    runtime_tick(_cyc_08050D00);
    gf_race_08050d58();
    return;
    g_cpu.R[15] = 0x08050D02u;
    runtime_tick(_cyc_08050D00);
    }
    /* fall-through to 0x08050D02 */
    g_cpu.R[15] = 0x08050D02u;
    runtime_dispatch(0x08050D02u);
    return;
}

/* 0x08050D24  mode=thumb  end=0x08050D44  branches=1 */
void gf_autojt_08050C6C_07(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050D26u: goto L_08050D26;
        case 0x08050D28u: goto L_08050D28;
        case 0x08050D2Au: goto L_08050D2A;
        case 0x08050D2Cu: goto L_08050D2C;
        case 0x08050D2Eu: goto L_08050D2E;
        case 0x08050D30u: goto L_08050D30;
        case 0x08050D32u: goto L_08050D32;
        case 0x08050D34u: goto L_08050D34;
        case 0x08050D36u: goto L_08050D36;
        case 0x08050D38u: goto L_08050D38;
        case 0x08050D3Au: goto L_08050D3A;
        case 0x08050D3Cu: goto L_08050D3C;
        case 0x08050D3Eu: goto L_08050D3E;
        case 0x08050D40u: goto L_08050D40;
        case 0x08050D42u: goto L_08050D42;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D24u);
    /* 08050D24  08050d24 T ldr r2,[r15,#0x1c] */
    {
    g_cpu.R[15] = 0x08050D24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D24 = 1u;
    _cyc_08050D24 = 2u;
    uint32_t _base_08050D24 = 0x08050D28u & ~3u;
    uint32_t _off_08050D24;
    _off_08050D24 = 0x0000001Cu;
    uint32_t _ea_08050D24 = _base_08050D24 + _off_08050D24;
    uint32_t _post_08050D24 = _base_08050D24 + _off_08050D24;
    _cyc_08050D24 += runtime_mem_cycles(_ea_08050D24, 4u, 0u);
    uint32_t _v_08050D24;
    { uint32_t _w = bus_read_u32(_ea_08050D24 & ~3u); uint32_t _rot = (_ea_08050D24 & 3u) * 8u; _v_08050D24 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_08050D24;
    g_cpu.R[15] = 0x08050D26u;
    runtime_tick(_cyc_08050D24);
    }
L_08050D26:
    /* 08050D26  08050d26 T movs r0,#0x8d */
    {
    g_cpu.R[15] = 0x08050D26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D26 = 1u;
    _cyc_08050D26 = 1u;
    uint32_t _r_08050D26;
    _r_08050D26 = 0x0000008Du;
    arm_set_nzc_logic(_r_08050D26, cpsr_c());
    g_cpu.R[0] = _r_08050D26;
    g_cpu.R[15] = 0x08050D28u;
    runtime_tick(_cyc_08050D26);
    }
L_08050D28:
    /* 08050D28  08050d28 T movs r0,r0,lsl #1 */
    {
    g_cpu.R[15] = 0x08050D28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D28 = 1u;
    _cyc_08050D28 = 1u;
    uint32_t _rm_08050D28 = g_cpu.R[0];
    uint32_t _op2_08050D28;
    uint32_t _co_08050D28;
    _op2_08050D28 = _rm_08050D28 << 1;
    _co_08050D28 = (_rm_08050D28 >> 31) & 1u;
    uint32_t _r_08050D28;
    _r_08050D28 = _op2_08050D28;
    arm_set_nzc_logic(_r_08050D28, _co_08050D28);
    g_cpu.R[0] = _r_08050D28;
    g_cpu.R[15] = 0x08050D2Au;
    runtime_tick(_cyc_08050D28);
    }
L_08050D2A:
    /* 08050D2A  08050d2a T adds r3,r2,r0 */
    {
    g_cpu.R[15] = 0x08050D2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D2A = 1u;
    _cyc_08050D2A = 1u;
    uint32_t _rm_08050D2A = g_cpu.R[0];
    uint32_t _op2_08050D2A;
    uint32_t _co_08050D2A;
    _op2_08050D2A = _rm_08050D2A;
    _co_08050D2A = cpsr_c();
    uint32_t _rn_08050D2A = g_cpu.R[2];
    uint32_t _r_08050D2A;
    _r_08050D2A = _rn_08050D2A + _op2_08050D2A;
    arm_set_nzcv_add(_rn_08050D2A, _op2_08050D2A, _r_08050D2A);
    g_cpu.R[3] = _r_08050D2A;
    g_cpu.R[15] = 0x08050D2Cu;
    runtime_tick(_cyc_08050D2A);
    }
L_08050D2C:
    /* 08050D2C  08050d2c T movs r1,#0x0 */
    {
    g_cpu.R[15] = 0x08050D2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D2C = 1u;
    _cyc_08050D2C = 1u;
    uint32_t _r_08050D2C;
    _r_08050D2C = 0x00000000u;
    arm_set_nzc_logic(_r_08050D2C, cpsr_c());
    g_cpu.R[1] = _r_08050D2C;
    g_cpu.R[15] = 0x08050D2Eu;
    runtime_tick(_cyc_08050D2C);
    }
L_08050D2E:
    /* 08050D2E  08050d2e T movs r0,#0x3 */
    {
    g_cpu.R[15] = 0x08050D2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D2E = 1u;
    _cyc_08050D2E = 1u;
    uint32_t _r_08050D2E;
    _r_08050D2E = 0x00000003u;
    arm_set_nzc_logic(_r_08050D2E, cpsr_c());
    g_cpu.R[0] = _r_08050D2E;
    g_cpu.R[15] = 0x08050D30u;
    runtime_tick(_cyc_08050D2E);
    }
L_08050D30:
    /* 08050D30  08050d30 T strb r0,[r3] */
    {
    g_cpu.R[15] = 0x08050D30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D30 = 1u;
    _cyc_08050D30 = 1u;
    uint32_t _base_08050D30 = g_cpu.R[3];
    uint32_t _off_08050D30;
    _off_08050D30 = 0x00000000u;
    uint32_t _ea_08050D30 = _base_08050D30 + _off_08050D30;
    uint32_t _post_08050D30 = _base_08050D30 + _off_08050D30;
    _cyc_08050D30 += runtime_mem_cycles(_ea_08050D30, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050D30u, _ea_08050D30, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050D30, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050D32u;
    runtime_tick(_cyc_08050D30);
    }
L_08050D32:
    /* 08050D32  08050d32 T ldr r3,[r15,#0x14] */
    {
    g_cpu.R[15] = 0x08050D32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D32 = 1u;
    _cyc_08050D32 = 2u;
    uint32_t _base_08050D32 = 0x08050D36u & ~3u;
    uint32_t _off_08050D32;
    _off_08050D32 = 0x00000014u;
    uint32_t _ea_08050D32 = _base_08050D32 + _off_08050D32;
    uint32_t _post_08050D32 = _base_08050D32 + _off_08050D32;
    _cyc_08050D32 += runtime_mem_cycles(_ea_08050D32, 4u, 0u);
    uint32_t _v_08050D32;
    { uint32_t _w = bus_read_u32(_ea_08050D32 & ~3u); uint32_t _rot = (_ea_08050D32 & 3u) * 8u; _v_08050D32 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_08050D32;
    g_cpu.R[15] = 0x08050D34u;
    runtime_tick(_cyc_08050D32);
    }
L_08050D34:
    /* 08050D34  08050d34 T adds r0,r2,r3 */
    {
    g_cpu.R[15] = 0x08050D34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D34 = 1u;
    _cyc_08050D34 = 1u;
    uint32_t _rm_08050D34 = g_cpu.R[3];
    uint32_t _op2_08050D34;
    uint32_t _co_08050D34;
    _op2_08050D34 = _rm_08050D34;
    _co_08050D34 = cpsr_c();
    uint32_t _rn_08050D34 = g_cpu.R[2];
    uint32_t _r_08050D34;
    _r_08050D34 = _rn_08050D34 + _op2_08050D34;
    arm_set_nzcv_add(_rn_08050D34, _op2_08050D34, _r_08050D34);
    g_cpu.R[0] = _r_08050D34;
    g_cpu.R[15] = 0x08050D36u;
    runtime_tick(_cyc_08050D34);
    }
L_08050D36:
    /* 08050D36  08050d36 T strb r1,[r0] */
    {
    g_cpu.R[15] = 0x08050D36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D36 = 1u;
    _cyc_08050D36 = 1u;
    uint32_t _base_08050D36 = g_cpu.R[0];
    uint32_t _off_08050D36;
    _off_08050D36 = 0x00000000u;
    uint32_t _ea_08050D36 = _base_08050D36 + _off_08050D36;
    uint32_t _post_08050D36 = _base_08050D36 + _off_08050D36;
    _cyc_08050D36 += runtime_mem_cycles(_ea_08050D36, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050D36u, _ea_08050D36, (uint32_t)(g_cpu.R[1] & 0xFFu), 1u);
    bus_write_u8(_ea_08050D36, (uint8_t)(g_cpu.R[1] & 0xFFu));
    g_cpu.R[15] = 0x08050D38u;
    runtime_tick(_cyc_08050D36);
    }
L_08050D38:
    /* 08050D38  08050d38 T movs r0,#0x92 */
    {
    g_cpu.R[15] = 0x08050D38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D38 = 1u;
    _cyc_08050D38 = 1u;
    uint32_t _r_08050D38;
    _r_08050D38 = 0x00000092u;
    arm_set_nzc_logic(_r_08050D38, cpsr_c());
    g_cpu.R[0] = _r_08050D38;
    g_cpu.R[15] = 0x08050D3Au;
    runtime_tick(_cyc_08050D38);
    }
L_08050D3A:
    /* 08050D3A  08050d3a T movs r0,r0,lsl #1 */
    {
    g_cpu.R[15] = 0x08050D3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D3A = 1u;
    _cyc_08050D3A = 1u;
    uint32_t _rm_08050D3A = g_cpu.R[0];
    uint32_t _op2_08050D3A;
    uint32_t _co_08050D3A;
    _op2_08050D3A = _rm_08050D3A << 1;
    _co_08050D3A = (_rm_08050D3A >> 31) & 1u;
    uint32_t _r_08050D3A;
    _r_08050D3A = _op2_08050D3A;
    arm_set_nzc_logic(_r_08050D3A, _co_08050D3A);
    g_cpu.R[0] = _r_08050D3A;
    g_cpu.R[15] = 0x08050D3Cu;
    runtime_tick(_cyc_08050D3A);
    }
L_08050D3C:
    /* 08050D3C  08050d3c T adds r1,r2,r0 */
    {
    g_cpu.R[15] = 0x08050D3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D3C = 1u;
    _cyc_08050D3C = 1u;
    uint32_t _rm_08050D3C = g_cpu.R[0];
    uint32_t _op2_08050D3C;
    uint32_t _co_08050D3C;
    _op2_08050D3C = _rm_08050D3C;
    _co_08050D3C = cpsr_c();
    uint32_t _rn_08050D3C = g_cpu.R[2];
    uint32_t _r_08050D3C;
    _r_08050D3C = _rn_08050D3C + _op2_08050D3C;
    arm_set_nzcv_add(_rn_08050D3C, _op2_08050D3C, _r_08050D3C);
    g_cpu.R[1] = _r_08050D3C;
    g_cpu.R[15] = 0x08050D3Eu;
    runtime_tick(_cyc_08050D3C);
    }
L_08050D3E:
    /* 08050D3E  08050d3e T movs r0,#0x1 */
    {
    g_cpu.R[15] = 0x08050D3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D3E = 1u;
    _cyc_08050D3E = 1u;
    uint32_t _r_08050D3E;
    _r_08050D3E = 0x00000001u;
    arm_set_nzc_logic(_r_08050D3E, cpsr_c());
    g_cpu.R[0] = _r_08050D3E;
    g_cpu.R[15] = 0x08050D40u;
    runtime_tick(_cyc_08050D3E);
    }
L_08050D40:
    /* 08050D40  08050d40 T strb r0,[r1] */
    {
    g_cpu.R[15] = 0x08050D40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D40 = 1u;
    _cyc_08050D40 = 1u;
    uint32_t _base_08050D40 = g_cpu.R[1];
    uint32_t _off_08050D40;
    _off_08050D40 = 0x00000000u;
    uint32_t _ea_08050D40 = _base_08050D40 + _off_08050D40;
    uint32_t _post_08050D40 = _base_08050D40 + _off_08050D40;
    _cyc_08050D40 += runtime_mem_cycles(_ea_08050D40, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050D40u, _ea_08050D40, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_08050D40, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x08050D42u;
    runtime_tick(_cyc_08050D40);
    }
L_08050D42:
    /* 08050D42  08050d42 T b 0x08050d62 */
    {
    g_cpu.R[15] = 0x08050D42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D42 = 1u;
    _cyc_08050D42 = 3u;
    g_cpu.R[15] = 0x08050D62u;
    runtime_tick(_cyc_08050D42);
    gf_tfunc_08050D62();
    return;
    g_cpu.R[15] = 0x08050D44u;
    runtime_tick(_cyc_08050D42);
    }
    /* fall-through to 0x08050D44 */
    g_cpu.R[15] = 0x08050D44u;
    runtime_dispatch(0x08050D44u);
    return;
}

/* 0x08050EB2  mode=thumb  end=0x08050EBC  branches=12  indirect */
void gf_tfunc_08050EB2(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050EB4u: goto L_08050EB4;
        case 0x08050EB6u: goto L_08050EB6;
        case 0x08050EB8u: goto L_08050EB8;
        case 0x08050EBAu: goto L_08050EBA;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050EB2u);
    /* 08050EB2  08050eb2 T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050EB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EB2 = 1u;
    _cyc_08050EB2 = 1u;
    uint32_t _rn_08050EB2 = g_cpu.R[3];
    uint32_t _r_08050EB2;
    _r_08050EB2 = _rn_08050EB2 + 0x00000010u;
    arm_set_nzcv_add(_rn_08050EB2, 0x00000010u, _r_08050EB2);
    g_cpu.R[3] = _r_08050EB2;
    g_cpu.R[15] = 0x08050EB4u;
    runtime_tick(_cyc_08050EB2);
    }
L_08050EB4:
    /* 08050EB4  08050eb4 T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050EB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EB4 = 1u;
    _cyc_08050EB4 = 1u;
    uint32_t _rn_08050EB4 = g_cpu.R[4];
    uint32_t _r_08050EB4;
    _r_08050EB4 = _rn_08050EB4 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050EB4, 0x00000000u, _r_08050EB4);
    g_cpu.R[5] = _r_08050EB4;
    g_cpu.R[15] = 0x08050EB6u;
    runtime_tick(_cyc_08050EB4);
    }
L_08050EB6:
    /* 08050EB6  08050eb6 T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050EB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EB6 = 1u;
    _cyc_08050EB6 = 2u;
    uint32_t _base_08050EB6 = g_cpu.R[3];
    uint32_t _off_08050EB6;
    _off_08050EB6 = 0x00000008u;
    uint32_t _ea_08050EB6 = _base_08050EB6 + _off_08050EB6;
    uint32_t _post_08050EB6 = _base_08050EB6 + _off_08050EB6;
    _cyc_08050EB6 += runtime_mem_cycles(_ea_08050EB6, 4u, 0u);
    uint32_t _v_08050EB6;
    { uint32_t _w = bus_read_u32(_ea_08050EB6 & ~3u); uint32_t _rot = (_ea_08050EB6 & 3u) * 8u; _v_08050EB6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050EB6;
    g_cpu.R[15] = 0x08050EB8u;
    runtime_tick(_cyc_08050EB6);
    }
L_08050EB8:
    /* 08050EB8  08050eb8 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050EB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EB8 = 1u;
    _cyc_08050EB8 = 1u;
    uint32_t _rm_08050EB8 = g_cpu.R[4];
    uint32_t _op2_08050EB8;
    uint32_t _co_08050EB8;
    _op2_08050EB8 = _rm_08050EB8;
    _co_08050EB8 = cpsr_c();
    uint32_t _rn_08050EB8 = g_cpu.R[1];
    uint32_t _r_08050EB8;
    _r_08050EB8 = _rn_08050EB8 - _op2_08050EB8;
    arm_set_nzcv_sub(_rn_08050EB8, _op2_08050EB8, _r_08050EB8);
    g_cpu.R[15] = 0x08050EBAu;
    runtime_tick(_cyc_08050EB8);
    }
L_08050EBA:
    /* 08050EBA  08050eba T beq 0x08050ecc */
    {
    g_cpu.R[15] = 0x08050EBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EBA = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050EBA = 3u;
        g_cpu.R[15] = 0x08050ECCu;
        runtime_tick(_cyc_08050EBA);
        gf_tfunc_08050ECC();
        return;
    }
    g_cpu.R[15] = 0x08050EBCu;
    runtime_tick(_cyc_08050EBA);
    }
    /* fall-through to 0x08050EBC */
    g_cpu.R[15] = 0x08050EBCu;
    runtime_dispatch(0x08050EBCu);
    return;
}

/* 0x08050ED6  mode=thumb  end=0x08050EE6  branches=9  indirect */
void gf_tfunc_08050ED6(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050ED8u: goto L_08050ED8;
        case 0x08050EDAu: goto L_08050EDA;
        case 0x08050EDCu: goto L_08050EDC;
        case 0x08050EDEu: goto L_08050EDE;
        case 0x08050EE0u: goto L_08050EE0;
        case 0x08050EE2u: goto L_08050EE2;
        case 0x08050EE4u: goto L_08050EE4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050ED6u);
L_08050ED6:
    /* 08050ED6  08050ed6 T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050ED6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050ED6 = 1u;
    _cyc_08050ED6 = 2u;
    uint32_t _base_08050ED6 = g_cpu.R[1];
    uint32_t _off_08050ED6;
    _off_08050ED6 = 0x00000000u;
    uint32_t _ea_08050ED6 = _base_08050ED6 + _off_08050ED6;
    uint32_t _post_08050ED6 = _base_08050ED6 + _off_08050ED6;
    _cyc_08050ED6 += runtime_mem_cycles(_ea_08050ED6, 4u, 0u);
    uint32_t _v_08050ED6;
    { uint32_t _w = bus_read_u32(_ea_08050ED6 & ~3u); uint32_t _rot = (_ea_08050ED6 & 3u) * 8u; _v_08050ED6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050ED6;
    g_cpu.R[15] = 0x08050ED8u;
    runtime_tick(_cyc_08050ED6);
    }
L_08050ED8:
    /* 08050ED8  08050ed8 T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050ED8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050ED8 = 1u;
    _cyc_08050ED8 = 1u;
    uint32_t _base_08050ED8 = g_cpu.R[2];
    uint32_t _off_08050ED8;
    _off_08050ED8 = 0x00000000u;
    uint32_t _ea_08050ED8 = _base_08050ED8 + _off_08050ED8;
    uint32_t _post_08050ED8 = _base_08050ED8 + _off_08050ED8;
    _cyc_08050ED8 += runtime_mem_cycles(_ea_08050ED8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050ED8u, _ea_08050ED8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050ED8 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050EDAu;
    runtime_tick(_cyc_08050ED8);
    }
L_08050EDA:
    /* 08050EDA  08050eda T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050EDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EDA = 1u;
    _cyc_08050EDA = 2u;
    uint32_t _base_08050EDA = g_cpu.R[1];
    uint32_t _off_08050EDA;
    _off_08050EDA = 0x00000004u;
    uint32_t _ea_08050EDA = _base_08050EDA + _off_08050EDA;
    uint32_t _post_08050EDA = _base_08050EDA + _off_08050EDA;
    _cyc_08050EDA += runtime_mem_cycles(_ea_08050EDA, 4u, 0u);
    uint32_t _v_08050EDA;
    { uint32_t _w = bus_read_u32(_ea_08050EDA & ~3u); uint32_t _rot = (_ea_08050EDA & 3u) * 8u; _v_08050EDA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050EDA;
    g_cpu.R[15] = 0x08050EDCu;
    runtime_tick(_cyc_08050EDA);
    }
L_08050EDC:
    /* 08050EDC  08050edc T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050EDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EDC = 1u;
    _cyc_08050EDC = 1u;
    uint32_t _base_08050EDC = g_cpu.R[2];
    uint32_t _off_08050EDC;
    _off_08050EDC = 0x00000004u;
    uint32_t _ea_08050EDC = _base_08050EDC + _off_08050EDC;
    uint32_t _post_08050EDC = _base_08050EDC + _off_08050EDC;
    _cyc_08050EDC += runtime_mem_cycles(_ea_08050EDC, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050EDCu, _ea_08050EDC & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050EDC & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050EDEu;
    runtime_tick(_cyc_08050EDC);
    }
L_08050EDE:
    /* 08050EDE  08050ede T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050EDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EDE = 1u;
    _cyc_08050EDE = 1u;
    uint32_t _rn_08050EDE = g_cpu.R[2];
    uint32_t _r_08050EDE;
    _r_08050EDE = _rn_08050EDE + 0x00000008u;
    arm_set_nzcv_add(_rn_08050EDE, 0x00000008u, _r_08050EDE);
    g_cpu.R[2] = _r_08050EDE;
    g_cpu.R[15] = 0x08050EE0u;
    runtime_tick(_cyc_08050EDE);
    }
L_08050EE0:
    /* 08050EE0  08050ee0 T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050EE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EE0 = 1u;
    _cyc_08050EE0 = 2u;
    uint32_t _base_08050EE0 = g_cpu.R[1];
    uint32_t _off_08050EE0;
    _off_08050EE0 = 0x00000008u;
    uint32_t _ea_08050EE0 = _base_08050EE0 + _off_08050EE0;
    uint32_t _post_08050EE0 = _base_08050EE0 + _off_08050EE0;
    _cyc_08050EE0 += runtime_mem_cycles(_ea_08050EE0, 4u, 0u);
    uint32_t _v_08050EE0;
    { uint32_t _w = bus_read_u32(_ea_08050EE0 & ~3u); uint32_t _rot = (_ea_08050EE0 & 3u) * 8u; _v_08050EE0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050EE0;
    g_cpu.R[15] = 0x08050EE2u;
    runtime_tick(_cyc_08050EE0);
    }
L_08050EE2:
    /* 08050EE2  08050ee2 T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050EE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EE2 = 1u;
    _cyc_08050EE2 = 1u;
    uint32_t _rm_08050EE2 = g_cpu.R[5];
    uint32_t _op2_08050EE2;
    uint32_t _co_08050EE2;
    _op2_08050EE2 = _rm_08050EE2;
    _co_08050EE2 = cpsr_c();
    uint32_t _rn_08050EE2 = g_cpu.R[1];
    uint32_t _r_08050EE2;
    _r_08050EE2 = _rn_08050EE2 - _op2_08050EE2;
    arm_set_nzcv_sub(_rn_08050EE2, _op2_08050EE2, _r_08050EE2);
    g_cpu.R[15] = 0x08050EE4u;
    runtime_tick(_cyc_08050EE2);
    }
L_08050EE4:
    /* 08050EE4  08050ee4 T bne 0x08050ed6 */
    {
    g_cpu.R[15] = 0x08050EE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EE4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050EE4 = 3u;
        g_cpu.R[15] = 0x08050ED6u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050EE4u, 0x08050ED6u, 0u, 0u);
        runtime_tick(_cyc_08050EE4);
        goto L_08050ED6;
    }
    g_cpu.R[15] = 0x08050EE6u;
    runtime_tick(_cyc_08050EE4);
    }
    /* fall-through to 0x08050EE6 */
    g_cpu.R[15] = 0x08050EE6u;
    runtime_dispatch(0x08050EE6u);
    return;
}

/* 0x08050D60  mode=thumb  end=0x08050D62  branches=46  indirect */
void gf_tfunc_08050D60(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050D60u);
    /* 08050D60  08050d60 T adds r2,r0,#0x0 */
    g_cpu.R[15] = 0x08050D60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050D60 = 1u;
    _cyc_08050D60 = 1u;
    uint32_t _rn_08050D60 = g_cpu.R[0];
    uint32_t _r_08050D60;
    _r_08050D60 = _rn_08050D60 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050D60, 0x00000000u, _r_08050D60);
    g_cpu.R[2] = _r_08050D60;
    g_cpu.R[15] = 0x08050D62u;
    runtime_tick(_cyc_08050D60);
    /* fall-through to 0x08050D62 */
    g_cpu.R[15] = 0x08050D62u;
    runtime_dispatch(0x08050D62u);
    return;
}

/* 0x08050E30  mode=thumb  end=0x08050E3A  branches=22  indirect */
void gf_tfunc_08050E30(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E32u: goto L_08050E32;
        case 0x08050E34u: goto L_08050E34;
        case 0x08050E36u: goto L_08050E36;
        case 0x08050E38u: goto L_08050E38;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E30u);
    /* 08050E30  08050e30 T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050E30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E30 = 1u;
    _cyc_08050E30 = 1u;
    uint32_t _rn_08050E30 = g_cpu.R[3];
    uint32_t _r_08050E30;
    _r_08050E30 = _rn_08050E30 + 0x00000010u;
    arm_set_nzcv_add(_rn_08050E30, 0x00000010u, _r_08050E30);
    g_cpu.R[3] = _r_08050E30;
    g_cpu.R[15] = 0x08050E32u;
    runtime_tick(_cyc_08050E30);
    }
L_08050E32:
    /* 08050E32  08050e32 T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050E32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E32 = 1u;
    _cyc_08050E32 = 1u;
    uint32_t _rn_08050E32 = g_cpu.R[4];
    uint32_t _r_08050E32;
    _r_08050E32 = _rn_08050E32 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050E32, 0x00000000u, _r_08050E32);
    g_cpu.R[5] = _r_08050E32;
    g_cpu.R[15] = 0x08050E34u;
    runtime_tick(_cyc_08050E32);
    }
L_08050E34:
    /* 08050E34  08050e34 T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050E34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E34 = 1u;
    _cyc_08050E34 = 2u;
    uint32_t _base_08050E34 = g_cpu.R[3];
    uint32_t _off_08050E34;
    _off_08050E34 = 0x00000008u;
    uint32_t _ea_08050E34 = _base_08050E34 + _off_08050E34;
    uint32_t _post_08050E34 = _base_08050E34 + _off_08050E34;
    _cyc_08050E34 += runtime_mem_cycles(_ea_08050E34, 4u, 0u);
    uint32_t _v_08050E34;
    { uint32_t _w = bus_read_u32(_ea_08050E34 & ~3u); uint32_t _rot = (_ea_08050E34 & 3u) * 8u; _v_08050E34 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E34;
    g_cpu.R[15] = 0x08050E36u;
    runtime_tick(_cyc_08050E34);
    }
L_08050E36:
    /* 08050E36  08050e36 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050E36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E36 = 1u;
    _cyc_08050E36 = 1u;
    uint32_t _rm_08050E36 = g_cpu.R[4];
    uint32_t _op2_08050E36;
    uint32_t _co_08050E36;
    _op2_08050E36 = _rm_08050E36;
    _co_08050E36 = cpsr_c();
    uint32_t _rn_08050E36 = g_cpu.R[1];
    uint32_t _r_08050E36;
    _r_08050E36 = _rn_08050E36 - _op2_08050E36;
    arm_set_nzcv_sub(_rn_08050E36, _op2_08050E36, _r_08050E36);
    g_cpu.R[15] = 0x08050E38u;
    runtime_tick(_cyc_08050E36);
    }
L_08050E38:
    /* 08050E38  08050e38 T beq 0x08050e4a */
    {
    g_cpu.R[15] = 0x08050E38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E38 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050E38 = 3u;
        g_cpu.R[15] = 0x08050E4Au;
        runtime_tick(_cyc_08050E38);
        gf_tfunc_08050E4A();
        return;
    }
    g_cpu.R[15] = 0x08050E3Au;
    runtime_tick(_cyc_08050E38);
    }
    /* fall-through to 0x08050E3A */
    g_cpu.R[15] = 0x08050E3Au;
    runtime_dispatch(0x08050E3Au);
    return;
}

/* 0x08050E3A  mode=thumb  end=0x08050E4A  branches=21  indirect */
void gf_tfunc_08050E3A(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E3Cu: goto L_08050E3C;
        case 0x08050E3Eu: goto L_08050E3E;
        case 0x08050E40u: goto L_08050E40;
        case 0x08050E42u: goto L_08050E42;
        case 0x08050E44u: goto L_08050E44;
        case 0x08050E46u: goto L_08050E46;
        case 0x08050E48u: goto L_08050E48;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E3Au);
L_08050E3A:
    /* 08050E3A  08050e3a T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050E3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E3A = 1u;
    _cyc_08050E3A = 2u;
    uint32_t _base_08050E3A = g_cpu.R[1];
    uint32_t _off_08050E3A;
    _off_08050E3A = 0x00000000u;
    uint32_t _ea_08050E3A = _base_08050E3A + _off_08050E3A;
    uint32_t _post_08050E3A = _base_08050E3A + _off_08050E3A;
    _cyc_08050E3A += runtime_mem_cycles(_ea_08050E3A, 4u, 0u);
    uint32_t _v_08050E3A;
    { uint32_t _w = bus_read_u32(_ea_08050E3A & ~3u); uint32_t _rot = (_ea_08050E3A & 3u) * 8u; _v_08050E3A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E3A;
    g_cpu.R[15] = 0x08050E3Cu;
    runtime_tick(_cyc_08050E3A);
    }
L_08050E3C:
    /* 08050E3C  08050e3c T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050E3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E3C = 1u;
    _cyc_08050E3C = 1u;
    uint32_t _base_08050E3C = g_cpu.R[2];
    uint32_t _off_08050E3C;
    _off_08050E3C = 0x00000000u;
    uint32_t _ea_08050E3C = _base_08050E3C + _off_08050E3C;
    uint32_t _post_08050E3C = _base_08050E3C + _off_08050E3C;
    _cyc_08050E3C += runtime_mem_cycles(_ea_08050E3C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E3Cu, _ea_08050E3C & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E3C & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E3Eu;
    runtime_tick(_cyc_08050E3C);
    }
L_08050E3E:
    /* 08050E3E  08050e3e T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050E3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E3E = 1u;
    _cyc_08050E3E = 2u;
    uint32_t _base_08050E3E = g_cpu.R[1];
    uint32_t _off_08050E3E;
    _off_08050E3E = 0x00000004u;
    uint32_t _ea_08050E3E = _base_08050E3E + _off_08050E3E;
    uint32_t _post_08050E3E = _base_08050E3E + _off_08050E3E;
    _cyc_08050E3E += runtime_mem_cycles(_ea_08050E3E, 4u, 0u);
    uint32_t _v_08050E3E;
    { uint32_t _w = bus_read_u32(_ea_08050E3E & ~3u); uint32_t _rot = (_ea_08050E3E & 3u) * 8u; _v_08050E3E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E3E;
    g_cpu.R[15] = 0x08050E40u;
    runtime_tick(_cyc_08050E3E);
    }
L_08050E40:
    /* 08050E40  08050e40 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050E40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E40 = 1u;
    _cyc_08050E40 = 1u;
    uint32_t _base_08050E40 = g_cpu.R[2];
    uint32_t _off_08050E40;
    _off_08050E40 = 0x00000004u;
    uint32_t _ea_08050E40 = _base_08050E40 + _off_08050E40;
    uint32_t _post_08050E40 = _base_08050E40 + _off_08050E40;
    _cyc_08050E40 += runtime_mem_cycles(_ea_08050E40, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E40u, _ea_08050E40 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E40 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E42u;
    runtime_tick(_cyc_08050E40);
    }
L_08050E42:
    /* 08050E42  08050e42 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050E42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E42 = 1u;
    _cyc_08050E42 = 1u;
    uint32_t _rn_08050E42 = g_cpu.R[2];
    uint32_t _r_08050E42;
    _r_08050E42 = _rn_08050E42 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050E42, 0x00000008u, _r_08050E42);
    g_cpu.R[2] = _r_08050E42;
    g_cpu.R[15] = 0x08050E44u;
    runtime_tick(_cyc_08050E42);
    }
L_08050E44:
    /* 08050E44  08050e44 T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050E44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E44 = 1u;
    _cyc_08050E44 = 2u;
    uint32_t _base_08050E44 = g_cpu.R[1];
    uint32_t _off_08050E44;
    _off_08050E44 = 0x00000008u;
    uint32_t _ea_08050E44 = _base_08050E44 + _off_08050E44;
    uint32_t _post_08050E44 = _base_08050E44 + _off_08050E44;
    _cyc_08050E44 += runtime_mem_cycles(_ea_08050E44, 4u, 0u);
    uint32_t _v_08050E44;
    { uint32_t _w = bus_read_u32(_ea_08050E44 & ~3u); uint32_t _rot = (_ea_08050E44 & 3u) * 8u; _v_08050E44 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E44;
    g_cpu.R[15] = 0x08050E46u;
    runtime_tick(_cyc_08050E44);
    }
L_08050E46:
    /* 08050E46  08050e46 T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050E46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E46 = 1u;
    _cyc_08050E46 = 1u;
    uint32_t _rm_08050E46 = g_cpu.R[5];
    uint32_t _op2_08050E46;
    uint32_t _co_08050E46;
    _op2_08050E46 = _rm_08050E46;
    _co_08050E46 = cpsr_c();
    uint32_t _rn_08050E46 = g_cpu.R[1];
    uint32_t _r_08050E46;
    _r_08050E46 = _rn_08050E46 - _op2_08050E46;
    arm_set_nzcv_sub(_rn_08050E46, _op2_08050E46, _r_08050E46);
    g_cpu.R[15] = 0x08050E48u;
    runtime_tick(_cyc_08050E46);
    }
L_08050E48:
    /* 08050E48  08050e48 T bne 0x08050e3a */
    {
    g_cpu.R[15] = 0x08050E48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E48 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050E48 = 3u;
        g_cpu.R[15] = 0x08050E3Au;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050E48u, 0x08050E3Au, 0u, 0u);
        runtime_tick(_cyc_08050E48);
        goto L_08050E3A;
    }
    g_cpu.R[15] = 0x08050E4Au;
    runtime_tick(_cyc_08050E48);
    }
    /* fall-through to 0x08050E4A */
    g_cpu.R[15] = 0x08050E4Au;
    runtime_dispatch(0x08050E4Au);
    return;
}

/* 0x08050E4A  mode=thumb  end=0x08050E54  branches=20  indirect */
void gf_tfunc_08050E4A(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E4Cu: goto L_08050E4C;
        case 0x08050E4Eu: goto L_08050E4E;
        case 0x08050E50u: goto L_08050E50;
        case 0x08050E52u: goto L_08050E52;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E4Au);
    /* 08050E4A  08050e4a T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050E4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E4A = 1u;
    _cyc_08050E4A = 1u;
    uint32_t _rn_08050E4A = g_cpu.R[3];
    uint32_t _r_08050E4A;
    _r_08050E4A = _rn_08050E4A + 0x00000010u;
    arm_set_nzcv_add(_rn_08050E4A, 0x00000010u, _r_08050E4A);
    g_cpu.R[3] = _r_08050E4A;
    g_cpu.R[15] = 0x08050E4Cu;
    runtime_tick(_cyc_08050E4A);
    }
L_08050E4C:
    /* 08050E4C  08050e4c T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050E4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E4C = 1u;
    _cyc_08050E4C = 1u;
    uint32_t _rn_08050E4C = g_cpu.R[4];
    uint32_t _r_08050E4C;
    _r_08050E4C = _rn_08050E4C + 0x00000000u;
    arm_set_nzcv_add(_rn_08050E4C, 0x00000000u, _r_08050E4C);
    g_cpu.R[5] = _r_08050E4C;
    g_cpu.R[15] = 0x08050E4Eu;
    runtime_tick(_cyc_08050E4C);
    }
L_08050E4E:
    /* 08050E4E  08050e4e T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050E4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E4E = 1u;
    _cyc_08050E4E = 2u;
    uint32_t _base_08050E4E = g_cpu.R[3];
    uint32_t _off_08050E4E;
    _off_08050E4E = 0x00000008u;
    uint32_t _ea_08050E4E = _base_08050E4E + _off_08050E4E;
    uint32_t _post_08050E4E = _base_08050E4E + _off_08050E4E;
    _cyc_08050E4E += runtime_mem_cycles(_ea_08050E4E, 4u, 0u);
    uint32_t _v_08050E4E;
    { uint32_t _w = bus_read_u32(_ea_08050E4E & ~3u); uint32_t _rot = (_ea_08050E4E & 3u) * 8u; _v_08050E4E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E4E;
    g_cpu.R[15] = 0x08050E50u;
    runtime_tick(_cyc_08050E4E);
    }
L_08050E50:
    /* 08050E50  08050e50 T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050E50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E50 = 1u;
    _cyc_08050E50 = 1u;
    uint32_t _rm_08050E50 = g_cpu.R[4];
    uint32_t _op2_08050E50;
    uint32_t _co_08050E50;
    _op2_08050E50 = _rm_08050E50;
    _co_08050E50 = cpsr_c();
    uint32_t _rn_08050E50 = g_cpu.R[1];
    uint32_t _r_08050E50;
    _r_08050E50 = _rn_08050E50 - _op2_08050E50;
    arm_set_nzcv_sub(_rn_08050E50, _op2_08050E50, _r_08050E50);
    g_cpu.R[15] = 0x08050E52u;
    runtime_tick(_cyc_08050E50);
    }
L_08050E52:
    /* 08050E52  08050e52 T beq 0x08050e64 */
    {
    g_cpu.R[15] = 0x08050E52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E52 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050E52 = 3u;
        g_cpu.R[15] = 0x08050E64u;
        runtime_tick(_cyc_08050E52);
        gf_tfunc_08050E64();
        return;
    }
    g_cpu.R[15] = 0x08050E54u;
    runtime_tick(_cyc_08050E52);
    }
    /* fall-through to 0x08050E54 */
    g_cpu.R[15] = 0x08050E54u;
    runtime_dispatch(0x08050E54u);
    return;
}

/* 0x08050E88  mode=thumb  end=0x08050E98  branches=15  indirect */
void gf_tfunc_08050E88(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050E8Au: goto L_08050E8A;
        case 0x08050E8Cu: goto L_08050E8C;
        case 0x08050E8Eu: goto L_08050E8E;
        case 0x08050E90u: goto L_08050E90;
        case 0x08050E92u: goto L_08050E92;
        case 0x08050E94u: goto L_08050E94;
        case 0x08050E96u: goto L_08050E96;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050E88u);
L_08050E88:
    /* 08050E88  08050e88 T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050E88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E88 = 1u;
    _cyc_08050E88 = 2u;
    uint32_t _base_08050E88 = g_cpu.R[1];
    uint32_t _off_08050E88;
    _off_08050E88 = 0x00000000u;
    uint32_t _ea_08050E88 = _base_08050E88 + _off_08050E88;
    uint32_t _post_08050E88 = _base_08050E88 + _off_08050E88;
    _cyc_08050E88 += runtime_mem_cycles(_ea_08050E88, 4u, 0u);
    uint32_t _v_08050E88;
    { uint32_t _w = bus_read_u32(_ea_08050E88 & ~3u); uint32_t _rot = (_ea_08050E88 & 3u) * 8u; _v_08050E88 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E88;
    g_cpu.R[15] = 0x08050E8Au;
    runtime_tick(_cyc_08050E88);
    }
L_08050E8A:
    /* 08050E8A  08050e8a T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050E8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E8A = 1u;
    _cyc_08050E8A = 1u;
    uint32_t _base_08050E8A = g_cpu.R[2];
    uint32_t _off_08050E8A;
    _off_08050E8A = 0x00000000u;
    uint32_t _ea_08050E8A = _base_08050E8A + _off_08050E8A;
    uint32_t _post_08050E8A = _base_08050E8A + _off_08050E8A;
    _cyc_08050E8A += runtime_mem_cycles(_ea_08050E8A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E8Au, _ea_08050E8A & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E8A & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E8Cu;
    runtime_tick(_cyc_08050E8A);
    }
L_08050E8C:
    /* 08050E8C  08050e8c T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050E8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E8C = 1u;
    _cyc_08050E8C = 2u;
    uint32_t _base_08050E8C = g_cpu.R[1];
    uint32_t _off_08050E8C;
    _off_08050E8C = 0x00000004u;
    uint32_t _ea_08050E8C = _base_08050E8C + _off_08050E8C;
    uint32_t _post_08050E8C = _base_08050E8C + _off_08050E8C;
    _cyc_08050E8C += runtime_mem_cycles(_ea_08050E8C, 4u, 0u);
    uint32_t _v_08050E8C;
    { uint32_t _w = bus_read_u32(_ea_08050E8C & ~3u); uint32_t _rot = (_ea_08050E8C & 3u) * 8u; _v_08050E8C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050E8C;
    g_cpu.R[15] = 0x08050E8Eu;
    runtime_tick(_cyc_08050E8C);
    }
L_08050E8E:
    /* 08050E8E  08050e8e T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050E8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E8E = 1u;
    _cyc_08050E8E = 1u;
    uint32_t _base_08050E8E = g_cpu.R[2];
    uint32_t _off_08050E8E;
    _off_08050E8E = 0x00000004u;
    uint32_t _ea_08050E8E = _base_08050E8E + _off_08050E8E;
    uint32_t _post_08050E8E = _base_08050E8E + _off_08050E8E;
    _cyc_08050E8E += runtime_mem_cycles(_ea_08050E8E, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050E8Eu, _ea_08050E8E & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050E8E & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050E90u;
    runtime_tick(_cyc_08050E8E);
    }
L_08050E90:
    /* 08050E90  08050e90 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050E90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E90 = 1u;
    _cyc_08050E90 = 1u;
    uint32_t _rn_08050E90 = g_cpu.R[2];
    uint32_t _r_08050E90;
    _r_08050E90 = _rn_08050E90 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050E90, 0x00000008u, _r_08050E90);
    g_cpu.R[2] = _r_08050E90;
    g_cpu.R[15] = 0x08050E92u;
    runtime_tick(_cyc_08050E90);
    }
L_08050E92:
    /* 08050E92  08050e92 T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050E92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E92 = 1u;
    _cyc_08050E92 = 2u;
    uint32_t _base_08050E92 = g_cpu.R[1];
    uint32_t _off_08050E92;
    _off_08050E92 = 0x00000008u;
    uint32_t _ea_08050E92 = _base_08050E92 + _off_08050E92;
    uint32_t _post_08050E92 = _base_08050E92 + _off_08050E92;
    _cyc_08050E92 += runtime_mem_cycles(_ea_08050E92, 4u, 0u);
    uint32_t _v_08050E92;
    { uint32_t _w = bus_read_u32(_ea_08050E92 & ~3u); uint32_t _rot = (_ea_08050E92 & 3u) * 8u; _v_08050E92 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050E92;
    g_cpu.R[15] = 0x08050E94u;
    runtime_tick(_cyc_08050E92);
    }
L_08050E94:
    /* 08050E94  08050e94 T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050E94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E94 = 1u;
    _cyc_08050E94 = 1u;
    uint32_t _rm_08050E94 = g_cpu.R[5];
    uint32_t _op2_08050E94;
    uint32_t _co_08050E94;
    _op2_08050E94 = _rm_08050E94;
    _co_08050E94 = cpsr_c();
    uint32_t _rn_08050E94 = g_cpu.R[1];
    uint32_t _r_08050E94;
    _r_08050E94 = _rn_08050E94 - _op2_08050E94;
    arm_set_nzcv_sub(_rn_08050E94, _op2_08050E94, _r_08050E94);
    g_cpu.R[15] = 0x08050E96u;
    runtime_tick(_cyc_08050E94);
    }
L_08050E96:
    /* 08050E96  08050e96 T bne 0x08050e88 */
    {
    g_cpu.R[15] = 0x08050E96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050E96 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050E96 = 3u;
        g_cpu.R[15] = 0x08050E88u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050E96u, 0x08050E88u, 0u, 0u);
        runtime_tick(_cyc_08050E96);
        goto L_08050E88;
    }
    g_cpu.R[15] = 0x08050E98u;
    runtime_tick(_cyc_08050E96);
    }
    /* fall-through to 0x08050E98 */
    g_cpu.R[15] = 0x08050E98u;
    runtime_dispatch(0x08050E98u);
    return;
}

/* 0x08050EA2  mode=thumb  end=0x08050EB2  branches=13  indirect */
void gf_tfunc_08050EA2(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050EA4u: goto L_08050EA4;
        case 0x08050EA6u: goto L_08050EA6;
        case 0x08050EA8u: goto L_08050EA8;
        case 0x08050EAAu: goto L_08050EAA;
        case 0x08050EACu: goto L_08050EAC;
        case 0x08050EAEu: goto L_08050EAE;
        case 0x08050EB0u: goto L_08050EB0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050EA2u);
L_08050EA2:
    /* 08050EA2  08050ea2 T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050EA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EA2 = 1u;
    _cyc_08050EA2 = 2u;
    uint32_t _base_08050EA2 = g_cpu.R[1];
    uint32_t _off_08050EA2;
    _off_08050EA2 = 0x00000000u;
    uint32_t _ea_08050EA2 = _base_08050EA2 + _off_08050EA2;
    uint32_t _post_08050EA2 = _base_08050EA2 + _off_08050EA2;
    _cyc_08050EA2 += runtime_mem_cycles(_ea_08050EA2, 4u, 0u);
    uint32_t _v_08050EA2;
    { uint32_t _w = bus_read_u32(_ea_08050EA2 & ~3u); uint32_t _rot = (_ea_08050EA2 & 3u) * 8u; _v_08050EA2 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050EA2;
    g_cpu.R[15] = 0x08050EA4u;
    runtime_tick(_cyc_08050EA2);
    }
L_08050EA4:
    /* 08050EA4  08050ea4 T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050EA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EA4 = 1u;
    _cyc_08050EA4 = 1u;
    uint32_t _base_08050EA4 = g_cpu.R[2];
    uint32_t _off_08050EA4;
    _off_08050EA4 = 0x00000000u;
    uint32_t _ea_08050EA4 = _base_08050EA4 + _off_08050EA4;
    uint32_t _post_08050EA4 = _base_08050EA4 + _off_08050EA4;
    _cyc_08050EA4 += runtime_mem_cycles(_ea_08050EA4, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050EA4u, _ea_08050EA4 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050EA4 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050EA6u;
    runtime_tick(_cyc_08050EA4);
    }
L_08050EA6:
    /* 08050EA6  08050ea6 T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050EA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EA6 = 1u;
    _cyc_08050EA6 = 2u;
    uint32_t _base_08050EA6 = g_cpu.R[1];
    uint32_t _off_08050EA6;
    _off_08050EA6 = 0x00000004u;
    uint32_t _ea_08050EA6 = _base_08050EA6 + _off_08050EA6;
    uint32_t _post_08050EA6 = _base_08050EA6 + _off_08050EA6;
    _cyc_08050EA6 += runtime_mem_cycles(_ea_08050EA6, 4u, 0u);
    uint32_t _v_08050EA6;
    { uint32_t _w = bus_read_u32(_ea_08050EA6 & ~3u); uint32_t _rot = (_ea_08050EA6 & 3u) * 8u; _v_08050EA6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050EA6;
    g_cpu.R[15] = 0x08050EA8u;
    runtime_tick(_cyc_08050EA6);
    }
L_08050EA8:
    /* 08050EA8  08050ea8 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050EA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EA8 = 1u;
    _cyc_08050EA8 = 1u;
    uint32_t _base_08050EA8 = g_cpu.R[2];
    uint32_t _off_08050EA8;
    _off_08050EA8 = 0x00000004u;
    uint32_t _ea_08050EA8 = _base_08050EA8 + _off_08050EA8;
    uint32_t _post_08050EA8 = _base_08050EA8 + _off_08050EA8;
    _cyc_08050EA8 += runtime_mem_cycles(_ea_08050EA8, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050EA8u, _ea_08050EA8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050EA8 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050EAAu;
    runtime_tick(_cyc_08050EA8);
    }
L_08050EAA:
    /* 08050EAA  08050eaa T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050EAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EAA = 1u;
    _cyc_08050EAA = 1u;
    uint32_t _rn_08050EAA = g_cpu.R[2];
    uint32_t _r_08050EAA;
    _r_08050EAA = _rn_08050EAA + 0x00000008u;
    arm_set_nzcv_add(_rn_08050EAA, 0x00000008u, _r_08050EAA);
    g_cpu.R[2] = _r_08050EAA;
    g_cpu.R[15] = 0x08050EACu;
    runtime_tick(_cyc_08050EAA);
    }
L_08050EAC:
    /* 08050EAC  08050eac T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050EACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EAC = 1u;
    _cyc_08050EAC = 2u;
    uint32_t _base_08050EAC = g_cpu.R[1];
    uint32_t _off_08050EAC;
    _off_08050EAC = 0x00000008u;
    uint32_t _ea_08050EAC = _base_08050EAC + _off_08050EAC;
    uint32_t _post_08050EAC = _base_08050EAC + _off_08050EAC;
    _cyc_08050EAC += runtime_mem_cycles(_ea_08050EAC, 4u, 0u);
    uint32_t _v_08050EAC;
    { uint32_t _w = bus_read_u32(_ea_08050EAC & ~3u); uint32_t _rot = (_ea_08050EAC & 3u) * 8u; _v_08050EAC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050EAC;
    g_cpu.R[15] = 0x08050EAEu;
    runtime_tick(_cyc_08050EAC);
    }
L_08050EAE:
    /* 08050EAE  08050eae T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050EAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EAE = 1u;
    _cyc_08050EAE = 1u;
    uint32_t _rm_08050EAE = g_cpu.R[5];
    uint32_t _op2_08050EAE;
    uint32_t _co_08050EAE;
    _op2_08050EAE = _rm_08050EAE;
    _co_08050EAE = cpsr_c();
    uint32_t _rn_08050EAE = g_cpu.R[1];
    uint32_t _r_08050EAE;
    _r_08050EAE = _rn_08050EAE - _op2_08050EAE;
    arm_set_nzcv_sub(_rn_08050EAE, _op2_08050EAE, _r_08050EAE);
    g_cpu.R[15] = 0x08050EB0u;
    runtime_tick(_cyc_08050EAE);
    }
L_08050EB0:
    /* 08050EB0  08050eb0 T bne 0x08050ea2 */
    {
    g_cpu.R[15] = 0x08050EB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EB0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050EB0 = 3u;
        g_cpu.R[15] = 0x08050EA2u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050EB0u, 0x08050EA2u, 0u, 0u);
        runtime_tick(_cyc_08050EB0);
        goto L_08050EA2;
    }
    g_cpu.R[15] = 0x08050EB2u;
    runtime_tick(_cyc_08050EB0);
    }
    /* fall-through to 0x08050EB2 */
    g_cpu.R[15] = 0x08050EB2u;
    runtime_dispatch(0x08050EB2u);
    return;
}

/* 0x08050EE6  mode=thumb  end=0x08050EF0  branches=8  indirect */
void gf_tfunc_08050EE6(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050EE8u: goto L_08050EE8;
        case 0x08050EEAu: goto L_08050EEA;
        case 0x08050EECu: goto L_08050EEC;
        case 0x08050EEEu: goto L_08050EEE;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050EE6u);
    /* 08050EE6  08050ee6 T adds r3,r3,#0x10 */
    {
    g_cpu.R[15] = 0x08050EE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EE6 = 1u;
    _cyc_08050EE6 = 1u;
    uint32_t _rn_08050EE6 = g_cpu.R[3];
    uint32_t _r_08050EE6;
    _r_08050EE6 = _rn_08050EE6 + 0x00000010u;
    arm_set_nzcv_add(_rn_08050EE6, 0x00000010u, _r_08050EE6);
    g_cpu.R[3] = _r_08050EE6;
    g_cpu.R[15] = 0x08050EE8u;
    runtime_tick(_cyc_08050EE6);
    }
L_08050EE8:
    /* 08050EE8  08050ee8 T adds r5,r4,#0x0 */
    {
    g_cpu.R[15] = 0x08050EE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EE8 = 1u;
    _cyc_08050EE8 = 1u;
    uint32_t _rn_08050EE8 = g_cpu.R[4];
    uint32_t _r_08050EE8;
    _r_08050EE8 = _rn_08050EE8 + 0x00000000u;
    arm_set_nzcv_add(_rn_08050EE8, 0x00000000u, _r_08050EE8);
    g_cpu.R[5] = _r_08050EE8;
    g_cpu.R[15] = 0x08050EEAu;
    runtime_tick(_cyc_08050EE8);
    }
L_08050EEA:
    /* 08050EEA  08050eea T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x08050EEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EEA = 1u;
    _cyc_08050EEA = 2u;
    uint32_t _base_08050EEA = g_cpu.R[3];
    uint32_t _off_08050EEA;
    _off_08050EEA = 0x00000008u;
    uint32_t _ea_08050EEA = _base_08050EEA + _off_08050EEA;
    uint32_t _post_08050EEA = _base_08050EEA + _off_08050EEA;
    _cyc_08050EEA += runtime_mem_cycles(_ea_08050EEA, 4u, 0u);
    uint32_t _v_08050EEA;
    { uint32_t _w = bus_read_u32(_ea_08050EEA & ~3u); uint32_t _rot = (_ea_08050EEA & 3u) * 8u; _v_08050EEA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050EEA;
    g_cpu.R[15] = 0x08050EECu;
    runtime_tick(_cyc_08050EEA);
    }
L_08050EEC:
    /* 08050EEC  08050eec T cmps r1,r4 */
    {
    g_cpu.R[15] = 0x08050EECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EEC = 1u;
    _cyc_08050EEC = 1u;
    uint32_t _rm_08050EEC = g_cpu.R[4];
    uint32_t _op2_08050EEC;
    uint32_t _co_08050EEC;
    _op2_08050EEC = _rm_08050EEC;
    _co_08050EEC = cpsr_c();
    uint32_t _rn_08050EEC = g_cpu.R[1];
    uint32_t _r_08050EEC;
    _r_08050EEC = _rn_08050EEC - _op2_08050EEC;
    arm_set_nzcv_sub(_rn_08050EEC, _op2_08050EEC, _r_08050EEC);
    g_cpu.R[15] = 0x08050EEEu;
    runtime_tick(_cyc_08050EEC);
    }
L_08050EEE:
    /* 08050EEE  08050eee T beq 0x08050f00 */
    {
    g_cpu.R[15] = 0x08050EEEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050EEE = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_08050EEE = 3u;
        g_cpu.R[15] = 0x08050F00u;
        runtime_tick(_cyc_08050EEE);
        gf_tfunc_08050F00();
        return;
    }
    g_cpu.R[15] = 0x08050EF0u;
    runtime_tick(_cyc_08050EEE);
    }
    /* fall-through to 0x08050EF0 */
    g_cpu.R[15] = 0x08050EF0u;
    runtime_dispatch(0x08050EF0u);
    return;
}

/* 0x08050F0A  mode=thumb  end=0x08050F1A  branches=5  indirect */
void gf_tfunc_08050F0A(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x08050F0Cu: goto L_08050F0C;
        case 0x08050F0Eu: goto L_08050F0E;
        case 0x08050F10u: goto L_08050F10;
        case 0x08050F12u: goto L_08050F12;
        case 0x08050F14u: goto L_08050F14;
        case 0x08050F16u: goto L_08050F16;
        case 0x08050F18u: goto L_08050F18;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x08050F0Au);
L_08050F0A:
    /* 08050F0A  08050f0a T ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x08050F0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F0A = 1u;
    _cyc_08050F0A = 2u;
    uint32_t _base_08050F0A = g_cpu.R[1];
    uint32_t _off_08050F0A;
    _off_08050F0A = 0x00000000u;
    uint32_t _ea_08050F0A = _base_08050F0A + _off_08050F0A;
    uint32_t _post_08050F0A = _base_08050F0A + _off_08050F0A;
    _cyc_08050F0A += runtime_mem_cycles(_ea_08050F0A, 4u, 0u);
    uint32_t _v_08050F0A;
    { uint32_t _w = bus_read_u32(_ea_08050F0A & ~3u); uint32_t _rot = (_ea_08050F0A & 3u) * 8u; _v_08050F0A = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050F0A;
    g_cpu.R[15] = 0x08050F0Cu;
    runtime_tick(_cyc_08050F0A);
    }
L_08050F0C:
    /* 08050F0C  08050f0c T str r0,[r2] */
    {
    g_cpu.R[15] = 0x08050F0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F0C = 1u;
    _cyc_08050F0C = 1u;
    uint32_t _base_08050F0C = g_cpu.R[2];
    uint32_t _off_08050F0C;
    _off_08050F0C = 0x00000000u;
    uint32_t _ea_08050F0C = _base_08050F0C + _off_08050F0C;
    uint32_t _post_08050F0C = _base_08050F0C + _off_08050F0C;
    _cyc_08050F0C += runtime_mem_cycles(_ea_08050F0C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050F0Cu, _ea_08050F0C & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050F0C & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050F0Eu;
    runtime_tick(_cyc_08050F0C);
    }
L_08050F0E:
    /* 08050F0E  08050f0e T ldr r0,[r1,#0x4] */
    {
    g_cpu.R[15] = 0x08050F0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F0E = 1u;
    _cyc_08050F0E = 2u;
    uint32_t _base_08050F0E = g_cpu.R[1];
    uint32_t _off_08050F0E;
    _off_08050F0E = 0x00000004u;
    uint32_t _ea_08050F0E = _base_08050F0E + _off_08050F0E;
    uint32_t _post_08050F0E = _base_08050F0E + _off_08050F0E;
    _cyc_08050F0E += runtime_mem_cycles(_ea_08050F0E, 4u, 0u);
    uint32_t _v_08050F0E;
    { uint32_t _w = bus_read_u32(_ea_08050F0E & ~3u); uint32_t _rot = (_ea_08050F0E & 3u) * 8u; _v_08050F0E = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_08050F0E;
    g_cpu.R[15] = 0x08050F10u;
    runtime_tick(_cyc_08050F0E);
    }
L_08050F10:
    /* 08050F10  08050f10 T str r0,[r2,#0x4] */
    {
    g_cpu.R[15] = 0x08050F10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F10 = 1u;
    _cyc_08050F10 = 1u;
    uint32_t _base_08050F10 = g_cpu.R[2];
    uint32_t _off_08050F10;
    _off_08050F10 = 0x00000004u;
    uint32_t _ea_08050F10 = _base_08050F10 + _off_08050F10;
    uint32_t _post_08050F10 = _base_08050F10 + _off_08050F10;
    _cyc_08050F10 += runtime_mem_cycles(_ea_08050F10, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x08050F10u, _ea_08050F10 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_08050F10 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x08050F12u;
    runtime_tick(_cyc_08050F10);
    }
L_08050F12:
    /* 08050F12  08050f12 T adds r2,r2,#0x8 */
    {
    g_cpu.R[15] = 0x08050F12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F12 = 1u;
    _cyc_08050F12 = 1u;
    uint32_t _rn_08050F12 = g_cpu.R[2];
    uint32_t _r_08050F12;
    _r_08050F12 = _rn_08050F12 + 0x00000008u;
    arm_set_nzcv_add(_rn_08050F12, 0x00000008u, _r_08050F12);
    g_cpu.R[2] = _r_08050F12;
    g_cpu.R[15] = 0x08050F14u;
    runtime_tick(_cyc_08050F12);
    }
L_08050F14:
    /* 08050F14  08050f14 T ldr r1,[r1,#0x8] */
    {
    g_cpu.R[15] = 0x08050F14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F14 = 1u;
    _cyc_08050F14 = 2u;
    uint32_t _base_08050F14 = g_cpu.R[1];
    uint32_t _off_08050F14;
    _off_08050F14 = 0x00000008u;
    uint32_t _ea_08050F14 = _base_08050F14 + _off_08050F14;
    uint32_t _post_08050F14 = _base_08050F14 + _off_08050F14;
    _cyc_08050F14 += runtime_mem_cycles(_ea_08050F14, 4u, 0u);
    uint32_t _v_08050F14;
    { uint32_t _w = bus_read_u32(_ea_08050F14 & ~3u); uint32_t _rot = (_ea_08050F14 & 3u) * 8u; _v_08050F14 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_08050F14;
    g_cpu.R[15] = 0x08050F16u;
    runtime_tick(_cyc_08050F14);
    }
L_08050F16:
    /* 08050F16  08050f16 T cmps r1,r5 */
    {
    g_cpu.R[15] = 0x08050F16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F16 = 1u;
    _cyc_08050F16 = 1u;
    uint32_t _rm_08050F16 = g_cpu.R[5];
    uint32_t _op2_08050F16;
    uint32_t _co_08050F16;
    _op2_08050F16 = _rm_08050F16;
    _co_08050F16 = cpsr_c();
    uint32_t _rn_08050F16 = g_cpu.R[1];
    uint32_t _r_08050F16;
    _r_08050F16 = _rn_08050F16 - _op2_08050F16;
    arm_set_nzcv_sub(_rn_08050F16, _op2_08050F16, _r_08050F16);
    g_cpu.R[15] = 0x08050F18u;
    runtime_tick(_cyc_08050F16);
    }
L_08050F18:
    /* 08050F18  08050f18 T bne 0x08050f0a */
    {
    g_cpu.R[15] = 0x08050F18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_08050F18 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_08050F18 = 3u;
        g_cpu.R[15] = 0x08050F0Au;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x08050F18u, 0x08050F0Au, 0u, 0u);
        runtime_tick(_cyc_08050F18);
        goto L_08050F0A;
    }
    g_cpu.R[15] = 0x08050F1Au;
    runtime_tick(_cyc_08050F18);
    }
    /* fall-through to 0x08050F1A */
    g_cpu.R[15] = 0x08050F1Au;
    runtime_dispatch(0x08050F1Au);
    return;
}
