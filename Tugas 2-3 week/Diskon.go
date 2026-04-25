package main

import "fmt"

func diskon(price int, member bool) int {
	if price > 100000 {
		if member {
			return price - (price*10)/100
		} else {
			return price - (price*5)/100
		}
	}
	return price
}

func main() {
	var price int
	var member bool
	fmt.Scan(&price, &member)
	fmt.Print(diskon(price, member))
}
