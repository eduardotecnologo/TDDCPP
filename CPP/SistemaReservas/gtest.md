# Google Test no Projeto SistemaReservas

## Estrutura de Pastas

```
SistemaReservas/
├── CMakeLists.txt
├── test/
│   └── main.cpp
└── build/
    ├── CMakeCache.txt
    ├── CMakeFiles/
    ├── Makefile
    ├── cmake_install.cmake
    └── sistema_reservas_test   # Executável dos testes
```

### O que significa cada item?
- **CMakeCache.txt**: Arquivo de cache do CMake, guarda configurações detectadas e opções de build.
- **CMakeFiles/**: Pasta interna do CMake, contém arquivos auxiliares para o processo de build.
- **Makefile**: Arquivo gerado pelo CMake que descreve como compilar o projeto usando o `make`.
- **cmake_install.cmake**: Script auxiliar para instalação do projeto (usado se rodar `make install`).
- **sistema_reservas_test**: O executável gerado a partir do seu código de teste. Execute para rodar os testes.

## Por que usar a pasta `build`?
- **Organização:** Mantém os arquivos gerados separados do código-fonte.
- **Limpeza:** Para limpar tudo, basta apagar a pasta `build`.
- **Multi-configuração:** Permite ter diferentes builds (ex: debug, release) em pastas separadas.

## Como usar o Google Test neste projeto

1. **Entre na pasta SistemaReservas:**
   ```sh
   cd SistemaReservas
   ```
2. **Crie a pasta de build e compile:**
   ```sh
   mkdir build
   cd build
   cmake ..
   make
   ```
3. **Rode os testes:**
   ```sh
   ./sistema_reservas_test
   ```

## Exemplo de teste
```cpp
#include <gtest/gtest.h>

TEST(ExemploTest, TesteSimples) {
    EXPECT_EQ(1 + 1, 2);
}
```

Se quiser adicionar mais testes, crie novos arquivos `.cpp` dentro da pasta `test` e adicione ao `CMakeLists.txt`. 