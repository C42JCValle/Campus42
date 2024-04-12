# Nombre de la librería
LIBRARY_NAME = libft

# Lista de archivos fuente
SOURCE_FILES = ft_strlcat.c ft_strlcpy.c	ft_isalnum.c ft_isalpha.c ft_isascii.c	ft_isdigit.c	ft_isprint.c	ft_memcpy.c ft_memset.c ft_strchr.c ft_strlen.c ft_strncmp.c	ft_strrchr.c	ft_toupper.c	ft_tolower.c	ft_bzero.c

# Archivo de encabezado
HEADER_FILE = $(LIBRARY_NAME).h

# Directorio de compilación
BUILD_DIR = build

# Objetos de los archivos fuente
OBJECTS = $(patsubst %.c,$(BUILD_DIR)/%.o,$(notdir $(SOURCE_FILES)))

# Regla para construir la librería
$(LIBRARY_NAME).a: $(OBJECTS)
	ar rcs $@ $^

# Regla para generar archivos objeto
$(BUILD_DIR)/%.o: %.c $(HEADER_FILE)
	mkdir -p $(BUILD_DIR)
	$(CC) -c $< -o $@ -I.

# Regla para copiar el archivo de encabezado
$(HEADER_FILE): 
	cp $(HEADER_FILE) $(BUILD_DIR)/$(HEADER_FILE)

# Regla para limpiar los archivos generados
clean:
	rm -rf $(LIBRARY_NAME).a $(BUILD_DIR)
