# Como Rodar os Testes 🚦

Bem-vindo(a) ao laboratório de testes do **SistemaReservas**! Aqui você encontra o passo a passo para garantir que tudo está funcionando como deveria. Siga as instruções abaixo e veja a mágica dos testes automatizados acontecer!

---

## Passo a Passo para Rodar os Testes

1. **Gere os arquivos de build**
   
   No terminal, na raiz do projeto:
   ```sh
   cmake -S . -B build
   ```
   _Isso prepara o ambiente de compilação._

2. **Compile o projeto**
   
   Ainda na raiz do projeto:
   ```sh
   cmake --build build
   ```
   _Aqui o código-fonte vira binário e os testes ficam prontos para rodar!_

3. **Execute os testes**
   
   Entre na pasta de build:
   ```sh
   cd build
   ctest --output-on-failure
   ```
   _O CTest vai rodar todos os testes e mostrar detalhes caso algo falhe._

---

## Dica Extra 💡

Se quiser ver a saída "ao vivo" do Google Test, rode diretamente o executável:
```sh
./sistema_reservas_test
```

---

## O que esperar?
- Mensagens de sucesso para cada teste que passar ✅
- Detalhes e rastreamento caso algum teste falhe ❌
- Satisfação ao ver seu código funcionando com qualidade!

---

> **Mantenha este arquivo por perto e compartilhe com quem for contribuir no projeto!**

Boas execuções e bons testes! 🚀 