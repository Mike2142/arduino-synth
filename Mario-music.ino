// Даём понятное имя пину с пищалкой
constexpr int BUZZER_PIN = 3;
// Даём понятное имя пину с кнопкой
constexpr int BUTTON_PIN = 4;
 
// Создаём звуковой шрифт из нот со своими частотами
constexpr int NOTE_B3 = 247;
constexpr int NOTE_C4 = 262;
constexpr int NOTE_D4 = 294;
constexpr int NOTE_E4 = 330;
constexpr int NOTE_F4 = 349;
constexpr int NOTE_G4 = 392;
constexpr int NOTE_A4 = 440;
constexpr int NOTE_B4 = 494;
constexpr int NOTE_C5 = 523;
 
void setup() {
  // Настраиваем пин с пищалкой в режим выхода
  pinMode(BUZZER_PIN, OUTPUT);
  // Настраиваем пин с кнопкой в режим входа с подтяжкой к питанию
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}
 
void loop() {
  // Считываем нажатие с кнопки
  bool buttonState = !digitalRead(BUTTON_PIN);
  // По нажатию кнопки проигрываем мелодию из последовательности нот
  if (buttonState) {
    tone(BUZZER_PIN, NOTE_E4, 100);
    delay(150);
    tone(BUZZER_PIN, NOTE_E4, 100);
    delay(300);
    tone(BUZZER_PIN, NOTE_E4, 100);
    delay(300);
    tone(BUZZER_PIN, NOTE_C4, 100);
    delay(100);
    tone(BUZZER_PIN, NOTE_E4, 100);
    delay(300);
    tone(BUZZER_PIN, NOTE_G4, 100);
    delay(550);
    tone(BUZZER_PIN, NOTE_C5, 100);
    delay(575);
  }
}