// AUTO-GENERATED from gba_recompile cartridge output. DO NOT EDIT.
// Module: iwram_relocated_code.cpp; functions: 46.
#include "runtime_arm.h"
#include "cartridge_functions.h"

/* 0x03000C7C  mode=arm  end=0x03000CAC  branches=1  indirect */
void gf_afunc_03000C7C(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000C80u: goto L_03000C80;
        case 0x03000C84u: goto L_03000C84;
        case 0x03000C88u: goto L_03000C88;
        case 0x03000C8Cu: goto L_03000C8C;
        case 0x03000C90u: goto L_03000C90;
        case 0x03000C94u: goto L_03000C94;
        case 0x03000C98u: goto L_03000C98;
        case 0x03000C9Cu: goto L_03000C9C;
        case 0x03000CA0u: goto L_03000CA0;
        case 0x03000CA4u: goto L_03000CA4;
        case 0x03000CA8u: goto L_03000CA8;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000C7Cu);
L_03000C7C:
    /* 03000C7C  03000c7c A ldrsb r0,[r5] */
    {
    g_cpu.R[15] = 0x03000C7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C7C = 1u;
    _cyc_03000C7C = 2u;
    uint32_t _base_03000C7C = g_cpu.R[5];
    uint32_t _off_03000C7C;
    _off_03000C7C = 0x00000000u;
    uint32_t _ea_03000C7C = _base_03000C7C + _off_03000C7C;
    uint32_t _post_03000C7C = _base_03000C7C + _off_03000C7C;
    _cyc_03000C7C += runtime_mem_cycles(_ea_03000C7C, 1u, 0u);
    uint32_t _v_03000C7C;
    _v_03000C7C = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000C7C);
    g_cpu.R[0] = _v_03000C7C;
    g_cpu.R[15] = 0x03000C80u;
    runtime_tick(_cyc_03000C7C);
    }
L_03000C80:
    /* 03000C80  03000c80 A ldrsb r1,[r7],#0x1 */
    {
    g_cpu.R[15] = 0x03000C80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C80 = 1u;
    _cyc_03000C80 = 2u;
    uint32_t _base_03000C80 = g_cpu.R[7];
    uint32_t _off_03000C80;
    _off_03000C80 = 0x00000001u;
    uint32_t _ea_03000C80 = _base_03000C80;
    uint32_t _post_03000C80 = _base_03000C80 + _off_03000C80;
    _cyc_03000C80 += runtime_mem_cycles(_ea_03000C80, 1u, 0u);
    uint32_t _v_03000C80;
    _v_03000C80 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000C80);
    if (7u != 1u) g_cpu.R[7] = _post_03000C80;
    g_cpu.R[1] = _v_03000C80;
    g_cpu.R[15] = 0x03000C84u;
    runtime_tick(_cyc_03000C80);
    }
L_03000C84:
    /* 03000C84  03000c84 A add r0,r0,r1 */
    {
    g_cpu.R[15] = 0x03000C84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C84 = 1u;
    _cyc_03000C84 = 1u;
    uint32_t _rm_03000C84 = g_cpu.R[1];
    uint32_t _op2_03000C84;
    uint32_t _co_03000C84;
    _op2_03000C84 = _rm_03000C84;
    _co_03000C84 = cpsr_c();
    uint32_t _rn_03000C84 = g_cpu.R[0];
    uint32_t _r_03000C84;
    _r_03000C84 = _rn_03000C84 + _op2_03000C84;
    g_cpu.R[0] = _r_03000C84;
    g_cpu.R[15] = 0x03000C88u;
    runtime_tick(_cyc_03000C84);
    }
L_03000C88:
    /* 03000C88  03000c88 A mul r1,r0,r3 */
    {
    g_cpu.R[15] = 0x03000C88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C88 = 1u;
    _cyc_03000C88 = 1u;
    _cyc_03000C88 += runtime_mul_cycles(g_cpu.R[3], 1u, 0u);
    uint32_t _r_03000C88 = g_cpu.R[0] * g_cpu.R[3];
    g_cpu.R[1] = _r_03000C88;
    g_cpu.R[15] = 0x03000C8Cu;
    runtime_tick(_cyc_03000C88);
    }
L_03000C8C:
    /* 03000C8C  03000c8c A mov r0,r1,asr #8 */
    {
    g_cpu.R[15] = 0x03000C8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C8C = 1u;
    _cyc_03000C8C = 1u;
    uint32_t _rm_03000C8C = g_cpu.R[1];
    uint32_t _op2_03000C8C;
    uint32_t _co_03000C8C;
    _op2_03000C8C = (uint32_t)((int32_t)_rm_03000C8C >> 8);
    _co_03000C8C = (_rm_03000C8C >> 7) & 1u;
    uint32_t _r_03000C8C;
    _r_03000C8C = _op2_03000C8C;
    g_cpu.R[0] = _r_03000C8C;
    g_cpu.R[15] = 0x03000C90u;
    runtime_tick(_cyc_03000C8C);
    }
L_03000C90:
    /* 03000C90  03000c90 A tsts r0,#0x80 */
    {
    g_cpu.R[15] = 0x03000C90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C90 = 1u;
    _cyc_03000C90 = 1u;
    uint32_t _rn_03000C90 = g_cpu.R[0];
    uint32_t _r_03000C90;
    _r_03000C90 = _rn_03000C90 & 0x00000080u;
    arm_set_nzc_logic(_r_03000C90, cpsr_c());
    g_cpu.R[15] = 0x03000C94u;
    runtime_tick(_cyc_03000C90);
    }
L_03000C94:
    /* 03000C94  03000c94 A addne r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x03000C94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C94 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000C94 = 1u;
        uint32_t _rn_03000C94 = g_cpu.R[0];
        uint32_t _r_03000C94;
        _r_03000C94 = _rn_03000C94 + 0x00000001u;
        g_cpu.R[0] = _r_03000C94;
    }
    g_cpu.R[15] = 0x03000C98u;
    runtime_tick(_cyc_03000C94);
    }
L_03000C98:
    /* 03000C98  03000c98 A strb r0,[r5],#0x1 */
    {
    g_cpu.R[15] = 0x03000C98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C98 = 1u;
    _cyc_03000C98 = 1u;
    uint32_t _base_03000C98 = g_cpu.R[5];
    uint32_t _off_03000C98;
    _off_03000C98 = 0x00000001u;
    uint32_t _ea_03000C98 = _base_03000C98;
    uint32_t _post_03000C98 = _base_03000C98 + _off_03000C98;
    _cyc_03000C98 += runtime_mem_cycles(_ea_03000C98, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000C98u, _ea_03000C98, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_03000C98, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[5] = _post_03000C98;
    g_cpu.R[15] = 0x03000C9Cu;
    runtime_tick(_cyc_03000C98);
    }
L_03000C9C:
    /* 03000C9C  03000c9c A subs r4,r4,#0x1 */
    {
    g_cpu.R[15] = 0x03000C9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C9C = 1u;
    _cyc_03000C9C = 1u;
    uint32_t _rn_03000C9C = g_cpu.R[4];
    uint32_t _r_03000C9C;
    _r_03000C9C = _rn_03000C9C - 0x00000001u;
    arm_set_nzcv_sub(_rn_03000C9C, 0x00000001u, _r_03000C9C);
    g_cpu.R[4] = _r_03000C9C;
    g_cpu.R[15] = 0x03000CA0u;
    runtime_tick(_cyc_03000C9C);
    }
L_03000CA0:
    /* 03000CA0  03000ca0 A bgt 0x03000c7c */
    {
    g_cpu.R[15] = 0x03000CA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CA0 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_03000CA0 = 3u;
        g_cpu.R[15] = 0x03000C7Cu;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x03000CA0u, 0x03000C7Cu, 0u, 0u);
        runtime_tick(_cyc_03000CA0);
        goto L_03000C7C;
    }
    g_cpu.R[15] = 0x03000CA4u;
    runtime_tick(_cyc_03000CA0);
    }
L_03000CA4:
    /* 03000CA4  03000ca4 A add r0,r15,#0x1f */
    {
    g_cpu.R[15] = 0x03000CA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CA4 = 1u;
    _cyc_03000CA4 = 1u;
    uint32_t _rn_03000CA4 = 0x03000CACu;
    uint32_t _r_03000CA4;
    _r_03000CA4 = _rn_03000CA4 + 0x0000001Fu;
    g_cpu.R[0] = _r_03000CA4;
    g_cpu.R[15] = 0x03000CA8u;
    runtime_tick(_cyc_03000CA4);
    }
L_03000CA8:
    /* 03000CA8  03000ca8 A bx r0 */
    {
    g_cpu.R[15] = 0x03000CA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CA8 = 1u;
    _cyc_03000CA8 = 3u;
    uint32_t _bxt_03000CA8 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_03000CA8 & ~1u;
    if (_bxt_03000CA8 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000CA8);
    runtime_dispatch_with_exchange(_bxt_03000CA8);
    return;
    g_cpu.R[15] = 0x03000CACu;
    runtime_tick(_cyc_03000CA8);
    }
    /* fall-through to 0x03000CAC */
    g_cpu.R[15] = 0x03000CACu;
    runtime_dispatch(0x03000CACu);
    return;
}

/* 0x03000D2E  mode=thumb  end=0x03000D3E  branches=3 */
void gf_tfunc_03000D2E(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000D30u: goto L_03000D30;
        case 0x03000D32u: goto L_03000D32;
        case 0x03000D34u: goto L_03000D34;
        case 0x03000D36u: goto L_03000D36;
        case 0x03000D38u: goto L_03000D38;
        case 0x03000D3Au: goto L_03000D3A;
        case 0x03000D3Cu: goto L_03000D3C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000D2Eu);
    /* 03000D2E  03000d2e T ldrb r5,[r4,#0x9] */
    {
    g_cpu.R[15] = 0x03000D2Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D2E = 1u;
    _cyc_03000D2E = 2u;
    uint32_t _base_03000D2E = g_cpu.R[4];
    uint32_t _off_03000D2E;
    _off_03000D2E = 0x00000009u;
    uint32_t _ea_03000D2E = _base_03000D2E + _off_03000D2E;
    uint32_t _post_03000D2E = _base_03000D2E + _off_03000D2E;
    _cyc_03000D2E += runtime_mem_cycles(_ea_03000D2E, 1u, 0u);
    uint32_t _v_03000D2E;
    _v_03000D2E = bus_read_u8(_ea_03000D2E);
    g_cpu.R[5] = _v_03000D2E;
    g_cpu.R[15] = 0x03000D30u;
    runtime_tick(_cyc_03000D2E);
    }
L_03000D30:
    /* 03000D30  03000d30 T movs r0,#0x4 */
    {
    g_cpu.R[15] = 0x03000D30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D30 = 1u;
    _cyc_03000D30 = 1u;
    uint32_t _r_03000D30;
    _r_03000D30 = 0x00000004u;
    arm_set_nzc_logic(_r_03000D30, cpsr_c());
    g_cpu.R[0] = _r_03000D30;
    g_cpu.R[15] = 0x03000D32u;
    runtime_tick(_cyc_03000D30);
    }
L_03000D32:
    /* 03000D32  03000d32 T tsts r0,r6 */
    {
    g_cpu.R[15] = 0x03000D32u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D32 = 1u;
    _cyc_03000D32 = 1u;
    uint32_t _rm_03000D32 = g_cpu.R[6];
    uint32_t _op2_03000D32;
    uint32_t _co_03000D32;
    _op2_03000D32 = _rm_03000D32;
    _co_03000D32 = cpsr_c();
    uint32_t _rn_03000D32 = g_cpu.R[0];
    uint32_t _r_03000D32;
    _r_03000D32 = _rn_03000D32 & _op2_03000D32;
    arm_set_nzc_logic(_r_03000D32, _co_03000D32);
    g_cpu.R[15] = 0x03000D34u;
    runtime_tick(_cyc_03000D32);
    }
L_03000D34:
    /* 03000D34  03000d34 T beq 0x03000d44 */
    {
    g_cpu.R[15] = 0x03000D34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D34 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000D34 = 3u;
        g_cpu.R[15] = 0x03000D44u;
        runtime_tick(_cyc_03000D34);
        gf_tfunc_03000D44();
        return;
    }
    g_cpu.R[15] = 0x03000D36u;
    runtime_tick(_cyc_03000D34);
    }
L_03000D36:
    /* 03000D36  03000d36 T ldrb r0,[r4,#0xd] */
    {
    g_cpu.R[15] = 0x03000D36u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D36 = 1u;
    _cyc_03000D36 = 2u;
    uint32_t _base_03000D36 = g_cpu.R[4];
    uint32_t _off_03000D36;
    _off_03000D36 = 0x0000000Du;
    uint32_t _ea_03000D36 = _base_03000D36 + _off_03000D36;
    uint32_t _post_03000D36 = _base_03000D36 + _off_03000D36;
    _cyc_03000D36 += runtime_mem_cycles(_ea_03000D36, 1u, 0u);
    uint32_t _v_03000D36;
    _v_03000D36 = bus_read_u8(_ea_03000D36);
    g_cpu.R[0] = _v_03000D36;
    g_cpu.R[15] = 0x03000D38u;
    runtime_tick(_cyc_03000D36);
    }
L_03000D38:
    /* 03000D38  03000d38 T subs r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x03000D38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D38 = 1u;
    _cyc_03000D38 = 1u;
    uint32_t _rn_03000D38 = g_cpu.R[0];
    uint32_t _r_03000D38;
    _r_03000D38 = _rn_03000D38 - 0x00000001u;
    arm_set_nzcv_sub(_rn_03000D38, 0x00000001u, _r_03000D38);
    g_cpu.R[0] = _r_03000D38;
    g_cpu.R[15] = 0x03000D3Au;
    runtime_tick(_cyc_03000D38);
    }
L_03000D3A:
    /* 03000D3A  03000d3a T strb r0,[r4,#0xd] */
    {
    g_cpu.R[15] = 0x03000D3Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D3A = 1u;
    _cyc_03000D3A = 1u;
    uint32_t _base_03000D3A = g_cpu.R[4];
    uint32_t _off_03000D3A;
    _off_03000D3A = 0x0000000Du;
    uint32_t _ea_03000D3A = _base_03000D3A + _off_03000D3A;
    uint32_t _post_03000D3A = _base_03000D3A + _off_03000D3A;
    _cyc_03000D3A += runtime_mem_cycles(_ea_03000D3A, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D3Au, _ea_03000D3A, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_03000D3A, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x03000D3Cu;
    runtime_tick(_cyc_03000D3A);
    }
L_03000D3C:
    /* 03000D3C  03000d3c T bhi 0x03000d94 */
    {
    g_cpu.R[15] = 0x03000D3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D3C = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_03000D3C = 3u;
        g_cpu.R[15] = 0x03000D94u;
        runtime_tick(_cyc_03000D3C);
        gf_tfunc_03000D94();
        return;
    }
    g_cpu.R[15] = 0x03000D3Eu;
    runtime_tick(_cyc_03000D3C);
    }
    /* fall-through to 0x03000D3E */
    g_cpu.R[15] = 0x03000D3Eu;
    runtime_dispatch(0x03000D3Eu);
    return;
}

/* 0x03000D86  mode=thumb  end=0x03000D94  branches=2  indirect */
void gf_tfunc_03000D86(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000D88u: goto L_03000D88;
        case 0x03000D8Au: goto L_03000D8A;
        case 0x03000D8Cu: goto L_03000D8C;
        case 0x03000D8Eu: goto L_03000D8E;
        case 0x03000D90u: goto L_03000D90;
        case 0x03000D92u: goto L_03000D92;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000D86u);
    /* 03000D86  03000d86 T ldrb r0,[r4,#0x4] */
    {
    g_cpu.R[15] = 0x03000D86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D86 = 1u;
    _cyc_03000D86 = 2u;
    uint32_t _base_03000D86 = g_cpu.R[4];
    uint32_t _off_03000D86;
    _off_03000D86 = 0x00000004u;
    uint32_t _ea_03000D86 = _base_03000D86 + _off_03000D86;
    uint32_t _post_03000D86 = _base_03000D86 + _off_03000D86;
    _cyc_03000D86 += runtime_mem_cycles(_ea_03000D86, 1u, 0u);
    uint32_t _v_03000D86;
    _v_03000D86 = bus_read_u8(_ea_03000D86);
    g_cpu.R[0] = _v_03000D86;
    g_cpu.R[15] = 0x03000D88u;
    runtime_tick(_cyc_03000D86);
    }
L_03000D88:
    /* 03000D88  03000d88 T adds r5,r5,r0 */
    {
    g_cpu.R[15] = 0x03000D88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D88 = 1u;
    _cyc_03000D88 = 1u;
    uint32_t _rm_03000D88 = g_cpu.R[0];
    uint32_t _op2_03000D88;
    uint32_t _co_03000D88;
    _op2_03000D88 = _rm_03000D88;
    _co_03000D88 = cpsr_c();
    uint32_t _rn_03000D88 = g_cpu.R[5];
    uint32_t _r_03000D88;
    _r_03000D88 = _rn_03000D88 + _op2_03000D88;
    arm_set_nzcv_add(_rn_03000D88, _op2_03000D88, _r_03000D88);
    g_cpu.R[5] = _r_03000D88;
    g_cpu.R[15] = 0x03000D8Au;
    runtime_tick(_cyc_03000D88);
    }
L_03000D8A:
    /* 03000D8A  03000d8a T cmps r5,#0xff */
    {
    g_cpu.R[15] = 0x03000D8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D8A = 1u;
    _cyc_03000D8A = 1u;
    uint32_t _rn_03000D8A = g_cpu.R[5];
    uint32_t _r_03000D8A;
    _r_03000D8A = _rn_03000D8A - 0x000000FFu;
    arm_set_nzcv_sub(_rn_03000D8A, 0x000000FFu, _r_03000D8A);
    g_cpu.R[15] = 0x03000D8Cu;
    runtime_tick(_cyc_03000D8A);
    }
L_03000D8C:
    /* 03000D8C  03000d8c T bcc 0x03000d94 */
    {
    g_cpu.R[15] = 0x03000D8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D8C = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_03000D8C = 3u;
        g_cpu.R[15] = 0x03000D94u;
        runtime_tick(_cyc_03000D8C);
        gf_tfunc_03000D94();
        return;
    }
    g_cpu.R[15] = 0x03000D8Eu;
    runtime_tick(_cyc_03000D8C);
    }
L_03000D8E:
    /* 03000D8E  03000d8e T movs r5,#0xff */
    {
    g_cpu.R[15] = 0x03000D8Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D8E = 1u;
    _cyc_03000D8E = 1u;
    uint32_t _r_03000D8E;
    _r_03000D8E = 0x000000FFu;
    arm_set_nzc_logic(_r_03000D8E, cpsr_c());
    g_cpu.R[5] = _r_03000D8E;
    g_cpu.R[15] = 0x03000D90u;
    runtime_tick(_cyc_03000D8E);
    }
L_03000D90:
    /* 03000D90  03000d90 T subs r6,r6,#0x1 */
    {
    g_cpu.R[15] = 0x03000D90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D90 = 1u;
    _cyc_03000D90 = 1u;
    uint32_t _rn_03000D90 = g_cpu.R[6];
    uint32_t _r_03000D90;
    _r_03000D90 = _rn_03000D90 - 0x00000001u;
    arm_set_nzcv_sub(_rn_03000D90, 0x00000001u, _r_03000D90);
    g_cpu.R[6] = _r_03000D90;
    g_cpu.R[15] = 0x03000D92u;
    runtime_tick(_cyc_03000D90);
    }
L_03000D92:
    /* 03000D92  03000d92 T strb r6,[r4] */
    {
    g_cpu.R[15] = 0x03000D92u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D92 = 1u;
    _cyc_03000D92 = 1u;
    uint32_t _base_03000D92 = g_cpu.R[4];
    uint32_t _off_03000D92;
    _off_03000D92 = 0x00000000u;
    uint32_t _ea_03000D92 = _base_03000D92 + _off_03000D92;
    uint32_t _post_03000D92 = _base_03000D92 + _off_03000D92;
    _cyc_03000D92 += runtime_mem_cycles(_ea_03000D92, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D92u, _ea_03000D92, (uint32_t)(g_cpu.R[6] & 0xFFu), 1u);
    bus_write_u8(_ea_03000D92, (uint8_t)(g_cpu.R[6] & 0xFFu));
    g_cpu.R[15] = 0x03000D94u;
    runtime_tick(_cyc_03000D92);
    }
    /* fall-through to 0x03000D94 */
    g_cpu.R[15] = 0x03000D94u;
    runtime_dispatch(0x03000D94u);
    return;
}

/* 0x03000DD0  mode=arm  end=0x03000DE8  branches=10 */
void gf_afunc_03000DD0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000DD4u: goto L_03000DD4;
        case 0x03000DD8u: goto L_03000DD8;
        case 0x03000DDCu: goto L_03000DDC;
        case 0x03000DE0u: goto L_03000DE0;
        case 0x03000DE4u: goto L_03000DE4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000DD0u);
    /* 03000DD0  03000dd0 A str r8,[r13] */
    {
    g_cpu.R[15] = 0x03000DD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DD0 = 1u;
    _cyc_03000DD0 = 1u;
    uint32_t _base_03000DD0 = g_cpu.R[13];
    uint32_t _off_03000DD0;
    _off_03000DD0 = 0x00000000u;
    uint32_t _ea_03000DD0 = _base_03000DD0 + _off_03000DD0;
    uint32_t _post_03000DD0 = _base_03000DD0 + _off_03000DD0;
    _cyc_03000DD0 += runtime_mem_cycles(_ea_03000DD0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000DD0u, _ea_03000DD0 & ~3u, g_cpu.R[8], 4u);
    bus_write_u32(_ea_03000DD0 & ~3u, g_cpu.R[8]);
    g_cpu.R[15] = 0x03000DD4u;
    runtime_tick(_cyc_03000DD0);
    }
L_03000DD4:
    /* 03000DD4  03000dd4 A ldrb r10,[r4,#0xa] */
    {
    g_cpu.R[15] = 0x03000DD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DD4 = 1u;
    _cyc_03000DD4 = 2u;
    uint32_t _base_03000DD4 = g_cpu.R[4];
    uint32_t _off_03000DD4;
    _off_03000DD4 = 0x0000000Au;
    uint32_t _ea_03000DD4 = _base_03000DD4 + _off_03000DD4;
    uint32_t _post_03000DD4 = _base_03000DD4 + _off_03000DD4;
    _cyc_03000DD4 += runtime_mem_cycles(_ea_03000DD4, 1u, 0u);
    uint32_t _v_03000DD4;
    _v_03000DD4 = bus_read_u8(_ea_03000DD4);
    g_cpu.R[10] = _v_03000DD4;
    g_cpu.R[15] = 0x03000DD8u;
    runtime_tick(_cyc_03000DD4);
    }
L_03000DD8:
    /* 03000DD8  03000dd8 A mov r10,r10,lsl #16 */
    {
    g_cpu.R[15] = 0x03000DD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DD8 = 1u;
    _cyc_03000DD8 = 1u;
    uint32_t _rm_03000DD8 = g_cpu.R[10];
    uint32_t _op2_03000DD8;
    uint32_t _co_03000DD8;
    _op2_03000DD8 = _rm_03000DD8 << 16;
    _co_03000DD8 = (_rm_03000DD8 >> 16) & 1u;
    uint32_t _r_03000DD8;
    _r_03000DD8 = _op2_03000DD8;
    g_cpu.R[10] = _r_03000DD8;
    g_cpu.R[15] = 0x03000DDCu;
    runtime_tick(_cyc_03000DD8);
    }
L_03000DDC:
    /* 03000DDC  03000ddc A ldrb r0,[r4,#0x1] */
    {
    g_cpu.R[15] = 0x03000DDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DDC = 1u;
    _cyc_03000DDC = 2u;
    uint32_t _base_03000DDC = g_cpu.R[4];
    uint32_t _off_03000DDC;
    _off_03000DDC = 0x00000001u;
    uint32_t _ea_03000DDC = _base_03000DDC + _off_03000DDC;
    uint32_t _post_03000DDC = _base_03000DDC + _off_03000DDC;
    _cyc_03000DDC += runtime_mem_cycles(_ea_03000DDC, 1u, 0u);
    uint32_t _v_03000DDC;
    _v_03000DDC = bus_read_u8(_ea_03000DDC);
    g_cpu.R[0] = _v_03000DDC;
    g_cpu.R[15] = 0x03000DE0u;
    runtime_tick(_cyc_03000DDC);
    }
L_03000DE0:
    /* 03000DE0  03000de0 A tsts r0,#0x8 */
    {
    g_cpu.R[15] = 0x03000DE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DE0 = 1u;
    _cyc_03000DE0 = 1u;
    uint32_t _rn_03000DE0 = g_cpu.R[0];
    uint32_t _r_03000DE0;
    _r_03000DE0 = _rn_03000DE0 & 0x00000008u;
    arm_set_nzc_logic(_r_03000DE0, cpsr_c());
    g_cpu.R[15] = 0x03000DE4u;
    runtime_tick(_cyc_03000DE0);
    }
L_03000DE4:
    /* 03000DE4  03000de4 A beq 0x03000ed8 */
    {
    g_cpu.R[15] = 0x03000DE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DE4 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000DE4 = 3u;
        g_cpu.R[15] = 0x03000ED8u;
        runtime_tick(_cyc_03000DE4);
        gf_afunc_03000ED8();
        return;
    }
    g_cpu.R[15] = 0x03000DE8u;
    runtime_tick(_cyc_03000DE4);
    }
    /* fall-through to 0x03000DE8 */
    g_cpu.R[15] = 0x03000DE8u;
    runtime_dispatch(0x03000DE8u);
    return;
}

/* 0x03000F38  mode=arm  end=0x03000F58  branches=2  indirect */
void gf_afunc_03000F38(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000F3Cu: goto L_03000F3C;
        case 0x03000F40u: goto L_03000F40;
        case 0x03000F44u: goto L_03000F44;
        case 0x03000F48u: goto L_03000F48;
        case 0x03000F4Cu: goto L_03000F4C;
        case 0x03000F50u: goto L_03000F50;
        case 0x03000F54u: goto L_03000F54;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000F38u);
    /* 03000F38  03000f38 A adds r5,r5,#0x40000000 */
    {
    g_cpu.R[15] = 0x03000F38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F38 = 1u;
    _cyc_03000F38 = 1u;
    uint32_t _rn_03000F38 = g_cpu.R[5];
    uint32_t _r_03000F38;
    _r_03000F38 = _rn_03000F38 + 0x40000000u;
    arm_set_nzcv_add(_rn_03000F38, 0x40000000u, _r_03000F38);
    g_cpu.R[5] = _r_03000F38;
    g_cpu.R[15] = 0x03000F3Cu;
    runtime_tick(_cyc_03000F38);
    }
L_03000F3C:
    /* 03000F3C  03000f3c A bcc 0x03000ef8 */
    {
    g_cpu.R[15] = 0x03000F3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F3C = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_03000F3C = 3u;
        g_cpu.R[15] = 0x03000EF8u;
        runtime_tick(_cyc_03000F3C);
        gf_afunc_03000EF8();
        return;
    }
    g_cpu.R[15] = 0x03000F40u;
    runtime_tick(_cyc_03000F3C);
    }
L_03000F40:
    /* 03000F40  03000f40 A str r6,[r5],#0x4 */
    {
    g_cpu.R[15] = 0x03000F40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F40 = 1u;
    _cyc_03000F40 = 1u;
    uint32_t _base_03000F40 = g_cpu.R[5];
    uint32_t _off_03000F40;
    _off_03000F40 = 0x00000004u;
    uint32_t _ea_03000F40 = _base_03000F40;
    uint32_t _post_03000F40 = _base_03000F40 + _off_03000F40;
    _cyc_03000F40 += runtime_mem_cycles(_ea_03000F40, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000F40u, _ea_03000F40 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_03000F40 & ~3u, g_cpu.R[6]);
    g_cpu.R[5] = _post_03000F40;
    g_cpu.R[15] = 0x03000F44u;
    runtime_tick(_cyc_03000F40);
    }
L_03000F44:
    /* 03000F44  03000f44 A subs r8,r8,#0x4 */
    {
    g_cpu.R[15] = 0x03000F44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F44 = 1u;
    _cyc_03000F44 = 1u;
    uint32_t _rn_03000F44 = g_cpu.R[8];
    uint32_t _r_03000F44;
    _r_03000F44 = _rn_03000F44 - 0x00000004u;
    arm_set_nzcv_sub(_rn_03000F44, 0x00000004u, _r_03000F44);
    g_cpu.R[8] = _r_03000F44;
    g_cpu.R[15] = 0x03000F48u;
    runtime_tick(_cyc_03000F44);
    }
L_03000F48:
    /* 03000F48  03000f48 A bgt 0x03000ef4 */
    {
    g_cpu.R[15] = 0x03000F48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F48 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_03000F48 = 3u;
        g_cpu.R[15] = 0x03000EF4u;
        runtime_tick(_cyc_03000F48);
        gf_afunc_03000EF4();
        return;
    }
    g_cpu.R[15] = 0x03000F4Cu;
    runtime_tick(_cyc_03000F48);
    }
L_03000F4C:
    /* 03000F4C  03000f4c A sub r3,r3,#0x1 */
    {
    g_cpu.R[15] = 0x03000F4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F4C = 1u;
    _cyc_03000F4C = 1u;
    uint32_t _rn_03000F4C = g_cpu.R[3];
    uint32_t _r_03000F4C;
    _r_03000F4C = _rn_03000F4C - 0x00000001u;
    g_cpu.R[3] = _r_03000F4C;
    g_cpu.R[15] = 0x03000F50u;
    runtime_tick(_cyc_03000F4C);
    }
L_03000F50:
    /* 03000F50  03000f50 A ldm r13!,{r4,r12} */
    {
    g_cpu.R[15] = 0x03000F50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F50 = 1u;
    _cyc_03000F50 = 2u;
    uint32_t _b_03000F50 = g_cpu.R[13];
    uint32_t _a_03000F50 = _b_03000F50;
    uint32_t _fb_03000F50 = _b_03000F50 + 8u;
    _cyc_03000F50 += runtime_mem_cycles(_a_03000F50 & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_03000F50 & ~3u);
    _a_03000F50 += 4u;
    _cyc_03000F50 += runtime_mem_cycles(_a_03000F50 & ~3u, 4u, 1u);
    g_cpu.R[12] = bus_read_u32(_a_03000F50 & ~3u);
    _a_03000F50 += 4u;
    g_cpu.R[13] = _fb_03000F50;
    g_cpu.R[15] = 0x03000F54u;
    runtime_tick(_cyc_03000F50);
    }
L_03000F54:
    /* 03000F54  03000f54 A str r14,[r4,#0x1c] */
    {
    g_cpu.R[15] = 0x03000F54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F54 = 1u;
    _cyc_03000F54 = 1u;
    uint32_t _base_03000F54 = g_cpu.R[4];
    uint32_t _off_03000F54;
    _off_03000F54 = 0x0000001Cu;
    uint32_t _ea_03000F54 = _base_03000F54 + _off_03000F54;
    uint32_t _post_03000F54 = _base_03000F54 + _off_03000F54;
    _cyc_03000F54 += runtime_mem_cycles(_ea_03000F54, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000F54u, _ea_03000F54 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_ea_03000F54 & ~3u, g_cpu.R[14]);
    g_cpu.R[15] = 0x03000F58u;
    runtime_tick(_cyc_03000F54);
    }
    /* fall-through to 0x03000F58 */
    g_cpu.R[15] = 0x03000F58u;
    runtime_dispatch(0x03000F58u);
    return;
}

/* 0x03000F60  mode=arm  end=0x03000F6C  branches=0  indirect */
void gf_afunc_03000F60(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000F64u: goto L_03000F64;
        case 0x03000F68u: goto L_03000F68;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000F60u);
    /* 03000F60  03000f60 A ldr r8,[r13] */
    {
    g_cpu.R[15] = 0x03000F60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F60 = 1u;
    _cyc_03000F60 = 2u;
    uint32_t _base_03000F60 = g_cpu.R[13];
    uint32_t _off_03000F60;
    _off_03000F60 = 0x00000000u;
    uint32_t _ea_03000F60 = _base_03000F60 + _off_03000F60;
    uint32_t _post_03000F60 = _base_03000F60 + _off_03000F60;
    _cyc_03000F60 += runtime_mem_cycles(_ea_03000F60, 4u, 0u);
    uint32_t _v_03000F60;
    { uint32_t _w = bus_read_u32(_ea_03000F60 & ~3u); uint32_t _rot = (_ea_03000F60 & 3u) * 8u; _v_03000F60 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[8] = _v_03000F60;
    g_cpu.R[15] = 0x03000F64u;
    runtime_tick(_cyc_03000F60);
    }
L_03000F64:
    /* 03000F64  03000f64 A add r0,r15,#0x1 */
    {
    g_cpu.R[15] = 0x03000F64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F64 = 1u;
    _cyc_03000F64 = 1u;
    uint32_t _rn_03000F64 = 0x03000F6Cu;
    uint32_t _r_03000F64;
    _r_03000F64 = _rn_03000F64 + 0x00000001u;
    g_cpu.R[0] = _r_03000F64;
    g_cpu.R[15] = 0x03000F68u;
    runtime_tick(_cyc_03000F64);
    }
L_03000F68:
    /* 03000F68  03000f68 A bx r0 */
    {
    g_cpu.R[15] = 0x03000F68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F68 = 1u;
    _cyc_03000F68 = 3u;
    uint32_t _bxt_03000F68 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_03000F68 & ~1u;
    if (_bxt_03000F68 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000F68);
    runtime_dispatch_with_exchange(_bxt_03000F68);
    return;
    g_cpu.R[15] = 0x03000F6Cu;
    runtime_tick(_cyc_03000F68);
    }
    /* fall-through to 0x03000F6C */
    g_cpu.R[15] = 0x03000F6Cu;
    runtime_dispatch(0x03000F6Cu);
    return;
}

