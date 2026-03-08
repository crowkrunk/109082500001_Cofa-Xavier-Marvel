package main

import "fmt"

func main() {

	var grams, kgprice, gramsprice, price int64

	fmt.Scan(&grams)

	kgprice = 10000 * (grams / 1000)

	if (grams % 1000) >= 500 {
		gramsprice = (grams % 1000) * 5
	} else {
		gramsprice = (grams % 1000) * 15
	}

	if (grams / 1000) >= 10 {
		price = kgprice
	} else {
		price = kgprice + gramsprice
	}

	fmt.Print(price)
}
