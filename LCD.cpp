#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

String teks = "Universitas Teknologi Yogyakarta ";

void setup() {
  lcd.init();
  lcd.backlight();

  // Animasi pembuka
  lcd.setCursor(0, 0);
  lcd.print("   SELAMAT   ");
  lcd.setCursor(0, 1);
  lcd.print("   DATANG    ");
  delay(2000);

  lcd.clear();

  // Loading sederhana
  lcd.setCursor(0, 0);
  lcd.print("Loading");
  for (int i = 0; i < 10; i++) {
    lcd.print(".");
    delay(300);
  }

  delay(1000);
  lcd.clear();
}

void loop() {

  // Header tetap
  lcd.setCursor(0, 0);
  lcd.print("=== UTY ====");

  // Running text
  for (int i = 0; i < teks.length() - 15; i++) {
    lcd.setCursor(0, 1);
    lcd.print(teks.substring(i, i + 16));
    delay(300);
  }

  // Tampilan kedua
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fakultas Sains");
  lcd.setCursor(0, 1);
  lcd.print("& Teknologi");
  delay(3000);

  // Efek blink
  for (int i = 0; i < 3; i++) {
    lcd.noBacklight();
    delay(300);
    lcd.backlight();
    delay(300);
  }

  lcd.clear();

  // Pesan motivasi
  lcd.setCursor(0, 0);
  lcd.print("Belajar Arduino");
  lcd.setCursor(0, 1);
  lcd.print("Berhasil!");
  delay(3000);

  lcd.clear();
}