/* 0x03000C6C  mode=arm  end=0x03000C7C  branches=1  indirect */
void gf_afunc_03000C6C(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000C70u: goto L_03000C70;
        case 0x03000C74u: goto L_03000C74;
        case 0x03000C78u: goto L_03000C78;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000C6Cu);
    /* 03000C6C  03000c6c A cmps r4,#0x2 */
    {
    g_cpu.R[15] = 0x03000C6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C6C = 1u;
    _cyc_03000C6C = 1u;
    uint32_t _rn_03000C6C = g_cpu.R[4];
    uint32_t _r_03000C6C;
    _r_03000C6C = _rn_03000C6C - 0x00000002u;
    arm_set_nzcv_sub(_rn_03000C6C, 0x00000002u, _r_03000C6C);
    g_cpu.R[15] = 0x03000C70u;
    runtime_tick(_cyc_03000C6C);
    }
L_03000C70:
    /* 03000C70  03000c70 A addeq r7,r0,#0x350 */
    {
    g_cpu.R[15] = 0x03000C70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C70 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000C70 = 1u;
        uint32_t _rn_03000C70 = g_cpu.R[0];
        uint32_t _r_03000C70;
        _r_03000C70 = _rn_03000C70 + 0x00000350u;
        g_cpu.R[7] = _r_03000C70;
    }
    g_cpu.R[15] = 0x03000C74u;
    runtime_tick(_cyc_03000C70);
    }
L_03000C74:
    /* 03000C74  03000c74 A addne r7,r5,r8 */
    {
    g_cpu.R[15] = 0x03000C74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C74 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000C74 = 1u;
        uint32_t _rm_03000C74 = g_cpu.R[8];
        uint32_t _op2_03000C74;
        uint32_t _co_03000C74;
        _op2_03000C74 = _rm_03000C74;
        _co_03000C74 = cpsr_c();
        uint32_t _rn_03000C74 = g_cpu.R[5];
        uint32_t _r_03000C74;
        _r_03000C74 = _rn_03000C74 + _op2_03000C74;
        g_cpu.R[7] = _r_03000C74;
    }
    g_cpu.R[15] = 0x03000C78u;
    runtime_tick(_cyc_03000C74);
    }
L_03000C78:
    /* 03000C78  03000c78 A mov r4,r8 */
    {
    g_cpu.R[15] = 0x03000C78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C78 = 1u;
    _cyc_03000C78 = 1u;
    uint32_t _rm_03000C78 = g_cpu.R[8];
    uint32_t _op2_03000C78;
    uint32_t _co_03000C78;
    _op2_03000C78 = _rm_03000C78;
    _co_03000C78 = cpsr_c();
    uint32_t _r_03000C78;
    _r_03000C78 = _op2_03000C78;
    g_cpu.R[4] = _r_03000C78;
    g_cpu.R[15] = 0x03000C7Cu;
    runtime_tick(_cyc_03000C78);
    }
    /* fall-through to 0x03000C7C */
    g_cpu.R[15] = 0x03000C7Cu;
    runtime_dispatch(0x03000C7Cu);
    return;
}

/* 0x03000CCA  mode=thumb  end=0x03000CD4  branches=4 */
void gf_tfunc_03000CCA(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000CCCu: goto L_03000CCC;
        case 0x03000CCEu: goto L_03000CCE;
        case 0x03000CD0u: goto L_03000CD0;
        case 0x03000CD2u: goto L_03000CD2;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000CCAu);
    /* 03000CCA  03000cca T ldr r4,[r13,#0x18] */
    {
    g_cpu.R[15] = 0x03000CCAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CCA = 1u;
    _cyc_03000CCA = 2u;
    uint32_t _base_03000CCA = g_cpu.R[13];
    uint32_t _off_03000CCA;
    _off_03000CCA = 0x00000018u;
    uint32_t _ea_03000CCA = _base_03000CCA + _off_03000CCA;
    uint32_t _post_03000CCA = _base_03000CCA + _off_03000CCA;
    _cyc_03000CCA += runtime_mem_cycles(_ea_03000CCA, 4u, 0u);
    uint32_t _v_03000CCA;
    { uint32_t _w = bus_read_u32(_ea_03000CCA & ~3u); uint32_t _rot = (_ea_03000CCA & 3u) * 8u; _v_03000CCA = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[4] = _v_03000CCA;
    g_cpu.R[15] = 0x03000CCCu;
    runtime_tick(_cyc_03000CCA);
    }
L_03000CCC:
    /* 03000CCC  03000ccc T ldr r0,[r4,#0x18] */
    {
    g_cpu.R[15] = 0x03000CCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CCC = 1u;
    _cyc_03000CCC = 2u;
    uint32_t _base_03000CCC = g_cpu.R[4];
    uint32_t _off_03000CCC;
    _off_03000CCC = 0x00000018u;
    uint32_t _ea_03000CCC = _base_03000CCC + _off_03000CCC;
    uint32_t _post_03000CCC = _base_03000CCC + _off_03000CCC;
    _cyc_03000CCC += runtime_mem_cycles(_ea_03000CCC, 4u, 0u);
    uint32_t _v_03000CCC;
    { uint32_t _w = bus_read_u32(_ea_03000CCC & ~3u); uint32_t _rot = (_ea_03000CCC & 3u) * 8u; _v_03000CCC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000CCC;
    g_cpu.R[15] = 0x03000CCEu;
    runtime_tick(_cyc_03000CCC);
    }
L_03000CCE:
    /* 03000CCE  03000cce T mov r12,r0 */
    {
    g_cpu.R[15] = 0x03000CCEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CCE = 1u;
    _cyc_03000CCE = 1u;
    uint32_t _rm_03000CCE = g_cpu.R[0];
    uint32_t _op2_03000CCE;
    uint32_t _co_03000CCE;
    _op2_03000CCE = _rm_03000CCE;
    _co_03000CCE = cpsr_c();
    uint32_t _r_03000CCE;
    _r_03000CCE = _op2_03000CCE;
    g_cpu.R[12] = _r_03000CCE;
    g_cpu.R[15] = 0x03000CD0u;
    runtime_tick(_cyc_03000CCE);
    }
L_03000CD0:
    /* 03000CD0  03000cd0 T ldrb r0,[r4,#0x6] */
    {
    g_cpu.R[15] = 0x03000CD0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CD0 = 1u;
    _cyc_03000CD0 = 2u;
    uint32_t _base_03000CD0 = g_cpu.R[4];
    uint32_t _off_03000CD0;
    _off_03000CD0 = 0x00000006u;
    uint32_t _ea_03000CD0 = _base_03000CD0 + _off_03000CD0;
    uint32_t _post_03000CD0 = _base_03000CD0 + _off_03000CD0;
    _cyc_03000CD0 += runtime_mem_cycles(_ea_03000CD0, 1u, 0u);
    uint32_t _v_03000CD0;
    _v_03000CD0 = bus_read_u8(_ea_03000CD0);
    g_cpu.R[0] = _v_03000CD0;
    g_cpu.R[15] = 0x03000CD2u;
    runtime_tick(_cyc_03000CD0);
    }
L_03000CD2:
    /* 03000CD2  03000cd2 T adds r4,r4,#0x50 */
    {
    g_cpu.R[15] = 0x03000CD2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CD2 = 1u;
    _cyc_03000CD2 = 1u;
    uint32_t _rn_03000CD2 = g_cpu.R[4];
    uint32_t _r_03000CD2;
    _r_03000CD2 = _rn_03000CD2 + 0x00000050u;
    arm_set_nzcv_add(_rn_03000CD2, 0x00000050u, _r_03000CD2);
    g_cpu.R[4] = _r_03000CD2;
    g_cpu.R[15] = 0x03000CD4u;
    runtime_tick(_cyc_03000CD2);
    }
    /* fall-through to 0x03000CD4 */
    g_cpu.R[15] = 0x03000CD4u;
    runtime_dispatch(0x03000CD4u);
    return;
}

/* 0x03000CD4  mode=thumb  end=0x03000CE8  branches=4 */
void gf_tfunc_03000CD4(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000CD6u: goto L_03000CD6;
        case 0x03000CD8u: goto L_03000CD8;
        case 0x03000CDAu: goto L_03000CDA;
        case 0x03000CDCu: goto L_03000CDC;
        case 0x03000CDEu: goto L_03000CDE;
        case 0x03000CE0u: goto L_03000CE0;
        case 0x03000CE2u: goto L_03000CE2;
        case 0x03000CE4u: goto L_03000CE4;
        case 0x03000CE6u: goto L_03000CE6;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000CD4u);
    /* 03000CD4  03000cd4 T str r0,[r13,#0x4] */
    {
    g_cpu.R[15] = 0x03000CD4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CD4 = 1u;
    _cyc_03000CD4 = 1u;
    uint32_t _base_03000CD4 = g_cpu.R[13];
    uint32_t _off_03000CD4;
    _off_03000CD4 = 0x00000004u;
    uint32_t _ea_03000CD4 = _base_03000CD4 + _off_03000CD4;
    uint32_t _post_03000CD4 = _base_03000CD4 + _off_03000CD4;
    _cyc_03000CD4 += runtime_mem_cycles(_ea_03000CD4, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000CD4u, _ea_03000CD4 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000CD4 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000CD6u;
    runtime_tick(_cyc_03000CD4);
    }
L_03000CD6:
    /* 03000CD6  03000cd6 T ldr r3,[r4,#0x24] */
    {
    g_cpu.R[15] = 0x03000CD6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CD6 = 1u;
    _cyc_03000CD6 = 2u;
    uint32_t _base_03000CD6 = g_cpu.R[4];
    uint32_t _off_03000CD6;
    _off_03000CD6 = 0x00000024u;
    uint32_t _ea_03000CD6 = _base_03000CD6 + _off_03000CD6;
    uint32_t _post_03000CD6 = _base_03000CD6 + _off_03000CD6;
    _cyc_03000CD6 += runtime_mem_cycles(_ea_03000CD6, 4u, 0u);
    uint32_t _v_03000CD6;
    { uint32_t _w = bus_read_u32(_ea_03000CD6 & ~3u); uint32_t _rot = (_ea_03000CD6 & 3u) * 8u; _v_03000CD6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_03000CD6;
    g_cpu.R[15] = 0x03000CD8u;
    runtime_tick(_cyc_03000CD6);
    }
L_03000CD8:
    /* 03000CD8  03000cd8 T ldr r0,[r13,#0x14] */
    {
    g_cpu.R[15] = 0x03000CD8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CD8 = 1u;
    _cyc_03000CD8 = 2u;
    uint32_t _base_03000CD8 = g_cpu.R[13];
    uint32_t _off_03000CD8;
    _off_03000CD8 = 0x00000014u;
    uint32_t _ea_03000CD8 = _base_03000CD8 + _off_03000CD8;
    uint32_t _post_03000CD8 = _base_03000CD8 + _off_03000CD8;
    _cyc_03000CD8 += runtime_mem_cycles(_ea_03000CD8, 4u, 0u);
    uint32_t _v_03000CD8;
    { uint32_t _w = bus_read_u32(_ea_03000CD8 & ~3u); uint32_t _rot = (_ea_03000CD8 & 3u) * 8u; _v_03000CD8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000CD8;
    g_cpu.R[15] = 0x03000CDAu;
    runtime_tick(_cyc_03000CD8);
    }
L_03000CDA:
    /* 03000CDA  03000cda T cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x03000CDAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CDA = 1u;
    _cyc_03000CDA = 1u;
    uint32_t _rn_03000CDA = g_cpu.R[0];
    uint32_t _r_03000CDA;
    _r_03000CDA = _rn_03000CDA - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000CDA, 0x00000000u, _r_03000CDA);
    g_cpu.R[15] = 0x03000CDCu;
    runtime_tick(_cyc_03000CDA);
    }
L_03000CDC:
    /* 03000CDC  03000cdc T beq 0x03000cf4 */
    {
    g_cpu.R[15] = 0x03000CDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CDC = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000CDC = 3u;
        g_cpu.R[15] = 0x03000CF4u;
        runtime_tick(_cyc_03000CDC);
        gf_tfunc_03000CF4();
        return;
    }
    g_cpu.R[15] = 0x03000CDEu;
    runtime_tick(_cyc_03000CDC);
    }
L_03000CDE:
    /* 03000CDE  03000cde T ldr r1,[r15,#0x10] */
    {
    g_cpu.R[15] = 0x03000CDEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CDE = 1u;
    _cyc_03000CDE = 2u;
    uint32_t _base_03000CDE = 0x03000CE2u & ~3u;
    uint32_t _off_03000CDE;
    _off_03000CDE = 0x00000010u;
    uint32_t _ea_03000CDE = _base_03000CDE + _off_03000CDE;
    uint32_t _post_03000CDE = _base_03000CDE + _off_03000CDE;
    _cyc_03000CDE += runtime_mem_cycles(_ea_03000CDE, 4u, 0u);
    uint32_t _v_03000CDE;
    { uint32_t _w = bus_read_u32(_ea_03000CDE & ~3u); uint32_t _rot = (_ea_03000CDE & 3u) * 8u; _v_03000CDE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000CDE;
    g_cpu.R[15] = 0x03000CE0u;
    runtime_tick(_cyc_03000CDE);
    }
L_03000CE0:
    /* 03000CE0  03000ce0 T ldrb r1,[r1] */
    {
    g_cpu.R[15] = 0x03000CE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CE0 = 1u;
    _cyc_03000CE0 = 2u;
    uint32_t _base_03000CE0 = g_cpu.R[1];
    uint32_t _off_03000CE0;
    _off_03000CE0 = 0x00000000u;
    uint32_t _ea_03000CE0 = _base_03000CE0 + _off_03000CE0;
    uint32_t _post_03000CE0 = _base_03000CE0 + _off_03000CE0;
    _cyc_03000CE0 += runtime_mem_cycles(_ea_03000CE0, 1u, 0u);
    uint32_t _v_03000CE0;
    _v_03000CE0 = bus_read_u8(_ea_03000CE0);
    g_cpu.R[1] = _v_03000CE0;
    g_cpu.R[15] = 0x03000CE2u;
    runtime_tick(_cyc_03000CE0);
    }
L_03000CE2:
    /* 03000CE2  03000ce2 T cmps r1,#0xa0 */
    {
    g_cpu.R[15] = 0x03000CE2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CE2 = 1u;
    _cyc_03000CE2 = 1u;
    uint32_t _rn_03000CE2 = g_cpu.R[1];
    uint32_t _r_03000CE2;
    _r_03000CE2 = _rn_03000CE2 - 0x000000A0u;
    arm_set_nzcv_sub(_rn_03000CE2, 0x000000A0u, _r_03000CE2);
    g_cpu.R[15] = 0x03000CE4u;
    runtime_tick(_cyc_03000CE2);
    }
L_03000CE4:
    /* 03000CE4  03000ce4 T bcs 0x03000ce8 */
    {
    g_cpu.R[15] = 0x03000CE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CE4 = 1u;
    if (arm_cond_passes(0x2u)) {
        _cyc_03000CE4 = 3u;
        g_cpu.R[15] = 0x03000CE8u;
        runtime_tick(_cyc_03000CE4);
        gf_tfunc_03000CE8();
        return;
    }
    g_cpu.R[15] = 0x03000CE6u;
    runtime_tick(_cyc_03000CE4);
    }
L_03000CE6:
    /* 03000CE6  03000ce6 T adds r1,r1,#0xe4 */
    {
    g_cpu.R[15] = 0x03000CE6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CE6 = 1u;
    _cyc_03000CE6 = 1u;
    uint32_t _rn_03000CE6 = g_cpu.R[1];
    uint32_t _r_03000CE6;
    _r_03000CE6 = _rn_03000CE6 + 0x000000E4u;
    arm_set_nzcv_add(_rn_03000CE6, 0x000000E4u, _r_03000CE6);
    g_cpu.R[1] = _r_03000CE6;
    g_cpu.R[15] = 0x03000CE8u;
    runtime_tick(_cyc_03000CE6);
    }
    /* fall-through to 0x03000CE8 */
    g_cpu.R[15] = 0x03000CE8u;
    runtime_dispatch(0x03000CE8u);
    return;
}

/* 0x03000D56  mode=thumb  end=0x03000D64  branches=2 */
void gf_tfunc_03000D56(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000D58u: goto L_03000D58;
        case 0x03000D5Au: goto L_03000D5A;
        case 0x03000D5Cu: goto L_03000D5C;
        case 0x03000D5Eu: goto L_03000D5E;
        case 0x03000D60u: goto L_03000D60;
        case 0x03000D62u: goto L_03000D62;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000D56u);
    /* 03000D56  03000d56 T ldrb r5,[r4,#0xc] */
    {
    g_cpu.R[15] = 0x03000D56u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D56 = 1u;
    _cyc_03000D56 = 2u;
    uint32_t _base_03000D56 = g_cpu.R[4];
    uint32_t _off_03000D56;
    _off_03000D56 = 0x0000000Cu;
    uint32_t _ea_03000D56 = _base_03000D56 + _off_03000D56;
    uint32_t _post_03000D56 = _base_03000D56 + _off_03000D56;
    _cyc_03000D56 += runtime_mem_cycles(_ea_03000D56, 1u, 0u);
    uint32_t _v_03000D56;
    _v_03000D56 = bus_read_u8(_ea_03000D56);
    g_cpu.R[5] = _v_03000D56;
    g_cpu.R[15] = 0x03000D58u;
    runtime_tick(_cyc_03000D56);
    }
L_03000D58:
    /* 03000D58  03000d58 T cmps r5,#0x0 */
    {
    g_cpu.R[15] = 0x03000D58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D58 = 1u;
    _cyc_03000D58 = 1u;
    uint32_t _rn_03000D58 = g_cpu.R[5];
    uint32_t _r_03000D58;
    _r_03000D58 = _rn_03000D58 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000D58, 0x00000000u, _r_03000D58);
    g_cpu.R[15] = 0x03000D5Au;
    runtime_tick(_cyc_03000D58);
    }
L_03000D5A:
    /* 03000D5A  03000d5a T beq 0x03000d3e */
    {
    g_cpu.R[15] = 0x03000D5Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D5A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000D5A = 3u;
        g_cpu.R[15] = 0x03000D3Eu;
        runtime_tick(_cyc_03000D5A);
        gf_tfunc_03000D3E();
        return;
    }
    g_cpu.R[15] = 0x03000D5Cu;
    runtime_tick(_cyc_03000D5A);
    }
L_03000D5C:
    /* 03000D5C  03000d5c T movs r0,#0x4 */
    {
    g_cpu.R[15] = 0x03000D5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D5C = 1u;
    _cyc_03000D5C = 1u;
    uint32_t _r_03000D5C;
    _r_03000D5C = 0x00000004u;
    arm_set_nzc_logic(_r_03000D5C, cpsr_c());
    g_cpu.R[0] = _r_03000D5C;
    g_cpu.R[15] = 0x03000D5Eu;
    runtime_tick(_cyc_03000D5C);
    }
L_03000D5E:
    /* 03000D5E  03000d5e T orrs r6,r6,r0 */
    {
    g_cpu.R[15] = 0x03000D5Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D5E = 1u;
    _cyc_03000D5E = 1u;
    uint32_t _rm_03000D5E = g_cpu.R[0];
    uint32_t _op2_03000D5E;
    uint32_t _co_03000D5E;
    _op2_03000D5E = _rm_03000D5E;
    _co_03000D5E = cpsr_c();
    uint32_t _rn_03000D5E = g_cpu.R[6];
    uint32_t _r_03000D5E;
    _r_03000D5E = _rn_03000D5E | _op2_03000D5E;
    arm_set_nzc_logic(_r_03000D5E, _co_03000D5E);
    g_cpu.R[6] = _r_03000D5E;
    g_cpu.R[15] = 0x03000D60u;
    runtime_tick(_cyc_03000D5E);
    }
L_03000D60:
    /* 03000D60  03000d60 T strb r6,[r4] */
    {
    g_cpu.R[15] = 0x03000D60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D60 = 1u;
    _cyc_03000D60 = 1u;
    uint32_t _base_03000D60 = g_cpu.R[4];
    uint32_t _off_03000D60;
    _off_03000D60 = 0x00000000u;
    uint32_t _ea_03000D60 = _base_03000D60 + _off_03000D60;
    uint32_t _post_03000D60 = _base_03000D60 + _off_03000D60;
    _cyc_03000D60 += runtime_mem_cycles(_ea_03000D60, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D60u, _ea_03000D60, (uint32_t)(g_cpu.R[6] & 0xFFu), 1u);
    bus_write_u8(_ea_03000D60, (uint8_t)(g_cpu.R[6] & 0xFFu));
    g_cpu.R[15] = 0x03000D62u;
    runtime_tick(_cyc_03000D60);
    }
L_03000D62:
    /* 03000D62  03000d62 T b 0x03000d94 */
    {
    g_cpu.R[15] = 0x03000D62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D62 = 1u;
    _cyc_03000D62 = 3u;
    g_cpu.R[15] = 0x03000D94u;
    runtime_tick(_cyc_03000D62);
    gf_tfunc_03000D94();
    return;
    g_cpu.R[15] = 0x03000D64u;
    runtime_tick(_cyc_03000D62);
    }
    /* fall-through to 0x03000D64 */
    g_cpu.R[15] = 0x03000D64u;
    runtime_dispatch(0x03000D64u);
    return;
}

/* 0x03000E60  mode=arm  end=0x03000E78  branches=3 */
void gf_afunc_03000E60(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000E64u: goto L_03000E64;
        case 0x03000E68u: goto L_03000E68;
        case 0x03000E6Cu: goto L_03000E6C;
        case 0x03000E70u: goto L_03000E70;
        case 0x03000E74u: goto L_03000E74;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000E60u);
    /* 03000E60  03000e60 A adds r5,r5,#0x40000000 */
    {
    g_cpu.R[15] = 0x03000E60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E60 = 1u;
    _cyc_03000E60 = 1u;
    uint32_t _rn_03000E60 = g_cpu.R[5];
    uint32_t _r_03000E60;
    _r_03000E60 = _rn_03000E60 + 0x40000000u;
    arm_set_nzcv_add(_rn_03000E60, 0x40000000u, _r_03000E60);
    g_cpu.R[5] = _r_03000E60;
    g_cpu.R[15] = 0x03000E64u;
    runtime_tick(_cyc_03000E60);
    }
L_03000E64:
    /* 03000E64  03000e64 A bcc 0x03000e48 */
    {
    g_cpu.R[15] = 0x03000E64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E64 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_03000E64 = 3u;
        g_cpu.R[15] = 0x03000E48u;
        runtime_tick(_cyc_03000E64);
        gf_afunc_03000E48();
        return;
    }
    g_cpu.R[15] = 0x03000E68u;
    runtime_tick(_cyc_03000E64);
    }
L_03000E68:
    /* 03000E68  03000e68 A str r6,[r5],#0x4 */
    {
    g_cpu.R[15] = 0x03000E68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E68 = 1u;
    _cyc_03000E68 = 1u;
    uint32_t _base_03000E68 = g_cpu.R[5];
    uint32_t _off_03000E68;
    _off_03000E68 = 0x00000004u;
    uint32_t _ea_03000E68 = _base_03000E68;
    uint32_t _post_03000E68 = _base_03000E68 + _off_03000E68;
    _cyc_03000E68 += runtime_mem_cycles(_ea_03000E68, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000E68u, _ea_03000E68 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_03000E68 & ~3u, g_cpu.R[6]);
    g_cpu.R[5] = _post_03000E68;
    g_cpu.R[15] = 0x03000E6Cu;
    runtime_tick(_cyc_03000E68);
    }
L_03000E6C:
    /* 03000E6C  03000e6c A subs r8,r8,#0x4 */
    {
    g_cpu.R[15] = 0x03000E6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E6C = 1u;
    _cyc_03000E6C = 1u;
    uint32_t _rn_03000E6C = g_cpu.R[8];
    uint32_t _r_03000E6C;
    _r_03000E6C = _rn_03000E6C - 0x00000004u;
    arm_set_nzcv_sub(_rn_03000E6C, 0x00000004u, _r_03000E6C);
    g_cpu.R[8] = _r_03000E6C;
    g_cpu.R[15] = 0x03000E70u;
    runtime_tick(_cyc_03000E6C);
    }
L_03000E70:
    /* 03000E70  03000e70 A bgt 0x03000de8 */
    {
    g_cpu.R[15] = 0x03000E70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E70 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_03000E70 = 3u;
        g_cpu.R[15] = 0x03000DE8u;
        runtime_tick(_cyc_03000E70);
        gf_afunc_03000DE8();
        return;
    }
    g_cpu.R[15] = 0x03000E74u;
    runtime_tick(_cyc_03000E70);
    }
L_03000E74:
    /* 03000E74  03000e74 A b 0x03000f58 */
    {
    g_cpu.R[15] = 0x03000E74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E74 = 1u;
    _cyc_03000E74 = 3u;
    g_cpu.R[15] = 0x03000F58u;
    runtime_tick(_cyc_03000E74);
    gf_afunc_03000F58();
    return;
    g_cpu.R[15] = 0x03000E78u;
    runtime_tick(_cyc_03000E74);
    }
    /* fall-through to 0x03000E78 */
    g_cpu.R[15] = 0x03000E78u;
    runtime_dispatch(0x03000E78u);
    return;
}

/* 0x03000E9C  mode=arm  end=0x03000EA8  branches=1 */
void gf_afunc_03000E9C(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000EA0u: goto L_03000EA0;
        case 0x03000EA4u: goto L_03000EA4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000E9Cu);
    /* 03000E9C  03000e9c A ldm r13!,{r4,r12} */
    {
    g_cpu.R[15] = 0x03000E9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E9C = 1u;
    _cyc_03000E9C = 2u;
    uint32_t _b_03000E9C = g_cpu.R[13];
    uint32_t _a_03000E9C = _b_03000E9C;
    uint32_t _fb_03000E9C = _b_03000E9C + 8u;
    _cyc_03000E9C += runtime_mem_cycles(_a_03000E9C & ~3u, 4u, 0u);
    g_cpu.R[4] = bus_read_u32(_a_03000E9C & ~3u);
    _a_03000E9C += 4u;
    _cyc_03000E9C += runtime_mem_cycles(_a_03000E9C & ~3u, 4u, 1u);
    g_cpu.R[12] = bus_read_u32(_a_03000E9C & ~3u);
    _a_03000E9C += 4u;
    g_cpu.R[13] = _fb_03000E9C;
    g_cpu.R[15] = 0x03000EA0u;
    runtime_tick(_cyc_03000E9C);
    }
L_03000EA0:
    /* 03000EA0  03000ea0 A mov r2,#0x0 */
    {
    g_cpu.R[15] = 0x03000EA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EA0 = 1u;
    _cyc_03000EA0 = 1u;
    uint32_t _r_03000EA0;
    _r_03000EA0 = 0x00000000u;
    g_cpu.R[2] = _r_03000EA0;
    g_cpu.R[15] = 0x03000EA4u;
    runtime_tick(_cyc_03000EA0);
    }
L_03000EA4:
    /* 03000EA4  03000ea4 A b 0x03000eb8 */
    {
    g_cpu.R[15] = 0x03000EA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EA4 = 1u;
    _cyc_03000EA4 = 3u;
    g_cpu.R[15] = 0x03000EB8u;
    runtime_tick(_cyc_03000EA4);
    gf_afunc_03000EB8();
    return;
    g_cpu.R[15] = 0x03000EA8u;
    runtime_tick(_cyc_03000EA4);
    }
    /* fall-through to 0x03000EA8 */
    g_cpu.R[15] = 0x03000EA8u;
    runtime_dispatch(0x03000EA8u);
    return;
}

/* 0x03000ED8  mode=arm  end=0x03000EF4  branches=4  indirect */
void gf_afunc_03000ED8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000EDCu: goto L_03000EDC;
        case 0x03000EE0u: goto L_03000EE0;
        case 0x03000EE4u: goto L_03000EE4;
        case 0x03000EE8u: goto L_03000EE8;
        case 0x03000EECu: goto L_03000EEC;
        case 0x03000EF0u: goto L_03000EF0;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000ED8u);
    /* 03000ED8  03000ed8 A stm r13!,{r4,r12} */
    {
    g_cpu.R[15] = 0x03000ED8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000ED8 = 1u;
    _cyc_03000ED8 = 1u;
    uint32_t _b_03000ED8 = g_cpu.R[13];
    uint32_t _a_03000ED8 = _b_03000ED8 - 8u;
    uint32_t _fb_03000ED8 = _b_03000ED8 - 8u;
    _cyc_03000ED8 += runtime_mem_cycles(_a_03000ED8 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000ED8u, _a_03000ED8 & ~3u, g_cpu.R[4], 4u);
    bus_write_u32(_a_03000ED8 & ~3u, g_cpu.R[4]);
    _a_03000ED8 += 4u;
    _cyc_03000ED8 += runtime_mem_cycles(_a_03000ED8 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000ED8u, _a_03000ED8 & ~3u, g_cpu.R[12], 4u);
    bus_write_u32(_a_03000ED8 & ~3u, g_cpu.R[12]);
    _a_03000ED8 += 4u;
    g_cpu.R[13] = _fb_03000ED8;
    g_cpu.R[15] = 0x03000EDCu;
    runtime_tick(_cyc_03000ED8);
    }
L_03000EDC:
    /* 03000EDC  03000edc A ldr r14,[r4,#0x1c] */
    {
    g_cpu.R[15] = 0x03000EDCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EDC = 1u;
    _cyc_03000EDC = 2u;
    uint32_t _base_03000EDC = g_cpu.R[4];
    uint32_t _off_03000EDC;
    _off_03000EDC = 0x0000001Cu;
    uint32_t _ea_03000EDC = _base_03000EDC + _off_03000EDC;
    uint32_t _post_03000EDC = _base_03000EDC + _off_03000EDC;
    _cyc_03000EDC += runtime_mem_cycles(_ea_03000EDC, 4u, 0u);
    uint32_t _v_03000EDC;
    { uint32_t _w = bus_read_u32(_ea_03000EDC & ~3u); uint32_t _rot = (_ea_03000EDC & 3u) * 8u; _v_03000EDC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[14] = _v_03000EDC;
    g_cpu.R[15] = 0x03000EE0u;
    runtime_tick(_cyc_03000EDC);
    }
L_03000EE0:
    /* 03000EE0  03000ee0 A ldr r1,[r4,#0x20] */
    {
    g_cpu.R[15] = 0x03000EE0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EE0 = 1u;
    _cyc_03000EE0 = 2u;
    uint32_t _base_03000EE0 = g_cpu.R[4];
    uint32_t _off_03000EE0;
    _off_03000EE0 = 0x00000020u;
    uint32_t _ea_03000EE0 = _base_03000EE0 + _off_03000EE0;
    uint32_t _post_03000EE0 = _base_03000EE0 + _off_03000EE0;
    _cyc_03000EE0 += runtime_mem_cycles(_ea_03000EE0, 4u, 0u);
    uint32_t _v_03000EE0;
    { uint32_t _w = bus_read_u32(_ea_03000EE0 & ~3u); uint32_t _rot = (_ea_03000EE0 & 3u) * 8u; _v_03000EE0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000EE0;
    g_cpu.R[15] = 0x03000EE4u;
    runtime_tick(_cyc_03000EE0);
    }
L_03000EE4:
    /* 03000EE4  03000ee4 A mul r4,r12,r1 */
    {
    g_cpu.R[15] = 0x03000EE4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EE4 = 1u;
    _cyc_03000EE4 = 1u;
    _cyc_03000EE4 += runtime_mul_cycles(g_cpu.R[1], 1u, 0u);
    uint32_t _r_03000EE4 = g_cpu.R[12] * g_cpu.R[1];
    g_cpu.R[4] = _r_03000EE4;
    g_cpu.R[15] = 0x03000EE8u;
    runtime_tick(_cyc_03000EE4);
    }
L_03000EE8:
    /* 03000EE8  03000ee8 A ldrsb r0,[r3] */
    {
    g_cpu.R[15] = 0x03000EE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EE8 = 1u;
    _cyc_03000EE8 = 2u;
    uint32_t _base_03000EE8 = g_cpu.R[3];
    uint32_t _off_03000EE8;
    _off_03000EE8 = 0x00000000u;
    uint32_t _ea_03000EE8 = _base_03000EE8 + _off_03000EE8;
    uint32_t _post_03000EE8 = _base_03000EE8 + _off_03000EE8;
    _cyc_03000EE8 += runtime_mem_cycles(_ea_03000EE8, 1u, 0u);
    uint32_t _v_03000EE8;
    _v_03000EE8 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000EE8);
    g_cpu.R[0] = _v_03000EE8;
    g_cpu.R[15] = 0x03000EECu;
    runtime_tick(_cyc_03000EE8);
    }
L_03000EEC:
    /* 03000EEC  03000eec A ldrsb r1,[r3,#0x1]! */
    {
    g_cpu.R[15] = 0x03000EECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EEC = 1u;
    _cyc_03000EEC = 2u;
    uint32_t _base_03000EEC = g_cpu.R[3];
    uint32_t _off_03000EEC;
    _off_03000EEC = 0x00000001u;
    uint32_t _ea_03000EEC = _base_03000EEC + _off_03000EEC;
    uint32_t _post_03000EEC = _base_03000EEC + _off_03000EEC;
    _cyc_03000EEC += runtime_mem_cycles(_ea_03000EEC, 1u, 0u);
    uint32_t _v_03000EEC;
    _v_03000EEC = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000EEC);
    if (3u != 1u) g_cpu.R[3] = _ea_03000EEC;
    g_cpu.R[1] = _v_03000EEC;
    g_cpu.R[15] = 0x03000EF0u;
    runtime_tick(_cyc_03000EEC);
    }
L_03000EF0:
    /* 03000EF0  03000ef0 A sub r1,r1,r0 */
    {
    g_cpu.R[15] = 0x03000EF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EF0 = 1u;
    _cyc_03000EF0 = 1u;
    uint32_t _rm_03000EF0 = g_cpu.R[0];
    uint32_t _op2_03000EF0;
    uint32_t _co_03000EF0;
    _op2_03000EF0 = _rm_03000EF0;
    _co_03000EF0 = cpsr_c();
    uint32_t _rn_03000EF0 = g_cpu.R[1];
    uint32_t _r_03000EF0;
    _r_03000EF0 = _rn_03000EF0 - _op2_03000EF0;
    g_cpu.R[1] = _r_03000EF0;
    g_cpu.R[15] = 0x03000EF4u;
    runtime_tick(_cyc_03000EF0);
    }
    /* fall-through to 0x03000EF4 */
    g_cpu.R[15] = 0x03000EF4u;
    runtime_dispatch(0x03000EF4u);
    return;
}

