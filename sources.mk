SRC_DIR = sources
INCLUDE_DIR = includes
CMSIS_CORE_DIR = CMSIS/Core/include
CMSIS_STM32_DIR = CMSIS/STM32F3xx/include

SRC = 							\
$(SRC_DIR)/main.c				\
$(SRC_DIR)/system_stm32f3xx.c

ASM_SRC = 						\
$(SRC_DIR)/startup_stm32f303x8.s

INCLUDES = 				\
-I$(INCLUDE_DIR)		\
-I$(CMSIS_CORE_DIR)		\
-I$(CMSIS_STM32_DIR)