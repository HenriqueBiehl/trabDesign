# Definições de variáveis
CXX = g++
CXXFLAGS = -Wall -g -I./include

# Listar os arquivos fonte e os objetos correspondentes
SOURCES = $(wildcard src/*.cpp)
OBJECTS = $(SOURCES:src/%.cpp=%.o)

# Nome do executável
EXEC = sistemaEcomp

# Regras de compilação

# Regra para compilar o projeto
all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regra para compilar os arquivos .cpp em .o
%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar os arquivos gerados
clean:
	rm -f $(OBJECTS) $(EXEC)

# Forçar a recompilação
rebuild: clean all

# Regra para exibir os arquivos compilados
.PHONY: all clean rebuild