/* 0x03000CB6  mode=thumb  end=0x03000CBE  branches=6 */
void gf_tfunc_03000CB6(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000CB8u: goto L_03000CB8;
        case 0x03000CBAu: goto L_03000CBA;
        case 0x03000CBCu: goto L_03000CBC;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000CB6u);
    /* 03000CB6  03000cb6 T movs r1,r1,lsr #1 */
    {
    g_cpu.R[15] = 0x03000CB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CB6 = 1u;
    _cyc_03000CB6 = 1u;
    uint32_t _rm_03000CB6 = g_cpu.R[1];
    uint32_t _op2_03000CB6;
    uint32_t _co_03000CB6;
    _op2_03000CB6 = _rm_03000CB6 >> 1;
    _co_03000CB6 = (_rm_03000CB6 >> 0) & 1u;
    uint32_t _r_03000CB6;
    _r_03000CB6 = _op2_03000CB6;
    arm_set_nzc_logic(_r_03000CB6, _co_03000CB6);
    g_cpu.R[1] = _r_03000CB6;
    g_cpu.R[15] = 0x03000CB8u;
    runtime_tick(_cyc_03000CB6);
    }
L_03000CB8:
    /* 03000CB8  03000cb8 T bcc 0x03000cbe */
    {
    g_cpu.R[15] = 0x03000CB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CB8 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_03000CB8 = 3u;
        g_cpu.R[15] = 0x03000CBEu;
        runtime_tick(_cyc_03000CB8);
        gf_tfunc_03000CBE();
        return;
    }
    g_cpu.R[15] = 0x03000CBAu;
    runtime_tick(_cyc_03000CB8);
    }
L_03000CBA:
    /* 03000CBA  03000cba T stm r5!,{r0} */
    {
    g_cpu.R[15] = 0x03000CBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CBA = 1u;
    _cyc_03000CBA = 1u;
    uint32_t _b_03000CBA = g_cpu.R[5];
    uint32_t _a_03000CBA = _b_03000CBA;
    uint32_t _fb_03000CBA = _b_03000CBA + 4u;
    _cyc_03000CBA += runtime_mem_cycles(_a_03000CBA & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000CBAu, _a_03000CBA & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_03000CBA & ~3u, g_cpu.R[0]);
    _a_03000CBA += 4u;
    g_cpu.R[5] = _fb_03000CBA;
    g_cpu.R[15] = 0x03000CBCu;
    runtime_tick(_cyc_03000CBA);
    }
L_03000CBC:
    /* 03000CBC  03000cbc T stm r5!,{r0} */
    {
    g_cpu.R[15] = 0x03000CBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CBC = 1u;
    _cyc_03000CBC = 1u;
    uint32_t _b_03000CBC = g_cpu.R[5];
    uint32_t _a_03000CBC = _b_03000CBC;
    uint32_t _fb_03000CBC = _b_03000CBC + 4u;
    _cyc_03000CBC += runtime_mem_cycles(_a_03000CBC & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000CBCu, _a_03000CBC & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_03000CBC & ~3u, g_cpu.R[0]);
    _a_03000CBC += 4u;
    g_cpu.R[5] = _fb_03000CBC;
    g_cpu.R[15] = 0x03000CBEu;
    runtime_tick(_cyc_03000CBC);
    }
    /* fall-through to 0x03000CBE */
    g_cpu.R[15] = 0x03000CBEu;
    runtime_dispatch(0x03000CBEu);
    return;
}

/* 0x03000CF4  mode=thumb  end=0x03000CFE  branches=2 */
void gf_tfunc_03000CF4(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000CF6u: goto L_03000CF6;
        case 0x03000CF8u: goto L_03000CF8;
        case 0x03000CFAu: goto L_03000CFA;
        case 0x03000CFCu: goto L_03000CFC;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000CF4u);
    /* 03000CF4  03000cf4 T ldrb r6,[r4] */
    {
    g_cpu.R[15] = 0x03000CF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CF4 = 1u;
    _cyc_03000CF4 = 2u;
    uint32_t _base_03000CF4 = g_cpu.R[4];
    uint32_t _off_03000CF4;
    _off_03000CF4 = 0x00000000u;
    uint32_t _ea_03000CF4 = _base_03000CF4 + _off_03000CF4;
    uint32_t _post_03000CF4 = _base_03000CF4 + _off_03000CF4;
    _cyc_03000CF4 += runtime_mem_cycles(_ea_03000CF4, 1u, 0u);
    uint32_t _v_03000CF4;
    _v_03000CF4 = bus_read_u8(_ea_03000CF4);
    g_cpu.R[6] = _v_03000CF4;
    g_cpu.R[15] = 0x03000CF6u;
    runtime_tick(_cyc_03000CF4);
    }
L_03000CF6:
    /* 03000CF6  03000cf6 T movs r0,#0xc7 */
    {
    g_cpu.R[15] = 0x03000CF6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CF6 = 1u;
    _cyc_03000CF6 = 1u;
    uint32_t _r_03000CF6;
    _r_03000CF6 = 0x000000C7u;
    arm_set_nzc_logic(_r_03000CF6, cpsr_c());
    g_cpu.R[0] = _r_03000CF6;
    g_cpu.R[15] = 0x03000CF8u;
    runtime_tick(_cyc_03000CF6);
    }
L_03000CF8:
    /* 03000CF8  03000cf8 T tsts r0,r6 */
    {
    g_cpu.R[15] = 0x03000CF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CF8 = 1u;
    _cyc_03000CF8 = 1u;
    uint32_t _rm_03000CF8 = g_cpu.R[6];
    uint32_t _op2_03000CF8;
    uint32_t _co_03000CF8;
    _op2_03000CF8 = _rm_03000CF8;
    _co_03000CF8 = cpsr_c();
    uint32_t _rn_03000CF8 = g_cpu.R[0];
    uint32_t _r_03000CF8;
    _r_03000CF8 = _rn_03000CF8 & _op2_03000CF8;
    arm_set_nzc_logic(_r_03000CF8, _co_03000CF8);
    g_cpu.R[15] = 0x03000CFAu;
    runtime_tick(_cyc_03000CF8);
    }
L_03000CFA:
    /* 03000CFA  03000cfa T bne 0x03000cfe */
    {
    g_cpu.R[15] = 0x03000CFAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CFA = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000CFA = 3u;
        g_cpu.R[15] = 0x03000CFEu;
        runtime_tick(_cyc_03000CFA);
        gf_tfunc_03000CFE();
        return;
    }
    g_cpu.R[15] = 0x03000CFCu;
    runtime_tick(_cyc_03000CFA);
    }
L_03000CFC:
    /* 03000CFC  03000cfc T b 0x03000f6c */
    {
    g_cpu.R[15] = 0x03000CFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CFC = 1u;
    _cyc_03000CFC = 3u;
    g_cpu.R[15] = 0x03000F6Cu;
    runtime_tick(_cyc_03000CFC);
    gf_tfunc_03000F6C();
    return;
    g_cpu.R[15] = 0x03000CFEu;
    runtime_tick(_cyc_03000CFC);
    }
    /* fall-through to 0x03000CFE */
    g_cpu.R[15] = 0x03000CFEu;
    runtime_dispatch(0x03000CFEu);
    return;
}

/* 0x03000DE8  mode=arm  end=0x03000E14  branches=9 */
void gf_afunc_03000DE8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000DECu: goto L_03000DEC;
        case 0x03000DF0u: goto L_03000DF0;
        case 0x03000DF4u: goto L_03000DF4;
        case 0x03000DF8u: goto L_03000DF8;
        case 0x03000DFCu: goto L_03000DFC;
        case 0x03000E00u: goto L_03000E00;
        case 0x03000E04u: goto L_03000E04;
        case 0x03000E08u: goto L_03000E08;
        case 0x03000E0Cu: goto L_03000E0C;
        case 0x03000E10u: goto L_03000E10;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000DE8u);
    /* 03000DE8  03000de8 A cmps r2,#0x4 */
    {
    g_cpu.R[15] = 0x03000DE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DE8 = 1u;
    _cyc_03000DE8 = 1u;
    uint32_t _rn_03000DE8 = g_cpu.R[2];
    uint32_t _r_03000DE8;
    _r_03000DE8 = _rn_03000DE8 - 0x00000004u;
    arm_set_nzcv_sub(_rn_03000DE8, 0x00000004u, _r_03000DE8);
    g_cpu.R[15] = 0x03000DECu;
    runtime_tick(_cyc_03000DE8);
    }
L_03000DEC:
    /* 03000DEC  03000dec A ble 0x03000e44 */
    {
    g_cpu.R[15] = 0x03000DECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DEC = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_03000DEC = 3u;
        g_cpu.R[15] = 0x03000E44u;
        runtime_tick(_cyc_03000DEC);
        gf_afunc_03000E44();
        return;
    }
    g_cpu.R[15] = 0x03000DF0u;
    runtime_tick(_cyc_03000DEC);
    }
L_03000DF0:
    /* 03000DF0  03000df0 A subs r2,r2,r8 */
    {
    g_cpu.R[15] = 0x03000DF0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DF0 = 1u;
    _cyc_03000DF0 = 1u;
    uint32_t _rm_03000DF0 = g_cpu.R[8];
    uint32_t _op2_03000DF0;
    uint32_t _co_03000DF0;
    _op2_03000DF0 = _rm_03000DF0;
    _co_03000DF0 = cpsr_c();
    uint32_t _rn_03000DF0 = g_cpu.R[2];
    uint32_t _r_03000DF0;
    _r_03000DF0 = _rn_03000DF0 - _op2_03000DF0;
    arm_set_nzcv_sub(_rn_03000DF0, _op2_03000DF0, _r_03000DF0);
    g_cpu.R[2] = _r_03000DF0;
    g_cpu.R[15] = 0x03000DF4u;
    runtime_tick(_cyc_03000DF0);
    }
L_03000DF4:
    /* 03000DF4  03000df4 A movgt r14,#0x0 */
    {
    g_cpu.R[15] = 0x03000DF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DF4 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_03000DF4 = 1u;
        uint32_t _r_03000DF4;
        _r_03000DF4 = 0x00000000u;
        g_cpu.R[14] = _r_03000DF4;
    }
    g_cpu.R[15] = 0x03000DF8u;
    runtime_tick(_cyc_03000DF4);
    }
L_03000DF8:
    /* 03000DF8  03000df8 A bgt 0x03000e14 */
    {
    g_cpu.R[15] = 0x03000DF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DF8 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_03000DF8 = 3u;
        g_cpu.R[15] = 0x03000E14u;
        runtime_tick(_cyc_03000DF8);
        gf_afunc_03000E14();
        return;
    }
    g_cpu.R[15] = 0x03000DFCu;
    runtime_tick(_cyc_03000DF8);
    }
L_03000DFC:
    /* 03000DFC  03000dfc A mov r14,r8 */
    {
    g_cpu.R[15] = 0x03000DFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DFC = 1u;
    _cyc_03000DFC = 1u;
    uint32_t _rm_03000DFC = g_cpu.R[8];
    uint32_t _op2_03000DFC;
    uint32_t _co_03000DFC;
    _op2_03000DFC = _rm_03000DFC;
    _co_03000DFC = cpsr_c();
    uint32_t _r_03000DFC;
    _r_03000DFC = _op2_03000DFC;
    g_cpu.R[14] = _r_03000DFC;
    g_cpu.R[15] = 0x03000E00u;
    runtime_tick(_cyc_03000DFC);
    }
L_03000E00:
    /* 03000E00  03000e00 A add r2,r2,r8 */
    {
    g_cpu.R[15] = 0x03000E00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E00 = 1u;
    _cyc_03000E00 = 1u;
    uint32_t _rm_03000E00 = g_cpu.R[8];
    uint32_t _op2_03000E00;
    uint32_t _co_03000E00;
    _op2_03000E00 = _rm_03000E00;
    _co_03000E00 = cpsr_c();
    uint32_t _rn_03000E00 = g_cpu.R[2];
    uint32_t _r_03000E00;
    _r_03000E00 = _rn_03000E00 + _op2_03000E00;
    g_cpu.R[2] = _r_03000E00;
    g_cpu.R[15] = 0x03000E04u;
    runtime_tick(_cyc_03000E00);
    }
L_03000E04:
    /* 03000E04  03000e04 A sub r8,r2,#0x4 */
    {
    g_cpu.R[15] = 0x03000E04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E04 = 1u;
    _cyc_03000E04 = 1u;
    uint32_t _rn_03000E04 = g_cpu.R[2];
    uint32_t _r_03000E04;
    _r_03000E04 = _rn_03000E04 - 0x00000004u;
    g_cpu.R[8] = _r_03000E04;
    g_cpu.R[15] = 0x03000E08u;
    runtime_tick(_cyc_03000E04);
    }
L_03000E08:
    /* 03000E08  03000e08 A sub r14,r14,r8 */
    {
    g_cpu.R[15] = 0x03000E08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E08 = 1u;
    _cyc_03000E08 = 1u;
    uint32_t _rm_03000E08 = g_cpu.R[8];
    uint32_t _op2_03000E08;
    uint32_t _co_03000E08;
    _op2_03000E08 = _rm_03000E08;
    _co_03000E08 = cpsr_c();
    uint32_t _rn_03000E08 = g_cpu.R[14];
    uint32_t _r_03000E08;
    _r_03000E08 = _rn_03000E08 - _op2_03000E08;
    g_cpu.R[14] = _r_03000E08;
    g_cpu.R[15] = 0x03000E0Cu;
    runtime_tick(_cyc_03000E08);
    }
L_03000E0C:
    /* 03000E0C  03000e0c A ands r2,r2,#0x3 */
    {
    g_cpu.R[15] = 0x03000E0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E0C = 1u;
    _cyc_03000E0C = 1u;
    uint32_t _rn_03000E0C = g_cpu.R[2];
    uint32_t _r_03000E0C;
    _r_03000E0C = _rn_03000E0C & 0x00000003u;
    arm_set_nzc_logic(_r_03000E0C, cpsr_c());
    g_cpu.R[2] = _r_03000E0C;
    g_cpu.R[15] = 0x03000E10u;
    runtime_tick(_cyc_03000E0C);
    }
L_03000E10:
    /* 03000E10  03000e10 A moveq r2,#0x4 */
    {
    g_cpu.R[15] = 0x03000E10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E10 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000E10 = 1u;
        uint32_t _r_03000E10;
        _r_03000E10 = 0x00000004u;
        g_cpu.R[2] = _r_03000E10;
    }
    g_cpu.R[15] = 0x03000E14u;
    runtime_tick(_cyc_03000E10);
    }
    /* fall-through to 0x03000E14 */
    g_cpu.R[15] = 0x03000E14u;
    runtime_dispatch(0x03000E14u);
    return;
}

/* 0x03000E14  mode=arm  end=0x03000E18  branches=7 */
void gf_afunc_03000E14(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000E14u);
    /* 03000E14  03000e14 A ldr r6,[r5] */
    g_cpu.R[15] = 0x03000E14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E14 = 1u;
    _cyc_03000E14 = 2u;
    uint32_t _base_03000E14 = g_cpu.R[5];
    uint32_t _off_03000E14;
    _off_03000E14 = 0x00000000u;
    uint32_t _ea_03000E14 = _base_03000E14 + _off_03000E14;
    uint32_t _post_03000E14 = _base_03000E14 + _off_03000E14;
    _cyc_03000E14 += runtime_mem_cycles(_ea_03000E14, 4u, 0u);
    uint32_t _v_03000E14;
    { uint32_t _w = bus_read_u32(_ea_03000E14 & ~3u); uint32_t _rot = (_ea_03000E14 & 3u) * 8u; _v_03000E14 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_03000E14;
    g_cpu.R[15] = 0x03000E18u;
    runtime_tick(_cyc_03000E14);
    /* fall-through to 0x03000E18 */
    g_cpu.R[15] = 0x03000E18u;
    runtime_dispatch(0x03000E18u);
    return;
}

/* 0x03000E44  mode=arm  end=0x03000E48  branches=4 */
void gf_afunc_03000E44(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000E44u);
    /* 03000E44  03000e44 A ldr r6,[r5] */
    g_cpu.R[15] = 0x03000E44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E44 = 1u;
    _cyc_03000E44 = 2u;
    uint32_t _base_03000E44 = g_cpu.R[5];
    uint32_t _off_03000E44;
    _off_03000E44 = 0x00000000u;
    uint32_t _ea_03000E44 = _base_03000E44 + _off_03000E44;
    uint32_t _post_03000E44 = _base_03000E44 + _off_03000E44;
    _cyc_03000E44 += runtime_mem_cycles(_ea_03000E44, 4u, 0u);
    uint32_t _v_03000E44;
    { uint32_t _w = bus_read_u32(_ea_03000E44 & ~3u); uint32_t _rot = (_ea_03000E44 & 3u) * 8u; _v_03000E44 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_03000E44;
    g_cpu.R[15] = 0x03000E48u;
    runtime_tick(_cyc_03000E44);
    /* fall-through to 0x03000E48 */
    g_cpu.R[15] = 0x03000E48u;
    runtime_dispatch(0x03000E48u);
    return;
}

/* 0x03000E78  mode=arm  end=0x03000E8C  branches=3 */
void gf_afunc_03000E78(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000E7Cu: goto L_03000E7C;
        case 0x03000E80u: goto L_03000E80;
        case 0x03000E84u: goto L_03000E84;
        case 0x03000E88u: goto L_03000E88;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000E78u);
    /* 03000E78  03000e78 A ldr r0,[r13,#0x18] */
    {
    g_cpu.R[15] = 0x03000E78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E78 = 1u;
    _cyc_03000E78 = 2u;
    uint32_t _base_03000E78 = g_cpu.R[13];
    uint32_t _off_03000E78;
    _off_03000E78 = 0x00000018u;
    uint32_t _ea_03000E78 = _base_03000E78 + _off_03000E78;
    uint32_t _post_03000E78 = _base_03000E78 + _off_03000E78;
    _cyc_03000E78 += runtime_mem_cycles(_ea_03000E78, 4u, 0u);
    uint32_t _v_03000E78;
    { uint32_t _w = bus_read_u32(_ea_03000E78 & ~3u); uint32_t _rot = (_ea_03000E78 & 3u) * 8u; _v_03000E78 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000E78;
    g_cpu.R[15] = 0x03000E7Cu;
    runtime_tick(_cyc_03000E78);
    }
L_03000E7C:
    /* 03000E7C  03000e7c A cmps r0,#0x0 */
    {
    g_cpu.R[15] = 0x03000E7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E7C = 1u;
    _cyc_03000E7C = 1u;
    uint32_t _rn_03000E7C = g_cpu.R[0];
    uint32_t _r_03000E7C;
    _r_03000E7C = _rn_03000E7C - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000E7C, 0x00000000u, _r_03000E7C);
    g_cpu.R[15] = 0x03000E80u;
    runtime_tick(_cyc_03000E7C);
    }
L_03000E80:
    /* 03000E80  03000e80 A beq 0x03000e9c */
    {
    g_cpu.R[15] = 0x03000E80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E80 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000E80 = 3u;
        g_cpu.R[15] = 0x03000E9Cu;
        runtime_tick(_cyc_03000E80);
        gf_afunc_03000E9C();
        return;
    }
    g_cpu.R[15] = 0x03000E84u;
    runtime_tick(_cyc_03000E80);
    }
L_03000E84:
    /* 03000E84  03000e84 A ldr r3,[r13,#0x14] */
    {
    g_cpu.R[15] = 0x03000E84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E84 = 1u;
    _cyc_03000E84 = 2u;
    uint32_t _base_03000E84 = g_cpu.R[13];
    uint32_t _off_03000E84;
    _off_03000E84 = 0x00000014u;
    uint32_t _ea_03000E84 = _base_03000E84 + _off_03000E84;
    uint32_t _post_03000E84 = _base_03000E84 + _off_03000E84;
    _cyc_03000E84 += runtime_mem_cycles(_ea_03000E84, 4u, 0u);
    uint32_t _v_03000E84;
    { uint32_t _w = bus_read_u32(_ea_03000E84 & ~3u); uint32_t _rot = (_ea_03000E84 & 3u) * 8u; _v_03000E84 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_03000E84;
    g_cpu.R[15] = 0x03000E88u;
    runtime_tick(_cyc_03000E84);
    }
L_03000E88:
    /* 03000E88  03000e88 A rsb r9,r2,#0x0 */
    {
    g_cpu.R[15] = 0x03000E88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E88 = 1u;
    _cyc_03000E88 = 1u;
    uint32_t _rn_03000E88 = g_cpu.R[2];
    uint32_t _r_03000E88;
    _r_03000E88 = 0x00000000u - _rn_03000E88;
    g_cpu.R[9] = _r_03000E88;
    g_cpu.R[15] = 0x03000E8Cu;
    runtime_tick(_cyc_03000E88);
    }
    /* fall-through to 0x03000E8C */
    g_cpu.R[15] = 0x03000E8Cu;
    runtime_dispatch(0x03000E8Cu);
    return;
}

/* 0x03000EF4  mode=arm  end=0x03000EF8  branches=4  indirect */
void gf_afunc_03000EF4(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000EF4u);
    /* 03000EF4  03000ef4 A ldr r6,[r5] */
    g_cpu.R[15] = 0x03000EF4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EF4 = 1u;
    _cyc_03000EF4 = 2u;
    uint32_t _base_03000EF4 = g_cpu.R[5];
    uint32_t _off_03000EF4;
    _off_03000EF4 = 0x00000000u;
    uint32_t _ea_03000EF4 = _base_03000EF4 + _off_03000EF4;
    uint32_t _post_03000EF4 = _base_03000EF4 + _off_03000EF4;
    _cyc_03000EF4 += runtime_mem_cycles(_ea_03000EF4, 4u, 0u);
    uint32_t _v_03000EF4;
    { uint32_t _w = bus_read_u32(_ea_03000EF4 & ~3u); uint32_t _rot = (_ea_03000EF4 & 3u) * 8u; _v_03000EF4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[6] = _v_03000EF4;
    g_cpu.R[15] = 0x03000EF8u;
    runtime_tick(_cyc_03000EF4);
    /* fall-through to 0x03000EF8 */
    g_cpu.R[15] = 0x03000EF8u;
    runtime_dispatch(0x03000EF8u);
    return;
}

/* 0x03000EF8  mode=arm  end=0x03000F2C  branches=4  indirect */
void gf_afunc_03000EF8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000EFCu: goto L_03000EFC;
        case 0x03000F00u: goto L_03000F00;
        case 0x03000F04u: goto L_03000F04;
        case 0x03000F08u: goto L_03000F08;
        case 0x03000F0Cu: goto L_03000F0C;
        case 0x03000F10u: goto L_03000F10;
        case 0x03000F14u: goto L_03000F14;
        case 0x03000F18u: goto L_03000F18;
        case 0x03000F1Cu: goto L_03000F1C;
        case 0x03000F20u: goto L_03000F20;
        case 0x03000F24u: goto L_03000F24;
        case 0x03000F28u: goto L_03000F28;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000EF8u);
    /* 03000EF8  03000ef8 A mul r9,r14,r1 */
    {
    g_cpu.R[15] = 0x03000EF8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EF8 = 1u;
    _cyc_03000EF8 = 1u;
    _cyc_03000EF8 += runtime_mul_cycles(g_cpu.R[1], 1u, 0u);
    uint32_t _r_03000EF8 = g_cpu.R[14] * g_cpu.R[1];
    g_cpu.R[9] = _r_03000EF8;
    g_cpu.R[15] = 0x03000EFCu;
    runtime_tick(_cyc_03000EF8);
    }
L_03000EFC:
    /* 03000EFC  03000efc A add r9,r0,r9,asr #23 */
    {
    g_cpu.R[15] = 0x03000EFCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EFC = 1u;
    _cyc_03000EFC = 1u;
    uint32_t _rm_03000EFC = g_cpu.R[9];
    uint32_t _op2_03000EFC;
    uint32_t _co_03000EFC;
    _op2_03000EFC = (uint32_t)((int32_t)_rm_03000EFC >> 23);
    _co_03000EFC = (_rm_03000EFC >> 22) & 1u;
    uint32_t _rn_03000EFC = g_cpu.R[0];
    uint32_t _r_03000EFC;
    _r_03000EFC = _rn_03000EFC + _op2_03000EFC;
    g_cpu.R[9] = _r_03000EFC;
    g_cpu.R[15] = 0x03000F00u;
    runtime_tick(_cyc_03000EFC);
    }
L_03000F00:
    /* 03000F00  03000f00 A mul r12,r10,r9 */
    {
    g_cpu.R[15] = 0x03000F00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F00 = 1u;
    _cyc_03000F00 = 1u;
    _cyc_03000F00 += runtime_mul_cycles(g_cpu.R[9], 1u, 0u);
    uint32_t _r_03000F00 = g_cpu.R[10] * g_cpu.R[9];
    g_cpu.R[12] = _r_03000F00;
    g_cpu.R[15] = 0x03000F04u;
    runtime_tick(_cyc_03000F00);
    }
L_03000F04:
    /* 03000F04  03000f04 A bic r12,r12,#0xff0000 */
    {
    g_cpu.R[15] = 0x03000F04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F04 = 1u;
    _cyc_03000F04 = 1u;
    uint32_t _rn_03000F04 = g_cpu.R[12];
    uint32_t _r_03000F04;
    _r_03000F04 = _rn_03000F04 & ~(0x00FF0000u);
    g_cpu.R[12] = _r_03000F04;
    g_cpu.R[15] = 0x03000F08u;
    runtime_tick(_cyc_03000F04);
    }
L_03000F08:
    /* 03000F08  03000f08 A add r6,r12,r6,ror #8 */
    {
    g_cpu.R[15] = 0x03000F08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F08 = 1u;
    _cyc_03000F08 = 1u;
    uint32_t _rm_03000F08 = g_cpu.R[6];
    uint32_t _op2_03000F08;
    uint32_t _co_03000F08;
    _op2_03000F08 = (_rm_03000F08 >> 8) | (_rm_03000F08 << 24);
    _co_03000F08 = (_op2_03000F08 >> 31) & 1u;
    uint32_t _rn_03000F08 = g_cpu.R[12];
    uint32_t _r_03000F08;
    _r_03000F08 = _rn_03000F08 + _op2_03000F08;
    g_cpu.R[6] = _r_03000F08;
    g_cpu.R[15] = 0x03000F0Cu;
    runtime_tick(_cyc_03000F08);
    }
L_03000F0C:
    /* 03000F0C  03000f0c A add r14,r14,r4 */
    {
    g_cpu.R[15] = 0x03000F0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F0C = 1u;
    _cyc_03000F0C = 1u;
    uint32_t _rm_03000F0C = g_cpu.R[4];
    uint32_t _op2_03000F0C;
    uint32_t _co_03000F0C;
    _op2_03000F0C = _rm_03000F0C;
    _co_03000F0C = cpsr_c();
    uint32_t _rn_03000F0C = g_cpu.R[14];
    uint32_t _r_03000F0C;
    _r_03000F0C = _rn_03000F0C + _op2_03000F0C;
    g_cpu.R[14] = _r_03000F0C;
    g_cpu.R[15] = 0x03000F10u;
    runtime_tick(_cyc_03000F0C);
    }
L_03000F10:
    /* 03000F10  03000f10 A movs r9,r14,lsr #23 */
    {
    g_cpu.R[15] = 0x03000F10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F10 = 1u;
    _cyc_03000F10 = 1u;
    uint32_t _rm_03000F10 = g_cpu.R[14];
    uint32_t _op2_03000F10;
    uint32_t _co_03000F10;
    _op2_03000F10 = _rm_03000F10 >> 23;
    _co_03000F10 = (_rm_03000F10 >> 22) & 1u;
    uint32_t _r_03000F10;
    _r_03000F10 = _op2_03000F10;
    arm_set_nzc_logic(_r_03000F10, _co_03000F10);
    g_cpu.R[9] = _r_03000F10;
    g_cpu.R[15] = 0x03000F14u;
    runtime_tick(_cyc_03000F10);
    }
L_03000F14:
    /* 03000F14  03000f14 A beq 0x03000f38 */
    {
    g_cpu.R[15] = 0x03000F14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F14 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000F14 = 3u;
        g_cpu.R[15] = 0x03000F38u;
        runtime_tick(_cyc_03000F14);
        gf_afunc_03000F38();
        return;
    }
    g_cpu.R[15] = 0x03000F18u;
    runtime_tick(_cyc_03000F14);
    }
L_03000F18:
    /* 03000F18  03000f18 A bic r14,r14,#0x3f800000 */
    {
    g_cpu.R[15] = 0x03000F18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F18 = 1u;
    _cyc_03000F18 = 1u;
    uint32_t _rn_03000F18 = g_cpu.R[14];
    uint32_t _r_03000F18;
    _r_03000F18 = _rn_03000F18 & ~(0x3F800000u);
    g_cpu.R[14] = _r_03000F18;
    g_cpu.R[15] = 0x03000F1Cu;
    runtime_tick(_cyc_03000F18);
    }
L_03000F1C:
    /* 03000F1C  03000f1c A subs r2,r2,r9 */
    {
    g_cpu.R[15] = 0x03000F1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F1C = 1u;
    _cyc_03000F1C = 1u;
    uint32_t _rm_03000F1C = g_cpu.R[9];
    uint32_t _op2_03000F1C;
    uint32_t _co_03000F1C;
    _op2_03000F1C = _rm_03000F1C;
    _co_03000F1C = cpsr_c();
    uint32_t _rn_03000F1C = g_cpu.R[2];
    uint32_t _r_03000F1C;
    _r_03000F1C = _rn_03000F1C - _op2_03000F1C;
    arm_set_nzcv_sub(_rn_03000F1C, _op2_03000F1C, _r_03000F1C);
    g_cpu.R[2] = _r_03000F1C;
    g_cpu.R[15] = 0x03000F20u;
    runtime_tick(_cyc_03000F1C);
    }
L_03000F20:
    /* 03000F20  03000f20 A ble 0x03000e78 */
    {
    g_cpu.R[15] = 0x03000F20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F20 = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_03000F20 = 3u;
        g_cpu.R[15] = 0x03000E78u;
        runtime_tick(_cyc_03000F20);
        gf_afunc_03000E78();
        return;
    }
    g_cpu.R[15] = 0x03000F24u;
    runtime_tick(_cyc_03000F20);
    }
L_03000F24:
    /* 03000F24  03000f24 A subs r9,r9,#0x1 */
    {
    g_cpu.R[15] = 0x03000F24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F24 = 1u;
    _cyc_03000F24 = 1u;
    uint32_t _rn_03000F24 = g_cpu.R[9];
    uint32_t _r_03000F24;
    _r_03000F24 = _rn_03000F24 - 0x00000001u;
    arm_set_nzcv_sub(_rn_03000F24, 0x00000001u, _r_03000F24);
    g_cpu.R[9] = _r_03000F24;
    g_cpu.R[15] = 0x03000F28u;
    runtime_tick(_cyc_03000F24);
    }
L_03000F28:
    /* 03000F28  03000f28 A addeq r0,r0,r1 */
    {
    g_cpu.R[15] = 0x03000F28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F28 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000F28 = 1u;
        uint32_t _rm_03000F28 = g_cpu.R[1];
        uint32_t _op2_03000F28;
        uint32_t _co_03000F28;
        _op2_03000F28 = _rm_03000F28;
        _co_03000F28 = cpsr_c();
        uint32_t _rn_03000F28 = g_cpu.R[0];
        uint32_t _r_03000F28;
        _r_03000F28 = _rn_03000F28 + _op2_03000F28;
        g_cpu.R[0] = _r_03000F28;
    }
    g_cpu.R[15] = 0x03000F2Cu;
    runtime_tick(_cyc_03000F28);
    }
    /* fall-through to 0x03000F2C */
    g_cpu.R[15] = 0x03000F2Cu;
    runtime_dispatch(0x03000F2Cu);
    return;
}

/* 0x03000F6C  mode=thumb  end=0x03000F76  branches=2 */
void gf_tfunc_03000F6C(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000F6Eu: goto L_03000F6E;
        case 0x03000F70u: goto L_03000F70;
        case 0x03000F72u: goto L_03000F72;
        case 0x03000F74u: goto L_03000F74;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000F6Cu);
    /* 03000F6C  03000f6c T ldr r0,[r13,#0x4] */
    {
    g_cpu.R[15] = 0x03000F6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F6C = 1u;
    _cyc_03000F6C = 2u;
    uint32_t _base_03000F6C = g_cpu.R[13];
    uint32_t _off_03000F6C;
    _off_03000F6C = 0x00000004u;
    uint32_t _ea_03000F6C = _base_03000F6C + _off_03000F6C;
    uint32_t _post_03000F6C = _base_03000F6C + _off_03000F6C;
    _cyc_03000F6C += runtime_mem_cycles(_ea_03000F6C, 4u, 0u);
    uint32_t _v_03000F6C;
    { uint32_t _w = bus_read_u32(_ea_03000F6C & ~3u); uint32_t _rot = (_ea_03000F6C & 3u) * 8u; _v_03000F6C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000F6C;
    g_cpu.R[15] = 0x03000F6Eu;
    runtime_tick(_cyc_03000F6C);
    }
L_03000F6E:
    /* 03000F6E  03000f6e T subs r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x03000F6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F6E = 1u;
    _cyc_03000F6E = 1u;
    uint32_t _rn_03000F6E = g_cpu.R[0];
    uint32_t _r_03000F6E;
    _r_03000F6E = _rn_03000F6E - 0x00000001u;
    arm_set_nzcv_sub(_rn_03000F6E, 0x00000001u, _r_03000F6E);
    g_cpu.R[0] = _r_03000F6E;
    g_cpu.R[15] = 0x03000F70u;
    runtime_tick(_cyc_03000F6E);
    }
L_03000F70:
    /* 03000F70  03000f70 T ble 0x03000f76 */
    {
    g_cpu.R[15] = 0x03000F70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F70 = 1u;
    if (arm_cond_passes(0xdu)) {
        _cyc_03000F70 = 3u;
        g_cpu.R[15] = 0x03000F76u;
        runtime_tick(_cyc_03000F70);
        gf_tfunc_03000F76();
        return;
    }
    g_cpu.R[15] = 0x03000F72u;
    runtime_tick(_cyc_03000F70);
    }
L_03000F72:
    /* 03000F72  03000f72 T adds r4,r4,#0x40 */
    {
    g_cpu.R[15] = 0x03000F72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F72 = 1u;
    _cyc_03000F72 = 1u;
    uint32_t _rn_03000F72 = g_cpu.R[4];
    uint32_t _r_03000F72;
    _r_03000F72 = _rn_03000F72 + 0x00000040u;
    arm_set_nzcv_add(_rn_03000F72, 0x00000040u, _r_03000F72);
    g_cpu.R[4] = _r_03000F72;
    g_cpu.R[15] = 0x03000F74u;
    runtime_tick(_cyc_03000F72);
    }
L_03000F74:
    /* 03000F74  03000f74 T b 0x03000cd4 */
    {
    g_cpu.R[15] = 0x03000F74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F74 = 1u;
    _cyc_03000F74 = 3u;
    g_cpu.R[15] = 0x03000CD4u;
    runtime_tick(_cyc_03000F74);
    gf_tfunc_03000CD4();
    return;
    g_cpu.R[15] = 0x03000F76u;
    runtime_tick(_cyc_03000F74);
    }
    /* fall-through to 0x03000F76 */
    g_cpu.R[15] = 0x03000F76u;
    runtime_dispatch(0x03000F76u);
    return;
}

