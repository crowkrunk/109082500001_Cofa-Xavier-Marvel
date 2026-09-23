package main

import "fmt"

type Nasabah struct {
	Kode string
	Nama string
	Bank string
	Rek  int
}

type TabNasabah []Nasabah

func addNasabah(T *TabNasabah, N int) {
	if len(*T) >= N {
		fmt.Println("data penuh")
		return
	}
	var kode, nama, bank string
	var rek int
	fmt.Scanln(&kode, &nama, &bank, &rek)
	*T = append(*T, Nasabah{Kode: kode, Nama: nama, Bank: bank, Rek: rek})
}

func cetak(T TabNasabah, N int, X string) {
	for _, n := range T {
		if n.Bank == X {
			fmt.Printf("Kode: %s, Nasabah: %s, Bank: %s, Rek: %d\n", n.Kode, n.Nama, n.Bank, n.Rek)
		}
	}
}

func main() {
	var T TabNasabah
	N := 10

	for i := 0; i < 10; i++ {
		addNasabah(&T, N)
	}

	fmt.Println("Customers from Mandiri:")
	cetak(T, N, "Mandiri")
}
