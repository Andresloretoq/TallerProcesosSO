# Compila mod_loreto (main) + modulo (librería simple)
CC=gcc
CFLAGS=-Wall -Wextra -O2
LDFLAGS=
TARGET=mod_loreto
OBJS=mod_loreto.o modulo.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

mod_loreto.o: mod_loreto.c modulo.h
	$(CC) $(CFLAGS) -c mod_loreto.c

modulo.o: modulo.c modulo.h
	$(CC) $(CFLAGS) -c modulo.c

clean:
	rm -f $(OBJS) $(TARGET)