/* 0x03000C60  mode=thumb  end=0x03000C6A  branches=1  indirect */
void gf_iwram_03000c60(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000C62u: goto L_03000C62;
        case 0x03000C64u: goto L_03000C64;
        case 0x03000C66u: goto L_03000C66;
        case 0x03000C68u: goto L_03000C68;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000C60u);
    /* 03000C60  03000c60 T ldrb r3,[r0,#0x5] */
    {
    g_cpu.R[15] = 0x03000C60u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C60 = 1u;
    _cyc_03000C60 = 2u;
    uint32_t _base_03000C60 = g_cpu.R[0];
    uint32_t _off_03000C60;
    _off_03000C60 = 0x00000005u;
    uint32_t _ea_03000C60 = _base_03000C60 + _off_03000C60;
    uint32_t _post_03000C60 = _base_03000C60 + _off_03000C60;
    _cyc_03000C60 += runtime_mem_cycles(_ea_03000C60, 1u, 0u);
    uint32_t _v_03000C60;
    _v_03000C60 = bus_read_u8(_ea_03000C60);
    g_cpu.R[3] = _v_03000C60;
    g_cpu.R[15] = 0x03000C62u;
    runtime_tick(_cyc_03000C60);
    }
L_03000C62:
    /* 03000C62  03000c62 T cmps r3,#0x0 */
    {
    g_cpu.R[15] = 0x03000C62u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C62 = 1u;
    _cyc_03000C62 = 1u;
    uint32_t _rn_03000C62 = g_cpu.R[3];
    uint32_t _r_03000C62;
    _r_03000C62 = _rn_03000C62 - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000C62, 0x00000000u, _r_03000C62);
    g_cpu.R[15] = 0x03000C64u;
    runtime_tick(_cyc_03000C62);
    }
L_03000C64:
    /* 03000C64  03000c64 T beq 0x03000cac */
    {
    g_cpu.R[15] = 0x03000C64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C64 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000C64 = 3u;
        g_cpu.R[15] = 0x03000CACu;
        runtime_tick(_cyc_03000C64);
        gf_tfunc_03000CAC();
        return;
    }
    g_cpu.R[15] = 0x03000C66u;
    runtime_tick(_cyc_03000C64);
    }
L_03000C66:
    /* 03000C66  03000c66 T add r1,r15,#0x4 */
    {
    g_cpu.R[15] = 0x03000C66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C66 = 1u;
    _cyc_03000C66 = 1u;
    uint32_t _rn_03000C66 = 0x03000C6Au & ~3u;
    uint32_t _r_03000C66;
    _r_03000C66 = _rn_03000C66 + 0x00000004u;
    g_cpu.R[1] = _r_03000C66;
    g_cpu.R[15] = 0x03000C68u;
    runtime_tick(_cyc_03000C66);
    }
L_03000C68:
    /* 03000C68  03000c68 T bx r1 */
    {
    g_cpu.R[15] = 0x03000C68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000C68 = 1u;
    _cyc_03000C68 = 3u;
    uint32_t _bxt_03000C68 = g_cpu.R[1];
    g_cpu.R[15] = _bxt_03000C68 & ~1u;
    if (_bxt_03000C68 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000C68);
    runtime_dispatch_with_exchange(_bxt_03000C68);
    return;
    g_cpu.R[15] = 0x03000C6Au;
    runtime_tick(_cyc_03000C68);
    }
    /* fall-through to 0x03000C6A */
    g_cpu.R[15] = 0x03000C6Au;
    runtime_dispatch(0x03000C6Au);
    return;
}

/* 0x03000CE8  mode=thumb  end=0x03000CEE  branches=2 */
void gf_tfunc_03000CE8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000CEAu: goto L_03000CEA;
        case 0x03000CECu: goto L_03000CEC;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000CE8u);
    /* 03000CE8  03000ce8 T cmps r1,r0 */
    {
    g_cpu.R[15] = 0x03000CE8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CE8 = 1u;
    _cyc_03000CE8 = 1u;
    uint32_t _rm_03000CE8 = g_cpu.R[0];
    uint32_t _op2_03000CE8;
    uint32_t _co_03000CE8;
    _op2_03000CE8 = _rm_03000CE8;
    _co_03000CE8 = cpsr_c();
    uint32_t _rn_03000CE8 = g_cpu.R[1];
    uint32_t _r_03000CE8;
    _r_03000CE8 = _rn_03000CE8 - _op2_03000CE8;
    arm_set_nzcv_sub(_rn_03000CE8, _op2_03000CE8, _r_03000CE8);
    g_cpu.R[15] = 0x03000CEAu;
    runtime_tick(_cyc_03000CE8);
    }
L_03000CEA:
    /* 03000CEA  03000cea T bcc 0x03000cf4 */
    {
    g_cpu.R[15] = 0x03000CEAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CEA = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_03000CEA = 3u;
        g_cpu.R[15] = 0x03000CF4u;
        runtime_tick(_cyc_03000CEA);
        gf_tfunc_03000CF4();
        return;
    }
    g_cpu.R[15] = 0x03000CECu;
    runtime_tick(_cyc_03000CEA);
    }
L_03000CEC:
    /* 03000CEC  03000cec T b 0x03000f76 */
    {
    g_cpu.R[15] = 0x03000CECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CEC = 1u;
    _cyc_03000CEC = 3u;
    g_cpu.R[15] = 0x03000F76u;
    runtime_tick(_cyc_03000CEC);
    gf_tfunc_03000F76();
    return;
    g_cpu.R[15] = 0x03000CEEu;
    runtime_tick(_cyc_03000CEC);
    }
    /* fall-through to 0x03000CEE */
    g_cpu.R[15] = 0x03000CEEu;
    runtime_dispatch(0x03000CEEu);
    return;
}

/* 0x03000D44  mode=thumb  end=0x03000D56  branches=4 */
void gf_tfunc_03000D44(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000D46u: goto L_03000D46;
        case 0x03000D48u: goto L_03000D48;
        case 0x03000D4Au: goto L_03000D4A;
        case 0x03000D4Cu: goto L_03000D4C;
        case 0x03000D4Eu: goto L_03000D4E;
        case 0x03000D50u: goto L_03000D50;
        case 0x03000D52u: goto L_03000D52;
        case 0x03000D54u: goto L_03000D54;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000D44u);
    /* 03000D44  03000d44 T movs r0,#0x40 */
    {
    g_cpu.R[15] = 0x03000D44u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D44 = 1u;
    _cyc_03000D44 = 1u;
    uint32_t _r_03000D44;
    _r_03000D44 = 0x00000040u;
    arm_set_nzc_logic(_r_03000D44, cpsr_c());
    g_cpu.R[0] = _r_03000D44;
    g_cpu.R[15] = 0x03000D46u;
    runtime_tick(_cyc_03000D44);
    }
L_03000D46:
    /* 03000D46  03000d46 T tsts r0,r6 */
    {
    g_cpu.R[15] = 0x03000D46u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D46 = 1u;
    _cyc_03000D46 = 1u;
    uint32_t _rm_03000D46 = g_cpu.R[6];
    uint32_t _op2_03000D46;
    uint32_t _co_03000D46;
    _op2_03000D46 = _rm_03000D46;
    _co_03000D46 = cpsr_c();
    uint32_t _rn_03000D46 = g_cpu.R[0];
    uint32_t _r_03000D46;
    _r_03000D46 = _rn_03000D46 & _op2_03000D46;
    arm_set_nzc_logic(_r_03000D46, _co_03000D46);
    g_cpu.R[15] = 0x03000D48u;
    runtime_tick(_cyc_03000D46);
    }
L_03000D48:
    /* 03000D48  03000d48 T beq 0x03000d64 */
    {
    g_cpu.R[15] = 0x03000D48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D48 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000D48 = 3u;
        g_cpu.R[15] = 0x03000D64u;
        runtime_tick(_cyc_03000D48);
        gf_tfunc_03000D64();
        return;
    }
    g_cpu.R[15] = 0x03000D4Au;
    runtime_tick(_cyc_03000D48);
    }
L_03000D4A:
    /* 03000D4A  03000d4a T ldrb r0,[r4,#0x7] */
    {
    g_cpu.R[15] = 0x03000D4Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D4A = 1u;
    _cyc_03000D4A = 2u;
    uint32_t _base_03000D4A = g_cpu.R[4];
    uint32_t _off_03000D4A;
    _off_03000D4A = 0x00000007u;
    uint32_t _ea_03000D4A = _base_03000D4A + _off_03000D4A;
    uint32_t _post_03000D4A = _base_03000D4A + _off_03000D4A;
    _cyc_03000D4A += runtime_mem_cycles(_ea_03000D4A, 1u, 0u);
    uint32_t _v_03000D4A;
    _v_03000D4A = bus_read_u8(_ea_03000D4A);
    g_cpu.R[0] = _v_03000D4A;
    g_cpu.R[15] = 0x03000D4Cu;
    runtime_tick(_cyc_03000D4A);
    }
L_03000D4C:
    /* 03000D4C  03000d4c T muls r5,r5,r0 */
    {
    g_cpu.R[15] = 0x03000D4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D4C = 1u;
    _cyc_03000D4C = 1u;
    _cyc_03000D4C += runtime_mul_cycles(g_cpu.R[5], 1u, 0u);
    uint32_t _r_03000D4C = g_cpu.R[5] * g_cpu.R[0];
    g_cpu.R[5] = _r_03000D4C;
    arm_set_nz(_r_03000D4C);
    g_cpu.R[15] = 0x03000D4Eu;
    runtime_tick(_cyc_03000D4C);
    }
L_03000D4E:
    /* 03000D4E  03000d4e T movs r5,r5,lsr #8 */
    {
    g_cpu.R[15] = 0x03000D4Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D4E = 1u;
    _cyc_03000D4E = 1u;
    uint32_t _rm_03000D4E = g_cpu.R[5];
    uint32_t _op2_03000D4E;
    uint32_t _co_03000D4E;
    _op2_03000D4E = _rm_03000D4E >> 8;
    _co_03000D4E = (_rm_03000D4E >> 7) & 1u;
    uint32_t _r_03000D4E;
    _r_03000D4E = _op2_03000D4E;
    arm_set_nzc_logic(_r_03000D4E, _co_03000D4E);
    g_cpu.R[5] = _r_03000D4E;
    g_cpu.R[15] = 0x03000D50u;
    runtime_tick(_cyc_03000D4E);
    }
L_03000D50:
    /* 03000D50  03000d50 T ldrb r0,[r4,#0xc] */
    {
    g_cpu.R[15] = 0x03000D50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D50 = 1u;
    _cyc_03000D50 = 2u;
    uint32_t _base_03000D50 = g_cpu.R[4];
    uint32_t _off_03000D50;
    _off_03000D50 = 0x0000000Cu;
    uint32_t _ea_03000D50 = _base_03000D50 + _off_03000D50;
    uint32_t _post_03000D50 = _base_03000D50 + _off_03000D50;
    _cyc_03000D50 += runtime_mem_cycles(_ea_03000D50, 1u, 0u);
    uint32_t _v_03000D50;
    _v_03000D50 = bus_read_u8(_ea_03000D50);
    g_cpu.R[0] = _v_03000D50;
    g_cpu.R[15] = 0x03000D52u;
    runtime_tick(_cyc_03000D50);
    }
L_03000D52:
    /* 03000D52  03000d52 T cmps r5,r0 */
    {
    g_cpu.R[15] = 0x03000D52u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D52 = 1u;
    _cyc_03000D52 = 1u;
    uint32_t _rm_03000D52 = g_cpu.R[0];
    uint32_t _op2_03000D52;
    uint32_t _co_03000D52;
    _op2_03000D52 = _rm_03000D52;
    _co_03000D52 = cpsr_c();
    uint32_t _rn_03000D52 = g_cpu.R[5];
    uint32_t _r_03000D52;
    _r_03000D52 = _rn_03000D52 - _op2_03000D52;
    arm_set_nzcv_sub(_rn_03000D52, _op2_03000D52, _r_03000D52);
    g_cpu.R[15] = 0x03000D54u;
    runtime_tick(_cyc_03000D52);
    }
L_03000D54:
    /* 03000D54  03000d54 T bhi 0x03000d94 */
    {
    g_cpu.R[15] = 0x03000D54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D54 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_03000D54 = 3u;
        g_cpu.R[15] = 0x03000D94u;
        runtime_tick(_cyc_03000D54);
        gf_tfunc_03000D94();
        return;
    }
    g_cpu.R[15] = 0x03000D56u;
    runtime_tick(_cyc_03000D54);
    }
    /* fall-through to 0x03000D56 */
    g_cpu.R[15] = 0x03000D56u;
    runtime_dispatch(0x03000D56u);
    return;
}

/* 0x03000D64  mode=thumb  end=0x03000D82  branches=4 */
void gf_tfunc_03000D64(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000D66u: goto L_03000D66;
        case 0x03000D68u: goto L_03000D68;
        case 0x03000D6Au: goto L_03000D6A;
        case 0x03000D6Cu: goto L_03000D6C;
        case 0x03000D6Eu: goto L_03000D6E;
        case 0x03000D70u: goto L_03000D70;
        case 0x03000D72u: goto L_03000D72;
        case 0x03000D74u: goto L_03000D74;
        case 0x03000D76u: goto L_03000D76;
        case 0x03000D78u: goto L_03000D78;
        case 0x03000D7Au: goto L_03000D7A;
        case 0x03000D7Cu: goto L_03000D7C;
        case 0x03000D7Eu: goto L_03000D7E;
        case 0x03000D80u: goto L_03000D80;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000D64u);
    /* 03000D64  03000d64 T movs r2,#0x3 */
    {
    g_cpu.R[15] = 0x03000D64u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D64 = 1u;
    _cyc_03000D64 = 1u;
    uint32_t _r_03000D64;
    _r_03000D64 = 0x00000003u;
    arm_set_nzc_logic(_r_03000D64, cpsr_c());
    g_cpu.R[2] = _r_03000D64;
    g_cpu.R[15] = 0x03000D66u;
    runtime_tick(_cyc_03000D64);
    }
L_03000D66:
    /* 03000D66  03000d66 T ands r2,r2,r6 */
    {
    g_cpu.R[15] = 0x03000D66u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D66 = 1u;
    _cyc_03000D66 = 1u;
    uint32_t _rm_03000D66 = g_cpu.R[6];
    uint32_t _op2_03000D66;
    uint32_t _co_03000D66;
    _op2_03000D66 = _rm_03000D66;
    _co_03000D66 = cpsr_c();
    uint32_t _rn_03000D66 = g_cpu.R[2];
    uint32_t _r_03000D66;
    _r_03000D66 = _rn_03000D66 & _op2_03000D66;
    arm_set_nzc_logic(_r_03000D66, _co_03000D66);
    g_cpu.R[2] = _r_03000D66;
    g_cpu.R[15] = 0x03000D68u;
    runtime_tick(_cyc_03000D66);
    }
L_03000D68:
    /* 03000D68  03000d68 T cmps r2,#0x2 */
    {
    g_cpu.R[15] = 0x03000D68u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D68 = 1u;
    _cyc_03000D68 = 1u;
    uint32_t _rn_03000D68 = g_cpu.R[2];
    uint32_t _r_03000D68;
    _r_03000D68 = _rn_03000D68 - 0x00000002u;
    arm_set_nzcv_sub(_rn_03000D68, 0x00000002u, _r_03000D68);
    g_cpu.R[15] = 0x03000D6Au;
    runtime_tick(_cyc_03000D68);
    }
L_03000D6A:
    /* 03000D6A  03000d6a T bne 0x03000d82 */
    {
    g_cpu.R[15] = 0x03000D6Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D6A = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000D6A = 3u;
        g_cpu.R[15] = 0x03000D82u;
        runtime_tick(_cyc_03000D6A);
        gf_tfunc_03000D82();
        return;
    }
    g_cpu.R[15] = 0x03000D6Cu;
    runtime_tick(_cyc_03000D6A);
    }
L_03000D6C:
    /* 03000D6C  03000d6c T ldrb r0,[r4,#0x5] */
    {
    g_cpu.R[15] = 0x03000D6Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D6C = 1u;
    _cyc_03000D6C = 2u;
    uint32_t _base_03000D6C = g_cpu.R[4];
    uint32_t _off_03000D6C;
    _off_03000D6C = 0x00000005u;
    uint32_t _ea_03000D6C = _base_03000D6C + _off_03000D6C;
    uint32_t _post_03000D6C = _base_03000D6C + _off_03000D6C;
    _cyc_03000D6C += runtime_mem_cycles(_ea_03000D6C, 1u, 0u);
    uint32_t _v_03000D6C;
    _v_03000D6C = bus_read_u8(_ea_03000D6C);
    g_cpu.R[0] = _v_03000D6C;
    g_cpu.R[15] = 0x03000D6Eu;
    runtime_tick(_cyc_03000D6C);
    }
L_03000D6E:
    /* 03000D6E  03000d6e T muls r5,r5,r0 */
    {
    g_cpu.R[15] = 0x03000D6Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D6E = 1u;
    _cyc_03000D6E = 1u;
    _cyc_03000D6E += runtime_mul_cycles(g_cpu.R[5], 1u, 0u);
    uint32_t _r_03000D6E = g_cpu.R[5] * g_cpu.R[0];
    g_cpu.R[5] = _r_03000D6E;
    arm_set_nz(_r_03000D6E);
    g_cpu.R[15] = 0x03000D70u;
    runtime_tick(_cyc_03000D6E);
    }
L_03000D70:
    /* 03000D70  03000d70 T movs r5,r5,lsr #8 */
    {
    g_cpu.R[15] = 0x03000D70u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D70 = 1u;
    _cyc_03000D70 = 1u;
    uint32_t _rm_03000D70 = g_cpu.R[5];
    uint32_t _op2_03000D70;
    uint32_t _co_03000D70;
    _op2_03000D70 = _rm_03000D70 >> 8;
    _co_03000D70 = (_rm_03000D70 >> 7) & 1u;
    uint32_t _r_03000D70;
    _r_03000D70 = _op2_03000D70;
    arm_set_nzc_logic(_r_03000D70, _co_03000D70);
    g_cpu.R[5] = _r_03000D70;
    g_cpu.R[15] = 0x03000D72u;
    runtime_tick(_cyc_03000D70);
    }
L_03000D72:
    /* 03000D72  03000d72 T ldrb r0,[r4,#0x6] */
    {
    g_cpu.R[15] = 0x03000D72u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D72 = 1u;
    _cyc_03000D72 = 2u;
    uint32_t _base_03000D72 = g_cpu.R[4];
    uint32_t _off_03000D72;
    _off_03000D72 = 0x00000006u;
    uint32_t _ea_03000D72 = _base_03000D72 + _off_03000D72;
    uint32_t _post_03000D72 = _base_03000D72 + _off_03000D72;
    _cyc_03000D72 += runtime_mem_cycles(_ea_03000D72, 1u, 0u);
    uint32_t _v_03000D72;
    _v_03000D72 = bus_read_u8(_ea_03000D72);
    g_cpu.R[0] = _v_03000D72;
    g_cpu.R[15] = 0x03000D74u;
    runtime_tick(_cyc_03000D72);
    }
L_03000D74:
    /* 03000D74  03000d74 T cmps r5,r0 */
    {
    g_cpu.R[15] = 0x03000D74u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D74 = 1u;
    _cyc_03000D74 = 1u;
    uint32_t _rm_03000D74 = g_cpu.R[0];
    uint32_t _op2_03000D74;
    uint32_t _co_03000D74;
    _op2_03000D74 = _rm_03000D74;
    _co_03000D74 = cpsr_c();
    uint32_t _rn_03000D74 = g_cpu.R[5];
    uint32_t _r_03000D74;
    _r_03000D74 = _rn_03000D74 - _op2_03000D74;
    arm_set_nzcv_sub(_rn_03000D74, _op2_03000D74, _r_03000D74);
    g_cpu.R[15] = 0x03000D76u;
    runtime_tick(_cyc_03000D74);
    }
L_03000D76:
    /* 03000D76  03000d76 T bhi 0x03000d94 */
    {
    g_cpu.R[15] = 0x03000D76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D76 = 1u;
    if (arm_cond_passes(0x8u)) {
        _cyc_03000D76 = 3u;
        g_cpu.R[15] = 0x03000D94u;
        runtime_tick(_cyc_03000D76);
        gf_tfunc_03000D94();
        return;
    }
    g_cpu.R[15] = 0x03000D78u;
    runtime_tick(_cyc_03000D76);
    }
L_03000D78:
    /* 03000D78  03000d78 T adds r5,r0,#0x0 */
    {
    g_cpu.R[15] = 0x03000D78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D78 = 1u;
    _cyc_03000D78 = 1u;
    uint32_t _rn_03000D78 = g_cpu.R[0];
    uint32_t _r_03000D78;
    _r_03000D78 = _rn_03000D78 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000D78, 0x00000000u, _r_03000D78);
    g_cpu.R[5] = _r_03000D78;
    g_cpu.R[15] = 0x03000D7Au;
    runtime_tick(_cyc_03000D78);
    }
L_03000D7A:
    /* 03000D7A  03000d7a T beq 0x03000d56 */
    {
    g_cpu.R[15] = 0x03000D7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D7A = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000D7A = 3u;
        g_cpu.R[15] = 0x03000D56u;
        runtime_tick(_cyc_03000D7A);
        gf_tfunc_03000D56();
        return;
    }
    g_cpu.R[15] = 0x03000D7Cu;
    runtime_tick(_cyc_03000D7A);
    }
L_03000D7C:
    /* 03000D7C  03000d7c T subs r6,r6,#0x1 */
    {
    g_cpu.R[15] = 0x03000D7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D7C = 1u;
    _cyc_03000D7C = 1u;
    uint32_t _rn_03000D7C = g_cpu.R[6];
    uint32_t _r_03000D7C;
    _r_03000D7C = _rn_03000D7C - 0x00000001u;
    arm_set_nzcv_sub(_rn_03000D7C, 0x00000001u, _r_03000D7C);
    g_cpu.R[6] = _r_03000D7C;
    g_cpu.R[15] = 0x03000D7Eu;
    runtime_tick(_cyc_03000D7C);
    }
L_03000D7E:
    /* 03000D7E  03000d7e T strb r6,[r4] */
    {
    g_cpu.R[15] = 0x03000D7Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D7E = 1u;
    _cyc_03000D7E = 1u;
    uint32_t _base_03000D7E = g_cpu.R[4];
    uint32_t _off_03000D7E;
    _off_03000D7E = 0x00000000u;
    uint32_t _ea_03000D7E = _base_03000D7E + _off_03000D7E;
    uint32_t _post_03000D7E = _base_03000D7E + _off_03000D7E;
    _cyc_03000D7E += runtime_mem_cycles(_ea_03000D7E, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D7Eu, _ea_03000D7E, (uint32_t)(g_cpu.R[6] & 0xFFu), 1u);
    bus_write_u8(_ea_03000D7E, (uint8_t)(g_cpu.R[6] & 0xFFu));
    g_cpu.R[15] = 0x03000D80u;
    runtime_tick(_cyc_03000D7E);
    }
L_03000D80:
    /* 03000D80  03000d80 T b 0x03000d94 */
    {
    g_cpu.R[15] = 0x03000D80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D80 = 1u;
    _cyc_03000D80 = 3u;
    g_cpu.R[15] = 0x03000D94u;
    runtime_tick(_cyc_03000D80);
    gf_tfunc_03000D94();
    return;
    g_cpu.R[15] = 0x03000D82u;
    runtime_tick(_cyc_03000D80);
    }
    /* fall-through to 0x03000D82 */
    g_cpu.R[15] = 0x03000D82u;
    runtime_dispatch(0x03000D82u);
    return;
}

/* 0x03000D82  mode=thumb  end=0x03000D86  branches=3  indirect */
void gf_tfunc_03000D82(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000D84u: goto L_03000D84;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000D82u);
    /* 03000D82  03000d82 T cmps r2,#0x3 */
    {
    g_cpu.R[15] = 0x03000D82u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D82 = 1u;
    _cyc_03000D82 = 1u;
    uint32_t _rn_03000D82 = g_cpu.R[2];
    uint32_t _r_03000D82;
    _r_03000D82 = _rn_03000D82 - 0x00000003u;
    arm_set_nzcv_sub(_rn_03000D82, 0x00000003u, _r_03000D82);
    g_cpu.R[15] = 0x03000D84u;
    runtime_tick(_cyc_03000D82);
    }
L_03000D84:
    /* 03000D84  03000d84 T bne 0x03000d94 */
    {
    g_cpu.R[15] = 0x03000D84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D84 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000D84 = 3u;
        g_cpu.R[15] = 0x03000D94u;
        runtime_tick(_cyc_03000D84);
        gf_tfunc_03000D94();
        return;
    }
    g_cpu.R[15] = 0x03000D86u;
    runtime_tick(_cyc_03000D84);
    }
    /* fall-through to 0x03000D86 */
    g_cpu.R[15] = 0x03000D86u;
    runtime_dispatch(0x03000D86u);
    return;
}

/* 0x03000EA8  mode=arm  end=0x03000EB8  branches=2 */
void gf_afunc_03000EA8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000EACu: goto L_03000EAC;
        case 0x03000EB0u: goto L_03000EB0;
        case 0x03000EB4u: goto L_03000EB4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000EA8u);
    /* 03000EA8  03000ea8 A ldr r2,[r13,#0x10] */
    {
    g_cpu.R[15] = 0x03000EA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EA8 = 1u;
    _cyc_03000EA8 = 2u;
    uint32_t _base_03000EA8 = g_cpu.R[13];
    uint32_t _off_03000EA8;
    _off_03000EA8 = 0x00000010u;
    uint32_t _ea_03000EA8 = _base_03000EA8 + _off_03000EA8;
    uint32_t _post_03000EA8 = _base_03000EA8 + _off_03000EA8;
    _cyc_03000EA8 += runtime_mem_cycles(_ea_03000EA8, 4u, 0u);
    uint32_t _v_03000EA8;
    { uint32_t _w = bus_read_u32(_ea_03000EA8 & ~3u); uint32_t _rot = (_ea_03000EA8 & 3u) * 8u; _v_03000EA8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_03000EA8;
    g_cpu.R[15] = 0x03000EACu;
    runtime_tick(_cyc_03000EA8);
    }
L_03000EAC:
    /* 03000EAC  03000eac A cmps r2,#0x0 */
    {
    g_cpu.R[15] = 0x03000EACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EAC = 1u;
    _cyc_03000EAC = 1u;
    uint32_t _rn_03000EAC = g_cpu.R[2];
    uint32_t _r_03000EAC;
    _r_03000EAC = _rn_03000EAC - 0x00000000u;
    arm_set_nzcv_sub(_rn_03000EAC, 0x00000000u, _r_03000EAC);
    g_cpu.R[15] = 0x03000EB0u;
    runtime_tick(_cyc_03000EAC);
    }
L_03000EB0:
    /* 03000EB0  03000eb0 A ldrne r3,[r13,#0xc] */
    {
    g_cpu.R[15] = 0x03000EB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EB0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000EB0 = 2u;
        uint32_t _base_03000EB0 = g_cpu.R[13];
        uint32_t _off_03000EB0;
        _off_03000EB0 = 0x0000000Cu;
        uint32_t _ea_03000EB0 = _base_03000EB0 + _off_03000EB0;
        uint32_t _post_03000EB0 = _base_03000EB0 + _off_03000EB0;
        _cyc_03000EB0 += runtime_mem_cycles(_ea_03000EB0, 4u, 0u);
        uint32_t _v_03000EB0;
        { uint32_t _w = bus_read_u32(_ea_03000EB0 & ~3u); uint32_t _rot = (_ea_03000EB0 & 3u) * 8u; _v_03000EB0 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
        g_cpu.R[3] = _v_03000EB0;
    }
    g_cpu.R[15] = 0x03000EB4u;
    runtime_tick(_cyc_03000EB0);
    }
L_03000EB4:
    /* 03000EB4  03000eb4 A bne 0x03000e60 */
    {
    g_cpu.R[15] = 0x03000EB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EB4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000EB4 = 3u;
        g_cpu.R[15] = 0x03000E60u;
        runtime_tick(_cyc_03000EB4);
        gf_afunc_03000E60();
        return;
    }
    g_cpu.R[15] = 0x03000EB8u;
    runtime_tick(_cyc_03000EB4);
    }
    /* fall-through to 0x03000EB8 */
    g_cpu.R[15] = 0x03000EB8u;
    runtime_dispatch(0x03000EB8u);
    return;
}

