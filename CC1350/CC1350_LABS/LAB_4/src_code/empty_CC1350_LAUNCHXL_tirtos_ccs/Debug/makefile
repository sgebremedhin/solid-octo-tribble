################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS

GEN_OPTS__FLAG := --cmd_file="C:/Users/ggmar/workspace_v9_2/tirtos_builds_CC1350_LAUNCHXL_release_ccs/Debug/configPkg/compiler.opt"
GEN_CMDS__FLAG := -l"C:/Users/ggmar/workspace_v9_2/tirtos_builds_CC1350_LAUNCHXL_release_ccs/Debug/configPkg/linker.cmd"

ORDERED_OBJS += \
"./CC1350_LAUNCHXL.obj" \
"./CC1350_LAUNCHXL_fxns.obj" \
"./ccfg.obj" \
"./empty.obj" \
"./main_tirtos.obj" \
"./scif.obj" \
"./scif_framework.obj" \
"./scif_osal_tirtos.obj" \
"../CC1350_LAUNCHXL_TIRTOS.cmd" \
-l"ti/display/lib/display.aem3" \
-l"ti/grlib/lib/ccs/m3/grlib.a" \
-l"third_party/spiffs/lib/ccs/m3/spiffs_cc26xx.a" \
-l"ti/drivers/rf/lib/rf_multiMode_cc13x0.aem3" \
-l"ti/drivers/lib/drivers_cc13x0.aem3" \
-l"ti/dpl/lib/dpl_cc13x0.aem3" \
$(GEN_CMDS__FLAG) \
-l"ti/devices/cc13x0/driverlib/bin/ccs/driverlib.lib" \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
empty_CC1350_LAUNCHXL_tirtos_ccs.out \

EXE_OUTPUTS__QUOTED += \
"empty_CC1350_LAUNCHXL_tirtos_ccs.out" \

BIN_OUTPUTS += \
empty_CC1350_LAUNCHXL_tirtos_ccs.hex \

BIN_OUTPUTS__QUOTED += \
"empty_CC1350_LAUNCHXL_tirtos_ccs.hex" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "empty_CC1350_LAUNCHXL_tirtos_ccs.out"

dependents:
	-cd C:/Users/ggmar/workspace_v9_2/tirtos_builds_CC1350_LAUNCHXL_release_ccs/Debug && $(MAKE) all

# Tool invocations
empty_CC1350_LAUNCHXL_tirtos_ccs.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS) C:/Users/ggmar/workspace_v9_2/tirtos_builds_CC1350_LAUNCHXL_release_ccs/Debug/tirtos_builds_CC1350_LAUNCHXL_release_ccs.lib
	@echo 'Building target: "$@"'
	@echo 'Invoking: ARM Linker'
	"C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/bin/armcl" -mv7M3 --code_state=16 --float_support=none -me --define=DeviceFamily_CC13X0 -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on -z -m"empty_CC1350_LAUNCHXL_tirtos_ccs.map" -i"C:/ti/simplelink_cc13x0_sdk_3_20_00_23/source" -i"C:/ti/simplelink_cc13x0_sdk_3_20_00_23/kernel/tirtos/packages" -i"C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/lib" --diag_wrap=off --display_error_number --warn_sections --xml_link_info="empty_CC1350_LAUNCHXL_tirtos_ccs_linkInfo.xml" --rom_model -o "empty_CC1350_LAUNCHXL_tirtos_ccs.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

empty_CC1350_LAUNCHXL_tirtos_ccs.hex: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: ARM Hex Utility'
	"C:/ti/ccs920/ccs/tools/compiler/ti-cgt-arm_18.12.3.LTS/bin/armhex"  -o "empty_CC1350_LAUNCHXL_tirtos_ccs.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "CC1350_LAUNCHXL.obj" "CC1350_LAUNCHXL_fxns.obj" "ccfg.obj" "empty.obj" "main_tirtos.obj" "scif.obj" "scif_framework.obj" "scif_osal_tirtos.obj" 
	-$(RM) "CC1350_LAUNCHXL.d" "CC1350_LAUNCHXL_fxns.d" "ccfg.d" "empty.d" "main_tirtos.d" "scif.d" "scif_framework.d" "scif_osal_tirtos.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:
C:/Users/ggmar/workspace_v9_2/tirtos_builds_CC1350_LAUNCHXL_release_ccs/Debug/tirtos_builds_CC1350_LAUNCHXL_release_ccs.lib:

-include ../makefile.targets

