################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/GPIO.c" \
"../Sources/Main_SM.c" \
"../Sources/PIT.c" \
"../Sources/PWM.c" \
"../Sources/USSensor_SM.c" \
"../Sources/main.c" \
"../Sources/sa_mtb.c" \

C_SRCS += \
../Sources/GPIO.c \
../Sources/Main_SM.c \
../Sources/PIT.c \
../Sources/PWM.c \
../Sources/USSensor_SM.c \
../Sources/main.c \
../Sources/sa_mtb.c \

OBJS += \
./Sources/GPIO.o \
./Sources/Main_SM.o \
./Sources/PIT.o \
./Sources/PWM.o \
./Sources/USSensor_SM.o \
./Sources/main.o \
./Sources/sa_mtb.o \

C_DEPS += \
./Sources/GPIO.d \
./Sources/Main_SM.d \
./Sources/PIT.d \
./Sources/PWM.d \
./Sources/USSensor_SM.d \
./Sources/main.d \
./Sources/sa_mtb.d \

OBJS_QUOTED += \
"./Sources/GPIO.o" \
"./Sources/Main_SM.o" \
"./Sources/PIT.o" \
"./Sources/PWM.o" \
"./Sources/USSensor_SM.o" \
"./Sources/main.o" \
"./Sources/sa_mtb.o" \

C_DEPS_QUOTED += \
"./Sources/GPIO.d" \
"./Sources/Main_SM.d" \
"./Sources/PIT.d" \
"./Sources/PWM.d" \
"./Sources/USSensor_SM.d" \
"./Sources/main.d" \
"./Sources/sa_mtb.d" \

OBJS_OS_FORMAT += \
./Sources/GPIO.o \
./Sources/Main_SM.o \
./Sources/PIT.o \
./Sources/PWM.o \
./Sources/USSensor_SM.o \
./Sources/main.o \
./Sources/sa_mtb.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/GPIO.o: ../Sources/GPIO.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/GPIO.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/GPIO.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/Main_SM.o: ../Sources/Main_SM.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/Main_SM.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/Main_SM.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/PIT.o: ../Sources/PIT.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/PIT.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/PIT.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/PWM.o: ../Sources/PWM.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/PWM.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/PWM.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/USSensor_SM.o: ../Sources/USSensor_SM.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/USSensor_SM.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/USSensor_SM.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/main.o: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/main.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/sa_mtb.o: ../Sources/sa_mtb.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/sa_mtb.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/sa_mtb.o"
	@echo 'Finished building: $<'
	@echo ' '