/* 0x03000F76  mode=thumb  end=0x03000F8C  branches=0  indirect */
void gf_tfunc_03000F76(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000F78u: goto L_03000F78;
        case 0x03000F7Au: goto L_03000F7A;
        case 0x03000F7Cu: goto L_03000F7C;
        case 0x03000F7Eu: goto L_03000F7E;
        case 0x03000F80u: goto L_03000F80;
        case 0x03000F82u: goto L_03000F82;
        case 0x03000F84u: goto L_03000F84;
        case 0x03000F86u: goto L_03000F86;
        case 0x03000F88u: goto L_03000F88;
        case 0x03000F8Au: goto L_03000F8A;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000F76u);
    /* 03000F76  03000f76 T ldr r0,[r13,#0x18] */
    {
    g_cpu.R[15] = 0x03000F76u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F76 = 1u;
    _cyc_03000F76 = 2u;
    uint32_t _base_03000F76 = g_cpu.R[13];
    uint32_t _off_03000F76;
    _off_03000F76 = 0x00000018u;
    uint32_t _ea_03000F76 = _base_03000F76 + _off_03000F76;
    uint32_t _post_03000F76 = _base_03000F76 + _off_03000F76;
    _cyc_03000F76 += runtime_mem_cycles(_ea_03000F76, 4u, 0u);
    uint32_t _v_03000F76;
    { uint32_t _w = bus_read_u32(_ea_03000F76 & ~3u); uint32_t _rot = (_ea_03000F76 & 3u) * 8u; _v_03000F76 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000F76;
    g_cpu.R[15] = 0x03000F78u;
    runtime_tick(_cyc_03000F76);
    }
L_03000F78:
    /* 03000F78  03000f78 T ldr r3,[r15,#0x10] */
    {
    g_cpu.R[15] = 0x03000F78u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F78 = 1u;
    _cyc_03000F78 = 2u;
    uint32_t _base_03000F78 = 0x03000F7Cu & ~3u;
    uint32_t _off_03000F78;
    _off_03000F78 = 0x00000010u;
    uint32_t _ea_03000F78 = _base_03000F78 + _off_03000F78;
    uint32_t _post_03000F78 = _base_03000F78 + _off_03000F78;
    _cyc_03000F78 += runtime_mem_cycles(_ea_03000F78, 4u, 0u);
    uint32_t _v_03000F78;
    { uint32_t _w = bus_read_u32(_ea_03000F78 & ~3u); uint32_t _rot = (_ea_03000F78 & 3u) * 8u; _v_03000F78 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_03000F78;
    g_cpu.R[15] = 0x03000F7Au;
    runtime_tick(_cyc_03000F78);
    }
L_03000F7A:
    /* 03000F7A  03000f7a T str r3,[r0] */
    {
    g_cpu.R[15] = 0x03000F7Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F7A = 1u;
    _cyc_03000F7A = 1u;
    uint32_t _base_03000F7A = g_cpu.R[0];
    uint32_t _off_03000F7A;
    _off_03000F7A = 0x00000000u;
    uint32_t _ea_03000F7A = _base_03000F7A + _off_03000F7A;
    uint32_t _post_03000F7A = _base_03000F7A + _off_03000F7A;
    _cyc_03000F7A += runtime_mem_cycles(_ea_03000F7A, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000F7Au, _ea_03000F7A & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_03000F7A & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x03000F7Cu;
    runtime_tick(_cyc_03000F7A);
    }
L_03000F7C:
    /* 03000F7C  03000f7c T add r13,r13,#0x1c */
    {
    g_cpu.R[15] = 0x03000F7Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F7C = 1u;
    _cyc_03000F7C = 1u;
    uint32_t _rn_03000F7C = g_cpu.R[13];
    uint32_t _r_03000F7C;
    _r_03000F7C = _rn_03000F7C + 0x0000001Cu;
    g_cpu.R[13] = _r_03000F7C;
    g_cpu.R[15] = 0x03000F7Eu;
    runtime_tick(_cyc_03000F7C);
    }
L_03000F7E:
    /* 03000F7E  03000f7e T ldm r13!,{r0,r1,r2,r3,r4,r5,r6,r7} */
    {
    g_cpu.R[15] = 0x03000F7Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F7E = 1u;
    _cyc_03000F7E = 2u;
    uint32_t _b_03000F7E = g_cpu.R[13];
    uint32_t _a_03000F7E = _b_03000F7E;
    uint32_t _fb_03000F7E = _b_03000F7E + 32u;
    _cyc_03000F7E += runtime_mem_cycles(_a_03000F7E & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_03000F7E & ~3u);
    _a_03000F7E += 4u;
    _cyc_03000F7E += runtime_mem_cycles(_a_03000F7E & ~3u, 4u, 1u);
    g_cpu.R[1] = bus_read_u32(_a_03000F7E & ~3u);
    _a_03000F7E += 4u;
    _cyc_03000F7E += runtime_mem_cycles(_a_03000F7E & ~3u, 4u, 1u);
    g_cpu.R[2] = bus_read_u32(_a_03000F7E & ~3u);
    _a_03000F7E += 4u;
    _cyc_03000F7E += runtime_mem_cycles(_a_03000F7E & ~3u, 4u, 1u);
    g_cpu.R[3] = bus_read_u32(_a_03000F7E & ~3u);
    _a_03000F7E += 4u;
    _cyc_03000F7E += runtime_mem_cycles(_a_03000F7E & ~3u, 4u, 1u);
    g_cpu.R[4] = bus_read_u32(_a_03000F7E & ~3u);
    _a_03000F7E += 4u;
    _cyc_03000F7E += runtime_mem_cycles(_a_03000F7E & ~3u, 4u, 1u);
    g_cpu.R[5] = bus_read_u32(_a_03000F7E & ~3u);
    _a_03000F7E += 4u;
    _cyc_03000F7E += runtime_mem_cycles(_a_03000F7E & ~3u, 4u, 1u);
    g_cpu.R[6] = bus_read_u32(_a_03000F7E & ~3u);
    _a_03000F7E += 4u;
    _cyc_03000F7E += runtime_mem_cycles(_a_03000F7E & ~3u, 4u, 1u);
    g_cpu.R[7] = bus_read_u32(_a_03000F7E & ~3u);
    _a_03000F7E += 4u;
    g_cpu.R[13] = _fb_03000F7E;
    g_cpu.R[15] = 0x03000F80u;
    runtime_tick(_cyc_03000F7E);
    }
L_03000F80:
    /* 03000F80  03000f80 T mov r8,r0 */
    {
    g_cpu.R[15] = 0x03000F80u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F80 = 1u;
    _cyc_03000F80 = 1u;
    uint32_t _rm_03000F80 = g_cpu.R[0];
    uint32_t _op2_03000F80;
    uint32_t _co_03000F80;
    _op2_03000F80 = _rm_03000F80;
    _co_03000F80 = cpsr_c();
    uint32_t _r_03000F80;
    _r_03000F80 = _op2_03000F80;
    g_cpu.R[8] = _r_03000F80;
    g_cpu.R[15] = 0x03000F82u;
    runtime_tick(_cyc_03000F80);
    }
L_03000F82:
    /* 03000F82  03000f82 T mov r9,r1 */
    {
    g_cpu.R[15] = 0x03000F82u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F82 = 1u;
    _cyc_03000F82 = 1u;
    uint32_t _rm_03000F82 = g_cpu.R[1];
    uint32_t _op2_03000F82;
    uint32_t _co_03000F82;
    _op2_03000F82 = _rm_03000F82;
    _co_03000F82 = cpsr_c();
    uint32_t _r_03000F82;
    _r_03000F82 = _op2_03000F82;
    g_cpu.R[9] = _r_03000F82;
    g_cpu.R[15] = 0x03000F84u;
    runtime_tick(_cyc_03000F82);
    }
L_03000F84:
    /* 03000F84  03000f84 T mov r10,r2 */
    {
    g_cpu.R[15] = 0x03000F84u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F84 = 1u;
    _cyc_03000F84 = 1u;
    uint32_t _rm_03000F84 = g_cpu.R[2];
    uint32_t _op2_03000F84;
    uint32_t _co_03000F84;
    _op2_03000F84 = _rm_03000F84;
    _co_03000F84 = cpsr_c();
    uint32_t _r_03000F84;
    _r_03000F84 = _op2_03000F84;
    g_cpu.R[10] = _r_03000F84;
    g_cpu.R[15] = 0x03000F86u;
    runtime_tick(_cyc_03000F84);
    }
L_03000F86:
    /* 03000F86  03000f86 T mov r11,r3 */
    {
    g_cpu.R[15] = 0x03000F86u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F86 = 1u;
    _cyc_03000F86 = 1u;
    uint32_t _rm_03000F86 = g_cpu.R[3];
    uint32_t _op2_03000F86;
    uint32_t _co_03000F86;
    _op2_03000F86 = _rm_03000F86;
    _co_03000F86 = cpsr_c();
    uint32_t _r_03000F86;
    _r_03000F86 = _op2_03000F86;
    g_cpu.R[11] = _r_03000F86;
    g_cpu.R[15] = 0x03000F88u;
    runtime_tick(_cyc_03000F86);
    }
L_03000F88:
    /* 03000F88  03000f88 T ldm r13!,{r3} */
    {
    g_cpu.R[15] = 0x03000F88u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F88 = 1u;
    _cyc_03000F88 = 2u;
    uint32_t _b_03000F88 = g_cpu.R[13];
    uint32_t _a_03000F88 = _b_03000F88;
    uint32_t _fb_03000F88 = _b_03000F88 + 4u;
    _cyc_03000F88 += runtime_mem_cycles(_a_03000F88 & ~3u, 4u, 0u);
    g_cpu.R[3] = bus_read_u32(_a_03000F88 & ~3u);
    _a_03000F88 += 4u;
    g_cpu.R[13] = _fb_03000F88;
    g_cpu.R[15] = 0x03000F8Au;
    runtime_tick(_cyc_03000F88);
    }
L_03000F8A:
    /* 03000F8A  03000f8a T bx r3 */
    {
    g_cpu.R[15] = 0x03000F8Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F8A = 1u;
    _cyc_03000F8A = 3u;
    uint32_t _bxt_03000F8A = g_cpu.R[3];
    g_cpu.R[15] = _bxt_03000F8A & ~1u;
    if (_bxt_03000F8A & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000F8A);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_03000F8A);
    return;
    g_cpu.R[15] = 0x03000F8Cu;
    runtime_tick(_cyc_03000F8A);
    }
    /* fall-through to 0x03000F8C */
    g_cpu.R[15] = 0x03000F8Cu;
    runtime_dispatch(0x03000F8Cu);
    return;
}

/* 0x03000CAC  mode=thumb  end=0x03000CB6  branches=7 */
void gf_tfunc_03000CAC(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000CAEu: goto L_03000CAE;
        case 0x03000CB0u: goto L_03000CB0;
        case 0x03000CB2u: goto L_03000CB2;
        case 0x03000CB4u: goto L_03000CB4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000CACu);
    /* 03000CAC  03000cac T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x03000CACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CAC = 1u;
    _cyc_03000CAC = 1u;
    uint32_t _r_03000CAC;
    _r_03000CAC = 0x00000000u;
    arm_set_nzc_logic(_r_03000CAC, cpsr_c());
    g_cpu.R[0] = _r_03000CAC;
    g_cpu.R[15] = 0x03000CAEu;
    runtime_tick(_cyc_03000CAC);
    }
L_03000CAE:
    /* 03000CAE  03000cae T mov r1,r8 */
    {
    g_cpu.R[15] = 0x03000CAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CAE = 1u;
    _cyc_03000CAE = 1u;
    uint32_t _rm_03000CAE = g_cpu.R[8];
    uint32_t _op2_03000CAE;
    uint32_t _co_03000CAE;
    _op2_03000CAE = _rm_03000CAE;
    _co_03000CAE = cpsr_c();
    uint32_t _r_03000CAE;
    _r_03000CAE = _op2_03000CAE;
    g_cpu.R[1] = _r_03000CAE;
    g_cpu.R[15] = 0x03000CB0u;
    runtime_tick(_cyc_03000CAE);
    }
L_03000CB0:
    /* 03000CB0  03000cb0 T movs r1,r1,lsr #3 */
    {
    g_cpu.R[15] = 0x03000CB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CB0 = 1u;
    _cyc_03000CB0 = 1u;
    uint32_t _rm_03000CB0 = g_cpu.R[1];
    uint32_t _op2_03000CB0;
    uint32_t _co_03000CB0;
    _op2_03000CB0 = _rm_03000CB0 >> 3;
    _co_03000CB0 = (_rm_03000CB0 >> 2) & 1u;
    uint32_t _r_03000CB0;
    _r_03000CB0 = _op2_03000CB0;
    arm_set_nzc_logic(_r_03000CB0, _co_03000CB0);
    g_cpu.R[1] = _r_03000CB0;
    g_cpu.R[15] = 0x03000CB2u;
    runtime_tick(_cyc_03000CB0);
    }
L_03000CB2:
    /* 03000CB2  03000cb2 T bcc 0x03000cb6 */
    {
    g_cpu.R[15] = 0x03000CB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CB2 = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_03000CB2 = 3u;
        g_cpu.R[15] = 0x03000CB6u;
        runtime_tick(_cyc_03000CB2);
        gf_tfunc_03000CB6();
        return;
    }
    g_cpu.R[15] = 0x03000CB4u;
    runtime_tick(_cyc_03000CB2);
    }
L_03000CB4:
    /* 03000CB4  03000cb4 T stm r5!,{r0} */
    {
    g_cpu.R[15] = 0x03000CB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CB4 = 1u;
    _cyc_03000CB4 = 1u;
    uint32_t _b_03000CB4 = g_cpu.R[5];
    uint32_t _a_03000CB4 = _b_03000CB4;
    uint32_t _fb_03000CB4 = _b_03000CB4 + 4u;
    _cyc_03000CB4 += runtime_mem_cycles(_a_03000CB4 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000CB4u, _a_03000CB4 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_03000CB4 & ~3u, g_cpu.R[0]);
    _a_03000CB4 += 4u;
    g_cpu.R[5] = _fb_03000CB4;
    g_cpu.R[15] = 0x03000CB6u;
    runtime_tick(_cyc_03000CB4);
    }
    /* fall-through to 0x03000CB6 */
    g_cpu.R[15] = 0x03000CB6u;
    runtime_dispatch(0x03000CB6u);
    return;
}

/* 0x03000DC4  mode=thumb  end=0x03000DCE  branches=0  indirect */
void gf_tfunc_03000DC4(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000DC6u: goto L_03000DC6;
        case 0x03000DC8u: goto L_03000DC8;
        case 0x03000DCAu: goto L_03000DCA;
        case 0x03000DCCu: goto L_03000DCC;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000DC4u);
    /* 03000DC4  03000dc4 T ldr r5,[r13,#0x8] */
    {
    g_cpu.R[15] = 0x03000DC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DC4 = 1u;
    _cyc_03000DC4 = 2u;
    uint32_t _base_03000DC4 = g_cpu.R[13];
    uint32_t _off_03000DC4;
    _off_03000DC4 = 0x00000008u;
    uint32_t _ea_03000DC4 = _base_03000DC4 + _off_03000DC4;
    uint32_t _post_03000DC4 = _base_03000DC4 + _off_03000DC4;
    _cyc_03000DC4 += runtime_mem_cycles(_ea_03000DC4, 4u, 0u);
    uint32_t _v_03000DC4;
    { uint32_t _w = bus_read_u32(_ea_03000DC4 & ~3u); uint32_t _rot = (_ea_03000DC4 & 3u) * 8u; _v_03000DC4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[5] = _v_03000DC4;
    g_cpu.R[15] = 0x03000DC6u;
    runtime_tick(_cyc_03000DC4);
    }
L_03000DC6:
    /* 03000DC6  03000dc6 T ldr r2,[r4,#0x18] */
    {
    g_cpu.R[15] = 0x03000DC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DC6 = 1u;
    _cyc_03000DC6 = 2u;
    uint32_t _base_03000DC6 = g_cpu.R[4];
    uint32_t _off_03000DC6;
    _off_03000DC6 = 0x00000018u;
    uint32_t _ea_03000DC6 = _base_03000DC6 + _off_03000DC6;
    uint32_t _post_03000DC6 = _base_03000DC6 + _off_03000DC6;
    _cyc_03000DC6 += runtime_mem_cycles(_ea_03000DC6, 4u, 0u);
    uint32_t _v_03000DC6;
    { uint32_t _w = bus_read_u32(_ea_03000DC6 & ~3u); uint32_t _rot = (_ea_03000DC6 & 3u) * 8u; _v_03000DC6 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_03000DC6;
    g_cpu.R[15] = 0x03000DC8u;
    runtime_tick(_cyc_03000DC6);
    }
L_03000DC8:
    /* 03000DC8  03000dc8 T ldr r3,[r4,#0x28] */
    {
    g_cpu.R[15] = 0x03000DC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DC8 = 1u;
    _cyc_03000DC8 = 2u;
    uint32_t _base_03000DC8 = g_cpu.R[4];
    uint32_t _off_03000DC8;
    _off_03000DC8 = 0x00000028u;
    uint32_t _ea_03000DC8 = _base_03000DC8 + _off_03000DC8;
    uint32_t _post_03000DC8 = _base_03000DC8 + _off_03000DC8;
    _cyc_03000DC8 += runtime_mem_cycles(_ea_03000DC8, 4u, 0u);
    uint32_t _v_03000DC8;
    { uint32_t _w = bus_read_u32(_ea_03000DC8 & ~3u); uint32_t _rot = (_ea_03000DC8 & 3u) * 8u; _v_03000DC8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[3] = _v_03000DC8;
    g_cpu.R[15] = 0x03000DCAu;
    runtime_tick(_cyc_03000DC8);
    }
L_03000DCA:
    /* 03000DCA  03000dca T add r0,r15,#0x4 */
    {
    g_cpu.R[15] = 0x03000DCAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DCA = 1u;
    _cyc_03000DCA = 1u;
    uint32_t _rn_03000DCA = 0x03000DCEu & ~3u;
    uint32_t _r_03000DCA;
    _r_03000DCA = _rn_03000DCA + 0x00000004u;
    g_cpu.R[0] = _r_03000DCA;
    g_cpu.R[15] = 0x03000DCCu;
    runtime_tick(_cyc_03000DCA);
    }
L_03000DCC:
    /* 03000DCC  03000dcc T bx r0 */
    {
    g_cpu.R[15] = 0x03000DCCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DCC = 1u;
    _cyc_03000DCC = 3u;
    uint32_t _bxt_03000DCC = g_cpu.R[0];
    g_cpu.R[15] = _bxt_03000DCC & ~1u;
    if (_bxt_03000DCC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03000DCC);
    runtime_dispatch_with_exchange(_bxt_03000DCC);
    return;
    g_cpu.R[15] = 0x03000DCEu;
    runtime_tick(_cyc_03000DCC);
    }
    /* fall-through to 0x03000DCE */
    g_cpu.R[15] = 0x03000DCEu;
    runtime_dispatch(0x03000DCEu);
    return;
}

/* 0x03000CFE  mode=thumb  end=0x03000D2E  branches=4 */
void gf_tfunc_03000CFE(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000D00u: goto L_03000D00;
        case 0x03000D02u: goto L_03000D02;
        case 0x03000D04u: goto L_03000D04;
        case 0x03000D06u: goto L_03000D06;
        case 0x03000D08u: goto L_03000D08;
        case 0x03000D0Au: goto L_03000D0A;
        case 0x03000D0Cu: goto L_03000D0C;
        case 0x03000D0Eu: goto L_03000D0E;
        case 0x03000D10u: goto L_03000D10;
        case 0x03000D12u: goto L_03000D12;
        case 0x03000D14u: goto L_03000D14;
        case 0x03000D16u: goto L_03000D16;
        case 0x03000D18u: goto L_03000D18;
        case 0x03000D1Au: goto L_03000D1A;
        case 0x03000D1Cu: goto L_03000D1C;
        case 0x03000D1Eu: goto L_03000D1E;
        case 0x03000D20u: goto L_03000D20;
        case 0x03000D22u: goto L_03000D22;
        case 0x03000D24u: goto L_03000D24;
        case 0x03000D26u: goto L_03000D26;
        case 0x03000D28u: goto L_03000D28;
        case 0x03000D2Au: goto L_03000D2A;
        case 0x03000D2Cu: goto L_03000D2C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000CFEu);
    /* 03000CFE  03000cfe T movs r0,#0x80 */
    {
    g_cpu.R[15] = 0x03000CFEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CFE = 1u;
    _cyc_03000CFE = 1u;
    uint32_t _r_03000CFE;
    _r_03000CFE = 0x00000080u;
    arm_set_nzc_logic(_r_03000CFE, cpsr_c());
    g_cpu.R[0] = _r_03000CFE;
    g_cpu.R[15] = 0x03000D00u;
    runtime_tick(_cyc_03000CFE);
    }
L_03000D00:
    /* 03000D00  03000d00 T tsts r0,r6 */
    {
    g_cpu.R[15] = 0x03000D00u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D00 = 1u;
    _cyc_03000D00 = 1u;
    uint32_t _rm_03000D00 = g_cpu.R[6];
    uint32_t _op2_03000D00;
    uint32_t _co_03000D00;
    _op2_03000D00 = _rm_03000D00;
    _co_03000D00 = cpsr_c();
    uint32_t _rn_03000D00 = g_cpu.R[0];
    uint32_t _r_03000D00;
    _r_03000D00 = _rn_03000D00 & _op2_03000D00;
    arm_set_nzc_logic(_r_03000D00, _co_03000D00);
    g_cpu.R[15] = 0x03000D02u;
    runtime_tick(_cyc_03000D00);
    }
L_03000D02:
    /* 03000D02  03000d02 T beq 0x03000d2e */
    {
    g_cpu.R[15] = 0x03000D02u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D02 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000D02 = 3u;
        g_cpu.R[15] = 0x03000D2Eu;
        runtime_tick(_cyc_03000D02);
        gf_tfunc_03000D2E();
        return;
    }
    g_cpu.R[15] = 0x03000D04u;
    runtime_tick(_cyc_03000D02);
    }
L_03000D04:
    /* 03000D04  03000d04 T movs r0,#0x40 */
    {
    g_cpu.R[15] = 0x03000D04u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D04 = 1u;
    _cyc_03000D04 = 1u;
    uint32_t _r_03000D04;
    _r_03000D04 = 0x00000040u;
    arm_set_nzc_logic(_r_03000D04, cpsr_c());
    g_cpu.R[0] = _r_03000D04;
    g_cpu.R[15] = 0x03000D06u;
    runtime_tick(_cyc_03000D04);
    }
L_03000D06:
    /* 03000D06  03000d06 T tsts r0,r6 */
    {
    g_cpu.R[15] = 0x03000D06u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D06 = 1u;
    _cyc_03000D06 = 1u;
    uint32_t _rm_03000D06 = g_cpu.R[6];
    uint32_t _op2_03000D06;
    uint32_t _co_03000D06;
    _op2_03000D06 = _rm_03000D06;
    _co_03000D06 = cpsr_c();
    uint32_t _rn_03000D06 = g_cpu.R[0];
    uint32_t _r_03000D06;
    _r_03000D06 = _rn_03000D06 & _op2_03000D06;
    arm_set_nzc_logic(_r_03000D06, _co_03000D06);
    g_cpu.R[15] = 0x03000D08u;
    runtime_tick(_cyc_03000D06);
    }
L_03000D08:
    /* 03000D08  03000d08 T bne 0x03000d3e */
    {
    g_cpu.R[15] = 0x03000D08u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D08 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000D08 = 3u;
        g_cpu.R[15] = 0x03000D3Eu;
        runtime_tick(_cyc_03000D08);
        gf_tfunc_03000D3E();
        return;
    }
    g_cpu.R[15] = 0x03000D0Au;
    runtime_tick(_cyc_03000D08);
    }
L_03000D0A:
    /* 03000D0A  03000d0a T movs r6,#0x3 */
    {
    g_cpu.R[15] = 0x03000D0Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D0A = 1u;
    _cyc_03000D0A = 1u;
    uint32_t _r_03000D0A;
    _r_03000D0A = 0x00000003u;
    arm_set_nzc_logic(_r_03000D0A, cpsr_c());
    g_cpu.R[6] = _r_03000D0A;
    g_cpu.R[15] = 0x03000D0Cu;
    runtime_tick(_cyc_03000D0A);
    }
L_03000D0C:
    /* 03000D0C  03000d0c T strb r6,[r4] */
    {
    g_cpu.R[15] = 0x03000D0Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D0C = 1u;
    _cyc_03000D0C = 1u;
    uint32_t _base_03000D0C = g_cpu.R[4];
    uint32_t _off_03000D0C;
    _off_03000D0C = 0x00000000u;
    uint32_t _ea_03000D0C = _base_03000D0C + _off_03000D0C;
    uint32_t _post_03000D0C = _base_03000D0C + _off_03000D0C;
    _cyc_03000D0C += runtime_mem_cycles(_ea_03000D0C, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D0Cu, _ea_03000D0C, (uint32_t)(g_cpu.R[6] & 0xFFu), 1u);
    bus_write_u8(_ea_03000D0C, (uint8_t)(g_cpu.R[6] & 0xFFu));
    g_cpu.R[15] = 0x03000D0Eu;
    runtime_tick(_cyc_03000D0C);
    }
L_03000D0E:
    /* 03000D0E  03000d0e T adds r0,r3,#0x0 */
    {
    g_cpu.R[15] = 0x03000D0Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D0E = 1u;
    _cyc_03000D0E = 1u;
    uint32_t _rn_03000D0E = g_cpu.R[3];
    uint32_t _r_03000D0E;
    _r_03000D0E = _rn_03000D0E + 0x00000000u;
    arm_set_nzcv_add(_rn_03000D0E, 0x00000000u, _r_03000D0E);
    g_cpu.R[0] = _r_03000D0E;
    g_cpu.R[15] = 0x03000D10u;
    runtime_tick(_cyc_03000D0E);
    }
L_03000D10:
    /* 03000D10  03000d10 T adds r0,r0,#0x10 */
    {
    g_cpu.R[15] = 0x03000D10u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D10 = 1u;
    _cyc_03000D10 = 1u;
    uint32_t _rn_03000D10 = g_cpu.R[0];
    uint32_t _r_03000D10;
    _r_03000D10 = _rn_03000D10 + 0x00000010u;
    arm_set_nzcv_add(_rn_03000D10, 0x00000010u, _r_03000D10);
    g_cpu.R[0] = _r_03000D10;
    g_cpu.R[15] = 0x03000D12u;
    runtime_tick(_cyc_03000D10);
    }
L_03000D12:
    /* 03000D12  03000d12 T str r0,[r4,#0x28] */
    {
    g_cpu.R[15] = 0x03000D12u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D12 = 1u;
    _cyc_03000D12 = 1u;
    uint32_t _base_03000D12 = g_cpu.R[4];
    uint32_t _off_03000D12;
    _off_03000D12 = 0x00000028u;
    uint32_t _ea_03000D12 = _base_03000D12 + _off_03000D12;
    uint32_t _post_03000D12 = _base_03000D12 + _off_03000D12;
    _cyc_03000D12 += runtime_mem_cycles(_ea_03000D12, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D12u, _ea_03000D12 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000D12 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000D14u;
    runtime_tick(_cyc_03000D12);
    }
L_03000D14:
    /* 03000D14  03000d14 T ldr r0,[r3,#0xc] */
    {
    g_cpu.R[15] = 0x03000D14u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D14 = 1u;
    _cyc_03000D14 = 2u;
    uint32_t _base_03000D14 = g_cpu.R[3];
    uint32_t _off_03000D14;
    _off_03000D14 = 0x0000000Cu;
    uint32_t _ea_03000D14 = _base_03000D14 + _off_03000D14;
    uint32_t _post_03000D14 = _base_03000D14 + _off_03000D14;
    _cyc_03000D14 += runtime_mem_cycles(_ea_03000D14, 4u, 0u);
    uint32_t _v_03000D14;
    { uint32_t _w = bus_read_u32(_ea_03000D14 & ~3u); uint32_t _rot = (_ea_03000D14 & 3u) * 8u; _v_03000D14 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000D14;
    g_cpu.R[15] = 0x03000D16u;
    runtime_tick(_cyc_03000D14);
    }
L_03000D16:
    /* 03000D16  03000d16 T str r0,[r4,#0x18] */
    {
    g_cpu.R[15] = 0x03000D16u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D16 = 1u;
    _cyc_03000D16 = 1u;
    uint32_t _base_03000D16 = g_cpu.R[4];
    uint32_t _off_03000D16;
    _off_03000D16 = 0x00000018u;
    uint32_t _ea_03000D16 = _base_03000D16 + _off_03000D16;
    uint32_t _post_03000D16 = _base_03000D16 + _off_03000D16;
    _cyc_03000D16 += runtime_mem_cycles(_ea_03000D16, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D16u, _ea_03000D16 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000D16 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000D18u;
    runtime_tick(_cyc_03000D16);
    }
L_03000D18:
    /* 03000D18  03000d18 T movs r5,#0x0 */
    {
    g_cpu.R[15] = 0x03000D18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D18 = 1u;
    _cyc_03000D18 = 1u;
    uint32_t _r_03000D18;
    _r_03000D18 = 0x00000000u;
    arm_set_nzc_logic(_r_03000D18, cpsr_c());
    g_cpu.R[5] = _r_03000D18;
    g_cpu.R[15] = 0x03000D1Au;
    runtime_tick(_cyc_03000D18);
    }
L_03000D1A:
    /* 03000D1A  03000d1a T strb r5,[r4,#0x9] */
    {
    g_cpu.R[15] = 0x03000D1Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D1A = 1u;
    _cyc_03000D1A = 1u;
    uint32_t _base_03000D1A = g_cpu.R[4];
    uint32_t _off_03000D1A;
    _off_03000D1A = 0x00000009u;
    uint32_t _ea_03000D1A = _base_03000D1A + _off_03000D1A;
    uint32_t _post_03000D1A = _base_03000D1A + _off_03000D1A;
    _cyc_03000D1A += runtime_mem_cycles(_ea_03000D1A, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D1Au, _ea_03000D1A, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_03000D1A, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[15] = 0x03000D1Cu;
    runtime_tick(_cyc_03000D1A);
    }
L_03000D1C:
    /* 03000D1C  03000d1c T str r5,[r4,#0x1c] */
    {
    g_cpu.R[15] = 0x03000D1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D1C = 1u;
    _cyc_03000D1C = 1u;
    uint32_t _base_03000D1C = g_cpu.R[4];
    uint32_t _off_03000D1C;
    _off_03000D1C = 0x0000001Cu;
    uint32_t _ea_03000D1C = _base_03000D1C + _off_03000D1C;
    uint32_t _post_03000D1C = _base_03000D1C + _off_03000D1C;
    _cyc_03000D1C += runtime_mem_cycles(_ea_03000D1C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D1Cu, _ea_03000D1C & ~3u, g_cpu.R[5], 4u);
    bus_write_u32(_ea_03000D1C & ~3u, g_cpu.R[5]);
    g_cpu.R[15] = 0x03000D1Eu;
    runtime_tick(_cyc_03000D1C);
    }
L_03000D1E:
    /* 03000D1E  03000d1e T ldrb r2,[r3,#0x3] */
    {
    g_cpu.R[15] = 0x03000D1Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D1E = 1u;
    _cyc_03000D1E = 2u;
    uint32_t _base_03000D1E = g_cpu.R[3];
    uint32_t _off_03000D1E;
    _off_03000D1E = 0x00000003u;
    uint32_t _ea_03000D1E = _base_03000D1E + _off_03000D1E;
    uint32_t _post_03000D1E = _base_03000D1E + _off_03000D1E;
    _cyc_03000D1E += runtime_mem_cycles(_ea_03000D1E, 1u, 0u);
    uint32_t _v_03000D1E;
    _v_03000D1E = bus_read_u8(_ea_03000D1E);
    g_cpu.R[2] = _v_03000D1E;
    g_cpu.R[15] = 0x03000D20u;
    runtime_tick(_cyc_03000D1E);
    }
L_03000D20:
    /* 03000D20  03000d20 T movs r0,#0xc0 */
    {
    g_cpu.R[15] = 0x03000D20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D20 = 1u;
    _cyc_03000D20 = 1u;
    uint32_t _r_03000D20;
    _r_03000D20 = 0x000000C0u;
    arm_set_nzc_logic(_r_03000D20, cpsr_c());
    g_cpu.R[0] = _r_03000D20;
    g_cpu.R[15] = 0x03000D22u;
    runtime_tick(_cyc_03000D20);
    }
L_03000D22:
    /* 03000D22  03000d22 T tsts r0,r2 */
    {
    g_cpu.R[15] = 0x03000D22u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D22 = 1u;
    _cyc_03000D22 = 1u;
    uint32_t _rm_03000D22 = g_cpu.R[2];
    uint32_t _op2_03000D22;
    uint32_t _co_03000D22;
    _op2_03000D22 = _rm_03000D22;
    _co_03000D22 = cpsr_c();
    uint32_t _rn_03000D22 = g_cpu.R[0];
    uint32_t _r_03000D22;
    _r_03000D22 = _rn_03000D22 & _op2_03000D22;
    arm_set_nzc_logic(_r_03000D22, _co_03000D22);
    g_cpu.R[15] = 0x03000D24u;
    runtime_tick(_cyc_03000D22);
    }
L_03000D24:
    /* 03000D24  03000d24 T beq 0x03000d86 */
    {
    g_cpu.R[15] = 0x03000D24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D24 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000D24 = 3u;
        g_cpu.R[15] = 0x03000D86u;
        runtime_tick(_cyc_03000D24);
        gf_tfunc_03000D86();
        return;
    }
    g_cpu.R[15] = 0x03000D26u;
    runtime_tick(_cyc_03000D24);
    }
L_03000D26:
    /* 03000D26  03000d26 T movs r0,#0x10 */
    {
    g_cpu.R[15] = 0x03000D26u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D26 = 1u;
    _cyc_03000D26 = 1u;
    uint32_t _r_03000D26;
    _r_03000D26 = 0x00000010u;
    arm_set_nzc_logic(_r_03000D26, cpsr_c());
    g_cpu.R[0] = _r_03000D26;
    g_cpu.R[15] = 0x03000D28u;
    runtime_tick(_cyc_03000D26);
    }
L_03000D28:
    /* 03000D28  03000d28 T orrs r6,r6,r0 */
    {
    g_cpu.R[15] = 0x03000D28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D28 = 1u;
    _cyc_03000D28 = 1u;
    uint32_t _rm_03000D28 = g_cpu.R[0];
    uint32_t _op2_03000D28;
    uint32_t _co_03000D28;
    _op2_03000D28 = _rm_03000D28;
    _co_03000D28 = cpsr_c();
    uint32_t _rn_03000D28 = g_cpu.R[6];
    uint32_t _r_03000D28;
    _r_03000D28 = _rn_03000D28 | _op2_03000D28;
    arm_set_nzc_logic(_r_03000D28, _co_03000D28);
    g_cpu.R[6] = _r_03000D28;
    g_cpu.R[15] = 0x03000D2Au;
    runtime_tick(_cyc_03000D28);
    }
L_03000D2A:
    /* 03000D2A  03000d2a T strb r6,[r4] */
    {
    g_cpu.R[15] = 0x03000D2Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D2A = 1u;
    _cyc_03000D2A = 1u;
    uint32_t _base_03000D2A = g_cpu.R[4];
    uint32_t _off_03000D2A;
    _off_03000D2A = 0x00000000u;
    uint32_t _ea_03000D2A = _base_03000D2A + _off_03000D2A;
    uint32_t _post_03000D2A = _base_03000D2A + _off_03000D2A;
    _cyc_03000D2A += runtime_mem_cycles(_ea_03000D2A, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D2Au, _ea_03000D2A, (uint32_t)(g_cpu.R[6] & 0xFFu), 1u);
    bus_write_u8(_ea_03000D2A, (uint8_t)(g_cpu.R[6] & 0xFFu));
    g_cpu.R[15] = 0x03000D2Cu;
    runtime_tick(_cyc_03000D2A);
    }
L_03000D2C:
    /* 03000D2C  03000d2c T b 0x03000d86 */
    {
    g_cpu.R[15] = 0x03000D2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D2C = 1u;
    _cyc_03000D2C = 3u;
    g_cpu.R[15] = 0x03000D86u;
    runtime_tick(_cyc_03000D2C);
    gf_tfunc_03000D86();
    return;
    g_cpu.R[15] = 0x03000D2Eu;
    runtime_tick(_cyc_03000D2C);
    }
    /* fall-through to 0x03000D2E */
    g_cpu.R[15] = 0x03000D2Eu;
    runtime_dispatch(0x03000D2Eu);
    return;
}

/* 0x03000E48  mode=arm  end=0x03000E60  branches=4 */
void gf_afunc_03000E48(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000E4Cu: goto L_03000E4C;
        case 0x03000E50u: goto L_03000E50;
        case 0x03000E54u: goto L_03000E54;
        case 0x03000E58u: goto L_03000E58;
        case 0x03000E5Cu: goto L_03000E5C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000E48u);
    /* 03000E48  03000e48 A ldrsb r0,[r3],#0x1 */
    {
    g_cpu.R[15] = 0x03000E48u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E48 = 1u;
    _cyc_03000E48 = 2u;
    uint32_t _base_03000E48 = g_cpu.R[3];
    uint32_t _off_03000E48;
    _off_03000E48 = 0x00000001u;
    uint32_t _ea_03000E48 = _base_03000E48;
    uint32_t _post_03000E48 = _base_03000E48 + _off_03000E48;
    _cyc_03000E48 += runtime_mem_cycles(_ea_03000E48, 1u, 0u);
    uint32_t _v_03000E48;
    _v_03000E48 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000E48);
    if (3u != 0u) g_cpu.R[3] = _post_03000E48;
    g_cpu.R[0] = _v_03000E48;
    g_cpu.R[15] = 0x03000E4Cu;
    runtime_tick(_cyc_03000E48);
    }
L_03000E4C:
    /* 03000E4C  03000e4c A mul r1,r10,r0 */
    {
    g_cpu.R[15] = 0x03000E4Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E4C = 1u;
    _cyc_03000E4C = 1u;
    _cyc_03000E4C += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_03000E4C = g_cpu.R[10] * g_cpu.R[0];
    g_cpu.R[1] = _r_03000E4C;
    g_cpu.R[15] = 0x03000E50u;
    runtime_tick(_cyc_03000E4C);
    }
L_03000E50:
    /* 03000E50  03000e50 A bic r1,r1,#0xff0000 */
    {
    g_cpu.R[15] = 0x03000E50u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E50 = 1u;
    _cyc_03000E50 = 1u;
    uint32_t _rn_03000E50 = g_cpu.R[1];
    uint32_t _r_03000E50;
    _r_03000E50 = _rn_03000E50 & ~(0x00FF0000u);
    g_cpu.R[1] = _r_03000E50;
    g_cpu.R[15] = 0x03000E54u;
    runtime_tick(_cyc_03000E50);
    }
L_03000E54:
    /* 03000E54  03000e54 A add r6,r1,r6,ror #8 */
    {
    g_cpu.R[15] = 0x03000E54u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E54 = 1u;
    _cyc_03000E54 = 1u;
    uint32_t _rm_03000E54 = g_cpu.R[6];
    uint32_t _op2_03000E54;
    uint32_t _co_03000E54;
    _op2_03000E54 = (_rm_03000E54 >> 8) | (_rm_03000E54 << 24);
    _co_03000E54 = (_op2_03000E54 >> 31) & 1u;
    uint32_t _rn_03000E54 = g_cpu.R[1];
    uint32_t _r_03000E54;
    _r_03000E54 = _rn_03000E54 + _op2_03000E54;
    g_cpu.R[6] = _r_03000E54;
    g_cpu.R[15] = 0x03000E58u;
    runtime_tick(_cyc_03000E54);
    }
L_03000E58:
    /* 03000E58  03000e58 A subs r2,r2,#0x1 */
    {
    g_cpu.R[15] = 0x03000E58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E58 = 1u;
    _cyc_03000E58 = 1u;
    uint32_t _rn_03000E58 = g_cpu.R[2];
    uint32_t _r_03000E58;
    _r_03000E58 = _rn_03000E58 - 0x00000001u;
    arm_set_nzcv_sub(_rn_03000E58, 0x00000001u, _r_03000E58);
    g_cpu.R[2] = _r_03000E58;
    g_cpu.R[15] = 0x03000E5Cu;
    runtime_tick(_cyc_03000E58);
    }
L_03000E5C:
    /* 03000E5C  03000e5c A beq 0x03000ea8 */
    {
    g_cpu.R[15] = 0x03000E5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E5C = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000E5C = 3u;
        g_cpu.R[15] = 0x03000EA8u;
        runtime_tick(_cyc_03000E5C);
        gf_afunc_03000EA8();
        return;
    }
    g_cpu.R[15] = 0x03000E60u;
    runtime_tick(_cyc_03000E5C);
    }
    /* fall-through to 0x03000E60 */
    g_cpu.R[15] = 0x03000E60u;
    runtime_dispatch(0x03000E60u);
    return;
}

