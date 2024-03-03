a = int(input("Enter a number: "))

dzielnik = 2
while (dzielnik <= a /2):
    if (a % dzielnik == 0):
        print("Podana liczba jest liczba zlozona")
        exit(0)
    dzielnik+=1

print("Podana liczba jest liczba pierwsza")