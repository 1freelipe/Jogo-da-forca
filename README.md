# 🔤 Jogo da Forca em C++

Este é um clássico **Jogo da Forca**, feito em C++, jogável diretamente no terminal. Um jogador digita a palavra secreta, e o outro tenta adivinhar, letra por letra, antes que acabem as chances.

---

## 📸 Demonstração

### 🎲 Início do jogo
<pre>
*-------------*
*JOGO DA FORCA*
*-------------*
Digite uma palavra:
</pre>

> Após isso, a tela é limpa e o jogo começa!

### 🎯 Durante o jogo
<pre>
Chances restantes: 5
Palavra secreta: -a--a--
Digite uma letra:
</pre>

### 🏁 Fim de jogo
- Vitória:
<pre>
Você venceu, parabéns!!
A palavra era: palavra
</pre>

- Derrota:
<pre>
Você perdeu!! Mais sorte na próxima.
A palavra era: palavra
</pre>

---

## 🎮 Como Jogar

1. O primeiro jogador digita a palavra secreta.
2. A tela é limpa (`system("cls")`) para ocultar a palavra.
3. O segundo jogador tenta adivinhar a palavra:
   - Digitando uma letra por vez.
   - Com 6 chances ao todo.
4. A cada letra correta, os espaços correspondentes são revelados.
5. O jogo termina quando:
   - O jogador descobre toda a palavra (vitória), ou
   - As chances acabam (derrota).

---

## 📋 Funcionalidades

- Jogo local entre duas pessoas (um escolhe a palavra, o outro tenta adivinhar)
- Verificação de acertos e erros
- Atualização da palavra parcialmente revelada
- Mensagens de fim de jogo personalizadas
- Uso de `system("cls")` para ocultar a palavra (em sistemas Windows)