/* 0x03000E8C  mode=arm  end=0x03000E9C  branches=2 */
void gf_afunc_03000E8C(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000E90u: goto L_03000E90;
        case 0x03000E94u: goto L_03000E94;
        case 0x03000E98u: goto L_03000E98;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000E8Cu);
L_03000E8C:
    /* 03000E8C  03000e8c A adds r2,r0,r2 */
    {
    g_cpu.R[15] = 0x03000E8Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E8C = 1u;
    _cyc_03000E8C = 1u;
    uint32_t _rm_03000E8C = g_cpu.R[2];
    uint32_t _op2_03000E8C;
    uint32_t _co_03000E8C;
    _op2_03000E8C = _rm_03000E8C;
    _co_03000E8C = cpsr_c();
    uint32_t _rn_03000E8C = g_cpu.R[0];
    uint32_t _r_03000E8C;
    _r_03000E8C = _rn_03000E8C + _op2_03000E8C;
    arm_set_nzcv_add(_rn_03000E8C, _op2_03000E8C, _r_03000E8C);
    g_cpu.R[2] = _r_03000E8C;
    g_cpu.R[15] = 0x03000E90u;
    runtime_tick(_cyc_03000E8C);
    }
L_03000E90:
    /* 03000E90  03000e90 A bgt 0x03000f2c */
    {
    g_cpu.R[15] = 0x03000E90u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E90 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_03000E90 = 3u;
        g_cpu.R[15] = 0x03000F2Cu;
        runtime_tick(_cyc_03000E90);
        gf_afunc_03000F2C();
        return;
    }
    g_cpu.R[15] = 0x03000E94u;
    runtime_tick(_cyc_03000E90);
    }
L_03000E94:
    /* 03000E94  03000e94 A sub r9,r9,r0 */
    {
    g_cpu.R[15] = 0x03000E94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E94 = 1u;
    _cyc_03000E94 = 1u;
    uint32_t _rm_03000E94 = g_cpu.R[0];
    uint32_t _op2_03000E94;
    uint32_t _co_03000E94;
    _op2_03000E94 = _rm_03000E94;
    _co_03000E94 = cpsr_c();
    uint32_t _rn_03000E94 = g_cpu.R[9];
    uint32_t _r_03000E94;
    _r_03000E94 = _rn_03000E94 - _op2_03000E94;
    g_cpu.R[9] = _r_03000E94;
    g_cpu.R[15] = 0x03000E98u;
    runtime_tick(_cyc_03000E94);
    }
L_03000E98:
    /* 03000E98  03000e98 A b 0x03000e8c */
    {
    g_cpu.R[15] = 0x03000E98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E98 = 1u;
    _cyc_03000E98 = 3u;
    g_cpu.R[15] = 0x03000E8Cu;
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x03000E98u, 0x03000E8Cu, 0u, 0u);
    runtime_tick(_cyc_03000E98);
    goto L_03000E8C;
    g_cpu.R[15] = 0x03000E9Cu;
    runtime_tick(_cyc_03000E98);
    }
    /* fall-through to 0x03000E9C */
    g_cpu.R[15] = 0x03000E9Cu;
    runtime_dispatch(0x03000E9Cu);
    return;
}

/* 0x03002554  mode=arm  end=0x03002558  branches=2  indirect */
void gf_afunc_03002554(void) {
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03002554u);
    /* 03002554  03002554 A bne 0x03002554 */
    g_cpu.R[15] = 0x03002554u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002554 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03002554 = 3u;
        g_cpu.R[15] = 0x03002554u;
        runtime_tick(_cyc_03002554);
        return;
    }
    g_cpu.R[15] = 0x03002558u;
    runtime_tick(_cyc_03002554);
    /* fall-through to 0x03002558 */
    g_cpu.R[15] = 0x03002558u;
    runtime_dispatch(0x03002558u);
    return;
}

/* 0x03002558  mode=arm  end=0x0300258C  branches=1  indirect */
void gf_afunc_03002558(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x0300255Cu: goto L_0300255C;
        case 0x03002560u: goto L_03002560;
        case 0x03002564u: goto L_03002564;
        case 0x03002568u: goto L_03002568;
        case 0x0300256Cu: goto L_0300256C;
        case 0x03002570u: goto L_03002570;
        case 0x03002574u: goto L_03002574;
        case 0x03002578u: goto L_03002578;
        case 0x0300257Cu: goto L_0300257C;
        case 0x03002580u: goto L_03002580;
        case 0x03002584u: goto L_03002584;
        case 0x03002588u: goto L_03002588;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03002558u);
    /* 03002558  03002558 A strh r0,[r3,#0x2] */
    {
    g_cpu.R[15] = 0x03002558u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002558 = 1u;
    _cyc_03002558 = 1u;
    uint32_t _base_03002558 = g_cpu.R[3];
    uint32_t _off_03002558;
    _off_03002558 = 0x00000002u;
    uint32_t _ea_03002558 = _base_03002558 + _off_03002558;
    uint32_t _post_03002558 = _base_03002558 + _off_03002558;
    _cyc_03002558 += runtime_mem_cycles(_ea_03002558, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03002558u, _ea_03002558 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03002558 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x0300255Cu;
    runtime_tick(_cyc_03002558);
    }
L_0300255C:
    /* 0300255C  0300255c A ldr r1,[r15,#0x6c] */
    {
    g_cpu.R[15] = 0x0300255Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300255C = 1u;
    _cyc_0300255C = 2u;
    uint32_t _base_0300255C = 0x03002564u;
    uint32_t _off_0300255C;
    _off_0300255C = 0x0000006Cu;
    uint32_t _ea_0300255C = _base_0300255C + _off_0300255C;
    uint32_t _post_0300255C = _base_0300255C + _off_0300255C;
    _cyc_0300255C += runtime_mem_cycles(_ea_0300255C, 4u, 0u);
    uint32_t _v_0300255C;
    { uint32_t _w = bus_read_u32(_ea_0300255C & ~3u); uint32_t _rot = (_ea_0300255C & 3u) * 8u; _v_0300255C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_0300255C;
    g_cpu.R[15] = 0x03002560u;
    runtime_tick(_cyc_0300255C);
    }
L_03002560:
    /* 03002560  03002560 A strh r1,[r3] */
    {
    g_cpu.R[15] = 0x03002560u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002560 = 1u;
    _cyc_03002560 = 1u;
    uint32_t _base_03002560 = g_cpu.R[3];
    uint32_t _off_03002560;
    _off_03002560 = 0x00000000u;
    uint32_t _ea_03002560 = _base_03002560 + _off_03002560;
    uint32_t _post_03002560 = _base_03002560 + _off_03002560;
    _cyc_03002560 += runtime_mem_cycles(_ea_03002560, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03002560u, _ea_03002560 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_03002560 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x03002564u;
    runtime_tick(_cyc_03002560);
    }
L_03002564:
    /* 03002564  03002564 A mrs r3,cpsr */
    {
    g_cpu.R[15] = 0x03002564u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002564 = 1u;
    _cyc_03002564 = 1u;
    g_cpu.R[3] = runtime_mrs_cpsr();
    g_cpu.R[15] = 0x03002568u;
    runtime_tick(_cyc_03002564);
    }
L_03002568:
    /* 03002568  03002568 A bic r3,r3,#0xdf */
    {
    g_cpu.R[15] = 0x03002568u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002568 = 1u;
    _cyc_03002568 = 1u;
    uint32_t _rn_03002568 = g_cpu.R[3];
    uint32_t _r_03002568;
    _r_03002568 = _rn_03002568 & ~(0x000000DFu);
    g_cpu.R[3] = _r_03002568;
    g_cpu.R[15] = 0x0300256Cu;
    runtime_tick(_cyc_03002568);
    }
L_0300256C:
    /* 0300256C  0300256c A orr r3,r3,#0x1f */
    {
    g_cpu.R[15] = 0x0300256Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300256C = 1u;
    _cyc_0300256C = 1u;
    uint32_t _rn_0300256C = g_cpu.R[3];
    uint32_t _r_0300256C;
    _r_0300256C = _rn_0300256C | 0x0000001Fu;
    g_cpu.R[3] = _r_0300256C;
    g_cpu.R[15] = 0x03002570u;
    runtime_tick(_cyc_0300256C);
    }
L_03002570:
    /* 03002570  03002570 A msr cpsr_cf,r3 */
    {
    g_cpu.R[15] = 0x03002570u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002570 = 1u;
    _cyc_03002570 = 1u;
    uint32_t _msrv_03002570;
    _msrv_03002570 = g_cpu.R[3];
    runtime_msr_cpsr(_msrv_03002570, 9u);
    g_cpu.R[15] = 0x03002574u;
    runtime_tick(_cyc_03002570);
    }
L_03002574:
    /* 03002574  03002574 A ldr r1,[r15,#0x58] */
    {
    g_cpu.R[15] = 0x03002574u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002574 = 1u;
    _cyc_03002574 = 2u;
    uint32_t _base_03002574 = 0x0300257Cu;
    uint32_t _off_03002574;
    _off_03002574 = 0x00000058u;
    uint32_t _ea_03002574 = _base_03002574 + _off_03002574;
    uint32_t _post_03002574 = _base_03002574 + _off_03002574;
    _cyc_03002574 += runtime_mem_cycles(_ea_03002574, 4u, 0u);
    uint32_t _v_03002574;
    { uint32_t _w = bus_read_u32(_ea_03002574 & ~3u); uint32_t _rot = (_ea_03002574 & 3u) * 8u; _v_03002574 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03002574;
    g_cpu.R[15] = 0x03002578u;
    runtime_tick(_cyc_03002574);
    }
L_03002578:
    /* 03002578  03002578 A add r1,r1,r2 */
    {
    g_cpu.R[15] = 0x03002578u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002578 = 1u;
    _cyc_03002578 = 1u;
    uint32_t _rm_03002578 = g_cpu.R[2];
    uint32_t _op2_03002578;
    uint32_t _co_03002578;
    _op2_03002578 = _rm_03002578;
    _co_03002578 = cpsr_c();
    uint32_t _rn_03002578 = g_cpu.R[1];
    uint32_t _r_03002578;
    _r_03002578 = _rn_03002578 + _op2_03002578;
    g_cpu.R[1] = _r_03002578;
    g_cpu.R[15] = 0x0300257Cu;
    runtime_tick(_cyc_03002578);
    }
L_0300257C:
    /* 0300257C  0300257c A ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x0300257Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300257C = 1u;
    _cyc_0300257C = 2u;
    uint32_t _base_0300257C = g_cpu.R[1];
    uint32_t _off_0300257C;
    _off_0300257C = 0x00000000u;
    uint32_t _ea_0300257C = _base_0300257C + _off_0300257C;
    uint32_t _post_0300257C = _base_0300257C + _off_0300257C;
    _cyc_0300257C += runtime_mem_cycles(_ea_0300257C, 4u, 0u);
    uint32_t _v_0300257C;
    { uint32_t _w = bus_read_u32(_ea_0300257C & ~3u); uint32_t _rot = (_ea_0300257C & 3u) * 8u; _v_0300257C = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_0300257C;
    g_cpu.R[15] = 0x03002580u;
    runtime_tick(_cyc_0300257C);
    }
L_03002580:
    /* 03002580  03002580 A stm r13!,{r14} */
    {
    g_cpu.R[15] = 0x03002580u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002580 = 1u;
    _cyc_03002580 = 1u;
    uint32_t _b_03002580 = g_cpu.R[13];
    uint32_t _a_03002580 = _b_03002580 - 4u;
    uint32_t _fb_03002580 = _b_03002580 - 4u;
    _cyc_03002580 += runtime_mem_cycles(_a_03002580 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03002580u, _a_03002580 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_03002580 & ~3u, g_cpu.R[14]);
    _a_03002580 += 4u;
    g_cpu.R[13] = _fb_03002580;
    g_cpu.R[15] = 0x03002584u;
    runtime_tick(_cyc_03002580);
    }
L_03002584:
    /* 03002584  03002584 A add r14,r15,#0x0 */
    {
    g_cpu.R[15] = 0x03002584u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002584 = 1u;
    _cyc_03002584 = 1u;
    uint32_t _rn_03002584 = 0x0300258Cu;
    uint32_t _r_03002584;
    _r_03002584 = _rn_03002584 + 0x00000000u;
    g_cpu.R[14] = _r_03002584;
    g_cpu.R[15] = 0x03002588u;
    runtime_tick(_cyc_03002584);
    }
L_03002588:
    /* 03002588  03002588 A bx r0 */
    {
    g_cpu.R[15] = 0x03002588u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002588 = 1u;
    _cyc_03002588 = 3u;
    uint32_t _bxt_03002588 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_03002588 & ~1u;
    if (_bxt_03002588 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_03002588);
    runtime_dispatch_with_exchange(_bxt_03002588);
    return;
    g_cpu.R[15] = 0x0300258Cu;
    runtime_tick(_cyc_03002588);
    }
    /* fall-through to 0x0300258C */
    g_cpu.R[15] = 0x0300258Cu;
    runtime_dispatch(0x0300258Cu);
    return;
}

/* 0x03000E18  mode=arm  end=0x03000E44  branches=7 */
void gf_afunc_03000E18(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000E1Cu: goto L_03000E1C;
        case 0x03000E20u: goto L_03000E20;
        case 0x03000E24u: goto L_03000E24;
        case 0x03000E28u: goto L_03000E28;
        case 0x03000E2Cu: goto L_03000E2C;
        case 0x03000E30u: goto L_03000E30;
        case 0x03000E34u: goto L_03000E34;
        case 0x03000E38u: goto L_03000E38;
        case 0x03000E3Cu: goto L_03000E3C;
        case 0x03000E40u: goto L_03000E40;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000E18u);
L_03000E18:
    /* 03000E18  03000e18 A ldrsb r0,[r3],#0x1 */
    {
    g_cpu.R[15] = 0x03000E18u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E18 = 1u;
    _cyc_03000E18 = 2u;
    uint32_t _base_03000E18 = g_cpu.R[3];
    uint32_t _off_03000E18;
    _off_03000E18 = 0x00000001u;
    uint32_t _ea_03000E18 = _base_03000E18;
    uint32_t _post_03000E18 = _base_03000E18 + _off_03000E18;
    _cyc_03000E18 += runtime_mem_cycles(_ea_03000E18, 1u, 0u);
    uint32_t _v_03000E18;
    _v_03000E18 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000E18);
    if (3u != 0u) g_cpu.R[3] = _post_03000E18;
    g_cpu.R[0] = _v_03000E18;
    g_cpu.R[15] = 0x03000E1Cu;
    runtime_tick(_cyc_03000E18);
    }
L_03000E1C:
    /* 03000E1C  03000e1c A mul r1,r10,r0 */
    {
    g_cpu.R[15] = 0x03000E1Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E1C = 1u;
    _cyc_03000E1C = 1u;
    _cyc_03000E1C += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_03000E1C = g_cpu.R[10] * g_cpu.R[0];
    g_cpu.R[1] = _r_03000E1C;
    g_cpu.R[15] = 0x03000E20u;
    runtime_tick(_cyc_03000E1C);
    }
L_03000E20:
    /* 03000E20  03000e20 A bic r1,r1,#0xff0000 */
    {
    g_cpu.R[15] = 0x03000E20u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E20 = 1u;
    _cyc_03000E20 = 1u;
    uint32_t _rn_03000E20 = g_cpu.R[1];
    uint32_t _r_03000E20;
    _r_03000E20 = _rn_03000E20 & ~(0x00FF0000u);
    g_cpu.R[1] = _r_03000E20;
    g_cpu.R[15] = 0x03000E24u;
    runtime_tick(_cyc_03000E20);
    }
L_03000E24:
    /* 03000E24  03000e24 A add r6,r1,r6,ror #8 */
    {
    g_cpu.R[15] = 0x03000E24u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E24 = 1u;
    _cyc_03000E24 = 1u;
    uint32_t _rm_03000E24 = g_cpu.R[6];
    uint32_t _op2_03000E24;
    uint32_t _co_03000E24;
    _op2_03000E24 = (_rm_03000E24 >> 8) | (_rm_03000E24 << 24);
    _co_03000E24 = (_op2_03000E24 >> 31) & 1u;
    uint32_t _rn_03000E24 = g_cpu.R[1];
    uint32_t _r_03000E24;
    _r_03000E24 = _rn_03000E24 + _op2_03000E24;
    g_cpu.R[6] = _r_03000E24;
    g_cpu.R[15] = 0x03000E28u;
    runtime_tick(_cyc_03000E24);
    }
L_03000E28:
    /* 03000E28  03000e28 A adds r5,r5,#0x40000000 */
    {
    g_cpu.R[15] = 0x03000E28u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E28 = 1u;
    _cyc_03000E28 = 1u;
    uint32_t _rn_03000E28 = g_cpu.R[5];
    uint32_t _r_03000E28;
    _r_03000E28 = _rn_03000E28 + 0x40000000u;
    arm_set_nzcv_add(_rn_03000E28, 0x40000000u, _r_03000E28);
    g_cpu.R[5] = _r_03000E28;
    g_cpu.R[15] = 0x03000E2Cu;
    runtime_tick(_cyc_03000E28);
    }
L_03000E2C:
    /* 03000E2C  03000e2c A bcc 0x03000e18 */
    {
    g_cpu.R[15] = 0x03000E2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E2C = 1u;
    if (arm_cond_passes(0x3u)) {
        _cyc_03000E2C = 3u;
        g_cpu.R[15] = 0x03000E18u;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x03000E2Cu, 0x03000E18u, 0u, 0u);
        runtime_tick(_cyc_03000E2C);
        runtime_idle_backedge(0x03000E18u);
        goto L_03000E18;
    }
    g_cpu.R[15] = 0x03000E30u;
    runtime_tick(_cyc_03000E2C);
    }
L_03000E30:
    /* 03000E30  03000e30 A str r6,[r5],#0x4 */
    {
    g_cpu.R[15] = 0x03000E30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E30 = 1u;
    _cyc_03000E30 = 1u;
    uint32_t _base_03000E30 = g_cpu.R[5];
    uint32_t _off_03000E30;
    _off_03000E30 = 0x00000004u;
    uint32_t _ea_03000E30 = _base_03000E30;
    uint32_t _post_03000E30 = _base_03000E30 + _off_03000E30;
    _cyc_03000E30 += runtime_mem_cycles(_ea_03000E30, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000E30u, _ea_03000E30 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_03000E30 & ~3u, g_cpu.R[6]);
    g_cpu.R[5] = _post_03000E30;
    g_cpu.R[15] = 0x03000E34u;
    runtime_tick(_cyc_03000E30);
    }
L_03000E34:
    /* 03000E34  03000e34 A subs r8,r8,#0x4 */
    {
    g_cpu.R[15] = 0x03000E34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E34 = 1u;
    _cyc_03000E34 = 1u;
    uint32_t _rn_03000E34 = g_cpu.R[8];
    uint32_t _r_03000E34;
    _r_03000E34 = _rn_03000E34 - 0x00000004u;
    arm_set_nzcv_sub(_rn_03000E34, 0x00000004u, _r_03000E34);
    g_cpu.R[8] = _r_03000E34;
    g_cpu.R[15] = 0x03000E38u;
    runtime_tick(_cyc_03000E34);
    }
L_03000E38:
    /* 03000E38  03000e38 A bgt 0x03000e14 */
    {
    g_cpu.R[15] = 0x03000E38u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E38 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_03000E38 = 3u;
        g_cpu.R[15] = 0x03000E14u;
        runtime_tick(_cyc_03000E38);
        gf_afunc_03000E14();
        return;
    }
    g_cpu.R[15] = 0x03000E3Cu;
    runtime_tick(_cyc_03000E38);
    }
L_03000E3C:
    /* 03000E3C  03000e3c A adds r8,r8,r14 */
    {
    g_cpu.R[15] = 0x03000E3Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E3C = 1u;
    _cyc_03000E3C = 1u;
    uint32_t _rm_03000E3C = g_cpu.R[14];
    uint32_t _op2_03000E3C;
    uint32_t _co_03000E3C;
    _op2_03000E3C = _rm_03000E3C;
    _co_03000E3C = cpsr_c();
    uint32_t _rn_03000E3C = g_cpu.R[8];
    uint32_t _r_03000E3C;
    _r_03000E3C = _rn_03000E3C + _op2_03000E3C;
    arm_set_nzcv_add(_rn_03000E3C, _op2_03000E3C, _r_03000E3C);
    g_cpu.R[8] = _r_03000E3C;
    g_cpu.R[15] = 0x03000E40u;
    runtime_tick(_cyc_03000E3C);
    }
L_03000E40:
    /* 03000E40  03000e40 A beq 0x03000f58 */
    {
    g_cpu.R[15] = 0x03000E40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000E40 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000E40 = 3u;
        g_cpu.R[15] = 0x03000F58u;
        runtime_tick(_cyc_03000E40);
        gf_afunc_03000F58();
        return;
    }
    g_cpu.R[15] = 0x03000E44u;
    runtime_tick(_cyc_03000E40);
    }
    /* fall-through to 0x03000E44 */
    g_cpu.R[15] = 0x03000E44u;
    runtime_dispatch(0x03000E44u);
    return;
}

/* 0x03000EB8  mode=arm  end=0x03000ED8  branches=1 */
void gf_afunc_03000EB8(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000EBCu: goto L_03000EBC;
        case 0x03000EC0u: goto L_03000EC0;
        case 0x03000EC4u: goto L_03000EC4;
        case 0x03000EC8u: goto L_03000EC8;
        case 0x03000ECCu: goto L_03000ECC;
        case 0x03000ED0u: goto L_03000ED0;
        case 0x03000ED4u: goto L_03000ED4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000EB8u);
    /* 03000EB8  03000eb8 A strb r2,[r4] */
    {
    g_cpu.R[15] = 0x03000EB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EB8 = 1u;
    _cyc_03000EB8 = 1u;
    uint32_t _base_03000EB8 = g_cpu.R[4];
    uint32_t _off_03000EB8;
    _off_03000EB8 = 0x00000000u;
    uint32_t _ea_03000EB8 = _base_03000EB8 + _off_03000EB8;
    uint32_t _post_03000EB8 = _base_03000EB8 + _off_03000EB8;
    _cyc_03000EB8 += runtime_mem_cycles(_ea_03000EB8, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000EB8u, _ea_03000EB8, (uint32_t)(g_cpu.R[2] & 0xFFu), 1u);
    bus_write_u8(_ea_03000EB8, (uint8_t)(g_cpu.R[2] & 0xFFu));
    g_cpu.R[15] = 0x03000EBCu;
    runtime_tick(_cyc_03000EB8);
    }
L_03000EBC:
    /* 03000EBC  03000ebc A mov r0,r5,lsr #30 */
    {
    g_cpu.R[15] = 0x03000EBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EBC = 1u;
    _cyc_03000EBC = 1u;
    uint32_t _rm_03000EBC = g_cpu.R[5];
    uint32_t _op2_03000EBC;
    uint32_t _co_03000EBC;
    _op2_03000EBC = _rm_03000EBC >> 30;
    _co_03000EBC = (_rm_03000EBC >> 29) & 1u;
    uint32_t _r_03000EBC;
    _r_03000EBC = _op2_03000EBC;
    g_cpu.R[0] = _r_03000EBC;
    g_cpu.R[15] = 0x03000EC0u;
    runtime_tick(_cyc_03000EBC);
    }
L_03000EC0:
    /* 03000EC0  03000ec0 A bic r5,r5,#0xc0000000 */
    {
    g_cpu.R[15] = 0x03000EC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EC0 = 1u;
    _cyc_03000EC0 = 1u;
    uint32_t _rn_03000EC0 = g_cpu.R[5];
    uint32_t _r_03000EC0;
    _r_03000EC0 = _rn_03000EC0 & ~(0xC0000000u);
    g_cpu.R[5] = _r_03000EC0;
    g_cpu.R[15] = 0x03000EC4u;
    runtime_tick(_cyc_03000EC0);
    }
L_03000EC4:
    /* 03000EC4  03000ec4 A rsb r0,r0,#0x3 */
    {
    g_cpu.R[15] = 0x03000EC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EC4 = 1u;
    _cyc_03000EC4 = 1u;
    uint32_t _rn_03000EC4 = g_cpu.R[0];
    uint32_t _r_03000EC4;
    _r_03000EC4 = 0x00000003u - _rn_03000EC4;
    g_cpu.R[0] = _r_03000EC4;
    g_cpu.R[15] = 0x03000EC8u;
    runtime_tick(_cyc_03000EC4);
    }
L_03000EC8:
    /* 03000EC8  03000ec8 A mov r0,r0,lsl #3 */
    {
    g_cpu.R[15] = 0x03000EC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000EC8 = 1u;
    _cyc_03000EC8 = 1u;
    uint32_t _rm_03000EC8 = g_cpu.R[0];
    uint32_t _op2_03000EC8;
    uint32_t _co_03000EC8;
    _op2_03000EC8 = _rm_03000EC8 << 3;
    _co_03000EC8 = (_rm_03000EC8 >> 29) & 1u;
    uint32_t _r_03000EC8;
    _r_03000EC8 = _op2_03000EC8;
    g_cpu.R[0] = _r_03000EC8;
    g_cpu.R[15] = 0x03000ECCu;
    runtime_tick(_cyc_03000EC8);
    }
L_03000ECC:
    /* 03000ECC  03000ecc A mov r6,r6,ror r0 */
    {
    g_cpu.R[15] = 0x03000ECCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000ECC = 1u;
    _cyc_03000ECC = 2u;
    uint32_t _rm_03000ECC = g_cpu.R[6];
    uint32_t _op2_03000ECC;
    uint32_t _co_03000ECC;
    uint32_t _cnt_03000ECC = (g_cpu.R[0]) & 0xFFu;
    if (_cnt_03000ECC == 0)      { _op2_03000ECC = _rm_03000ECC; _co_03000ECC = cpsr_c(); }
    else { uint32_t _n = _cnt_03000ECC & 31u; if (_n == 0) { _op2_03000ECC = _rm_03000ECC; _co_03000ECC = (_rm_03000ECC >> 31) & 1u; } else { _op2_03000ECC = (_rm_03000ECC >> _n) | (_rm_03000ECC << (32u - _n)); _co_03000ECC = (_op2_03000ECC >> 31) & 1u; } }
    uint32_t _r_03000ECC;
    _r_03000ECC = _op2_03000ECC;
    g_cpu.R[6] = _r_03000ECC;
    g_cpu.R[15] = 0x03000ED0u;
    runtime_tick(_cyc_03000ECC);
    }
L_03000ED0:
    /* 03000ED0  03000ed0 A str r6,[r5],#0x4 */
    {
    g_cpu.R[15] = 0x03000ED0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000ED0 = 1u;
    _cyc_03000ED0 = 1u;
    uint32_t _base_03000ED0 = g_cpu.R[5];
    uint32_t _off_03000ED0;
    _off_03000ED0 = 0x00000004u;
    uint32_t _ea_03000ED0 = _base_03000ED0;
    uint32_t _post_03000ED0 = _base_03000ED0 + _off_03000ED0;
    _cyc_03000ED0 += runtime_mem_cycles(_ea_03000ED0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000ED0u, _ea_03000ED0 & ~3u, g_cpu.R[6], 4u);
    bus_write_u32(_ea_03000ED0 & ~3u, g_cpu.R[6]);
    g_cpu.R[5] = _post_03000ED0;
    g_cpu.R[15] = 0x03000ED4u;
    runtime_tick(_cyc_03000ED0);
    }
L_03000ED4:
    /* 03000ED4  03000ed4 A b 0x03000f60 */
    {
    g_cpu.R[15] = 0x03000ED4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000ED4 = 1u;
    _cyc_03000ED4 = 3u;
    g_cpu.R[15] = 0x03000F60u;
    runtime_tick(_cyc_03000ED4);
    gf_afunc_03000F60();
    return;
    g_cpu.R[15] = 0x03000ED8u;
    runtime_tick(_cyc_03000ED4);
    }
    /* fall-through to 0x03000ED8 */
    g_cpu.R[15] = 0x03000ED8u;
    runtime_dispatch(0x03000ED8u);
    return;
}

/* 0x03000F2C  mode=arm  end=0x03000F38  branches=2  indirect */
void gf_afunc_03000F2C(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000F30u: goto L_03000F30;
        case 0x03000F34u: goto L_03000F34;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000F2Cu);
    /* 03000F2C  03000f2c A ldrsbne r0,[r3,+r9]! */
    {
    g_cpu.R[15] = 0x03000F2Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F2C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03000F2C = 2u;
        uint32_t _base_03000F2C = g_cpu.R[3];
        uint32_t _off_03000F2C;
        uint32_t _morm_03000F2C = g_cpu.R[9];
        _off_03000F2C = _morm_03000F2C;
        uint32_t _ea_03000F2C = _base_03000F2C + _off_03000F2C;
        uint32_t _post_03000F2C = _base_03000F2C + _off_03000F2C;
        _cyc_03000F2C += runtime_mem_cycles(_ea_03000F2C, 1u, 0u);
        uint32_t _v_03000F2C;
        _v_03000F2C = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000F2C);
        if (3u != 0u) g_cpu.R[3] = _ea_03000F2C;
        g_cpu.R[0] = _v_03000F2C;
    }
    g_cpu.R[15] = 0x03000F30u;
    runtime_tick(_cyc_03000F2C);
    }
L_03000F30:
    /* 03000F30  03000f30 A ldrsb r1,[r3,#0x1]! */
    {
    g_cpu.R[15] = 0x03000F30u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F30 = 1u;
    _cyc_03000F30 = 2u;
    uint32_t _base_03000F30 = g_cpu.R[3];
    uint32_t _off_03000F30;
    _off_03000F30 = 0x00000001u;
    uint32_t _ea_03000F30 = _base_03000F30 + _off_03000F30;
    uint32_t _post_03000F30 = _base_03000F30 + _off_03000F30;
    _cyc_03000F30 += runtime_mem_cycles(_ea_03000F30, 1u, 0u);
    uint32_t _v_03000F30;
    _v_03000F30 = (uint32_t)(int32_t)(int8_t)bus_read_u8(_ea_03000F30);
    if (3u != 1u) g_cpu.R[3] = _ea_03000F30;
    g_cpu.R[1] = _v_03000F30;
    g_cpu.R[15] = 0x03000F34u;
    runtime_tick(_cyc_03000F30);
    }
L_03000F34:
    /* 03000F34  03000f34 A sub r1,r1,r0 */
    {
    g_cpu.R[15] = 0x03000F34u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F34 = 1u;
    _cyc_03000F34 = 1u;
    uint32_t _rm_03000F34 = g_cpu.R[0];
    uint32_t _op2_03000F34;
    uint32_t _co_03000F34;
    _op2_03000F34 = _rm_03000F34;
    _co_03000F34 = cpsr_c();
    uint32_t _rn_03000F34 = g_cpu.R[1];
    uint32_t _r_03000F34;
    _r_03000F34 = _rn_03000F34 - _op2_03000F34;
    g_cpu.R[1] = _r_03000F34;
    g_cpu.R[15] = 0x03000F38u;
    runtime_tick(_cyc_03000F34);
    }
    /* fall-through to 0x03000F38 */
    g_cpu.R[15] = 0x03000F38u;
    runtime_dispatch(0x03000F38u);
    return;
}

/* 0x03000F58  mode=arm  end=0x03000F60  branches=0  indirect */
void gf_afunc_03000F58(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000F5Cu: goto L_03000F5C;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000F58u);
    /* 03000F58  03000f58 A str r2,[r4,#0x18] */
    {
    g_cpu.R[15] = 0x03000F58u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F58 = 1u;
    _cyc_03000F58 = 1u;
    uint32_t _base_03000F58 = g_cpu.R[4];
    uint32_t _off_03000F58;
    _off_03000F58 = 0x00000018u;
    uint32_t _ea_03000F58 = _base_03000F58 + _off_03000F58;
    uint32_t _post_03000F58 = _base_03000F58 + _off_03000F58;
    _cyc_03000F58 += runtime_mem_cycles(_ea_03000F58, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000F58u, _ea_03000F58 & ~3u, g_cpu.R[2], 4u);
    bus_write_u32(_ea_03000F58 & ~3u, g_cpu.R[2]);
    g_cpu.R[15] = 0x03000F5Cu;
    runtime_tick(_cyc_03000F58);
    }
