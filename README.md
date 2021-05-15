![alt text](https://github.com/smarkuck/Two-channel-music-mixer-old-project-/blob/master/example.png?raw=true)

#Funkcjonalności miksera:
- looping
- detekcja BPM
- kontrola tempa utworu
- EQ
- crossfader
- mozliwość zapisu otrzymanego rezultatu w formacie mp3
- możliwość zapisania wszystkich wykonywanych akcji i ponowne wykonanie ich przez aplikacje

Mikser został napisany w środowisku QtCreator.

#Wykorzystane biblioteki w projekcie:
- QCustomPlot - widżet do Qt, wykorzystany do rysowania wykresów dźwięku 
- TagLib - biblioteka dostarczająca informacje o wczytanym do miksera utworze
- SoundTouch - biblioteka wykorzystana do detekcji BPM

#Filtry częstotliwościowe użyte w mikserze opierają się na:
- [Audio EQ Cookbook](http://www.musicdsp.org/files/Audio-EQ-Cookbook.txt)
- [Przykłady](http://blog.bjornroche.com/2012/08/basic-audio-eqs.html)

Diagram UML:
![PlantUML model](http://www.plantuml.com/plantuml/png/fLXHRziu4dxth-3JGVQwm9hj5OVchjWqYMy395Uxtjq-54L0IsERjnIfa9GT8-ZzzXCvaaEfbD9k_I1Jttmp7973uP2_6CkqBNCn6gM26KDk6PSVkSpKOJHwQXFruWLPgL9cXLOf6CFbzgJ17meceRBG8NYbHahUa1tR0w7aRQDudbgkP5ojbY6ph-TBRjAkbnwCT7RrK2XjdN978PHqX-1nD2BLxyNl_CsRG6jISiIzNukJNnDY6W3bozzs6bX6xEwk8y5ElGus6mMUWoOPiyotuYYjuNzhLknuQXRy8MV5jOLyGZ9kqkjy-ub-Hf8R3aHFqF9YyOvfGoPMi_JFXUBIddhw0rAhz3ypLQu5l2KFi-cH3cZH7ZKwFSuwQckcRvGgLYxUxcOzUYYjEiL6ZuqhcVLQSB9A7oa37j113sZZ0UttWFPxuFI7A1iknFJeddtZXmp_r_50WosrhDgVNdtk4r6KnIn_y9pf4Vy7IRHXKLm6Foq_0Ci-QcxXHgL_4b4zQWay58Adt0Ph9rb-vDaMB9aKJ8Eqv5_avp6ozufdn5Ic2x-0V1WdoulIM9KlXAfKqbDxG8K-e_E_m9dnAB0Z5ClEouohPBcosgMSQfn1iXp6CHOTf1cs1ynMlwbv9M-H_nEnYUIvLlcpT9-SCJz4V0Y8QxScmLuoorP2sIGqidLZTI5uHSYIAbREryPMTEj6ohAr038fckQKS6bzehcM6JoC-xkWlNtG7-Z4W83KujpquEsEKwsCcRCCzCMEoIqaplIUYR9dZfBuR7JWmv2n7B8XyOvlTxtoq3fznZmTjjz7m251XeupjBBCGh8HYbbIyKH4Ill4IjO1EHvzwTcVSTjqYSNFsFlI5gKb4_RqqiYltr_2dgTG2_6b5c8s8ffPgEtz1BBCwzB0r53DMfUR3UZP9_htrvzZ4bfBsjcgitydo_Vh_q8QfYnP2b5OFQurgsfcuQkPmZrdKPJMAFf9cF-hiUMxeuLphTcHA3yGZGaSgRdIERDau_zg2Mx-4sBTNurnQOF8RqO7mukLCjtLOvJSbnNrzIldn4APsPIq0Jfkwwh3rJ8Qkq5m3Z8mF8SfwFaG8tI4Fky9_GPNwB0lGvIz4cKEo1cc39gna1SAAKECY96GKmXsJ5fQ6bAbCroDxOBy4NTtOtMPMf93VhKS1SloibBCG9D9XWsKhPKIX9j5rGzaBMZ5NIfmrKyBVhUuRRtxeZnSmEiYntVtIHeEN6ONIXhx1FgrVmDoQtVNSWNfaqHKlLsxGhCQYX35AYuqaTh6CmHSnRjYUI7088ZfhD2mTnwUksy91CWl0BAMx-O9kTV0H3tJYFWHTR5wMpNkGoo7h1UZ8UX2rADXhyxa7sxgGz3fVmqwVKH7tVmoINTCOfBgaL2K-7bpctFmwcV4LNl70EJcL3wlmBO5M1F7O2wtBXlj8IPfAsm4svgcT4NeL8JvAD1bWSaqoEyOKGkcMHxYOL0XVe-PJs3F63yHGVKP8UoTMYXqAu2pKZFq9G0ngoA4yU8U5SGzjLiiD_l6uBw3bMp378zQ7rdlkLVBf0QC3_afmV3w6zoFO_mRTVYzQAlqyIxLGNu3ynOoNkR3HblKRxJxQnNWWrP3OgzDJ9r8R0WJB0om69LppN8m8TtiG6pcN5ZGZShyvocfczifQGfoUop20GzjP60XjLM6x1IpFbSbJIhhoEQ2RRtCHLueA-NNqa1i-McNQbnpK6ZXeBa5FAQSIWDqltahwbXzGhhLep-0-DIGX6Z1IWCOdk5UjK2uWwwiAhu2RrGFY7cYLsIPZWjnCRT4Mx2NJQBlAt11kaEAexLKCsv2l3jZinX8O-3B6FWgYSxqB0xJEFmo3h-AHT_iRlOwZlyZ3lTOeL4u1YBp-yxW6bZspg_JP7pMYa79pSvNC9Kg6WvhnzwZLLo4jMAVp1GmVEJhgn2_j6yw7r6bkMsf5zZR-eGoAAIjpVE3A_dSXtSt5EndQ3lfwKMePfoHKC6ac4r9GQTa3TkPVuPEuAdcfbA3xApjN2bbvThPw2_UaM2IyhlTx2ydgS08_IuZFt9RqrJYPo5MIWTy2Q-i7yEwawKMQz5EaVeLk0Ka9aj_zpednRWx_Svuk_jSbGPkrHwkzY1jShenNgKWAxmqA9WWqRV7NVM51cD-GFy3263ckppeNe657-KWLI3IVw61Ozwv-dzyzjQ-Cw0dpIIkKvo0AHbUTAsu_CZslmBBG2TawQAAJ7myaTOjZb1cW1WmmJk9Et94uFIwEHPpqoYyJY5kS0uxRk5EAcxWpkeIEj262UCmeGxLCtSd8vyuHmJFqSxeBo2pCXV_1m00)
