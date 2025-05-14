# Compilador y flags
CC      = gcc
CFLAGS = -Wall -Wextra -std=c11 -D_POSIX_C_SOURCE=199309L -I tests

# Fuentes de implementación y tests
SRC      := $(wildcard warmup1/*.c)
TEST_SRC := $(wildcard tests/test_*.c)

# Nombre del ejecutable de tests
TARGET   = test_suite

# Regla por defecto: compila y ejecuta todos los tests
all: $(TARGET)

# Cómo generar el binario y ejecutar la suite
$(TARGET): $(SRC) $(TEST_SRC)
	$(CC) $(CFLAGS) $^ -o $@
	./$(TARGET)

# Limpieza de artefactos
clean:
	rm -f $(TARGET)