L_03000F5C:
    /* 03000F5C  03000f5c A str r3,[r4,#0x28] */
    {
    g_cpu.R[15] = 0x03000F5Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000F5C = 1u;
    _cyc_03000F5C = 1u;
    uint32_t _base_03000F5C = g_cpu.R[4];
    uint32_t _off_03000F5C;
    _off_03000F5C = 0x00000028u;
    uint32_t _ea_03000F5C = _base_03000F5C + _off_03000F5C;
    uint32_t _post_03000F5C = _base_03000F5C + _off_03000F5C;
    _cyc_03000F5C += runtime_mem_cycles(_ea_03000F5C, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000F5Cu, _ea_03000F5C & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_ea_03000F5C & ~3u, g_cpu.R[3]);
    g_cpu.R[15] = 0x03000F60u;
    runtime_tick(_cyc_03000F5C);
    }
    /* fall-through to 0x03000F60 */
    g_cpu.R[15] = 0x03000F60u;
    runtime_dispatch(0x03000F60u);
    return;
}

/* 0x03002490  mode=arm  end=0x03002554  branches=15  indirect */
void gf_iwram_03002490(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03002494u: goto L_03002494;
        case 0x03002498u: goto L_03002498;
        case 0x0300249Cu: goto L_0300249C;
        case 0x030024A0u: goto L_030024A0;
        case 0x030024A4u: goto L_030024A4;
        case 0x030024A8u: goto L_030024A8;
        case 0x030024ACu: goto L_030024AC;
        case 0x030024B0u: goto L_030024B0;
        case 0x030024B4u: goto L_030024B4;
        case 0x030024B8u: goto L_030024B8;
        case 0x030024BCu: goto L_030024BC;
        case 0x030024C0u: goto L_030024C0;
        case 0x030024C4u: goto L_030024C4;
        case 0x030024C8u: goto L_030024C8;
        case 0x030024CCu: goto L_030024CC;
        case 0x030024D0u: goto L_030024D0;
        case 0x030024D4u: goto L_030024D4;
        case 0x030024D8u: goto L_030024D8;
        case 0x030024DCu: goto L_030024DC;
        case 0x030024E0u: goto L_030024E0;
        case 0x030024E4u: goto L_030024E4;
        case 0x030024E8u: goto L_030024E8;
        case 0x030024ECu: goto L_030024EC;
        case 0x030024F0u: goto L_030024F0;
        case 0x030024F4u: goto L_030024F4;
        case 0x030024F8u: goto L_030024F8;
        case 0x030024FCu: goto L_030024FC;
        case 0x03002500u: goto L_03002500;
        case 0x03002504u: goto L_03002504;
        case 0x03002508u: goto L_03002508;
        case 0x0300250Cu: goto L_0300250C;
        case 0x03002510u: goto L_03002510;
        case 0x03002514u: goto L_03002514;
        case 0x03002518u: goto L_03002518;
        case 0x0300251Cu: goto L_0300251C;
        case 0x03002520u: goto L_03002520;
        case 0x03002524u: goto L_03002524;
        case 0x03002528u: goto L_03002528;
        case 0x0300252Cu: goto L_0300252C;
        case 0x03002530u: goto L_03002530;
        case 0x03002534u: goto L_03002534;
        case 0x03002538u: goto L_03002538;
        case 0x0300253Cu: goto L_0300253C;
        case 0x03002540u: goto L_03002540;
        case 0x03002544u: goto L_03002544;
        case 0x03002548u: goto L_03002548;
        case 0x0300254Cu: goto L_0300254C;
        case 0x03002550u: goto L_03002550;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03002490u);
    /* 03002490  03002490 A mov r3,#0x4000000 */
    {
    g_cpu.R[15] = 0x03002490u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002490 = 1u;
    _cyc_03002490 = 1u;
    uint32_t _r_03002490;
    _r_03002490 = 0x04000000u;
    g_cpu.R[3] = _r_03002490;
    g_cpu.R[15] = 0x03002494u;
    runtime_tick(_cyc_03002490);
    }
L_03002494:
    /* 03002494  03002494 A add r3,r3,#0x200 */
    {
    g_cpu.R[15] = 0x03002494u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002494 = 1u;
    _cyc_03002494 = 1u;
    uint32_t _rn_03002494 = g_cpu.R[3];
    uint32_t _r_03002494;
    _r_03002494 = _rn_03002494 + 0x00000200u;
    g_cpu.R[3] = _r_03002494;
    g_cpu.R[15] = 0x03002498u;
    runtime_tick(_cyc_03002494);
    }
L_03002498:
    /* 03002498  03002498 A ldr r2,[r3] */
    {
    g_cpu.R[15] = 0x03002498u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002498 = 1u;
    _cyc_03002498 = 2u;
    uint32_t _base_03002498 = g_cpu.R[3];
    uint32_t _off_03002498;
    _off_03002498 = 0x00000000u;
    uint32_t _ea_03002498 = _base_03002498 + _off_03002498;
    uint32_t _post_03002498 = _base_03002498 + _off_03002498;
    _cyc_03002498 += runtime_mem_cycles(_ea_03002498, 4u, 0u);
    uint32_t _v_03002498;
    { uint32_t _w = bus_read_u32(_ea_03002498 & ~3u); uint32_t _rot = (_ea_03002498 & 3u) * 8u; _v_03002498 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[2] = _v_03002498;
    g_cpu.R[15] = 0x0300249Cu;
    runtime_tick(_cyc_03002498);
    }
L_0300249C:
    /* 0300249C  0300249c A mov r1,r2,lsl #16 */
    {
    g_cpu.R[15] = 0x0300249Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300249C = 1u;
    _cyc_0300249C = 1u;
    uint32_t _rm_0300249C = g_cpu.R[2];
    uint32_t _op2_0300249C;
    uint32_t _co_0300249C;
    _op2_0300249C = _rm_0300249C << 16;
    _co_0300249C = (_rm_0300249C >> 16) & 1u;
    uint32_t _r_0300249C;
    _r_0300249C = _op2_0300249C;
    g_cpu.R[1] = _r_0300249C;
    g_cpu.R[15] = 0x030024A0u;
    runtime_tick(_cyc_0300249C);
    }
L_030024A0:
    /* 030024A0  030024a0 A mov r1,r1,lsr #16 */
    {
    g_cpu.R[15] = 0x030024A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024A0 = 1u;
    _cyc_030024A0 = 1u;
    uint32_t _rm_030024A0 = g_cpu.R[1];
    uint32_t _op2_030024A0;
    uint32_t _co_030024A0;
    _op2_030024A0 = _rm_030024A0 >> 16;
    _co_030024A0 = (_rm_030024A0 >> 15) & 1u;
    uint32_t _r_030024A0;
    _r_030024A0 = _op2_030024A0;
    g_cpu.R[1] = _r_030024A0;
    g_cpu.R[15] = 0x030024A4u;
    runtime_tick(_cyc_030024A0);
    }
L_030024A4:
    /* 030024A4  030024a4 A mrs r0,spsr */
    {
    g_cpu.R[15] = 0x030024A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024A4 = 1u;
    _cyc_030024A4 = 1u;
    g_cpu.R[0] = runtime_mrs_spsr();
    g_cpu.R[15] = 0x030024A8u;
    runtime_tick(_cyc_030024A4);
    }
L_030024A8:
    /* 030024A8  030024a8 A stm r13!,{r0,r1,r3,r14} */
    {
    g_cpu.R[15] = 0x030024A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024A8 = 1u;
    _cyc_030024A8 = 1u;
    uint32_t _b_030024A8 = g_cpu.R[13];
    uint32_t _a_030024A8 = _b_030024A8 - 16u;
    uint32_t _fb_030024A8 = _b_030024A8 - 16u;
    _cyc_030024A8 += runtime_mem_cycles(_a_030024A8 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030024A8u, _a_030024A8 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_030024A8 & ~3u, g_cpu.R[0]);
    _a_030024A8 += 4u;
    _cyc_030024A8 += runtime_mem_cycles(_a_030024A8 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030024A8u, _a_030024A8 & ~3u, g_cpu.R[1], 4u);
    bus_write_u32(_a_030024A8 & ~3u, g_cpu.R[1]);
    _a_030024A8 += 4u;
    _cyc_030024A8 += runtime_mem_cycles(_a_030024A8 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030024A8u, _a_030024A8 & ~3u, g_cpu.R[3], 4u);
    bus_write_u32(_a_030024A8 & ~3u, g_cpu.R[3]);
    _a_030024A8 += 4u;
    _cyc_030024A8 += runtime_mem_cycles(_a_030024A8 & ~3u, 4u, 1u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030024A8u, _a_030024A8 & ~3u, g_cpu.R[14], 4u);
    bus_write_u32(_a_030024A8 & ~3u, g_cpu.R[14]);
    _a_030024A8 += 4u;
    g_cpu.R[13] = _fb_030024A8;
    g_cpu.R[15] = 0x030024ACu;
    runtime_tick(_cyc_030024A8);
    }
L_030024AC:
    /* 030024AC  030024ac A and r1,r2,r2,lsr #16 */
    {
    g_cpu.R[15] = 0x030024ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024AC = 1u;
    _cyc_030024AC = 1u;
    uint32_t _rm_030024AC = g_cpu.R[2];
    uint32_t _op2_030024AC;
    uint32_t _co_030024AC;
    _op2_030024AC = _rm_030024AC >> 16;
    _co_030024AC = (_rm_030024AC >> 15) & 1u;
    uint32_t _rn_030024AC = g_cpu.R[2];
    uint32_t _r_030024AC;
    _r_030024AC = _rn_030024AC & _op2_030024AC;
    g_cpu.R[1] = _r_030024AC;
    g_cpu.R[15] = 0x030024B0u;
    runtime_tick(_cyc_030024AC);
    }
L_030024B0:
    /* 030024B0  030024b0 A mov r2,#0x0 */
    {
    g_cpu.R[15] = 0x030024B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024B0 = 1u;
    _cyc_030024B0 = 1u;
    uint32_t _r_030024B0;
    _r_030024B0 = 0x00000000u;
    g_cpu.R[2] = _r_030024B0;
    g_cpu.R[15] = 0x030024B4u;
    runtime_tick(_cyc_030024B0);
    }
L_030024B4:
    /* 030024B4  030024b4 A ands r0,r1,#0x80 */
    {
    g_cpu.R[15] = 0x030024B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024B4 = 1u;
    _cyc_030024B4 = 1u;
    uint32_t _rn_030024B4 = g_cpu.R[1];
    uint32_t _r_030024B4;
    _r_030024B4 = _rn_030024B4 & 0x00000080u;
    arm_set_nzc_logic(_r_030024B4, cpsr_c());
    g_cpu.R[0] = _r_030024B4;
    g_cpu.R[15] = 0x030024B8u;
    runtime_tick(_cyc_030024B4);
    }
L_030024B8:
    /* 030024B8  030024b8 A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x030024B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024B8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030024B8 = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_030024B8);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x030024BCu;
    runtime_tick(_cyc_030024B8);
    }
L_030024BC:
    /* 030024BC  030024bc A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x030024BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024BC = 1u;
    _cyc_030024BC = 1u;
    uint32_t _rn_030024BC = g_cpu.R[2];
    uint32_t _r_030024BC;
    _r_030024BC = _rn_030024BC + 0x00000004u;
    g_cpu.R[2] = _r_030024BC;
    g_cpu.R[15] = 0x030024C0u;
    runtime_tick(_cyc_030024BC);
    }
L_030024C0:
    /* 030024C0  030024c0 A ands r0,r1,#0x4 */
    {
    g_cpu.R[15] = 0x030024C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024C0 = 1u;
    _cyc_030024C0 = 1u;
    uint32_t _rn_030024C0 = g_cpu.R[1];
    uint32_t _r_030024C0;
    _r_030024C0 = _rn_030024C0 & 0x00000004u;
    arm_set_nzc_logic(_r_030024C0, cpsr_c());
    g_cpu.R[0] = _r_030024C0;
    g_cpu.R[15] = 0x030024C4u;
    runtime_tick(_cyc_030024C0);
    }
L_030024C4:
    /* 030024C4  030024c4 A bne 0x030025b0 */
    {
    g_cpu.R[15] = 0x030024C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024C4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030024C4 = 3u;
        g_cpu.R[15] = 0x030025B0u;
        runtime_tick(_cyc_030024C4);
        gf_afunc_030025B0();
        return;
    }
    g_cpu.R[15] = 0x030024C8u;
    runtime_tick(_cyc_030024C4);
    }
L_030024C8:
    /* 030024C8  030024c8 A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x030024C8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024C8 = 1u;
    _cyc_030024C8 = 1u;
    uint32_t _rn_030024C8 = g_cpu.R[2];
    uint32_t _r_030024C8;
    _r_030024C8 = _rn_030024C8 + 0x00000004u;
    g_cpu.R[2] = _r_030024C8;
    g_cpu.R[15] = 0x030024CCu;
    runtime_tick(_cyc_030024C8);
    }
L_030024CC:
    /* 030024CC  030024cc A ands r0,r1,#0x40 */
    {
    g_cpu.R[15] = 0x030024CCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024CC = 1u;
    _cyc_030024CC = 1u;
    uint32_t _rn_030024CC = g_cpu.R[1];
    uint32_t _r_030024CC;
    _r_030024CC = _rn_030024CC & 0x00000040u;
    arm_set_nzc_logic(_r_030024CC, cpsr_c());
    g_cpu.R[0] = _r_030024CC;
    g_cpu.R[15] = 0x030024D0u;
    runtime_tick(_cyc_030024CC);
    }
L_030024D0:
    /* 030024D0  030024d0 A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x030024D0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024D0 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030024D0 = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_030024D0);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x030024D4u;
    runtime_tick(_cyc_030024D0);
    }
L_030024D4:
    /* 030024D4  030024d4 A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x030024D4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024D4 = 1u;
    _cyc_030024D4 = 1u;
    uint32_t _rn_030024D4 = g_cpu.R[2];
    uint32_t _r_030024D4;
    _r_030024D4 = _rn_030024D4 + 0x00000004u;
    g_cpu.R[2] = _r_030024D4;
    g_cpu.R[15] = 0x030024D8u;
    runtime_tick(_cyc_030024D4);
    }
L_030024D8:
    /* 030024D8  030024d8 A ands r0,r1,#0x1 */
    {
    g_cpu.R[15] = 0x030024D8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024D8 = 1u;
    _cyc_030024D8 = 1u;
    uint32_t _rn_030024D8 = g_cpu.R[1];
    uint32_t _r_030024D8;
    _r_030024D8 = _rn_030024D8 & 0x00000001u;
    arm_set_nzc_logic(_r_030024D8, cpsr_c());
    g_cpu.R[0] = _r_030024D8;
    g_cpu.R[15] = 0x030024DCu;
    runtime_tick(_cyc_030024D8);
    }
L_030024DC:
    /* 030024DC  030024dc A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x030024DCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024DC = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030024DC = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_030024DC);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x030024E0u;
    runtime_tick(_cyc_030024DC);
    }
L_030024E0:
    /* 030024E0  030024e0 A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x030024E0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024E0 = 1u;
    _cyc_030024E0 = 1u;
    uint32_t _rn_030024E0 = g_cpu.R[2];
    uint32_t _r_030024E0;
    _r_030024E0 = _rn_030024E0 + 0x00000004u;
    g_cpu.R[2] = _r_030024E0;
    g_cpu.R[15] = 0x030024E4u;
    runtime_tick(_cyc_030024E0);
    }
L_030024E4:
    /* 030024E4  030024e4 A ands r0,r1,#0x2 */
    {
    g_cpu.R[15] = 0x030024E4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024E4 = 1u;
    _cyc_030024E4 = 1u;
    uint32_t _rn_030024E4 = g_cpu.R[1];
    uint32_t _r_030024E4;
    _r_030024E4 = _rn_030024E4 & 0x00000002u;
    arm_set_nzc_logic(_r_030024E4, cpsr_c());
    g_cpu.R[0] = _r_030024E4;
    g_cpu.R[15] = 0x030024E8u;
    runtime_tick(_cyc_030024E4);
    }
L_030024E8:
    /* 030024E8  030024e8 A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x030024E8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024E8 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030024E8 = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_030024E8);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x030024ECu;
    runtime_tick(_cyc_030024E8);
    }
L_030024EC:
    /* 030024EC  030024ec A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x030024ECu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024EC = 1u;
    _cyc_030024EC = 1u;
    uint32_t _rn_030024EC = g_cpu.R[2];
    uint32_t _r_030024EC;
    _r_030024EC = _rn_030024EC + 0x00000004u;
    g_cpu.R[2] = _r_030024EC;
    g_cpu.R[15] = 0x030024F0u;
    runtime_tick(_cyc_030024EC);
    }
L_030024F0:
    /* 030024F0  030024f0 A ands r0,r1,#0x8 */
    {
    g_cpu.R[15] = 0x030024F0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024F0 = 1u;
    _cyc_030024F0 = 1u;
    uint32_t _rn_030024F0 = g_cpu.R[1];
    uint32_t _r_030024F0;
    _r_030024F0 = _rn_030024F0 & 0x00000008u;
    arm_set_nzc_logic(_r_030024F0, cpsr_c());
    g_cpu.R[0] = _r_030024F0;
    g_cpu.R[15] = 0x030024F4u;
    runtime_tick(_cyc_030024F0);
    }
L_030024F4:
    /* 030024F4  030024f4 A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x030024F4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024F4 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_030024F4 = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_030024F4);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x030024F8u;
    runtime_tick(_cyc_030024F4);
    }
L_030024F8:
    /* 030024F8  030024f8 A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x030024F8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024F8 = 1u;
    _cyc_030024F8 = 1u;
    uint32_t _rn_030024F8 = g_cpu.R[2];
    uint32_t _r_030024F8;
    _r_030024F8 = _rn_030024F8 + 0x00000004u;
    g_cpu.R[2] = _r_030024F8;
    g_cpu.R[15] = 0x030024FCu;
    runtime_tick(_cyc_030024F8);
    }
L_030024FC:
    /* 030024FC  030024fc A ands r0,r1,#0x10 */
    {
    g_cpu.R[15] = 0x030024FCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030024FC = 1u;
    _cyc_030024FC = 1u;
    uint32_t _rn_030024FC = g_cpu.R[1];
    uint32_t _r_030024FC;
    _r_030024FC = _rn_030024FC & 0x00000010u;
    arm_set_nzc_logic(_r_030024FC, cpsr_c());
    g_cpu.R[0] = _r_030024FC;
    g_cpu.R[15] = 0x03002500u;
    runtime_tick(_cyc_030024FC);
    }
L_03002500:
    /* 03002500  03002500 A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x03002500u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002500 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03002500 = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_03002500);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x03002504u;
    runtime_tick(_cyc_03002500);
    }
L_03002504:
    /* 03002504  03002504 A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x03002504u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002504 = 1u;
    _cyc_03002504 = 1u;
    uint32_t _rn_03002504 = g_cpu.R[2];
    uint32_t _r_03002504;
    _r_03002504 = _rn_03002504 + 0x00000004u;
    g_cpu.R[2] = _r_03002504;
    g_cpu.R[15] = 0x03002508u;
    runtime_tick(_cyc_03002504);
    }
L_03002508:
    /* 03002508  03002508 A ands r0,r1,#0x20 */
    {
    g_cpu.R[15] = 0x03002508u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002508 = 1u;
    _cyc_03002508 = 1u;
    uint32_t _rn_03002508 = g_cpu.R[1];
    uint32_t _r_03002508;
    _r_03002508 = _rn_03002508 & 0x00000020u;
    arm_set_nzc_logic(_r_03002508, cpsr_c());
    g_cpu.R[0] = _r_03002508;
    g_cpu.R[15] = 0x0300250Cu;
    runtime_tick(_cyc_03002508);
    }
L_0300250C:
    /* 0300250C  0300250c A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x0300250Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300250C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0300250C = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_0300250C);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x03002510u;
    runtime_tick(_cyc_0300250C);
    }
L_03002510:
    /* 03002510  03002510 A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x03002510u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002510 = 1u;
    _cyc_03002510 = 1u;
    uint32_t _rn_03002510 = g_cpu.R[2];
    uint32_t _r_03002510;
    _r_03002510 = _rn_03002510 + 0x00000004u;
    g_cpu.R[2] = _r_03002510;
    g_cpu.R[15] = 0x03002514u;
    runtime_tick(_cyc_03002510);
    }
L_03002514:
    /* 03002514  03002514 A ands r0,r1,#0x100 */
    {
    g_cpu.R[15] = 0x03002514u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002514 = 1u;
    _cyc_03002514 = 1u;
    uint32_t _rn_03002514 = g_cpu.R[1];
    uint32_t _r_03002514;
    _r_03002514 = _rn_03002514 & 0x00000100u;
    arm_set_nzc_logic(_r_03002514, 0u);
    g_cpu.R[0] = _r_03002514;
    g_cpu.R[15] = 0x03002518u;
    runtime_tick(_cyc_03002514);
    }
L_03002518:
    /* 03002518  03002518 A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x03002518u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002518 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03002518 = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_03002518);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x0300251Cu;
    runtime_tick(_cyc_03002518);
    }
L_0300251C:
    /* 0300251C  0300251c A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x0300251Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300251C = 1u;
    _cyc_0300251C = 1u;
    uint32_t _rn_0300251C = g_cpu.R[2];
    uint32_t _r_0300251C;
    _r_0300251C = _rn_0300251C + 0x00000004u;
    g_cpu.R[2] = _r_0300251C;
    g_cpu.R[15] = 0x03002520u;
    runtime_tick(_cyc_0300251C);
    }
L_03002520:
    /* 03002520  03002520 A ands r0,r1,#0x200 */
    {
    g_cpu.R[15] = 0x03002520u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002520 = 1u;
    _cyc_03002520 = 1u;
    uint32_t _rn_03002520 = g_cpu.R[1];
    uint32_t _r_03002520;
    _r_03002520 = _rn_03002520 & 0x00000200u;
    arm_set_nzc_logic(_r_03002520, 0u);
    g_cpu.R[0] = _r_03002520;
    g_cpu.R[15] = 0x03002524u;
    runtime_tick(_cyc_03002520);
    }
L_03002524:
    /* 03002524  03002524 A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x03002524u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002524 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03002524 = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_03002524);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x03002528u;
    runtime_tick(_cyc_03002524);
    }
L_03002528:
    /* 03002528  03002528 A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x03002528u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002528 = 1u;
    _cyc_03002528 = 1u;
    uint32_t _rn_03002528 = g_cpu.R[2];
    uint32_t _r_03002528;
    _r_03002528 = _rn_03002528 + 0x00000004u;
    g_cpu.R[2] = _r_03002528;
    g_cpu.R[15] = 0x0300252Cu;
    runtime_tick(_cyc_03002528);
    }
L_0300252C:
    /* 0300252C  0300252c A ands r0,r1,#0x400 */
    {
    g_cpu.R[15] = 0x0300252Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300252C = 1u;
    _cyc_0300252C = 1u;
    uint32_t _rn_0300252C = g_cpu.R[1];
    uint32_t _r_0300252C;
    _r_0300252C = _rn_0300252C & 0x00000400u;
    arm_set_nzc_logic(_r_0300252C, 0u);
    g_cpu.R[0] = _r_0300252C;
    g_cpu.R[15] = 0x03002530u;
    runtime_tick(_cyc_0300252C);
    }
L_03002530:
    /* 03002530  03002530 A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x03002530u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002530 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03002530 = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_03002530);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x03002534u;
    runtime_tick(_cyc_03002530);
    }
L_03002534:
    /* 03002534  03002534 A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x03002534u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002534 = 1u;
    _cyc_03002534 = 1u;
    uint32_t _rn_03002534 = g_cpu.R[2];
    uint32_t _r_03002534;
    _r_03002534 = _rn_03002534 + 0x00000004u;
    g_cpu.R[2] = _r_03002534;
    g_cpu.R[15] = 0x03002538u;
    runtime_tick(_cyc_03002534);
    }
L_03002538:
    /* 03002538  03002538 A ands r0,r1,#0x800 */
    {
    g_cpu.R[15] = 0x03002538u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002538 = 1u;
    _cyc_03002538 = 1u;
    uint32_t _rn_03002538 = g_cpu.R[1];
    uint32_t _r_03002538;
    _r_03002538 = _rn_03002538 & 0x00000800u;
    arm_set_nzc_logic(_r_03002538, 0u);
    g_cpu.R[0] = _r_03002538;
    g_cpu.R[15] = 0x0300253Cu;
    runtime_tick(_cyc_03002538);
    }
L_0300253C:
    /* 0300253C  0300253c A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x0300253Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300253C = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_0300253C = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_0300253C);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x03002540u;
    runtime_tick(_cyc_0300253C);
    }
L_03002540:
    /* 03002540  03002540 A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x03002540u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002540 = 1u;
    _cyc_03002540 = 1u;
    uint32_t _rn_03002540 = g_cpu.R[2];
    uint32_t _r_03002540;
    _r_03002540 = _rn_03002540 + 0x00000004u;
    g_cpu.R[2] = _r_03002540;
    g_cpu.R[15] = 0x03002544u;
    runtime_tick(_cyc_03002540);
    }
L_03002544:
    /* 03002544  03002544 A ands r0,r1,#0x1000 */
    {
    g_cpu.R[15] = 0x03002544u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002544 = 1u;
    _cyc_03002544 = 1u;
    uint32_t _rn_03002544 = g_cpu.R[1];
    uint32_t _r_03002544;
    _r_03002544 = _rn_03002544 & 0x00001000u;
    arm_set_nzc_logic(_r_03002544, 0u);
    g_cpu.R[0] = _r_03002544;
    g_cpu.R[15] = 0x03002548u;
    runtime_tick(_cyc_03002544);
    }
L_03002548:
    /* 03002548  03002548 A bne 0x03002558 */
    {
    g_cpu.R[15] = 0x03002548u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002548 = 1u;
    if (arm_cond_passes(0x1u)) {
        _cyc_03002548 = 3u;
        g_cpu.R[15] = 0x03002558u;
        runtime_tick(_cyc_03002548);
        gf_afunc_03002558();
        return;
    }
    g_cpu.R[15] = 0x0300254Cu;
    runtime_tick(_cyc_03002548);
    }
L_0300254C:
    /* 0300254C  0300254c A add r2,r2,#0x4 */
    {
    g_cpu.R[15] = 0x0300254Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300254C = 1u;
    _cyc_0300254C = 1u;
    uint32_t _rn_0300254C = g_cpu.R[2];
    uint32_t _r_0300254C;
    _r_0300254C = _rn_0300254C + 0x00000004u;
    g_cpu.R[2] = _r_0300254C;
    g_cpu.R[15] = 0x03002550u;
    runtime_tick(_cyc_0300254C);
    }
L_03002550:
    /* 03002550  03002550 A ands r0,r1,#0x2000 */
    {
    g_cpu.R[15] = 0x03002550u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002550 = 1u;
    _cyc_03002550 = 1u;
    uint32_t _rn_03002550 = g_cpu.R[1];
    uint32_t _r_03002550;
    _r_03002550 = _rn_03002550 & 0x00002000u;
    arm_set_nzc_logic(_r_03002550, 0u);
    g_cpu.R[0] = _r_03002550;
    g_cpu.R[15] = 0x03002554u;
    runtime_tick(_cyc_03002550);
    }
    /* fall-through to 0x03002554 */
    g_cpu.R[15] = 0x03002554u;
    runtime_dispatch(0x03002554u);
    return;
}

/* 0x0300258C  mode=arm  end=0x030025B0  branches=0  indirect */
void gf_iwram_0300258c(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03002590u: goto L_03002590;
        case 0x03002594u: goto L_03002594;
        case 0x03002598u: goto L_03002598;
        case 0x0300259Cu: goto L_0300259C;
        case 0x030025A0u: goto L_030025A0;
        case 0x030025A4u: goto L_030025A4;
        case 0x030025A8u: goto L_030025A8;
        case 0x030025ACu: goto L_030025AC;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x0300258Cu);
    /* 0300258C  0300258c A ldm r13!,{r14} */
    {
    g_cpu.R[15] = 0x0300258Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300258C = 1u;
    _cyc_0300258C = 2u;
    uint32_t _b_0300258C = g_cpu.R[13];
    uint32_t _a_0300258C = _b_0300258C;
    uint32_t _fb_0300258C = _b_0300258C + 4u;
    _cyc_0300258C += runtime_mem_cycles(_a_0300258C & ~3u, 4u, 0u);
    g_cpu.R[14] = bus_read_u32(_a_0300258C & ~3u);
    _a_0300258C += 4u;
    g_cpu.R[13] = _fb_0300258C;
    g_cpu.R[15] = 0x03002590u;
    runtime_tick(_cyc_0300258C);
    }
L_03002590:
    /* 03002590  03002590 A mrs r3,cpsr */
    {
    g_cpu.R[15] = 0x03002590u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002590 = 1u;
    _cyc_03002590 = 1u;
    g_cpu.R[3] = runtime_mrs_cpsr();
    g_cpu.R[15] = 0x03002594u;
    runtime_tick(_cyc_03002590);
    }
L_03002594:
    /* 03002594  03002594 A bic r3,r3,#0xdf */
    {
    g_cpu.R[15] = 0x03002594u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002594 = 1u;
    _cyc_03002594 = 1u;
    uint32_t _rn_03002594 = g_cpu.R[3];
    uint32_t _r_03002594;
    _r_03002594 = _rn_03002594 & ~(0x000000DFu);
    g_cpu.R[3] = _r_03002594;
    g_cpu.R[15] = 0x03002598u;
    runtime_tick(_cyc_03002594);
    }
L_03002598:
    /* 03002598  03002598 A orr r3,r3,#0x92 */
    {
    g_cpu.R[15] = 0x03002598u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03002598 = 1u;
    _cyc_03002598 = 1u;
    uint32_t _rn_03002598 = g_cpu.R[3];
    uint32_t _r_03002598;
    _r_03002598 = _rn_03002598 | 0x00000092u;
    g_cpu.R[3] = _r_03002598;
    g_cpu.R[15] = 0x0300259Cu;
    runtime_tick(_cyc_03002598);
    }
L_0300259C:
    /* 0300259C  0300259c A msr cpsr_cf,r3 */
    {
    g_cpu.R[15] = 0x0300259Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_0300259C = 1u;
    _cyc_0300259C = 1u;
    uint32_t _msrv_0300259C;
    _msrv_0300259C = g_cpu.R[3];
    runtime_msr_cpsr(_msrv_0300259C, 9u);
    g_cpu.R[15] = 0x030025A0u;
    runtime_tick(_cyc_0300259C);
    }
L_030025A0:
    /* 030025A0  030025a0 A ldm r13!,{r0,r1,r3,r14} */
    {
    g_cpu.R[15] = 0x030025A0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030025A0 = 1u;
    _cyc_030025A0 = 2u;
    uint32_t _b_030025A0 = g_cpu.R[13];
    uint32_t _a_030025A0 = _b_030025A0;
    uint32_t _fb_030025A0 = _b_030025A0 + 16u;
    _cyc_030025A0 += runtime_mem_cycles(_a_030025A0 & ~3u, 4u, 0u);
    g_cpu.R[0] = bus_read_u32(_a_030025A0 & ~3u);
    _a_030025A0 += 4u;
    _cyc_030025A0 += runtime_mem_cycles(_a_030025A0 & ~3u, 4u, 1u);
    g_cpu.R[1] = bus_read_u32(_a_030025A0 & ~3u);
    _a_030025A0 += 4u;
    _cyc_030025A0 += runtime_mem_cycles(_a_030025A0 & ~3u, 4u, 1u);
    g_cpu.R[3] = bus_read_u32(_a_030025A0 & ~3u);
    _a_030025A0 += 4u;
    _cyc_030025A0 += runtime_mem_cycles(_a_030025A0 & ~3u, 4u, 1u);
    g_cpu.R[14] = bus_read_u32(_a_030025A0 & ~3u);
    _a_030025A0 += 4u;
    g_cpu.R[13] = _fb_030025A0;
    g_cpu.R[15] = 0x030025A4u;
    runtime_tick(_cyc_030025A0);
    }
L_030025A4:
    /* 030025A4  030025a4 A strh r1,[r3] */
    {
    g_cpu.R[15] = 0x030025A4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030025A4 = 1u;
    _cyc_030025A4 = 1u;
    uint32_t _base_030025A4 = g_cpu.R[3];
    uint32_t _off_030025A4;
    _off_030025A4 = 0x00000000u;
    uint32_t _ea_030025A4 = _base_030025A4 + _off_030025A4;
    uint32_t _post_030025A4 = _base_030025A4 + _off_030025A4;
    _cyc_030025A4 += runtime_mem_cycles(_ea_030025A4, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030025A4u, _ea_030025A4 & ~1u, (uint32_t)(g_cpu.R[1] & 0xFFFFu), 2u);
    bus_write_u16(_ea_030025A4 & ~1u, (uint16_t)(g_cpu.R[1] & 0xFFFFu));
    g_cpu.R[15] = 0x030025A8u;
    runtime_tick(_cyc_030025A4);
    }
L_030025A8:
    /* 030025A8  030025a8 A msr spsr_cf,r0 */
    {
    g_cpu.R[15] = 0x030025A8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030025A8 = 1u;
    _cyc_030025A8 = 1u;
    uint32_t _msrv_030025A8;
    _msrv_030025A8 = g_cpu.R[0];
    runtime_msr_spsr(_msrv_030025A8, 9u);
    g_cpu.R[15] = 0x030025ACu;
    runtime_tick(_cyc_030025A8);
    }
L_030025AC:
    /* 030025AC  030025ac A bx r14 */
    {
    g_cpu.R[15] = 0x030025ACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030025AC = 1u;
    _cyc_030025AC = 3u;
    uint32_t _bxt_030025AC = g_cpu.R[14];
    g_cpu.R[15] = _bxt_030025AC & ~1u;
    if (_bxt_030025AC & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_030025AC);
    if (runtime_call_should_return(g_cpu.R[15])) return;
    runtime_dispatch_with_exchange(_bxt_030025AC);
    return;
    g_cpu.R[15] = 0x030025B0u;
    runtime_tick(_cyc_030025AC);
    }
    /* fall-through to 0x030025B0 */
    g_cpu.R[15] = 0x030025B0u;
    runtime_dispatch(0x030025B0u);
    return;
}

