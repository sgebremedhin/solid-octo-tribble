/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-B06
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/catalog/arm/cortexm4/tiva/ce/Boot.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/HeapStd.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>

/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
    xdc_UInt savedCurrCount;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_lm4_Timer___VERS
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_lm4_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__ *__fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.HeapStd INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_HeapStd_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_HeapStd_Module__;

/* Module__root__V */
extern xdc_runtime_HeapStd_Module__ xdc_runtime_HeapStd_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_HeapStd_Object__ {
    const xdc_runtime_HeapStd_Fxns__ *__fxns;
    xdc_runtime_Memory_Size remainSize;
    xdc_runtime_Memory_Size startSize;
} xdc_runtime_HeapStd_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_HeapStd_Object__ obj;
} xdc_runtime_HeapStd_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_HeapStd___VERS
    #define xdc_runtime_HeapStd___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_HeapStd___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- xdc_runtime_HeapStd_Object */

/* Object */
typedef xdc_runtime_HeapStd_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8025, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8026, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.HeapStd VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__FXNS__C, ".const:xdc_runtime_HeapStd_Module__FXNS__C");
const xdc_runtime_HeapStd_Fxns__ xdc_runtime_HeapStd_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &xdc_runtime_HeapStd_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_HeapStd_alloc__E,
    xdc_runtime_HeapStd_free__E,
    xdc_runtime_HeapStd_isBlocking__E,
    xdc_runtime_HeapStd_getStats__E,
    {
        xdc_runtime_HeapStd_Object__create__S,
        xdc_runtime_HeapStd_Object__delete__S,
        xdc_runtime_HeapStd_Handle__label__S,
        0x800b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* --> TIMER_ISR */
extern xdc_Void TIMER_ISR(xdc_UArg);

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;

/* --> ti_sysbios_family_arm_lm4_Timer_enableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_enableTiva(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_disableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_disableTiva(xdc_Int);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* --> TIMER2INT */
extern xdc_Void TIMER2INT(xdc_UArg);

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[3];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[3];


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> ADCfun */
extern xdc_Void ADCfun(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> UARTfun */
extern xdc_Void UARTfun(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_2_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_2_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* --> SRfun */
extern xdc_Void SRfun(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_3_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_3_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_3_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[4];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.HeapStd DECLARATIONS ========
 */

/* Object__table__V */
xdc_runtime_HeapStd_Object__ xdc_runtime_HeapStd_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_HeapStd_Module_State__ {
    xdc_runtime_Memory_Size remainRTSSize;
} xdc_runtime_HeapStd_Module_State__;

/* Module__state__V */
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V;


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[4];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[9];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[9];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[128];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5387];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[47];


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/oit/workspace_v9_2/empty_EK_TM4C123GXL_TI/Debug/configPkg/package/cfg/empty_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.tiva");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.tiva.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[9];
    xdc_runtime_Startup_startModsFxn__C(state, 9);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif


/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot TEMPLATE ========
 */

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_arm_cortexm4_tiva_ce_Boot_init ========
 */
xdc_Void ti_catalog_arm_cortexm4_tiva_ce_Boot_init()
{
    ti_catalog_arm_cortexm4_tiva_ce_Boot_sysCtlClockSet((xdc_ULong)
        (-1056963264));
}


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_arm_lm4_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_lm4_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (NULL);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    return (NULL);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    return (NULL);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    return (NULL);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I();


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[216];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[216];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
        ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (SizeT)__section_size("CSTACK");
}
#endif

/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8 ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn__C = ((CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table ti_catalog_arm_cortexm4_tiva_ce_Boot_Object__table__C = 0;

/* A_mustUseEnhancedClockMode__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_mustNotUseEnhancedClockMode__C */
#pragma DATA_SECTION(ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C, ".const:ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C");
__FAR__ const CT__ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode ti_catalog_arm_cortexm4_tiva_ce_Boot_A_mustNotUseEnhancedClockMode__C = (((xdc_runtime_Assert_Id)474) << 16 | 16);


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x4c4b400,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x4c4b400,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x0;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    (xdc_UInt)0xffffffff,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x2625a00,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)TIMER_ISR)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x13880,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[2],  /* hwi */
        (xdc_UInt)0xffffffff,  /* prevThreshold */
        (xdc_UInt)0x0,  /* rollovers */
        (xdc_UInt)0x0,  /* savedCurrCount */
        0,  /* altclk */
    },
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[6] = {
    {
        (xdc_UInt)0x23,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x56,  /* intNum */
        ((xdc_Ptr)(0x40034000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x6c,  /* intNum */
        ((xdc_Ptr)(0x40035000)),  /* baseAddr */
    },  /* [5] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[6] = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* [0] */
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0x3c,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_lm4_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = ti_sysbios_family_arm_lm4_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)3734) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)3770) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)3809) << 16 | 0);

/* E_noaltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_noaltclk ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C = (((xdc_runtime_Error_Id)3867) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0x3f;

/* supportsAltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_supportsAltclk ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C = 1;

/* enableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_enableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_enableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_enableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTiva));

/* disableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_disableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_disableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C = ((CT__ti_sysbios_family_arm_lm4_Timer_disableFunc)((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_disableTiva));

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm4_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x6;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[3] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)TIMER2INT)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x27,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x23,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#2 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x25,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x400,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd8;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)4895) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)4965) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)2751) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3248) << 16 | 0);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)3296) << 16 | 0);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)3344) << 16 | 0);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)3549) << 16 | 0);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)3577) << 16 | 0);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)3587) << 16 | 0);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)3603) << 16 | 0);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)3633) << 16 | 0);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)3663) << 16 | 0);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)3680) << 16 | 0);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)3701) << 16 | 0);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)3716) << 16 | 0);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x802b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)2552) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Hwi_Object__ ti_sysbios_hal_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Hwi_HwiProxy_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = ti_sysbios_hal_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)3169) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4085) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4107) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)4125) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)712) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)793) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[1] = {
    (xdc_UInt)0x0,  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {1, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[3] = {
    {/* instance#0 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#1 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[1].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[1].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#2 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[2].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[2].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = ti_sysbios_knl_Semaphore_Object__table__V;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)4157) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)4187) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1203) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1258) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)992) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1323) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1377) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 0;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)4230) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)4277) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)4295) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1471) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1528) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[2048];

/* --> ti_sysbios_knl_Task_Instance_State_3_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[2048];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[4] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x3,  /* priority */
        (xdc_UInt)0x8,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ADCfun)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x2,  /* priority */
        (xdc_UInt)0x4,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)UARTfun)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#2 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_2_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)SRfun)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#3 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[3].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[3].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_3_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[3],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x4,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 4;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)4335) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)4403) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)4448) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)4489) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)4521) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)4569) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)4625) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)4656) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)4739) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)4825) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)3044) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3087) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)3138) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1577) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1646) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1700) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1754) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1817) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1867) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1902) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1935) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)2019) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)2804) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)2826) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)2830) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)2864) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x2;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.HeapStd INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_HeapStd_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__PARAMS__C, ".const:xdc_runtime_HeapStd_Object__PARAMS__C");
