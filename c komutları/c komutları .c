
#include <stdio.h> // Standart giriş/çıkış kütüphanesi

int main() {
    // main fonksiyonu, programın başlangıç noktasıdır
    
    printf("Muter!\n"); // Ekrana "Muter!" yazdırır
    
    int sayi1 = 10; // İnteger (tam sayı) tipinde bir değişken tanımlar ve 10 değerini atar
    int sayi2 = 5;
    int toplam = sayi1 + sayi2; // İki sayının toplamını hesaplar
    
    printf("Toplam: %d\n", toplam); // Toplamı ekrana yazdırır
    
    return 0; // Programın başarıyla sonlandığını belirtir
}
```

Bu kod örneği basit bir C programını temsil eder. İşte kodun adım adım açıklamaları:

1. `#include <stdio.h>`: Bu satır, standart giriş/çıkış işlemlerini yapabilmek için "stdio.h" başlık dosyasını programımıza dahil eder.

2. `int main() { ... }`: `main` fonksiyonu, C programının başlangıç noktasını temsil eder. Tüm kodlar bu fonksiyon içinde yer alır.

3. `printf("Merhaba Dünya!\n");`: `printf` işlevi, ekrana metin çıktısı yazdırmak için kullanılır. Bu satır, "Merhaba Dünya!" metnini ekrana yazdırır. `\n` karakteri yeni satır atlamak için kullanılır.

4. `int sayi1 = 10;`: `int` veri türü, tam sayıları temsil etmek için kullanılır. Bu satır, `sayi1` adında bir değişken tanımlar ve ona 10 değerini atar.

5. `int sayi2 = 5;`: Benzer şekilde, `sayi2` adında bir değişken tanımlar ve ona 5 değerini atar.

6. `int toplam = sayi1 + sayi2;`: Bu satırda, `toplam` adında bir değişken tanımlar ve `sayi1` ve `sayi2` değişkenlerinin toplamını hesaplar.

7. `printf("Toplam: %d\n", toplam);`: Bu satır, `toplam` değişkeninin değerini ekrana yazdırır. `%d` yer tutucusu, tam sayı değerlerini yerine koyar.

8. `return 0;`: Bu satır, programın başarıyla sonlandığını belirtir ve 0 değerini döndürür. Başarısızlık durumunda farklı bir değer döndürülebilir.

Bu basit C programı, "Muter!" metnini ekrana yazdırır ve ardından iki sayının toplamını hesaplayarak sonucu

 ekrana yazdırır. Bu örnek, C dilinin temellerini anlamak için iyi bir başlangıç noktası olabilir.