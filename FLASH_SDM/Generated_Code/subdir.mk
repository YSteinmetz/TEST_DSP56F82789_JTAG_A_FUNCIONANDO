################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Generated_Code/Bits1.c" \
"../Generated_Code/Bits2.c" \
"../Generated_Code/Cpu.c" \
"../Generated_Code/TI1.c" \
"../Generated_Code/Vectors.c" \

C_SRCS += \
../Generated_Code/Bits1.c \
../Generated_Code/Bits2.c \
../Generated_Code/Cpu.c \
../Generated_Code/TI1.c \
../Generated_Code/Vectors.c \

OBJS += \
./Generated_Code/Bits1_c.obj \
./Generated_Code/Bits2_c.obj \
./Generated_Code/Cpu_c.obj \
./Generated_Code/TI1_c.obj \
./Generated_Code/Vectors_c.obj \

OBJS_QUOTED += \
"./Generated_Code/Bits1_c.obj" \
"./Generated_Code/Bits2_c.obj" \
"./Generated_Code/Cpu_c.obj" \
"./Generated_Code/TI1_c.obj" \
"./Generated_Code/Vectors_c.obj" \

C_DEPS += \
./Generated_Code/Bits1_c.d \
./Generated_Code/Bits2_c.d \
./Generated_Code/Cpu_c.d \
./Generated_Code/TI1_c.d \
./Generated_Code/Vectors_c.d \

C_DEPS_QUOTED += \
"./Generated_Code/Bits1_c.d" \
"./Generated_Code/Bits2_c.d" \
"./Generated_Code/Cpu_c.d" \
"./Generated_Code/TI1_c.d" \
"./Generated_Code/Vectors_c.d" \

OBJS_OS_FORMAT += \
./Generated_Code/Bits1_c.obj \
./Generated_Code/Bits2_c.obj \
./Generated_Code/Cpu_c.obj \
./Generated_Code/TI1_c.obj \
./Generated_Code/Vectors_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/Bits1_c.obj: ../Generated_Code/Bits1.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: DSC Compiler'
	"$(DSC_ToolsDirEnv)/mwcc56800e" -c @@"Generated_Code/Bits1.args" -o "Generated_Code/Bits1_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/%.d: ../Generated_Code/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Generated_Code/Bits2_c.obj: ../Generated_Code/Bits2.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: DSC Compiler'
	"$(DSC_ToolsDirEnv)/mwcc56800e" -c @@"Generated_Code/Bits2.args" -o "Generated_Code/Bits2_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Cpu_c.obj: ../Generated_Code/Cpu.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: DSC Compiler'
	"$(DSC_ToolsDirEnv)/mwcc56800e" -c @@"Generated_Code/Cpu.args" -o "Generated_Code/Cpu_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/TI1_c.obj: ../Generated_Code/TI1.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: DSC Compiler'
	"$(DSC_ToolsDirEnv)/mwcc56800e" -c @@"Generated_Code/TI1.args" -o "Generated_Code/TI1_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Generated_Code/Vectors_c.obj: ../Generated_Code/Vectors.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: DSC Compiler'
	"$(DSC_ToolsDirEnv)/mwcc56800e" -c @@"Generated_Code/Vectors.args" -o "Generated_Code/Vectors_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '


