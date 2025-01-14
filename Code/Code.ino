/*
	  Programador...............: (c) Tiago Machado
    Data......................: 07/01/2025
    Observações...............: Uma sequência luminosaa com Leds.
*/

  const byte pinosLeds[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; // Pinos conectados aos LEDs

  void setup() {
    for (byte indice = 0; indice <= 9; indice++) {
      pinMode(pinosLeds[indice], OUTPUT); // Configura os pinos como saída
  }
}

  void loop() {
  // Acende os LEDs em ordem decrescente
    for (int indice = 9; indice >= 0; indice--) {
      digitalWrite(pinosLeds[indice], HIGH); // Liga o LED
      delay(250); // Aguarda 250ms
      digitalWrite(pinosLeds[indice], LOW); // Desliga o LED
      delay(250); // Aguarda 250ms
  }

    // Acende os LEDs em ordem crescente
    for (int indice = 0; indice <= 9; indice++) {
      digitalWrite(pinosLeds[indice], HIGH); // Liga o LED
      delay(250); // Aguarda 250ms
      digitalWrite(pinosLeds[indice], LOW); // Desliga o LED
      delay(250); // Aguarda 250ms
  }
}