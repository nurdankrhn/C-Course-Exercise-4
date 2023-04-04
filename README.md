# C-Course-Exercise-4


/*****exercise4.1*****/

:pushpin:C'de bir yazının başındaki ve sonundaki boşluk karakterlerini atan hazır fonksiyon yoktur. Genellikle bu tür fonksiyonlar diğer programlama dillerinin kütüphanelerinde "trim" ya da "strip" isimleriyle bulunmaktadır. Bu işi yapan fonksiyonu aşağıda belirtildiği gibi yazınız:

- Fonksiyonun prototipi şöyledir:

char *trim(char *str);

fonksiyon yazının başındaki sonundaki boşluk karakterlerini atmaktadır. Fonksiyon birinci parametresiyle belirtilen adresin aynısına geri dönmektedir. Yazdığınız fonksiyonu aşağıdaki gibi bir kodla test edebilrisiniz. 

#include <stdio.h>

char *trim(char *str);

int main(void)
{

	char s[] = "    \t     \t   ali veli selami     \t    ";

	trim(s);

	printf(":%s:\n", s);		/* :ali veli selami: */

	return 0;
}

/*****exercise4.2*****/

:pushpin:Bir int dizide tekleri başa çiftleri sona toplayan odd_even isimli fonksiyonu yazınız. Fonksiyonun prototipi şöyledir:

void odd_even(int *pi, size_t size);

Dizide tekler ve çiftlerin asıl değerlerle aynı sırada olması gerekmemektedir.

#include <stdio.h>

void odd_even(int *pi, size_t size);

int main(void)
{

	int a[10] = { 3, 12, 45, 32, 89, 90, 46, 21, 65, 68 };
	int i;

	odd_ecev(a);

	for (i = 0; i < 10; ++i)			
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}

/*****exercise4.3*****/

:pushpin:İstatistike bir grup sayının modu demek en çok yinelenen değer demektir. Eğer mod birden fazla ise bunun herhangi birisi mod olarak kullanılabilmektedir. Bir grup int sayının modunu bulan aşağdaki prototipe uygun fonskiyonu yazınız:

int mode(int *pi, size_t size);

Fonksiyonun birinci parametresi dizinin başlangıç adresini ikinci parametresi dizinin uzunluğunu belirtir. Fonksiyon mode değerine geri dönmektedir. Aşağdaki gibi bir kodla test edebilirsiniz:

#include <stdio.h>

int mode(int *pi, size_t size);

int main(void)
{

	int a[10] = {3, 5, 6, 3, 5, 3, 7, 8, 7, 3};
	int result;

	result = mode(a, 10);
	printf("%d\n", result);		/* 3 */

	return 0;
}

/*****exercise4.4*****/

:pushpin:Aralarında yalnızca bir boşluk karakteri olan 2 kelimelik yazının kelimelerinin yerlerini değiştiren swap_words isimli fonksiyonu yazınız. Örneğin fonksiyon "the Beatles" gibi bir yazıyı "Beatles the" yazısına dönüştürmelidir. Fonksiyonun prototipi şöyledir:

char *swap_words(char *str);

Fonksiyon iki sözcükten oluşan yazının bulunduğu dizinin adresini alacak ve dizi üzerinde (in-place) yer değiştirme yapacaktır. Fonksiyon parametresiyle verilen adresin aynısına geri dönmelidir. Fonksiyon yazıdaki sözcükler üzerinde herhangi bir kontrol yapmayacaktır. Fonksiyonu bir kodla test ediniz.

/*****exercise4.5*****/

:pushpin:Aşağıdaki erase_char fonksiyonu yazınız:

char *erase_char(char *str, int ch);

Fonksiyon yazının içinde bulunduğu dizinin adresini alarak yazı içerisinde ikinci parametresi ile belirtilen tüm karakterleri siler. Birinci parametresiyle belirtilen adresin aynısına geri döner. Aşağıdaki gibi bir kodla test işlemini yapabilirsiniz:

#include <stdio.h>

char *erase_char(char *str, int ch);

int main(void)
{

	char s[] = "ankara adana";

	eracse_char(s, 'a');

	puts(s);		/* nkr dn */

	return 0;
}

/*****exercise4.6*****/

:pushpin:Bir yazıdaki boşluk karakterleriyle ayrılmış olan sözcükleri ters sırada ekrana (stdout dosyasına) yazdıran disp_rev_words isimli fonksiyonu aşağıdaki prototipe uygun biçimde yazınız:

void disp_rev_words(char *str);

Yazı içerisinde yalnızca alfabetik karakterler kullanılmaktadır. Örneğin "bugun    hava cok   guzel" yazısı "guzel cok hava bugun" biçiminde yazdırılacaktır. Orijinal yazıda sözcükler arasında birden fazla boşluk karakteri olabilir. Ancak ekrana (stdout dosyasına) yazdırılan yazıda sözcükler arasında tek bir SPACE karakteri olmalıdır. Fonksiyonu bir test koduyla test ediniz.