__FAR__ const xdc_runtime_HeapStd_Params xdc_runtime_HeapStd_Object__PARAMS__C = {
    sizeof (xdc_runtime_HeapStd_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_HeapStd_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_HeapStd_Module__ xdc_runtime_HeapStd_Module__root__V = {
    {&xdc_runtime_HeapStd_Module__root__V.link,  /* link.next */
    &xdc_runtime_HeapStd_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_HeapStd_Object__ xdc_runtime_HeapStd_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_HeapStd_Module__FXNS__C,
        ((xdc_UArg)((-0x0 - 1))),  /* remainSize */
        ((xdc_UArg)((-0x0 - 1))),  /* startSize */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_HeapStd_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V __attribute__ ((section(".data_xdc_runtime_HeapStd_Module__state__V")));
#endif
#endif
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V = {
    ((xdc_UArg)(0x0)),  /* remainRTSSize */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__diagsEnabled__C, ".const:xdc_runtime_HeapStd_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsEnabled xdc_runtime_HeapStd_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__diagsIncluded__C, ".const:xdc_runtime_HeapStd_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsIncluded xdc_runtime_HeapStd_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__diagsMask__C, ".const:xdc_runtime_HeapStd_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsMask xdc_runtime_HeapStd_Module__diagsMask__C = ((CT__xdc_runtime_HeapStd_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__gateObj__C, ".const:xdc_runtime_HeapStd_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__gateObj xdc_runtime_HeapStd_Module__gateObj__C = ((CT__xdc_runtime_HeapStd_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__gatePrms__C, ".const:xdc_runtime_HeapStd_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__gatePrms xdc_runtime_HeapStd_Module__gatePrms__C = ((CT__xdc_runtime_HeapStd_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__id__C, ".const:xdc_runtime_HeapStd_Module__id__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__id xdc_runtime_HeapStd_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerDefined__C, ".const:xdc_runtime_HeapStd_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerDefined xdc_runtime_HeapStd_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerObj__C, ".const:xdc_runtime_HeapStd_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerObj xdc_runtime_HeapStd_Module__loggerObj__C = ((CT__xdc_runtime_HeapStd_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn0__C, ".const:xdc_runtime_HeapStd_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn0 xdc_runtime_HeapStd_Module__loggerFxn0__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn1__C, ".const:xdc_runtime_HeapStd_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn1 xdc_runtime_HeapStd_Module__loggerFxn1__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn2__C, ".const:xdc_runtime_HeapStd_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn2 xdc_runtime_HeapStd_Module__loggerFxn2__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn4__C, ".const:xdc_runtime_HeapStd_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn4 xdc_runtime_HeapStd_Module__loggerFxn4__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn8__C, ".const:xdc_runtime_HeapStd_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn8 xdc_runtime_HeapStd_Module__loggerFxn8__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__startupDoneFxn__C, ".const:xdc_runtime_HeapStd_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__startupDoneFxn xdc_runtime_HeapStd_Module__startupDoneFxn__C = ((CT__xdc_runtime_HeapStd_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__count__C, ".const:xdc_runtime_HeapStd_Object__count__C");
__FAR__ const CT__xdc_runtime_HeapStd_Object__count xdc_runtime_HeapStd_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__heap__C, ".const:xdc_runtime_HeapStd_Object__heap__C");
__FAR__ const CT__xdc_runtime_HeapStd_Object__heap xdc_runtime_HeapStd_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__sizeof__C, ".const:xdc_runtime_HeapStd_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_HeapStd_Object__sizeof xdc_runtime_HeapStd_Object__sizeof__C = sizeof(xdc_runtime_HeapStd_Object__);

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__table__C, ".const:xdc_runtime_HeapStd_Object__table__C");
__FAR__ const CT__xdc_runtime_HeapStd_Object__table xdc_runtime_HeapStd_Object__table__C = xdc_runtime_HeapStd_Object__table__V;

/* E_noRTSMemory__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_E_noRTSMemory__C, ".const:xdc_runtime_HeapStd_E_noRTSMemory__C");
__FAR__ const CT__xdc_runtime_HeapStd_E_noRTSMemory xdc_runtime_HeapStd_E_noRTSMemory__C = (((xdc_runtime_Error_Id)2949) << 16 | 0);

/* A_zeroSize__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_zeroSize__C, ".const:xdc_runtime_HeapStd_A_zeroSize__C");
__FAR__ const CT__xdc_runtime_HeapStd_A_zeroSize xdc_runtime_HeapStd_A_zeroSize__C = (((xdc_runtime_Assert_Id)95) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_align__C, ".const:xdc_runtime_HeapStd_A_align__C");
__FAR__ const CT__xdc_runtime_HeapStd_A_align xdc_runtime_HeapStd_A_align__C = (((xdc_runtime_Assert_Id)140) << 16 | 16);

/* A_invalidTotalFreeSize__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_invalidTotalFreeSize__C, ".const:xdc_runtime_HeapStd_A_invalidTotalFreeSize__C");
__FAR__ const CT__xdc_runtime_HeapStd_A_invalidTotalFreeSize xdc_runtime_HeapStd_A_invalidTotalFreeSize__C = (((xdc_runtime_Assert_Id)185) << 16 | 16);

/* A_invalidAlignment__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_invalidAlignment__C, ".const:xdc_runtime_HeapStd_A_invalidAlignment__C");
__FAR__ const CT__xdc_runtime_HeapStd_A_invalidAlignment xdc_runtime_HeapStd_A_invalidAlignment__C = (((xdc_runtime_Assert_Id)246) << 16 | 16);


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)3909) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)3933) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)3954) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)3973) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)3990) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4004) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4020) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4027) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4038) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4048) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4067) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&xdc_runtime_HeapStd_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[4] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_catalog_arm_cortexm4_tiva_ce_Boot_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [3] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[9] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [8] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[9] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {4, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[128];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x80;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x2;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[5387] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x6d,  /* [402] */
    (xdc_Char)0x75,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x74,  /* [405] */
    (xdc_Char)0x55,  /* [406] */
    (xdc_Char)0x73,  /* [407] */
    (xdc_Char)0x65,  /* [408] */
    (xdc_Char)0x45,  /* [409] */
    (xdc_Char)0x6e,  /* [410] */
    (xdc_Char)0x68,  /* [411] */
    (xdc_Char)0x61,  /* [412] */
    (xdc_Char)0x6e,  /* [413] */
    (xdc_Char)0x63,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x64,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x6c,  /* [418] */
    (xdc_Char)0x6f,  /* [419] */
    (xdc_Char)0x63,  /* [420] */
    (xdc_Char)0x6b,  /* [421] */
    (xdc_Char)0x4d,  /* [422] */
    (xdc_Char)0x6f,  /* [423] */
    (xdc_Char)0x64,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x54,  /* [428] */
    (xdc_Char)0x68,  /* [429] */
    (xdc_Char)0x69,  /* [430] */
    (xdc_Char)0x73,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x64,  /* [433] */
    (xdc_Char)0x65,  /* [434] */
    (xdc_Char)0x76,  /* [435] */
    (xdc_Char)0x69,  /* [436] */
    (xdc_Char)0x63,  /* [437] */
    (xdc_Char)0x65,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x72,  /* [440] */
    (xdc_Char)0x65,  /* [441] */
    (xdc_Char)0x71,  /* [442] */
    (xdc_Char)0x75,  /* [443] */
    (xdc_Char)0x69,  /* [444] */
    (xdc_Char)0x72,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x73,  /* [447] */
    (xdc_Char)0x20,  /* [448] */
    (xdc_Char)0x74,  /* [449] */
    (xdc_Char)0x68,  /* [450] */
    (xdc_Char)0x65,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x45,  /* [453] */
    (xdc_Char)0x6e,  /* [454] */
    (xdc_Char)0x68,  /* [455] */
    (xdc_Char)0x61,  /* [456] */
    (xdc_Char)0x6e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x65,  /* [459] */
    (xdc_Char)0x64,  /* [460] */
    (xdc_Char)0x20,  /* [461] */
    (xdc_Char)0x43,  /* [462] */
    (xdc_Char)0x6c,  /* [463] */
    (xdc_Char)0x6f,  /* [464] */
    (xdc_Char)0x63,  /* [465] */
    (xdc_Char)0x6b,  /* [466] */
    (xdc_Char)0x20,  /* [467] */
    (xdc_Char)0x4d,  /* [468] */
    (xdc_Char)0x6f,  /* [469] */
    (xdc_Char)0x64,  /* [470] */
    (xdc_Char)0x65,  /* [471] */
    (xdc_Char)0x2e,  /* [472] */
    (xdc_Char)0x0,  /* [473] */
    (xdc_Char)0x41,  /* [474] */
    (xdc_Char)0x5f,  /* [475] */
    (xdc_Char)0x6d,  /* [476] */
    (xdc_Char)0x75,  /* [477] */
    (xdc_Char)0x73,  /* [478] */
    (xdc_Char)0x74,  /* [479] */
    (xdc_Char)0x4e,  /* [480] */
    (xdc_Char)0x6f,  /* [481] */
    (xdc_Char)0x74,  /* [482] */
    (xdc_Char)0x55,  /* [483] */
    (xdc_Char)0x73,  /* [484] */
    (xdc_Char)0x65,  /* [485] */
    (xdc_Char)0x45,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x68,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6e,  /* [490] */
    (xdc_Char)0x63,  /* [491] */
    (xdc_Char)0x65,  /* [492] */
    (xdc_Char)0x64,  /* [493] */
    (xdc_Char)0x43,  /* [494] */
    (xdc_Char)0x6c,  /* [495] */
    (xdc_Char)0x6f,  /* [496] */
    (xdc_Char)0x63,  /* [497] */
    (xdc_Char)0x6b,  /* [498] */
    (xdc_Char)0x4d,  /* [499] */
    (xdc_Char)0x6f,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x65,  /* [502] */
    (xdc_Char)0x3a,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x54,  /* [505] */
    (xdc_Char)0x68,  /* [506] */
    (xdc_Char)0x69,  /* [507] */
    (xdc_Char)0x73,  /* [508] */
    (xdc_Char)0x20,  /* [509] */
    (xdc_Char)0x64,  /* [510] */
    (xdc_Char)0x65,  /* [511] */
    (xdc_Char)0x76,  /* [512] */
    (xdc_Char)0x69,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x20,  /* [516] */
    (xdc_Char)0x64,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x65,  /* [519] */
    (xdc_Char)0x73,  /* [520] */
    (xdc_Char)0x20,  /* [521] */
    (xdc_Char)0x6e,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x74,  /* [524] */
    (xdc_Char)0x20,  /* [525] */
    (xdc_Char)0x73,  /* [526] */
    (xdc_Char)0x75,  /* [527] */
    (xdc_Char)0x70,  /* [528] */
    (xdc_Char)0x70,  /* [529] */
    (xdc_Char)0x6f,  /* [530] */
    (xdc_Char)0x72,  /* [531] */
    (xdc_Char)0x74,  /* [532] */
    (xdc_Char)0x20,  /* [533] */
    (xdc_Char)0x74,  /* [534] */
    (xdc_Char)0x68,  /* [535] */
    (xdc_Char)0x65,  /* [536] */
    (xdc_Char)0x20,  /* [537] */
    (xdc_Char)0x45,  /* [538] */
    (xdc_Char)0x6e,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x61,  /* [541] */
    (xdc_Char)0x6e,  /* [542] */
    (xdc_Char)0x63,  /* [543] */
    (xdc_Char)0x65,  /* [544] */
    (xdc_Char)0x64,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x43,  /* [547] */
    (xdc_Char)0x6c,  /* [548] */
    (xdc_Char)0x6f,  /* [549] */
    (xdc_Char)0x63,  /* [550] */
    (xdc_Char)0x6b,  /* [551] */
    (xdc_Char)0x20,  /* [552] */
    (xdc_Char)0x4d,  /* [553] */
    (xdc_Char)0x6f,  /* [554] */
    (xdc_Char)0x64,  /* [555] */
    (xdc_Char)0x65,  /* [556] */
    (xdc_Char)0x2e,  /* [557] */
    (xdc_Char)0x0,  /* [558] */
    (xdc_Char)0x41,  /* [559] */
    (xdc_Char)0x5f,  /* [560] */
    (xdc_Char)0x6e,  /* [561] */
    (xdc_Char)0x75,  /* [562] */
    (xdc_Char)0x6c,  /* [563] */
    (xdc_Char)0x6c,  /* [564] */
    (xdc_Char)0x50,  /* [565] */
    (xdc_Char)0x6f,  /* [566] */
    (xdc_Char)0x69,  /* [567] */
    (xdc_Char)0x6e,  /* [568] */
    (xdc_Char)0x74,  /* [569] */
    (xdc_Char)0x65,  /* [570] */
    (xdc_Char)0x72,  /* [571] */
    (xdc_Char)0x3a,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x50,  /* [574] */
    (xdc_Char)0x6f,  /* [575] */
    (xdc_Char)0x69,  /* [576] */
    (xdc_Char)0x6e,  /* [577] */
    (xdc_Char)0x74,  /* [578] */
    (xdc_Char)0x65,  /* [579] */
    (xdc_Char)0x72,  /* [580] */
    (xdc_Char)0x20,  /* [581] */
    (xdc_Char)0x69,  /* [582] */
    (xdc_Char)0x73,  /* [583] */
    (xdc_Char)0x20,  /* [584] */
    (xdc_Char)0x6e,  /* [585] */
    (xdc_Char)0x75,  /* [586] */
    (xdc_Char)0x6c,  /* [587] */
    (xdc_Char)0x6c,  /* [588] */
    (xdc_Char)0x0,  /* [589] */
    (xdc_Char)0x41,  /* [590] */
    (xdc_Char)0x5f,  /* [591] */
    (xdc_Char)0x69,  /* [592] */
    (xdc_Char)0x6e,  /* [593] */
    (xdc_Char)0x76,  /* [594] */
    (xdc_Char)0x61,  /* [595] */
    (xdc_Char)0x6c,  /* [596] */
    (xdc_Char)0x69,  /* [597] */
    (xdc_Char)0x64,  /* [598] */
    (xdc_Char)0x52,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x67,  /* [601] */
    (xdc_Char)0x69,  /* [602] */
    (xdc_Char)0x6f,  /* [603] */
    (xdc_Char)0x6e,  /* [604] */
    (xdc_Char)0x49,  /* [605] */
    (xdc_Char)0x64,  /* [606] */
    (xdc_Char)0x3a,  /* [607] */
    (xdc_Char)0x20,  /* [608] */
    (xdc_Char)0x4d,  /* [609] */
    (xdc_Char)0x50,  /* [610] */
    (xdc_Char)0x55,  /* [611] */
    (xdc_Char)0x20,  /* [612] */
    (xdc_Char)0x52,  /* [613] */
    (xdc_Char)0x65,  /* [614] */
    (xdc_Char)0x67,  /* [615] */
    (xdc_Char)0x69,  /* [616] */
    (xdc_Char)0x6f,  /* [617] */
    (xdc_Char)0x6e,  /* [618] */
    (xdc_Char)0x20,  /* [619] */
    (xdc_Char)0x6e,  /* [620] */
    (xdc_Char)0x75,  /* [621] */
    (xdc_Char)0x6d,  /* [622] */
    (xdc_Char)0x62,  /* [623] */
    (xdc_Char)0x65,  /* [624] */
    (xdc_Char)0x72,  /* [625] */
    (xdc_Char)0x20,  /* [626] */
    (xdc_Char)0x70,  /* [627] */
    (xdc_Char)0x61,  /* [628] */
    (xdc_Char)0x73,  /* [629] */
    (xdc_Char)0x73,  /* [630] */
    (xdc_Char)0x65,  /* [631] */
    (xdc_Char)0x64,  /* [632] */
    (xdc_Char)0x20,  /* [633] */
    (xdc_Char)0x69,  /* [634] */
    (xdc_Char)0x73,  /* [635] */
    (xdc_Char)0x20,  /* [636] */
    (xdc_Char)0x69,  /* [637] */
    (xdc_Char)0x6e,  /* [638] */
    (xdc_Char)0x76,  /* [639] */
    (xdc_Char)0x61,  /* [640] */
    (xdc_Char)0x6c,  /* [641] */
    (xdc_Char)0x69,  /* [642] */
    (xdc_Char)0x64,  /* [643] */
    (xdc_Char)0x2e,  /* [644] */
    (xdc_Char)0x0,  /* [645] */
    (xdc_Char)0x41,  /* [646] */
    (xdc_Char)0x5f,  /* [647] */
    (xdc_Char)0x75,  /* [648] */
    (xdc_Char)0x6e,  /* [649] */
    (xdc_Char)0x61,  /* [650] */
    (xdc_Char)0x6c,  /* [651] */
    (xdc_Char)0x69,  /* [652] */
    (xdc_Char)0x67,  /* [653] */
    (xdc_Char)0x6e,  /* [654] */
    (xdc_Char)0x65,  /* [655] */
    (xdc_Char)0x64,  /* [656] */
    (xdc_Char)0x42,  /* [657] */
    (xdc_Char)0x61,  /* [658] */
    (xdc_Char)0x73,  /* [659] */
    (xdc_Char)0x65,  /* [660] */
    (xdc_Char)0x41,  /* [661] */
    (xdc_Char)0x64,  /* [662] */
    (xdc_Char)0x64,  /* [663] */
    (xdc_Char)0x72,  /* [664] */
    (xdc_Char)0x3a,  /* [665] */
    (xdc_Char)0x20,  /* [666] */
    (xdc_Char)0x4d,  /* [667] */
    (xdc_Char)0x50,  /* [668] */
    (xdc_Char)0x55,  /* [669] */
    (xdc_Char)0x20,  /* [670] */
    (xdc_Char)0x72,  /* [671] */
    (xdc_Char)0x65,  /* [672] */
    (xdc_Char)0x67,  /* [673] */
    (xdc_Char)0x69,  /* [674] */
    (xdc_Char)0x6f,  /* [675] */
    (xdc_Char)0x6e,  /* [676] */
    (xdc_Char)0x20,  /* [677] */
    (xdc_Char)0x62,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x73,  /* [680] */
    (xdc_Char)0x65,  /* [681] */
    (xdc_Char)0x20,  /* [682] */
    (xdc_Char)0x61,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x64,  /* [685] */
    (xdc_Char)0x72,  /* [686] */
    (xdc_Char)0x65,  /* [687] */
    (xdc_Char)0x73,  /* [688] */
    (xdc_Char)0x73,  /* [689] */
    (xdc_Char)0x20,  /* [690] */
    (xdc_Char)0x6e,  /* [691] */
    (xdc_Char)0x6f,  /* [692] */
    (xdc_Char)0x74,  /* [693] */
    (xdc_Char)0x20,  /* [694] */
    (xdc_Char)0x61,  /* [695] */
    (xdc_Char)0x6c,  /* [696] */
    (xdc_Char)0x69,  /* [697] */
    (xdc_Char)0x67,  /* [698] */
    (xdc_Char)0x6e,  /* [699] */
    (xdc_Char)0x65,  /* [700] */
    (xdc_Char)0x64,  /* [701] */
    (xdc_Char)0x20,  /* [702] */
    (xdc_Char)0x74,  /* [703] */
    (xdc_Char)0x6f,  /* [704] */
    (xdc_Char)0x20,  /* [705] */
    (xdc_Char)0x73,  /* [706] */
    (xdc_Char)0x69,  /* [707] */
    (xdc_Char)0x7a,  /* [708] */
    (xdc_Char)0x65,  /* [709] */
    (xdc_Char)0x2e,  /* [710] */
    (xdc_Char)0x0,  /* [711] */
    (xdc_Char)0x41,  /* [712] */
    (xdc_Char)0x5f,  /* [713] */
    (xdc_Char)0x63,  /* [714] */
    (xdc_Char)0x6c,  /* [715] */
    (xdc_Char)0x6f,  /* [716] */
    (xdc_Char)0x63,  /* [717] */
    (xdc_Char)0x6b,  /* [718] */
    (xdc_Char)0x44,  /* [719] */
    (xdc_Char)0x69,  /* [720] */
    (xdc_Char)0x73,  /* [721] */
    (xdc_Char)0x61,  /* [722] */
    (xdc_Char)0x62,  /* [723] */
    (xdc_Char)0x6c,  /* [724] */
    (xdc_Char)0x65,  /* [725] */
    (xdc_Char)0x64,  /* [726] */
    (xdc_Char)0x3a,  /* [727] */
    (xdc_Char)0x20,  /* [728] */
    (xdc_Char)0x43,  /* [729] */
    (xdc_Char)0x61,  /* [730] */
    (xdc_Char)0x6e,  /* [731] */
    (xdc_Char)0x6e,  /* [732] */
    (xdc_Char)0x6f,  /* [733] */
    (xdc_Char)0x74,  /* [734] */
    (xdc_Char)0x20,  /* [735] */
    (xdc_Char)0x63,  /* [736] */
    (xdc_Char)0x72,  /* [737] */
    (xdc_Char)0x65,  /* [738] */
    (xdc_Char)0x61,  /* [739] */
    (xdc_Char)0x74,  /* [740] */
    (xdc_Char)0x65,  /* [741] */
    (xdc_Char)0x20,  /* [742] */
    (xdc_Char)0x61,  /* [743] */
    (xdc_Char)0x20,  /* [744] */
    (xdc_Char)0x63,  /* [745] */
    (xdc_Char)0x6c,  /* [746] */
    (xdc_Char)0x6f,  /* [747] */
    (xdc_Char)0x63,  /* [748] */
    (xdc_Char)0x6b,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x69,  /* [751] */
    (xdc_Char)0x6e,  /* [752] */
    (xdc_Char)0x73,  /* [753] */
    (xdc_Char)0x74,  /* [754] */
    (xdc_Char)0x61,  /* [755] */
    (xdc_Char)0x6e,  /* [756] */
    (xdc_Char)0x63,  /* [757] */
    (xdc_Char)0x65,  /* [758] */
    (xdc_Char)0x20,  /* [759] */
    (xdc_Char)0x77,  /* [760] */
    (xdc_Char)0x68,  /* [761] */
    (xdc_Char)0x65,  /* [762] */
    (xdc_Char)0x6e,  /* [763] */
    (xdc_Char)0x20,  /* [764] */
    (xdc_Char)0x42,  /* [765] */
    (xdc_Char)0x49,  /* [766] */
    (xdc_Char)0x4f,  /* [767] */
    (xdc_Char)0x53,  /* [768] */
    (xdc_Char)0x2e,  /* [769] */
    (xdc_Char)0x63,  /* [770] */
    (xdc_Char)0x6c,  /* [771] */
    (xdc_Char)0x6f,  /* [772] */
    (xdc_Char)0x63,  /* [773] */
    (xdc_Char)0x6b,  /* [774] */
    (xdc_Char)0x45,  /* [775] */
    (xdc_Char)0x6e,  /* [776] */
    (xdc_Char)0x61,  /* [777] */
    (xdc_Char)0x62,  /* [778] */
    (xdc_Char)0x6c,  /* [779] */
    (xdc_Char)0x65,  /* [780] */
    (xdc_Char)0x64,  /* [781] */
    (xdc_Char)0x20,  /* [782] */
    (xdc_Char)0x69,  /* [783] */
    (xdc_Char)0x73,  /* [784] */
    (xdc_Char)0x20,  /* [785] */
    (xdc_Char)0x66,  /* [786] */
    (xdc_Char)0x61,  /* [787] */
    (xdc_Char)0x6c,  /* [788] */
    (xdc_Char)0x73,  /* [789] */
    (xdc_Char)0x65,  /* [790] */
    (xdc_Char)0x2e,  /* [791] */
    (xdc_Char)0x0,  /* [792] */
    (xdc_Char)0x41,  /* [793] */
    (xdc_Char)0x5f,  /* [794] */
    (xdc_Char)0x62,  /* [795] */
    (xdc_Char)0x61,  /* [796] */
    (xdc_Char)0x64,  /* [797] */
    (xdc_Char)0x54,  /* [798] */
    (xdc_Char)0x68,  /* [799] */
    (xdc_Char)0x72,  /* [800] */
    (xdc_Char)0x65,  /* [801] */
    (xdc_Char)0x61,  /* [802] */
    (xdc_Char)0x64,  /* [803] */
    (xdc_Char)0x54,  /* [804] */
    (xdc_Char)0x79,  /* [805] */
    (xdc_Char)0x70,  /* [806] */
    (xdc_Char)0x65,  /* [807] */
    (xdc_Char)0x3a,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x43,  /* [810] */
    (xdc_Char)0x61,  /* [811] */
    (xdc_Char)0x6e,  /* [812] */
    (xdc_Char)0x6e,  /* [813] */
    (xdc_Char)0x6f,  /* [814] */
    (xdc_Char)0x74,  /* [815] */
    (xdc_Char)0x20,  /* [816] */
    (xdc_Char)0x63,  /* [817] */
    (xdc_Char)0x72,  /* [818] */
    (xdc_Char)0x65,  /* [819] */
    (xdc_Char)0x61,  /* [820] */
    (xdc_Char)0x74,  /* [821] */
    (xdc_Char)0x65,  /* [822] */
    (xdc_Char)0x2f,  /* [823] */
    (xdc_Char)0x64,  /* [824] */
    (xdc_Char)0x65,  /* [825] */
    (xdc_Char)0x6c,  /* [826] */
    (xdc_Char)0x65,  /* [827] */
    (xdc_Char)0x74,  /* [828] */
    (xdc_Char)0x65,  /* [829] */
    (xdc_Char)0x20,  /* [830] */
    (xdc_Char)0x61,  /* [831] */
    (xdc_Char)0x20,  /* [832] */
    (xdc_Char)0x43,  /* [833] */
    (xdc_Char)0x6c,  /* [834] */
    (xdc_Char)0x6f,  /* [835] */
    (xdc_Char)0x63,  /* [836] */
    (xdc_Char)0x6b,  /* [837] */
    (xdc_Char)0x20,  /* [838] */
    (xdc_Char)0x66,  /* [839] */
    (xdc_Char)0x72,  /* [840] */
    (xdc_Char)0x6f,  /* [841] */
    (xdc_Char)0x6d,  /* [842] */
    (xdc_Char)0x20,  /* [843] */
    (xdc_Char)0x48,  /* [844] */
    (xdc_Char)0x77,  /* [845] */
    (xdc_Char)0x69,  /* [846] */
    (xdc_Char)0x20,  /* [847] */
    (xdc_Char)0x6f,  /* [848] */
    (xdc_Char)0x72,  /* [849] */
    (xdc_Char)0x20,  /* [850] */
    (xdc_Char)0x53,  /* [851] */
    (xdc_Char)0x77,  /* [852] */
    (xdc_Char)0x69,  /* [853] */
    (xdc_Char)0x20,  /* [854] */
    (xdc_Char)0x74,  /* [855] */
    (xdc_Char)0x68,  /* [856] */
    (xdc_Char)0x72,  /* [857] */
    (xdc_Char)0x65,  /* [858] */
    (xdc_Char)0x61,  /* [859] */
    (xdc_Char)0x64,  /* [860] */
    (xdc_Char)0x2e,  /* [861] */
    (xdc_Char)0x0,  /* [862] */
    (xdc_Char)0x41,  /* [863] */
    (xdc_Char)0x5f,  /* [864] */
    (xdc_Char)0x6e,  /* [865] */
    (xdc_Char)0x75,  /* [866] */
    (xdc_Char)0x6c,  /* [867] */
    (xdc_Char)0x6c,  /* [868] */
    (xdc_Char)0x45,  /* [869] */
    (xdc_Char)0x76,  /* [870] */
    (xdc_Char)0x65,  /* [871] */
    (xdc_Char)0x6e,  /* [872] */
    (xdc_Char)0x74,  /* [873] */
    (xdc_Char)0x4d,  /* [874] */
    (xdc_Char)0x61,  /* [875] */
    (xdc_Char)0x73,  /* [876] */
    (xdc_Char)0x6b,  /* [877] */
    (xdc_Char)0x73,  /* [878] */
    (xdc_Char)0x3a,  /* [879] */
    (xdc_Char)0x20,  /* [880] */
    (xdc_Char)0x6f,  /* [881] */
    (xdc_Char)0x72,  /* [882] */
    (xdc_Char)0x4d,  /* [883] */
    (xdc_Char)0x61,  /* [884] */
    (xdc_Char)0x73,  /* [885] */
    (xdc_Char)0x6b,  /* [886] */
    (xdc_Char)0x20,  /* [887] */
    (xdc_Char)0x61,  /* [888] */
    (xdc_Char)0x6e,  /* [889] */
    (xdc_Char)0x64,  /* [890] */
    (xdc_Char)0x20,  /* [891] */
    (xdc_Char)0x61,  /* [892] */
    (xdc_Char)0x6e,  /* [893] */
    (xdc_Char)0x64,  /* [894] */
    (xdc_Char)0x4d,  /* [895] */
    (xdc_Char)0x61,  /* [896] */
    (xdc_Char)0x73,  /* [897] */
    (xdc_Char)0x6b,  /* [898] */
    (xdc_Char)0x20,  /* [899] */
    (xdc_Char)0x61,  /* [900] */
    (xdc_Char)0x72,  /* [901] */
    (xdc_Char)0x65,  /* [902] */
    (xdc_Char)0x20,  /* [903] */
    (xdc_Char)0x6e,  /* [904] */
    (xdc_Char)0x75,  /* [905] */
    (xdc_Char)0x6c,  /* [906] */
    (xdc_Char)0x6c,  /* [907] */
    (xdc_Char)0x2e,  /* [908] */
    (xdc_Char)0x0,  /* [909] */
    (xdc_Char)0x41,  /* [910] */
    (xdc_Char)0x5f,  /* [911] */
    (xdc_Char)0x6e,  /* [912] */
    (xdc_Char)0x75,  /* [913] */
    (xdc_Char)0x6c,  /* [914] */
    (xdc_Char)0x6c,  /* [915] */
    (xdc_Char)0x45,  /* [916] */
    (xdc_Char)0x76,  /* [917] */
    (xdc_Char)0x65,  /* [918] */
    (xdc_Char)0x6e,  /* [919] */
    (xdc_Char)0x74,  /* [920] */
    (xdc_Char)0x49,  /* [921] */
    (xdc_Char)0x64,  /* [922] */
    (xdc_Char)0x3a,  /* [923] */
    (xdc_Char)0x20,  /* [924] */
    (xdc_Char)0x70,  /* [925] */
    (xdc_Char)0x6f,  /* [926] */
    (xdc_Char)0x73,  /* [927] */
    (xdc_Char)0x74,  /* [928] */
    (xdc_Char)0x65,  /* [929] */
    (xdc_Char)0x64,  /* [930] */
    (xdc_Char)0x20,  /* [931] */
    (xdc_Char)0x65,  /* [932] */
    (xdc_Char)0x76,  /* [933] */
    (xdc_Char)0x65,  /* [934] */
    (xdc_Char)0x6e,  /* [935] */
    (xdc_Char)0x74,  /* [936] */
    (xdc_Char)0x49,  /* [937] */
    (xdc_Char)0x64,  /* [938] */
    (xdc_Char)0x20,  /* [939] */
    (xdc_Char)0x69,  /* [940] */
    (xdc_Char)0x73,  /* [941] */
    (xdc_Char)0x20,  /* [942] */
    (xdc_Char)0x6e,  /* [943] */
    (xdc_Char)0x75,  /* [944] */
    (xdc_Char)0x6c,  /* [945] */
    (xdc_Char)0x6c,  /* [946] */
    (xdc_Char)0x2e,  /* [947] */
    (xdc_Char)0x0,  /* [948] */
    (xdc_Char)0x41,  /* [949] */
    (xdc_Char)0x5f,  /* [950] */
    (xdc_Char)0x65,  /* [951] */
    (xdc_Char)0x76,  /* [952] */
    (xdc_Char)0x65,  /* [953] */
    (xdc_Char)0x6e,  /* [954] */
    (xdc_Char)0x74,  /* [955] */
    (xdc_Char)0x49,  /* [956] */
    (xdc_Char)0x6e,  /* [957] */
    (xdc_Char)0x55,  /* [958] */
    (xdc_Char)0x73,  /* [959] */
    (xdc_Char)0x65,  /* [960] */
    (xdc_Char)0x3a,  /* [961] */
    (xdc_Char)0x20,  /* [962] */
    (xdc_Char)0x45,  /* [963] */
    (xdc_Char)0x76,  /* [964] */
    (xdc_Char)0x65,  /* [965] */
    (xdc_Char)0x6e,  /* [966] */
    (xdc_Char)0x74,  /* [967] */
    (xdc_Char)0x20,  /* [968] */
    (xdc_Char)0x6f,  /* [969] */
    (xdc_Char)0x62,  /* [970] */
    (xdc_Char)0x6a,  /* [971] */
    (xdc_Char)0x65,  /* [972] */
    (xdc_Char)0x63,  /* [973] */
    (xdc_Char)0x74,  /* [974] */
    (xdc_Char)0x20,  /* [975] */
    (xdc_Char)0x61,  /* [976] */
    (xdc_Char)0x6c,  /* [977] */
    (xdc_Char)0x72,  /* [978] */
    (xdc_Char)0x65,  /* [979] */
    (xdc_Char)0x61,  /* [980] */
    (xdc_Char)0x64,  /* [981] */
    (xdc_Char)0x79,  /* [982] */
    (xdc_Char)0x20,  /* [983] */
    (xdc_Char)0x69,  /* [984] */
    (xdc_Char)0x6e,  /* [985] */
    (xdc_Char)0x20,  /* [986] */
    (xdc_Char)0x75,  /* [987] */
    (xdc_Char)0x73,  /* [988] */
    (xdc_Char)0x65,  /* [989] */
    (xdc_Char)0x2e,  /* [990] */
    (xdc_Char)0x0,  /* [991] */
    (xdc_Char)0x41,  /* [992] */
    (xdc_Char)0x5f,  /* [993] */
    (xdc_Char)0x62,  /* [994] */
    (xdc_Char)0x61,  /* [995] */
    (xdc_Char)0x64,  /* [996] */
    (xdc_Char)0x43,  /* [997] */
    (xdc_Char)0x6f,  /* [998] */
    (xdc_Char)0x6e,  /* [999] */
    (xdc_Char)0x74,  /* [1000] */
    (xdc_Char)0x65,  /* [1001] */
    (xdc_Char)0x78,  /* [1002] */
    (xdc_Char)0x74,  /* [1003] */
    (xdc_Char)0x3a,  /* [1004] */
    (xdc_Char)0x20,  /* [1005] */
    (xdc_Char)0x62,  /* [1006] */
    (xdc_Char)0x61,  /* [1007] */
    (xdc_Char)0x64,  /* [1008] */
    (xdc_Char)0x20,  /* [1009] */
    (xdc_Char)0x63,  /* [1010] */
    (xdc_Char)0x61,  /* [1011] */
    (xdc_Char)0x6c,  /* [1012] */
    (xdc_Char)0x6c,  /* [1013] */
    (xdc_Char)0x69,  /* [1014] */
    (xdc_Char)0x6e,  /* [1015] */
    (xdc_Char)0x67,  /* [1016] */
    (xdc_Char)0x20,  /* [1017] */
    (xdc_Char)0x63,  /* [1018] */
    (xdc_Char)0x6f,  /* [1019] */
    (xdc_Char)0x6e,  /* [1020] */
    (xdc_Char)0x74,  /* [1021] */
    (xdc_Char)0x65,  /* [1022] */
    (xdc_Char)0x78,  /* [1023] */
    (xdc_Char)0x74,  /* [1024] */
    (xdc_Char)0x2e,  /* [1025] */
    (xdc_Char)0x20,  /* [1026] */
    (xdc_Char)0x4d,  /* [1027] */
    (xdc_Char)0x75,  /* [1028] */
    (xdc_Char)0x73,  /* [1029] */
    (xdc_Char)0x74,  /* [1030] */
    (xdc_Char)0x20,  /* [1031] */
    (xdc_Char)0x62,  /* [1032] */
    (xdc_Char)0x65,  /* [1033] */
    (xdc_Char)0x20,  /* [1034] */
    (xdc_Char)0x63,  /* [1035] */
    (xdc_Char)0x61,  /* [1036] */
    (xdc_Char)0x6c,  /* [1037] */
    (xdc_Char)0x6c,  /* [1038] */
    (xdc_Char)0x65,  /* [1039] */
    (xdc_Char)0x64,  /* [1040] */
    (xdc_Char)0x20,  /* [1041] */
    (xdc_Char)0x66,  /* [1042] */
    (xdc_Char)0x72,  /* [1043] */
    (xdc_Char)0x6f,  /* [1044] */
    (xdc_Char)0x6d,  /* [1045] */
    (xdc_Char)0x20,  /* [1046] */
    (xdc_Char)0x61,  /* [1047] */
    (xdc_Char)0x20,  /* [1048] */
    (xdc_Char)0x54,  /* [1049] */
    (xdc_Char)0x61,  /* [1050] */
    (xdc_Char)0x73,  /* [1051] */
    (xdc_Char)0x6b,  /* [1052] */
    (xdc_Char)0x2e,  /* [1053] */
    (xdc_Char)0x0,  /* [1054] */
    (xdc_Char)0x41,  /* [1055] */
    (xdc_Char)0x5f,  /* [1056] */
    (xdc_Char)0x70,  /* [1057] */
    (xdc_Char)0x65,  /* [1058] */
    (xdc_Char)0x6e,  /* [1059] */
    (xdc_Char)0x64,  /* [1060] */
    (xdc_Char)0x54,  /* [1061] */
    (xdc_Char)0x61,  /* [1062] */
    (xdc_Char)0x73,  /* [1063] */
    (xdc_Char)0x6b,  /* [1064] */
    (xdc_Char)0x44,  /* [1065] */
    (xdc_Char)0x69,  /* [1066] */
    (xdc_Char)0x73,  /* [1067] */
    (xdc_Char)0x61,  /* [1068] */
    (xdc_Char)0x62,  /* [1069] */
    (xdc_Char)0x6c,  /* [1070] */
    (xdc_Char)0x65,  /* [1071] */
    (xdc_Char)0x64,  /* [1072] */
    (xdc_Char)0x3a,  /* [1073] */
    (xdc_Char)0x20,  /* [1074] */
    (xdc_Char)0x43,  /* [1075] */
    (xdc_Char)0x61,  /* [1076] */
    (xdc_Char)0x6e,  /* [1077] */
    (xdc_Char)0x6e,  /* [1078] */
    (xdc_Char)0x6f,  /* [1079] */
    (xdc_Char)0x74,  /* [1080] */
    (xdc_Char)0x20,  /* [1081] */
    (xdc_Char)0x63,  /* [1082] */
    (xdc_Char)0x61,  /* [1083] */
    (xdc_Char)0x6c,  /* [1084] */
    (xdc_Char)0x6c,  /* [1085] */
    (xdc_Char)0x20,  /* [1086] */
    (xdc_Char)0x45,  /* [1087] */
    (xdc_Char)0x76,  /* [1088] */
    (xdc_Char)0x65,  /* [1089] */
    (xdc_Char)0x6e,  /* [1090] */
    (xdc_Char)0x74,  /* [1091] */
    (xdc_Char)0x5f,  /* [1092] */
    (xdc_Char)0x70,  /* [1093] */
    (xdc_Char)0x65,  /* [1094] */
    (xdc_Char)0x6e,  /* [1095] */
    (xdc_Char)0x64,  /* [1096] */
    (xdc_Char)0x28,  /* [1097] */
    (xdc_Char)0x29,  /* [1098] */
    (xdc_Char)0x20,  /* [1099] */
    (xdc_Char)0x77,  /* [1100] */
    (xdc_Char)0x68,  /* [1101] */
    (xdc_Char)0x69,  /* [1102] */
    (xdc_Char)0x6c,  /* [1103] */
    (xdc_Char)0x65,  /* [1104] */
    (xdc_Char)0x20,  /* [1105] */
    (xdc_Char)0x74,  /* [1106] */
    (xdc_Char)0x68,  /* [1107] */
    (xdc_Char)0x65,  /* [1108] */
    (xdc_Char)0x20,  /* [1109] */
    (xdc_Char)0x54,  /* [1110] */
    (xdc_Char)0x61,  /* [1111] */
    (xdc_Char)0x73,  /* [1112] */
    (xdc_Char)0x6b,  /* [1113] */
    (xdc_Char)0x20,  /* [1114] */
    (xdc_Char)0x6f,  /* [1115] */
    (xdc_Char)0x72,  /* [1116] */
    (xdc_Char)0x20,  /* [1117] */
    (xdc_Char)0x53,  /* [1118] */
    (xdc_Char)0x77,  /* [1119] */
    (xdc_Char)0x69,  /* [1120] */
    (xdc_Char)0x20,  /* [1121] */
    (xdc_Char)0x73,  /* [1122] */
    (xdc_Char)0x63,  /* [1123] */
    (xdc_Char)0x68,  /* [1124] */
    (xdc_Char)0x65,  /* [1125] */
    (xdc_Char)0x64,  /* [1126] */
    (xdc_Char)0x75,  /* [1127] */
    (xdc_Char)0x6c,  /* [1128] */
    (xdc_Char)0x65,  /* [1129] */
    (xdc_Char)0x72,  /* [1130] */
    (xdc_Char)0x20,  /* [1131] */
    (xdc_Char)0x69,  /* [1132] */
    (xdc_Char)0x73,  /* [1133] */
    (xdc_Char)0x20,  /* [1134] */
    (xdc_Char)0x64,  /* [1135] */
    (xdc_Char)0x69,  /* [1136] */
    (xdc_Char)0x73,  /* [1137] */
    (xdc_Char)0x61,  /* [1138] */
    (xdc_Char)0x62,  /* [1139] */
    (xdc_Char)0x6c,  /* [1140] */
    (xdc_Char)0x65,  /* [1141] */
    (xdc_Char)0x64,  /* [1142] */
    (xdc_Char)0x2e,  /* [1143] */
    (xdc_Char)0x0,  /* [1144] */
    (xdc_Char)0x4d,  /* [1145] */
    (xdc_Char)0x61,  /* [1146] */
    (xdc_Char)0x69,  /* [1147] */
    (xdc_Char)0x6c,  /* [1148] */
    (xdc_Char)0x62,  /* [1149] */
    (xdc_Char)0x6f,  /* [1150] */
    (xdc_Char)0x78,  /* [1151] */
    (xdc_Char)0x5f,  /* [1152] */
    (xdc_Char)0x63,  /* [1153] */
    (xdc_Char)0x72,  /* [1154] */
    (xdc_Char)0x65,  /* [1155] */
    (xdc_Char)0x61,  /* [1156] */
    (xdc_Char)0x74,  /* [1157] */
    (xdc_Char)0x65,  /* [1158] */
    (xdc_Char)0x27,  /* [1159] */
    (xdc_Char)0x73,  /* [1160] */
    (xdc_Char)0x20,  /* [1161] */
    (xdc_Char)0x62,  /* [1162] */
    (xdc_Char)0x75,  /* [1163] */
    (xdc_Char)0x66,  /* [1164] */
    (xdc_Char)0x53,  /* [1165] */
    (xdc_Char)0x69,  /* [1166] */
    (xdc_Char)0x7a,  /* [1167] */
    (xdc_Char)0x65,  /* [1168] */
    (xdc_Char)0x20,  /* [1169] */
    (xdc_Char)0x70,  /* [1170] */
    (xdc_Char)0x61,  /* [1171] */
    (xdc_Char)0x72,  /* [1172] */
    (xdc_Char)0x61,  /* [1173] */
    (xdc_Char)0x6d,  /* [1174] */
    (xdc_Char)0x65,  /* [1175] */
    (xdc_Char)0x74,  /* [1176] */
    (xdc_Char)0x65,  /* [1177] */
    (xdc_Char)0x72,  /* [1178] */
    (xdc_Char)0x20,  /* [1179] */
    (xdc_Char)0x69,  /* [1180] */
    (xdc_Char)0x73,  /* [1181] */
    (xdc_Char)0x20,  /* [1182] */
    (xdc_Char)0x69,  /* [1183] */
    (xdc_Char)0x6e,  /* [1184] */
    (xdc_Char)0x76,  /* [1185] */
    (xdc_Char)0x61,  /* [1186] */
    (xdc_Char)0x6c,  /* [1187] */
    (xdc_Char)0x69,  /* [1188] */
    (xdc_Char)0x64,  /* [1189] */
    (xdc_Char)0x20,  /* [1190] */
    (xdc_Char)0x28,  /* [1191] */
    (xdc_Char)0x74,  /* [1192] */
    (xdc_Char)0x6f,  /* [1193] */
    (xdc_Char)0x6f,  /* [1194] */
    (xdc_Char)0x20,  /* [1195] */
    (xdc_Char)0x73,  /* [1196] */
    (xdc_Char)0x6d,  /* [1197] */
    (xdc_Char)0x61,  /* [1198] */
    (xdc_Char)0x6c,  /* [1199] */
    (xdc_Char)0x6c,  /* [1200] */
    (xdc_Char)0x29,  /* [1201] */
    (xdc_Char)0x0,  /* [1202] */
    (xdc_Char)0x41,  /* [1203] */
    (xdc_Char)0x5f,  /* [1204] */
    (xdc_Char)0x6e,  /* [1205] */
    (xdc_Char)0x6f,  /* [1206] */
    (xdc_Char)0x45,  /* [1207] */
    (xdc_Char)0x76,  /* [1208] */
    (xdc_Char)0x65,  /* [1209] */
    (xdc_Char)0x6e,  /* [1210] */
    (xdc_Char)0x74,  /* [1211] */
    (xdc_Char)0x73,  /* [1212] */
    (xdc_Char)0x3a,  /* [1213] */
    (xdc_Char)0x20,  /* [1214] */
    (xdc_Char)0x54,  /* [1215] */
    (xdc_Char)0x68,  /* [1216] */
    (xdc_Char)0x65,  /* [1217] */
    (xdc_Char)0x20,  /* [1218] */
    (xdc_Char)0x45,  /* [1219] */
    (xdc_Char)0x76,  /* [1220] */
    (xdc_Char)0x65,  /* [1221] */
    (xdc_Char)0x6e,  /* [1222] */
    (xdc_Char)0x74,  /* [1223] */
    (xdc_Char)0x2e,  /* [1224] */
    (xdc_Char)0x73,  /* [1225] */
    (xdc_Char)0x75,  /* [1226] */
    (xdc_Char)0x70,  /* [1227] */
    (xdc_Char)0x70,  /* [1228] */
    (xdc_Char)0x6f,  /* [1229] */
    (xdc_Char)0x72,  /* [1230] */
    (xdc_Char)0x74,  /* [1231] */
    (xdc_Char)0x73,  /* [1232] */
    (xdc_Char)0x45,  /* [1233] */
    (xdc_Char)0x76,  /* [1234] */
    (xdc_Char)0x65,  /* [1235] */
    (xdc_Char)0x6e,  /* [1236] */
    (xdc_Char)0x74,  /* [1237] */
    (xdc_Char)0x73,  /* [1238] */
    (xdc_Char)0x20,  /* [1239] */
    (xdc_Char)0x66,  /* [1240] */
    (xdc_Char)0x6c,  /* [1241] */
    (xdc_Char)0x61,  /* [1242] */
    (xdc_Char)0x67,  /* [1243] */
    (xdc_Char)0x20,  /* [1244] */
    (xdc_Char)0x69,  /* [1245] */
    (xdc_Char)0x73,  /* [1246] */
    (xdc_Char)0x20,  /* [1247] */
    (xdc_Char)0x64,  /* [1248] */
    (xdc_Char)0x69,  /* [1249] */
    (xdc_Char)0x73,  /* [1250] */
    (xdc_Char)0x61,  /* [1251] */
    (xdc_Char)0x62,  /* [1252] */
    (xdc_Char)0x6c,  /* [1253] */
    (xdc_Char)0x65,  /* [1254] */
    (xdc_Char)0x64,  /* [1255] */
    (xdc_Char)0x2e,  /* [1256] */
    (xdc_Char)0x0,  /* [1257] */
    (xdc_Char)0x41,  /* [1258] */
    (xdc_Char)0x5f,  /* [1259] */
    (xdc_Char)0x69,  /* [1260] */
    (xdc_Char)0x6e,  /* [1261] */
    (xdc_Char)0x76,  /* [1262] */
    (xdc_Char)0x54,  /* [1263] */
    (xdc_Char)0x69,  /* [1264] */
    (xdc_Char)0x6d,  /* [1265] */
    (xdc_Char)0x65,  /* [1266] */
    (xdc_Char)0x6f,  /* [1267] */
    (xdc_Char)0x75,  /* [1268] */
    (xdc_Char)0x74,  /* [1269] */
    (xdc_Char)0x3a,  /* [1270] */
    (xdc_Char)0x20,  /* [1271] */
    (xdc_Char)0x43,  /* [1272] */
    (xdc_Char)0x61,  /* [1273] */
    (xdc_Char)0x6e,  /* [1274] */
    (xdc_Char)0x27,  /* [1275] */
    (xdc_Char)0x74,  /* [1276] */
    (xdc_Char)0x20,  /* [1277] */
    (xdc_Char)0x75,  /* [1278] */
    (xdc_Char)0x73,  /* [1279] */
    (xdc_Char)0x65,  /* [1280] */
    (xdc_Char)0x20,  /* [1281] */
    (xdc_Char)0x42,  /* [1282] */
    (xdc_Char)0x49,  /* [1283] */
    (xdc_Char)0x4f,  /* [1284] */
    (xdc_Char)0x53,  /* [1285] */
    (xdc_Char)0x5f,  /* [1286] */
    (xdc_Char)0x45,  /* [1287] */
    (xdc_Char)0x56,  /* [1288] */
    (xdc_Char)0x45,  /* [1289] */
    (xdc_Char)0x4e,  /* [1290] */
    (xdc_Char)0x54,  /* [1291] */
    (xdc_Char)0x5f,  /* [1292] */
    (xdc_Char)0x41,  /* [1293] */
    (xdc_Char)0x43,  /* [1294] */
    (xdc_Char)0x51,  /* [1295] */
    (xdc_Char)0x55,  /* [1296] */
    (xdc_Char)0x49,  /* [1297] */
    (xdc_Char)0x52,  /* [1298] */
    (xdc_Char)0x45,  /* [1299] */
    (xdc_Char)0x44,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x77,  /* [1302] */
    (xdc_Char)0x69,  /* [1303] */
    (xdc_Char)0x74,  /* [1304] */
    (xdc_Char)0x68,  /* [1305] */
    (xdc_Char)0x20,  /* [1306] */
    (xdc_Char)0x74,  /* [1307] */
    (xdc_Char)0x68,  /* [1308] */
    (xdc_Char)0x69,  /* [1309] */
    (xdc_Char)0x73,  /* [1310] */
    (xdc_Char)0x20,  /* [1311] */
    (xdc_Char)0x53,  /* [1312] */
    (xdc_Char)0x65,  /* [1313] */
    (xdc_Char)0x6d,  /* [1314] */
    (xdc_Char)0x61,  /* [1315] */
    (xdc_Char)0x70,  /* [1316] */
    (xdc_Char)0x68,  /* [1317] */
    (xdc_Char)0x6f,  /* [1318] */
    (xdc_Char)0x72,  /* [1319] */
    (xdc_Char)0x65,  /* [1320] */
    (xdc_Char)0x2e,  /* [1321] */
    (xdc_Char)0x0,  /* [1322] */
    (xdc_Char)0x41,  /* [1323] */
    (xdc_Char)0x5f,  /* [1324] */
    (xdc_Char)0x6f,  /* [1325] */
    (xdc_Char)0x76,  /* [1326] */
    (xdc_Char)0x65,  /* [1327] */
    (xdc_Char)0x72,  /* [1328] */
    (xdc_Char)0x66,  /* [1329] */
    (xdc_Char)0x6c,  /* [1330] */
    (xdc_Char)0x6f,  /* [1331] */
    (xdc_Char)0x77,  /* [1332] */
    (xdc_Char)0x3a,  /* [1333] */
    (xdc_Char)0x20,  /* [1334] */
    (xdc_Char)0x43,  /* [1335] */
    (xdc_Char)0x6f,  /* [1336] */
    (xdc_Char)0x75,  /* [1337] */
    (xdc_Char)0x6e,  /* [1338] */
    (xdc_Char)0x74,  /* [1339] */
    (xdc_Char)0x20,  /* [1340] */
    (xdc_Char)0x68,  /* [1341] */
    (xdc_Char)0x61,  /* [1342] */
    (xdc_Char)0x73,  /* [1343] */
    (xdc_Char)0x20,  /* [1344] */
    (xdc_Char)0x65,  /* [1345] */
    (xdc_Char)0x78,  /* [1346] */
    (xdc_Char)0x63,  /* [1347] */
    (xdc_Char)0x65,  /* [1348] */
    (xdc_Char)0x65,  /* [1349] */
    (xdc_Char)0x64,  /* [1350] */
    (xdc_Char)0x65,  /* [1351] */
    (xdc_Char)0x64,  /* [1352] */
    (xdc_Char)0x20,  /* [1353] */
    (xdc_Char)0x36,  /* [1354] */
    (xdc_Char)0x35,  /* [1355] */
    (xdc_Char)0x35,  /* [1356] */
    (xdc_Char)0x33,  /* [1357] */
    (xdc_Char)0x35,  /* [1358] */
    (xdc_Char)0x20,  /* [1359] */
    (xdc_Char)0x61,  /* [1360] */
    (xdc_Char)0x6e,  /* [1361] */
    (xdc_Char)0x64,  /* [1362] */
    (xdc_Char)0x20,  /* [1363] */
    (xdc_Char)0x72,  /* [1364] */
    (xdc_Char)0x6f,  /* [1365] */
    (xdc_Char)0x6c,  /* [1366] */
    (xdc_Char)0x6c,  /* [1367] */
    (xdc_Char)0x65,  /* [1368] */
    (xdc_Char)0x64,  /* [1369] */
    (xdc_Char)0x20,  /* [1370] */
    (xdc_Char)0x6f,  /* [1371] */
    (xdc_Char)0x76,  /* [1372] */
    (xdc_Char)0x65,  /* [1373] */
    (xdc_Char)0x72,  /* [1374] */
    (xdc_Char)0x2e,  /* [1375] */
    (xdc_Char)0x0,  /* [1376] */
    (xdc_Char)0x41,  /* [1377] */
    (xdc_Char)0x5f,  /* [1378] */
    (xdc_Char)0x70,  /* [1379] */
    (xdc_Char)0x65,  /* [1380] */
    (xdc_Char)0x6e,  /* [1381] */
    (xdc_Char)0x64,  /* [1382] */
    (xdc_Char)0x54,  /* [1383] */
    (xdc_Char)0x61,  /* [1384] */
    (xdc_Char)0x73,  /* [1385] */
    (xdc_Char)0x6b,  /* [1386] */
    (xdc_Char)0x44,  /* [1387] */
    (xdc_Char)0x69,  /* [1388] */
    (xdc_Char)0x73,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x62,  /* [1391] */
    (xdc_Char)0x6c,  /* [1392] */
    (xdc_Char)0x65,  /* [1393] */
    (xdc_Char)0x64,  /* [1394] */
    (xdc_Char)0x3a,  /* [1395] */
    (xdc_Char)0x20,  /* [1396] */
    (xdc_Char)0x43,  /* [1397] */
    (xdc_Char)0x61,  /* [1398] */
    (xdc_Char)0x6e,  /* [1399] */
    (xdc_Char)0x6e,  /* [1400] */
    (xdc_Char)0x6f,  /* [1401] */
    (xdc_Char)0x74,  /* [1402] */
    (xdc_Char)0x20,  /* [1403] */
    (xdc_Char)0x63,  /* [1404] */
    (xdc_Char)0x61,  /* [1405] */
    (xdc_Char)0x6c,  /* [1406] */
    (xdc_Char)0x6c,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x53,  /* [1409] */
    (xdc_Char)0x65,  /* [1410] */
    (xdc_Char)0x6d,  /* [1411] */
    (xdc_Char)0x61,  /* [1412] */
    (xdc_Char)0x70,  /* [1413] */
    (xdc_Char)0x68,  /* [1414] */
    (xdc_Char)0x6f,  /* [1415] */
    (xdc_Char)0x72,  /* [1416] */
    (xdc_Char)0x65,  /* [1417] */
    (xdc_Char)0x5f,  /* [1418] */
    (xdc_Char)0x70,  /* [1419] */
    (xdc_Char)0x65,  /* [1420] */
    (xdc_Char)0x6e,  /* [1421] */
    (xdc_Char)0x64,  /* [1422] */
    (xdc_Char)0x28,  /* [1423] */
    (xdc_Char)0x29,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x77,  /* [1426] */
    (xdc_Char)0x68,  /* [1427] */
    (xdc_Char)0x69,  /* [1428] */
    (xdc_Char)0x6c,  /* [1429] */
    (xdc_Char)0x65,  /* [1430] */
    (xdc_Char)0x20,  /* [1431] */
    (xdc_Char)0x74,  /* [1432] */
    (xdc_Char)0x68,  /* [1433] */
    (xdc_Char)0x65,  /* [1434] */
    (xdc_Char)0x20,  /* [1435] */
    (xdc_Char)0x54,  /* [1436] */
    (xdc_Char)0x61,  /* [1437] */
    (xdc_Char)0x73,  /* [1438] */
    (xdc_Char)0x6b,  /* [1439] */
    (xdc_Char)0x20,  /* [1440] */
    (xdc_Char)0x6f,  /* [1441] */
    (xdc_Char)0x72,  /* [1442] */
    (xdc_Char)0x20,  /* [1443] */
    (xdc_Char)0x53,  /* [1444] */
    (xdc_Char)0x77,  /* [1445] */
    (xdc_Char)0x69,  /* [1446] */
    (xdc_Char)0x20,  /* [1447] */
    (xdc_Char)0x73,  /* [1448] */
    (xdc_Char)0x63,  /* [1449] */
    (xdc_Char)0x68,  /* [1450] */
    (xdc_Char)0x65,  /* [1451] */
    (xdc_Char)0x64,  /* [1452] */
    (xdc_Char)0x75,  /* [1453] */
    (xdc_Char)0x6c,  /* [1454] */
    (xdc_Char)0x65,  /* [1455] */
    (xdc_Char)0x72,  /* [1456] */
    (xdc_Char)0x20,  /* [1457] */
    (xdc_Char)0x69,  /* [1458] */
    (xdc_Char)0x73,  /* [1459] */
    (xdc_Char)0x20,  /* [1460] */
    (xdc_Char)0x64,  /* [1461] */
    (xdc_Char)0x69,  /* [1462] */
    (xdc_Char)0x73,  /* [1463] */
    (xdc_Char)0x61,  /* [1464] */
    (xdc_Char)0x62,  /* [1465] */
    (xdc_Char)0x6c,  /* [1466] */
    (xdc_Char)0x65,  /* [1467] */
    (xdc_Char)0x64,  /* [1468] */
    (xdc_Char)0x2e,  /* [1469] */
    (xdc_Char)0x0,  /* [1470] */
    (xdc_Char)0x41,  /* [1471] */
    (xdc_Char)0x5f,  /* [1472] */
    (xdc_Char)0x73,  /* [1473] */
    (xdc_Char)0x77,  /* [1474] */
    (xdc_Char)0x69,  /* [1475] */
    (xdc_Char)0x44,  /* [1476] */
    (xdc_Char)0x69,  /* [1477] */
    (xdc_Char)0x73,  /* [1478] */
    (xdc_Char)0x61,  /* [1479] */
    (xdc_Char)0x62,  /* [1480] */
    (xdc_Char)0x6c,  /* [1481] */
    (xdc_Char)0x65,  /* [1482] */
    (xdc_Char)0x64,  /* [1483] */
    (xdc_Char)0x3a,  /* [1484] */
    (xdc_Char)0x20,  /* [1485] */
    (xdc_Char)0x43,  /* [1486] */
    (xdc_Char)0x61,  /* [1487] */
    (xdc_Char)0x6e,  /* [1488] */
    (xdc_Char)0x6e,  /* [1489] */
    (xdc_Char)0x6f,  /* [1490] */
    (xdc_Char)0x74,  /* [1491] */
    (xdc_Char)0x20,  /* [1492] */
    (xdc_Char)0x63,  /* [1493] */
    (xdc_Char)0x72,  /* [1494] */
    (xdc_Char)0x65,  /* [1495] */
    (xdc_Char)0x61,  /* [1496] */
    (xdc_Char)0x74,  /* [1497] */
    (xdc_Char)0x65,  /* [1498] */
    (xdc_Char)0x20,  /* [1499] */
    (xdc_Char)0x61,  /* [1500] */
    (xdc_Char)0x20,  /* [1501] */
    (xdc_Char)0x53,  /* [1502] */
    (xdc_Char)0x77,  /* [1503] */
    (xdc_Char)0x69,  /* [1504] */
    (xdc_Char)0x20,  /* [1505] */
    (xdc_Char)0x77,  /* [1506] */
    (xdc_Char)0x68,  /* [1507] */
    (xdc_Char)0x65,  /* [1508] */
    (xdc_Char)0x6e,  /* [1509] */
    (xdc_Char)0x20,  /* [1510] */
    (xdc_Char)0x53,  /* [1511] */
    (xdc_Char)0x77,  /* [1512] */
    (xdc_Char)0x69,  /* [1513] */
    (xdc_Char)0x20,  /* [1514] */
    (xdc_Char)0x69,  /* [1515] */
    (xdc_Char)0x73,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x64,  /* [1518] */
    (xdc_Char)0x69,  /* [1519] */
    (xdc_Char)0x73,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x62,  /* [1522] */
    (xdc_Char)0x6c,  /* [1523] */
    (xdc_Char)0x65,  /* [1524] */
    (xdc_Char)0x64,  /* [1525] */
    (xdc_Char)0x2e,  /* [1526] */
    (xdc_Char)0x0,  /* [1527] */
    (xdc_Char)0x41,  /* [1528] */
    (xdc_Char)0x5f,  /* [1529] */
    (xdc_Char)0x62,  /* [1530] */
    (xdc_Char)0x61,  /* [1531] */
    (xdc_Char)0x64,  /* [1532] */
    (xdc_Char)0x50,  /* [1533] */
    (xdc_Char)0x72,  /* [1534] */
    (xdc_Char)0x69,  /* [1535] */
    (xdc_Char)0x6f,  /* [1536] */
    (xdc_Char)0x72,  /* [1537] */
    (xdc_Char)0x69,  /* [1538] */
    (xdc_Char)0x74,  /* [1539] */
    (xdc_Char)0x79,  /* [1540] */
    (xdc_Char)0x3a,  /* [1541] */
    (xdc_Char)0x20,  /* [1542] */
    (xdc_Char)0x41,  /* [1543] */
    (xdc_Char)0x6e,  /* [1544] */
    (xdc_Char)0x20,  /* [1545] */
    (xdc_Char)0x69,  /* [1546] */
    (xdc_Char)0x6e,  /* [1547] */
    (xdc_Char)0x76,  /* [1548] */
    (xdc_Char)0x61,  /* [1549] */
    (xdc_Char)0x6c,  /* [1550] */
    (xdc_Char)0x69,  /* [1551] */
    (xdc_Char)0x64,  /* [1552] */
    (xdc_Char)0x20,  /* [1553] */
    (xdc_Char)0x53,  /* [1554] */
    (xdc_Char)0x77,  /* [1555] */
    (xdc_Char)0x69,  /* [1556] */
    (xdc_Char)0x20,  /* [1557] */
    (xdc_Char)0x70,  /* [1558] */
    (xdc_Char)0x72,  /* [1559] */
    (xdc_Char)0x69,  /* [1560] */
    (xdc_Char)0x6f,  /* [1561] */
    (xdc_Char)0x72,  /* [1562] */
    (xdc_Char)0x69,  /* [1563] */
    (xdc_Char)0x74,  /* [1564] */
    (xdc_Char)0x79,  /* [1565] */
    (xdc_Char)0x20,  /* [1566] */
    (xdc_Char)0x77,  /* [1567] */
    (xdc_Char)0x61,  /* [1568] */
    (xdc_Char)0x73,  /* [1569] */
    (xdc_Char)0x20,  /* [1570] */
    (xdc_Char)0x75,  /* [1571] */
    (xdc_Char)0x73,  /* [1572] */
    (xdc_Char)0x65,  /* [1573] */
    (xdc_Char)0x64,  /* [1574] */
    (xdc_Char)0x2e,  /* [1575] */
    (xdc_Char)0x0,  /* [1576] */
    (xdc_Char)0x41,  /* [1577] */
    (xdc_Char)0x5f,  /* [1578] */
    (xdc_Char)0x62,  /* [1579] */
    (xdc_Char)0x61,  /* [1580] */
    (xdc_Char)0x64,  /* [1581] */
    (xdc_Char)0x54,  /* [1582] */
    (xdc_Char)0x68,  /* [1583] */
    (xdc_Char)0x72,  /* [1584] */
    (xdc_Char)0x65,  /* [1585] */
    (xdc_Char)0x61,  /* [1586] */
    (xdc_Char)0x64,  /* [1587] */
    (xdc_Char)0x54,  /* [1588] */
    (xdc_Char)0x79,  /* [1589] */
    (xdc_Char)0x70,  /* [1590] */
    (xdc_Char)0x65,  /* [1591] */
    (xdc_Char)0x3a,  /* [1592] */
    (xdc_Char)0x20,  /* [1593] */
    (xdc_Char)0x43,  /* [1594] */
    (xdc_Char)0x61,  /* [1595] */
    (xdc_Char)0x6e,  /* [1596] */
    (xdc_Char)0x6e,  /* [1597] */
    (xdc_Char)0x6f,  /* [1598] */
    (xdc_Char)0x74,  /* [1599] */
    (xdc_Char)0x20,  /* [1600] */
    (xdc_Char)0x63,  /* [1601] */
    (xdc_Char)0x72,  /* [1602] */
    (xdc_Char)0x65,  /* [1603] */
    (xdc_Char)0x61,  /* [1604] */
    (xdc_Char)0x74,  /* [1605] */
    (xdc_Char)0x65,  /* [1606] */
    (xdc_Char)0x2f,  /* [1607] */
    (xdc_Char)0x64,  /* [1608] */
    (xdc_Char)0x65,  /* [1609] */
    (xdc_Char)0x6c,  /* [1610] */
    (xdc_Char)0x65,  /* [1611] */
    (xdc_Char)0x74,  /* [1612] */
    (xdc_Char)0x65,  /* [1613] */
    (xdc_Char)0x20,  /* [1614] */
    (xdc_Char)0x61,  /* [1615] */
    (xdc_Char)0x20,  /* [1616] */
    (xdc_Char)0x74,  /* [1617] */
    (xdc_Char)0x61,  /* [1618] */
    (xdc_Char)0x73,  /* [1619] */
    (xdc_Char)0x6b,  /* [1620] */
    (xdc_Char)0x20,  /* [1621] */
    (xdc_Char)0x66,  /* [1622] */
    (xdc_Char)0x72,  /* [1623] */
    (xdc_Char)0x6f,  /* [1624] */
    (xdc_Char)0x6d,  /* [1625] */
    (xdc_Char)0x20,  /* [1626] */
    (xdc_Char)0x48,  /* [1627] */
    (xdc_Char)0x77,  /* [1628] */
    (xdc_Char)0x69,  /* [1629] */
    (xdc_Char)0x20,  /* [1630] */
    (xdc_Char)0x6f,  /* [1631] */
    (xdc_Char)0x72,  /* [1632] */
    (xdc_Char)0x20,  /* [1633] */
    (xdc_Char)0x53,  /* [1634] */
    (xdc_Char)0x77,  /* [1635] */
    (xdc_Char)0x69,  /* [1636] */
    (xdc_Char)0x20,  /* [1637] */
    (xdc_Char)0x74,  /* [1638] */
    (xdc_Char)0x68,  /* [1639] */
    (xdc_Char)0x72,  /* [1640] */
    (xdc_Char)0x65,  /* [1641] */
    (xdc_Char)0x61,  /* [1642] */
    (xdc_Char)0x64,  /* [1643] */
    (xdc_Char)0x2e,  /* [1644] */
    (xdc_Char)0x0,  /* [1645] */
    (xdc_Char)0x41,  /* [1646] */
    (xdc_Char)0x5f,  /* [1647] */
    (xdc_Char)0x62,  /* [1648] */
    (xdc_Char)0x61,  /* [1649] */
    (xdc_Char)0x64,  /* [1650] */
    (xdc_Char)0x54,  /* [1651] */
    (xdc_Char)0x61,  /* [1652] */
    (xdc_Char)0x73,  /* [1653] */
    (xdc_Char)0x6b,  /* [1654] */
    (xdc_Char)0x53,  /* [1655] */
    (xdc_Char)0x74,  /* [1656] */
    (xdc_Char)0x61,  /* [1657] */
    (xdc_Char)0x74,  /* [1658] */
    (xdc_Char)0x65,  /* [1659] */
    (xdc_Char)0x3a,  /* [1660] */
    (xdc_Char)0x20,  /* [1661] */
    (xdc_Char)0x43,  /* [1662] */
    (xdc_Char)0x61,  /* [1663] */
    (xdc_Char)0x6e,  /* [1664] */
    (xdc_Char)0x27,  /* [1665] */
    (xdc_Char)0x74,  /* [1666] */
    (xdc_Char)0x20,  /* [1667] */
    (xdc_Char)0x64,  /* [1668] */
    (xdc_Char)0x65,  /* [1669] */
    (xdc_Char)0x6c,  /* [1670] */
    (xdc_Char)0x65,  /* [1671] */
    (xdc_Char)0x74,  /* [1672] */
    (xdc_Char)0x65,  /* [1673] */
    (xdc_Char)0x20,  /* [1674] */
    (xdc_Char)0x61,  /* [1675] */
    (xdc_Char)0x20,  /* [1676] */
    (xdc_Char)0x74,  /* [1677] */
    (xdc_Char)0x61,  /* [1678] */
    (xdc_Char)0x73,  /* [1679] */
    (xdc_Char)0x6b,  /* [1680] */
    (xdc_Char)0x20,  /* [1681] */
    (xdc_Char)0x69,  /* [1682] */
    (xdc_Char)0x6e,  /* [1683] */
    (xdc_Char)0x20,  /* [1684] */
    (xdc_Char)0x52,  /* [1685] */
    (xdc_Char)0x55,  /* [1686] */
    (xdc_Char)0x4e,  /* [1687] */
    (xdc_Char)0x4e,  /* [1688] */
    (xdc_Char)0x49,  /* [1689] */
    (xdc_Char)0x4e,  /* [1690] */
    (xdc_Char)0x47,  /* [1691] */
    (xdc_Char)0x20,  /* [1692] */
    (xdc_Char)0x73,  /* [1693] */
    (xdc_Char)0x74,  /* [1694] */
    (xdc_Char)0x61,  /* [1695] */
    (xdc_Char)0x74,  /* [1696] */
    (xdc_Char)0x65,  /* [1697] */
    (xdc_Char)0x2e,  /* [1698] */
    (xdc_Char)0x0,  /* [1699] */
    (xdc_Char)0x41,  /* [1700] */
    (xdc_Char)0x5f,  /* [1701] */
    (xdc_Char)0x6e,  /* [1702] */
    (xdc_Char)0x6f,  /* [1703] */
    (xdc_Char)0x50,  /* [1704] */
    (xdc_Char)0x65,  /* [1705] */
    (xdc_Char)0x6e,  /* [1706] */
    (xdc_Char)0x64,  /* [1707] */
    (xdc_Char)0x45,  /* [1708] */
    (xdc_Char)0x6c,  /* [1709] */
    (xdc_Char)0x65,  /* [1710] */
    (xdc_Char)0x6d,  /* [1711] */
    (xdc_Char)0x3a,  /* [1712] */
    (xdc_Char)0x20,  /* [1713] */
    (xdc_Char)0x4e,  /* [1714] */
    (xdc_Char)0x6f,  /* [1715] */
    (xdc_Char)0x74,  /* [1716] */
    (xdc_Char)0x20,  /* [1717] */
    (xdc_Char)0x65,  /* [1718] */
    (xdc_Char)0x6e,  /* [1719] */
    (xdc_Char)0x6f,  /* [1720] */
    (xdc_Char)0x75,  /* [1721] */
    (xdc_Char)0x67,  /* [1722] */
    (xdc_Char)0x68,  /* [1723] */
    (xdc_Char)0x20,  /* [1724] */
    (xdc_Char)0x69,  /* [1725] */
    (xdc_Char)0x6e,  /* [1726] */
    (xdc_Char)0x66,  /* [1727] */
    (xdc_Char)0x6f,  /* [1728] */
    (xdc_Char)0x20,  /* [1729] */
    (xdc_Char)0x74,  /* [1730] */
    (xdc_Char)0x6f,  /* [1731] */
    (xdc_Char)0x20,  /* [1732] */
    (xdc_Char)0x64,  /* [1733] */
    (xdc_Char)0x65,  /* [1734] */
    (xdc_Char)0x6c,  /* [1735] */
    (xdc_Char)0x65,  /* [1736] */
    (xdc_Char)0x74,  /* [1737] */
    (xdc_Char)0x65,  /* [1738] */
    (xdc_Char)0x20,  /* [1739] */
    (xdc_Char)0x42,  /* [1740] */
    (xdc_Char)0x4c,  /* [1741] */
    (xdc_Char)0x4f,  /* [1742] */
    (xdc_Char)0x43,  /* [1743] */
    (xdc_Char)0x4b,  /* [1744] */
    (xdc_Char)0x45,  /* [1745] */
    (xdc_Char)0x44,  /* [1746] */
    (xdc_Char)0x20,  /* [1747] */
    (xdc_Char)0x74,  /* [1748] */
    (xdc_Char)0x61,  /* [1749] */
    (xdc_Char)0x73,  /* [1750] */
    (xdc_Char)0x6b,  /* [1751] */
    (xdc_Char)0x2e,  /* [1752] */
    (xdc_Char)0x0,  /* [1753] */
    (xdc_Char)0x41,  /* [1754] */
    (xdc_Char)0x5f,  /* [1755] */
    (xdc_Char)0x74,  /* [1756] */
    (xdc_Char)0x61,  /* [1757] */
    (xdc_Char)0x73,  /* [1758] */
    (xdc_Char)0x6b,  /* [1759] */
    (xdc_Char)0x44,  /* [1760] */
    (xdc_Char)0x69,  /* [1761] */
    (xdc_Char)0x73,  /* [1762] */
    (xdc_Char)0x61,  /* [1763] */
    (xdc_Char)0x62,  /* [1764] */
    (xdc_Char)0x6c,  /* [1765] */
    (xdc_Char)0x65,  /* [1766] */
    (xdc_Char)0x64,  /* [1767] */
    (xdc_Char)0x3a,  /* [1768] */
    (xdc_Char)0x20,  /* [1769] */
    (xdc_Char)0x43,  /* [1770] */
    (xdc_Char)0x61,  /* [1771] */
    (xdc_Char)0x6e,  /* [1772] */
    (xdc_Char)0x6e,  /* [1773] */
    (xdc_Char)0x6f,  /* [1774] */
    (xdc_Char)0x74,  /* [1775] */
    (xdc_Char)0x20,  /* [1776] */
    (xdc_Char)0x63,  /* [1777] */
    (xdc_Char)0x72,  /* [1778] */
    (xdc_Char)0x65,  /* [1779] */
    (xdc_Char)0x61,  /* [1780] */
    (xdc_Char)0x74,  /* [1781] */
    (xdc_Char)0x65,  /* [1782] */
    (xdc_Char)0x20,  /* [1783] */
    (xdc_Char)0x61,  /* [1784] */
    (xdc_Char)0x20,  /* [1785] */
    (xdc_Char)0x74,  /* [1786] */
    (xdc_Char)0x61,  /* [1787] */
    (xdc_Char)0x73,  /* [1788] */
    (xdc_Char)0x6b,  /* [1789] */
    (xdc_Char)0x20,  /* [1790] */
    (xdc_Char)0x77,  /* [1791] */
    (xdc_Char)0x68,  /* [1792] */
    (xdc_Char)0x65,  /* [1793] */
    (xdc_Char)0x6e,  /* [1794] */
    (xdc_Char)0x20,  /* [1795] */
    (xdc_Char)0x74,  /* [1796] */
    (xdc_Char)0x61,  /* [1797] */
    (xdc_Char)0x73,  /* [1798] */
    (xdc_Char)0x6b,  /* [1799] */
    (xdc_Char)0x69,  /* [1800] */
    (xdc_Char)0x6e,  /* [1801] */
    (xdc_Char)0x67,  /* [1802] */
    (xdc_Char)0x20,  /* [1803] */
    (xdc_Char)0x69,  /* [1804] */
    (xdc_Char)0x73,  /* [1805] */
    (xdc_Char)0x20,  /* [1806] */
    (xdc_Char)0x64,  /* [1807] */
    (xdc_Char)0x69,  /* [1808] */
    (xdc_Char)0x73,  /* [1809] */
    (xdc_Char)0x61,  /* [1810] */
    (xdc_Char)0x62,  /* [1811] */
    (xdc_Char)0x6c,  /* [1812] */
    (xdc_Char)0x65,  /* [1813] */
    (xdc_Char)0x64,  /* [1814] */
    (xdc_Char)0x2e,  /* [1815] */
    (xdc_Char)0x0,  /* [1816] */
    (xdc_Char)0x41,  /* [1817] */
    (xdc_Char)0x5f,  /* [1818] */
    (xdc_Char)0x62,  /* [1819] */
    (xdc_Char)0x61,  /* [1820] */
    (xdc_Char)0x64,  /* [1821] */
    (xdc_Char)0x50,  /* [1822] */
    (xdc_Char)0x72,  /* [1823] */
    (xdc_Char)0x69,  /* [1824] */
    (xdc_Char)0x6f,  /* [1825] */
    (xdc_Char)0x72,  /* [1826] */
    (xdc_Char)0x69,  /* [1827] */
    (xdc_Char)0x74,  /* [1828] */
    (xdc_Char)0x79,  /* [1829] */
    (xdc_Char)0x3a,  /* [1830] */
    (xdc_Char)0x20,  /* [1831] */
    (xdc_Char)0x41,  /* [1832] */
    (xdc_Char)0x6e,  /* [1833] */
    (xdc_Char)0x20,  /* [1834] */
    (xdc_Char)0x69,  /* [1835] */
    (xdc_Char)0x6e,  /* [1836] */
    (xdc_Char)0x76,  /* [1837] */
    (xdc_Char)0x61,  /* [1838] */
    (xdc_Char)0x6c,  /* [1839] */
    (xdc_Char)0x69,  /* [1840] */
    (xdc_Char)0x64,  /* [1841] */
    (xdc_Char)0x20,  /* [1842] */
    (xdc_Char)0x74,  /* [1843] */
    (xdc_Char)0x61,  /* [1844] */
    (xdc_Char)0x73,  /* [1845] */
    (xdc_Char)0x6b,  /* [1846] */
    (xdc_Char)0x20,  /* [1847] */
    (xdc_Char)0x70,  /* [1848] */
    (xdc_Char)0x72,  /* [1849] */
    (xdc_Char)0x69,  /* [1850] */
    (xdc_Char)0x6f,  /* [1851] */
    (xdc_Char)0x72,  /* [1852] */
    (xdc_Char)0x69,  /* [1853] */
    (xdc_Char)0x74,  /* [1854] */
    (xdc_Char)0x79,  /* [1855] */
    (xdc_Char)0x20,  /* [1856] */
    (xdc_Char)0x77,  /* [1857] */
    (xdc_Char)0x61,  /* [1858] */
    (xdc_Char)0x73,  /* [1859] */
    (xdc_Char)0x20,  /* [1860] */
    (xdc_Char)0x75,  /* [1861] */
    (xdc_Char)0x73,  /* [1862] */
    (xdc_Char)0x65,  /* [1863] */
    (xdc_Char)0x64,  /* [1864] */
    (xdc_Char)0x2e,  /* [1865] */
    (xdc_Char)0x0,  /* [1866] */
    (xdc_Char)0x41,  /* [1867] */
    (xdc_Char)0x5f,  /* [1868] */
    (xdc_Char)0x62,  /* [1869] */
    (xdc_Char)0x61,  /* [1870] */
    (xdc_Char)0x64,  /* [1871] */
    (xdc_Char)0x54,  /* [1872] */
    (xdc_Char)0x69,  /* [1873] */
    (xdc_Char)0x6d,  /* [1874] */
    (xdc_Char)0x65,  /* [1875] */
    (xdc_Char)0x6f,  /* [1876] */
    (xdc_Char)0x75,  /* [1877] */
    (xdc_Char)0x74,  /* [1878] */
    (xdc_Char)0x3a,  /* [1879] */
    (xdc_Char)0x20,  /* [1880] */
    (xdc_Char)0x43,  /* [1881] */
    (xdc_Char)0x61,  /* [1882] */
    (xdc_Char)0x6e,  /* [1883] */
    (xdc_Char)0x27,  /* [1884] */
    (xdc_Char)0x74,  /* [1885] */
    (xdc_Char)0x20,  /* [1886] */
    (xdc_Char)0x73,  /* [1887] */
    (xdc_Char)0x6c,  /* [1888] */
    (xdc_Char)0x65,  /* [1889] */
    (xdc_Char)0x65,  /* [1890] */
    (xdc_Char)0x70,  /* [1891] */
    (xdc_Char)0x20,  /* [1892] */
    (xdc_Char)0x46,  /* [1893] */
    (xdc_Char)0x4f,  /* [1894] */
    (xdc_Char)0x52,  /* [1895] */
    (xdc_Char)0x45,  /* [1896] */
    (xdc_Char)0x56,  /* [1897] */
    (xdc_Char)0x45,  /* [1898] */
    (xdc_Char)0x52,  /* [1899] */
    (xdc_Char)0x2e,  /* [1900] */
    (xdc_Char)0x0,  /* [1901] */
    (xdc_Char)0x41,  /* [1902] */
    (xdc_Char)0x5f,  /* [1903] */
    (xdc_Char)0x62,  /* [1904] */
    (xdc_Char)0x61,  /* [1905] */
    (xdc_Char)0x64,  /* [1906] */
    (xdc_Char)0x41,  /* [1907] */
    (xdc_Char)0x66,  /* [1908] */
    (xdc_Char)0x66,  /* [1909] */
    (xdc_Char)0x69,  /* [1910] */
    (xdc_Char)0x6e,  /* [1911] */
    (xdc_Char)0x69,  /* [1912] */
    (xdc_Char)0x74,  /* [1913] */
    (xdc_Char)0x79,  /* [1914] */
    (xdc_Char)0x3a,  /* [1915] */
    (xdc_Char)0x20,  /* [1916] */
    (xdc_Char)0x49,  /* [1917] */
    (xdc_Char)0x6e,  /* [1918] */
    (xdc_Char)0x76,  /* [1919] */
    (xdc_Char)0x61,  /* [1920] */
    (xdc_Char)0x6c,  /* [1921] */
    (xdc_Char)0x69,  /* [1922] */
    (xdc_Char)0x64,  /* [1923] */
    (xdc_Char)0x20,  /* [1924] */
    (xdc_Char)0x61,  /* [1925] */
    (xdc_Char)0x66,  /* [1926] */
    (xdc_Char)0x66,  /* [1927] */
    (xdc_Char)0x69,  /* [1928] */
    (xdc_Char)0x6e,  /* [1929] */
    (xdc_Char)0x69,  /* [1930] */
    (xdc_Char)0x74,  /* [1931] */
    (xdc_Char)0x79,  /* [1932] */
    (xdc_Char)0x2e,  /* [1933] */
    (xdc_Char)0x0,  /* [1934] */
    (xdc_Char)0x41,  /* [1935] */
    (xdc_Char)0x5f,  /* [1936] */
    (xdc_Char)0x73,  /* [1937] */
    (xdc_Char)0x6c,  /* [1938] */
    (xdc_Char)0x65,  /* [1939] */
    (xdc_Char)0x65,  /* [1940] */
    (xdc_Char)0x70,  /* [1941] */
    (xdc_Char)0x54,  /* [1942] */
    (xdc_Char)0x61,  /* [1943] */
    (xdc_Char)0x73,  /* [1944] */
    (xdc_Char)0x6b,  /* [1945] */
    (xdc_Char)0x44,  /* [1946] */
    (xdc_Char)0x69,  /* [1947] */
    (xdc_Char)0x73,  /* [1948] */
    (xdc_Char)0x61,  /* [1949] */
    (xdc_Char)0x62,  /* [1950] */
    (xdc_Char)0x6c,  /* [1951] */
    (xdc_Char)0x65,  /* [1952] */
    (xdc_Char)0x64,  /* [1953] */
    (xdc_Char)0x3a,  /* [1954] */
    (xdc_Char)0x20,  /* [1955] */
    (xdc_Char)0x43,  /* [1956] */
    (xdc_Char)0x61,  /* [1957] */
    (xdc_Char)0x6e,  /* [1958] */
    (xdc_Char)0x6e,  /* [1959] */
    (xdc_Char)0x6f,  /* [1960] */
    (xdc_Char)0x74,  /* [1961] */
    (xdc_Char)0x20,  /* [1962] */
    (xdc_Char)0x63,  /* [1963] */
    (xdc_Char)0x61,  /* [1964] */
    (xdc_Char)0x6c,  /* [1965] */
    (xdc_Char)0x6c,  /* [1966] */
    (xdc_Char)0x20,  /* [1967] */
    (xdc_Char)0x54,  /* [1968] */
    (xdc_Char)0x61,  /* [1969] */
    (xdc_Char)0x73,  /* [1970] */
    (xdc_Char)0x6b,  /* [1971] */
    (xdc_Char)0x5f,  /* [1972] */
    (xdc_Char)0x73,  /* [1973] */
    (xdc_Char)0x6c,  /* [1974] */
    (xdc_Char)0x65,  /* [1975] */
    (xdc_Char)0x65,  /* [1976] */
    (xdc_Char)0x70,  /* [1977] */
    (xdc_Char)0x28,  /* [1978] */
    (xdc_Char)0x29,  /* [1979] */
    (xdc_Char)0x20,  /* [1980] */
    (xdc_Char)0x77,  /* [1981] */
    (xdc_Char)0x68,  /* [1982] */
    (xdc_Char)0x69,  /* [1983] */
    (xdc_Char)0x6c,  /* [1984] */
    (xdc_Char)0x65,  /* [1985] */
    (xdc_Char)0x20,  /* [1986] */
    (xdc_Char)0x74,  /* [1987] */
    (xdc_Char)0x68,  /* [1988] */
    (xdc_Char)0x65,  /* [1989] */
    (xdc_Char)0x20,  /* [1990] */
    (xdc_Char)0x54,  /* [1991] */
    (xdc_Char)0x61,  /* [1992] */
    (xdc_Char)0x73,  /* [1993] */
    (xdc_Char)0x6b,  /* [1994] */
    (xdc_Char)0x20,  /* [1995] */
    (xdc_Char)0x73,  /* [1996] */
    (xdc_Char)0x63,  /* [1997] */
    (xdc_Char)0x68,  /* [1998] */
    (xdc_Char)0x65,  /* [1999] */
    (xdc_Char)0x64,  /* [2000] */
    (xdc_Char)0x75,  /* [2001] */
    (xdc_Char)0x6c,  /* [2002] */
    (xdc_Char)0x65,  /* [2003] */
    (xdc_Char)0x72,  /* [2004] */
    (xdc_Char)0x20,  /* [2005] */
    (xdc_Char)0x69,  /* [2006] */
    (xdc_Char)0x73,  /* [2007] */
    (xdc_Char)0x20,  /* [2008] */
    (xdc_Char)0x64,  /* [2009] */
    (xdc_Char)0x69,  /* [2010] */
    (xdc_Char)0x73,  /* [2011] */
    (xdc_Char)0x61,  /* [2012] */
    (xdc_Char)0x62,  /* [2013] */
    (xdc_Char)0x6c,  /* [2014] */
    (xdc_Char)0x65,  /* [2015] */
    (xdc_Char)0x64,  /* [2016] */
    (xdc_Char)0x2e,  /* [2017] */
    (xdc_Char)0x0,  /* [2018] */
    (xdc_Char)0x41,  /* [2019] */
    (xdc_Char)0x5f,  /* [2020] */
    (xdc_Char)0x69,  /* [2021] */
    (xdc_Char)0x6e,  /* [2022] */
    (xdc_Char)0x76,  /* [2023] */
    (xdc_Char)0x61,  /* [2024] */
    (xdc_Char)0x6c,  /* [2025] */
    (xdc_Char)0x69,  /* [2026] */
    (xdc_Char)0x64,  /* [2027] */
    (xdc_Char)0x43,  /* [2028] */
    (xdc_Char)0x6f,  /* [2029] */
    (xdc_Char)0x72,  /* [2030] */
    (xdc_Char)0x65,  /* [2031] */
    (xdc_Char)0x49,  /* [2032] */
    (xdc_Char)0x64,  /* [2033] */
    (xdc_Char)0x3a,  /* [2034] */
    (xdc_Char)0x20,  /* [2035] */
    (xdc_Char)0x43,  /* [2036] */
    (xdc_Char)0x61,  /* [2037] */
    (xdc_Char)0x6e,  /* [2038] */
    (xdc_Char)0x6e,  /* [2039] */
    (xdc_Char)0x6f,  /* [2040] */
    (xdc_Char)0x74,  /* [2041] */
    (xdc_Char)0x20,  /* [2042] */
    (xdc_Char)0x70,  /* [2043] */
    (xdc_Char)0x61,  /* [2044] */
    (xdc_Char)0x73,  /* [2045] */
    (xdc_Char)0x73,  /* [2046] */
    (xdc_Char)0x20,  /* [2047] */
    (xdc_Char)0x61,  /* [2048] */
    (xdc_Char)0x20,  /* [2049] */
    (xdc_Char)0x6e,  /* [2050] */
    (xdc_Char)0x6f,  /* [2051] */
    (xdc_Char)0x6e,  /* [2052] */
    (xdc_Char)0x2d,  /* [2053] */
    (xdc_Char)0x7a,  /* [2054] */
    (xdc_Char)0x65,  /* [2055] */
    (xdc_Char)0x72,  /* [2056] */
    (xdc_Char)0x6f,  /* [2057] */
    (xdc_Char)0x20,  /* [2058] */
    (xdc_Char)0x43,  /* [2059] */
    (xdc_Char)0x6f,  /* [2060] */
    (xdc_Char)0x72,  /* [2061] */
    (xdc_Char)0x65,  /* [2062] */
    (xdc_Char)0x49,  /* [2063] */
    (xdc_Char)0x64,  /* [2064] */
    (xdc_Char)0x20,  /* [2065] */
    (xdc_Char)0x69,  /* [2066] */
    (xdc_Char)0x6e,  /* [2067] */
    (xdc_Char)0x20,  /* [2068] */
    (xdc_Char)0x61,  /* [2069] */
    (xdc_Char)0x20,  /* [2070] */
    (xdc_Char)0x6e,  /* [2071] */
    (xdc_Char)0x6f,  /* [2072] */
    (xdc_Char)0x6e,  /* [2073] */
    (xdc_Char)0x2d,  /* [2074] */
    (xdc_Char)0x53,  /* [2075] */
    (xdc_Char)0x4d,  /* [2076] */
    (xdc_Char)0x50,  /* [2077] */
    (xdc_Char)0x20,  /* [2078] */
    (xdc_Char)0x61,  /* [2079] */
    (xdc_Char)0x70,  /* [2080] */
    (xdc_Char)0x70,  /* [2081] */
    (xdc_Char)0x6c,  /* [2082] */
    (xdc_Char)0x69,  /* [2083] */
    (xdc_Char)0x63,  /* [2084] */
    (xdc_Char)0x61,  /* [2085] */
    (xdc_Char)0x74,  /* [2086] */
    (xdc_Char)0x69,  /* [2087] */
    (xdc_Char)0x6f,  /* [2088] */
    (xdc_Char)0x6e,  /* [2089] */
    (xdc_Char)0x2e,  /* [2090] */
    (xdc_Char)0x0,  /* [2091] */
    (xdc_Char)0x41,  /* [2092] */
    (xdc_Char)0x5f,  /* [2093] */
    (xdc_Char)0x7a,  /* [2094] */
    (xdc_Char)0x65,  /* [2095] */
    (xdc_Char)0x72,  /* [2096] */
    (xdc_Char)0x6f,  /* [2097] */
    (xdc_Char)0x54,  /* [2098] */
    (xdc_Char)0x69,  /* [2099] */
    (xdc_Char)0x6d,  /* [2100] */
    (xdc_Char)0x65,  /* [2101] */
    (xdc_Char)0x6f,  /* [2102] */
    (xdc_Char)0x75,  /* [2103] */
    (xdc_Char)0x74,  /* [2104] */
    (xdc_Char)0x3a,  /* [2105] */
    (xdc_Char)0x20,  /* [2106] */
    (xdc_Char)0x54,  /* [2107] */
    (xdc_Char)0x69,  /* [2108] */
    (xdc_Char)0x6d,  /* [2109] */
    (xdc_Char)0x65,  /* [2110] */
    (xdc_Char)0x6f,  /* [2111] */
    (xdc_Char)0x75,  /* [2112] */
    (xdc_Char)0x74,  /* [2113] */
    (xdc_Char)0x20,  /* [2114] */
    (xdc_Char)0x76,  /* [2115] */
    (xdc_Char)0x61,  /* [2116] */
    (xdc_Char)0x6c,  /* [2117] */
    (xdc_Char)0x75,  /* [2118] */
    (xdc_Char)0x65,  /* [2119] */
    (xdc_Char)0x20,  /* [2120] */
    (xdc_Char)0x61,  /* [2121] */
    (xdc_Char)0x6e,  /* [2122] */
    (xdc_Char)0x6e,  /* [2123] */
    (xdc_Char)0x6f,  /* [2124] */
    (xdc_Char)0x74,  /* [2125] */
    (xdc_Char)0x20,  /* [2126] */
    (xdc_Char)0x62,  /* [2127] */
    (xdc_Char)0x65,  /* [2128] */
    (xdc_Char)0x20,  /* [2129] */
    (xdc_Char)0x7a,  /* [2130] */
    (xdc_Char)0x65,  /* [2131] */
    (xdc_Char)0x72,  /* [2132] */
    (xdc_Char)0x6f,  /* [2133] */
    (xdc_Char)0x0,  /* [2134] */
    (xdc_Char)0x41,  /* [2135] */
    (xdc_Char)0x5f,  /* [2136] */
    (xdc_Char)0x69,  /* [2137] */
    (xdc_Char)0x6e,  /* [2138] */
    (xdc_Char)0x76,  /* [2139] */
    (xdc_Char)0x61,  /* [2140] */
    (xdc_Char)0x6c,  /* [2141] */
    (xdc_Char)0x69,  /* [2142] */
    (xdc_Char)0x64,  /* [2143] */
    (xdc_Char)0x4b,  /* [2144] */
    (xdc_Char)0x65,  /* [2145] */
    (xdc_Char)0x79,  /* [2146] */
    (xdc_Char)0x3a,  /* [2147] */
    (xdc_Char)0x20,  /* [2148] */
    (xdc_Char)0x74,  /* [2149] */
    (xdc_Char)0x68,  /* [2150] */
    (xdc_Char)0x65,  /* [2151] */
    (xdc_Char)0x20,  /* [2152] */
    (xdc_Char)0x6b,  /* [2153] */
    (xdc_Char)0x65,  /* [2154] */
    (xdc_Char)0x79,  /* [2155] */
    (xdc_Char)0x20,  /* [2156] */
    (xdc_Char)0x6d,  /* [2157] */
    (xdc_Char)0x75,  /* [2158] */
    (xdc_Char)0x73,  /* [2159] */
    (xdc_Char)0x74,  /* [2160] */
    (xdc_Char)0x20,  /* [2161] */
    (xdc_Char)0x62,  /* [2162] */
    (xdc_Char)0x65,  /* [2163] */
    (xdc_Char)0x20,  /* [2164] */
    (xdc_Char)0x73,  /* [2165] */
    (xdc_Char)0x65,  /* [2166] */
    (xdc_Char)0x74,  /* [2167] */
    (xdc_Char)0x20,  /* [2168] */
    (xdc_Char)0x74,  /* [2169] */
    (xdc_Char)0x6f,  /* [2170] */
    (xdc_Char)0x20,  /* [2171] */
    (xdc_Char)0x61,  /* [2172] */
    (xdc_Char)0x20,  /* [2173] */
    (xdc_Char)0x6e,  /* [2174] */
    (xdc_Char)0x6f,  /* [2175] */
    (xdc_Char)0x6e,  /* [2176] */
    (xdc_Char)0x2d,  /* [2177] */
    (xdc_Char)0x64,  /* [2178] */
    (xdc_Char)0x65,  /* [2179] */
    (xdc_Char)0x66,  /* [2180] */
    (xdc_Char)0x61,  /* [2181] */
    (xdc_Char)0x75,  /* [2182] */
    (xdc_Char)0x6c,  /* [2183] */
    (xdc_Char)0x74,  /* [2184] */
    (xdc_Char)0x20,  /* [2185] */
    (xdc_Char)0x76,  /* [2186] */
    (xdc_Char)0x61,  /* [2187] */
    (xdc_Char)0x6c,  /* [2188] */
    (xdc_Char)0x75,  /* [2189] */
    (xdc_Char)0x65,  /* [2190] */
    (xdc_Char)0x0,  /* [2191] */
    (xdc_Char)0x41,  /* [2192] */
    (xdc_Char)0x5f,  /* [2193] */
    (xdc_Char)0x62,  /* [2194] */
    (xdc_Char)0x61,  /* [2195] */
    (xdc_Char)0x64,  /* [2196] */
    (xdc_Char)0x43,  /* [2197] */
    (xdc_Char)0x6f,  /* [2198] */
    (xdc_Char)0x6e,  /* [2199] */
    (xdc_Char)0x74,  /* [2200] */
    (xdc_Char)0x65,  /* [2201] */
    (xdc_Char)0x78,  /* [2202] */
    (xdc_Char)0x74,  /* [2203] */
    (xdc_Char)0x3a,  /* [2204] */
    (xdc_Char)0x20,  /* [2205] */
    (xdc_Char)0x62,  /* [2206] */
    (xdc_Char)0x61,  /* [2207] */
    (xdc_Char)0x64,  /* [2208] */
    (xdc_Char)0x20,  /* [2209] */
    (xdc_Char)0x63,  /* [2210] */
    (xdc_Char)0x61,  /* [2211] */
    (xdc_Char)0x6c,  /* [2212] */
    (xdc_Char)0x6c,  /* [2213] */
    (xdc_Char)0x69,  /* [2214] */
    (xdc_Char)0x6e,  /* [2215] */
    (xdc_Char)0x67,  /* [2216] */
    (xdc_Char)0x20,  /* [2217] */
    (xdc_Char)0x63,  /* [2218] */
    (xdc_Char)0x6f,  /* [2219] */
    (xdc_Char)0x6e,  /* [2220] */
    (xdc_Char)0x74,  /* [2221] */
    (xdc_Char)0x65,  /* [2222] */
    (xdc_Char)0x78,  /* [2223] */
    (xdc_Char)0x74,  /* [2224] */
    (xdc_Char)0x2e,  /* [2225] */
    (xdc_Char)0x20,  /* [2226] */
    (xdc_Char)0x4d,  /* [2227] */
    (xdc_Char)0x61,  /* [2228] */
    (xdc_Char)0x79,  /* [2229] */
    (xdc_Char)0x20,  /* [2230] */
    (xdc_Char)0x6e,  /* [2231] */
    (xdc_Char)0x6f,  /* [2232] */
    (xdc_Char)0x74,  /* [2233] */
    (xdc_Char)0x20,  /* [2234] */
    (xdc_Char)0x62,  /* [2235] */
    (xdc_Char)0x65,  /* [2236] */
    (xdc_Char)0x20,  /* [2237] */
    (xdc_Char)0x65,  /* [2238] */
    (xdc_Char)0x6e,  /* [2239] */
    (xdc_Char)0x74,  /* [2240] */
    (xdc_Char)0x65,  /* [2241] */
    (xdc_Char)0x72,  /* [2242] */
    (xdc_Char)0x65,  /* [2243] */
    (xdc_Char)0x64,  /* [2244] */
    (xdc_Char)0x20,  /* [2245] */
    (xdc_Char)0x66,  /* [2246] */
    (xdc_Char)0x72,  /* [2247] */
    (xdc_Char)0x6f,  /* [2248] */
    (xdc_Char)0x6d,  /* [2249] */
    (xdc_Char)0x20,  /* [2250] */
    (xdc_Char)0x61,  /* [2251] */
    (xdc_Char)0x20,  /* [2252] */
    (xdc_Char)0x68,  /* [2253] */
    (xdc_Char)0x61,  /* [2254] */
    (xdc_Char)0x72,  /* [2255] */
    (xdc_Char)0x64,  /* [2256] */
    (xdc_Char)0x77,  /* [2257] */
    (xdc_Char)0x61,  /* [2258] */
    (xdc_Char)0x72,  /* [2259] */
    (xdc_Char)0x65,  /* [2260] */
    (xdc_Char)0x20,  /* [2261] */
    (xdc_Char)0x69,  /* [2262] */
    (xdc_Char)0x6e,  /* [2263] */
    (xdc_Char)0x74,  /* [2264] */
    (xdc_Char)0x65,  /* [2265] */
    (xdc_Char)0x72,  /* [2266] */
    (xdc_Char)0x72,  /* [2267] */
    (xdc_Char)0x75,  /* [2268] */
    (xdc_Char)0x70,  /* [2269] */
    (xdc_Char)0x74,  /* [2270] */
    (xdc_Char)0x20,  /* [2271] */
    (xdc_Char)0x74,  /* [2272] */
    (xdc_Char)0x68,  /* [2273] */
    (xdc_Char)0x72,  /* [2274] */
    (xdc_Char)0x65,  /* [2275] */
    (xdc_Char)0x61,  /* [2276] */
    (xdc_Char)0x64,  /* [2277] */
    (xdc_Char)0x2e,  /* [2278] */
    (xdc_Char)0x0,  /* [2279] */
    (xdc_Char)0x41,  /* [2280] */
    (xdc_Char)0x5f,  /* [2281] */
    (xdc_Char)0x62,  /* [2282] */
    (xdc_Char)0x61,  /* [2283] */
    (xdc_Char)0x64,  /* [2284] */
    (xdc_Char)0x43,  /* [2285] */
    (xdc_Char)0x6f,  /* [2286] */
    (xdc_Char)0x6e,  /* [2287] */
    (xdc_Char)0x74,  /* [2288] */
    (xdc_Char)0x65,  /* [2289] */
    (xdc_Char)0x78,  /* [2290] */
    (xdc_Char)0x74,  /* [2291] */
    (xdc_Char)0x3a,  /* [2292] */
    (xdc_Char)0x20,  /* [2293] */
    (xdc_Char)0x62,  /* [2294] */
    (xdc_Char)0x61,  /* [2295] */
    (xdc_Char)0x64,  /* [2296] */
    (xdc_Char)0x20,  /* [2297] */
    (xdc_Char)0x63,  /* [2298] */
    (xdc_Char)0x61,  /* [2299] */
    (xdc_Char)0x6c,  /* [2300] */
    (xdc_Char)0x6c,  /* [2301] */
    (xdc_Char)0x69,  /* [2302] */
    (xdc_Char)0x6e,  /* [2303] */
    (xdc_Char)0x67,  /* [2304] */
    (xdc_Char)0x20,  /* [2305] */
    (xdc_Char)0x63,  /* [2306] */
    (xdc_Char)0x6f,  /* [2307] */
    (xdc_Char)0x6e,  /* [2308] */
    (xdc_Char)0x74,  /* [2309] */
    (xdc_Char)0x65,  /* [2310] */
    (xdc_Char)0x78,  /* [2311] */
    (xdc_Char)0x74,  /* [2312] */
    (xdc_Char)0x2e,  /* [2313] */
    (xdc_Char)0x20,  /* [2314] */
    (xdc_Char)0x4d,  /* [2315] */
    (xdc_Char)0x61,  /* [2316] */
    (xdc_Char)0x79,  /* [2317] */
    (xdc_Char)0x20,  /* [2318] */
    (xdc_Char)0x6e,  /* [2319] */
    (xdc_Char)0x6f,  /* [2320] */
    (xdc_Char)0x74,  /* [2321] */
    (xdc_Char)0x20,  /* [2322] */
    (xdc_Char)0x62,  /* [2323] */
    (xdc_Char)0x65,  /* [2324] */
    (xdc_Char)0x20,  /* [2325] */
    (xdc_Char)0x65,  /* [2326] */
    (xdc_Char)0x6e,  /* [2327] */
    (xdc_Char)0x74,  /* [2328] */
    (xdc_Char)0x65,  /* [2329] */
    (xdc_Char)0x72,  /* [2330] */
    (xdc_Char)0x65,  /* [2331] */
    (xdc_Char)0x64,  /* [2332] */
    (xdc_Char)0x20,  /* [2333] */
    (xdc_Char)0x66,  /* [2334] */
    (xdc_Char)0x72,  /* [2335] */
    (xdc_Char)0x6f,  /* [2336] */
    (xdc_Char)0x6d,  /* [2337] */
    (xdc_Char)0x20,  /* [2338] */
    (xdc_Char)0x61,  /* [2339] */
    (xdc_Char)0x20,  /* [2340] */
    (xdc_Char)0x73,  /* [2341] */
    (xdc_Char)0x6f,  /* [2342] */
    (xdc_Char)0x66,  /* [2343] */
    (xdc_Char)0x74,  /* [2344] */
    (xdc_Char)0x77,  /* [2345] */
    (xdc_Char)0x61,  /* [2346] */
    (xdc_Char)0x72,  /* [2347] */
    (xdc_Char)0x65,  /* [2348] */
    (xdc_Char)0x20,  /* [2349] */
    (xdc_Char)0x6f,  /* [2350] */
    (xdc_Char)0x72,  /* [2351] */
    (xdc_Char)0x20,  /* [2352] */
    (xdc_Char)0x68,  /* [2353] */
    (xdc_Char)0x61,  /* [2354] */
    (xdc_Char)0x72,  /* [2355] */
    (xdc_Char)0x64,  /* [2356] */
    (xdc_Char)0x77,  /* [2357] */
    (xdc_Char)0x61,  /* [2358] */
    (xdc_Char)0x72,  /* [2359] */
    (xdc_Char)0x65,  /* [2360] */
    (xdc_Char)0x20,  /* [2361] */
    (xdc_Char)0x69,  /* [2362] */
    (xdc_Char)0x6e,  /* [2363] */
    (xdc_Char)0x74,  /* [2364] */
    (xdc_Char)0x65,  /* [2365] */
    (xdc_Char)0x72,  /* [2366] */
    (xdc_Char)0x72,  /* [2367] */
    (xdc_Char)0x75,  /* [2368] */
    (xdc_Char)0x70,  /* [2369] */
    (xdc_Char)0x74,  /* [2370] */
    (xdc_Char)0x20,  /* [2371] */
    (xdc_Char)0x74,  /* [2372] */
    (xdc_Char)0x68,  /* [2373] */
    (xdc_Char)0x72,  /* [2374] */
    (xdc_Char)0x65,  /* [2375] */
    (xdc_Char)0x61,  /* [2376] */
    (xdc_Char)0x64,  /* [2377] */
    (xdc_Char)0x2e,  /* [2378] */
    (xdc_Char)0x0,  /* [2379] */
    (xdc_Char)0x41,  /* [2380] */
    (xdc_Char)0x5f,  /* [2381] */
    (xdc_Char)0x62,  /* [2382] */
    (xdc_Char)0x61,  /* [2383] */
    (xdc_Char)0x64,  /* [2384] */
    (xdc_Char)0x43,  /* [2385] */
    (xdc_Char)0x6f,  /* [2386] */
    (xdc_Char)0x6e,  /* [2387] */
    (xdc_Char)0x74,  /* [2388] */
    (xdc_Char)0x65,  /* [2389] */
    (xdc_Char)0x78,  /* [2390] */
    (xdc_Char)0x74,  /* [2391] */
    (xdc_Char)0x3a,  /* [2392] */
    (xdc_Char)0x20,  /* [2393] */
    (xdc_Char)0x62,  /* [2394] */
    (xdc_Char)0x61,  /* [2395] */
    (xdc_Char)0x64,  /* [2396] */
    (xdc_Char)0x20,  /* [2397] */
    (xdc_Char)0x63,  /* [2398] */
    (xdc_Char)0x61,  /* [2399] */
    (xdc_Char)0x6c,  /* [2400] */
    (xdc_Char)0x6c,  /* [2401] */
    (xdc_Char)0x69,  /* [2402] */
    (xdc_Char)0x6e,  /* [2403] */
    (xdc_Char)0x67,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x63,  /* [2406] */
    (xdc_Char)0x6f,  /* [2407] */
    (xdc_Char)0x6e,  /* [2408] */
    (xdc_Char)0x74,  /* [2409] */
    (xdc_Char)0x65,  /* [2410] */
    (xdc_Char)0x78,  /* [2411] */
    (xdc_Char)0x74,  /* [2412] */
    (xdc_Char)0x2e,  /* [2413] */
    (xdc_Char)0x20,  /* [2414] */
    (xdc_Char)0x53,  /* [2415] */
    (xdc_Char)0x65,  /* [2416] */
    (xdc_Char)0x65,  /* [2417] */
    (xdc_Char)0x20,  /* [2418] */
    (xdc_Char)0x47,  /* [2419] */
    (xdc_Char)0x61,  /* [2420] */
    (xdc_Char)0x74,  /* [2421] */
    (xdc_Char)0x65,  /* [2422] */
    (xdc_Char)0x4d,  /* [2423] */
    (xdc_Char)0x75,  /* [2424] */
    (xdc_Char)0x74,  /* [2425] */
    (xdc_Char)0x65,  /* [2426] */
    (xdc_Char)0x78,  /* [2427] */
    (xdc_Char)0x50,  /* [2428] */
    (xdc_Char)0x72,  /* [2429] */
    (xdc_Char)0x69,  /* [2430] */
    (xdc_Char)0x20,  /* [2431] */
    (xdc_Char)0x41,  /* [2432] */
    (xdc_Char)0x50,  /* [2433] */
    (xdc_Char)0x49,  /* [2434] */
    (xdc_Char)0x20,  /* [2435] */
    (xdc_Char)0x64,  /* [2436] */
    (xdc_Char)0x6f,  /* [2437] */
    (xdc_Char)0x63,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x66,  /* [2440] */
    (xdc_Char)0x6f,  /* [2441] */
    (xdc_Char)0x72,  /* [2442] */
    (xdc_Char)0x20,  /* [2443] */
    (xdc_Char)0x64,  /* [2444] */
    (xdc_Char)0x65,  /* [2445] */
    (xdc_Char)0x74,  /* [2446] */
    (xdc_Char)0x61,  /* [2447] */
    (xdc_Char)0x69,  /* [2448] */
    (xdc_Char)0x6c,  /* [2449] */
    (xdc_Char)0x73,  /* [2450] */
    (xdc_Char)0x2e,  /* [2451] */
    (xdc_Char)0x0,  /* [2452] */
    (xdc_Char)0x41,  /* [2453] */
    (xdc_Char)0x5f,  /* [2454] */
    (xdc_Char)0x65,  /* [2455] */
    (xdc_Char)0x6e,  /* [2456] */
    (xdc_Char)0x74,  /* [2457] */
    (xdc_Char)0x65,  /* [2458] */
    (xdc_Char)0x72,  /* [2459] */
    (xdc_Char)0x54,  /* [2460] */
    (xdc_Char)0x61,  /* [2461] */
    (xdc_Char)0x73,  /* [2462] */
    (xdc_Char)0x6b,  /* [2463] */
    (xdc_Char)0x44,  /* [2464] */
    (xdc_Char)0x69,  /* [2465] */
    (xdc_Char)0x73,  /* [2466] */
    (xdc_Char)0x61,  /* [2467] */
    (xdc_Char)0x62,  /* [2468] */
    (xdc_Char)0x6c,  /* [2469] */
    (xdc_Char)0x65,  /* [2470] */
    (xdc_Char)0x64,  /* [2471] */
    (xdc_Char)0x3a,  /* [2472] */
    (xdc_Char)0x20,  /* [2473] */
    (xdc_Char)0x43,  /* [2474] */
    (xdc_Char)0x61,  /* [2475] */
    (xdc_Char)0x6e,  /* [2476] */
    (xdc_Char)0x6e,  /* [2477] */
    (xdc_Char)0x6f,  /* [2478] */
    (xdc_Char)0x74,  /* [2479] */
    (xdc_Char)0x20,  /* [2480] */
    (xdc_Char)0x63,  /* [2481] */
    (xdc_Char)0x61,  /* [2482] */
    (xdc_Char)0x6c,  /* [2483] */
    (xdc_Char)0x6c,  /* [2484] */
    (xdc_Char)0x20,  /* [2485] */
    (xdc_Char)0x47,  /* [2486] */
    (xdc_Char)0x61,  /* [2487] */
    (xdc_Char)0x74,  /* [2488] */
    (xdc_Char)0x65,  /* [2489] */
    (xdc_Char)0x4d,  /* [2490] */
    (xdc_Char)0x75,  /* [2491] */
    (xdc_Char)0x74,  /* [2492] */
    (xdc_Char)0x65,  /* [2493] */
    (xdc_Char)0x78,  /* [2494] */
    (xdc_Char)0x50,  /* [2495] */
    (xdc_Char)0x72,  /* [2496] */
    (xdc_Char)0x69,  /* [2497] */
    (xdc_Char)0x5f,  /* [2498] */
    (xdc_Char)0x65,  /* [2499] */
    (xdc_Char)0x6e,  /* [2500] */
    (xdc_Char)0x74,  /* [2501] */
    (xdc_Char)0x65,  /* [2502] */
    (xdc_Char)0x72,  /* [2503] */
    (xdc_Char)0x28,  /* [2504] */
    (xdc_Char)0x29,  /* [2505] */
    (xdc_Char)0x20,  /* [2506] */
    (xdc_Char)0x77,  /* [2507] */
    (xdc_Char)0x68,  /* [2508] */
    (xdc_Char)0x69,  /* [2509] */
    (xdc_Char)0x6c,  /* [2510] */
    (xdc_Char)0x65,  /* [2511] */
    (xdc_Char)0x20,  /* [2512] */
    (xdc_Char)0x74,  /* [2513] */
    (xdc_Char)0x68,  /* [2514] */
    (xdc_Char)0x65,  /* [2515] */
    (xdc_Char)0x20,  /* [2516] */
    (xdc_Char)0x54,  /* [2517] */
    (xdc_Char)0x61,  /* [2518] */
    (xdc_Char)0x73,  /* [2519] */
    (xdc_Char)0x6b,  /* [2520] */
    (xdc_Char)0x20,  /* [2521] */
    (xdc_Char)0x6f,  /* [2522] */
    (xdc_Char)0x72,  /* [2523] */
    (xdc_Char)0x20,  /* [2524] */
    (xdc_Char)0x53,  /* [2525] */
    (xdc_Char)0x77,  /* [2526] */
    (xdc_Char)0x69,  /* [2527] */
    (xdc_Char)0x20,  /* [2528] */
    (xdc_Char)0x73,  /* [2529] */
    (xdc_Char)0x63,  /* [2530] */
    (xdc_Char)0x68,  /* [2531] */
    (xdc_Char)0x65,  /* [2532] */
    (xdc_Char)0x64,  /* [2533] */
    (xdc_Char)0x75,  /* [2534] */
    (xdc_Char)0x6c,  /* [2535] */
    (xdc_Char)0x65,  /* [2536] */
    (xdc_Char)0x72,  /* [2537] */
    (xdc_Char)0x20,  /* [2538] */
    (xdc_Char)0x69,  /* [2539] */
    (xdc_Char)0x73,  /* [2540] */
    (xdc_Char)0x20,  /* [2541] */
    (xdc_Char)0x64,  /* [2542] */
    (xdc_Char)0x69,  /* [2543] */
    (xdc_Char)0x73,  /* [2544] */
    (xdc_Char)0x61,  /* [2545] */
    (xdc_Char)0x62,  /* [2546] */
    (xdc_Char)0x6c,  /* [2547] */
    (xdc_Char)0x65,  /* [2548] */
    (xdc_Char)0x64,  /* [2549] */
    (xdc_Char)0x2e,  /* [2550] */
    (xdc_Char)0x0,  /* [2551] */
    (xdc_Char)0x41,  /* [2552] */
    (xdc_Char)0x5f,  /* [2553] */
    (xdc_Char)0x62,  /* [2554] */
    (xdc_Char)0x61,  /* [2555] */
    (xdc_Char)0x64,  /* [2556] */
    (xdc_Char)0x43,  /* [2557] */
    (xdc_Char)0x6f,  /* [2558] */
    (xdc_Char)0x6e,  /* [2559] */
    (xdc_Char)0x74,  /* [2560] */
    (xdc_Char)0x65,  /* [2561] */
    (xdc_Char)0x78,  /* [2562] */
    (xdc_Char)0x74,  /* [2563] */
    (xdc_Char)0x3a,  /* [2564] */
    (xdc_Char)0x20,  /* [2565] */
    (xdc_Char)0x62,  /* [2566] */
    (xdc_Char)0x61,  /* [2567] */
    (xdc_Char)0x64,  /* [2568] */
    (xdc_Char)0x20,  /* [2569] */
    (xdc_Char)0x63,  /* [2570] */
    (xdc_Char)0x61,  /* [2571] */
    (xdc_Char)0x6c,  /* [2572] */
    (xdc_Char)0x6c,  /* [2573] */
    (xdc_Char)0x69,  /* [2574] */
    (xdc_Char)0x6e,  /* [2575] */
    (xdc_Char)0x67,  /* [2576] */
    (xdc_Char)0x20,  /* [2577] */
    (xdc_Char)0x63,  /* [2578] */
    (xdc_Char)0x6f,  /* [2579] */
    (xdc_Char)0x6e,  /* [2580] */
    (xdc_Char)0x74,  /* [2581] */
    (xdc_Char)0x65,  /* [2582] */
    (xdc_Char)0x78,  /* [2583] */
    (xdc_Char)0x74,  /* [2584] */
    (xdc_Char)0x2e,  /* [2585] */
    (xdc_Char)0x20,  /* [2586] */
    (xdc_Char)0x53,  /* [2587] */
    (xdc_Char)0x65,  /* [2588] */
    (xdc_Char)0x65,  /* [2589] */
    (xdc_Char)0x20,  /* [2590] */
    (xdc_Char)0x47,  /* [2591] */
    (xdc_Char)0x61,  /* [2592] */
    (xdc_Char)0x74,  /* [2593] */
    (xdc_Char)0x65,  /* [2594] */
    (xdc_Char)0x4d,  /* [2595] */
    (xdc_Char)0x75,  /* [2596] */
    (xdc_Char)0x74,  /* [2597] */
    (xdc_Char)0x65,  /* [2598] */
    (xdc_Char)0x78,  /* [2599] */
    (xdc_Char)0x20,  /* [2600] */
    (xdc_Char)0x41,  /* [2601] */
    (xdc_Char)0x50,  /* [2602] */
    (xdc_Char)0x49,  /* [2603] */
    (xdc_Char)0x20,  /* [2604] */
    (xdc_Char)0x64,  /* [2605] */
    (xdc_Char)0x6f,  /* [2606] */
    (xdc_Char)0x63,  /* [2607] */
    (xdc_Char)0x20,  /* [2608] */
    (xdc_Char)0x66,  /* [2609] */
    (xdc_Char)0x6f,  /* [2610] */
    (xdc_Char)0x72,  /* [2611] */
    (xdc_Char)0x20,  /* [2612] */
    (xdc_Char)0x64,  /* [2613] */
    (xdc_Char)0x65,  /* [2614] */
    (xdc_Char)0x74,  /* [2615] */
    (xdc_Char)0x61,  /* [2616] */
    (xdc_Char)0x69,  /* [2617] */
    (xdc_Char)0x6c,  /* [2618] */
    (xdc_Char)0x73,  /* [2619] */
    (xdc_Char)0x2e,  /* [2620] */
    (xdc_Char)0x0,  /* [2621] */
    (xdc_Char)0x41,  /* [2622] */
    (xdc_Char)0x5f,  /* [2623] */
    (xdc_Char)0x62,  /* [2624] */
    (xdc_Char)0x61,  /* [2625] */
    (xdc_Char)0x64,  /* [2626] */
    (xdc_Char)0x43,  /* [2627] */
    (xdc_Char)0x6f,  /* [2628] */
    (xdc_Char)0x6e,  /* [2629] */
    (xdc_Char)0x74,  /* [2630] */
    (xdc_Char)0x65,  /* [2631] */
    (xdc_Char)0x78,  /* [2632] */
    (xdc_Char)0x74,  /* [2633] */
    (xdc_Char)0x3a,  /* [2634] */
    (xdc_Char)0x20,  /* [2635] */
    (xdc_Char)0x62,  /* [2636] */
    (xdc_Char)0x61,  /* [2637] */
    (xdc_Char)0x64,  /* [2638] */
    (xdc_Char)0x20,  /* [2639] */
    (xdc_Char)0x63,  /* [2640] */
    (xdc_Char)0x61,  /* [2641] */
    (xdc_Char)0x6c,  /* [2642] */
    (xdc_Char)0x6c,  /* [2643] */
    (xdc_Char)0x69,  /* [2644] */
    (xdc_Char)0x6e,  /* [2645] */
    (xdc_Char)0x67,  /* [2646] */
    (xdc_Char)0x20,  /* [2647] */
    (xdc_Char)0x63,  /* [2648] */
    (xdc_Char)0x6f,  /* [2649] */
    (xdc_Char)0x6e,  /* [2650] */
    (xdc_Char)0x74,  /* [2651] */
    (xdc_Char)0x65,  /* [2652] */
    (xdc_Char)0x78,  /* [2653] */
    (xdc_Char)0x74,  /* [2654] */
    (xdc_Char)0x2e,  /* [2655] */
    (xdc_Char)0x20,  /* [2656] */
    (xdc_Char)0x53,  /* [2657] */
    (xdc_Char)0x65,  /* [2658] */
    (xdc_Char)0x65,  /* [2659] */
    (xdc_Char)0x20,  /* [2660] */
    (xdc_Char)0x47,  /* [2661] */
    (xdc_Char)0x61,  /* [2662] */
    (xdc_Char)0x74,  /* [2663] */
    (xdc_Char)0x65,  /* [2664] */
    (xdc_Char)0x53,  /* [2665] */
    (xdc_Char)0x70,  /* [2666] */
    (xdc_Char)0x69,  /* [2667] */
    (xdc_Char)0x6e,  /* [2668] */
    (xdc_Char)0x6c,  /* [2669] */
    (xdc_Char)0x6f,  /* [2670] */
    (xdc_Char)0x63,  /* [2671] */
    (xdc_Char)0x6b,  /* [2672] */
    (xdc_Char)0x20,  /* [2673] */
    (xdc_Char)0x41,  /* [2674] */
    (xdc_Char)0x50,  /* [2675] */
    (xdc_Char)0x49,  /* [2676] */
    (xdc_Char)0x20,  /* [2677] */
    (xdc_Char)0x64,  /* [2678] */
    (xdc_Char)0x6f,  /* [2679] */
    (xdc_Char)0x63,  /* [2680] */
    (xdc_Char)0x20,  /* [2681] */
    (xdc_Char)0x66,  /* [2682] */
    (xdc_Char)0x6f,  /* [2683] */
    (xdc_Char)0x72,  /* [2684] */
    (xdc_Char)0x20,  /* [2685] */
    (xdc_Char)0x64,  /* [2686] */
    (xdc_Char)0x65,  /* [2687] */
    (xdc_Char)0x74,  /* [2688] */
    (xdc_Char)0x61,  /* [2689] */
    (xdc_Char)0x69,  /* [2690] */
    (xdc_Char)0x6c,  /* [2691] */
    (xdc_Char)0x73,  /* [2692] */
    (xdc_Char)0x2e,  /* [2693] */
    (xdc_Char)0x0,  /* [2694] */
    (xdc_Char)0x41,  /* [2695] */
    (xdc_Char)0x5f,  /* [2696] */
    (xdc_Char)0x69,  /* [2697] */
    (xdc_Char)0x6e,  /* [2698] */
    (xdc_Char)0x76,  /* [2699] */
    (xdc_Char)0x61,  /* [2700] */
    (xdc_Char)0x6c,  /* [2701] */
    (xdc_Char)0x69,  /* [2702] */
    (xdc_Char)0x64,  /* [2703] */
    (xdc_Char)0x51,  /* [2704] */
    (xdc_Char)0x75,  /* [2705] */
    (xdc_Char)0x61,  /* [2706] */
    (xdc_Char)0x6c,  /* [2707] */
    (xdc_Char)0x69,  /* [2708] */
    (xdc_Char)0x74,  /* [2709] */
    (xdc_Char)0x79,  /* [2710] */
    (xdc_Char)0x3a,  /* [2711] */
    (xdc_Char)0x20,  /* [2712] */
    (xdc_Char)0x53,  /* [2713] */
    (xdc_Char)0x65,  /* [2714] */
    (xdc_Char)0x65,  /* [2715] */
    (xdc_Char)0x20,  /* [2716] */
    (xdc_Char)0x47,  /* [2717] */
    (xdc_Char)0x61,  /* [2718] */
    (xdc_Char)0x74,  /* [2719] */
    (xdc_Char)0x65,  /* [2720] */
    (xdc_Char)0x53,  /* [2721] */
    (xdc_Char)0x70,  /* [2722] */
    (xdc_Char)0x69,  /* [2723] */
    (xdc_Char)0x6e,  /* [2724] */
    (xdc_Char)0x6c,  /* [2725] */
    (xdc_Char)0x6f,  /* [2726] */
    (xdc_Char)0x63,  /* [2727] */
    (xdc_Char)0x6b,  /* [2728] */
    (xdc_Char)0x20,  /* [2729] */
    (xdc_Char)0x41,  /* [2730] */
    (xdc_Char)0x50,  /* [2731] */
    (xdc_Char)0x49,  /* [2732] */
    (xdc_Char)0x20,  /* [2733] */
    (xdc_Char)0x64,  /* [2734] */
    (xdc_Char)0x6f,  /* [2735] */
    (xdc_Char)0x63,  /* [2736] */
    (xdc_Char)0x20,  /* [2737] */
    (xdc_Char)0x66,  /* [2738] */
    (xdc_Char)0x6f,  /* [2739] */
    (xdc_Char)0x72,  /* [2740] */
    (xdc_Char)0x20,  /* [2741] */
    (xdc_Char)0x64,  /* [2742] */
    (xdc_Char)0x65,  /* [2743] */
    (xdc_Char)0x74,  /* [2744] */
    (xdc_Char)0x61,  /* [2745] */
    (xdc_Char)0x69,  /* [2746] */
    (xdc_Char)0x6c,  /* [2747] */
    (xdc_Char)0x73,  /* [2748] */
    (xdc_Char)0x2e,  /* [2749] */
    (xdc_Char)0x0,  /* [2750] */
    (xdc_Char)0x41,  /* [2751] */
    (xdc_Char)0x5f,  /* [2752] */
    (xdc_Char)0x75,  /* [2753] */
    (xdc_Char)0x6e,  /* [2754] */
    (xdc_Char)0x73,  /* [2755] */
    (xdc_Char)0x75,  /* [2756] */
    (xdc_Char)0x70,  /* [2757] */
    (xdc_Char)0x70,  /* [2758] */
    (xdc_Char)0x6f,  /* [2759] */
    (xdc_Char)0x72,  /* [2760] */
    (xdc_Char)0x74,  /* [2761] */
    (xdc_Char)0x65,  /* [2762] */
    (xdc_Char)0x64,  /* [2763] */
    (xdc_Char)0x4d,  /* [2764] */
    (xdc_Char)0x61,  /* [2765] */
    (xdc_Char)0x73,  /* [2766] */
    (xdc_Char)0x6b,  /* [2767] */
    (xdc_Char)0x69,  /* [2768] */
    (xdc_Char)0x6e,  /* [2769] */
    (xdc_Char)0x67,  /* [2770] */
    (xdc_Char)0x4f,  /* [2771] */
    (xdc_Char)0x70,  /* [2772] */
    (xdc_Char)0x74,  /* [2773] */
    (xdc_Char)0x69,  /* [2774] */
    (xdc_Char)0x6f,  /* [2775] */
    (xdc_Char)0x6e,  /* [2776] */
    (xdc_Char)0x3a,  /* [2777] */
    (xdc_Char)0x20,  /* [2778] */
    (xdc_Char)0x75,  /* [2779] */
    (xdc_Char)0x6e,  /* [2780] */
    (xdc_Char)0x73,  /* [2781] */
    (xdc_Char)0x75,  /* [2782] */
    (xdc_Char)0x70,  /* [2783] */
    (xdc_Char)0x70,  /* [2784] */
    (xdc_Char)0x6f,  /* [2785] */
    (xdc_Char)0x72,  /* [2786] */
    (xdc_Char)0x74,  /* [2787] */
    (xdc_Char)0x65,  /* [2788] */
    (xdc_Char)0x64,  /* [2789] */
    (xdc_Char)0x20,  /* [2790] */
    (xdc_Char)0x6d,  /* [2791] */
    (xdc_Char)0x61,  /* [2792] */
    (xdc_Char)0x73,  /* [2793] */
    (xdc_Char)0x6b,  /* [2794] */
    (xdc_Char)0x53,  /* [2795] */
    (xdc_Char)0x65,  /* [2796] */
    (xdc_Char)0x74,  /* [2797] */
    (xdc_Char)0x74,  /* [2798] */
    (xdc_Char)0x69,  /* [2799] */
    (xdc_Char)0x6e,  /* [2800] */
    (xdc_Char)0x67,  /* [2801] */
    (xdc_Char)0x2e,  /* [2802] */
    (xdc_Char)0x0,  /* [2803] */
    (xdc_Char)0x61,  /* [2804] */
    (xdc_Char)0x73,  /* [2805] */
    (xdc_Char)0x73,  /* [2806] */
    (xdc_Char)0x65,  /* [2807] */
    (xdc_Char)0x72,  /* [2808] */
    (xdc_Char)0x74,  /* [2809] */
    (xdc_Char)0x69,  /* [2810] */
    (xdc_Char)0x6f,  /* [2811] */
    (xdc_Char)0x6e,  /* [2812] */
    (xdc_Char)0x20,  /* [2813] */
    (xdc_Char)0x66,  /* [2814] */
    (xdc_Char)0x61,  /* [2815] */
    (xdc_Char)0x69,  /* [2816] */
    (xdc_Char)0x6c,  /* [2817] */
    (xdc_Char)0x75,  /* [2818] */
    (xdc_Char)0x72,  /* [2819] */
    (xdc_Char)0x65,  /* [2820] */
    (xdc_Char)0x25,  /* [2821] */
    (xdc_Char)0x73,  /* [2822] */
    (xdc_Char)0x25,  /* [2823] */
    (xdc_Char)0x73,  /* [2824] */
    (xdc_Char)0x0,  /* [2825] */
    (xdc_Char)0x25,  /* [2826] */
    (xdc_Char)0x24,  /* [2827] */
    (xdc_Char)0x53,  /* [2828] */
    (xdc_Char)0x0,  /* [2829] */
    (xdc_Char)0x6f,  /* [2830] */
    (xdc_Char)0x75,  /* [2831] */
    (xdc_Char)0x74,  /* [2832] */
    (xdc_Char)0x20,  /* [2833] */
    (xdc_Char)0x6f,  /* [2834] */
    (xdc_Char)0x66,  /* [2835] */
    (xdc_Char)0x20,  /* [2836] */
    (xdc_Char)0x6d,  /* [2837] */
    (xdc_Char)0x65,  /* [2838] */
    (xdc_Char)0x6d,  /* [2839] */
    (xdc_Char)0x6f,  /* [2840] */
    (xdc_Char)0x72,  /* [2841] */
    (xdc_Char)0x79,  /* [2842] */
    (xdc_Char)0x3a,  /* [2843] */
    (xdc_Char)0x20,  /* [2844] */
    (xdc_Char)0x68,  /* [2845] */
    (xdc_Char)0x65,  /* [2846] */
    (xdc_Char)0x61,  /* [2847] */
    (xdc_Char)0x70,  /* [2848] */
    (xdc_Char)0x3d,  /* [2849] */
    (xdc_Char)0x30,  /* [2850] */
    (xdc_Char)0x78,  /* [2851] */
    (xdc_Char)0x25,  /* [2852] */
    (xdc_Char)0x78,  /* [2853] */
    (xdc_Char)0x2c,  /* [2854] */
    (xdc_Char)0x20,  /* [2855] */
    (xdc_Char)0x73,  /* [2856] */
    (xdc_Char)0x69,  /* [2857] */
    (xdc_Char)0x7a,  /* [2858] */
    (xdc_Char)0x65,  /* [2859] */
    (xdc_Char)0x3d,  /* [2860] */
    (xdc_Char)0x25,  /* [2861] */
    (xdc_Char)0x75,  /* [2862] */
    (xdc_Char)0x0,  /* [2863] */
    (xdc_Char)0x25,  /* [2864] */
    (xdc_Char)0x73,  /* [2865] */
    (xdc_Char)0x20,  /* [2866] */
    (xdc_Char)0x30,  /* [2867] */
    (xdc_Char)0x78,  /* [2868] */
    (xdc_Char)0x25,  /* [2869] */
    (xdc_Char)0x78,  /* [2870] */
    (xdc_Char)0x0,  /* [2871] */
    (xdc_Char)0x45,  /* [2872] */
    (xdc_Char)0x5f,  /* [2873] */
    (xdc_Char)0x62,  /* [2874] */
    (xdc_Char)0x61,  /* [2875] */
    (xdc_Char)0x64,  /* [2876] */
    (xdc_Char)0x4c,  /* [2877] */
    (xdc_Char)0x65,  /* [2878] */
    (xdc_Char)0x76,  /* [2879] */
    (xdc_Char)0x65,  /* [2880] */
    (xdc_Char)0x6c,  /* [2881] */
    (xdc_Char)0x3a,  /* [2882] */
    (xdc_Char)0x20,  /* [2883] */
    (xdc_Char)0x42,  /* [2884] */
    (xdc_Char)0x61,  /* [2885] */
    (xdc_Char)0x64,  /* [2886] */
    (xdc_Char)0x20,  /* [2887] */
    (xdc_Char)0x66,  /* [2888] */
    (xdc_Char)0x69,  /* [2889] */
    (xdc_Char)0x6c,  /* [2890] */
    (xdc_Char)0x74,  /* [2891] */
    (xdc_Char)0x65,  /* [2892] */
    (xdc_Char)0x72,  /* [2893] */
    (xdc_Char)0x20,  /* [2894] */
    (xdc_Char)0x6c,  /* [2895] */
    (xdc_Char)0x65,  /* [2896] */
    (xdc_Char)0x76,  /* [2897] */
    (xdc_Char)0x65,  /* [2898] */
    (xdc_Char)0x6c,  /* [2899] */
    (xdc_Char)0x20,  /* [2900] */
    (xdc_Char)0x76,  /* [2901] */
    (xdc_Char)0x61,  /* [2902] */
    (xdc_Char)0x6c,  /* [2903] */
    (xdc_Char)0x75,  /* [2904] */
    (xdc_Char)0x65,  /* [2905] */
    (xdc_Char)0x3a,  /* [2906] */
    (xdc_Char)0x20,  /* [2907] */
    (xdc_Char)0x25,  /* [2908] */
    (xdc_Char)0x64,  /* [2909] */
    (xdc_Char)0x0,  /* [2910] */
    (xdc_Char)0x66,  /* [2911] */
    (xdc_Char)0x72,  /* [2912] */
    (xdc_Char)0x65,  /* [2913] */
    (xdc_Char)0x65,  /* [2914] */
    (xdc_Char)0x28,  /* [2915] */
    (xdc_Char)0x29,  /* [2916] */
    (xdc_Char)0x20,  /* [2917] */
    (xdc_Char)0x69,  /* [2918] */
    (xdc_Char)0x6e,  /* [2919] */
    (xdc_Char)0x76,  /* [2920] */
    (xdc_Char)0x61,  /* [2921] */
    (xdc_Char)0x6c,  /* [2922] */
    (xdc_Char)0x69,  /* [2923] */
    (xdc_Char)0x64,  /* [2924] */
    (xdc_Char)0x20,  /* [2925] */
    (xdc_Char)0x69,  /* [2926] */
    (xdc_Char)0x6e,  /* [2927] */
    (xdc_Char)0x20,  /* [2928] */
    (xdc_Char)0x67,  /* [2929] */
    (xdc_Char)0x72,  /* [2930] */
    (xdc_Char)0x6f,  /* [2931] */
    (xdc_Char)0x77,  /* [2932] */
    (xdc_Char)0x74,  /* [2933] */
    (xdc_Char)0x68,  /* [2934] */
    (xdc_Char)0x2d,  /* [2935] */
    (xdc_Char)0x6f,  /* [2936] */
    (xdc_Char)0x6e,  /* [2937] */
    (xdc_Char)0x6c,  /* [2938] */
    (xdc_Char)0x79,  /* [2939] */
    (xdc_Char)0x20,  /* [2940] */
    (xdc_Char)0x48,  /* [2941] */
    (xdc_Char)0x65,  /* [2942] */
    (xdc_Char)0x61,  /* [2943] */
    (xdc_Char)0x70,  /* [2944] */
    (xdc_Char)0x4d,  /* [2945] */
    (xdc_Char)0x69,  /* [2946] */
    (xdc_Char)0x6e,  /* [2947] */
    (xdc_Char)0x0,  /* [2948] */
    (xdc_Char)0x54,  /* [2949] */
    (xdc_Char)0x68,  /* [2950] */
    (xdc_Char)0x65,  /* [2951] */
    (xdc_Char)0x20,  /* [2952] */
    (xdc_Char)0x52,  /* [2953] */
    (xdc_Char)0x54,  /* [2954] */
    (xdc_Char)0x53,  /* [2955] */
    (xdc_Char)0x20,  /* [2956] */
    (xdc_Char)0x68,  /* [2957] */
    (xdc_Char)0x65,  /* [2958] */
    (xdc_Char)0x61,  /* [2959] */
    (xdc_Char)0x70,  /* [2960] */
    (xdc_Char)0x20,  /* [2961] */
    (xdc_Char)0x69,  /* [2962] */
    (xdc_Char)0x73,  /* [2963] */
    (xdc_Char)0x20,  /* [2964] */
    (xdc_Char)0x75,  /* [2965] */
    (xdc_Char)0x73,  /* [2966] */
    (xdc_Char)0x65,  /* [2967] */
    (xdc_Char)0x64,  /* [2968] */
    (xdc_Char)0x20,  /* [2969] */
    (xdc_Char)0x75,  /* [2970] */
    (xdc_Char)0x70,  /* [2971] */
    (xdc_Char)0x2e,  /* [2972] */
    (xdc_Char)0x20,  /* [2973] */
    (xdc_Char)0x45,  /* [2974] */
    (xdc_Char)0x78,  /* [2975] */
    (xdc_Char)0x61,  /* [2976] */
    (xdc_Char)0x6d,  /* [2977] */
    (xdc_Char)0x69,  /* [2978] */
    (xdc_Char)0x6e,  /* [2979] */
    (xdc_Char)0x65,  /* [2980] */
    (xdc_Char)0x20,  /* [2981] */
    (xdc_Char)0x50,  /* [2982] */
    (xdc_Char)0x72,  /* [2983] */
    (xdc_Char)0x6f,  /* [2984] */
    (xdc_Char)0x67,  /* [2985] */
    (xdc_Char)0x72,  /* [2986] */
    (xdc_Char)0x61,  /* [2987] */
    (xdc_Char)0x6d,  /* [2988] */
    (xdc_Char)0x2e,  /* [2989] */
    (xdc_Char)0x68,  /* [2990] */
    (xdc_Char)0x65,  /* [2991] */
    (xdc_Char)0x61,  /* [2992] */
    (xdc_Char)0x70,  /* [2993] */
    (xdc_Char)0x2e,  /* [2994] */
    (xdc_Char)0x0,  /* [2995] */
    (xdc_Char)0x45,  /* [2996] */
    (xdc_Char)0x5f,  /* [2997] */
    (xdc_Char)0x62,  /* [2998] */
    (xdc_Char)0x61,  /* [2999] */
    (xdc_Char)0x64,  /* [3000] */
    (xdc_Char)0x43,  /* [3001] */
    (xdc_Char)0x6f,  /* [3002] */
    (xdc_Char)0x6d,  /* [3003] */
    (xdc_Char)0x6d,  /* [3004] */
    (xdc_Char)0x61,  /* [3005] */
    (xdc_Char)0x6e,  /* [3006] */
    (xdc_Char)0x64,  /* [3007] */
    (xdc_Char)0x3a,  /* [3008] */
    (xdc_Char)0x20,  /* [3009] */
    (xdc_Char)0x52,  /* [3010] */
    (xdc_Char)0x65,  /* [3011] */
    (xdc_Char)0x63,  /* [3012] */
    (xdc_Char)0x65,  /* [3013] */
    (xdc_Char)0x69,  /* [3014] */
    (xdc_Char)0x76,  /* [3015] */
    (xdc_Char)0x65,  /* [3016] */
    (xdc_Char)0x64,  /* [3017] */
    (xdc_Char)0x20,  /* [3018] */
    (xdc_Char)0x69,  /* [3019] */
    (xdc_Char)0x6e,  /* [3020] */
    (xdc_Char)0x76,  /* [3021] */
    (xdc_Char)0x61,  /* [3022] */
    (xdc_Char)0x6c,  /* [3023] */
    (xdc_Char)0x69,  /* [3024] */
    (xdc_Char)0x64,  /* [3025] */
    (xdc_Char)0x20,  /* [3026] */
    (xdc_Char)0x63,  /* [3027] */
    (xdc_Char)0x6f,  /* [3028] */
    (xdc_Char)0x6d,  /* [3029] */
    (xdc_Char)0x6d,  /* [3030] */
    (xdc_Char)0x61,  /* [3031] */
    (xdc_Char)0x6e,  /* [3032] */
    (xdc_Char)0x64,  /* [3033] */
    (xdc_Char)0x2c,  /* [3034] */
    (xdc_Char)0x20,  /* [3035] */
    (xdc_Char)0x69,  /* [3036] */
    (xdc_Char)0x64,  /* [3037] */
    (xdc_Char)0x3a,  /* [3038] */
    (xdc_Char)0x20,  /* [3039] */
    (xdc_Char)0x25,  /* [3040] */
    (xdc_Char)0x64,  /* [3041] */
    (xdc_Char)0x2e,  /* [3042] */
    (xdc_Char)0x0,  /* [3043] */
    (xdc_Char)0x45,  /* [3044] */
    (xdc_Char)0x5f,  /* [3045] */
    (xdc_Char)0x73,  /* [3046] */
    (xdc_Char)0x74,  /* [3047] */
    (xdc_Char)0x61,  /* [3048] */
    (xdc_Char)0x63,  /* [3049] */
    (xdc_Char)0x6b,  /* [3050] */
    (xdc_Char)0x4f,  /* [3051] */
    (xdc_Char)0x76,  /* [3052] */
    (xdc_Char)0x65,  /* [3053] */
    (xdc_Char)0x72,  /* [3054] */
    (xdc_Char)0x66,  /* [3055] */
    (xdc_Char)0x6c,  /* [3056] */
    (xdc_Char)0x6f,  /* [3057] */
    (xdc_Char)0x77,  /* [3058] */
    (xdc_Char)0x3a,  /* [3059] */
    (xdc_Char)0x20,  /* [3060] */
    (xdc_Char)0x54,  /* [3061] */
    (xdc_Char)0x61,  /* [3062] */
    (xdc_Char)0x73,  /* [3063] */
    (xdc_Char)0x6b,  /* [3064] */
    (xdc_Char)0x20,  /* [3065] */
    (xdc_Char)0x30,  /* [3066] */
    (xdc_Char)0x78,  /* [3067] */
    (xdc_Char)0x25,  /* [3068] */
    (xdc_Char)0x78,  /* [3069] */
    (xdc_Char)0x20,  /* [3070] */
    (xdc_Char)0x73,  /* [3071] */
    (xdc_Char)0x74,  /* [3072] */
    (xdc_Char)0x61,  /* [3073] */
    (xdc_Char)0x63,  /* [3074] */
    (xdc_Char)0x6b,  /* [3075] */
    (xdc_Char)0x20,  /* [3076] */
    (xdc_Char)0x6f,  /* [3077] */
    (xdc_Char)0x76,  /* [3078] */
    (xdc_Char)0x65,  /* [3079] */
    (xdc_Char)0x72,  /* [3080] */
    (xdc_Char)0x66,  /* [3081] */
    (xdc_Char)0x6c,  /* [3082] */
    (xdc_Char)0x6f,  /* [3083] */
    (xdc_Char)0x77,  /* [3084] */
    (xdc_Char)0x2e,  /* [3085] */
    (xdc_Char)0x0,  /* [3086] */
    (xdc_Char)0x45,  /* [3087] */
    (xdc_Char)0x5f,  /* [3088] */
    (xdc_Char)0x73,  /* [3089] */
    (xdc_Char)0x70,  /* [3090] */
    (xdc_Char)0x4f,  /* [3091] */
    (xdc_Char)0x75,  /* [3092] */
    (xdc_Char)0x74,  /* [3093] */
    (xdc_Char)0x4f,  /* [3094] */
    (xdc_Char)0x66,  /* [3095] */
    (xdc_Char)0x42,  /* [3096] */
    (xdc_Char)0x6f,  /* [3097] */
    (xdc_Char)0x75,  /* [3098] */
    (xdc_Char)0x6e,  /* [3099] */
    (xdc_Char)0x64,  /* [3100] */
    (xdc_Char)0x73,  /* [3101] */
    (xdc_Char)0x3a,  /* [3102] */
    (xdc_Char)0x20,  /* [3103] */
    (xdc_Char)0x54,  /* [3104] */
    (xdc_Char)0x61,  /* [3105] */
    (xdc_Char)0x73,  /* [3106] */
    (xdc_Char)0x6b,  /* [3107] */
    (xdc_Char)0x20,  /* [3108] */
    (xdc_Char)0x30,  /* [3109] */
    (xdc_Char)0x78,  /* [3110] */
    (xdc_Char)0x25,  /* [3111] */
    (xdc_Char)0x78,  /* [3112] */
    (xdc_Char)0x20,  /* [3113] */
    (xdc_Char)0x73,  /* [3114] */
    (xdc_Char)0x74,  /* [3115] */
    (xdc_Char)0x61,  /* [3116] */
    (xdc_Char)0x63,  /* [3117] */
    (xdc_Char)0x6b,  /* [3118] */
    (xdc_Char)0x20,  /* [3119] */
    (xdc_Char)0x65,  /* [3120] */
    (xdc_Char)0x72,  /* [3121] */
    (xdc_Char)0x72,  /* [3122] */
    (xdc_Char)0x6f,  /* [3123] */
    (xdc_Char)0x72,  /* [3124] */
    (xdc_Char)0x2c,  /* [3125] */
    (xdc_Char)0x20,  /* [3126] */
    (xdc_Char)0x53,  /* [3127] */
    (xdc_Char)0x50,  /* [3128] */
    (xdc_Char)0x20,  /* [3129] */
    (xdc_Char)0x3d,  /* [3130] */
    (xdc_Char)0x20,  /* [3131] */
    (xdc_Char)0x30,  /* [3132] */
    (xdc_Char)0x78,  /* [3133] */
    (xdc_Char)0x25,  /* [3134] */
    (xdc_Char)0x78,  /* [3135] */
    (xdc_Char)0x2e,  /* [3136] */
    (xdc_Char)0x0,  /* [3137] */
    (xdc_Char)0x45,  /* [3138] */
    (xdc_Char)0x5f,  /* [3139] */
    (xdc_Char)0x64,  /* [3140] */
    (xdc_Char)0x65,  /* [3141] */
    (xdc_Char)0x6c,  /* [3142] */
    (xdc_Char)0x65,  /* [3143] */
    (xdc_Char)0x74,  /* [3144] */
    (xdc_Char)0x65,  /* [3145] */
    (xdc_Char)0x4e,  /* [3146] */
    (xdc_Char)0x6f,  /* [3147] */
    (xdc_Char)0x74,  /* [3148] */
    (xdc_Char)0x41,  /* [3149] */
    (xdc_Char)0x6c,  /* [3150] */
    (xdc_Char)0x6c,  /* [3151] */
    (xdc_Char)0x6f,  /* [3152] */
    (xdc_Char)0x77,  /* [3153] */
    (xdc_Char)0x65,  /* [3154] */
    (xdc_Char)0x64,  /* [3155] */
    (xdc_Char)0x3a,  /* [3156] */
    (xdc_Char)0x20,  /* [3157] */
    (xdc_Char)0x54,  /* [3158] */
    (xdc_Char)0x61,  /* [3159] */
    (xdc_Char)0x73,  /* [3160] */
    (xdc_Char)0x6b,  /* [3161] */
    (xdc_Char)0x20,  /* [3162] */
    (xdc_Char)0x30,  /* [3163] */
    (xdc_Char)0x78,  /* [3164] */
    (xdc_Char)0x25,  /* [3165] */
    (xdc_Char)0x78,  /* [3166] */
    (xdc_Char)0x2e,  /* [3167] */
    (xdc_Char)0x0,  /* [3168] */
    (xdc_Char)0x45,  /* [3169] */
    (xdc_Char)0x5f,  /* [3170] */
    (xdc_Char)0x73,  /* [3171] */
    (xdc_Char)0x74,  /* [3172] */
    (xdc_Char)0x61,  /* [3173] */
    (xdc_Char)0x63,  /* [3174] */
    (xdc_Char)0x6b,  /* [3175] */
    (xdc_Char)0x4f,  /* [3176] */
    (xdc_Char)0x76,  /* [3177] */
    (xdc_Char)0x65,  /* [3178] */
    (xdc_Char)0x72,  /* [3179] */
    (xdc_Char)0x66,  /* [3180] */
    (xdc_Char)0x6c,  /* [3181] */
    (xdc_Char)0x6f,  /* [3182] */
    (xdc_Char)0x77,  /* [3183] */
    (xdc_Char)0x3a,  /* [3184] */
    (xdc_Char)0x20,  /* [3185] */
    (xdc_Char)0x49,  /* [3186] */
    (xdc_Char)0x53,  /* [3187] */
    (xdc_Char)0x52,  /* [3188] */
    (xdc_Char)0x20,  /* [3189] */
    (xdc_Char)0x73,  /* [3190] */
    (xdc_Char)0x74,  /* [3191] */
    (xdc_Char)0x61,  /* [3192] */
    (xdc_Char)0x63,  /* [3193] */
    (xdc_Char)0x6b,  /* [3194] */
    (xdc_Char)0x20,  /* [3195] */
    (xdc_Char)0x6f,  /* [3196] */
    (xdc_Char)0x76,  /* [3197] */
    (xdc_Char)0x65,  /* [3198] */
    (xdc_Char)0x72,  /* [3199] */
    (xdc_Char)0x66,  /* [3200] */
    (xdc_Char)0x6c,  /* [3201] */
    (xdc_Char)0x6f,  /* [3202] */
    (xdc_Char)0x77,  /* [3203] */
    (xdc_Char)0x2e,  /* [3204] */
    (xdc_Char)0x0,  /* [3205] */
    (xdc_Char)0x45,  /* [3206] */
    (xdc_Char)0x5f,  /* [3207] */
    (xdc_Char)0x70,  /* [3208] */
    (xdc_Char)0x72,  /* [3209] */
    (xdc_Char)0x69,  /* [3210] */
    (xdc_Char)0x6f,  /* [3211] */
    (xdc_Char)0x72,  /* [3212] */
    (xdc_Char)0x69,  /* [3213] */
    (xdc_Char)0x74,  /* [3214] */
    (xdc_Char)0x79,  /* [3215] */
    (xdc_Char)0x3a,  /* [3216] */
    (xdc_Char)0x20,  /* [3217] */
    (xdc_Char)0x54,  /* [3218] */
    (xdc_Char)0x68,  /* [3219] */
    (xdc_Char)0x72,  /* [3220] */
    (xdc_Char)0x65,  /* [3221] */
    (xdc_Char)0x61,  /* [3222] */
    (xdc_Char)0x64,  /* [3223] */
    (xdc_Char)0x20,  /* [3224] */
    (xdc_Char)0x70,  /* [3225] */
    (xdc_Char)0x72,  /* [3226] */
    (xdc_Char)0x69,  /* [3227] */
    (xdc_Char)0x6f,  /* [3228] */
    (xdc_Char)0x72,  /* [3229] */
    (xdc_Char)0x69,  /* [3230] */
    (xdc_Char)0x74,  /* [3231] */
    (xdc_Char)0x79,  /* [3232] */
    (xdc_Char)0x20,  /* [3233] */
    (xdc_Char)0x69,  /* [3234] */
    (xdc_Char)0x73,  /* [3235] */
    (xdc_Char)0x20,  /* [3236] */
    (xdc_Char)0x69,  /* [3237] */
    (xdc_Char)0x6e,  /* [3238] */
    (xdc_Char)0x76,  /* [3239] */
    (xdc_Char)0x61,  /* [3240] */
    (xdc_Char)0x6c,  /* [3241] */
    (xdc_Char)0x69,  /* [3242] */
    (xdc_Char)0x64,  /* [3243] */
    (xdc_Char)0x20,  /* [3244] */
    (xdc_Char)0x25,  /* [3245] */
    (xdc_Char)0x64,  /* [3246] */
    (xdc_Char)0x0,  /* [3247] */
    (xdc_Char)0x45,  /* [3248] */
    (xdc_Char)0x5f,  /* [3249] */
    (xdc_Char)0x61,  /* [3250] */
    (xdc_Char)0x6c,  /* [3251] */
    (xdc_Char)0x72,  /* [3252] */
    (xdc_Char)0x65,  /* [3253] */
    (xdc_Char)0x61,  /* [3254] */
    (xdc_Char)0x64,  /* [3255] */
    (xdc_Char)0x79,  /* [3256] */
    (xdc_Char)0x44,  /* [3257] */
    (xdc_Char)0x65,  /* [3258] */
    (xdc_Char)0x66,  /* [3259] */
    (xdc_Char)0x69,  /* [3260] */
    (xdc_Char)0x6e,  /* [3261] */
    (xdc_Char)0x65,  /* [3262] */
    (xdc_Char)0x64,  /* [3263] */
    (xdc_Char)0x3a,  /* [3264] */
    (xdc_Char)0x20,  /* [3265] */
    (xdc_Char)0x48,  /* [3266] */
    (xdc_Char)0x77,  /* [3267] */
    (xdc_Char)0x69,  /* [3268] */
    (xdc_Char)0x20,  /* [3269] */
    (xdc_Char)0x61,  /* [3270] */
    (xdc_Char)0x6c,  /* [3271] */
    (xdc_Char)0x72,  /* [3272] */
    (xdc_Char)0x65,  /* [3273] */
    (xdc_Char)0x61,  /* [3274] */
    (xdc_Char)0x64,  /* [3275] */
    (xdc_Char)0x79,  /* [3276] */
    (xdc_Char)0x20,  /* [3277] */
    (xdc_Char)0x64,  /* [3278] */
    (xdc_Char)0x65,  /* [3279] */
    (xdc_Char)0x66,  /* [3280] */
    (xdc_Char)0x69,  /* [3281] */
    (xdc_Char)0x6e,  /* [3282] */
    (xdc_Char)0x65,  /* [3283] */
    (xdc_Char)0x64,  /* [3284] */
    (xdc_Char)0x3a,  /* [3285] */
    (xdc_Char)0x20,  /* [3286] */
    (xdc_Char)0x69,  /* [3287] */
    (xdc_Char)0x6e,  /* [3288] */
    (xdc_Char)0x74,  /* [3289] */
    (xdc_Char)0x72,  /* [3290] */
    (xdc_Char)0x23,  /* [3291] */
    (xdc_Char)0x20,  /* [3292] */
    (xdc_Char)0x25,  /* [3293] */
    (xdc_Char)0x64,  /* [3294] */
    (xdc_Char)0x0,  /* [3295] */
    (xdc_Char)0x45,  /* [3296] */
    (xdc_Char)0x5f,  /* [3297] */
    (xdc_Char)0x68,  /* [3298] */
    (xdc_Char)0x77,  /* [3299] */
    (xdc_Char)0x69,  /* [3300] */
    (xdc_Char)0x4c,  /* [3301] */
    (xdc_Char)0x69,  /* [3302] */
    (xdc_Char)0x6d,  /* [3303] */
    (xdc_Char)0x69,  /* [3304] */
    (xdc_Char)0x74,  /* [3305] */
    (xdc_Char)0x45,  /* [3306] */
    (xdc_Char)0x78,  /* [3307] */
    (xdc_Char)0x63,  /* [3308] */
    (xdc_Char)0x65,  /* [3309] */
    (xdc_Char)0x65,  /* [3310] */
    (xdc_Char)0x64,  /* [3311] */
    (xdc_Char)0x65,  /* [3312] */
    (xdc_Char)0x64,  /* [3313] */
    (xdc_Char)0x3a,  /* [3314] */
    (xdc_Char)0x20,  /* [3315] */
    (xdc_Char)0x54,  /* [3316] */
    (xdc_Char)0x6f,  /* [3317] */
    (xdc_Char)0x6f,  /* [3318] */
    (xdc_Char)0x20,  /* [3319] */
    (xdc_Char)0x6d,  /* [3320] */
    (xdc_Char)0x61,  /* [3321] */
    (xdc_Char)0x6e,  /* [3322] */
    (xdc_Char)0x79,  /* [3323] */
    (xdc_Char)0x20,  /* [3324] */
    (xdc_Char)0x69,  /* [3325] */
    (xdc_Char)0x6e,  /* [3326] */
    (xdc_Char)0x74,  /* [3327] */
    (xdc_Char)0x65,  /* [3328] */
    (xdc_Char)0x72,  /* [3329] */
    (xdc_Char)0x72,  /* [3330] */
    (xdc_Char)0x75,  /* [3331] */
    (xdc_Char)0x70,  /* [3332] */
    (xdc_Char)0x74,  /* [3333] */
    (xdc_Char)0x73,  /* [3334] */
    (xdc_Char)0x20,  /* [3335] */
    (xdc_Char)0x64,  /* [3336] */
    (xdc_Char)0x65,  /* [3337] */
    (xdc_Char)0x66,  /* [3338] */
    (xdc_Char)0x69,  /* [3339] */
    (xdc_Char)0x6e,  /* [3340] */
    (xdc_Char)0x65,  /* [3341] */
    (xdc_Char)0x64,  /* [3342] */
    (xdc_Char)0x0,  /* [3343] */
    (xdc_Char)0x45,  /* [3344] */
    (xdc_Char)0x5f,  /* [3345] */
    (xdc_Char)0x65,  /* [3346] */
    (xdc_Char)0x78,  /* [3347] */
    (xdc_Char)0x63,  /* [3348] */
    (xdc_Char)0x65,  /* [3349] */
    (xdc_Char)0x70,  /* [3350] */
    (xdc_Char)0x74,  /* [3351] */
    (xdc_Char)0x69,  /* [3352] */
    (xdc_Char)0x6f,  /* [3353] */
    (xdc_Char)0x6e,  /* [3354] */
    (xdc_Char)0x3a,  /* [3355] */
    (xdc_Char)0x20,  /* [3356] */
    (xdc_Char)0x69,  /* [3357] */
    (xdc_Char)0x64,  /* [3358] */
    (xdc_Char)0x20,  /* [3359] */
    (xdc_Char)0x3d,  /* [3360] */
    (xdc_Char)0x20,  /* [3361] */
    (xdc_Char)0x25,  /* [3362] */
    (xdc_Char)0x64,  /* [3363] */
    (xdc_Char)0x2c,  /* [3364] */
    (xdc_Char)0x20,  /* [3365] */
    (xdc_Char)0x70,  /* [3366] */
    (xdc_Char)0x63,  /* [3367] */
    (xdc_Char)0x20,  /* [3368] */
    (xdc_Char)0x3d,  /* [3369] */
    (xdc_Char)0x20,  /* [3370] */
    (xdc_Char)0x25,  /* [3371] */
    (xdc_Char)0x30,  /* [3372] */
    (xdc_Char)0x38,  /* [3373] */
    (xdc_Char)0x78,  /* [3374] */
    (xdc_Char)0x2e,  /* [3375] */
    (xdc_Char)0xa,  /* [3376] */
    (xdc_Char)0x54,  /* [3377] */
    (xdc_Char)0x6f,  /* [3378] */
    (xdc_Char)0x20,  /* [3379] */
    (xdc_Char)0x73,  /* [3380] */
    (xdc_Char)0x65,  /* [3381] */
    (xdc_Char)0x65,  /* [3382] */
    (xdc_Char)0x20,  /* [3383] */
    (xdc_Char)0x6d,  /* [3384] */
    (xdc_Char)0x6f,  /* [3385] */
    (xdc_Char)0x72,  /* [3386] */
    (xdc_Char)0x65,  /* [3387] */
    (xdc_Char)0x20,  /* [3388] */
    (xdc_Char)0x65,  /* [3389] */
    (xdc_Char)0x78,  /* [3390] */
    (xdc_Char)0x63,  /* [3391] */
    (xdc_Char)0x65,  /* [3392] */
    (xdc_Char)0x70,  /* [3393] */
    (xdc_Char)0x74,  /* [3394] */
    (xdc_Char)0x69,  /* [3395] */
    (xdc_Char)0x6f,  /* [3396] */
    (xdc_Char)0x6e,  /* [3397] */
    (xdc_Char)0x20,  /* [3398] */
    (xdc_Char)0x64,  /* [3399] */
    (xdc_Char)0x65,  /* [3400] */
    (xdc_Char)0x74,  /* [3401] */
    (xdc_Char)0x61,  /* [3402] */
    (xdc_Char)0x69,  /* [3403] */
    (xdc_Char)0x6c,  /* [3404] */
    (xdc_Char)0x2c,  /* [3405] */
    (xdc_Char)0x20,  /* [3406] */
    (xdc_Char)0x73,  /* [3407] */
    (xdc_Char)0x65,  /* [3408] */
    (xdc_Char)0x74,  /* [3409] */
    (xdc_Char)0x20,  /* [3410] */
    (xdc_Char)0x74,  /* [3411] */
    (xdc_Char)0x69,  /* [3412] */
    (xdc_Char)0x2e,  /* [3413] */
    (xdc_Char)0x73,  /* [3414] */
    (xdc_Char)0x79,  /* [3415] */
    (xdc_Char)0x73,  /* [3416] */
    (xdc_Char)0x62,  /* [3417] */
    (xdc_Char)0x69,  /* [3418] */
    (xdc_Char)0x6f,  /* [3419] */
    (xdc_Char)0x73,  /* [3420] */
    (xdc_Char)0x2e,  /* [3421] */
    (xdc_Char)0x66,  /* [3422] */
    (xdc_Char)0x61,  /* [3423] */
    (xdc_Char)0x6d,  /* [3424] */
    (xdc_Char)0x69,  /* [3425] */
    (xdc_Char)0x6c,  /* [3426] */
    (xdc_Char)0x79,  /* [3427] */
    (xdc_Char)0x2e,  /* [3428] */
    (xdc_Char)0x61,  /* [3429] */
    (xdc_Char)0x72,  /* [3430] */
    (xdc_Char)0x6d,  /* [3431] */
    (xdc_Char)0x2e,  /* [3432] */
    (xdc_Char)0x6d,  /* [3433] */
    (xdc_Char)0x33,  /* [3434] */
    (xdc_Char)0x2e,  /* [3435] */
    (xdc_Char)0x48,  /* [3436] */
    (xdc_Char)0x77,  /* [3437] */
    (xdc_Char)0x69,  /* [3438] */
    (xdc_Char)0x2e,  /* [3439] */
    (xdc_Char)0x65,  /* [3440] */
    (xdc_Char)0x6e,  /* [3441] */
    (xdc_Char)0x61,  /* [3442] */
    (xdc_Char)0x62,  /* [3443] */
    (xdc_Char)0x6c,  /* [3444] */
    (xdc_Char)0x65,  /* [3445] */
    (xdc_Char)0x45,  /* [3446] */
    (xdc_Char)0x78,  /* [3447] */
    (xdc_Char)0x63,  /* [3448] */
    (xdc_Char)0x65,  /* [3449] */
    (xdc_Char)0x70,  /* [3450] */
    (xdc_Char)0x74,  /* [3451] */
    (xdc_Char)0x69,  /* [3452] */
    (xdc_Char)0x6f,  /* [3453] */
    (xdc_Char)0x6e,  /* [3454] */
    (xdc_Char)0x20,  /* [3455] */
    (xdc_Char)0x3d,  /* [3456] */
    (xdc_Char)0x20,  /* [3457] */
    (xdc_Char)0x74,  /* [3458] */
    (xdc_Char)0x72,  /* [3459] */
    (xdc_Char)0x75,  /* [3460] */
    (xdc_Char)0x65,  /* [3461] */
    (xdc_Char)0x20,  /* [3462] */
    (xdc_Char)0x6f,  /* [3463] */
    (xdc_Char)0x72,  /* [3464] */
    (xdc_Char)0x2c,  /* [3465] */
    (xdc_Char)0xa,  /* [3466] */
    (xdc_Char)0x65,  /* [3467] */
    (xdc_Char)0x78,  /* [3468] */
    (xdc_Char)0x61,  /* [3469] */
    (xdc_Char)0x6d,  /* [3470] */
    (xdc_Char)0x69,  /* [3471] */
    (xdc_Char)0x6e,  /* [3472] */
    (xdc_Char)0x65,  /* [3473] */
    (xdc_Char)0x20,  /* [3474] */
    (xdc_Char)0x74,  /* [3475] */
    (xdc_Char)0x68,  /* [3476] */
    (xdc_Char)0x65,  /* [3477] */
    (xdc_Char)0x20,  /* [3478] */
    (xdc_Char)0x45,  /* [3479] */
    (xdc_Char)0x78,  /* [3480] */
    (xdc_Char)0x63,  /* [3481] */
    (xdc_Char)0x65,  /* [3482] */
    (xdc_Char)0x70,  /* [3483] */
    (xdc_Char)0x74,  /* [3484] */
    (xdc_Char)0x69,  /* [3485] */
    (xdc_Char)0x6f,  /* [3486] */
    (xdc_Char)0x6e,  /* [3487] */
    (xdc_Char)0x20,  /* [3488] */
    (xdc_Char)0x76,  /* [3489] */
    (xdc_Char)0x69,  /* [3490] */
    (xdc_Char)0x65,  /* [3491] */
    (xdc_Char)0x77,  /* [3492] */
    (xdc_Char)0x20,  /* [3493] */
    (xdc_Char)0x66,  /* [3494] */
    (xdc_Char)0x6f,  /* [3495] */
    (xdc_Char)0x72,  /* [3496] */
    (xdc_Char)0x20,  /* [3497] */
    (xdc_Char)0x74,  /* [3498] */
    (xdc_Char)0x68,  /* [3499] */
    (xdc_Char)0x65,  /* [3500] */
    (xdc_Char)0x20,  /* [3501] */
    (xdc_Char)0x74,  /* [3502] */
    (xdc_Char)0x69,  /* [3503] */
    (xdc_Char)0x2e,  /* [3504] */
    (xdc_Char)0x73,  /* [3505] */
    (xdc_Char)0x79,  /* [3506] */
    (xdc_Char)0x73,  /* [3507] */
    (xdc_Char)0x62,  /* [3508] */
    (xdc_Char)0x69,  /* [3509] */
    (xdc_Char)0x6f,  /* [3510] */
    (xdc_Char)0x73,  /* [3511] */
    (xdc_Char)0x2e,  /* [3512] */
    (xdc_Char)0x66,  /* [3513] */
    (xdc_Char)0x61,  /* [3514] */
    (xdc_Char)0x6d,  /* [3515] */
    (xdc_Char)0x69,  /* [3516] */
    (xdc_Char)0x6c,  /* [3517] */
    (xdc_Char)0x79,  /* [3518] */
    (xdc_Char)0x2e,  /* [3519] */
    (xdc_Char)0x61,  /* [3520] */
    (xdc_Char)0x72,  /* [3521] */
    (xdc_Char)0x6d,  /* [3522] */
    (xdc_Char)0x2e,  /* [3523] */
    (xdc_Char)0x6d,  /* [3524] */
    (xdc_Char)0x33,  /* [3525] */
    (xdc_Char)0x2e,  /* [3526] */
    (xdc_Char)0x48,  /* [3527] */
    (xdc_Char)0x77,  /* [3528] */
    (xdc_Char)0x69,  /* [3529] */
    (xdc_Char)0x20,  /* [3530] */
    (xdc_Char)0x6d,  /* [3531] */
    (xdc_Char)0x6f,  /* [3532] */
    (xdc_Char)0x64,  /* [3533] */
    (xdc_Char)0x75,  /* [3534] */
    (xdc_Char)0x6c,  /* [3535] */
    (xdc_Char)0x65,  /* [3536] */
    (xdc_Char)0x20,  /* [3537] */
    (xdc_Char)0x75,  /* [3538] */
    (xdc_Char)0x73,  /* [3539] */
    (xdc_Char)0x69,  /* [3540] */
    (xdc_Char)0x6e,  /* [3541] */
    (xdc_Char)0x67,  /* [3542] */
    (xdc_Char)0x20,  /* [3543] */
    (xdc_Char)0x52,  /* [3544] */
    (xdc_Char)0x4f,  /* [3545] */
    (xdc_Char)0x56,  /* [3546] */
    (xdc_Char)0x2e,  /* [3547] */
    (xdc_Char)0x0,  /* [3548] */
    (xdc_Char)0x45,  /* [3549] */
    (xdc_Char)0x5f,  /* [3550] */
    (xdc_Char)0x6e,  /* [3551] */
    (xdc_Char)0x6f,  /* [3552] */
    (xdc_Char)0x49,  /* [3553] */
    (xdc_Char)0x73,  /* [3554] */
    (xdc_Char)0x72,  /* [3555] */
    (xdc_Char)0x3a,  /* [3556] */
    (xdc_Char)0x20,  /* [3557] */
    (xdc_Char)0x69,  /* [3558] */
    (xdc_Char)0x64,  /* [3559] */
    (xdc_Char)0x20,  /* [3560] */
    (xdc_Char)0x3d,  /* [3561] */
    (xdc_Char)0x20,  /* [3562] */
    (xdc_Char)0x25,  /* [3563] */
    (xdc_Char)0x64,  /* [3564] */
    (xdc_Char)0x2c,  /* [3565] */
    (xdc_Char)0x20,  /* [3566] */
    (xdc_Char)0x70,  /* [3567] */
    (xdc_Char)0x63,  /* [3568] */
    (xdc_Char)0x20,  /* [3569] */
    (xdc_Char)0x3d,  /* [3570] */
    (xdc_Char)0x20,  /* [3571] */
    (xdc_Char)0x25,  /* [3572] */
    (xdc_Char)0x30,  /* [3573] */
    (xdc_Char)0x38,  /* [3574] */
    (xdc_Char)0x78,  /* [3575] */
    (xdc_Char)0x0,  /* [3576] */
    (xdc_Char)0x45,  /* [3577] */
    (xdc_Char)0x5f,  /* [3578] */
    (xdc_Char)0x4e,  /* [3579] */
    (xdc_Char)0x4d,  /* [3580] */
    (xdc_Char)0x49,  /* [3581] */
    (xdc_Char)0x3a,  /* [3582] */
    (xdc_Char)0x20,  /* [3583] */
    (xdc_Char)0x25,  /* [3584] */
    (xdc_Char)0x73,  /* [3585] */
    (xdc_Char)0x0,  /* [3586] */
    (xdc_Char)0x45,  /* [3587] */
    (xdc_Char)0x5f,  /* [3588] */
    (xdc_Char)0x68,  /* [3589] */
    (xdc_Char)0x61,  /* [3590] */
    (xdc_Char)0x72,  /* [3591] */
    (xdc_Char)0x64,  /* [3592] */
    (xdc_Char)0x46,  /* [3593] */
    (xdc_Char)0x61,  /* [3594] */
    (xdc_Char)0x75,  /* [3595] */
    (xdc_Char)0x6c,  /* [3596] */
    (xdc_Char)0x74,  /* [3597] */
    (xdc_Char)0x3a,  /* [3598] */
    (xdc_Char)0x20,  /* [3599] */
    (xdc_Char)0x25,  /* [3600] */
    (xdc_Char)0x73,  /* [3601] */
    (xdc_Char)0x0,  /* [3602] */
    (xdc_Char)0x45,  /* [3603] */
    (xdc_Char)0x5f,  /* [3604] */
    (xdc_Char)0x6d,  /* [3605] */
    (xdc_Char)0x65,  /* [3606] */
    (xdc_Char)0x6d,  /* [3607] */
    (xdc_Char)0x46,  /* [3608] */
    (xdc_Char)0x61,  /* [3609] */
    (xdc_Char)0x75,  /* [3610] */
    (xdc_Char)0x6c,  /* [3611] */
    (xdc_Char)0x74,  /* [3612] */
    (xdc_Char)0x3a,  /* [3613] */
    (xdc_Char)0x20,  /* [3614] */
    (xdc_Char)0x25,  /* [3615] */
    (xdc_Char)0x73,  /* [3616] */
    (xdc_Char)0x2c,  /* [3617] */
    (xdc_Char)0x20,  /* [3618] */
    (xdc_Char)0x61,  /* [3619] */
    (xdc_Char)0x64,  /* [3620] */
    (xdc_Char)0x64,  /* [3621] */
    (xdc_Char)0x72,  /* [3622] */
    (xdc_Char)0x65,  /* [3623] */
    (xdc_Char)0x73,  /* [3624] */
    (xdc_Char)0x73,  /* [3625] */
    (xdc_Char)0x3a,  /* [3626] */
    (xdc_Char)0x20,  /* [3627] */
    (xdc_Char)0x25,  /* [3628] */
    (xdc_Char)0x30,  /* [3629] */
    (xdc_Char)0x38,  /* [3630] */
    (xdc_Char)0x78,  /* [3631] */
    (xdc_Char)0x0,  /* [3632] */
    (xdc_Char)0x45,  /* [3633] */
    (xdc_Char)0x5f,  /* [3634] */
    (xdc_Char)0x62,  /* [3635] */
    (xdc_Char)0x75,  /* [3636] */
    (xdc_Char)0x73,  /* [3637] */
    (xdc_Char)0x46,  /* [3638] */
    (xdc_Char)0x61,  /* [3639] */
    (xdc_Char)0x75,  /* [3640] */
    (xdc_Char)0x6c,  /* [3641] */
    (xdc_Char)0x74,  /* [3642] */
    (xdc_Char)0x3a,  /* [3643] */
    (xdc_Char)0x20,  /* [3644] */
    (xdc_Char)0x25,  /* [3645] */
    (xdc_Char)0x73,  /* [3646] */
    (xdc_Char)0x2c,  /* [3647] */
    (xdc_Char)0x20,  /* [3648] */
    (xdc_Char)0x61,  /* [3649] */
    (xdc_Char)0x64,  /* [3650] */
    (xdc_Char)0x64,  /* [3651] */
    (xdc_Char)0x72,  /* [3652] */
    (xdc_Char)0x65,  /* [3653] */
    (xdc_Char)0x73,  /* [3654] */
    (xdc_Char)0x73,  /* [3655] */
    (xdc_Char)0x3a,  /* [3656] */
    (xdc_Char)0x20,  /* [3657] */
    (xdc_Char)0x25,  /* [3658] */
    (xdc_Char)0x30,  /* [3659] */
    (xdc_Char)0x38,  /* [3660] */
    (xdc_Char)0x78,  /* [3661] */
    (xdc_Char)0x0,  /* [3662] */
    (xdc_Char)0x45,  /* [3663] */
    (xdc_Char)0x5f,  /* [3664] */
    (xdc_Char)0x75,  /* [3665] */
    (xdc_Char)0x73,  /* [3666] */
    (xdc_Char)0x61,  /* [3667] */
    (xdc_Char)0x67,  /* [3668] */
    (xdc_Char)0x65,  /* [3669] */
    (xdc_Char)0x46,  /* [3670] */
    (xdc_Char)0x61,  /* [3671] */
    (xdc_Char)0x75,  /* [3672] */
    (xdc_Char)0x6c,  /* [3673] */
    (xdc_Char)0x74,  /* [3674] */
    (xdc_Char)0x3a,  /* [3675] */
    (xdc_Char)0x20,  /* [3676] */
    (xdc_Char)0x25,  /* [3677] */
    (xdc_Char)0x73,  /* [3678] */
    (xdc_Char)0x0,  /* [3679] */
    (xdc_Char)0x45,  /* [3680] */
    (xdc_Char)0x5f,  /* [3681] */
    (xdc_Char)0x73,  /* [3682] */
    (xdc_Char)0x76,  /* [3683] */
    (xdc_Char)0x43,  /* [3684] */
    (xdc_Char)0x61,  /* [3685] */
    (xdc_Char)0x6c,  /* [3686] */
    (xdc_Char)0x6c,  /* [3687] */
    (xdc_Char)0x3a,  /* [3688] */
    (xdc_Char)0x20,  /* [3689] */
    (xdc_Char)0x73,  /* [3690] */
    (xdc_Char)0x76,  /* [3691] */
    (xdc_Char)0x4e,  /* [3692] */
    (xdc_Char)0x75,  /* [3693] */
    (xdc_Char)0x6d,  /* [3694] */
    (xdc_Char)0x20,  /* [3695] */
    (xdc_Char)0x3d,  /* [3696] */
    (xdc_Char)0x20,  /* [3697] */
    (xdc_Char)0x25,  /* [3698] */
    (xdc_Char)0x64,  /* [3699] */
    (xdc_Char)0x0,  /* [3700] */
    (xdc_Char)0x45,  /* [3701] */
    (xdc_Char)0x5f,  /* [3702] */
    (xdc_Char)0x64,  /* [3703] */
    (xdc_Char)0x65,  /* [3704] */
    (xdc_Char)0x62,  /* [3705] */
    (xdc_Char)0x75,  /* [3706] */
    (xdc_Char)0x67,  /* [3707] */
    (xdc_Char)0x4d,  /* [3708] */
    (xdc_Char)0x6f,  /* [3709] */
    (xdc_Char)0x6e,  /* [3710] */
    (xdc_Char)0x3a,  /* [3711] */
    (xdc_Char)0x20,  /* [3712] */
    (xdc_Char)0x25,  /* [3713] */
    (xdc_Char)0x73,  /* [3714] */
    (xdc_Char)0x0,  /* [3715] */
    (xdc_Char)0x45,  /* [3716] */
    (xdc_Char)0x5f,  /* [3717] */
    (xdc_Char)0x72,  /* [3718] */
    (xdc_Char)0x65,  /* [3719] */
    (xdc_Char)0x73,  /* [3720] */
    (xdc_Char)0x65,  /* [3721] */
    (xdc_Char)0x72,  /* [3722] */
    (xdc_Char)0x76,  /* [3723] */
    (xdc_Char)0x65,  /* [3724] */
    (xdc_Char)0x64,  /* [3725] */
    (xdc_Char)0x3a,  /* [3726] */
    (xdc_Char)0x20,  /* [3727] */
    (xdc_Char)0x25,  /* [3728] */
    (xdc_Char)0x73,  /* [3729] */
    (xdc_Char)0x20,  /* [3730] */
    (xdc_Char)0x25,  /* [3731] */
    (xdc_Char)0x64,  /* [3732] */
    (xdc_Char)0x0,  /* [3733] */
    (xdc_Char)0x45,  /* [3734] */
    (xdc_Char)0x5f,  /* [3735] */
    (xdc_Char)0x69,  /* [3736] */
    (xdc_Char)0x6e,  /* [3737] */
    (xdc_Char)0x76,  /* [3738] */
    (xdc_Char)0x61,  /* [3739] */
    (xdc_Char)0x6c,  /* [3740] */
    (xdc_Char)0x69,  /* [3741] */
    (xdc_Char)0x64,  /* [3742] */
    (xdc_Char)0x54,  /* [3743] */
    (xdc_Char)0x69,  /* [3744] */
    (xdc_Char)0x6d,  /* [3745] */
    (xdc_Char)0x65,  /* [3746] */
    (xdc_Char)0x72,  /* [3747] */
    (xdc_Char)0x3a,  /* [3748] */
    (xdc_Char)0x20,  /* [3749] */
    (xdc_Char)0x49,  /* [3750] */
    (xdc_Char)0x6e,  /* [3751] */
    (xdc_Char)0x76,  /* [3752] */
    (xdc_Char)0x61,  /* [3753] */
    (xdc_Char)0x6c,  /* [3754] */
    (xdc_Char)0x69,  /* [3755] */
    (xdc_Char)0x64,  /* [3756] */
    (xdc_Char)0x20,  /* [3757] */
    (xdc_Char)0x54,  /* [3758] */
    (xdc_Char)0x69,  /* [3759] */
    (xdc_Char)0x6d,  /* [3760] */
    (xdc_Char)0x65,  /* [3761] */
    (xdc_Char)0x72,  /* [3762] */
    (xdc_Char)0x20,  /* [3763] */
    (xdc_Char)0x49,  /* [3764] */
    (xdc_Char)0x64,  /* [3765] */
    (xdc_Char)0x20,  /* [3766] */
    (xdc_Char)0x25,  /* [3767] */
    (xdc_Char)0x64,  /* [3768] */
    (xdc_Char)0x0,  /* [3769] */
    (xdc_Char)0x45,  /* [3770] */
    (xdc_Char)0x5f,  /* [3771] */
    (xdc_Char)0x6e,  /* [3772] */
    (xdc_Char)0x6f,  /* [3773] */
    (xdc_Char)0x74,  /* [3774] */
    (xdc_Char)0x41,  /* [3775] */
    (xdc_Char)0x76,  /* [3776] */
    (xdc_Char)0x61,  /* [3777] */
    (xdc_Char)0x69,  /* [3778] */
    (xdc_Char)0x6c,  /* [3779] */
    (xdc_Char)0x61,  /* [3780] */
    (xdc_Char)0x62,  /* [3781] */
    (xdc_Char)0x6c,  /* [3782] */
    (xdc_Char)0x65,  /* [3783] */
    (xdc_Char)0x3a,  /* [3784] */
    (xdc_Char)0x20,  /* [3785] */
    (xdc_Char)0x54,  /* [3786] */
    (xdc_Char)0x69,  /* [3787] */
    (xdc_Char)0x6d,  /* [3788] */
    (xdc_Char)0x65,  /* [3789] */
    (xdc_Char)0x72,  /* [3790] */
    (xdc_Char)0x20,  /* [3791] */
    (xdc_Char)0x6e,  /* [3792] */
    (xdc_Char)0x6f,  /* [3793] */
    (xdc_Char)0x74,  /* [3794] */
    (xdc_Char)0x20,  /* [3795] */
    (xdc_Char)0x61,  /* [3796] */
    (xdc_Char)0x76,  /* [3797] */
    (xdc_Char)0x61,  /* [3798] */
    (xdc_Char)0x69,  /* [3799] */
    (xdc_Char)0x6c,  /* [3800] */
    (xdc_Char)0x61,  /* [3801] */
    (xdc_Char)0x62,  /* [3802] */
    (xdc_Char)0x6c,  /* [3803] */
    (xdc_Char)0x65,  /* [3804] */
    (xdc_Char)0x20,  /* [3805] */
    (xdc_Char)0x25,  /* [3806] */
    (xdc_Char)0x64,  /* [3807] */
    (xdc_Char)0x0,  /* [3808] */
    (xdc_Char)0x45,  /* [3809] */
    (xdc_Char)0x5f,  /* [3810] */
    (xdc_Char)0x63,  /* [3811] */
    (xdc_Char)0x61,  /* [3812] */
    (xdc_Char)0x6e,  /* [3813] */
    (xdc_Char)0x6e,  /* [3814] */
    (xdc_Char)0x6f,  /* [3815] */
    (xdc_Char)0x74,  /* [3816] */
    (xdc_Char)0x53,  /* [3817] */
    (xdc_Char)0x75,  /* [3818] */
    (xdc_Char)0x70,  /* [3819] */
    (xdc_Char)0x70,  /* [3820] */
    (xdc_Char)0x6f,  /* [3821] */
    (xdc_Char)0x72,  /* [3822] */
    (xdc_Char)0x74,  /* [3823] */
    (xdc_Char)0x3a,  /* [3824] */
    (xdc_Char)0x20,  /* [3825] */
    (xdc_Char)0x54,  /* [3826] */
    (xdc_Char)0x69,  /* [3827] */
    (xdc_Char)0x6d,  /* [3828] */
    (xdc_Char)0x65,  /* [3829] */
    (xdc_Char)0x72,  /* [3830] */
    (xdc_Char)0x20,  /* [3831] */
    (xdc_Char)0x63,  /* [3832] */
    (xdc_Char)0x61,  /* [3833] */
    (xdc_Char)0x6e,  /* [3834] */
    (xdc_Char)0x6e,  /* [3835] */
    (xdc_Char)0x6f,  /* [3836] */
    (xdc_Char)0x74,  /* [3837] */
    (xdc_Char)0x20,  /* [3838] */
    (xdc_Char)0x73,  /* [3839] */
    (xdc_Char)0x75,  /* [3840] */
    (xdc_Char)0x70,  /* [3841] */
    (xdc_Char)0x70,  /* [3842] */
    (xdc_Char)0x6f,  /* [3843] */
    (xdc_Char)0x72,  /* [3844] */
    (xdc_Char)0x74,  /* [3845] */
    (xdc_Char)0x20,  /* [3846] */
    (xdc_Char)0x72,  /* [3847] */
    (xdc_Char)0x65,  /* [3848] */
    (xdc_Char)0x71,  /* [3849] */
    (xdc_Char)0x75,  /* [3850] */
    (xdc_Char)0x65,  /* [3851] */
    (xdc_Char)0x73,  /* [3852] */
    (xdc_Char)0x74,  /* [3853] */
    (xdc_Char)0x65,  /* [3854] */
    (xdc_Char)0x64,  /* [3855] */
    (xdc_Char)0x20,  /* [3856] */
    (xdc_Char)0x70,  /* [3857] */
    (xdc_Char)0x65,  /* [3858] */
    (xdc_Char)0x72,  /* [3859] */
    (xdc_Char)0x69,  /* [3860] */
    (xdc_Char)0x6f,  /* [3861] */
    (xdc_Char)0x64,  /* [3862] */
    (xdc_Char)0x20,  /* [3863] */
    (xdc_Char)0x25,  /* [3864] */
    (xdc_Char)0x64,  /* [3865] */
    (xdc_Char)0x0,  /* [3866] */
    (xdc_Char)0x45,  /* [3867] */
    (xdc_Char)0x5f,  /* [3868] */
    (xdc_Char)0x6e,  /* [3869] */
    (xdc_Char)0x6f,  /* [3870] */
    (xdc_Char)0x61,  /* [3871] */
    (xdc_Char)0x6c,  /* [3872] */
    (xdc_Char)0x74,  /* [3873] */
    (xdc_Char)0x63,  /* [3874] */
    (xdc_Char)0x6c,  /* [3875] */
    (xdc_Char)0x6b,  /* [3876] */
    (xdc_Char)0x3a,  /* [3877] */
    (xdc_Char)0x20,  /* [3878] */
    (xdc_Char)0x54,  /* [3879] */
    (xdc_Char)0x69,  /* [3880] */
    (xdc_Char)0x6d,  /* [3881] */
    (xdc_Char)0x65,  /* [3882] */
    (xdc_Char)0x72,  /* [3883] */
    (xdc_Char)0x20,  /* [3884] */
    (xdc_Char)0x64,  /* [3885] */
    (xdc_Char)0x6f,  /* [3886] */
    (xdc_Char)0x65,  /* [3887] */
    (xdc_Char)0x73,  /* [3888] */
    (xdc_Char)0x20,  /* [3889] */
    (xdc_Char)0x6e,  /* [3890] */
    (xdc_Char)0x6f,  /* [3891] */
    (xdc_Char)0x74,  /* [3892] */
    (xdc_Char)0x20,  /* [3893] */
    (xdc_Char)0x73,  /* [3894] */
    (xdc_Char)0x75,  /* [3895] */
    (xdc_Char)0x70,  /* [3896] */
    (xdc_Char)0x70,  /* [3897] */
    (xdc_Char)0x6f,  /* [3898] */
    (xdc_Char)0x72,  /* [3899] */
    (xdc_Char)0x74,  /* [3900] */
    (xdc_Char)0x20,  /* [3901] */
    (xdc_Char)0x61,  /* [3902] */
    (xdc_Char)0x6c,  /* [3903] */
    (xdc_Char)0x74,  /* [3904] */
    (xdc_Char)0x63,  /* [3905] */
    (xdc_Char)0x6c,  /* [3906] */
    (xdc_Char)0x6b,  /* [3907] */
    (xdc_Char)0x0,  /* [3908] */
    (xdc_Char)0x3c,  /* [3909] */
    (xdc_Char)0x2d,  /* [3910] */
    (xdc_Char)0x2d,  /* [3911] */
    (xdc_Char)0x20,  /* [3912] */
    (xdc_Char)0x63,  /* [3913] */
    (xdc_Char)0x6f,  /* [3914] */
    (xdc_Char)0x6e,  /* [3915] */
    (xdc_Char)0x73,  /* [3916] */
    (xdc_Char)0x74,  /* [3917] */
    (xdc_Char)0x72,  /* [3918] */
    (xdc_Char)0x75,  /* [3919] */
    (xdc_Char)0x63,  /* [3920] */
    (xdc_Char)0x74,  /* [3921] */
    (xdc_Char)0x3a,  /* [3922] */
    (xdc_Char)0x20,  /* [3923] */
    (xdc_Char)0x25,  /* [3924] */
    (xdc_Char)0x70,  /* [3925] */
    (xdc_Char)0x28,  /* [3926] */
    (xdc_Char)0x27,  /* [3927] */
    (xdc_Char)0x25,  /* [3928] */
    (xdc_Char)0x73,  /* [3929] */
    (xdc_Char)0x27,  /* [3930] */
    (xdc_Char)0x29,  /* [3931] */
    (xdc_Char)0x0,  /* [3932] */
    (xdc_Char)0x3c,  /* [3933] */
    (xdc_Char)0x2d,  /* [3934] */
    (xdc_Char)0x2d,  /* [3935] */
    (xdc_Char)0x20,  /* [3936] */
    (xdc_Char)0x63,  /* [3937] */
    (xdc_Char)0x72,  /* [3938] */
    (xdc_Char)0x65,  /* [3939] */
    (xdc_Char)0x61,  /* [3940] */
    (xdc_Char)0x74,  /* [3941] */
    (xdc_Char)0x65,  /* [3942] */
    (xdc_Char)0x3a,  /* [3943] */
    (xdc_Char)0x20,  /* [3944] */
    (xdc_Char)0x25,  /* [3945] */
    (xdc_Char)0x70,  /* [3946] */
    (xdc_Char)0x28,  /* [3947] */
    (xdc_Char)0x27,  /* [3948] */
    (xdc_Char)0x25,  /* [3949] */
    (xdc_Char)0x73,  /* [3950] */
    (xdc_Char)0x27,  /* [3951] */
    (xdc_Char)0x29,  /* [3952] */
    (xdc_Char)0x0,  /* [3953] */
    (xdc_Char)0x2d,  /* [3954] */
    (xdc_Char)0x2d,  /* [3955] */
    (xdc_Char)0x3e,  /* [3956] */
    (xdc_Char)0x20,  /* [3957] */
    (xdc_Char)0x64,  /* [3958] */
    (xdc_Char)0x65,  /* [3959] */
    (xdc_Char)0x73,  /* [3960] */
    (xdc_Char)0x74,  /* [3961] */
    (xdc_Char)0x72,  /* [3962] */
    (xdc_Char)0x75,  /* [3963] */
    (xdc_Char)0x63,  /* [3964] */
    (xdc_Char)0x74,  /* [3965] */
    (xdc_Char)0x3a,  /* [3966] */
    (xdc_Char)0x20,  /* [3967] */
    (xdc_Char)0x28,  /* [3968] */
    (xdc_Char)0x25,  /* [3969] */
    (xdc_Char)0x70,  /* [3970] */
    (xdc_Char)0x29,  /* [3971] */
    (xdc_Char)0x0,  /* [3972] */
    (xdc_Char)0x2d,  /* [3973] */
    (xdc_Char)0x2d,  /* [3974] */
    (xdc_Char)0x3e,  /* [3975] */
    (xdc_Char)0x20,  /* [3976] */
    (xdc_Char)0x64,  /* [3977] */
    (xdc_Char)0x65,  /* [3978] */
    (xdc_Char)0x6c,  /* [3979] */
    (xdc_Char)0x65,  /* [3980] */
    (xdc_Char)0x74,  /* [3981] */
    (xdc_Char)0x65,  /* [3982] */
    (xdc_Char)0x3a,  /* [3983] */
    (xdc_Char)0x20,  /* [3984] */
    (xdc_Char)0x28,  /* [3985] */
    (xdc_Char)0x25,  /* [3986] */
    (xdc_Char)0x70,  /* [3987] */
    (xdc_Char)0x29,  /* [3988] */
    (xdc_Char)0x0,  /* [3989] */
    (xdc_Char)0x45,  /* [3990] */
    (xdc_Char)0x52,  /* [3991] */
    (xdc_Char)0x52,  /* [3992] */
    (xdc_Char)0x4f,  /* [3993] */
    (xdc_Char)0x52,  /* [3994] */
    (xdc_Char)0x3a,  /* [3995] */
    (xdc_Char)0x20,  /* [3996] */
    (xdc_Char)0x25,  /* [3997] */
    (xdc_Char)0x24,  /* [3998] */
    (xdc_Char)0x46,  /* [3999] */
    (xdc_Char)0x25,  /* [4000] */
    (xdc_Char)0x24,  /* [4001] */
    (xdc_Char)0x53,  /* [4002] */
    (xdc_Char)0x0,  /* [4003] */
    (xdc_Char)0x57,  /* [4004] */
    (xdc_Char)0x41,  /* [4005] */
    (xdc_Char)0x52,  /* [4006] */
    (xdc_Char)0x4e,  /* [4007] */
    (xdc_Char)0x49,  /* [4008] */
    (xdc_Char)0x4e,  /* [4009] */
    (xdc_Char)0x47,  /* [4010] */
    (xdc_Char)0x3a,  /* [4011] */
    (xdc_Char)0x20,  /* [4012] */
    (xdc_Char)0x25,  /* [4013] */
    (xdc_Char)0x24,  /* [4014] */
    (xdc_Char)0x46,  /* [4015] */
    (xdc_Char)0x25,  /* [4016] */
    (xdc_Char)0x24,  /* [4017] */
    (xdc_Char)0x53,  /* [4018] */
    (xdc_Char)0x0,  /* [4019] */
    (xdc_Char)0x25,  /* [4020] */
    (xdc_Char)0x24,  /* [4021] */
    (xdc_Char)0x46,  /* [4022] */
    (xdc_Char)0x25,  /* [4023] */
    (xdc_Char)0x24,  /* [4024] */
    (xdc_Char)0x53,  /* [4025] */
    (xdc_Char)0x0,  /* [4026] */
    (xdc_Char)0x53,  /* [4027] */
    (xdc_Char)0x74,  /* [4028] */
    (xdc_Char)0x61,  /* [4029] */
    (xdc_Char)0x72,  /* [4030] */
    (xdc_Char)0x74,  /* [4031] */
    (xdc_Char)0x3a,  /* [4032] */
    (xdc_Char)0x20,  /* [4033] */
    (xdc_Char)0x25,  /* [4034] */
    (xdc_Char)0x24,  /* [4035] */
    (xdc_Char)0x53,  /* [4036] */
    (xdc_Char)0x0,  /* [4037] */
    (xdc_Char)0x53,  /* [4038] */
    (xdc_Char)0x74,  /* [4039] */
    (xdc_Char)0x6f,  /* [4040] */
    (xdc_Char)0x70,  /* [4041] */
    (xdc_Char)0x3a,  /* [4042] */
    (xdc_Char)0x20,  /* [4043] */
    (xdc_Char)0x25,  /* [4044] */
    (xdc_Char)0x24,  /* [4045] */
    (xdc_Char)0x53,  /* [4046] */
    (xdc_Char)0x0,  /* [4047] */
    (xdc_Char)0x53,  /* [4048] */
    (xdc_Char)0x74,  /* [4049] */
    (xdc_Char)0x61,  /* [4050] */
    (xdc_Char)0x72,  /* [4051] */
    (xdc_Char)0x74,  /* [4052] */
    (xdc_Char)0x49,  /* [4053] */
    (xdc_Char)0x6e,  /* [4054] */
    (xdc_Char)0x73,  /* [4055] */
    (xdc_Char)0x74,  /* [4056] */
    (xdc_Char)0x61,  /* [4057] */
    (xdc_Char)0x6e,  /* [4058] */
    (xdc_Char)0x63,  /* [4059] */
    (xdc_Char)0x65,  /* [4060] */
    (xdc_Char)0x3a,  /* [4061] */
    (xdc_Char)0x20,  /* [4062] */
    (xdc_Char)0x25,  /* [4063] */
    (xdc_Char)0x24,  /* [4064] */
    (xdc_Char)0x53,  /* [4065] */
    (xdc_Char)0x0,  /* [4066] */
    (xdc_Char)0x53,  /* [4067] */
    (xdc_Char)0x74,  /* [4068] */
    (xdc_Char)0x6f,  /* [4069] */
    (xdc_Char)0x70,  /* [4070] */
    (xdc_Char)0x49,  /* [4071] */
    (xdc_Char)0x6e,  /* [4072] */
    (xdc_Char)0x73,  /* [4073] */
    (xdc_Char)0x74,  /* [4074] */
    (xdc_Char)0x61,  /* [4075] */
    (xdc_Char)0x6e,  /* [4076] */
    (xdc_Char)0x63,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x3a,  /* [4079] */
    (xdc_Char)0x20,  /* [4080] */
    (xdc_Char)0x25,  /* [4081] */
    (xdc_Char)0x24,  /* [4082] */
    (xdc_Char)0x53,  /* [4083] */
    (xdc_Char)0x0,  /* [4084] */
    (xdc_Char)0x4c,  /* [4085] */
    (xdc_Char)0x57,  /* [4086] */
    (xdc_Char)0x5f,  /* [4087] */
    (xdc_Char)0x64,  /* [4088] */
    (xdc_Char)0x65,  /* [4089] */
    (xdc_Char)0x6c,  /* [4090] */
    (xdc_Char)0x61,  /* [4091] */
    (xdc_Char)0x79,  /* [4092] */
    (xdc_Char)0x65,  /* [4093] */
    (xdc_Char)0x64,  /* [4094] */
    (xdc_Char)0x3a,  /* [4095] */
    (xdc_Char)0x20,  /* [4096] */
    (xdc_Char)0x64,  /* [4097] */
    (xdc_Char)0x65,  /* [4098] */
    (xdc_Char)0x6c,  /* [4099] */
    (xdc_Char)0x61,  /* [4100] */
    (xdc_Char)0x79,  /* [4101] */
    (xdc_Char)0x3a,  /* [4102] */
    (xdc_Char)0x20,  /* [4103] */
    (xdc_Char)0x25,  /* [4104] */
    (xdc_Char)0x64,  /* [4105] */
    (xdc_Char)0x0,  /* [4106] */
    (xdc_Char)0x4c,  /* [4107] */
    (xdc_Char)0x4d,  /* [4108] */
    (xdc_Char)0x5f,  /* [4109] */
    (xdc_Char)0x74,  /* [4110] */
    (xdc_Char)0x69,  /* [4111] */
    (xdc_Char)0x63,  /* [4112] */
    (xdc_Char)0x6b,  /* [4113] */
    (xdc_Char)0x3a,  /* [4114] */
    (xdc_Char)0x20,  /* [4115] */
    (xdc_Char)0x74,  /* [4116] */
    (xdc_Char)0x69,  /* [4117] */
    (xdc_Char)0x63,  /* [4118] */
    (xdc_Char)0x6b,  /* [4119] */
    (xdc_Char)0x3a,  /* [4120] */
    (xdc_Char)0x20,  /* [4121] */
    (xdc_Char)0x25,  /* [4122] */
    (xdc_Char)0x64,  /* [4123] */
    (xdc_Char)0x0,  /* [4124] */
    (xdc_Char)0x4c,  /* [4125] */
    (xdc_Char)0x4d,  /* [4126] */
    (xdc_Char)0x5f,  /* [4127] */
    (xdc_Char)0x62,  /* [4128] */
    (xdc_Char)0x65,  /* [4129] */
    (xdc_Char)0x67,  /* [4130] */
    (xdc_Char)0x69,  /* [4131] */
    (xdc_Char)0x6e,  /* [4132] */
    (xdc_Char)0x3a,  /* [4133] */
    (xdc_Char)0x20,  /* [4134] */
    (xdc_Char)0x63,  /* [4135] */
    (xdc_Char)0x6c,  /* [4136] */
    (xdc_Char)0x6b,  /* [4137] */
    (xdc_Char)0x3a,  /* [4138] */
    (xdc_Char)0x20,  /* [4139] */
    (xdc_Char)0x30,  /* [4140] */
    (xdc_Char)0x78,  /* [4141] */
    (xdc_Char)0x25,  /* [4142] */
    (xdc_Char)0x78,  /* [4143] */
    (xdc_Char)0x2c,  /* [4144] */
    (xdc_Char)0x20,  /* [4145] */
    (xdc_Char)0x66,  /* [4146] */
    (xdc_Char)0x75,  /* [4147] */
    (xdc_Char)0x6e,  /* [4148] */
    (xdc_Char)0x63,  /* [4149] */
    (xdc_Char)0x3a,  /* [4150] */
    (xdc_Char)0x20,  /* [4151] */
    (xdc_Char)0x30,  /* [4152] */
    (xdc_Char)0x78,  /* [4153] */
    (xdc_Char)0x25,  /* [4154] */
    (xdc_Char)0x78,  /* [4155] */
    (xdc_Char)0x0,  /* [4156] */
    (xdc_Char)0x4c,  /* [4157] */
    (xdc_Char)0x4d,  /* [4158] */
    (xdc_Char)0x5f,  /* [4159] */
    (xdc_Char)0x70,  /* [4160] */
    (xdc_Char)0x6f,  /* [4161] */
    (xdc_Char)0x73,  /* [4162] */
    (xdc_Char)0x74,  /* [4163] */
    (xdc_Char)0x3a,  /* [4164] */
    (xdc_Char)0x20,  /* [4165] */
    (xdc_Char)0x73,  /* [4166] */
    (xdc_Char)0x65,  /* [4167] */
    (xdc_Char)0x6d,  /* [4168] */
    (xdc_Char)0x3a,  /* [4169] */
    (xdc_Char)0x20,  /* [4170] */
    (xdc_Char)0x30,  /* [4171] */
    (xdc_Char)0x78,  /* [4172] */
    (xdc_Char)0x25,  /* [4173] */
    (xdc_Char)0x78,  /* [4174] */
    (xdc_Char)0x2c,  /* [4175] */
    (xdc_Char)0x20,  /* [4176] */
    (xdc_Char)0x63,  /* [4177] */
    (xdc_Char)0x6f,  /* [4178] */
    (xdc_Char)0x75,  /* [4179] */
    (xdc_Char)0x6e,  /* [4180] */
    (xdc_Char)0x74,  /* [4181] */
    (xdc_Char)0x3a,  /* [4182] */
    (xdc_Char)0x20,  /* [4183] */
    (xdc_Char)0x25,  /* [4184] */
    (xdc_Char)0x64,  /* [4185] */
    (xdc_Char)0x0,  /* [4186] */
    (xdc_Char)0x4c,  /* [4187] */
    (xdc_Char)0x4d,  /* [4188] */
    (xdc_Char)0x5f,  /* [4189] */
    (xdc_Char)0x70,  /* [4190] */
    (xdc_Char)0x65,  /* [4191] */
    (xdc_Char)0x6e,  /* [4192] */
    (xdc_Char)0x64,  /* [4193] */
    (xdc_Char)0x3a,  /* [4194] */
    (xdc_Char)0x20,  /* [4195] */
    (xdc_Char)0x73,  /* [4196] */
    (xdc_Char)0x65,  /* [4197] */
    (xdc_Char)0x6d,  /* [4198] */
    (xdc_Char)0x3a,  /* [4199] */
    (xdc_Char)0x20,  /* [4200] */
    (xdc_Char)0x30,  /* [4201] */
    (xdc_Char)0x78,  /* [4202] */
    (xdc_Char)0x25,  /* [4203] */
    (xdc_Char)0x78,  /* [4204] */
    (xdc_Char)0x2c,  /* [4205] */
    (xdc_Char)0x20,  /* [4206] */
    (xdc_Char)0x63,  /* [4207] */
    (xdc_Char)0x6f,  /* [4208] */
    (xdc_Char)0x75,  /* [4209] */
    (xdc_Char)0x6e,  /* [4210] */
    (xdc_Char)0x74,  /* [4211] */
    (xdc_Char)0x3a,  /* [4212] */
    (xdc_Char)0x20,  /* [4213] */
    (xdc_Char)0x25,  /* [4214] */
    (xdc_Char)0x64,  /* [4215] */
    (xdc_Char)0x2c,  /* [4216] */
    (xdc_Char)0x20,  /* [4217] */
    (xdc_Char)0x74,  /* [4218] */
    (xdc_Char)0x69,  /* [4219] */
    (xdc_Char)0x6d,  /* [4220] */
    (xdc_Char)0x65,  /* [4221] */
    (xdc_Char)0x6f,  /* [4222] */
    (xdc_Char)0x75,  /* [4223] */
    (xdc_Char)0x74,  /* [4224] */
    (xdc_Char)0x3a,  /* [4225] */
    (xdc_Char)0x20,  /* [4226] */
    (xdc_Char)0x25,  /* [4227] */
    (xdc_Char)0x64,  /* [4228] */
    (xdc_Char)0x0,  /* [4229] */
    (xdc_Char)0x4c,  /* [4230] */
    (xdc_Char)0x4d,  /* [4231] */
    (xdc_Char)0x5f,  /* [4232] */
    (xdc_Char)0x62,  /* [4233] */
    (xdc_Char)0x65,  /* [4234] */
    (xdc_Char)0x67,  /* [4235] */
    (xdc_Char)0x69,  /* [4236] */
    (xdc_Char)0x6e,  /* [4237] */
    (xdc_Char)0x3a,  /* [4238] */
    (xdc_Char)0x20,  /* [4239] */
    (xdc_Char)0x73,  /* [4240] */
    (xdc_Char)0x77,  /* [4241] */
    (xdc_Char)0x69,  /* [4242] */
    (xdc_Char)0x3a,  /* [4243] */
    (xdc_Char)0x20,  /* [4244] */
    (xdc_Char)0x30,  /* [4245] */
    (xdc_Char)0x78,  /* [4246] */
    (xdc_Char)0x25,  /* [4247] */
    (xdc_Char)0x78,  /* [4248] */
    (xdc_Char)0x2c,  /* [4249] */
    (xdc_Char)0x20,  /* [4250] */
    (xdc_Char)0x66,  /* [4251] */
    (xdc_Char)0x75,  /* [4252] */
    (xdc_Char)0x6e,  /* [4253] */
    (xdc_Char)0x63,  /* [4254] */
    (xdc_Char)0x3a,  /* [4255] */
    (xdc_Char)0x20,  /* [4256] */
    (xdc_Char)0x30,  /* [4257] */
    (xdc_Char)0x78,  /* [4258] */
    (xdc_Char)0x25,  /* [4259] */
    (xdc_Char)0x78,  /* [4260] */
    (xdc_Char)0x2c,  /* [4261] */
    (xdc_Char)0x20,  /* [4262] */
    (xdc_Char)0x70,  /* [4263] */
    (xdc_Char)0x72,  /* [4264] */
    (xdc_Char)0x65,  /* [4265] */
    (xdc_Char)0x54,  /* [4266] */
    (xdc_Char)0x68,  /* [4267] */
    (xdc_Char)0x72,  /* [4268] */
    (xdc_Char)0x65,  /* [4269] */
    (xdc_Char)0x61,  /* [4270] */
    (xdc_Char)0x64,  /* [4271] */
    (xdc_Char)0x3a,  /* [4272] */
    (xdc_Char)0x20,  /* [4273] */
    (xdc_Char)0x25,  /* [4274] */
    (xdc_Char)0x64,  /* [4275] */
    (xdc_Char)0x0,  /* [4276] */
    (xdc_Char)0x4c,  /* [4277] */
    (xdc_Char)0x44,  /* [4278] */
    (xdc_Char)0x5f,  /* [4279] */
    (xdc_Char)0x65,  /* [4280] */
    (xdc_Char)0x6e,  /* [4281] */
    (xdc_Char)0x64,  /* [4282] */
    (xdc_Char)0x3a,  /* [4283] */
    (xdc_Char)0x20,  /* [4284] */
    (xdc_Char)0x73,  /* [4285] */
    (xdc_Char)0x77,  /* [4286] */
    (xdc_Char)0x69,  /* [4287] */
    (xdc_Char)0x3a,  /* [4288] */
    (xdc_Char)0x20,  /* [4289] */
    (xdc_Char)0x30,  /* [4290] */
    (xdc_Char)0x78,  /* [4291] */
    (xdc_Char)0x25,  /* [4292] */
    (xdc_Char)0x78,  /* [4293] */
    (xdc_Char)0x0,  /* [4294] */
    (xdc_Char)0x4c,  /* [4295] */
    (xdc_Char)0x4d,  /* [4296] */
    (xdc_Char)0x5f,  /* [4297] */
    (xdc_Char)0x70,  /* [4298] */
    (xdc_Char)0x6f,  /* [4299] */
    (xdc_Char)0x73,  /* [4300] */
    (xdc_Char)0x74,  /* [4301] */
    (xdc_Char)0x3a,  /* [4302] */
    (xdc_Char)0x20,  /* [4303] */
    (xdc_Char)0x73,  /* [4304] */
    (xdc_Char)0x77,  /* [4305] */
    (xdc_Char)0x69,  /* [4306] */
    (xdc_Char)0x3a,  /* [4307] */
    (xdc_Char)0x20,  /* [4308] */
    (xdc_Char)0x30,  /* [4309] */
    (xdc_Char)0x78,  /* [4310] */
    (xdc_Char)0x25,  /* [4311] */
    (xdc_Char)0x78,  /* [4312] */
    (xdc_Char)0x2c,  /* [4313] */
    (xdc_Char)0x20,  /* [4314] */
    (xdc_Char)0x66,  /* [4315] */
    (xdc_Char)0x75,  /* [4316] */
    (xdc_Char)0x6e,  /* [4317] */
    (xdc_Char)0x63,  /* [4318] */
    (xdc_Char)0x3a,  /* [4319] */
    (xdc_Char)0x20,  /* [4320] */
    (xdc_Char)0x30,  /* [4321] */
    (xdc_Char)0x78,  /* [4322] */
    (xdc_Char)0x25,  /* [4323] */
    (xdc_Char)0x78,  /* [4324] */
    (xdc_Char)0x2c,  /* [4325] */
    (xdc_Char)0x20,  /* [4326] */
    (xdc_Char)0x70,  /* [4327] */
    (xdc_Char)0x72,  /* [4328] */
    (xdc_Char)0x69,  /* [4329] */
    (xdc_Char)0x3a,  /* [4330] */
    (xdc_Char)0x20,  /* [4331] */
    (xdc_Char)0x25,  /* [4332] */
    (xdc_Char)0x64,  /* [4333] */
    (xdc_Char)0x0,  /* [4334] */
    (xdc_Char)0x4c,  /* [4335] */
    (xdc_Char)0x4d,  /* [4336] */
    (xdc_Char)0x5f,  /* [4337] */
    (xdc_Char)0x73,  /* [4338] */
    (xdc_Char)0x77,  /* [4339] */
    (xdc_Char)0x69,  /* [4340] */
    (xdc_Char)0x74,  /* [4341] */
    (xdc_Char)0x63,  /* [4342] */
    (xdc_Char)0x68,  /* [4343] */
    (xdc_Char)0x3a,  /* [4344] */
    (xdc_Char)0x20,  /* [4345] */
    (xdc_Char)0x6f,  /* [4346] */
    (xdc_Char)0x6c,  /* [4347] */
    (xdc_Char)0x64,  /* [4348] */
    (xdc_Char)0x74,  /* [4349] */
    (xdc_Char)0x73,  /* [4350] */
    (xdc_Char)0x6b,  /* [4351] */
    (xdc_Char)0x3a,  /* [4352] */
    (xdc_Char)0x20,  /* [4353] */
    (xdc_Char)0x30,  /* [4354] */
    (xdc_Char)0x78,  /* [4355] */
    (xdc_Char)0x25,  /* [4356] */
    (xdc_Char)0x78,  /* [4357] */
    (xdc_Char)0x2c,  /* [4358] */
    (xdc_Char)0x20,  /* [4359] */
    (xdc_Char)0x6f,  /* [4360] */
    (xdc_Char)0x6c,  /* [4361] */
    (xdc_Char)0x64,  /* [4362] */
    (xdc_Char)0x66,  /* [4363] */
    (xdc_Char)0x75,  /* [4364] */
    (xdc_Char)0x6e,  /* [4365] */
    (xdc_Char)0x63,  /* [4366] */
    (xdc_Char)0x3a,  /* [4367] */
    (xdc_Char)0x20,  /* [4368] */
    (xdc_Char)0x30,  /* [4369] */
    (xdc_Char)0x78,  /* [4370] */
    (xdc_Char)0x25,  /* [4371] */
    (xdc_Char)0x78,  /* [4372] */
    (xdc_Char)0x2c,  /* [4373] */
    (xdc_Char)0x20,  /* [4374] */
    (xdc_Char)0x6e,  /* [4375] */
    (xdc_Char)0x65,  /* [4376] */
    (xdc_Char)0x77,  /* [4377] */
    (xdc_Char)0x74,  /* [4378] */
    (xdc_Char)0x73,  /* [4379] */
    (xdc_Char)0x6b,  /* [4380] */
    (xdc_Char)0x3a,  /* [4381] */
    (xdc_Char)0x20,  /* [4382] */
    (xdc_Char)0x30,  /* [4383] */
    (xdc_Char)0x78,  /* [4384] */
    (xdc_Char)0x25,  /* [4385] */
    (xdc_Char)0x78,  /* [4386] */
    (xdc_Char)0x2c,  /* [4387] */
    (xdc_Char)0x20,  /* [4388] */
    (xdc_Char)0x6e,  /* [4389] */
    (xdc_Char)0x65,  /* [4390] */
    (xdc_Char)0x77,  /* [4391] */
    (xdc_Char)0x66,  /* [4392] */
    (xdc_Char)0x75,  /* [4393] */
    (xdc_Char)0x6e,  /* [4394] */
    (xdc_Char)0x63,  /* [4395] */
    (xdc_Char)0x3a,  /* [4396] */
    (xdc_Char)0x20,  /* [4397] */
    (xdc_Char)0x30,  /* [4398] */
    (xdc_Char)0x78,  /* [4399] */
    (xdc_Char)0x25,  /* [4400] */
    (xdc_Char)0x78,  /* [4401] */
    (xdc_Char)0x0,  /* [4402] */
    (xdc_Char)0x4c,  /* [4403] */
    (xdc_Char)0x4d,  /* [4404] */
    (xdc_Char)0x5f,  /* [4405] */
    (xdc_Char)0x73,  /* [4406] */
    (xdc_Char)0x6c,  /* [4407] */
    (xdc_Char)0x65,  /* [4408] */
    (xdc_Char)0x65,  /* [4409] */
    (xdc_Char)0x70,  /* [4410] */
    (xdc_Char)0x3a,  /* [4411] */
    (xdc_Char)0x20,  /* [4412] */
    (xdc_Char)0x74,  /* [4413] */
    (xdc_Char)0x73,  /* [4414] */
    (xdc_Char)0x6b,  /* [4415] */
    (xdc_Char)0x3a,  /* [4416] */
    (xdc_Char)0x20,  /* [4417] */
    (xdc_Char)0x30,  /* [4418] */
    (xdc_Char)0x78,  /* [4419] */
    (xdc_Char)0x25,  /* [4420] */
    (xdc_Char)0x78,  /* [4421] */
    (xdc_Char)0x2c,  /* [4422] */
    (xdc_Char)0x20,  /* [4423] */
    (xdc_Char)0x66,  /* [4424] */
    (xdc_Char)0x75,  /* [4425] */
    (xdc_Char)0x6e,  /* [4426] */
    (xdc_Char)0x63,  /* [4427] */
    (xdc_Char)0x3a,  /* [4428] */
    (xdc_Char)0x20,  /* [4429] */
    (xdc_Char)0x30,  /* [4430] */
    (xdc_Char)0x78,  /* [4431] */
    (xdc_Char)0x25,  /* [4432] */
    (xdc_Char)0x78,  /* [4433] */
    (xdc_Char)0x2c,  /* [4434] */
    (xdc_Char)0x20,  /* [4435] */
    (xdc_Char)0x74,  /* [4436] */
    (xdc_Char)0x69,  /* [4437] */
    (xdc_Char)0x6d,  /* [4438] */
    (xdc_Char)0x65,  /* [4439] */
    (xdc_Char)0x6f,  /* [4440] */
    (xdc_Char)0x75,  /* [4441] */
    (xdc_Char)0x74,  /* [4442] */
    (xdc_Char)0x3a,  /* [4443] */
    (xdc_Char)0x20,  /* [4444] */
    (xdc_Char)0x25,  /* [4445] */
    (xdc_Char)0x64,  /* [4446] */
    (xdc_Char)0x0,  /* [4447] */
    (xdc_Char)0x4c,  /* [4448] */
    (xdc_Char)0x44,  /* [4449] */
    (xdc_Char)0x5f,  /* [4450] */
    (xdc_Char)0x72,  /* [4451] */
    (xdc_Char)0x65,  /* [4452] */
    (xdc_Char)0x61,  /* [4453] */
    (xdc_Char)0x64,  /* [4454] */
    (xdc_Char)0x79,  /* [4455] */
    (xdc_Char)0x3a,  /* [4456] */
    (xdc_Char)0x20,  /* [4457] */
    (xdc_Char)0x74,  /* [4458] */
    (xdc_Char)0x73,  /* [4459] */
    (xdc_Char)0x6b,  /* [4460] */
    (xdc_Char)0x3a,  /* [4461] */
    (xdc_Char)0x20,  /* [4462] */
    (xdc_Char)0x30,  /* [4463] */
    (xdc_Char)0x78,  /* [4464] */
    (xdc_Char)0x25,  /* [4465] */
    (xdc_Char)0x78,  /* [4466] */
    (xdc_Char)0x2c,  /* [4467] */
    (xdc_Char)0x20,  /* [4468] */
    (xdc_Char)0x66,  /* [4469] */
    (xdc_Char)0x75,  /* [4470] */
    (xdc_Char)0x6e,  /* [4471] */
    (xdc_Char)0x63,  /* [4472] */
    (xdc_Char)0x3a,  /* [4473] */
    (xdc_Char)0x20,  /* [4474] */
    (xdc_Char)0x30,  /* [4475] */
    (xdc_Char)0x78,  /* [4476] */
    (xdc_Char)0x25,  /* [4477] */
    (xdc_Char)0x78,  /* [4478] */
    (xdc_Char)0x2c,  /* [4479] */
    (xdc_Char)0x20,  /* [4480] */
    (xdc_Char)0x70,  /* [4481] */
    (xdc_Char)0x72,  /* [4482] */
    (xdc_Char)0x69,  /* [4483] */
    (xdc_Char)0x3a,  /* [4484] */
    (xdc_Char)0x20,  /* [4485] */
    (xdc_Char)0x25,  /* [4486] */
    (xdc_Char)0x64,  /* [4487] */
    (xdc_Char)0x0,  /* [4488] */
    (xdc_Char)0x4c,  /* [4489] */
    (xdc_Char)0x44,  /* [4490] */
    (xdc_Char)0x5f,  /* [4491] */
    (xdc_Char)0x62,  /* [4492] */
    (xdc_Char)0x6c,  /* [4493] */
    (xdc_Char)0x6f,  /* [4494] */
    (xdc_Char)0x63,  /* [4495] */
    (xdc_Char)0x6b,  /* [4496] */
    (xdc_Char)0x3a,  /* [4497] */
    (xdc_Char)0x20,  /* [4498] */
    (xdc_Char)0x74,  /* [4499] */
    (xdc_Char)0x73,  /* [4500] */
    (xdc_Char)0x6b,  /* [4501] */
    (xdc_Char)0x3a,  /* [4502] */
    (xdc_Char)0x20,  /* [4503] */
    (xdc_Char)0x30,  /* [4504] */
    (xdc_Char)0x78,  /* [4505] */
    (xdc_Char)0x25,  /* [4506] */
    (xdc_Char)0x78,  /* [4507] */
    (xdc_Char)0x2c,  /* [4508] */
    (xdc_Char)0x20,  /* [4509] */
    (xdc_Char)0x66,  /* [4510] */
    (xdc_Char)0x75,  /* [4511] */
    (xdc_Char)0x6e,  /* [4512] */
    (xdc_Char)0x63,  /* [4513] */
    (xdc_Char)0x3a,  /* [4514] */
    (xdc_Char)0x20,  /* [4515] */
    (xdc_Char)0x30,  /* [4516] */
    (xdc_Char)0x78,  /* [4517] */
    (xdc_Char)0x25,  /* [4518] */
    (xdc_Char)0x78,  /* [4519] */
    (xdc_Char)0x0,  /* [4520] */
    (xdc_Char)0x4c,  /* [4521] */
    (xdc_Char)0x4d,  /* [4522] */
    (xdc_Char)0x5f,  /* [4523] */
    (xdc_Char)0x79,  /* [4524] */
    (xdc_Char)0x69,  /* [4525] */
    (xdc_Char)0x65,  /* [4526] */
    (xdc_Char)0x6c,  /* [4527] */
    (xdc_Char)0x64,  /* [4528] */
    (xdc_Char)0x3a,  /* [4529] */
    (xdc_Char)0x20,  /* [4530] */
    (xdc_Char)0x74,  /* [4531] */
    (xdc_Char)0x73,  /* [4532] */
    (xdc_Char)0x6b,  /* [4533] */
    (xdc_Char)0x3a,  /* [4534] */
    (xdc_Char)0x20,  /* [4535] */
    (xdc_Char)0x30,  /* [4536] */
    (xdc_Char)0x78,  /* [4537] */
    (xdc_Char)0x25,  /* [4538] */
    (xdc_Char)0x78,  /* [4539] */
    (xdc_Char)0x2c,  /* [4540] */
    (xdc_Char)0x20,  /* [4541] */
    (xdc_Char)0x66,  /* [4542] */
    (xdc_Char)0x75,  /* [4543] */
    (xdc_Char)0x6e,  /* [4544] */
    (xdc_Char)0x63,  /* [4545] */
    (xdc_Char)0x3a,  /* [4546] */
    (xdc_Char)0x20,  /* [4547] */
    (xdc_Char)0x30,  /* [4548] */
    (xdc_Char)0x78,  /* [4549] */
    (xdc_Char)0x25,  /* [4550] */
    (xdc_Char)0x78,  /* [4551] */
    (xdc_Char)0x2c,  /* [4552] */
    (xdc_Char)0x20,  /* [4553] */
    (xdc_Char)0x63,  /* [4554] */
    (xdc_Char)0x75,  /* [4555] */
    (xdc_Char)0x72,  /* [4556] */
    (xdc_Char)0x72,  /* [4557] */
    (xdc_Char)0x54,  /* [4558] */
    (xdc_Char)0x68,  /* [4559] */
    (xdc_Char)0x72,  /* [4560] */
    (xdc_Char)0x65,  /* [4561] */
    (xdc_Char)0x61,  /* [4562] */
    (xdc_Char)0x64,  /* [4563] */
    (xdc_Char)0x3a,  /* [4564] */
    (xdc_Char)0x20,  /* [4565] */
    (xdc_Char)0x25,  /* [4566] */
    (xdc_Char)0x64,  /* [4567] */
    (xdc_Char)0x0,  /* [4568] */
    (xdc_Char)0x4c,  /* [4569] */
    (xdc_Char)0x4d,  /* [4570] */
    (xdc_Char)0x5f,  /* [4571] */
    (xdc_Char)0x73,  /* [4572] */
    (xdc_Char)0x65,  /* [4573] */
    (xdc_Char)0x74,  /* [4574] */
    (xdc_Char)0x50,  /* [4575] */
    (xdc_Char)0x72,  /* [4576] */
    (xdc_Char)0x69,  /* [4577] */
    (xdc_Char)0x3a,  /* [4578] */
    (xdc_Char)0x20,  /* [4579] */
    (xdc_Char)0x74,  /* [4580] */
    (xdc_Char)0x73,  /* [4581] */
    (xdc_Char)0x6b,  /* [4582] */
    (xdc_Char)0x3a,  /* [4583] */
    (xdc_Char)0x20,  /* [4584] */
    (xdc_Char)0x30,  /* [4585] */
    (xdc_Char)0x78,  /* [4586] */
    (xdc_Char)0x25,  /* [4587] */
    (xdc_Char)0x78,  /* [4588] */
    (xdc_Char)0x2c,  /* [4589] */
    (xdc_Char)0x20,  /* [4590] */
    (xdc_Char)0x66,  /* [4591] */
    (xdc_Char)0x75,  /* [4592] */
    (xdc_Char)0x6e,  /* [4593] */
    (xdc_Char)0x63,  /* [4594] */
    (xdc_Char)0x3a,  /* [4595] */
    (xdc_Char)0x20,  /* [4596] */
    (xdc_Char)0x30,  /* [4597] */
    (xdc_Char)0x78,  /* [4598] */
    (xdc_Char)0x25,  /* [4599] */
    (xdc_Char)0x78,  /* [4600] */
    (xdc_Char)0x2c,  /* [4601] */
    (xdc_Char)0x20,  /* [4602] */
    (xdc_Char)0x6f,  /* [4603] */
    (xdc_Char)0x6c,  /* [4604] */
    (xdc_Char)0x64,  /* [4605] */
    (xdc_Char)0x50,  /* [4606] */
    (xdc_Char)0x72,  /* [4607] */
    (xdc_Char)0x69,  /* [4608] */
    (xdc_Char)0x3a,  /* [4609] */
    (xdc_Char)0x20,  /* [4610] */
    (xdc_Char)0x25,  /* [4611] */
    (xdc_Char)0x64,  /* [4612] */
    (xdc_Char)0x2c,  /* [4613] */
    (xdc_Char)0x20,  /* [4614] */
    (xdc_Char)0x6e,  /* [4615] */
    (xdc_Char)0x65,  /* [4616] */
    (xdc_Char)0x77,  /* [4617] */
    (xdc_Char)0x50,  /* [4618] */
    (xdc_Char)0x72,  /* [4619] */
    (xdc_Char)0x69,  /* [4620] */
    (xdc_Char)0x20,  /* [4621] */
    (xdc_Char)0x25,  /* [4622] */
    (xdc_Char)0x64,  /* [4623] */
    (xdc_Char)0x0,  /* [4624] */
    (xdc_Char)0x4c,  /* [4625] */
    (xdc_Char)0x44,  /* [4626] */
    (xdc_Char)0x5f,  /* [4627] */
    (xdc_Char)0x65,  /* [4628] */
    (xdc_Char)0x78,  /* [4629] */
    (xdc_Char)0x69,  /* [4630] */
    (xdc_Char)0x74,  /* [4631] */
    (xdc_Char)0x3a,  /* [4632] */
    (xdc_Char)0x20,  /* [4633] */
    (xdc_Char)0x74,  /* [4634] */
    (xdc_Char)0x73,  /* [4635] */
    (xdc_Char)0x6b,  /* [4636] */
    (xdc_Char)0x3a,  /* [4637] */
    (xdc_Char)0x20,  /* [4638] */
    (xdc_Char)0x30,  /* [4639] */
    (xdc_Char)0x78,  /* [4640] */
    (xdc_Char)0x25,  /* [4641] */
    (xdc_Char)0x78,  /* [4642] */
    (xdc_Char)0x2c,  /* [4643] */
    (xdc_Char)0x20,  /* [4644] */
    (xdc_Char)0x66,  /* [4645] */
    (xdc_Char)0x75,  /* [4646] */
    (xdc_Char)0x6e,  /* [4647] */
    (xdc_Char)0x63,  /* [4648] */
    (xdc_Char)0x3a,  /* [4649] */
    (xdc_Char)0x20,  /* [4650] */
    (xdc_Char)0x30,  /* [4651] */
    (xdc_Char)0x78,  /* [4652] */
    (xdc_Char)0x25,  /* [4653] */
    (xdc_Char)0x78,  /* [4654] */
    (xdc_Char)0x0,  /* [4655] */
    (xdc_Char)0x4c,  /* [4656] */
    (xdc_Char)0x4d,  /* [4657] */
    (xdc_Char)0x5f,  /* [4658] */
    (xdc_Char)0x73,  /* [4659] */
    (xdc_Char)0x65,  /* [4660] */
    (xdc_Char)0x74,  /* [4661] */
    (xdc_Char)0x41,  /* [4662] */
    (xdc_Char)0x66,  /* [4663] */
    (xdc_Char)0x66,  /* [4664] */
    (xdc_Char)0x69,  /* [4665] */
    (xdc_Char)0x6e,  /* [4666] */
    (xdc_Char)0x69,  /* [4667] */
    (xdc_Char)0x74,  /* [4668] */
    (xdc_Char)0x79,  /* [4669] */
    (xdc_Char)0x3a,  /* [4670] */
    (xdc_Char)0x20,  /* [4671] */
    (xdc_Char)0x74,  /* [4672] */
    (xdc_Char)0x73,  /* [4673] */
    (xdc_Char)0x6b,  /* [4674] */
    (xdc_Char)0x3a,  /* [4675] */
    (xdc_Char)0x20,  /* [4676] */
    (xdc_Char)0x30,  /* [4677] */
    (xdc_Char)0x78,  /* [4678] */
    (xdc_Char)0x25,  /* [4679] */
    (xdc_Char)0x78,  /* [4680] */
    (xdc_Char)0x2c,  /* [4681] */
    (xdc_Char)0x20,  /* [4682] */
    (xdc_Char)0x66,  /* [4683] */
    (xdc_Char)0x75,  /* [4684] */
    (xdc_Char)0x6e,  /* [4685] */
    (xdc_Char)0x63,  /* [4686] */
    (xdc_Char)0x3a,  /* [4687] */
    (xdc_Char)0x20,  /* [4688] */
    (xdc_Char)0x30,  /* [4689] */
    (xdc_Char)0x78,  /* [4690] */
    (xdc_Char)0x25,  /* [4691] */
    (xdc_Char)0x78,  /* [4692] */
    (xdc_Char)0x2c,  /* [4693] */
    (xdc_Char)0x20,  /* [4694] */
    (xdc_Char)0x6f,  /* [4695] */
    (xdc_Char)0x6c,  /* [4696] */
    (xdc_Char)0x64,  /* [4697] */
    (xdc_Char)0x43,  /* [4698] */
    (xdc_Char)0x6f,  /* [4699] */
    (xdc_Char)0x72,  /* [4700] */
    (xdc_Char)0x65,  /* [4701] */
    (xdc_Char)0x3a,  /* [4702] */
    (xdc_Char)0x20,  /* [4703] */
    (xdc_Char)0x25,  /* [4704] */
    (xdc_Char)0x64,  /* [4705] */
    (xdc_Char)0x2c,  /* [4706] */
    (xdc_Char)0x20,  /* [4707] */
    (xdc_Char)0x6f,  /* [4708] */
    (xdc_Char)0x6c,  /* [4709] */
    (xdc_Char)0x64,  /* [4710] */
    (xdc_Char)0x41,  /* [4711] */
    (xdc_Char)0x66,  /* [4712] */
    (xdc_Char)0x66,  /* [4713] */
    (xdc_Char)0x69,  /* [4714] */
    (xdc_Char)0x6e,  /* [4715] */
    (xdc_Char)0x69,  /* [4716] */
    (xdc_Char)0x74,  /* [4717] */
    (xdc_Char)0x79,  /* [4718] */
    (xdc_Char)0x20,  /* [4719] */
    (xdc_Char)0x25,  /* [4720] */
    (xdc_Char)0x64,  /* [4721] */
    (xdc_Char)0x2c,  /* [4722] */
    (xdc_Char)0x20,  /* [4723] */
    (xdc_Char)0x6e,  /* [4724] */
    (xdc_Char)0x65,  /* [4725] */
    (xdc_Char)0x77,  /* [4726] */
    (xdc_Char)0x41,  /* [4727] */
    (xdc_Char)0x66,  /* [4728] */
    (xdc_Char)0x66,  /* [4729] */
    (xdc_Char)0x69,  /* [4730] */
    (xdc_Char)0x6e,  /* [4731] */
    (xdc_Char)0x69,  /* [4732] */
    (xdc_Char)0x74,  /* [4733] */
    (xdc_Char)0x79,  /* [4734] */
    (xdc_Char)0x20,  /* [4735] */
    (xdc_Char)0x25,  /* [4736] */
    (xdc_Char)0x64,  /* [4737] */
    (xdc_Char)0x0,  /* [4738] */
    (xdc_Char)0x4c,  /* [4739] */
    (xdc_Char)0x44,  /* [4740] */
    (xdc_Char)0x5f,  /* [4741] */
    (xdc_Char)0x73,  /* [4742] */
    (xdc_Char)0x63,  /* [4743] */
    (xdc_Char)0x68,  /* [4744] */
    (xdc_Char)0x65,  /* [4745] */
    (xdc_Char)0x64,  /* [4746] */
    (xdc_Char)0x75,  /* [4747] */
    (xdc_Char)0x6c,  /* [4748] */
    (xdc_Char)0x65,  /* [4749] */
    (xdc_Char)0x3a,  /* [4750] */
    (xdc_Char)0x20,  /* [4751] */
    (xdc_Char)0x63,  /* [4752] */
    (xdc_Char)0x6f,  /* [4753] */
    (xdc_Char)0x72,  /* [4754] */
    (xdc_Char)0x65,  /* [4755] */
    (xdc_Char)0x49,  /* [4756] */
    (xdc_Char)0x64,  /* [4757] */
    (xdc_Char)0x3a,  /* [4758] */
    (xdc_Char)0x20,  /* [4759] */
    (xdc_Char)0x25,  /* [4760] */
    (xdc_Char)0x64,  /* [4761] */
    (xdc_Char)0x2c,  /* [4762] */
    (xdc_Char)0x20,  /* [4763] */
    (xdc_Char)0x77,  /* [4764] */
    (xdc_Char)0x6f,  /* [4765] */
    (xdc_Char)0x72,  /* [4766] */
    (xdc_Char)0x6b,  /* [4767] */
    (xdc_Char)0x46,  /* [4768] */
    (xdc_Char)0x6c,  /* [4769] */
    (xdc_Char)0x61,  /* [4770] */
    (xdc_Char)0x67,  /* [4771] */
    (xdc_Char)0x3a,  /* [4772] */
    (xdc_Char)0x20,  /* [4773] */
    (xdc_Char)0x25,  /* [4774] */
    (xdc_Char)0x64,  /* [4775] */
    (xdc_Char)0x2c,  /* [4776] */
    (xdc_Char)0x20,  /* [4777] */
    (xdc_Char)0x63,  /* [4778] */
    (xdc_Char)0x75,  /* [4779] */
    (xdc_Char)0x72,  /* [4780] */
    (xdc_Char)0x53,  /* [4781] */
    (xdc_Char)0x65,  /* [4782] */
    (xdc_Char)0x74,  /* [4783] */
    (xdc_Char)0x4c,  /* [4784] */
    (xdc_Char)0x6f,  /* [4785] */
    (xdc_Char)0x63,  /* [4786] */
    (xdc_Char)0x61,  /* [4787] */
    (xdc_Char)0x6c,  /* [4788] */
    (xdc_Char)0x3a,  /* [4789] */
    (xdc_Char)0x20,  /* [4790] */
    (xdc_Char)0x25,  /* [4791] */
    (xdc_Char)0x64,  /* [4792] */
    (xdc_Char)0x2c,  /* [4793] */
    (xdc_Char)0x20,  /* [4794] */
    (xdc_Char)0x63,  /* [4795] */
    (xdc_Char)0x75,  /* [4796] */
    (xdc_Char)0x72,  /* [4797] */
    (xdc_Char)0x53,  /* [4798] */
    (xdc_Char)0x65,  /* [4799] */
    (xdc_Char)0x74,  /* [4800] */
    (xdc_Char)0x58,  /* [4801] */
    (xdc_Char)0x3a,  /* [4802] */
    (xdc_Char)0x20,  /* [4803] */
    (xdc_Char)0x25,  /* [4804] */
    (xdc_Char)0x64,  /* [4805] */
    (xdc_Char)0x2c,  /* [4806] */
    (xdc_Char)0x20,  /* [4807] */
    (xdc_Char)0x63,  /* [4808] */
    (xdc_Char)0x75,  /* [4809] */
    (xdc_Char)0x72,  /* [4810] */
    (xdc_Char)0x4d,  /* [4811] */
    (xdc_Char)0x61,  /* [4812] */
    (xdc_Char)0x73,  /* [4813] */
    (xdc_Char)0x6b,  /* [4814] */
    (xdc_Char)0x4c,  /* [4815] */
    (xdc_Char)0x6f,  /* [4816] */
    (xdc_Char)0x63,  /* [4817] */
    (xdc_Char)0x61,  /* [4818] */
    (xdc_Char)0x6c,  /* [4819] */
    (xdc_Char)0x3a,  /* [4820] */
    (xdc_Char)0x20,  /* [4821] */
    (xdc_Char)0x25,  /* [4822] */
    (xdc_Char)0x64,  /* [4823] */
    (xdc_Char)0x0,  /* [4824] */
    (xdc_Char)0x4c,  /* [4825] */
    (xdc_Char)0x44,  /* [4826] */
    (xdc_Char)0x5f,  /* [4827] */
    (xdc_Char)0x6e,  /* [4828] */
    (xdc_Char)0x6f,  /* [4829] */
    (xdc_Char)0x57,  /* [4830] */
    (xdc_Char)0x6f,  /* [4831] */
    (xdc_Char)0x72,  /* [4832] */
    (xdc_Char)0x6b,  /* [4833] */
    (xdc_Char)0x3a,  /* [4834] */
    (xdc_Char)0x20,  /* [4835] */
    (xdc_Char)0x63,  /* [4836] */
    (xdc_Char)0x6f,  /* [4837] */
    (xdc_Char)0x72,  /* [4838] */
    (xdc_Char)0x65,  /* [4839] */
    (xdc_Char)0x49,  /* [4840] */
    (xdc_Char)0x64,  /* [4841] */
    (xdc_Char)0x3a,  /* [4842] */
    (xdc_Char)0x20,  /* [4843] */
    (xdc_Char)0x25,  /* [4844] */
    (xdc_Char)0x64,  /* [4845] */
    (xdc_Char)0x2c,  /* [4846] */
    (xdc_Char)0x20,  /* [4847] */
    (xdc_Char)0x63,  /* [4848] */
    (xdc_Char)0x75,  /* [4849] */
    (xdc_Char)0x72,  /* [4850] */
    (xdc_Char)0x53,  /* [4851] */
    (xdc_Char)0x65,  /* [4852] */
    (xdc_Char)0x74,  /* [4853] */
    (xdc_Char)0x4c,  /* [4854] */
    (xdc_Char)0x6f,  /* [4855] */
    (xdc_Char)0x63,  /* [4856] */
    (xdc_Char)0x61,  /* [4857] */
    (xdc_Char)0x6c,  /* [4858] */
    (xdc_Char)0x3a,  /* [4859] */
    (xdc_Char)0x20,  /* [4860] */
    (xdc_Char)0x25,  /* [4861] */
    (xdc_Char)0x64,  /* [4862] */
    (xdc_Char)0x2c,  /* [4863] */
    (xdc_Char)0x20,  /* [4864] */
    (xdc_Char)0x63,  /* [4865] */
    (xdc_Char)0x75,  /* [4866] */
    (xdc_Char)0x72,  /* [4867] */
    (xdc_Char)0x53,  /* [4868] */
    (xdc_Char)0x65,  /* [4869] */
    (xdc_Char)0x74,  /* [4870] */
    (xdc_Char)0x58,  /* [4871] */
    (xdc_Char)0x3a,  /* [4872] */
    (xdc_Char)0x20,  /* [4873] */
    (xdc_Char)0x25,  /* [4874] */
    (xdc_Char)0x64,  /* [4875] */
    (xdc_Char)0x2c,  /* [4876] */
    (xdc_Char)0x20,  /* [4877] */
    (xdc_Char)0x63,  /* [4878] */
    (xdc_Char)0x75,  /* [4879] */
    (xdc_Char)0x72,  /* [4880] */
    (xdc_Char)0x4d,  /* [4881] */
    (xdc_Char)0x61,  /* [4882] */
    (xdc_Char)0x73,  /* [4883] */
    (xdc_Char)0x6b,  /* [4884] */
    (xdc_Char)0x4c,  /* [4885] */
    (xdc_Char)0x6f,  /* [4886] */
    (xdc_Char)0x63,  /* [4887] */
    (xdc_Char)0x61,  /* [4888] */
    (xdc_Char)0x6c,  /* [4889] */
    (xdc_Char)0x3a,  /* [4890] */
    (xdc_Char)0x20,  /* [4891] */
    (xdc_Char)0x25,  /* [4892] */
    (xdc_Char)0x64,  /* [4893] */
    (xdc_Char)0x0,  /* [4894] */
    (xdc_Char)0x4c,  /* [4895] */
    (xdc_Char)0x4d,  /* [4896] */
    (xdc_Char)0x5f,  /* [4897] */
    (xdc_Char)0x62,  /* [4898] */
    (xdc_Char)0x65,  /* [4899] */
    (xdc_Char)0x67,  /* [4900] */
    (xdc_Char)0x69,  /* [4901] */
    (xdc_Char)0x6e,  /* [4902] */
    (xdc_Char)0x3a,  /* [4903] */
    (xdc_Char)0x20,  /* [4904] */
    (xdc_Char)0x68,  /* [4905] */
    (xdc_Char)0x77,  /* [4906] */
    (xdc_Char)0x69,  /* [4907] */
    (xdc_Char)0x3a,  /* [4908] */
    (xdc_Char)0x20,  /* [4909] */
    (xdc_Char)0x30,  /* [4910] */
    (xdc_Char)0x78,  /* [4911] */
    (xdc_Char)0x25,  /* [4912] */
    (xdc_Char)0x78,  /* [4913] */
    (xdc_Char)0x2c,  /* [4914] */
    (xdc_Char)0x20,  /* [4915] */
    (xdc_Char)0x66,  /* [4916] */
    (xdc_Char)0x75,  /* [4917] */
    (xdc_Char)0x6e,  /* [4918] */
    (xdc_Char)0x63,  /* [4919] */
    (xdc_Char)0x3a,  /* [4920] */
    (xdc_Char)0x20,  /* [4921] */
    (xdc_Char)0x30,  /* [4922] */
    (xdc_Char)0x78,  /* [4923] */
    (xdc_Char)0x25,  /* [4924] */
    (xdc_Char)0x78,  /* [4925] */
    (xdc_Char)0x2c,  /* [4926] */
    (xdc_Char)0x20,  /* [4927] */
    (xdc_Char)0x70,  /* [4928] */
    (xdc_Char)0x72,  /* [4929] */
    (xdc_Char)0x65,  /* [4930] */
    (xdc_Char)0x54,  /* [4931] */
    (xdc_Char)0x68,  /* [4932] */
    (xdc_Char)0x72,  /* [4933] */
    (xdc_Char)0x65,  /* [4934] */
    (xdc_Char)0x61,  /* [4935] */
    (xdc_Char)0x64,  /* [4936] */
    (xdc_Char)0x3a,  /* [4937] */
    (xdc_Char)0x20,  /* [4938] */
    (xdc_Char)0x25,  /* [4939] */
    (xdc_Char)0x64,  /* [4940] */
    (xdc_Char)0x2c,  /* [4941] */
    (xdc_Char)0x20,  /* [4942] */
    (xdc_Char)0x69,  /* [4943] */
    (xdc_Char)0x6e,  /* [4944] */
    (xdc_Char)0x74,  /* [4945] */
    (xdc_Char)0x4e,  /* [4946] */
    (xdc_Char)0x75,  /* [4947] */
    (xdc_Char)0x6d,  /* [4948] */
    (xdc_Char)0x3a,  /* [4949] */
    (xdc_Char)0x20,  /* [4950] */
    (xdc_Char)0x25,  /* [4951] */
    (xdc_Char)0x64,  /* [4952] */
    (xdc_Char)0x2c,  /* [4953] */
    (xdc_Char)0x20,  /* [4954] */
    (xdc_Char)0x69,  /* [4955] */
    (xdc_Char)0x72,  /* [4956] */
    (xdc_Char)0x70,  /* [4957] */
    (xdc_Char)0x3a,  /* [4958] */
    (xdc_Char)0x20,  /* [4959] */
    (xdc_Char)0x30,  /* [4960] */
    (xdc_Char)0x78,  /* [4961] */
    (xdc_Char)0x25,  /* [4962] */
    (xdc_Char)0x78,  /* [4963] */
    (xdc_Char)0x0,  /* [4964] */
    (xdc_Char)0x4c,  /* [4965] */
    (xdc_Char)0x44,  /* [4966] */
    (xdc_Char)0x5f,  /* [4967] */
    (xdc_Char)0x65,  /* [4968] */
    (xdc_Char)0x6e,  /* [4969] */
    (xdc_Char)0x64,  /* [4970] */
    (xdc_Char)0x3a,  /* [4971] */
    (xdc_Char)0x20,  /* [4972] */
    (xdc_Char)0x68,  /* [4973] */
    (xdc_Char)0x77,  /* [4974] */
    (xdc_Char)0x69,  /* [4975] */
    (xdc_Char)0x3a,  /* [4976] */
    (xdc_Char)0x20,  /* [4977] */
    (xdc_Char)0x30,  /* [4978] */
    (xdc_Char)0x78,  /* [4979] */
    (xdc_Char)0x25,  /* [4980] */
    (xdc_Char)0x78,  /* [4981] */
    (xdc_Char)0x0,  /* [4982] */
    (xdc_Char)0x78,  /* [4983] */
    (xdc_Char)0x64,  /* [4984] */
    (xdc_Char)0x63,  /* [4985] */
    (xdc_Char)0x2e,  /* [4986] */
    (xdc_Char)0x0,  /* [4987] */
    (xdc_Char)0x72,  /* [4988] */
    (xdc_Char)0x75,  /* [4989] */
    (xdc_Char)0x6e,  /* [4990] */
    (xdc_Char)0x74,  /* [4991] */
    (xdc_Char)0x69,  /* [4992] */
    (xdc_Char)0x6d,  /* [4993] */
    (xdc_Char)0x65,  /* [4994] */
    (xdc_Char)0x2e,  /* [4995] */
    (xdc_Char)0x0,  /* [4996] */
    (xdc_Char)0x41,  /* [4997] */
    (xdc_Char)0x73,  /* [4998] */
    (xdc_Char)0x73,  /* [4999] */
    (xdc_Char)0x65,  /* [5000] */
    (xdc_Char)0x72,  /* [5001] */
    (xdc_Char)0x74,  /* [5002] */
    (xdc_Char)0x0,  /* [5003] */
    (xdc_Char)0x43,  /* [5004] */
    (xdc_Char)0x6f,  /* [5005] */
    (xdc_Char)0x72,  /* [5006] */
    (xdc_Char)0x65,  /* [5007] */
    (xdc_Char)0x0,  /* [5008] */
    (xdc_Char)0x44,  /* [5009] */
    (xdc_Char)0x65,  /* [5010] */
    (xdc_Char)0x66,  /* [5011] */
    (xdc_Char)0x61,  /* [5012] */
    (xdc_Char)0x75,  /* [5013] */
    (xdc_Char)0x6c,  /* [5014] */
    (xdc_Char)0x74,  /* [5015] */
    (xdc_Char)0x73,  /* [5016] */
    (xdc_Char)0x0,  /* [5017] */
    (xdc_Char)0x44,  /* [5018] */
    (xdc_Char)0x69,  /* [5019] */
    (xdc_Char)0x61,  /* [5020] */
    (xdc_Char)0x67,  /* [5021] */
    (xdc_Char)0x73,  /* [5022] */
    (xdc_Char)0x0,  /* [5023] */
    (xdc_Char)0x45,  /* [5024] */
    (xdc_Char)0x72,  /* [5025] */
    (xdc_Char)0x72,  /* [5026] */
    (xdc_Char)0x6f,  /* [5027] */
    (xdc_Char)0x72,  /* [5028] */
    (xdc_Char)0x0,  /* [5029] */
    (xdc_Char)0x47,  /* [5030] */
    (xdc_Char)0x61,  /* [5031] */
    (xdc_Char)0x74,  /* [5032] */
    (xdc_Char)0x65,  /* [5033] */
    (xdc_Char)0x0,  /* [5034] */
    (xdc_Char)0x4c,  /* [5035] */
    (xdc_Char)0x6f,  /* [5036] */
    (xdc_Char)0x67,  /* [5037] */
    (xdc_Char)0x0,  /* [5038] */
    (xdc_Char)0x4d,  /* [5039] */
    (xdc_Char)0x61,  /* [5040] */
    (xdc_Char)0x69,  /* [5041] */
    (xdc_Char)0x6e,  /* [5042] */
    (xdc_Char)0x0,  /* [5043] */
    (xdc_Char)0x4d,  /* [5044] */
    (xdc_Char)0x65,  /* [5045] */
    (xdc_Char)0x6d,  /* [5046] */
    (xdc_Char)0x6f,  /* [5047] */
    (xdc_Char)0x72,  /* [5048] */
    (xdc_Char)0x79,  /* [5049] */
    (xdc_Char)0x0,  /* [5050] */
    (xdc_Char)0x48,  /* [5051] */
    (xdc_Char)0x65,  /* [5052] */
    (xdc_Char)0x61,  /* [5053] */
    (xdc_Char)0x70,  /* [5054] */
    (xdc_Char)0x53,  /* [5055] */
    (xdc_Char)0x74,  /* [5056] */
    (xdc_Char)0x64,  /* [5057] */
    (xdc_Char)0x0,  /* [5058] */
    (xdc_Char)0x52,  /* [5059] */
    (xdc_Char)0x65,  /* [5060] */
    (xdc_Char)0x67,  /* [5061] */
    (xdc_Char)0x69,  /* [5062] */
    (xdc_Char)0x73,  /* [5063] */
    (xdc_Char)0x74,  /* [5064] */
    (xdc_Char)0x72,  /* [5065] */
    (xdc_Char)0x79,  /* [5066] */
    (xdc_Char)0x0,  /* [5067] */
    (xdc_Char)0x53,  /* [5068] */
    (xdc_Char)0x74,  /* [5069] */
    (xdc_Char)0x61,  /* [5070] */
    (xdc_Char)0x72,  /* [5071] */
    (xdc_Char)0x74,  /* [5072] */
    (xdc_Char)0x75,  /* [5073] */
    (xdc_Char)0x70,  /* [5074] */
    (xdc_Char)0x0,  /* [5075] */
    (xdc_Char)0x53,  /* [5076] */
    (xdc_Char)0x79,  /* [5077] */
    (xdc_Char)0x73,  /* [5078] */
    (xdc_Char)0x74,  /* [5079] */
    (xdc_Char)0x65,  /* [5080] */
    (xdc_Char)0x6d,  /* [5081] */
    (xdc_Char)0x0,  /* [5082] */
    (xdc_Char)0x53,  /* [5083] */
    (xdc_Char)0x79,  /* [5084] */
    (xdc_Char)0x73,  /* [5085] */
    (xdc_Char)0x4d,  /* [5086] */
    (xdc_Char)0x69,  /* [5087] */
    (xdc_Char)0x6e,  /* [5088] */
    (xdc_Char)0x0,  /* [5089] */
    (xdc_Char)0x54,  /* [5090] */
    (xdc_Char)0x65,  /* [5091] */
    (xdc_Char)0x78,  /* [5092] */
    (xdc_Char)0x74,  /* [5093] */
    (xdc_Char)0x0,  /* [5094] */
    (xdc_Char)0x74,  /* [5095] */
    (xdc_Char)0x69,  /* [5096] */
    (xdc_Char)0x2e,  /* [5097] */
    (xdc_Char)0x0,  /* [5098] */
    (xdc_Char)0x63,  /* [5099] */
    (xdc_Char)0x61,  /* [5100] */
    (xdc_Char)0x74,  /* [5101] */
    (xdc_Char)0x61,  /* [5102] */
    (xdc_Char)0x6c,  /* [5103] */
    (xdc_Char)0x6f,  /* [5104] */
    (xdc_Char)0x67,  /* [5105] */
    (xdc_Char)0x2e,  /* [5106] */
    (xdc_Char)0x0,  /* [5107] */
    (xdc_Char)0x61,  /* [5108] */
    (xdc_Char)0x72,  /* [5109] */
    (xdc_Char)0x6d,  /* [5110] */
    (xdc_Char)0x2e,  /* [5111] */
    (xdc_Char)0x0,  /* [5112] */
    (xdc_Char)0x63,  /* [5113] */
    (xdc_Char)0x6f,  /* [5114] */
    (xdc_Char)0x72,  /* [5115] */
    (xdc_Char)0x74,  /* [5116] */
    (xdc_Char)0x65,  /* [5117] */
    (xdc_Char)0x78,  /* [5118] */
    (xdc_Char)0x6d,  /* [5119] */
    (xdc_Char)0x34,  /* [5120] */
    (xdc_Char)0x2e,  /* [5121] */
    (xdc_Char)0x0,  /* [5122] */
    (xdc_Char)0x74,  /* [5123] */
    (xdc_Char)0x69,  /* [5124] */
    (xdc_Char)0x76,  /* [5125] */
    (xdc_Char)0x61,  /* [5126] */
    (xdc_Char)0x2e,  /* [5127] */
    (xdc_Char)0x0,  /* [5128] */
    (xdc_Char)0x63,  /* [5129] */
    (xdc_Char)0x65,  /* [5130] */
    (xdc_Char)0x2e,  /* [5131] */
    (xdc_Char)0x0,  /* [5132] */
    (xdc_Char)0x42,  /* [5133] */
    (xdc_Char)0x6f,  /* [5134] */
    (xdc_Char)0x6f,  /* [5135] */
    (xdc_Char)0x74,  /* [5136] */
    (xdc_Char)0x0,  /* [5137] */
    (xdc_Char)0x73,  /* [5138] */
    (xdc_Char)0x79,  /* [5139] */
    (xdc_Char)0x73,  /* [5140] */
    (xdc_Char)0x62,  /* [5141] */
    (xdc_Char)0x69,  /* [5142] */
    (xdc_Char)0x6f,  /* [5143] */
    (xdc_Char)0x73,  /* [5144] */
    (xdc_Char)0x2e,  /* [5145] */
    (xdc_Char)0x0,  /* [5146] */
    (xdc_Char)0x6b,  /* [5147] */
    (xdc_Char)0x6e,  /* [5148] */
    (xdc_Char)0x6c,  /* [5149] */
    (xdc_Char)0x2e,  /* [5150] */
    (xdc_Char)0x0,  /* [5151] */
    (xdc_Char)0x43,  /* [5152] */
    (xdc_Char)0x6c,  /* [5153] */
    (xdc_Char)0x6f,  /* [5154] */
    (xdc_Char)0x63,  /* [5155] */
    (xdc_Char)0x6b,  /* [5156] */
    (xdc_Char)0x0,  /* [5157] */
    (xdc_Char)0x49,  /* [5158] */
    (xdc_Char)0x64,  /* [5159] */
    (xdc_Char)0x6c,  /* [5160] */
    (xdc_Char)0x65,  /* [5161] */
    (xdc_Char)0x0,  /* [5162] */
    (xdc_Char)0x49,  /* [5163] */
    (xdc_Char)0x6e,  /* [5164] */
    (xdc_Char)0x74,  /* [5165] */
    (xdc_Char)0x72,  /* [5166] */
    (xdc_Char)0x69,  /* [5167] */
    (xdc_Char)0x6e,  /* [5168] */
    (xdc_Char)0x73,  /* [5169] */
    (xdc_Char)0x69,  /* [5170] */
    (xdc_Char)0x63,  /* [5171] */
    (xdc_Char)0x73,  /* [5172] */
    (xdc_Char)0x0,  /* [5173] */
    (xdc_Char)0x51,  /* [5174] */
    (xdc_Char)0x75,  /* [5175] */
    (xdc_Char)0x65,  /* [5176] */
    (xdc_Char)0x75,  /* [5177] */
    (xdc_Char)0x65,  /* [5178] */
    (xdc_Char)0x0,  /* [5179] */
    (xdc_Char)0x53,  /* [5180] */
    (xdc_Char)0x65,  /* [5181] */
    (xdc_Char)0x6d,  /* [5182] */
    (xdc_Char)0x61,  /* [5183] */
    (xdc_Char)0x70,  /* [5184] */
    (xdc_Char)0x68,  /* [5185] */
    (xdc_Char)0x6f,  /* [5186] */
    (xdc_Char)0x72,  /* [5187] */
    (xdc_Char)0x65,  /* [5188] */
    (xdc_Char)0x0,  /* [5189] */
    (xdc_Char)0x53,  /* [5190] */
    (xdc_Char)0x77,  /* [5191] */
    (xdc_Char)0x69,  /* [5192] */
    (xdc_Char)0x0,  /* [5193] */
    (xdc_Char)0x54,  /* [5194] */
    (xdc_Char)0x61,  /* [5195] */
    (xdc_Char)0x73,  /* [5196] */
    (xdc_Char)0x6b,  /* [5197] */
    (xdc_Char)0x0,  /* [5198] */
    (xdc_Char)0x42,  /* [5199] */
    (xdc_Char)0x49,  /* [5200] */
    (xdc_Char)0x4f,  /* [5201] */
    (xdc_Char)0x53,  /* [5202] */
    (xdc_Char)0x0,  /* [5203] */
    (xdc_Char)0x68,  /* [5204] */
    (xdc_Char)0x61,  /* [5205] */
    (xdc_Char)0x6c,  /* [5206] */
    (xdc_Char)0x2e,  /* [5207] */
    (xdc_Char)0x0,  /* [5208] */
    (xdc_Char)0x48,  /* [5209] */
    (xdc_Char)0x77,  /* [5210] */
    (xdc_Char)0x69,  /* [5211] */
    (xdc_Char)0x0,  /* [5212] */
    (xdc_Char)0x54,  /* [5213] */
    (xdc_Char)0x69,  /* [5214] */
    (xdc_Char)0x6d,  /* [5215] */
    (xdc_Char)0x65,  /* [5216] */
    (xdc_Char)0x72,  /* [5217] */
    (xdc_Char)0x0,  /* [5218] */
    (xdc_Char)0x67,  /* [5219] */
    (xdc_Char)0x61,  /* [5220] */
    (xdc_Char)0x74,  /* [5221] */
    (xdc_Char)0x65,  /* [5222] */
    (xdc_Char)0x73,  /* [5223] */
    (xdc_Char)0x2e,  /* [5224] */
    (xdc_Char)0x0,  /* [5225] */
    (xdc_Char)0x47,  /* [5226] */
    (xdc_Char)0x61,  /* [5227] */
    (xdc_Char)0x74,  /* [5228] */
    (xdc_Char)0x65,  /* [5229] */
    (xdc_Char)0x48,  /* [5230] */
    (xdc_Char)0x77,  /* [5231] */
    (xdc_Char)0x69,  /* [5232] */
    (xdc_Char)0x0,  /* [5233] */
    (xdc_Char)0x47,  /* [5234] */
    (xdc_Char)0x61,  /* [5235] */
    (xdc_Char)0x74,  /* [5236] */
    (xdc_Char)0x65,  /* [5237] */
    (xdc_Char)0x4d,  /* [5238] */
    (xdc_Char)0x75,  /* [5239] */
    (xdc_Char)0x74,  /* [5240] */
    (xdc_Char)0x65,  /* [5241] */
    (xdc_Char)0x78,  /* [5242] */
    (xdc_Char)0x0,  /* [5243] */
    (xdc_Char)0x66,  /* [5244] */
    (xdc_Char)0x61,  /* [5245] */
    (xdc_Char)0x6d,  /* [5246] */
    (xdc_Char)0x69,  /* [5247] */
    (xdc_Char)0x6c,  /* [5248] */
    (xdc_Char)0x79,  /* [5249] */
    (xdc_Char)0x2e,  /* [5250] */
    (xdc_Char)0x0,  /* [5251] */
    (xdc_Char)0x6d,  /* [5252] */
    (xdc_Char)0x33,  /* [5253] */
    (xdc_Char)0x2e,  /* [5254] */
    (xdc_Char)0x0,  /* [5255] */
    (xdc_Char)0x49,  /* [5256] */
    (xdc_Char)0x6e,  /* [5257] */
    (xdc_Char)0x74,  /* [5258] */
    (xdc_Char)0x72,  /* [5259] */
    (xdc_Char)0x69,  /* [5260] */
    (xdc_Char)0x6e,  /* [5261] */
    (xdc_Char)0x73,  /* [5262] */
    (xdc_Char)0x69,  /* [5263] */
    (xdc_Char)0x63,  /* [5264] */
    (xdc_Char)0x73,  /* [5265] */
    (xdc_Char)0x53,  /* [5266] */
    (xdc_Char)0x75,  /* [5267] */
    (xdc_Char)0x70,  /* [5268] */
    (xdc_Char)0x70,  /* [5269] */
    (xdc_Char)0x6f,  /* [5270] */
    (xdc_Char)0x72,  /* [5271] */
    (xdc_Char)0x74,  /* [5272] */
    (xdc_Char)0x0,  /* [5273] */
    (xdc_Char)0x54,  /* [5274] */
    (xdc_Char)0x61,  /* [5275] */
    (xdc_Char)0x73,  /* [5276] */
    (xdc_Char)0x6b,  /* [5277] */
    (xdc_Char)0x53,  /* [5278] */
    (xdc_Char)0x75,  /* [5279] */
    (xdc_Char)0x70,  /* [5280] */
    (xdc_Char)0x70,  /* [5281] */
    (xdc_Char)0x6f,  /* [5282] */
    (xdc_Char)0x72,  /* [5283] */
    (xdc_Char)0x74,  /* [5284] */
    (xdc_Char)0x0,  /* [5285] */
    (xdc_Char)0x6c,  /* [5286] */
    (xdc_Char)0x6d,  /* [5287] */
    (xdc_Char)0x34,  /* [5288] */
    (xdc_Char)0x2e,  /* [5289] */
    (xdc_Char)0x0,  /* [5290] */
    (xdc_Char)0x41,  /* [5291] */
    (xdc_Char)0x44,  /* [5292] */
    (xdc_Char)0x43,  /* [5293] */
    (xdc_Char)0x53,  /* [5294] */
    (xdc_Char)0x65,  /* [5295] */
    (xdc_Char)0x6d,  /* [5296] */
    (xdc_Char)0x0,  /* [5297] */
    (xdc_Char)0x55,  /* [5298] */
    (xdc_Char)0x41,  /* [5299] */
    (xdc_Char)0x52,  /* [5300] */
    (xdc_Char)0x54,  /* [5301] */
    (xdc_Char)0x53,  /* [5302] */
    (xdc_Char)0x65,  /* [5303] */
    (xdc_Char)0x6d,  /* [5304] */
    (xdc_Char)0x0,  /* [5305] */
    (xdc_Char)0x53,  /* [5306] */
    (xdc_Char)0x52,  /* [5307] */
    (xdc_Char)0x53,  /* [5308] */
    (xdc_Char)0x65,  /* [5309] */
    (xdc_Char)0x6d,  /* [5310] */
    (xdc_Char)0x0,  /* [5311] */
    (xdc_Char)0x41,  /* [5312] */
    (xdc_Char)0x44,  /* [5313] */
    (xdc_Char)0x43,  /* [5314] */
    (xdc_Char)0x74,  /* [5315] */
    (xdc_Char)0x61,  /* [5316] */
    (xdc_Char)0x73,  /* [5317] */
    (xdc_Char)0x6b,  /* [5318] */
    (xdc_Char)0x0,  /* [5319] */
    (xdc_Char)0x55,  /* [5320] */
    (xdc_Char)0x41,  /* [5321] */
    (xdc_Char)0x52,  /* [5322] */
    (xdc_Char)0x54,  /* [5323] */
    (xdc_Char)0x74,  /* [5324] */
    (xdc_Char)0x61,  /* [5325] */
    (xdc_Char)0x73,  /* [5326] */
    (xdc_Char)0x6b,  /* [5327] */
    (xdc_Char)0x0,  /* [5328] */
    (xdc_Char)0x53,  /* [5329] */
    (xdc_Char)0x77,  /* [5330] */
    (xdc_Char)0x69,  /* [5331] */
    (xdc_Char)0x74,  /* [5332] */
    (xdc_Char)0x63,  /* [5333] */
    (xdc_Char)0x68,  /* [5334] */
    (xdc_Char)0x52,  /* [5335] */
    (xdc_Char)0x65,  /* [5336] */
    (xdc_Char)0x61,  /* [5337] */
    (xdc_Char)0x64,  /* [5338] */
    (xdc_Char)0x0,  /* [5339] */
    (xdc_Char)0x74,  /* [5340] */
    (xdc_Char)0x69,  /* [5341] */
    (xdc_Char)0x2e,  /* [5342] */
    (xdc_Char)0x73,  /* [5343] */
    (xdc_Char)0x79,  /* [5344] */
    (xdc_Char)0x73,  /* [5345] */
    (xdc_Char)0x62,  /* [5346] */
    (xdc_Char)0x69,  /* [5347] */
    (xdc_Char)0x6f,  /* [5348] */
    (xdc_Char)0x73,  /* [5349] */
    (xdc_Char)0x2e,  /* [5350] */
    (xdc_Char)0x6b,  /* [5351] */
    (xdc_Char)0x6e,  /* [5352] */
    (xdc_Char)0x6c,  /* [5353] */
    (xdc_Char)0x2e,  /* [5354] */
    (xdc_Char)0x54,  /* [5355] */
    (xdc_Char)0x61,  /* [5356] */
    (xdc_Char)0x73,  /* [5357] */
    (xdc_Char)0x6b,  /* [5358] */
    (xdc_Char)0x2e,  /* [5359] */
    (xdc_Char)0x49,  /* [5360] */
    (xdc_Char)0x64,  /* [5361] */
    (xdc_Char)0x6c,  /* [5362] */
    (xdc_Char)0x65,  /* [5363] */
    (xdc_Char)0x54,  /* [5364] */
    (xdc_Char)0x61,  /* [5365] */
    (xdc_Char)0x73,  /* [5366] */
    (xdc_Char)0x6b,  /* [5367] */
    (xdc_Char)0x0,  /* [5368] */
    (xdc_Char)0x48,  /* [5369] */
    (xdc_Char)0x57,  /* [5370] */
    (xdc_Char)0x49,  /* [5371] */
    (xdc_Char)0x5f,  /* [5372] */
    (xdc_Char)0x54,  /* [5373] */
    (xdc_Char)0x49,  /* [5374] */
    (xdc_Char)0x4d,  /* [5375] */
    (xdc_Char)0x45,  /* [5376] */
    (xdc_Char)0x52,  /* [5377] */
    (xdc_Char)0x32,  /* [5378] */
    (xdc_Char)0x0,  /* [5379] */
    (xdc_Char)0x74,  /* [5380] */
    (xdc_Char)0x69,  /* [5381] */
    (xdc_Char)0x6d,  /* [5382] */
    (xdc_Char)0x65,  /* [5383] */
    (xdc_Char)0x72,  /* [5384] */
    (xdc_Char)0x30,  /* [5385] */
    (xdc_Char)0x0,  /* [5386] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[47] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1377,  /* left */
        (xdc_Bits16)0x137c,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1385,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x138c,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1391,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x139a,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13a0,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13a6,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13ab,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13af,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13b4,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13bb,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13c3,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13cc,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13d4,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13db,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x13e2,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x13e7,  /* left */
        (xdc_Bits16)0x13eb,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x13f4,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x13f9,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1403,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1409,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x140d,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x13e7,  /* left */
        (xdc_Bits16)0x1412,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x141b,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1420,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1426,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x142b,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1436,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x143c,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x1446,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8018,  /* left */
        (xdc_Bits16)0x144a,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x144f,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x1454,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8021,  /* left */
        (xdc_Bits16)0x1459,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8021,  /* left */
        (xdc_Bits16)0x145d,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x1463,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x146a,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x1472,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x147c,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x13f4,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1484,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x1459,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x1488,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x8029,  /* left */
        (xdc_Bits16)0x149a,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x14a6,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802d,  /* left */
        (xdc_Bits16)0x145d,  /* right */
    },  /* [46] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x150b;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x2f;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_BIOS_RtsGateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_BIOS_RtsGateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_BIOS_RtsGateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_IHwi_Params), __eb);
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_HwiProxy_Args__create __args;
    __args.intNum = intNum;
    __args.hwiFxn = hwiFxn;
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_hal_Hwi_HwiProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Hwi_HwiProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_m3_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_lm4_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_lm4_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_hal_Timer_TimerProxy_Handle ti_sysbios_hal_Timer_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_hal_Timer_TimerProxy_Handle)ti_sysbios_hal_Timer_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Timer_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_hal_Timer_TimerProxy_delete(ti_sysbios_hal_Timer_TimerProxy_Handle *instp)
{
    ti_sysbios_hal_Timer_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCurrentTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_lm4_Timer_getCurrentTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_lm4_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_lm4_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_knl_Clock_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Clock_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_knl_Clock_TimerProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_knl_Clock_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredTicks((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_lm4_Timer_getCurrentTick((ti_sysbios_family_arm_lm4_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.HeapStd */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_HeapStd_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return xdc_runtime_HeapStd_Object__create__S(__obj, __osz, __aa, (xdc_runtime_HeapStd___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IHeap_Params), __eb);
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)xdc_runtime_Memory_HeapProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Memory_HeapProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_HeapStd_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    xdc_runtime_Memory_HeapProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_HeapStd_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return xdc_runtime_HeapStd_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)xdc_runtime_System_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_System_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    xdc_runtime_System_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.HeapStd OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_HeapStd_Object2__ s0; char c; } xdc_runtime_HeapStd___S1;
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__DESC__C, ".const:xdc_runtime_HeapStd_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_HeapStd_Object__DESC__C = {
    (xdc_Ptr)&xdc_runtime_HeapStd_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_HeapStd_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_HeapStd___S1) - sizeof(xdc_runtime_HeapStd_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_HeapStd_Object2__), /* objSize */
    (xdc_Ptr)&xdc_runtime_HeapStd_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_HeapStd_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.catalog.arm.cortexm4.tiva.ce.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_catalog_arm_cortexm4_tiva_ce_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_lm4_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32814;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_lm4_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_lm4_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_lm4_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    ti_sysbios_family_arm_lm4_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_lm4_Timer_Handle ti_sysbios_family_arm_lm4_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    ti_sysbios_family_arm_lm4_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_lm4_Timer_construct(ti_sysbios_family_arm_lm4_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_lm4_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_lm4_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_lm4_Timer_destruct(ti_sysbios_family_arm_lm4_Timer_Struct *obj)
{
    ti_sysbios_family_arm_lm4_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_lm4_Timer_delete(ti_sysbios_family_arm_lm4_Timer_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32810;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_m3_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    ti_sysbios_family_arm_m3_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__ *)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    ti_sysbios_gates_GateHwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32806;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__ *)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    ti_sysbios_gates_GateMutex_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__ *)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    ti_sysbios_hal_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__ *)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Timer_Args__create *__args = __aa;
    ti_sysbios_hal_Timer_Params __prms;
    ti_sysbios_hal_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Timer_Handle ti_sysbios_hal_Timer_create( xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_Params __prms;
    ti_sysbios_hal_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Timer_construct(ti_sysbios_hal_Timer_Struct *__obj, xdc_Int id, ti_sysbios_hal_Timer_FuncPtr tickFxn, const ti_sysbios_hal_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Timer_destruct(ti_sysbios_hal_Timer_Struct *obj)
{
    ti_sysbios_hal_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Timer_delete(ti_sysbios_hal_Timer_Handle *instp)
{
    ti_sysbios_hal_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32793;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__ *)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, __args->clockFxn, __args->timeout, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, clockFxn, timeout, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    ti_sysbios_knl_Clock_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32796;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__ *)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Queue___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    ti_sysbios_knl_Queue_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__ *)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, __args->count, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, count, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    ti_sysbios_knl_Semaphore_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__ *)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Swi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, __args->swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    ti_sysbios_knl_Swi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__ *)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Task___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, __args->fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    ti_sysbios_knl_Task_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.HeapStd SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_HeapStd_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_HeapStd_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_HeapStd_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_HeapStd_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_HeapStd_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_HeapStd_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_HeapStd_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_HeapStd_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_HeapStd_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_HeapStd_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_HeapStd_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_HeapStd_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_HeapStd_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_HeapStd_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_HeapStd_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_HeapStd_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_HeapStd_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_HeapStd_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_HeapStd_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_HeapStd_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32779;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_HeapStd_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_HeapStd_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_HeapStd_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((xdc_runtime_HeapStd_Object__ *)oa) + i;
    }

    if (xdc_runtime_HeapStd_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_HeapStd_Object__ *)xdc_runtime_HeapStd_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_HeapStd_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_HeapStd_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_HeapStd_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_HeapStd_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_HeapStd_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_HeapStd_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_HeapStd___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    xdc_runtime_HeapStd_Params __prms;
    xdc_runtime_HeapStd_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_HeapStd_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_HeapStd_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_HeapStd_Instance_init__E(__newobj, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, __newobj, NULL, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
xdc_runtime_HeapStd_Handle xdc_runtime_HeapStd_create( const xdc_runtime_HeapStd_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    xdc_runtime_HeapStd_Params __prms;
    xdc_runtime_HeapStd_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_HeapStd_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_HeapStd_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_HeapStd_Instance_init__E(__newobj, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, __newobj, NULL, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void xdc_runtime_HeapStd_construct(xdc_runtime_HeapStd_Struct *__obj, const xdc_runtime_HeapStd_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    xdc_runtime_HeapStd_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&xdc_runtime_HeapStd_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_HeapStd_Params), __eb);
    /* module-specific initialization */
    iStat = xdc_runtime_HeapStd_Instance_init__E((xdc_Ptr)__obj, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, (xdc_Ptr)__obj, NULL, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void xdc_runtime_HeapStd_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, obj, NULL, 0, TRUE);
}

/* destruct */
void xdc_runtime_HeapStd_destruct(xdc_runtime_HeapStd_Struct *obj)
{
    xdc_runtime_HeapStd_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void xdc_runtime_HeapStd_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, *((xdc_runtime_HeapStd_Object**)instp), NULL, 0, FALSE);
    *((xdc_runtime_HeapStd_Handle*)instp) = NULL;
}

/* delete */
void xdc_runtime_HeapStd_delete(xdc_runtime_HeapStd_Handle *instp)
{
    xdc_runtime_HeapStd_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_HeapStd_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle ADCtask = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle UARTtask = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle SwitchRead = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[2]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle ADCSem = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Timer_Handle timer0 = (ti_sysbios_hal_Timer_Handle)((ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle UARTSem = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle SRSem = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[2]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_hal_Hwi_Handle HWI_TIMER2 = (ti_sysbios_hal_Hwi_Handle)((ti_sysbios_hal_Hwi_Handle)&ti_sysbios_hal_Hwi_Object__table__V[0]);