/* 0x03000CBE  mode=thumb  end=0x03000CCA  branches=5 */
void gf_tfunc_03000CBE(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000CC0u: goto L_03000CC0;
        case 0x03000CC2u: goto L_03000CC2;
        case 0x03000CC4u: goto L_03000CC4;
        case 0x03000CC6u: goto L_03000CC6;
        case 0x03000CC8u: goto L_03000CC8;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000CBEu);
L_03000CBE:
    /* 03000CBE  03000cbe T stm r5!,{r0} */
    {
    g_cpu.R[15] = 0x03000CBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CBE = 1u;
    _cyc_03000CBE = 1u;
    uint32_t _b_03000CBE = g_cpu.R[5];
    uint32_t _a_03000CBE = _b_03000CBE;
    uint32_t _fb_03000CBE = _b_03000CBE + 4u;
    _cyc_03000CBE += runtime_mem_cycles(_a_03000CBE & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000CBEu, _a_03000CBE & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_03000CBE & ~3u, g_cpu.R[0]);
    _a_03000CBE += 4u;
    g_cpu.R[5] = _fb_03000CBE;
    g_cpu.R[15] = 0x03000CC0u;
    runtime_tick(_cyc_03000CBE);
    }
L_03000CC0:
    /* 03000CC0  03000cc0 T stm r5!,{r0} */
    {
    g_cpu.R[15] = 0x03000CC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CC0 = 1u;
    _cyc_03000CC0 = 1u;
    uint32_t _b_03000CC0 = g_cpu.R[5];
    uint32_t _a_03000CC0 = _b_03000CC0;
    uint32_t _fb_03000CC0 = _b_03000CC0 + 4u;
    _cyc_03000CC0 += runtime_mem_cycles(_a_03000CC0 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000CC0u, _a_03000CC0 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_03000CC0 & ~3u, g_cpu.R[0]);
    _a_03000CC0 += 4u;
    g_cpu.R[5] = _fb_03000CC0;
    g_cpu.R[15] = 0x03000CC2u;
    runtime_tick(_cyc_03000CC0);
    }
L_03000CC2:
    /* 03000CC2  03000cc2 T stm r5!,{r0} */
    {
    g_cpu.R[15] = 0x03000CC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CC2 = 1u;
    _cyc_03000CC2 = 1u;
    uint32_t _b_03000CC2 = g_cpu.R[5];
    uint32_t _a_03000CC2 = _b_03000CC2;
    uint32_t _fb_03000CC2 = _b_03000CC2 + 4u;
    _cyc_03000CC2 += runtime_mem_cycles(_a_03000CC2 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000CC2u, _a_03000CC2 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_03000CC2 & ~3u, g_cpu.R[0]);
    _a_03000CC2 += 4u;
    g_cpu.R[5] = _fb_03000CC2;
    g_cpu.R[15] = 0x03000CC4u;
    runtime_tick(_cyc_03000CC2);
    }
L_03000CC4:
    /* 03000CC4  03000cc4 T stm r5!,{r0} */
    {
    g_cpu.R[15] = 0x03000CC4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CC4 = 1u;
    _cyc_03000CC4 = 1u;
    uint32_t _b_03000CC4 = g_cpu.R[5];
    uint32_t _a_03000CC4 = _b_03000CC4;
    uint32_t _fb_03000CC4 = _b_03000CC4 + 4u;
    _cyc_03000CC4 += runtime_mem_cycles(_a_03000CC4 & ~3u, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000CC4u, _a_03000CC4 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_a_03000CC4 & ~3u, g_cpu.R[0]);
    _a_03000CC4 += 4u;
    g_cpu.R[5] = _fb_03000CC4;
    g_cpu.R[15] = 0x03000CC6u;
    runtime_tick(_cyc_03000CC4);
    }
L_03000CC6:
    /* 03000CC6  03000cc6 T subs r1,r1,#0x1 */
    {
    g_cpu.R[15] = 0x03000CC6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CC6 = 1u;
    _cyc_03000CC6 = 1u;
    uint32_t _rn_03000CC6 = g_cpu.R[1];
    uint32_t _r_03000CC6;
    _r_03000CC6 = _rn_03000CC6 - 0x00000001u;
    arm_set_nzcv_sub(_rn_03000CC6, 0x00000001u, _r_03000CC6);
    g_cpu.R[1] = _r_03000CC6;
    g_cpu.R[15] = 0x03000CC8u;
    runtime_tick(_cyc_03000CC6);
    }
L_03000CC8:
    /* 03000CC8  03000cc8 T bgt 0x03000cbe */
    {
    g_cpu.R[15] = 0x03000CC8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000CC8 = 1u;
    if (arm_cond_passes(0xcu)) {
        _cyc_03000CC8 = 3u;
        g_cpu.R[15] = 0x03000CBEu;
        if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_BRANCH, 0x03000CC8u, 0x03000CBEu, 0u, 0u);
        runtime_tick(_cyc_03000CC8);
        goto L_03000CBE;
    }
    g_cpu.R[15] = 0x03000CCAu;
    runtime_tick(_cyc_03000CC8);
    }
    /* fall-through to 0x03000CCA */
    g_cpu.R[15] = 0x03000CCAu;
    runtime_dispatch(0x03000CCAu);
    return;
}

/* 0x03000D3E  mode=thumb  end=0x03000D44  branches=1 */
void gf_tfunc_03000D3E(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000D40u: goto L_03000D40;
        case 0x03000D42u: goto L_03000D42;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000D3Eu);
    /* 03000D3E  03000d3e T movs r0,#0x0 */
    {
    g_cpu.R[15] = 0x03000D3Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D3E = 1u;
    _cyc_03000D3E = 1u;
    uint32_t _r_03000D3E;
    _r_03000D3E = 0x00000000u;
    arm_set_nzc_logic(_r_03000D3E, cpsr_c());
    g_cpu.R[0] = _r_03000D3E;
    g_cpu.R[15] = 0x03000D40u;
    runtime_tick(_cyc_03000D3E);
    }
L_03000D40:
    /* 03000D40  03000d40 T strb r0,[r4] */
    {
    g_cpu.R[15] = 0x03000D40u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D40 = 1u;
    _cyc_03000D40 = 1u;
    uint32_t _base_03000D40 = g_cpu.R[4];
    uint32_t _off_03000D40;
    _off_03000D40 = 0x00000000u;
    uint32_t _ea_03000D40 = _base_03000D40 + _off_03000D40;
    uint32_t _post_03000D40 = _base_03000D40 + _off_03000D40;
    _cyc_03000D40 += runtime_mem_cycles(_ea_03000D40, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D40u, _ea_03000D40, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_03000D40, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x03000D42u;
    runtime_tick(_cyc_03000D40);
    }
L_03000D42:
    /* 03000D42  03000d42 T b 0x03000f6c */
    {
    g_cpu.R[15] = 0x03000D42u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D42 = 1u;
    _cyc_03000D42 = 3u;
    g_cpu.R[15] = 0x03000F6Cu;
    runtime_tick(_cyc_03000D42);
    gf_tfunc_03000F6C();
    return;
    g_cpu.R[15] = 0x03000D44u;
    runtime_tick(_cyc_03000D42);
    }
    /* fall-through to 0x03000D44 */
    g_cpu.R[15] = 0x03000D44u;
    runtime_dispatch(0x03000D44u);
    return;
}

/* 0x03000D94  mode=thumb  end=0x03000DC4  branches=1  indirect */
void gf_tfunc_03000D94(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x03000D96u: goto L_03000D96;
        case 0x03000D98u: goto L_03000D98;
        case 0x03000D9Au: goto L_03000D9A;
        case 0x03000D9Cu: goto L_03000D9C;
        case 0x03000D9Eu: goto L_03000D9E;
        case 0x03000DA0u: goto L_03000DA0;
        case 0x03000DA2u: goto L_03000DA2;
        case 0x03000DA4u: goto L_03000DA4;
        case 0x03000DA6u: goto L_03000DA6;
        case 0x03000DA8u: goto L_03000DA8;
        case 0x03000DAAu: goto L_03000DAA;
        case 0x03000DACu: goto L_03000DAC;
        case 0x03000DAEu: goto L_03000DAE;
        case 0x03000DB0u: goto L_03000DB0;
        case 0x03000DB2u: goto L_03000DB2;
        case 0x03000DB4u: goto L_03000DB4;
        case 0x03000DB6u: goto L_03000DB6;
        case 0x03000DB8u: goto L_03000DB8;
        case 0x03000DBAu: goto L_03000DBA;
        case 0x03000DBCu: goto L_03000DBC;
        case 0x03000DBEu: goto L_03000DBE;
        case 0x03000DC0u: goto L_03000DC0;
        case 0x03000DC2u: goto L_03000DC2;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x03000D94u);
    /* 03000D94  03000d94 T strb r5,[r4,#0x9] */
    {
    g_cpu.R[15] = 0x03000D94u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D94 = 1u;
    _cyc_03000D94 = 1u;
    uint32_t _base_03000D94 = g_cpu.R[4];
    uint32_t _off_03000D94;
    _off_03000D94 = 0x00000009u;
    uint32_t _ea_03000D94 = _base_03000D94 + _off_03000D94;
    uint32_t _post_03000D94 = _base_03000D94 + _off_03000D94;
    _cyc_03000D94 += runtime_mem_cycles(_ea_03000D94, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000D94u, _ea_03000D94, (uint32_t)(g_cpu.R[5] & 0xFFu), 1u);
    bus_write_u8(_ea_03000D94, (uint8_t)(g_cpu.R[5] & 0xFFu));
    g_cpu.R[15] = 0x03000D96u;
    runtime_tick(_cyc_03000D94);
    }
L_03000D96:
    /* 03000D96  03000d96 T ldr r0,[r13,#0x18] */
    {
    g_cpu.R[15] = 0x03000D96u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D96 = 1u;
    _cyc_03000D96 = 2u;
    uint32_t _base_03000D96 = g_cpu.R[13];
    uint32_t _off_03000D96;
    _off_03000D96 = 0x00000018u;
    uint32_t _ea_03000D96 = _base_03000D96 + _off_03000D96;
    uint32_t _post_03000D96 = _base_03000D96 + _off_03000D96;
    _cyc_03000D96 += runtime_mem_cycles(_ea_03000D96, 4u, 0u);
    uint32_t _v_03000D96;
    { uint32_t _w = bus_read_u32(_ea_03000D96 & ~3u); uint32_t _rot = (_ea_03000D96 & 3u) * 8u; _v_03000D96 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000D96;
    g_cpu.R[15] = 0x03000D98u;
    runtime_tick(_cyc_03000D96);
    }
L_03000D98:
    /* 03000D98  03000d98 T ldrb r0,[r0,#0x7] */
    {
    g_cpu.R[15] = 0x03000D98u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D98 = 1u;
    _cyc_03000D98 = 2u;
    uint32_t _base_03000D98 = g_cpu.R[0];
    uint32_t _off_03000D98;
    _off_03000D98 = 0x00000007u;
    uint32_t _ea_03000D98 = _base_03000D98 + _off_03000D98;
    uint32_t _post_03000D98 = _base_03000D98 + _off_03000D98;
    _cyc_03000D98 += runtime_mem_cycles(_ea_03000D98, 1u, 0u);
    uint32_t _v_03000D98;
    _v_03000D98 = bus_read_u8(_ea_03000D98);
    g_cpu.R[0] = _v_03000D98;
    g_cpu.R[15] = 0x03000D9Au;
    runtime_tick(_cyc_03000D98);
    }
L_03000D9A:
    /* 03000D9A  03000d9a T adds r0,r0,#0x1 */
    {
    g_cpu.R[15] = 0x03000D9Au;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D9A = 1u;
    _cyc_03000D9A = 1u;
    uint32_t _rn_03000D9A = g_cpu.R[0];
    uint32_t _r_03000D9A;
    _r_03000D9A = _rn_03000D9A + 0x00000001u;
    arm_set_nzcv_add(_rn_03000D9A, 0x00000001u, _r_03000D9A);
    g_cpu.R[0] = _r_03000D9A;
    g_cpu.R[15] = 0x03000D9Cu;
    runtime_tick(_cyc_03000D9A);
    }
L_03000D9C:
    /* 03000D9C  03000d9c T muls r0,r0,r5 */
    {
    g_cpu.R[15] = 0x03000D9Cu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D9C = 1u;
    _cyc_03000D9C = 1u;
    _cyc_03000D9C += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_03000D9C = g_cpu.R[0] * g_cpu.R[5];
    g_cpu.R[0] = _r_03000D9C;
    arm_set_nz(_r_03000D9C);
    g_cpu.R[15] = 0x03000D9Eu;
    runtime_tick(_cyc_03000D9C);
    }
L_03000D9E:
    /* 03000D9E  03000d9e T movs r5,r0,lsr #4 */
    {
    g_cpu.R[15] = 0x03000D9Eu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000D9E = 1u;
    _cyc_03000D9E = 1u;
    uint32_t _rm_03000D9E = g_cpu.R[0];
    uint32_t _op2_03000D9E;
    uint32_t _co_03000D9E;
    _op2_03000D9E = _rm_03000D9E >> 4;
    _co_03000D9E = (_rm_03000D9E >> 3) & 1u;
    uint32_t _r_03000D9E;
    _r_03000D9E = _op2_03000D9E;
    arm_set_nzc_logic(_r_03000D9E, _co_03000D9E);
    g_cpu.R[5] = _r_03000D9E;
    g_cpu.R[15] = 0x03000DA0u;
    runtime_tick(_cyc_03000D9E);
    }
L_03000DA0:
    /* 03000DA0  03000da0 T ldrb r0,[r4,#0x2] */
    {
    g_cpu.R[15] = 0x03000DA0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DA0 = 1u;
    _cyc_03000DA0 = 2u;
    uint32_t _base_03000DA0 = g_cpu.R[4];
    uint32_t _off_03000DA0;
    _off_03000DA0 = 0x00000002u;
    uint32_t _ea_03000DA0 = _base_03000DA0 + _off_03000DA0;
    uint32_t _post_03000DA0 = _base_03000DA0 + _off_03000DA0;
    _cyc_03000DA0 += runtime_mem_cycles(_ea_03000DA0, 1u, 0u);
    uint32_t _v_03000DA0;
    _v_03000DA0 = bus_read_u8(_ea_03000DA0);
    g_cpu.R[0] = _v_03000DA0;
    g_cpu.R[15] = 0x03000DA2u;
    runtime_tick(_cyc_03000DA0);
    }
L_03000DA2:
    /* 03000DA2  03000da2 T ldrb r1,[r4,#0x3] */
    {
    g_cpu.R[15] = 0x03000DA2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DA2 = 1u;
    _cyc_03000DA2 = 2u;
    uint32_t _base_03000DA2 = g_cpu.R[4];
    uint32_t _off_03000DA2;
    _off_03000DA2 = 0x00000003u;
    uint32_t _ea_03000DA2 = _base_03000DA2 + _off_03000DA2;
    uint32_t _post_03000DA2 = _base_03000DA2 + _off_03000DA2;
    _cyc_03000DA2 += runtime_mem_cycles(_ea_03000DA2, 1u, 0u);
    uint32_t _v_03000DA2;
    _v_03000DA2 = bus_read_u8(_ea_03000DA2);
    g_cpu.R[1] = _v_03000DA2;
    g_cpu.R[15] = 0x03000DA4u;
    runtime_tick(_cyc_03000DA2);
    }
L_03000DA4:
    /* 03000DA4  03000da4 T adds r0,r0,r1 */
    {
    g_cpu.R[15] = 0x03000DA4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DA4 = 1u;
    _cyc_03000DA4 = 1u;
    uint32_t _rm_03000DA4 = g_cpu.R[1];
    uint32_t _op2_03000DA4;
    uint32_t _co_03000DA4;
    _op2_03000DA4 = _rm_03000DA4;
    _co_03000DA4 = cpsr_c();
    uint32_t _rn_03000DA4 = g_cpu.R[0];
    uint32_t _r_03000DA4;
    _r_03000DA4 = _rn_03000DA4 + _op2_03000DA4;
    arm_set_nzcv_add(_rn_03000DA4, _op2_03000DA4, _r_03000DA4);
    g_cpu.R[0] = _r_03000DA4;
    g_cpu.R[15] = 0x03000DA6u;
    runtime_tick(_cyc_03000DA4);
    }
L_03000DA6:
    /* 03000DA6  03000da6 T muls r0,r0,r5 */
    {
    g_cpu.R[15] = 0x03000DA6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DA6 = 1u;
    _cyc_03000DA6 = 1u;
    _cyc_03000DA6 += runtime_mul_cycles(g_cpu.R[0], 1u, 0u);
    uint32_t _r_03000DA6 = g_cpu.R[0] * g_cpu.R[5];
    g_cpu.R[0] = _r_03000DA6;
    arm_set_nz(_r_03000DA6);
    g_cpu.R[15] = 0x03000DA8u;
    runtime_tick(_cyc_03000DA6);
    }
L_03000DA8:
    /* 03000DA8  03000da8 T movs r0,r0,lsr #9 */
    {
    g_cpu.R[15] = 0x03000DA8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DA8 = 1u;
    _cyc_03000DA8 = 1u;
    uint32_t _rm_03000DA8 = g_cpu.R[0];
    uint32_t _op2_03000DA8;
    uint32_t _co_03000DA8;
    _op2_03000DA8 = _rm_03000DA8 >> 9;
    _co_03000DA8 = (_rm_03000DA8 >> 8) & 1u;
    uint32_t _r_03000DA8;
    _r_03000DA8 = _op2_03000DA8;
    arm_set_nzc_logic(_r_03000DA8, _co_03000DA8);
    g_cpu.R[0] = _r_03000DA8;
    g_cpu.R[15] = 0x03000DAAu;
    runtime_tick(_cyc_03000DA8);
    }
L_03000DAA:
    /* 03000DAA  03000daa T strb r0,[r4,#0xa] */
    {
    g_cpu.R[15] = 0x03000DAAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DAA = 1u;
    _cyc_03000DAA = 1u;
    uint32_t _base_03000DAA = g_cpu.R[4];
    uint32_t _off_03000DAA;
    _off_03000DAA = 0x0000000Au;
    uint32_t _ea_03000DAA = _base_03000DAA + _off_03000DAA;
    uint32_t _post_03000DAA = _base_03000DAA + _off_03000DAA;
    _cyc_03000DAA += runtime_mem_cycles(_ea_03000DAA, 1u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000DAAu, _ea_03000DAA, (uint32_t)(g_cpu.R[0] & 0xFFu), 1u);
    bus_write_u8(_ea_03000DAA, (uint8_t)(g_cpu.R[0] & 0xFFu));
    g_cpu.R[15] = 0x03000DACu;
    runtime_tick(_cyc_03000DAA);
    }
L_03000DAC:
    /* 03000DAC  03000dac T movs r0,#0x10 */
    {
    g_cpu.R[15] = 0x03000DACu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DAC = 1u;
    _cyc_03000DAC = 1u;
    uint32_t _r_03000DAC;
    _r_03000DAC = 0x00000010u;
    arm_set_nzc_logic(_r_03000DAC, cpsr_c());
    g_cpu.R[0] = _r_03000DAC;
    g_cpu.R[15] = 0x03000DAEu;
    runtime_tick(_cyc_03000DAC);
    }
L_03000DAE:
    /* 03000DAE  03000dae T ands r0,r0,r6 */
    {
    g_cpu.R[15] = 0x03000DAEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DAE = 1u;
    _cyc_03000DAE = 1u;
    uint32_t _rm_03000DAE = g_cpu.R[6];
    uint32_t _op2_03000DAE;
    uint32_t _co_03000DAE;
    _op2_03000DAE = _rm_03000DAE;
    _co_03000DAE = cpsr_c();
    uint32_t _rn_03000DAE = g_cpu.R[0];
    uint32_t _r_03000DAE;
    _r_03000DAE = _rn_03000DAE & _op2_03000DAE;
    arm_set_nzc_logic(_r_03000DAE, _co_03000DAE);
    g_cpu.R[0] = _r_03000DAE;
    g_cpu.R[15] = 0x03000DB0u;
    runtime_tick(_cyc_03000DAE);
    }
L_03000DB0:
    /* 03000DB0  03000db0 T str r0,[r13,#0x10] */
    {
    g_cpu.R[15] = 0x03000DB0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DB0 = 1u;
    _cyc_03000DB0 = 1u;
    uint32_t _base_03000DB0 = g_cpu.R[13];
    uint32_t _off_03000DB0;
    _off_03000DB0 = 0x00000010u;
    uint32_t _ea_03000DB0 = _base_03000DB0 + _off_03000DB0;
    uint32_t _post_03000DB0 = _base_03000DB0 + _off_03000DB0;
    _cyc_03000DB0 += runtime_mem_cycles(_ea_03000DB0, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000DB0u, _ea_03000DB0 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000DB0 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000DB2u;
    runtime_tick(_cyc_03000DB0);
    }
L_03000DB2:
    /* 03000DB2  03000db2 T beq 0x03000dc4 */
    {
    g_cpu.R[15] = 0x03000DB2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DB2 = 1u;
    if (arm_cond_passes(0x0u)) {
        _cyc_03000DB2 = 3u;
        g_cpu.R[15] = 0x03000DC4u;
        runtime_tick(_cyc_03000DB2);
        gf_tfunc_03000DC4();
        return;
    }
    g_cpu.R[15] = 0x03000DB4u;
    runtime_tick(_cyc_03000DB2);
    }
L_03000DB4:
    /* 03000DB4  03000db4 T adds r0,r3,#0x0 */
    {
    g_cpu.R[15] = 0x03000DB4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DB4 = 1u;
    _cyc_03000DB4 = 1u;
    uint32_t _rn_03000DB4 = g_cpu.R[3];
    uint32_t _r_03000DB4;
    _r_03000DB4 = _rn_03000DB4 + 0x00000000u;
    arm_set_nzcv_add(_rn_03000DB4, 0x00000000u, _r_03000DB4);
    g_cpu.R[0] = _r_03000DB4;
    g_cpu.R[15] = 0x03000DB6u;
    runtime_tick(_cyc_03000DB4);
    }
L_03000DB6:
    /* 03000DB6  03000db6 T adds r0,r0,#0x10 */
    {
    g_cpu.R[15] = 0x03000DB6u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DB6 = 1u;
    _cyc_03000DB6 = 1u;
    uint32_t _rn_03000DB6 = g_cpu.R[0];
    uint32_t _r_03000DB6;
    _r_03000DB6 = _rn_03000DB6 + 0x00000010u;
    arm_set_nzcv_add(_rn_03000DB6, 0x00000010u, _r_03000DB6);
    g_cpu.R[0] = _r_03000DB6;
    g_cpu.R[15] = 0x03000DB8u;
    runtime_tick(_cyc_03000DB6);
    }
L_03000DB8:
    /* 03000DB8  03000db8 T ldr r1,[r3,#0x8] */
    {
    g_cpu.R[15] = 0x03000DB8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DB8 = 1u;
    _cyc_03000DB8 = 2u;
    uint32_t _base_03000DB8 = g_cpu.R[3];
    uint32_t _off_03000DB8;
    _off_03000DB8 = 0x00000008u;
    uint32_t _ea_03000DB8 = _base_03000DB8 + _off_03000DB8;
    uint32_t _post_03000DB8 = _base_03000DB8 + _off_03000DB8;
    _cyc_03000DB8 += runtime_mem_cycles(_ea_03000DB8, 4u, 0u);
    uint32_t _v_03000DB8;
    { uint32_t _w = bus_read_u32(_ea_03000DB8 & ~3u); uint32_t _rot = (_ea_03000DB8 & 3u) * 8u; _v_03000DB8 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_03000DB8;
    g_cpu.R[15] = 0x03000DBAu;
    runtime_tick(_cyc_03000DB8);
    }
L_03000DBA:
    /* 03000DBA  03000dba T adds r0,r0,r1 */
    {
    g_cpu.R[15] = 0x03000DBAu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DBA = 1u;
    _cyc_03000DBA = 1u;
    uint32_t _rm_03000DBA = g_cpu.R[1];
    uint32_t _op2_03000DBA;
    uint32_t _co_03000DBA;
    _op2_03000DBA = _rm_03000DBA;
    _co_03000DBA = cpsr_c();
    uint32_t _rn_03000DBA = g_cpu.R[0];
    uint32_t _r_03000DBA;
    _r_03000DBA = _rn_03000DBA + _op2_03000DBA;
    arm_set_nzcv_add(_rn_03000DBA, _op2_03000DBA, _r_03000DBA);
    g_cpu.R[0] = _r_03000DBA;
    g_cpu.R[15] = 0x03000DBCu;
    runtime_tick(_cyc_03000DBA);
    }
L_03000DBC:
    /* 03000DBC  03000dbc T str r0,[r13,#0xc] */
    {
    g_cpu.R[15] = 0x03000DBCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DBC = 1u;
    _cyc_03000DBC = 1u;
    uint32_t _base_03000DBC = g_cpu.R[13];
    uint32_t _off_03000DBC;
    _off_03000DBC = 0x0000000Cu;
    uint32_t _ea_03000DBC = _base_03000DBC + _off_03000DBC;
    uint32_t _post_03000DBC = _base_03000DBC + _off_03000DBC;
    _cyc_03000DBC += runtime_mem_cycles(_ea_03000DBC, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000DBCu, _ea_03000DBC & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000DBC & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000DBEu;
    runtime_tick(_cyc_03000DBC);
    }
L_03000DBE:
    /* 03000DBE  03000dbe T ldr r0,[r3,#0xc] */
    {
    g_cpu.R[15] = 0x03000DBEu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DBE = 1u;
    _cyc_03000DBE = 2u;
    uint32_t _base_03000DBE = g_cpu.R[3];
    uint32_t _off_03000DBE;
    _off_03000DBE = 0x0000000Cu;
    uint32_t _ea_03000DBE = _base_03000DBE + _off_03000DBE;
    uint32_t _post_03000DBE = _base_03000DBE + _off_03000DBE;
    _cyc_03000DBE += runtime_mem_cycles(_ea_03000DBE, 4u, 0u);
    uint32_t _v_03000DBE;
    { uint32_t _w = bus_read_u32(_ea_03000DBE & ~3u); uint32_t _rot = (_ea_03000DBE & 3u) * 8u; _v_03000DBE = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_03000DBE;
    g_cpu.R[15] = 0x03000DC0u;
    runtime_tick(_cyc_03000DBE);
    }
L_03000DC0:
    /* 03000DC0  03000dc0 T subs r0,r0,r1 */
    {
    g_cpu.R[15] = 0x03000DC0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DC0 = 1u;
    _cyc_03000DC0 = 1u;
    uint32_t _rm_03000DC0 = g_cpu.R[1];
    uint32_t _op2_03000DC0;
    uint32_t _co_03000DC0;
    _op2_03000DC0 = _rm_03000DC0;
    _co_03000DC0 = cpsr_c();
    uint32_t _rn_03000DC0 = g_cpu.R[0];
    uint32_t _r_03000DC0;
    _r_03000DC0 = _rn_03000DC0 - _op2_03000DC0;
    arm_set_nzcv_sub(_rn_03000DC0, _op2_03000DC0, _r_03000DC0);
    g_cpu.R[0] = _r_03000DC0;
    g_cpu.R[15] = 0x03000DC2u;
    runtime_tick(_cyc_03000DC0);
    }
L_03000DC2:
    /* 03000DC2  03000dc2 T str r0,[r13,#0x10] */
    {
    g_cpu.R[15] = 0x03000DC2u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_03000DC2 = 1u;
    _cyc_03000DC2 = 1u;
    uint32_t _base_03000DC2 = g_cpu.R[13];
    uint32_t _off_03000DC2;
    _off_03000DC2 = 0x00000010u;
    uint32_t _ea_03000DC2 = _base_03000DC2 + _off_03000DC2;
    uint32_t _post_03000DC2 = _base_03000DC2 + _off_03000DC2;
    _cyc_03000DC2 += runtime_mem_cycles(_ea_03000DC2, 4u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x03000DC2u, _ea_03000DC2 & ~3u, g_cpu.R[0], 4u);
    bus_write_u32(_ea_03000DC2 & ~3u, g_cpu.R[0]);
    g_cpu.R[15] = 0x03000DC4u;
    runtime_tick(_cyc_03000DC2);
    }
    /* fall-through to 0x03000DC4 */
    g_cpu.R[15] = 0x03000DC4u;
    runtime_dispatch(0x03000DC4u);
    return;
}

/* 0x030025B0  mode=arm  end=0x030025C8  branches=0  indirect */
void gf_afunc_030025B0(void) {
    if (g_runtime_resume_pc) {
        uint32_t _resume = g_runtime_resume_pc; g_runtime_resume_pc = 0u;
        switch (_resume) {
        case 0x030025B4u: goto L_030025B4;
        case 0x030025B8u: goto L_030025B8;
        case 0x030025BCu: goto L_030025BC;
        case 0x030025C0u: goto L_030025C0;
        case 0x030025C4u: goto L_030025C4;
        default: break;
        }
    }
    if (g_runtime_fn_entry_hook) g_runtime_fn_entry_hook(0x030025B0u);
    /* 030025B0  030025b0 A strh r0,[r3,#0x2] */
    {
    g_cpu.R[15] = 0x030025B0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030025B0 = 1u;
    _cyc_030025B0 = 1u;
    uint32_t _base_030025B0 = g_cpu.R[3];
    uint32_t _off_030025B0;
    _off_030025B0 = 0x00000002u;
    uint32_t _ea_030025B0 = _base_030025B0 + _off_030025B0;
    uint32_t _post_030025B0 = _base_030025B0 + _off_030025B0;
    _cyc_030025B0 += runtime_mem_cycles(_ea_030025B0, 2u, 0u);
    if (runtime_trace_enabled()) runtime_trace_event(RUNTIME_TRACE_MEM_WRITE, 0x030025B0u, _ea_030025B0 & ~1u, (uint32_t)(g_cpu.R[0] & 0xFFFFu), 2u);
    bus_write_u16(_ea_030025B0 & ~1u, (uint16_t)(g_cpu.R[0] & 0xFFFFu));
    g_cpu.R[15] = 0x030025B4u;
    runtime_tick(_cyc_030025B0);
    }
L_030025B4:
    /* 030025B4  030025b4 A ldr r1,[r15,#0x1c] */
    {
    g_cpu.R[15] = 0x030025B4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030025B4 = 1u;
    _cyc_030025B4 = 2u;
    uint32_t _base_030025B4 = 0x030025BCu;
    uint32_t _off_030025B4;
    _off_030025B4 = 0x0000001Cu;
    uint32_t _ea_030025B4 = _base_030025B4 + _off_030025B4;
    uint32_t _post_030025B4 = _base_030025B4 + _off_030025B4;
    _cyc_030025B4 += runtime_mem_cycles(_ea_030025B4, 4u, 0u);
    uint32_t _v_030025B4;
    { uint32_t _w = bus_read_u32(_ea_030025B4 & ~3u); uint32_t _rot = (_ea_030025B4 & 3u) * 8u; _v_030025B4 = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[1] = _v_030025B4;
    g_cpu.R[15] = 0x030025B8u;
    runtime_tick(_cyc_030025B4);
    }
L_030025B8:
    /* 030025B8  030025b8 A add r1,r1,r2 */
    {
    g_cpu.R[15] = 0x030025B8u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030025B8 = 1u;
    _cyc_030025B8 = 1u;
    uint32_t _rm_030025B8 = g_cpu.R[2];
    uint32_t _op2_030025B8;
    uint32_t _co_030025B8;
    _op2_030025B8 = _rm_030025B8;
    _co_030025B8 = cpsr_c();
    uint32_t _rn_030025B8 = g_cpu.R[1];
    uint32_t _r_030025B8;
    _r_030025B8 = _rn_030025B8 + _op2_030025B8;
    g_cpu.R[1] = _r_030025B8;
    g_cpu.R[15] = 0x030025BCu;
    runtime_tick(_cyc_030025B8);
    }
L_030025BC:
    /* 030025BC  030025bc A ldr r0,[r1] */
    {
    g_cpu.R[15] = 0x030025BCu;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030025BC = 1u;
    _cyc_030025BC = 2u;
    uint32_t _base_030025BC = g_cpu.R[1];
    uint32_t _off_030025BC;
    _off_030025BC = 0x00000000u;
    uint32_t _ea_030025BC = _base_030025BC + _off_030025BC;
    uint32_t _post_030025BC = _base_030025BC + _off_030025BC;
    _cyc_030025BC += runtime_mem_cycles(_ea_030025BC, 4u, 0u);
    uint32_t _v_030025BC;
    { uint32_t _w = bus_read_u32(_ea_030025BC & ~3u); uint32_t _rot = (_ea_030025BC & 3u) * 8u; _v_030025BC = (_rot == 0u) ? _w : ((_w >> _rot) | (_w << (32u - _rot))); }
    g_cpu.R[0] = _v_030025BC;
    g_cpu.R[15] = 0x030025C0u;
    runtime_tick(_cyc_030025BC);
    }
L_030025C0:
    /* 030025C0  030025c0 A add r13,r13,#0x10 */
    {
    g_cpu.R[15] = 0x030025C0u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030025C0 = 1u;
    _cyc_030025C0 = 1u;
    uint32_t _rn_030025C0 = g_cpu.R[13];
    uint32_t _r_030025C0;
    _r_030025C0 = _rn_030025C0 + 0x00000010u;
    g_cpu.R[13] = _r_030025C0;
    g_cpu.R[15] = 0x030025C4u;
    runtime_tick(_cyc_030025C0);
    }
L_030025C4:
    /* 030025C4  030025c4 A bx r0 */
    {
    g_cpu.R[15] = 0x030025C4u;
    if (runtime_should_yield()) return;
    if (g_runtime_insn_trace) runtime_insn_fp();
    uint32_t _cyc_030025C4 = 1u;
    _cyc_030025C4 = 3u;
    uint32_t _bxt_030025C4 = g_cpu.R[0];
    g_cpu.R[15] = _bxt_030025C4 & ~1u;
    if (_bxt_030025C4 & 1u) g_cpu.cpsr |= CPSR_T_BIT; else g_cpu.cpsr &= ~CPSR_T_BIT;
    runtime_tick(_cyc_030025C4);
    runtime_dispatch_with_exchange(_bxt_030025C4);
    return;
    g_cpu.R[15] = 0x030025C8u;
    runtime_tick(_cyc_030025C4);
    }
    /* fall-through to 0x030025C8 */
    g_cpu.R[15] = 0x030025C8u;
    runtime_dispatch(0x030025C8u);
    return;
}
